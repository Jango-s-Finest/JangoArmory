#include "basicDefines_A3.hpp"
class DefaultEventhandlers;
class UniformSlotInfo;
class CfgPatches
{
    class Jangos_Armory_ARC_Vests
    {
        author = "Jango's Finest";
        requiredVersion = 0.1;
        requiredAddons[] = {};
        units[] = {};
        weapons[] = {
            "JA_104th_Angel_Vest",
            "JA_104th_Frosty_Vest",
            "JA_104th_Hunter_Vest",
            "JA_104th_Sigil_Vest",
            "JA_104th_Spectre_Vest",
            "JA_104th_Loner_Vest",
            "JA_104th_Vision_Vest",
            "JA_104th_Crowbi_Vest"};
    };
};

class CfgFactionClasses
{
    class 104th_Guys
    {
        displayname = "Jango's Finest";
        priority = 1; // Position in list.scope = 2;
        side = 1;
        icon = "";
    };
};
class cfgEditorSubcategories
{
    class 104th_Categ_Clones
    {
        displayname = "104th - Customs";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        side = 1;
    };
    class 104th_Categ_Basic
    {
        displayname = "104th - Base";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        side = 1;
    };
    class 104th_Categ_Special
    {
        displayname = "104th - Special";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        side = 1;
    };
};

class CfgWeapons
{
    class InventoryItem_Base_F;
    class ItemCore;
    class ls_gar_phase2Pilot_helmet;
    class ls_gar_phase2_uniform;
    class ls_gar_marshalCommander_uniform;
    class ls_gar_barc_helmet;
    class ls_gar_airborne_helmet;
    class ls_gar_phase1Arf_helmet;
    class ls_gar_arc_helmet;
    class ls_gar_phase1_helmet;
    class ls_gar_rex_helmet;
    class ls_gar_phase2_helmet;
    class lsd_gar_standart_nvg;
    class lsd_gar_rangefinder_nvg;
    class lsd_gar_p2MarshalCommander_nvg;
    class ls_gar_medic_vest;
    class UniformItem;
    class VestItem;

    // Inheritance for vests
    // Makes making each vest a rebreather easier
    class ls_gar_clone_vest;
    class JA_104th_Clone_Base_armor;

    class ls_gar_officer_vest : JA_104th_Clone_Base_armor
    {
        class ItemInfo;
    };
    class ls_gar_commander_vest : ls_gar_officer_vest
    {
        class ItemInfo;
    };
    class ls_gar_arc_vest : ls_gar_officer_vest
    {
        class ItemInfo;
    };
    class ls_gar_kama_vest : JA_104th_Clone_Base_armor
    {
        class ItemInfo;
    };

