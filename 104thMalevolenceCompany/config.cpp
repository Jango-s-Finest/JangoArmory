#include "basicDefines_A3.hpp"
class DefaultEventhandlers;
class UniformSlotInfo;
class CfgPatches
{
    class Jangos_Armory_Malevolence
    {
        author = "Jango's Finest";
        units[] = {
            "JA_104th_Base_Malevolence_ARF",
            "JA_104th_Base_Malevolence",
            "JA_104th_Base_Malevolence_Medic",

        };
        weapons[] = {

            "JA_104th_Malevolence_Base_Helmet",
            "JA_104th_Malevolence_Base_Medic_Helmet",
            "JA_104th_Malevolence_Base_ARF_Helmet",
            "JA_104th_Malevolence_Commander_Helmet",
            "JA_104th_Malevolence_JNCO_Helmet",
            "JA_104th_Malevolence_Officer_Helmet",
            "JA_104th_Malevolence_SNCO_Helmet",
            "JA_104th_Malevolence_SpecOps_Helmet",

            "JA_104th_Malevolence_Base_Uniform",
            "JA_104th_Malevolence_Base_Medic_Uniform",
            "JA_104th_Malevolence_Base_ARC_Uniform",
            "JA_104th_Invisible_Base_Rebreather_Uniform",

            "JA_104th_SPC_NVG_Base_ME",
            "JA_104th_P2_NVG_Base_ME",

            "JA_104th_ARC_ME_Vest",
            "JA_104th_Vest_ME",
            "JA_104th_ME_Vest",
            "JA_104th_ME_PSGT_Base_Kama",
            "JA_104th_ME_PSGT_Alt1_Kama",
            "JA_104th_ME_PSGT_Alt2_Kama",
            "JA_104th_ME_Medic_Vest",
            "JA_104th_ME_officer_Vest",
            "JA_104th_basic_Vest",
            "JA_104th_ME_NCO_Vest",
            "JA_104th_ME_NCO_Medic_Vest",
            "JA_104th_ME_Recon_Vest",
            "JA_104th_ME_Recon_Vest2",
            "JA_104th_ME_Grenadier_Vest",
            "JA_104th_ME_basic_Vest",
            "JA_104th_ME_Heavy_Vest",
            "JA_104th_Base_Commander_Vest_ME",
            "JA_104th_AB_ME_NCO_Base_Trooper_Armor",
            "JA_104th_AB_ME_NCO_Alt1_Trooper_Armor",
            "JA_104th_AB_ME_NCO_Alt2_Trooper_Armor",
            "JA_104th_AB_ME_NCO_Medic_Trooper_Armor",
            "JA_104th_AB_ME_Base_Trooper_Armor",
            "JA_104th_AB_ME_Medic_Trooper_Armor",
            "JA_104th_AB_ME_Officer_Trooper_Armor"

        };
    };
};

class CfgFactionClasses
{
    class CfgFactionClasses
    {
        class 104th_Guys
        {
            displayname = "Jango's Finest";
            priority = 1; // Position in list.
            side = 1;     // Opfor = 0, Blufor = 1, Indep = 2.
            icon = "";
        };
    };
};
class cfgEditorSubcategories
{
    class 104th_Categ_Clones_malevolence
    {
        displayname = "104th - Malevolence";
    };
};

class CfgWeapons
{
    class InventoryItem_Base_F;
    class ItemCore;
    class ls_gar_phase2Pilot_helmet;
    class ls_gar_phase2_uniform;
    class ls_gar_marshalCommander_uniform;
    class ls_gar_commander_vest;
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
    class ls_gar_airborneNCO_vest;
    class ls_sob_phase1SpecOp_helmet;
    class lsd_gar_standardSPC_nvg;
    class lsd_gar_standard_nvg;
    class ls_gar_rebreather_vest;
    class ls_cloneVest_base;
    class ls_gar_airborne_vest;
    class ls_gar_airborneOfficer_vest;
    class JA_104th_Clone_Base_armor;
    class ls_gar_clone_vest;
    class UniformItem;
    class VestItem;
    class Bag_Base;

    // Inheritance for vests
    // Makes making each vest a rebreather easier
    class ItemInfo;
    class ls_gar_airborneOfficer_vest : ls_cloneVest_base
    {
        class ItemInfo;
    };
    class ls_gar_forceReconLieutenant_vest : ls_gar_clone_vest
    {
        class ItemInfo;
    };
    class ls_gar_officer_vest : ls_gar_clone_vest
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
    class ls_gar_medic_vest : ls_gar_clone_vest
    {
        class ItemInfo;
    };
    class ls_gar_forceReconNCO_vest : ls_gar_airborne_vest
    {
        class ItemInfo;
    };
    class ls_gar_forceRecon_vest : ls_gar_airborne_vest
    {
        class ItemInfo;
    };
    class ls_gar_heavy_vest : ls_gar_airborne_vest
    {
        class ItemInfo;
    };
    class ls_gar_grenadier_vest : ls_gar_clone_vest
    {
        class ItemInfo;
    };

