#!/usr/bin/env python3
import subprocess
import re

def get_changed_files():
    result = subprocess.run(['git', 'status', '--porcelain'], capture_output=True, text=True)
    lines = result.stdout.strip().split('\n')
    changed_files = []
    for line in lines:
        if line.startswith((' M ', 'M ')):
            if line.startswith(' '):
                file_path = line[3:].strip()
            else:
                file_path = line[2:].strip()
            if file_path.endswith('.cpp'):
                changed_files.append(file_path)
    return changed_files

def extract_displaynames_from_diff(file_path):
    result = subprocess.run(['git', 'diff', file_path], capture_output=True, text=True)
    diff_lines = result.stdout.split('\n')
    displaynames = []
    for line in diff_lines:
        if line.startswith('+') and ('displayname' in line.lower() or 'displayName' in line.lower()):
            # Extract the value inside quotes
            match = re.search(r'displayname\s*=\s*["\']([^"\']+)["\']', line, re.IGNORECASE)
            if match:
                displaynames.append(match.group(1))
    return displaynames

def main():
    changed_files = get_changed_files()
    all_displaynames = []
    for file in changed_files:
        displaynames = extract_displaynames_from_diff(file)
        all_displaynames.extend(displaynames)
    
    # Remove duplicates if any
    all_displaynames = list(set(all_displaynames))
    
    # Format for changelog
    changelog_entries = '\n'.join([f'    [*] {name}' for name in all_displaynames])
    
    # Read the current changelog
    with open('steamchangelog.clj', 'r') as f:
        content = f.read()
    
    # Find the start of the section
    start_marker = '[h2]Changed Display Names[/h2]'
    start_index = content.find(start_marker)
    if start_index == -1:
        # Section not found, append at the end
        new_content = content + '\n\n' + start_marker + '\n[list]\n' + changelog_entries + '\n[/list]'
    else:
        # Find the [list] after it
        list_start = content.find('[list]', start_index)
        if list_start == -1:
            print("List not found.")
            return
        
        # Find the [/list] after that
        list_end = content.find('[/list]', list_start)
        if list_end == -1:
            print("End list not found.")
            return
        
        # The content to replace is from list_start to list_end + len('[/list]')
        before = content[:list_start + len('[list]')]
        after = content[list_end:]
        
        new_content = before + '\n' + changelog_entries + '\n' + after
    
    # Write back
    with open('steamchangelog.clj', 'w') as f:
        f.write(new_content)
    
    print("Updated steamchangelog.clj with changed display names.")

if __name__ == '__main__':
    main()