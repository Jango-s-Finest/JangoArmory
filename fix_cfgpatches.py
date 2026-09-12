#!/usr/bin/env python3
"""
Sync CfgPatches arrays (weapons, units, glasses, magazines, ammo)
with actual class definitions in the corresponding Cfg sections.

Rules:
  weapons[]   <- top-level class definitions in CfgWeapons
  units[]     <- top-level class definitions in CfgVehicles
  glasses[]   <- top-level class definitions in CfgGlasses
  magazines[] <- top-level class definitions in CfgMagazines
  ammo[]      <- top-level class definitions in CfgAmmo

Forward declarations (class Foo;) are NOT included.
"""

import re, os

BASE = r"C:\Users\Nicholas_Brant\Documents\github\JangoArmory"

SECTION_TO_ARRAY = {
    "CfgWeapons":   "weapons",
    "CfgVehicles":  "units",
    "CfgGlasses":   "glasses",
    "CfgMagazines": "magazines",
    "CfgAmmo":      "ammo",
}

# ---------------------------------------------------------------------------
# Parsing helpers
# ---------------------------------------------------------------------------

def strip_comments(text):
    text = re.sub(r'/\*.*?\*/', ' ', text, flags=re.DOTALL)
    return re.sub(r'//[^\n]*', '', text)


def brace_end(text, start):
    """Return position of } matching { at start-1. 'start' is right after {."""
    d, i = 1, start
    while i < len(text) and d:
        d += (text[i] == '{') - (text[i] == '}')
        i += 1
    return i - 1


def brace_end_raw(text, start):
    """Like brace_end but skips // comments, /* */ comments, and "strings"."""
    d, i = 1, start
    while i < len(text) and d:
        c = text[i]
        if c == '{':
            d += 1; i += 1
        elif c == '}':
            d -= 1; i += 1
        elif c == '"':
            i += 1
            while i < len(text) and text[i] != '"':
                i += 1
            i += 1
        elif c == '/' and i + 1 < len(text) and text[i + 1] == '/':
            while i < len(text) and text[i] != '\n':
                i += 1
        elif c == '/' and i + 1 < len(text) and text[i + 1] == '*':
            i += 2
            while i + 1 < len(text) and not (text[i] == '*' and text[i + 1] == '/'):
                i += 1
            i += 2
        else:
            i += 1
    return i - 1


def top_level_classes(body):
    """
    Return names of all top-level class *definitions* (bodies) in `body`.
    Forward declarations (class Foo;) are excluded.
    """
    result, p = [], 0
    while p < len(body):
        m = re.search(r'\bclass\s+(\w+)', body[p:])
        if not m:
            break
        name, a = m.group(1), p + m.end()
        # skip optional : Parent
        ih = re.match(r'\s*:\s*[\w:]+\s*', body[a:])
        if ih:
            a += ih.end()
        # skip whitespace
        while a < len(body) and body[a] in ' \t\r\n':
            a += 1
        if a >= len(body):
            break
        if body[a] == '{':
            result.append(name)
            p = brace_end(body, a + 1) + 1   # jump past entire class body
        elif body[a] == ';':
            p = a + 1                          # forward declaration – skip
        else:
            p = a + 1
    return result


def section_classes(stripped, section):
    """Top-level class definitions inside the named section in stripped text."""
    d, i = 0, 0
    while i < len(stripped):
        c = stripped[i]
        if c == '{':
            d += 1; i += 1; continue
        if c == '}':
            d -= 1; i += 1; continue
        if d == 0:
            m = re.match(r'class\s+' + re.escape(section) + r'\b', stripped[i:])
            if m:
                a = i + m.end()
                ih = re.match(r'\s*:\s*\w+\s*', stripped[a:])
                if ih:
                    a += ih.end()
                while a < len(stripped) and stripped[a] in ' \t\r\n':
                    a += 1
                if a < len(stripped) and stripped[a] == '{':
                    end = brace_end(stripped, a + 1)
                    return top_level_classes(stripped[a + 1:end])
        i += 1
    return []


# ---------------------------------------------------------------------------
# Locate CfgPatches inner-class body in the *original* (raw) text
# ---------------------------------------------------------------------------

def cfgpatches_inner_range(text):
    """
    Return (inner_body_start, inner_body_end) – the character range of the
    body of the class nested inside CfgPatches.  Returns (None, None) on failure.
    Handles comments between the class name and its opening brace.
    """
    m = re.search(r'\bclass\s+CfgPatches\b', text)
    if not m:
        return None, None

    # Scan forward to the opening '{', skipping comments
    i = m.end()
    while i < len(text):
        c = text[i]
        if c == '{':
            break
        elif c == '/' and i + 1 < len(text) and text[i + 1] == '/':
            while i < len(text) and text[i] != '\n':
                i += 1
        elif c == '/' and i + 1 < len(text) and text[i + 1] == '*':
            i += 2
            while i + 1 < len(text) and not (text[i] == '*' and text[i + 1] == '/'):
                i += 1
            i += 2
        else:
            i += 1
    if i >= len(text):
        return None, None

    cp_body_start = i + 1
    cp_body_end   = brace_end_raw(text, cp_body_start)
    cp_body       = text[cp_body_start:cp_body_end]

    # Find inner class name, then scan forward to its '{' skipping comments
    inner_m = re.search(r'\bclass\s+\w+\b', cp_body)
    if not inner_m:
        return None, None

    j = cp_body_start + inner_m.end()
    while j < len(text):
        c = text[j]
        if c == '{':
            break
        elif c == '/' and j + 1 < len(text) and text[j + 1] == '/':
            while j < len(text) and text[j] != '\n':
                j += 1
        elif c == '/' and j + 1 < len(text) and text[j + 1] == '*':
            j += 2
            while j + 1 < len(text) and not (text[j] == '*' and text[j + 1] == '/'):
                j += 1
            j += 2
        else:
            j += 1
    if j >= len(text):
        return None, None

    inner_body_start = j + 1
    inner_body_end   = brace_end_raw(text, inner_body_start)
    return inner_body_start, inner_body_end