    // MLV Base Helmets
    class JA_104th_Malevolence_Base_Helmet : ls_gar_phase1_helmet
    {
        author = "Dak";
        scopeArsenal = 2;
        side = 1;
        grad_slingHelmet_allow = true;
        displayname = "Clone Trooper P1 Helmet (104th MLV)";                                                  // the name it will be in game
        hiddenSelectionsTextures[] = {"104thMalevolenceCompany\data\Textures\104th_P1_Red_1C_CT_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\illum_co.paa"}; // the file path to the texture
    };
    class JA_104th_Malevolence_Base_Medic_Helmet : ls_gar_phase1_helmet
    {
        author = "Dak";
        scopeArsenal = 2;
        side = 1;
        grad_slingHelmet_allow = true;
        displayname = "Clone Trooper P1 Helmet (104th MLV Medic)";                                               // the name it will be in game
        hiddenSelectionsTextures[] = {"104thMalevolenceCompany\data\Textures\104th_P1_Red_1C_Medic_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\illum_co.paa"}; // the file path to the texture
    };
    class JA_104th_Malevolence_Base_ARF_Helmet : ls_gar_phase1Arf_helmet
    {
        author = "Dak";
        scopeArsenal = 2;
        side = 1;
        grad_slingHelmet_allow = "true";
        displayname = "Clone Trooper ARF Helmet (104th MLV)";                                                  // the name it will be in game
        hiddenSelectionsTextures[] = {"104thMalevolenceCompany\data\Textures\104th_P1_Red_1C_ARF_Helmet.paa","","\ls\core\addons\characters_clone_legacy\helmets\arf\data\helmet_co.paa"}; // the file path to the texture
    };
    class JA_104th_Malevolence_Commander_Helmet : ls_gar_phase1_helmet
    {
        author = "Dak";
        scopeArsenal = 2;
        side = 1;
        grad_slingHelmet_allow = "true";
        displayname = "Clone Trooper P1 Helmet (104th MLV Commander)";                                               // the name it will be in game
        hiddenSelectionsTextures[] = {"104thMalevolenceCompany\data\Textures\104th_P1_Red_1C_Commander_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\illum_co.paa"}; // the file path to the texture
    };
    class JA_104th_Malevolence_JNCO_Helmet : ls_gar_phase1_helmet
    {
        author = "Dak";
        scopeArsenal = 2;
        side = 1;
        grad_slingHelmet_allow = "true";
        displayname = "Clone Trooper P1 Helmet (104th MLV JNCO)";                                               // the name it will be in game
        hiddenSelectionsTextures[] = {"104thMalevolenceCompany\data\Textures\104th_P1_Red_1C_JNCO_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\illum_co.paa"}; // the file path to the texture
    };
    class JA_104th_Malevolence_Officer_Helmet : ls_gar_phase1_helmet
    {
        author = "Dak";
        scopeArsenal = 2;
        side = 1;
        grad_slingHelmet_allow = "true";
        displayname = "Clone Trooper P1 Helmet (104th MLV Officer)";                                               // the name it will be in game
        hiddenSelectionsTextures[] = {"104thMalevolenceCompany\data\Textures\104th_P1_Red_1C_Officer_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\illum_co.paa"}; // the file path to the texture
    };
    class JA_104th_Malevolence_SNCO_Helmet : ls_gar_phase1_helmet
    {
        author = "Dak";
        scopeArsenal = 2;
        side = 1;
        grad_slingHelmet_allow = "true";
        displayname = "Clone Trooper P1 Helmet (104th MLV SNCO)";                                               // the name it will be in game
        hiddenSelectionsTextures[] = {"104thMalevolenceCompany\data\Textures\104th_P1_Red_1C_SNCO_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\illum_co.paa"}; // the file path to the texture
    };
    class JA_104th_Malevolence_SpecOps_Helmet : ls_sob_phase1SpecOp_helmet
    {
        author = "Dak";
        scopeArsenal = 2;
        side = 1;
        grad_slingHelmet_allow = true;
        displayname = "Clone Trooper P1 Special Activities Helmet (104th MLV)"; // the name it will be in game
        hiddenSelections[] = {"Camo1", "Camo2"};
        hiddenSelectionsTextures[] = {"104thMalevolenceCompany\data\Textures\104th_P1_Red_Specops_1c_Helmet.paa", "\ls\core\addons\characters_clone_legacy\helmets\phase1SpecOp\data\visor_co.paa"}; // the file path to the texturehiddenSelectionsTextures[] = {"\ls\core\addons\characters_clone_legacy\helmets\phase1SpecOp\data\helmet_co.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1SpecOp\data\visor_co.paa"};
    };
    // MLV Base Uniforms
    class JA_104th_Malevolence_Base_Uniform : ls_gar_marshalCommander_uniform
    {
        author = "Dak";
        scope = 2;
        allowedSlots[] = {BACKPACK_SLOT};
        displayName = "Clone Trooper P1 armor (104th MLV)";
		model = "\ls\core\addons\characters_clone_legacy\uniforms\phase2\ls_gar_phase2_uniform.p3d";
        hiddenSelections[] =
            {
                "camo1",
                "camo2"};
        hiddenSelectionsTextures[] =
            {
                "104thMalevolenceCompany\data\Textures\104th_P1_Red_1C_Upper.paa",
                "104thMalevolenceCompany\data\Textures\104th_P1_Red_1C_Lower.paa"};
        class ItemInfo : UniformItem
        {
            uniformModel = "-";
			scope = 2;
            uniformClass = "JA_104th_Base_Malevolence";
            containerClass = "Supply150";
            mass = 40;
            uniformType = "Neopren";
        };
    };
    class JA_104th_Malevolence_Base_Medic_Uniform : ls_gar_marshalCommander_uniform
    {
        author = "Dak";
        scope = 2;
        allowedSlots[] = {BACKPACK_SLOT};
        displayName = "Clone Trooper P1 Medic armor (104th MLV)";
		model = "\ls\core\addons\characters_clone_legacy\uniforms\phase2\ls_gar_phase2_uniform.p3d";
        hiddenSelections[] =
            {
                "camo1",
                "camo2"};
        hiddenSelectionsTextures[] =
            {
                "104thMalevolenceCompany\data\Textures\104th_P1_Red_1C_Medic_Upper.paa",
                "104thMalevolenceCompany\data\Textures\104th_P1_Red_1C_Medic_Lower.paa"};
        class ItemInfo : UniformItem
        {
            uniformModel = "-";
			scope = 2;
            uniformClass = "JA_104th_Base_Malevolence_Medic";
            containerClass = "Supply150";
            mass = 40;
            uniformType = "Neopren";
        };
    };
    class JA_104th_Malevolence_Base_ARC_Uniform : ls_gar_marshalCommander_uniform
    {
        author = "Dak";
        scope = 2;
        allowedSlots[] = {BACKPACK_SLOT};
        displayName = "Clone Trooper P1 ARC armor (104th MLV)";
		model = "\ls\core\addons\characters_clone_legacy\uniforms\phase2\ls_gar_phase2_uniform.p3d";
        hiddenSelections[] =
            {
                "camo1",
                "camo2"};
        hiddenSelectionsTextures[] =
            {
                "104thMalevolenceCompany\data\Textures\104th_P1_Red_1C_ARC_Upper.paa",
                "104thMalevolenceCompany\data\Textures\104th_P1_Red_1C_ARC_Lower.paa"};
        class ItemInfo : UniformItem
        {
            uniformModel = "-";
			scope = 2;
            uniformClass = "JA_104th_Base_Malevolence_ARC";
            containerClass = "Supply150";
            mass = 40;
            uniformType = "Neopren";
        };
    };
    class JA_104th_Invisible_Base_Rebreather_Uniform : ls_gar_rebreather_vest
    {
        author = "Dak";
        scope = 2;
        allowedSlots[] = {BACKPACK_SLOT};
        displayName = "Clone Lightweight Rebreather Vest (Invisible)";
        hiddenSelections[] =
            {
                "camo1",
                "camo2",
                "camo3"};
        hiddenSelectionsTextures[] =
            {
                "",
                "",
                ""};
        class ItemInfo : VestItem
        {
            uniformModel = "-";
			scope = 2;
            containerClass = "Supply80";
            vestType = "Rebreather";
            mass = 80;
            hiddenSelections[] =
                {
                    "camo1",
                    "camo2",
                    "camo3"};
            class HitpointsProtectionInfo
            {
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 6;
                    passThrough = 0.30000001;
                };
            };
        };
    };
    // NVG
    class JA_104th_SPC_NVG_Base_ME : lsd_gar_standardSPC_nvg
    {
        ace_nightvision_border = "";
        author = "Tundra";
        displayName = "Clone SPC NVG Visor (104th MLV)";
        hiddenSelections[] =
            {
                "camo1",
                "camo2"

            };
        hiddenSelectionsTextures[] = {"104thMalevolenceCompany\data\Textures\104th_P1_Red_Macro_Visor.paa"}; // the file path to the texture
        visionMode[] = {"Normal", "NVG", "TI"};
        thermalMode[] = {0, 1};
    };
    class JA_104th_P2_NVG_Base_ME : lsd_gar_standard_nvg
    {
        author = "Tundra";
        displayName = "Clone P2 NVG Visor (104th MLV)";
        hiddenSelections[] =
            {
                "camo1",
            };
        hiddenSelectionsTextures[] = {"104thMalevolenceCompany\data\Textures\104th_P1_Red_Macro_Visor.paa"}; // the file path to the texture
        visionMode[] = {"Normal", "NVG", "TI"};
        thermalMode[] = {0, 1};
    };
    // MLV Base Vests
    class JA_104th_ARC_ME_Vest : ls_gar_arc_vest
    {
        author = "DAK";
        displayName = "Clone ARC Trooper Vest (104th MLV)";
        picture = "\ls\core\addons\characters_clone_legacy\_ui\icon_cloneVest_commander_ca.paa";
        hiddenSelections[] =
            {
                "camo1",
                "camo2"

            };
        hiddenSelectionsTextures[] =
            {
                "104thMalevolenceCompany\data\textures\104th_ARC_Accessories_P1_Red_ARC_Base.paa",
                "104thMalevolenceCompany\data\Textures\104th_Officer_Accessories_P1_Red_ARC_Base.paa"};
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
    class JA_104th_Vest_ME : ls_gar_forceReconLieutenant_vest
    {
        author = "Dak";
        displayName = "Clone Trooper Captain Vest (104th MLV)";
        model = "\ls\core\addons\characters_clone_legacy\vests\forceRecon\ls_gar_forceReconLieutenant_vest.p3d";
        uniformModel = "\ls\core\addons\characters_clone_legacy\vests\forceRecon\ls_gar_forceReconLieutenant_vest.p3d";
        hiddenSelections[] =
            {
                "camo1",
                "camo2"};
        hiddenSelectionsTextures[] =
            {
                "104thMalevolenceCompany\data\Textures\104th_Officer_Accessories_P1_Red_Company_Base.paa",
                "104thMalevolenceCompany\data\Textures\104th_Heavy_Accessories_Trooper_VetRed.paa"};
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
    class JA_104th_Base_Commander_Vest_ME : ls_gar_commander_vest
    {
        author = "Dak";
        displayName = "Clone Trooper Commander Vest (104th MLV)";
        hiddenSelections[] =
            {
                "camo1"};
        hiddenSelectionsTextures[] =
            {
                "104thMalevolenceCompany\data\Textures\104th_Officer_Accessories_P1_Red_Company_Base.paa"};
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
    class JA_104th_ME_PSGT_Base_Kama : ls_gar_kama_vest
    {
        author = "Tundra";
        displayName = "Clone Trooper Kama (104th MLV)";
        hiddenSelections[] =
            {
                "camo1"};
        hiddenSelectionsTextures[] =
            {
                "104thMalevolenceCompany\data\Textures\104th_Officer_Accessories_P1_Red_INF_Base.paa"};
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
    class JA_104th_ME_PSGT_Alt1_Kama : ls_gar_kama_vest
    {
        author = "Tundra";
        displayName = "Clone Trooper Kama (104th MLV 01)";
        hiddenSelections[] =
            {
                "camo1"

            };
        hiddenSelectionsTextures[] =
            {
                "104thMalevolenceCompany\data\Textures\104th_Officer_Accessories_P1_Red_INF_Alt_1.paa"};
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
    class JA_104th_ME_PSGT_Alt2_Kama : ls_gar_kama_vest
    {
        author = "Tundra";
        displayName = "Clone Trooper Kama (104th MLV 02)";
        hiddenSelections[] =
            {
                "camo1"

            };
        hiddenSelectionsTextures[] =
            {
                "104thMalevolenceCompany\data\Textures\104th_Officer_Accessories_P1_Red_INF_Alt_2.paa"};
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
    class JA_104th_ME_Medic_Vest : ls_gar_medic_vest
    {
        author = "Dak";
        displayName = "Clone Trooper Medic Vest (104th MLV)";
        hiddenSelections[] =
            {
                "camo1"};
        hiddenSelectionsTextures[] =
            {
                "104thMalevolenceCompany\data\Textures\104th_Heavy_Accessories_Medic_VetRed.paa"};
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
    class JA_104th_ME_officer_Vest : ls_gar_officer_vest
    {
        author = "Dak";
        displayName = "Clone Trooper Officer Vest (104th MLV)";
        hiddenSelections[] =
            {
                "camo1"};
        hiddenSelectionsTextures[] =
            {
                "104thMalevolenceCompany\data\Textures\104th_Officer_Accessories_P1_Red_INF_Base.paa"};
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
    class JA_104th_ME_NCO_Vest : ls_gar_forceReconNCO_vest
    {
        author = "Fish";
        scope = 2;
        displayName = "Clone Trooper SNCO Vest (104th MLV)";
        hiddenSelections[] = {"camo1", "camo2", "camo3", "pauldron"};
        hiddenSelectionsTextures[] =
            {
                "104thMalevolenceCompany\data\Textures\104th_Accessories_Light_P1_Red_Base.paa", // Heavy
                "104thMalevolenceCompany\data\Textures\104th_Officer_Accessories_P1_Red_INF_Base.paa",
                "104thMalevolenceCompany\data\Textures\104th_Accessories_Light_P1_Red_Base.paa",   // Heavy
                "104thMalevolenceCompany\data\Textures\104th_Heavy_Accessories_Trooper_VetRed.paa" // Heavy
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
    class JA_104th_ME_NCO_Medic_Vest : ls_gar_airborneNCO_vest
    {
        author = "Fish";
        scope = 2;
        displayName = "Clone Trooper NCO Medic Vest (104th MLV)";
        hiddenSelections[] = {"ammo","camo1","camo2","pauldron"};
        hiddenSelectionsTextures[] =
            {
                "104thMalevolenceCompany\data\Textures\104th_Heavy_Accessories_Medic_VetRed.paa", // Heavy
                "104thMalevolenceCompany\data\Textures\104th_Heavy_Accessories_Medic_VetRed.paa", // Heavy
                "104thMalevolenceCompany\data\Textures\104th_Officer_Accessories_P1_INF_Medic.paa",
                "104thMalevolenceCompany\data\Textures\104th_Heavy_Accessories_Medic_VetRed.paa",  // Heavy
            };
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
    class JA_104th_ME_Recon_Vest : ls_gar_forceRecon_vest // missing straps
    {
        author = "Emmet";
        scope = 2;
        displayName = "Clone Force Recon Vest (104th MLV)";
        hiddenSelections[] = {"camo1","camo2","camo3","pauldron"};
        hiddenSelectionsTextures[] =
            {
                "104thMalevolenceCompany\data\Textures\104th_Accessories_Light_P1_Red_Base.paa",
                "", // Heavy
                "104thMalevolenceCompany\data\Textures\104th_Heavy_Accessories_Trooper_VetRed.paa", // Heavy
                "104thMalevolenceCompany\data\Textures\104th_Heavy_Accessories_Trooper_VetRed.paa", // Heavy
            };
        model = "\ls\core\addons\characters_clone_legacy\vests\forceRecon\ls_gar_forceRecon_vest.p3d";
        uniformModel = "\ls\core\addons\characters_clone_legacy\vests\forceRecon\ls_gar_forceRecon_vest.p3d";
        class ItemInfo : ItemInfo
        {
            containerClass = "Supply80";
            vestType = "Rebreather";
            hiddenSelections[] = {"camo1","camo2","camo3","pauldron"};
            uniformModel = "\ls\core\addons\characters_clone_legacy\vests\forceRecon\ls_gar_forceRecon_vest.p3d";

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
    class JA_104th_ME_Grenadier_Vest : ls_gar_grenadier_vest
    {
        author = "Emmet";
        scope = 2;
        displayName = "Clone Trooper Grenadier Vest (104th MLV)";
        hiddenSelections[] =
            {
                "camo1",
                "camo2"};
        hiddenSelectionsTextures[] = {
            "104thMalevolenceCompany\data\Textures\104th_Accessories_Light_P1_Red_Base.paa",
            "104thMalevolenceCompany\data\Textures\104th_Heavy_Accessories_Trooper_VetRed.paa"};

        class ItemInfo : ItemInfo
        {
            containerClass = "Supply80";
            vestType = "Rebreather";
            hiddenSelections[] = {"camo1", "camo2"};
            uniformModel = "\ls\core\addons\characters_clone_legacy\vests\grenadier\ls_gar_grenadier_vest.p3d";
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
    class JA_104th_ME_Heavy_Vest : ls_gar_heavy_vest
    {
        author = "Emmet";
        scope = 2;
        displayName = "Clone Trooper Heavy Vest (104th MLV)";
        hiddenSelections[] = {"ammo", "camo1", "camo2", "camo3", "pauldron"};
        hiddenSelectionsTextures[] = {
            "104thMalevolenceCompany\data\Textures\104th_Heavy_Accessories_Trooper_VetRed.paa",
            "104thMalevolenceCompany\data\Textures\104th_Heavy_Accessories_Trooper_VetRed.paa",
            "104thMalevolenceCompany\data\Textures\104th_Heavy_Accessories_Trooper_VetRed.paa",
            "104thMalevolenceCompany\data\Textures\104th_Accessories_Light_P1_Red_Base.paa",
            "104thMalevolenceCompany\data\Textures\104th_Heavy_Accessories_Trooper_VetRed.paa"};

        class ItemInfo : ItemInfo
        {
            containerClass = "Supply80";
            vestType = "Rebreather";
            hiddenSelections[] = {"ammo", "camo1", "camo2", "camo3", "pauldron"};
            uniformModel = "\ls\core\addons\characters_clone_legacy\vests\heavy\ls_gar_heavy_vest.p3d";

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
    class JA_104th_basic_Vest : ls_gar_rebreather_vest
    {
        author = "Dak";
        scope = 2;
        allowedSlots[] = {BACKPACK_SLOT};
        displayName = "Clone Trooper Vest (104th)";
        hiddenSelections[] =
            {
                "camo1",
                "camo2",
                "camo3"};
        hiddenSelectionsTextures[] =
            {
                "",
                "",
                ""};
        class ItemInfo : VestItem
        {
            uniformModel = "-";
			scope = 2;
            containerClass = "Supply80";
            vestType = "Rebreather";
            mass = 80;
            hiddenSelections[] =
                {
                    "camo1",
                    "camo2",
                    "camo3"};

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
    // Raider Accessories Officer
    class JA_104th_AB_ME_NCO_Base_Trooper_Armor : ls_gar_airborneNCO_vest
    {
        author = "Dak";
        displayName = "Clone Airborne NCO Vest (104th MLV)";
        hiddenSelections[] = {"ammo","camo1","camo2","pauldron"};
        hiddenSelectionsTextures[] =
            {
                "104thMalevolenceCompany\data\Textures\104th_Heavy_Accessories_Trooper_VetRed.paa", // Heavy
                "104thMalevolenceCompany\data\Textures\104th_Heavy_Accessories_Trooper_VetRed.paa", // Heavy
                "104thMalevolenceCompany\data\Textures\104th_Officer_Accessories_P1_Red_AB_Base.paa",
                "104thMalevolenceCompany\data\Textures\104th_Heavy_Accessories_Trooper_VetRed.paa"  // Heavy
            };
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
    class JA_104th_AB_ME_NCO_Alt1_Trooper_Armor : ls_gar_airborneNCO_vest
    {
        author = "Dak";
        displayName = "Clone Airborne NCO Vest (104th MLV 01)";
        hiddenSelections[] = {"ammo","camo1","camo2","pauldron"};
        hiddenSelectionsTextures[] =
            {
                "104thMalevolenceCompany\data\Textures\104th_Heavy_Accessories_Trooper_VetRed.paa", // Heavy
                "104thMalevolenceCompany\data\Textures\104th_Heavy_Accessories_Trooper_VetRed.paa", // Heavy
                "104thMalevolenceCompany\data\Textures\104th_Officer_Accessories_P1_Red_AB_Alt_1.paa",
                "104thMalevolenceCompany\data\Textures\104th_Heavy_Accessories_Trooper_VetRed.paa"  // Heavy
            };
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
    class JA_104th_AB_ME_NCO_Alt2_Trooper_Armor : ls_gar_airborneNCO_vest
    {
        author = "Dak";
        displayName = "Clone Airborne NCO Vest (104th MLV 02)";
        hiddenSelections[] = {"ammo","camo1","camo2","pauldron"};
        hiddenSelectionsTextures[] =
            {
                "104thMalevolenceCompany\data\Textures\104th_Heavy_Accessories_Trooper_VetRed.paa", // Heavy
                "104thMalevolenceCompany\data\Textures\104th_Heavy_Accessories_Trooper_VetRed.paa", // Heavy
                "104thMalevolenceCompany\data\Textures\104th_Officer_Accessories_P1_Red_AB_Alt_2.paa",
                "104thMalevolenceCompany\data\Textures\104th_Heavy_Accessories_Trooper_VetRed.paa"  // Heavy
            };
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
    class JA_104th_AB_ME_NCO_Medic_Trooper_Armor : ls_gar_airborneNCO_vest
    {
        author = "Dak";
        displayName = "Clone Airborne NCO Medic Vest (104th MLV)";
        hiddenSelections[] = {"ammo","camo1","camo2","pauldron"};
        hiddenSelectionsTextures[] =
            {
                "104thMalevolenceCompany\data\Textures\104th_Heavy_Accessories_Medic_VetRed.paa", // Heavy
                "104thMalevolenceCompany\data\Textures\104th_Heavy_Accessories_Medic_VetRed.paa", // Heavy
                "104thMalevolenceCompany\data\Textures\104th_Officer_Accessories_P1_AB_Medic.paa",
                "104thMalevolenceCompany\data\Textures\104th_Heavy_Accessories_Medic_VetRed.paa"  // Heavy
            };
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
    class JA_104th_AB_ME_Base_Trooper_Armor : ls_gar_airborne_vest
    {
        author = "Dak";
        displayName = "Clone Airborne Trooper Vest (104th MLV)";
        hiddenSelections[] = {
			"ammo", 
			"camo1", 
			"camo2", 
			"pauldron",
		};
        hiddenSelectionsTextures[] =
            {
                "104thMalevolenceCompany\data\Textures\104th_Heavy_Accessories_Trooper_VetRed.paa", // Heavy
                "104thMalevolenceCompany\data\Textures\104th_Heavy_Accessories_Trooper_VetRed.paa", // Heavy
                "104thMalevolenceCompany\data\Textures\104th_Officer_Accessories_P1_AB_Trooper.paa",
            };
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
    class JA_104th_AB_ME_Medic_Trooper_Armor : ls_gar_airborne_vest
    {
        author = "Dak";
        displayName = "Clone Airborne Medic Vest (104th MLV)";
        hiddenSelections[] = {
			"ammo", 
			"camo1", 
			"camo2", 
			"pauldron",
		};
        hiddenSelectionsTextures[] =
            {
                "104thMalevolenceCompany\data\Textures\104th_Heavy_Accessories_Medic_VetRed.paa", // Heavy
                "104thMalevolenceCompany\data\Textures\104th_Heavy_Accessories_Medic_VetRed.paa", // Heavy
                "104thMalevolenceCompany\data\Textures\104th_Officer_Accessories_P1_AB_Medic.paa",
            };
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
    class JA_104th_AB_ME_Officer_Trooper_Armor : ls_gar_forceReconLieutenant_vest // Fixes the white pauldron issue
    {
        author = "Dak";
        displayName = "Clone Airborne Officer Vest (104th MLV)";
        model = "\ls\core\addons\characters_clone_legacy\vests\forceRecon\ls_gar_forceReconLieutenant_vest.p3d";
        uniformModel = "\ls\core\addons\characters_clone_legacy\vests\forceRecon\ls_gar_forceReconLieutenant_vest.p3d";
        hiddenSelections[] =
            {
                "camo1",
                "camo2"};
        hiddenSelectionsTextures[] =
            {
                "104thMalevolenceCompany\data\Textures\104th_Officer_Accessories_P1_Red_AB_Base.paa",
                "104thMalevolenceCompany\data\Textures\104th_Heavy_Accessories_Trooper_VetRed.paa"};
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
    // Aviation Accessories
    class JA_104th_ME_Pilot_officer_Vest : ls_gar_officer_vest
    {
        author = "Dak";
        displayName = "Clone Pilot Officer Vest (104th MLV)";
        hiddenSelections[] =
            {
                "camo1"};
        hiddenSelectionsTextures[] =
            {
                "104thMalevolenceCompany\data\Textures\104th_Officer_Accessories_MLV_Aviation.paa"};
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
};

class CfgVehicles
{
    class lsd_gar_phase2_base;
    class lsd_gar_phase2_base;
    class ls_gar_marshalCommander_base;
    class ls_gar_standard_backpack;
    class ls_gar_rto_mini_backpack;
    class ls_gar_heavy_backpack;
    class ls_gar_medic_backpack;
    class ls_gar_Radio_backpack;
    class EG_InvisBagMain;

    class JA_104th_Base_Malevolence : lsd_gar_phase2_base
    {
        author = "Dak";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        side = 1;
        uniformClass = "JA_104th_Malevolence_Base_Uniform";
        displayName = "104th MLV - Trooper";
        faction = "104th_Guys";
        editorSubcategory = "104th_Categ_Clones_malevolence";
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {"104thMalevolenceCompany\data\Textures\104th_P1_Red_1C_Upper.paa", "104thMalevolenceCompany\data\Textures\104th_P1_Red_1C_Lower.paa"};
        linkedItems[] = {JA_104th_Malevolence_Base_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};        // all items that will be on unit
        respawnLinkedItems[] = {JA_104th_Malevolence_Base_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
    };
    class JA_104th_Base_Malevolence_Medic : lsd_gar_phase2_base
    {
        author = "Dak";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        side = 1;
        uniformClass = "JA_104th_Malevolence_Base_Medic_Uniform";
        displayName = "104th MLV - Trooper Medic";
        faction = "104th_Guys";
        editorSubcategory = "104th_Categ_Clones_malevolence";
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {"104thMalevolenceCompany\data\Textures\104th_P1_Red_1C_Medic_Upper.paa", "104thMalevolenceCompany\data\Textures\104th_P1_Red_1C_Medic_Lower.paa"};
        linkedItems[] = {JA_104th_Malevolence_Base_Medic_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};        // all items that will be on unit
        respawnLinkedItems[] = {JA_104th_Malevolence_Base_Medic_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
    };
    class JA_104th_Base_Malevolence_ARC : lsd_gar_phase2_base
    {
        author = "Dak";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        side = 1;
        uniformClass = "JA_104th_Malevolence_Base_ARC_Uniform";
        displayName = "104th MLV - Trooper ARC";
        faction = "104th_Guys";
        editorSubcategory = "104th_Categ_Clones_malevolence";
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {"104thMalevolenceCompany\data\Textures\104th_P1_Red_1C_ARC_Upper.paa", "104thMalevolenceCompany\data\Textures\104th_P1_Red_1C_ARC_Lower.paa"};
        linkedItems[] = {JA_104th_Malevolence_Base_ARC_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};        // all items that will be on unit
        respawnLinkedItems[] = {JA_104th_Malevolence_Base_ARC_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
    };
};

class CfgGroups
{
    class West
    {
        class JA_Bluefor
        {
            name = "Jango's Finest";
            class JA_Bluefor_P1_Troopers_Malevolence
            {
                name = "Malevolence - P1";
                class JA_Group_P1_Team_Malevolence
                {
                    name = "P1 - Team";
                    side = 1;
                    class Unit0
                    {
                        vehicle = "JA_104th_Base_Malevolence";
                        rank = "CORPORAL";
                        position[] = {0, 0, 0};
                        side = 1;
                    };
                    class Unit1
                    {
                        vehicle = "JA_104th_Base_Malevolence";
                        rank = "PRIVATE";
                        position[] = {-5, -5, 0};
                        side = 1;
                    };
                    class Unit2
                    {
                        vehicle = "JA_104th_Base_Malevolence_Medic";
                        rank = "PRIVATE";
                        position[] = {5, -5, 0};
                        side = 1;
                    };
                };
                class JA_Group_P1_Squad_Malevolence
                {
                    name = "P1 - Squad";
                    side = 1;
                    class Unit0
                    {
                        vehicle = "JA_104th_Base_Malevolence";
                        rank = "CORPORAL";
                        position[] = {0, 0, 0};
                        side = 1;
                    };
                    class Unit1
                    {
                        vehicle = "JA_104th_Base_Malevolence";
                        rank = "PRIVATE";
                        position[] = {-5, -5, 0};
                        side = 1;
                    };
                    class Unit2
                    {
                        vehicle = "JA_104th_Base_Malevolence_Medic";
                        rank = "PRIVATE";
                        position[] = {5, -5, 0};
                        side = 1;
                    };
                    class Unit3
                    {
                        vehicle = "JA_104th_Base_Malevolence";
                        rank = "PRIVATE";
                        position[] = {10, -10, 0};
                        side = 1;
                    };
                    class Unit4
                    {
                        vehicle = "JA_104th_Base_Malevolence";
                        rank = "CORPORAL";
                        position[] = {-10, -10, 0};
                        side = 1;
                    };
                    class Unit5
                    {
                        vehicle = "JA_104th_Base_Malevolence";
                        rank = "PRIVATE";
                        position[] = {-15, -15, 0};
                        side = 1;
                    };
                };
                class JA_Group_ARF_Team_Malevolence
                {
                    name = "P1 - ARF Squad";
                    side = 1;
                    class Unit0
                    {
                        vehicle = "JA_104th_Base_Malevolence_ARF";
                        rank = "CORPORAL";
                        position[] = {0, 0, 0};
                        side = 1;
                    };
                    class Unit1
                    {
                        vehicle = "JA_104th_Base_Malevolence_ARF";
                        rank = "PRIVATE";
                        position[] = {-5, -5, 0};
                        side = 1;
                    };
                    class Unit2
                    {
                        vehicle = "JA_104th_Base_Malevolence_ARF";
                        rank = "PRIVATE";
                        position[] = {5, -5, 0};
                        side = 1;
                    };
                    class Unit3
                    {
                        vehicle = "JA_104th_Base_Malevolence_ARF";
                        rank = "PRIVATE";
                        position[] = {10, -10, 0};
                        side = 1;
                    };
                };
            };
        };
    };
};

class CfgGlasses
{
    class JA_104th_P1_ME_Trooper_Headware
    {
        author = "Dak";
        displayName = "Clone Airborne Satchel Yellow (104th MLV)";
        descriptionUse = "give sachel";
        scope = 2;
        identityTypes[] = {};
        hiddenSelections[] = {"ammo", "camo1", "camo2", "camo3", "camo4", "camo5", "pauldron"};
        hiddenSelectionsTextures[] =
            {
                "",
                "",
                "104thMalevolenceCompany\data\Textures\104th_Heavy_Accessories_Trooper_VetRed.paa",
                "",
                "",
                "",
                ""};
        model = "\ls\core\addons\characters_clone_legacy\vests\heavy\ls_gar_heavyAlt_vest.p3d";
        // model = "\ls\core\addons\characters_clone_legacy\vests\airborne\ls_gar_airborne_vest.p3d";
    };
    class JA_104th_P1_ME_Medic_Headware
    {
        author = "Dak";
        displayName = "Clone Airborne Satchel Blue (104th MLV)";
        descriptionUse = "give sachel";
        scope = 2;
        identityTypes[] = {};
        hiddenSelections[] = {"ammo", "camo1", "camo2", "camo3", "camo4", "camo5", "pauldron"};
        hiddenSelectionsTextures[] =
            {
                "",
                "",
                "104thMalevolenceCompany\data\Textures\104th_Heavy_Accessories_Medic_VetRed.paa",
                "",
                "",
                "",
                ""};
        model = "\ls\core\addons\characters_clone_legacy\vests\heavy\ls_gar_heavyAlt_vest.p3d";
        // model = "\ls\core\addons\characters_clone_legacy\vests\airborne\ls_gar_airborne_vest.p3d";
    };
}
