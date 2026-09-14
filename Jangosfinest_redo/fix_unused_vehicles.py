#!/usr/bin/env python3
"""Remove unused external class declarations using HEMTT's line-number report."""
import os

BASE = r"C:\Users\Nicholas_Brant\Documents\github\JangoArmory\Jangosfinest_redo"

# (line_number, class_name) — line_number is 1-based per the txt file
REMOVALS = {
    "addons/utilities/config.cpp": [
        (4, "UniformSlotInfo"),
    ],

    "addons/vehicles_air/config.cpp": [
        (49, "SensorTemplatePassiveRadar"),
        (52, "components"),
        (56, "components"),
        (60, "components"),
        (64, "components"),
        (67, "DefaultEventhandlers"),
        (68, "SensorTemplateAntiRadiation"),
        (69, "SensorTemplateActiveRadar"),
        (70, "SensorTemplateIR"),
        (71, "SensorTemplateVisual"),
        (72, "SensorTemplateMan"),
        (73, "SensorTemplateLaser"),
        (74, "SensorTemplateNV"),
        (75, "SensorTemplateDataLink"),
        (471, "TransportCounterMeasuresComponent"),
    ],

    "addons/vehicles_ground/config.cpp": [
        (48, "SensorTemplatePassiveRadar"),
        (51, "components"),
        (55, "components"),
        (59, "components"),
        (63, "components"),
        (86, "SensorTemplateAntiRadiation"),
        (91, "SensorTemplateLaser"),
        (92, "SensorTemplateNV"),
        (113, "Carrier"),
        (1045, "ViewGunner"),
        (1052, "AnimationSources"),
        (1053, "ViewPilot"),
        (1055, "ViewCargo"),
        (1056, "HeadLimits"),
        (1059, "HitHull"),
        (1060, "HitFuel"),
        (1061, "HitEngine"),
        (1062, "HitLTrack"),
        (1063, "HitRTrack"),
        (1067, "Engine"),
        (1068, "Movement"),
        (1070, "EventHandlers"),
    ],

    "addons/vehicles_laat/config.cpp": [
        (48, "SensorTemplatePassiveRadar"),
        (51, "components"),
        (55, "components"),
        (59, "components"),
        (63, "components"),
        (66, "DefaultEventhandlers"),
        (67, "SensorTemplateAntiRadiation"),
        (68, "SensorTemplateActiveRadar"),
        (69, "SensorTemplateIR"),
        (70, "SensorTemplateVisual"),
        (71, "SensorTemplateMan"),
        (72, "SensorTemplateLaser"),
        (73, "SensorTemplateNV"),
        (74, "SensorTemplateDataLink"),
        (79, "SWLG_tanks_tx130"),
        (82, "ls_vehicle_laati_transport"),
        (83, "ls_vehicle_laati_airborne"),
        (84, "ls_vehicle_laatc_base"),
        (85, "OPTRE_UNSC_falcon"),
        (86, "OPTRE_Pelican_unarmed"),
        (87, "OPTRE_Pelican_armed"),
        (88, "Aux212_3AS_Reaper_Y_Wing"),
        (89, "ls_carrybox_base"),
        (90, "3AS_Supply_Large_Ammo_Prop"),
        (91, "3AS_Supply_Large_Orange_Prop"),
        (92, "3AS_Supply_Large_Blue_Prop"),
        (93, "3AS_Supply_Large_Black_Prop"),
        (94, "3AS_Supply_Large_Medical_Prop"),
        (95, "Land_3AS_Medical_Droid"),
        (98, "OPTRE_Vehicles_Bison"),
        (99, "OPTRE_M413_base"),
        (100, "OPTRE_M412_IFV_UNSC"),
        (102, "MainTurret"),
        (103, "OPTRE_M412_IFV_UNSC_blk"),
        (108, "ls_vehicle_barc_base"),
        (111, "HitPoints"),
        (112, "ACE_SelfActions"),
        (114, "HitPoints"),
        (115, "HitLFWheel"),
        (116, "HitLF2Wheel"),
        (117, "HitRFWheel"),
        (118, "HitRF2Wheel"),
        (119, "HitBody"),
        (120, "HitGlass1"),
        (121, "HitGlass2"),
        (122, "HitGlass3"),
        (123, "HitGlass4"),
        (128, "HitLFWheel"),
        (129, "HitLF2Wheel"),
        (130, "HitRFWheel"),
        (131, "HitRF2Wheel"),
        (132, "HitBody"),
        (133, "HitGlass1"),
        (134, "HitGlass2"),
        (135, "HitGlass3"),
        (136, "HitGlass4"),
        (138, "EventHandlers"),
        (139, "AnimationSources"),
        (154, "ViewGunner"),
        (157, "CommanderOptics"),
        (161, "AnimationSources"),
        (162, "ViewPilot"),
        (163, "ViewOptics"),
        (164, "ViewCargo"),
        (165, "HeadLimits"),
        (168, "HitHull"),
        (169, "HitFuel"),
        (170, "HitEngine"),
        (171, "HitLTrack"),
        (172, "HitRTrack"),
        (176, "Engine"),
        (177, "Movement"),
        (179, "EventHandlers"),
        (189, "VehicleTransport"),
        (190, "ACE_SelfActions"),
        (193, "Box_212_Supply_F"),
        (194, "Box_212_Medical_F"),
        (819, "TransportCounterMeasuresComponent"),
        (9610, "TransportCounterMeasuresComponent"),
    ],

    "addons/vehicles/config.cpp": [
        (65, "SensorTemplatePassiveRadar"),
        (68, "components"),
        (72, "components"),
        (76, "components"),
        (80, "components"),
        (84, "SensorTemplateAntiRadiation"),
        (85, "SensorTemplateActiveRadar"),
        (86, "SensorTemplateIR"),
        (87, "SensorTemplateVisual"),
        (88, "SensorTemplateMan"),
        (89, "SensorTemplateLaser"),
        (90, "SensorTemplateNV"),
        (91, "SensorTemplateDataLink"),
        (98, "ls_vehicle_laati_base"),
        (99, "ls_vehicle_laati_transport"),
        (100, "ls_vehicle_laati_airborne"),
        (101, "ls_vehicle_laatc_base"),
        (106, "ls_carrybox_base"),
        (110, "3AS_Supply_Large_Black_Prop"),
        (115, "OPTRE_Vehicles_Bison"),
        (116, "OPTRE_M413_base"),
        (117, "OPTRE_M412_IFV_UNSC"),
        (120, "OPTRE_M412_IFV_UNSC_blk"),
        (125, "ls_vehicle_barc_base"),
        (129, "HitLFWheel"),
        (130, "HitLF2Wheel"),
        (131, "HitRFWheel"),
        (132, "HitRF2Wheel"),
        (142, "HitLFWheel"),
        (143, "HitLF2Wheel"),
        (144, "HitRFWheel"),
        (145, "HitRF2Wheel"),
        (146, "HitBody"),
        (147, "HitGlass1"),
        (148, "HitGlass2"),
        (149, "HitGlass3"),
        (150, "HitGlass4"),
        (152, "EventHandlers"),
        (153, "AnimationSources"),
        (168, "ViewGunner"),
        (171, "CommanderOptics"),
        (175, "AnimationSources"),
        (176, "ViewPilot"),
        (177, "ViewOptics"),
        (178, "ViewCargo"),
        (179, "HeadLimits"),
        (182, "HitHull"),
        (183, "HitFuel"),
        (184, "HitEngine"),
        (185, "HitLTrack"),
        (186, "HitRTrack"),
        (190, "Engine"),
        (191, "Movement"),
        (193, "EventHandlers"),
        (203, "VehicleTransport"),
        (204, "ACE_SelfActions"),
        (205, "HitPoints"),
        (208, "Box_212_Supply_F"),
        (209, "Box_212_Medical_F"),
        (2833, "TransportCounterMeasuresComponent"),
        (3239, "TransportCounterMeasuresComponent"),
        (3647, "TransportCounterMeasuresComponent"),
        (4113, "TransportCounterMeasuresComponent"),
        (4245, "TransportCounterMeasuresComponent"),
        (5656, "TransportCounterMeasuresComponent"),
        (6429, "TransportCounterMeasuresComponent"),
        (7463, "TransportCounterMeasuresComponent"),
        (8056, "TransportCounterMeasuresComponent"),
        (8303, "TransportCounterMeasuresComponent"),
        (8898, "TransportCounterMeasuresComponent"),
        (9376, "B_UAV_01_F"),
        (9377, "B_UGV_01_F"),
        (10507, "Plane_Fighter_03_base_F"),
        (10508, "TKE_Ext_Corvette_BASE"),
        (10711, "WeaponSlotsInfo"),
        (10712, "GunParticles"),
    ],
}


def process(rel_path, removals):
    path = os.path.join(BASE, rel_path.replace('/', os.sep))
    with open(path, 'r', encoding='utf-8') as f:
        lines = f.readlines()

    # Build index map: 0-based index -> expected class name
    class_map = {ln - 1: cn for ln, cn in removals}

    # Process from bottom to top so removals don't shift subsequent indices
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
    total_ok = 0
    for rel, removals in REMOVALS.items():
        ok, fail = process(rel, removals)
        total_ok += len(ok)
        print(f'\n{rel}')
        print(f'  Removed: {len(ok)}')
        for ln, cn, actual in fail:
            print(f'  FAIL line {ln}: expected "class {cn}", got: {actual!r}')

    print(f'\nTotal lines removed: {total_ok}')


if __name__ == '__main__':
    main()
