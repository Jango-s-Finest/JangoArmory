#!/usr/bin/env python3
"""
Fix QPATHTOEF calls where the closing ) was written as "
e.g.  QPATHTOEF(addon,path\file.paa"  ->  QPATHTOEF(addon,path\file.paa)
"""
import re, os

BASE = r"C:\Users\Nicholas_Brant\Documents\github\JangoArmory"

# Match QPATHTOEF( ... " where the content contains no ) or " until the bad "
PATTERN = re.compile(r'(QPATHTOEF\([^)"]+)"')

def process(path):
    text = open(path, encoding='utf-8', errors='replace').read()
    new, count = PATTERN.subn(r'\1)', text)
    if count:
        open(path, 'w', encoding='utf-8').write(new)
    return count

def main():
    total = 0
    for root, dirs, files in os.walk(BASE):
        dirs[:] = [d for d in dirs if not d.startswith('.')]
        if 'config.cpp' not in files:
            continue
        path = os.path.join(root, 'config.cpp')
        n = process(path)
        if n:
            print(f'[{n:3d} fix(es)] {os.path.relpath(path, BASE)}')
            total += n
    print(f'\nTotal fixes: {total}')

if __name__ == '__main__':
    main()
