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
    class SWLB_Clone_Pilot_P2_Helmet;
    class SWLB_clone_uniform;
    class SWLB_clone_mc_uniform;
    class SWLB_clone_BARC_helmet;
    class SWLB_clone_AB_helmet;
    class SWLB_clone_ARF_P1_Helmet;
    class SWLB_clone_P15_Helmet;
    class SWLB_clone_P1_helmet;
    class SWLB_clone_P1_2_helmet;
    class SWLB_clone_P2_Helmet;
    class lsd_gar_standart_nvg;
    class lsd_gar_rangefinder_nvg;
    class lsd_gar_p2MarshalCommander_nvg;
    class SWLB_clone_eng_helmet;
    class SWLB_P2_SpecOps_Helmet;
    class UniformItem;
    class VestItem;


    // Inheritance for vests
    // Makes making each vest a rebreather easier
    class ItemInfo;
    class SWLB_clone_basic_armor;

    class SWLB_clone_airborne_armor : SWLB_clone_basic_armor
    {
        class ItemInfo;
    };
    class SWLB_clone_kama_armor: SWLB_clone_basic_armor
    {
        class ItemInfo;
    };
    class SWLB_clone_medic_armor: SWLB_clone_basic_armor
    {
        class ItemInfo;
    };
    class SWLB_clone_airborne_nco_armor : SWLB_clone_airborne_armor
    {
        class ItemInfo;
    };
    class SWLB_CEE_Airborne_Officer : SWLB_clone_airborne_armor
    {
        class ItemInfo;
    };
    class SWLB_CEE_Force_Recon_NCO : SWLB_clone_airborne_armor
    {
        class ItemInfo;
    };
    class SWLB_CEE_Officer_Tactical : SWLB_clone_airborne_armor
    {
        class ItemInfo;
    };
   class SWLB_CEE_Recon_Lieutenant: SWLB_clone_basic_armor 
    {
        class ItemInfo;
    };
    class ls_blueforVest_base;
    class ls_gar_airborneOfficer_vest : ls_blueforVest_base
    {
        class ItemInfo;
    };

    class SWLB_clone_officer_armor : SWLB_clone_basic_armor
    {
        class ItemInfo;
    };
    class SWLB_clone_commander_armor : SWLB_clone_officer_armor
    {
        class ItemInfo;
    };
    class SWLB_clone_arc_armor : SWLB_clone_officer_armor
    {
        class ItemInfo;
    };

    class JA_104th_Welty_Kama : SWLB_clone_kama_armor
    {
        author = "Fish";
        displayName = "Clone Trooper Kama (104th Welty)";
        hiddenSelections[] =
        {
            "camo1"

        };
        hiddenSelectionsTextures[] =
        {
            "Jangos_Infantry_Vests\data\Textures\104th_P2_Welty_Kama.paa"
        };
        class ItemInfo: ItemInfo
		{
            containerClass = "Supply80";
            vestType = "Rebreather";

            class HitpointsProtectionInfo {
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 8;
                    passThrough = 0.3;
                };
                class Body {
                    hitpointName = "HitBody";
                    armor = 8;
                    passThrough = 0.3;
                };
                class Chest {
                    hitpointName = "HitChest";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Diaphragm {
                    hitpointName = "HitDiaphragm";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
    class JA_104th_Irish_Kama : SWLB_clone_kama_armor
    {
        author = "Fish";
        displayName = "Clone Trooper Kama (104th Irish)";
        hiddenSelections[] =
        {
            "camo1"

        };
        hiddenSelectionsTextures[] =
        {
            "Jangos_Infantry_Vests\data\Textures\104th_P2_Irish_Officer_Accessories.paa"
        };
        class ItemInfo: ItemInfo
		{
            containerClass = "Supply80";
            vestType = "Rebreather";

            class HitpointsProtectionInfo {
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 8;
                    passThrough = 0.3;
                };
                class Body {
                    hitpointName = "HitBody";
                    armor = 8;
                    passThrough = 0.3;
                };
                class Chest {
                    hitpointName = "HitChest";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Diaphragm {
                    hitpointName = "HitDiaphragm";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };

    class JA_104th_Death_Kama : SWLB_CEE_Officer_Tactical
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
                "SWLB_clones\data\light_accessories_co.paa"};
        class ItemInfo: ItemInfo
        {
            vestType = "Rebreather";
            uniformModel = "\SWLB_CEE\data\SWLB_CEE_Officer_Tactical.p3d";
            containerClass = "Supply80";
            hiddenSelections[] = {"camo1","camo2"};
            mass = 80;
            class HitpointsProtectionInfo
            {
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 6;
                    passThrough = 0.3;
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 8;
                    passThrough = 0.3;
                };
                class Body {
                    hitpointName = "HitBody";
                    armor = 8;
                    passThrough = 0.3;
                };
                class Chest {
                    hitpointName = "HitChest";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Diaphragm {
                    hitpointName = "HitDiaphragm";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
    class JA_104th_Spirit_Vest : SWLB_clone_airborne_nco_armor
    {
        author = "Emmet";
        scope = 2;
        displayName = "Clone NCO Vest (104th Spirit)";
        hiddenSelections[] =
        {
            "camo1",
            "camo2",
            "camo3",
            "camo4"
        };
        hiddenSelectionsTextures[] =
        {
            "Jangos_Infantry_Vests\data\Textures\104th_P2_Spirit_Heavy.paa", // Heavy
            "Jangos_Infantry_Vests\data\Textures\104th_P2_Spirit_Officer.paa",
            "Jangos_Infantry_Vests\data\Textures\104th_P2_Spirit_Heavy.paa", //Heavy
            "Jangos_Infantry_Vests\data\Textures\104th_P2_Spirit_Heavy.paa" //Heavy
        };
        class ItemInfo: ItemInfo
		{
            containerClass = "Supply80";
            vestType = "Rebreather";
            class HitpointsProtectionInfo
            {
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 6;
                    passThrough = 0.3;
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 8;
                    passThrough = 0.3;
                };
                class Body {
                    hitpointName = "HitBody";
                    armor = 8;
                    passThrough = 0.3;
                };
                class Chest {
                    hitpointName = "HitChest";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Diaphragm {
                    hitpointName = "HitDiaphragm";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
    class JA_104th_Scurvy_Vest : SWLB_CEE_Force_Recon_NCO
    {
        author = "Fish";
        scope = 2;
        displayName = "Clone NCO Vest (104th Scurvy)";
        hiddenSelections[] = {"camo1","camo2","camo3","pauldron"};
        hiddenSelectionsTextures[] =
            {
                "Jangos_Infantry_Vests\data\Textures\104th_p2_scurvy_light_accessories.paa", // Heavy
                "Jangos_Infantry_Vests\data\Textures\104th_p2_scurvy_accessories_officer.paa",
                "SWLB_clones\data\light_accessories_co.paa",                               // Heavy
                "Jangos_Infantry_Vests\data\Textures\104th_p2_scurvy_accesories_heavy.paa" // Heavy
            };
        class ItemInfo: ItemInfo
		{
            containerClass = "Supply80";
            vestType = "Rebreather";
            uniformModel = "\SWLB_CEE\data\SWLB_CEE_Force_Recon_NCO.p3d";
            hiddenSelections[] = {"camo1", "camo2", "camo3", "pauldron"};

            class HitpointsProtectionInfo
            {
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 6;
                    passThrough = 0.3;
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 8;
                    passThrough = 0.3;
                };
                class Body {
                    hitpointName = "HitBody";
                    armor = 8;
                    passThrough = 0.3;
                };
                class Chest {
                    hitpointName = "HitChest";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Diaphragm {
                    hitpointName = "HitDiaphragm";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
    class JA_104th_Knightfall_Vest : SWLB_clone_commander_armor
    {
        author = "Tundra";
        displayName = "Clone Trooper Commander Vest (104th Knightfall)";
        hiddenSelections[] =
        {
            "camo1"

        };
        hiddenSelectionsTextures[] =
        {
            "Jangos_Infantry_Vests\data\Textures\104th_Knightfall_Accessories.paa"
        };
        class ItemInfo: ItemInfo
		{
            containerClass = "Supply80";
            vestType = "Rebreather";

            class HitpointsProtectionInfo {
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 8;
                    passThrough = 0.3;
                };
                class Body {
                    hitpointName = "HitBody";
                    armor = 8;
                    passThrough = 0.3;
                };
                class Chest {
                    hitpointName = "HitChest";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Diaphragm {
                    hitpointName = "HitDiaphragm";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
    class JA_104th_Tusk_Vest : SWLB_clone_commander_armor
    {
        author = "Tundra";
        displayName = "Clone Trooper Commander Vest (104th Tusk)";
        hiddenSelections[] =
        {
            "camo1"

        };
        hiddenSelectionsTextures[] =
        {
            "Jangos_Infantry_Vests\data\Textures\104th_Tusk_Accessories.paa"
        };
        class ItemInfo: ItemInfo
		{
            containerClass = "Supply80";
            vestType = "Rebreather";

            class HitpointsProtectionInfo {
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 8;
                    passThrough = 0.3;
                };
                class Body {
                    hitpointName = "HitBody";
                    armor = 8;
                    passThrough = 0.3;
                };
                class Chest {
                    hitpointName = "HitChest";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Diaphragm {
                    hitpointName = "HitDiaphragm";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
    class JA_104th_Galahad_Vest : SWLB_CEE_Recon_Lieutenant
    {
        author = "Dak";
        displayName = "Clone Trooper Captain Vest (104th Galahad)";
        model = "\SWLB_CEE\data\SWLB_CEE_Recon_Lieutenant.p3d";
        uniformModel = "\SWLB_CEE\data\SWLB_CEE_Recon_Lieutenant.p3d";
        hiddenSelections[] =
            {
                "camo1",
                "camo2"};
        hiddenSelectionsTextures[] = 
            {
                "Jangos_Infantry_Vests\data\Textures\104th_BARC_Galahad_Officer_Accessories.paa",
                "SWLB_clones\data\heavy_accessories_co.paa"};
        class ItemInfo: Vestitem
        {
            uniformModel = "\SWLB_CEE\data\SWLB_CEE_Recon_Lieutenant.p3d";
            containerClass = "Supply80";
            hiddenSelections[] = {"camo1","camo2"};
            mass = 80;
            vestType = "Rebreather";

            class HitpointsProtectionInfo {
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 8;
                    passThrough = 0.3;
                };
                class Body {
                    hitpointName = "HitBody";
                    armor = 8;
                    passThrough = 0.3;
                };
                class Chest {
                    hitpointName = "HitChest";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Diaphragm {
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
    class SWLB_clone_base_P2;
    class SWLB_clone_marshal_commander_base_P2;
    class SWLB_clone_backpack;
    class SWLB_clone_RTO_mini_backpack;
    class SWLB_clone_backpack_heavy;
    class SWLB_clone_backpack_medic;
    class SWLB_clone_backpack_RTO;
    class JLTS_Clone_jumppack;
    class JA_104th_Jumppack_JT12;
    class JA_104th_Jumppack_JT12_LR;
    // General Uniforms
};