# ---------------------------------------------------------------------------
# Formatting
# ---------------------------------------------------------------------------

def line_indent(text, pos):
    sol = text.rfind('\n', 0, pos) + 1
    return re.match(r'[\t ]*', text[sol:]).group()


def fmt_array(name, classes, indent):
    if not classes:
        return f'{name}[] = {{}}'
    inner = indent + ('\t' if '\t' in indent else '    ')
    items = ',\n'.join(f'{inner}"{c}"' for c in classes)
    return f'{name}[] = {{\n{items}\n{indent}}}'


# ---------------------------------------------------------------------------
# Per-file processing
# ---------------------------------------------------------------------------

def process(path):
    text = open(path, encoding='utf-8', errors='replace').read()
    stripped = strip_comments(text)

    # Determine what each array SHOULD contain
    should = {arr: section_classes(stripped, sec)
              for sec, arr in SECTION_TO_ARRAY.items()}

    # Locate the CfgPatches inner-class body in the raw text
    abs_s, abs_e = cfgpatches_inner_range(text)
    if abs_s is None:
        return False, {'!': 'CfgPatches not found or malformed'}

    modified, changes = text, {}
    # abs_s stays constant; abs_e tracks the current end of inner class body

    # ── Phase 1: update existing arrays ─────────────────────────────────────
    found_arrays = set()
    for arr, want in should.items():
        seg = modified[abs_s:abs_e]

        pat = r'\b' + re.escape(arr) + r'\[\]\s*=\s*\{[^}]*\}'
        m = re.search(pat, seg, re.DOTALL)
        if not m:
            continue

        found_arrays.add(arr)
        have = re.findall(r'"(\w+)"', m.group(0))
        if sorted(have) == sorted(want):
            continue   # already correct

        a_s   = abs_s + m.start()
        a_e   = abs_s + m.end()
        indent = line_indent(modified, a_s)
        new    = fmt_array(arr, want, indent)
        delta  = len(new) - (a_e - a_s)

        modified = modified[:a_s] + new + modified[a_e:]
        abs_e   += delta   # keep end pointer in sync; abs_s never changes

        added   = sorted(set(want) - set(have))
        removed = sorted(set(have) - set(want))
        changes[arr] = (f'+{len(added)} -{len(removed)} entries'
                        + (f'  added={added[:4]}{"…" if len(added)>4 else ""}' if added else '')
                        + (f'  removed={removed[:4]}{"…" if len(removed)>4 else ""}' if removed else ''))

    # ── Phase 2: insert arrays that are missing from CfgPatches ─────────────
    for arr, want in should.items():
        if arr in found_arrays or not want:
            continue

        # Double-check it's really missing (not just found after a Phase-1 shift)
        seg = modified[abs_s:abs_e]
        if re.search(r'\b' + re.escape(arr) + r'\[', seg):
            continue

        # Find indentation: look at the line that holds the closing }
        line_start = modified.rfind('\n', 0, abs_e) + 1
        indent_str = re.match(r'[\t ]*', modified[line_start:]).group()

        insert = indent_str + fmt_array(arr, want, indent_str) + ';\n'
        modified = modified[:line_start] + insert + modified[line_start:]
        abs_e   += len(insert)

        changes[arr] = f'ADDED – {len(want)} classes'

    if modified != text:
        open(path, 'w', encoding='utf-8').write(modified)

    return modified != text, changes


# ---------------------------------------------------------------------------
# Entry point
# ---------------------------------------------------------------------------

def main():
    n_changed, n_warn = 0, 0
    for root, dirs, files in os.walk(BASE):
        dirs[:] = [d for d in dirs if not d.startswith('.')]
        if 'config.cpp' not in files:
            continue
        path = os.path.join(root, 'config.cpp')
        changed, info = process(path)
        rel = os.path.relpath(path, BASE)

        if changed:
            n_changed += 1
            print(f'[CHANGED] {rel}')
            for arr, msg in info.items():
                print(f'          {arr}: {msg}')
        elif any('MISSING' in str(v) or '!' in k for k, v in info.items()):
            n_warn += 1
            print(f'[WARN]    {rel}')
            for arr, msg in info.items():
                if 'MISSING' in str(msg) or '!' in arr:
                    print(f'          {arr}: {msg}')

    print(f'\nDone.  Changed {n_changed} file(s), {n_warn} warning(s).')


if __name__ == '__main__':
    main()
