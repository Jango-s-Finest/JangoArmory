import re

def parse_steam_changelog(filename):
    with open(filename, 'r', encoding='utf-8') as f:
        lines = f.readlines()
    
    data = {}
    current_section = None
    current_subsection = None
    in_list = False
    items = []
    
    for line in lines:
        line = line.strip()
        if line.startswith('[h2]') and line.endswith('[/h2]'):
            section = line[4:-5]
            current_section = section
            data[current_section] = {}
            current_subsection = None
        elif line.startswith('[h3]') and line.endswith('[/h3]'):
            subsection = line[4:-5]
            current_subsection = subsection
            data[current_section][current_subsection] = []
        elif line == '[list]':
            in_list = True
            items = []
        elif line == '[/list]':
            in_list = False
            if current_subsection:
                data[current_section][current_subsection] = items
            else:
                data[current_section] = items
        elif in_list and line.startswith('[*] '):
            item = line[4:].rstrip('\n')
            items.append(item)
    
    return data

def generate_discord_changelog(data):
    output = '_______________\n'
    
    subsection_mapping = {
        'Custom Gear': {
            'Added': 'New Gear',
            'Removed': 'Removed Gear',
            'Changes': 'Changed Gear'
        },
        'Custom Weapons & Attachments': {
            'Added': 'New Weapons & Attachments',
            'Removed': 'Removed Weapons & Attachments',
            'Changes': 'Changed Weapons & Attachments'
        },
        'Custom Vehicles & Supplies': {
            'Added': 'New Vehicles & Supplies',
            'Removed': 'Removed Vehicles & Supplies',
            'Changes': 'Changed Vehicles & Supplies'
        }
    }
    
    order = ['Added', 'Changes', 'Removed']
    
    dash_count = {
        'Custom Gear': {'Added': 14, 'Changes': 18, 'Removed': 18},
        'Custom Weapons & Attachments': {'Added': 14, 'Changes': 18, 'Removed': 0},
        'Custom Vehicles & Supplies': {'Added': 14, 'Changes': 18, 'Removed': 18}
    }
    
    for section in ['Custom Gear', 'Custom Weapons & Attachments', 'Custom Vehicles & Supplies']:
        output += f'##  {section}\n```\n'
        mapping = subsection_mapping[section]
        for sub in order:
            sub_name = mapping[sub]
            dashes = dash_count[section][sub]
            if dashes > 0:
                output += f'{sub_name}\n{"-" * dashes}\n'
            else:
                output += f'{sub_name}\n'
            items = data[section].get(sub, [])
            if items:
                for item in items:
                    output += f'- {item}\n'
                output += '\n'
            else:
                output += '-\n\n'
            if sub == 'Changes' and section == 'Custom Weapons & Attachments':
                output += '------------------\n'
        output += '```\n'
    
    # Changed Display Names
    output += '\n## Changed Display Names\n[list]\n'
    items = data.get('Changed Display Names', [])
    if items:
        for item in items:
            output += f'[*] {item}\n'
    output += '[/list]\n'
    
    return output

def main():
    steam_file = 'steamchangelog.clj'
    discord_file = 'discordchangelog.md'
    
    data = parse_steam_changelog(steam_file)
    content = generate_discord_changelog(data)
    
    with open(discord_file, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print('Discord changelog updated.')

if __name__ == '__main__':
    main()