    class JA_104th_Angel_Vest : ls_gar_arc_vest
    {
        author = "Dak";
        displayName = "Clone ARC Trooper Vest (104th Angel)";
        picture = "\ls\core\addons\characters_clone_legacy\_ui\icon_cloneVest_commander_ca.paa";
        hiddenSelections[] =
            {
                "camo1",
                "camo2"

            };
        hiddenSelectionsTextures[] =
            {
                "Jangos_ARC_Vests\data\Textures\104th_ARC_Angel_ARC_Accessories.paa",
                "Jangos_ARC_Vests\data\Textures\104th_ARC_Angel_Officer_Accessories.paa"};
        class ItemInfo : ItemInfo
        {
            vestType = "Rebreather";
            uniformModel = "\ls\core\addons\characters_clone_legacy\vests\arc\ls_gar_arc_vest.p3d";
            containerClass = "Supply100";
            hiddenSelections[] = {"camo1", "camo2"};
            mass = 100;
            class HitpointsProtectionInfo
            {
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 8;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    armor = 8;
                    passThrough = 0.3;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 10;
                    passThrough = 0.3;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 4;
                    passThrough = 0.3;
                };
            };
        };
    };
    class JA_104th_Crowbi_Vest : ls_gar_arc_vest
    {
        author = "Ice";
        displayName = "Clone ARC Trooper Vest (104th Crowbi)";
        picture = "\ls\core\addons\characters_clone_legacy\_ui\icon_cloneVest_commander_ca.paa";
        hiddenSelections[] =
            {
                "camo1",
                "camo2"

            };
        hiddenSelectionsTextures[] =
            {
                "Jangos_ARC_Vests\data\Textures\104th_ARC_Crowbi_ARC_Accessories.paa",
                "Jangos_ARC_Vests\data\Textures\104th_ARC_Crowbi_Officer_Accessories.paa"};
        class ItemInfo : ItemInfo
        {
            vestType = "Rebreather";
            uniformModel = "\ls\core\addons\characters_clone_legacy\vests\arc\ls_gar_arc_vest.p3d";
            containerClass = "Supply100";
            hiddenSelections[] = {"camo1", "camo2"};
            mass = 100;
            class HitpointsProtectionInfo
            {
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 8;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    armor = 8;
                    passThrough = 0.3;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 10;
                    passThrough = 0.3;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 4;
                    passThrough = 0.3;
                };
            };
        };
    };
    class JA_104th_Drifter_Vest : ls_gar_arc_vest
    {
        author = "Ice";
        displayName = "Clone ARC Trooper Vest (104th Drifter)";
        picture = "\ls\core\addons\characters_clone_legacy\_ui\icon_cloneVest_commander_ca.paa";
        hiddenSelections[] =
            {
                "camo1",
                "camo2"

            };
        hiddenSelectionsTextures[] =
            {
                "Jangos_ARC_Vests\data\Textures\104th_ARC_Drifter_ARC_Accessories.paa",
                "Jangos_ARC_Vests\data\Textures\104th_ARC_Drifter_Officer_Accessories.paa"};
        class ItemInfo : ItemInfo
        {
            vestType = "Rebreather";
            uniformModel = "\ls\core\addons\characters_clone_legacy\vests\arc\ls_gar_arc_vest.p3d";
            containerClass = "Supply100";
            hiddenSelections[] = {"camo1", "camo2"};
            mass = 100;
            class HitpointsProtectionInfo
            {
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 8;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    armor = 8;
                    passThrough = 0.3;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 10;
                    passThrough = 0.3;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 4;
                    passThrough = 0.3;
                };
            };
        };
    };
    class JA_104th_Frosty_Vest : ls_gar_arc_vest
    {
        author = "Dak";
        displayName = "Clone ARC Trooper Vest (104th Frosty)";
        picture = "\ls\core\addons\characters_clone_legacy\_ui\icon_cloneVest_commander_ca.paa";
        hiddenSelections[] =
            {
                "camo1",
                "camo2"

            };
        hiddenSelectionsTextures[] =
            {
                "Jangos_ARC_Vests\data\Textures\104th_ARC_Frosty_ARC_Accessories.paa",
                "Jangos_ARC_Vests\data\Textures\104th_ARC_Frosty_Officer_Accessories.paa"};
        class ItemInfo : ItemInfo
        {
            vestType = "Rebreather";
            uniformModel = "\ls\core\addons\characters_clone_legacy\vests\arc\ls_gar_arc_vest.p3d";
            containerClass = "Supply100";
            hiddenSelections[] = {"camo1", "camo2"};
            mass = 100;
            class HitpointsProtectionInfo
            {
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 8;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    armor = 8;
                    passThrough = 0.3;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 10;
                    passThrough = 0.3;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 4;
                    passThrough = 0.3;
                };
            };
        };
    };
    class JA_104th_Hunter_Vest : ls_gar_arc_vest
    {
        author = "Ice";
        displayName = "Clone ARC Trooper Vest (104th Hunter)";
        picture = "\ls\core\addons\characters_clone_legacy\_ui\icon_cloneVest_commander_ca.paa";
        hiddenSelections[] =
            {
                "camo1",
                "camo2"

            };
        hiddenSelectionsTextures[] =
            {
                "Jangos_ARC_Vests\data\Textures\104th_ARC_Hunter_ARC_Accessories.paa",
                "Jangos_ARC_Vests\data\Textures\104th_ARC_Hunter_Officer_Accessories.paa"};
        class ItemInfo : ItemInfo
        {
            vestType = "Rebreather";
            uniformModel = "\ls\core\addons\characters_clone_legacy\vests\arc\ls_gar_arc_vest.p3d";
            containerClass = "Supply100";
            hiddenSelections[] = {"camo1", "camo2"};
            mass = 100;
            class HitpointsProtectionInfo
            {
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 8;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    armor = 8;
                    passThrough = 0.3;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 10;
                    passThrough = 0.3;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 4;
                    passThrough = 0.3;
                };
            };
        };
    };
    class JA_104th_Sigil_Vest : ls_gar_arc_vest
    {
        author = "Dak";
        displayName = "Clone ARC Trooper Vest (104th Sigil)";
        picture = "\ls\core\addons\characters_clone_legacy\_ui\icon_cloneVest_commander_ca.paa";
        hiddenSelections[] =
            {
                "camo1",
                "camo2"

            };
        hiddenSelectionsTextures[] =
            {
                "Jangos_ARC_Vests\data\Textures\104th_ARC_Sigil_ARC_Accessories.paa",
                "Jangos_ARC_Vests\data\Textures\104th_ARC_Sigil_Officer_Accessories.paa"};
        class ItemInfo : ItemInfo
        {
            vestType = "Rebreather";
            uniformModel = "\ls\core\addons\characters_clone_legacy\vests\arc\ls_gar_arc_vest.p3d";
            containerClass = "Supply100";
            hiddenSelections[] = {"camo1", "camo2"};
            mass = 100;
            class HitpointsProtectionInfo
            {
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 8;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    armor = 8;
                    passThrough = 0.3;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 10;
                    passThrough = 0.3;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 4;
                    passThrough = 0.3;
                };
            };
        };
    };
    class JA_104th_Spectre_ARC_Vest : ls_gar_arc_vest
    {
        author = "Dak";
        displayName = "Clone ARC Trooper Vest (104th Spectre)";
        picture = "\ls\core\addons\characters_clone_legacy\_ui\icon_cloneVest_commander_ca.paa";
        hiddenSelections[] =
            {
                "camo1",
                "camo2"

            };
        hiddenSelectionsTextures[] =
            {
                "Jangos_ARC_Vests\data\Textures\104th_ARC_Spectre_ARC_Accessories.paa",
                "Jangos_ARC_Vests\data\Textures\104th_ARC_Spectre_Officer_Accessories.paa"};
        class ItemInfo : ItemInfo
        {
            vestType = "Rebreather";
            uniformModel = "\ls\core\addons\characters_clone_legacy\vests\arc\ls_gar_arc_vest.p3d";
            containerClass = "Supply100";
            hiddenSelections[] = {"camo1", "camo2"};
            mass = 100;
            class HitpointsProtectionInfo
            {
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 8;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    armor = 8;
                    passThrough = 0.3;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 10;
                    passThrough = 0.3;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 4;
                    passThrough = 0.3;
                };
            };
        };
    };
    class JA_104th_Spectre_Vest : ls_gar_kama_vest
    {
        author = "Tundra";
        displayName = "Clone Trooper Kama (104th Spectre)";
        hiddenSelections[] =
            {
                "camo1"};
        hiddenSelectionsTextures[] =
            {
                "Jangos_ARC_Vests\data\Textures\104th_ARC_Spectre_Officer_Accessories.paa"};
        class ItemInfo : ItemInfo
        {
            containerClass = "Supply80";
            vestType = "Rebreather";

            class HitpointsProtectionInfo
            {
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 8;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    armor = 8;
                    passThrough = 0.3;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };

    class JA_104th_Loner_Vest : ls_gar_arc_vest
    {
        author = "Dak";
        displayName = "Clone ARC Trooper Vest (104th Loner)";
        picture = "\ls\core\addons\characters_clone_legacy\_ui\icon_cloneVest_commander_ca.paa";
        hiddenSelections[] =
            {
                "camo1",
                "camo2"

            };
        hiddenSelectionsTextures[] =
            {
                "Jangos_ARC_Vests\data\Textures\104th_ARC_Loner_ARC_Accessories.paa",
                "Jangos_ARC_Vests\data\Textures\104th_ARC_Loner_Officer_Accessories.paa"};
        class ItemInfo : ItemInfo
        {
            vestType = "Rebreather";
            uniformModel = "\ls\core\addons\characters_clone_legacy\vests\arc\ls_gar_arc_vest.p3d";
            containerClass = "Supply100";
            hiddenSelections[] = {"camo1", "camo2"};
            mass = 100;
            class HitpointsProtectionInfo
            {
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 8;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    armor = 8;
                    passThrough = 0.3;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 10;
                    passThrough = 0.3;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 4;
                    passThrough = 0.3;
                };
            };
        };
    };
    class JA_104th_Vision_Vest : ls_gar_arc_vest
    {
        author = "Dak";
        displayName = "Clone ARC Trooper Vest (104th Vision)";
        picture = "\ls\core\addons\characters_clone_legacy\_ui\icon_cloneVest_commander_ca.paa";
        hiddenSelections[] =
            {
                "camo1",
                "camo2"

            };
        hiddenSelectionsTextures[] =
            {
                "Jangos_ARC_Vests\data\Textures\104th_ARC_Vision_ARC_Accessories.paa",
                "Jangos_ARC_Vests\data\Textures\104th_ARC_Vision_Officer_Accessories.paa"};
        class ItemInfo : ItemInfo
        {
            vestType = "Rebreather";
            uniformModel = "\ls\core\addons\characters_clone_legacy\vests\arc\ls_gar_arc_vest.p3d";
            containerClass = "Supply100";
            hiddenSelections[] = {"camo1", "camo2"};
            mass = 100;
            class HitpointsProtectionInfo
            {
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 8;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    armor = 8;
                    passThrough = 0.3;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 10;
                    passThrough = 0.3;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 4;
                    passThrough = 0.3;
                };
            };
        };
    };
};

class CfgVehicles
{
    class lsd_gar_phase2_base;
    class ls_gar_marshalCommander_base;
    class ls_gar_standard_backpack;
    class ls_gar_rto_mini_backpack;
    class ls_gar_heavy_backpack;
    class ls_gar_medic_backpack;
    class ls_gar_Radio_backpack;
    class JLTS_Clone_jumppack;
    class JA_104th_Jumppack_JT12;
    class JA_104th_Jumppack_JT12_LR;
    // General Uniforms
};
