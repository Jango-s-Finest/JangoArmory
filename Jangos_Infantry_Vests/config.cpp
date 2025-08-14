#include "basicDefines_A3.hpp"
class DefaultEventhandlers;
class UniformSlotInfo;
class CfgPatches
{
    class Jangos_Armory_Infantry_Vests
    {
        author = "Jango's Finest";
        requiredVersion = 0.1;
        requiredAddons[] = {};
        units[] = {};
        weapons[] = {

            "",
            "JA_104th_ME_Commander_Vest",
            "JA_104th_ME_officer_Vest",
            "JA_104th_ME_Medic_Vest",
            "JA_104th_Tusk_Vest",
            "JA_104th_Spectre_RC_Vest",
            "JA_104th_Knightfall_Vest",
            "JA_104th_Galahad_Vest",
            "JA_104th_Spirit_Vest",
            "JA_104th_Scurvy_Vest",
            "JA_104th_Welty_Kama",
            "JA_104th_Death_Kama"

        };
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
    class V_PlateCarrier1_rgr;
    class ls_gar_engineer_helmet;
    class ls_sob_phase2SpecOp_helmet;
    class UniformItem;
    class VestItem;
    class ItemInfo;

    // Inheritance for vests
    // Makes making each vest a rebreather easier
    class ls_sob_commando_sniper_vest : V_PlateCarrier1_rgr
    {
        class ItemInfo;
    };
    class ls_gar_clone_vest;

    class ls_gar_airborne_vest : ls_gar_clone_vest
    {
        class ItemInfo;
    };
    class ls_gar_kama_vest : ls_gar_clone_vest
    {
        class ItemInfo;
    };
    class ls_gar_medic_vest : ls_gar_clone_vest
    {
        class ItemInfo;
    };
    class ls_gar_airborneNCO_vest : ls_gar_airborne_vest
    {
        class ItemInfo;
    };
    class ls_gar_airborneOfficer_vest : ls_gar_airborne_vest
    {
        class ItemInfo;
    };
    class ls_gar_forceReconNCO_vest : ls_gar_airborne_vest
    {
        class ItemInfo;
    };
    class ls_gar_tacticalOfficer_vest : ls_gar_airborne_vest
    {
        class ItemInfo;
    };
    class ls_gar_forceReconLieutenant_vest : ls_gar_clone_vest
    {
        class ItemInfo;
    };
    class ls_cloneVest_base;
    class ls_gar_airborneOfficer_vest : ls_cloneVest_base
    {
        class ItemInfo;
    };

    class ls_gar_officer_vest : ls_gar_clone_vest
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
    class ls_gar_hazard_vest : ls_gar_clone_vest
    {
        class ItemInfo;
    };

    class JA_104th_Welty_Kama : ls_gar_kama_vest
    {
        author = "Fish";
        displayName = "Clone Trooper Kama (104th Welty)";
        hiddenSelections[] =
            {
                "camo1"

            };
        hiddenSelectionsTextures[] =
            {
                "Jangos_Infantry_Vests\data\Textures\104th_P2_Welty_Kama.paa"};
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
    class JA_104th_Irish_Commander_Vest_P2 : ls_gar_commander_vest
    {
        author = "Dak";
        displayName = "Clone Trooper Commander Vest (104th Irish)";
        hiddenSelections[] = {"camo1", "rank"};
        hiddenSelectionsTextures[] =
            {
                "Jangos_Infantry_Vests\data\Textures\104th_Irish_Officer_Accessories.paa", ""};
        model = "\ls\core\addons\characters_clone_legacy\vests\officer\ls_gar_commander_vest.p3d";
        class ItemInfo : ItemInfo
        {
            hiddenSelections[] = {"camo1", "rank"};
            uniformModel = "\ls\core\addons\characters_clone_legacy\vests\officer\ls_gar_commander_vest.p3d";
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
    class JA_104th_Irish_Kama : ls_gar_kama_vest
    {
        author = "Fish";
        displayName = "Clone Trooper Kama (104th Irish)";
        hiddenSelections[] =
            {
                "camo1"

            };
        hiddenSelectionsTextures[] =
            {
                "Jangos_Infantry_Vests\data\Textures\104th_P2_Irish_Officer_Accessories.paa"};
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
    class JA_104th_Spectre_RC_Vest : ls_sob_commando_sniper_vest
    {
        author = "Dak";
        displayName = "Clone Trooper Republic Commando Sniper  (104th Spectre)";
        hiddenSelections[] = {"illum", "camo1"};
        hiddenSelectionsTextures[] =
            {
                "Jangos_Infantry_Vests\data\Textures\104th_Company_Spectre_Sniper_Vest.paa",
                "Jangos_Infantry_Vests\data\Textures\104th_Company_Spectre_Sniper_Vest.paa",
            };
        class ItemInfo : ItemInfo
        {
            containerClass = "Supply100";
            vestType = "Rebreather";
            hiddenSelections[] = {"illum", "camo1"};
            uniformModel = "\ls\core\addons\characters_clone_legacy\vests\commando\ls_vest_clone_commando_sniper.p3d";

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

