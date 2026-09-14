#!/usr/bin/env python3
"""Remove unused external class declarations from arc/arf addon config files."""
import os

BASE = r"C:\Users\Nicholas_Brant\Documents\github\JangoArmory\Jangosfinest_redo"

REMOVALS = {
    "addons/arc_armours/config.cpp": [
        (3, "DefaultEventhandlers"), (4, "UniformSlotInfo"),
        (87, "InventoryItem_Base_F"), (88, "ItemCore"),
        (89, "ls_gar_phase2Pilot_helmet"),
        # (90) ls_gar_phase2_uniform → KEEP (used as parent)
        (91, "ls_gar_marshalCommander_uniform"), (92, "ls_gar_arc_vest"),
        (93, "ls_gar_officer_vest"), (94, "ls_gar_commander_vest"),
        (95, "ls_gar_airborne_vest"), (96, "ls_gar_airborneOfficer_vest"),
        (97, "ls_gar_forceReconNCO_vest"), (98, "ls_gar_barc_helmet"),
        (99, "ls_gar_airborne_helmet"), (100, "ls_gar_phase1Arf_helmet"),
        (101, "ls_gar_arc_helmet"), (102, "ls_gar_phase1_helmet"),
        (103, "ls_gar_rex_helmet"), (104, "ls_gar_phase2_helmet"),
        (105, "lsd_gar_standart_nvg"), (106, "lsd_gar_rangefinder_nvg"),
        (107, "lsd_gar_p2MarshalCommander_nvg"), (108, "ls_gar_kama_vest"),
        (109, "ls_gar_medic_vest"), (110, "ls_gar_clone_vest"),
        (111, "ls_gar_airborneNCO_vest"), (112, "ls_gar_engineer_helmet"),
        (113, "ls_sob_phase2SpecOp_helmet"),
        # (114) UniformItem → KEEP (used in ItemInfo : UniformItem)
        (115, "VestItem"), (116, "JA_104th_Base_MC_AB_Uniform"),
        # (527) lsd_gar_phase2_base → KEEP
        (528, "ls_gar_marshalCommander_base"), (529, "ls_gar_standard_backpack"),
        (530, "ls_gar_rto_mini_backpack"), (531, "ls_gar_heavy_backpack"),
        (532, "ls_gar_medic_backpack"), (533, "ls_gar_Radio_backpack"),
        (534, "JLTS_Clone_jumppack"), (535, "JA_104th_Jumppack_JT12"),
        (536, "JA_104th_Jumppack_JT12_LR"),
    ],
    "addons/arc_helmets/config.cpp": [
        (3, "DefaultEventhandlers"), (4, "UniformSlotInfo"),
        (71, "InventoryItem_Base_F"), (72, "ItemCore"),
        (73, "ls_gar_phase2Pilot_helmet"), (74, "ls_gar_phase2_uniform"),
        (75, "ls_gar_marshalCommander_uniform"), (76, "ls_gar_arc_vest"),
        (77, "ls_gar_officer_vest"), (78, "ls_gar_commander_vest"),
        (79, "ls_gar_airborne_vest"), (80, "ls_gar_airborneOfficer_vest"),
        (81, "ls_gar_forceReconNCO_vest"), (82, "ls_gar_barc_helmet"),
        (83, "ls_gar_airborne_helmet"), (84, "ls_gar_phase1Arf_helmet"),
        # (85) ls_gar_arc_helmet → KEEP (used as parent for all helmets)
        (86, "ls_gar_phase1_helmet"), (87, "ls_gar_rex_helmet"),
        (88, "ls_gar_phase2_helmet"), (89, "lsd_gar_standart_nvg"),
        (90, "lsd_gar_rangefinder_nvg"), (91, "lsd_gar_p2MarshalCommander_nvg"),
        (92, "ls_gar_kama_vest"), (93, "ls_gar_medic_vest"),
        (94, "ls_gar_clone_vest"), (95, "ls_gar_airborneNCO_vest"),
        (96, "ls_gar_engineer_helmet"), (97, "ls_sob_phase2SpecOp_helmet"),
        (98, "UniformItem"), (99, "VestItem"),
        (255, "lsd_gar_phase2_base"), (256, "ls_gar_marshalCommander_base"),
        (257, "ls_gar_standard_backpack"), (258, "ls_gar_rto_mini_backpack"),
        (259, "ls_gar_heavy_backpack"), (260, "ls_gar_medic_backpack"),
        (261, "ls_gar_Radio_backpack"), (262, "JLTS_Clone_jumppack"),
        (263, "JA_104th_Jumppack_JT12"), (264, "JA_104th_Jumppack_JT12_LR"),
    ],
    "addons/arc_vests/config.cpp": [
        (3, "DefaultEventhandlers"), (4, "UniformSlotInfo"),
        (76, "InventoryItem_Base_F"), (77, "ItemCore"),
        (78, "ls_gar_phase2Pilot_helmet"), (79, "ls_gar_phase2_uniform"),
        (80, "ls_gar_marshalCommander_uniform"), (81, "ls_gar_barc_helmet"),
        (82, "ls_gar_airborne_helmet"), (83, "ls_gar_phase1Arf_helmet"),
        (84, "ls_gar_arc_helmet"), (85, "ls_gar_phase1_helmet"),
        (86, "ls_gar_rex_helmet"), (87, "ls_gar_phase2_helmet"),
        (88, "lsd_gar_standart_nvg"), (89, "lsd_gar_rangefinder_nvg"),
        (90, "lsd_gar_p2MarshalCommander_nvg"), (91, "ls_gar_medic_vest"),
        (92, "UniformItem"), (93, "VestItem"),
        (97, "ls_gar_clone_vest"),
        (102, "ItemInfo"), (106, "ItemInfo"),
        (986, "lsd_gar_phase2_base"), (987, "ls_gar_marshalCommander_base"),
        (988, "ls_gar_standard_backpack"), (989, "ls_gar_rto_mini_backpack"),
        (990, "ls_gar_heavy_backpack"), (991, "ls_gar_medic_backpack"),
        (992, "ls_gar_Radio_backpack"), (993, "JLTS_Clone_jumppack"),
        (994, "JA_104th_Jumppack_JT12"), (995, "JA_104th_Jumppack_JT12_LR"),
    ],
    "addons/arf_armours/config.cpp": [
        (3, "DefaultEventhandlers"), (4, "UniformSlotInfo"),
        (93, "InventoryItem_Base_F"), (94, "ItemCore"),
        (95, "ls_gar_phase2Pilot_helmet"),
        # (96) ls_gar_phase2_uniform → KEEP (used as parent)
        (97, "ls_gar_marshalCommander_uniform"), (98, "ls_gar_arc_vest"),
        (99, "ls_gar_officer_vest"), (100, "ls_gar_commander_vest"),
        (101, "ls_gar_airborne_vest"), (102, "ls_gar_airborneOfficer_vest"),
        (103, "ls_gar_forceReconNCO_vest"), (104, "ls_gar_barc_helmet"),
        (105, "ls_gar_airborne_helmet"), (106, "ls_gar_phase1Arf_helmet"),
        (107, "ls_gar_arc_helmet"), (108, "ls_gar_phase1_helmet"),
        (109, "ls_gar_rex_helmet"), (110, "ls_gar_phase2_helmet"),
        (111, "lsd_gar_standart_nvg"), (112, "lsd_gar_rangefinder_nvg"),
        (113, "lsd_gar_p2MarshalCommander_nvg"), (114, "ls_gar_kama_vest"),
        (115, "ls_gar_medic_vest"), (116, "ls_gar_clone_vest"),
        (117, "ls_gar_airborneNCO_vest"), (118, "ls_gar_engineer_helmet"),
        (119, "ls_sob_phase2SpecOp_helmet"),
        # (120) UniformItem → KEEP (used in ItemInfo : UniformItem)
        (121, "VestItem"),
        # (594) lsd_gar_phase2_base → KEEP
        (595, "ls_gar_marshalCommander_base"), (596, "ls_gar_standard_backpack"),
        (597, "ls_gar_rto_mini_backpack"), (598, "ls_gar_heavy_backpack"),
        (599, "ls_gar_medic_backpack"), (600, "ls_gar_Radio_backpack"),
        (601, "JLTS_Clone_jumppack"), (602, "JA_104th_Jumppack_JT12"),
        (603, "JA_104th_Jumppack_JT12_LR"),
    ],
    "addons/arf_helmets/config.cpp": [
        (3, "DefaultEventhandlers"), (4, "UniformSlotInfo"),
        (78, "InventoryItem_Base_F"), (79, "ItemCore"),
        (80, "ls_gar_phase2Pilot_helmet"), (81, "ls_gar_phase2_uniform"),
        (82, "ls_gar_marshalCommander_uniform"), (83, "ls_gar_arc_vest"),
        (84, "ls_gar_officer_vest"), (85, "ls_gar_commander_vest"),
        (86, "ls_gar_airborne_vest"), (87, "ls_gar_airborneOfficer_vest"),
        (88, "ls_gar_forceReconNCO_vest"), (89, "ls_gar_barc_helmet"),
        (90, "ls_gar_airborne_helmet"),
        # (91) ls_gar_phase1Arf_helmet → KEEP (used as parent for ARF helmets)
        # (92) ls_gar_phase2Arf_helmet → KEEP (unique to this file, used as parent)
        (93, "ls_gar_arc_helmet"), (94, "ls_gar_phase1_helmet"),
        (95, "ls_gar_rex_helmet"), (96, "ls_gar_phase2_helmet"),
        (97, "lsd_gar_standart_nvg"), (98, "lsd_gar_rangefinder_nvg"),
        (99, "lsd_gar_p2MarshalCommander_nvg"), (100, "ls_gar_kama_vest"),
        (101, "ls_gar_medic_vest"), (102, "ls_gar_clone_vest"),
        (103, "ls_gar_airborneNCO_vest"), (104, "ls_gar_engineer_helmet"),
        (105, "ls_sob_phase2SpecOp_helmet"), (106, "UniformItem"), (107, "VestItem"),
        (322, "lsd_gar_phase2_base"), (323, "ls_gar_marshalCommander_base"),
        (324, "ls_gar_standard_backpack"), (325, "ls_gar_rto_mini_backpack"),
        (326, "ls_gar_heavy_backpack"), (327, "ls_gar_medic_backpack"),
        (328, "ls_gar_Radio_backpack"), (329, "JLTS_Clone_jumppack"),
        (330, "JA_104th_Jumppack_JT12"), (331, "JA_104th_Jumppack_JT12_LR"),
    ],
    "addons/arf_vests/config.cpp": [
        (3, "DefaultEventhandlers"), (4, "UniformSlotInfo"),
        (62, "InventoryItem_Base_F"), (63, "ItemCore"),
        (64, "ls_gar_phase2Pilot_helmet"), (65, "ls_gar_phase2_uniform"),
        (66, "ls_gar_marshalCommander_uniform"), (67, "ls_gar_arc_vest"),
        (68, "ls_gar_officer_vest"), (69, "ls_gar_commander_vest"),
        (70, "ls_gar_airborne_vest"), (71, "ls_gar_airborneOfficer_vest"),
        (72, "ls_gar_forceReconNCO_vest"), (73, "ls_gar_barc_helmet"),
        (74, "ls_gar_airborne_helmet"), (75, "ls_gar_phase1Arf_helmet"),
        (76, "ls_gar_arc_helmet"), (77, "ls_gar_phase1_helmet"),
        (78, "ls_gar_rex_helmet"), (79, "ls_gar_phase2_helmet"),
        (80, "lsd_gar_standart_nvg"), (81, "lsd_gar_rangefinder_nvg"),
        (82, "lsd_gar_p2MarshalCommander_nvg"), (83, "ls_gar_kama_vest"),
        (84, "ls_gar_medic_vest"), (85, "ls_gar_airborneNCO_vest"),
        (86, "ls_gar_engineer_helmet"), (87, "ls_sob_phase2SpecOp_helmet"),
        (88, "UniformItem"), (89, "VestItem"),
        # (93) ls_gar_clone_vest → KEEP (used as parent for ls_gar_forceReconLieutenant_vest)
        (96, "ItemInfo"),   # inside ls_gar_forceReconLieutenant_vest body
        (260, "lsd_gar_phase2_base"), (261, "ls_gar_marshalCommander_base"),
        (262, "ls_gar_standard_backpack"), (263, "ls_gar_rto_mini_backpack"),
        (264, "ls_gar_heavy_backpack"), (265, "ls_gar_medic_backpack"),
        (266, "ls_gar_Radio_backpack"), (267, "JLTS_Clone_jumppack"),
        (268, "JA_104th_Jumppack_JT12"), (269, "JA_104th_Jumppack_JT12_LR"),
    ],
}


def process(rel_path, removals):
    path = os.path.join(BASE, rel_path.replace('/', os.sep))
    with open(path, 'r', encoding='utf-8') as f:
        lines = f.readlines()

    class_map = {ln - 1: cn for ln, cn in removals}
    ok, fail = [], []

    for idx in sorted(class_map, reverse=True):
        expected = class_map[idx]
        if idx < 0 or idx >= len(lines):
            fail.append((idx + 1, expected, "LINE OUT OF RANGE"))
            continue
        if f'class {expected}' in lines[idx]:
            ok.append(idx + 1)
            lines.pop(idx)
        else:
            fail.append((idx + 1, expected, lines[idx].rstrip()))

    if ok:
        with open(path, 'w', encoding='utf-8') as f:
            f.writelines(lines)

    return ok, fail


def main():
    total = 0
    for rel, removals in REMOVALS.items():
        ok, fail = process(rel, removals)
        total += len(ok)
        print(f'\n{rel}')
        print(f'  Removed: {len(ok)}')
        for ln, cn, actual in fail:
            print(f'  FAIL line {ln}: expected "class {cn}", got: {actual!r}')
    print(f'\nTotal lines removed: {total}')


if __name__ == '__main__':
    main()