    class JA_104th_Carmine_Kama : ls_gar_hazard_vest
    {
        author = "Dak";
        displayName = "Clone Trooper Harzard Vest (104th Carmine)";
        hiddenSelections[] =
            {
                "camo1",
                "camo2"};
        hiddenSelectionsTextures[] =
            {
                "Jangos_Infantry_Vests\data\Textures\104th_P2_Carmine_Light_Accessories.paa",   // Kama
                "Jangos_Infantry_Vests\data\Textures\104th_P2_Carmine_Accessories_Officer.paa", // Kama
            };
        model = "\ls\core\addons\characters_clone_legacy\vests\hazard\ls_gar_hazard_vest.p3d";
        class ItemInfo : ItemInfo
        {
            vestType = "Rebreather";
            uniformModel = "\ls\core\addons\characters_clone_legacy\vests\hazard\ls_gar_hazard_vest.p3d";
            containerClass = "Supply80";
            hiddenSelections[] = {"camo1", "camo2"};
            mass = 80;
            class HitpointsProtectionInfo
            {
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 6;
                    passThrough = 0.3;
                };
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

    class JA_104th_Death_Kama : ls_gar_tacticalOfficer_vest
    {
        author = "Dak";
        displayName = "Clone Trooper Kama (104th Death)";
        hiddenSelections[] =
            {
                "camo1",
                "camo2"};
        hiddenSelectionsTextures[] =
            {
                "Jangos_Infantry_Vests\data\Textures\104th_P2_Death_Kama.paa", // Kama
                "\ls\core\addons\characters_clone_legacy\vests\common\light\light_accessories_co.paa"};

        model = "\ls\core\addons\characters_clone_legacy\vests\tactical\ls_gar_tacticalOfficer_vest.p3d";
        class ItemInfo : ItemInfo
        {
            vestType = "Rebreather";
            uniformModel = "\ls\core\addons\characters_clone_legacy\vests\tactical\ls_gar_tacticalOfficer_vest.p3d";
            containerClass = "Supply80";
            hiddenSelections[] = {"camo1", "camo2"};
            mass = 80;
            class HitpointsProtectionInfo
            {
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 6;
                    passThrough = 0.3;
                };
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
    class JA_104th_Spirit_Vest : ls_gar_kama_vest
    {
        author = "Emmet";
        scope = 2;
        displayName = "Clone NCO Vest (104th Spirit)";
        hiddenSelections[] =
            {
                "camo1"};
        hiddenSelectionsTextures[] =
            {
                "Jangos_Infantry_Vests\data\Textures\104th_P2_Spirit_Kama.paa"};
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
    class JA_104th_Scurvy_Vest : ls_gar_forceReconNCO_vest
    {
        author = "Fish";
        scope = 2;
        displayName = "Clone NCO Vest (104th Scurvy)";
        hiddenSelections[] = {"camo1", "camo2", "camo3", "pauldron"};
        hiddenSelectionsTextures[] =
            {
                "Jangos_Infantry_Vests\data\Textures\104th_p2_scurvy_light_accessories.paa", // Heavy
                "Jangos_Infantry_Vests\data\Textures\104th_p2_scurvy_accessories_officer.paa",
                "\ls\core\addons\characters_clone_legacy\vests\common\light\light_accessories_co.paa", // Heavy
                "Jangos_Infantry_Vests\data\Textures\104th_p2_scurvy_accesories_heavy.paa"             // Heavy
            };
        class ItemInfo : ItemInfo
        {
            containerClass = "Supply80";
            vestType = "Rebreather";
            uniformModel = "\ls\core\addons\characters_clone_legacy\vests\forceRecon\ls_gar_forceRecon_vest.p3d";
            hiddenSelections[] = {"camo1", "camo2", "camo3", "pauldron"};

            class HitpointsProtectionInfo
            {
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 6;
                    passThrough = 0.3;
                };
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
    class JA_104th_Knightfall_Vest : ls_gar_commander_vest
    {
        author = "Tundra";
        displayName = "Clone Trooper Commander Vest (104th Knightfall)";
        hiddenSelections[] =
            {
                "camo1"

            };
        hiddenSelectionsTextures[] =
            {
                "Jangos_Infantry_Vests\data\Textures\104th_Knightfall_Accessories.paa"};
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
    class JA_104th_Tusk_Vest : ls_gar_commander_vest
    {
        author = "Tundra";
        displayName = "Clone Trooper Commander Vest (104th Tusk)";
        hiddenSelections[] =
            {
                "camo1"

            };
        hiddenSelectionsTextures[] =
            {
                "Jangos_Infantry_Vests\data\Textures\104th_Tusk_Accessories.paa"};
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
    class JA_104th_Galahad_Vest : ls_gar_forceReconLieutenant_vest
    {
        author = "Dak";
        displayName = "Clone Trooper Captain Vest (104th Galahad)";
        model = "\ls\core\addons\characters_clone_legacy\vests\forceRecon\ls_gar_forceReconLieutenant_vest.p3d";
        uniformModel = "\ls\core\addons\characters_clone_legacy\vests\forceRecon\ls_gar_forceReconLieutenant_vest.p3d";
        hiddenSelections[] =
            {
                "camo1",
                "camo2"};
        hiddenSelectionsTextures[] =
            {
                "Jangos_Infantry_Vests\data\Textures\104th_BARC_Galahad_Officer_Accessories.paa",
                "\ls\core\addons\characters_clone_legacy\vests\common\heavy\heavy_accessories_co.paa"};
        class ItemInfo : Vestitem
        {
            uniformModel = "\ls\core\addons\characters_clone_legacy\vests\forceRecon\ls_gar_forceReconLieutenant_vest.p3d";
            containerClass = "Supply80";
            hiddenSelections[] = {"camo1", "camo2"};
            mass = 80;
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