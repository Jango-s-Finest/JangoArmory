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
			
			"JA_104th_Malevolence_Base_Uniform",
			"JA_104th_Malevolence_Base_Medic_Uniform",
			"JA_104th_Invisible_Base_Rebreather_Uniform",

			"JA_104th_ME_Vest",
            "JA_104th_ME_PSGT_Base_Kama",
            "JA_104th_ME_PSGT_Alt1_Kama",
            "JA_104th_ME_PSGT_Alt2_Kama",
            "JA_104th_ME_Medic_Vest",
            "JA_104th_ME_officer_Vest",
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
        side = 1; // Opfor = 0, Blufor = 1, Indep = 2. 
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
	class SWLB_Clone_Pilot_P2_Helmet;
	class SWLB_clone_uniform;
	class SWLB_clone_mc_uniform;
	class SWLB_clone_commander_armor;
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
	class SWLB_clone_airborne_nco_armor;
	class SWLB_CEE_Lightweight_Rebreather;
	class SWLB_CEE_Recon_Lieutenant;
	class SWLB_clone_airborne_armor;
	class ls_gar_airborneOfficer_vest;
	class SWLB_clone_kama_armor;
	class SWLB_clone_medic_armor;
	class SWLB_CEE_Force_Recon_NCO;
	class SWLB_CEE_Force_Recon;
	class SWLB_CEE_Heavy_Vest;
	class SWLB_clone_grenadier_armor;
	class SWLB_clone_basic_armor;
	class UniformItem;
	class VestItem;
	class Bag_Base;

    // Inheritance for vests
    // Makes making each vest a rebreather easier
    class ItemInfo;
    class SWLB_clone_officer_armor;
    class SWLB_clone_arc_armor: SWLB_clone_officer_armor
    {
        class ItemInfo;
    };

	// MLV Base Helmets

	class JA_104th_Malevolence_Base_Helmet : SWLB_clone_P1_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper P1 Helmet (104th MLV)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thMalevolenceCompany\data\Textures\104th_P1_Red_1C_CT_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_Malevolence_Base_Medic_Helmet : SWLB_clone_P1_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper P1 Helmet (104th MLV Medic)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thMalevolenceCompany\data\Textures\104th_P1_Red_1C_Medic_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_Malevolence_Base_ARF_Helmet : SWLB_clone_ARF_P1_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = "true";
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper ARF Helmet (104th MLV)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thMalevolenceCompany\data\Textures\104th_P1_Red_1C_ARF_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_Malevolence_Commander_Helmet : SWLB_clone_P1_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = "true";
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper P1 Helmet (104th MLV Commander)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thMalevolenceCompany\data\Textures\104th_P1_Red_1C_Commander_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_Malevolence_JNCO_Helmet : SWLB_clone_P1_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = "true";
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper P1 Helmet (104th MLV JNCO)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thMalevolenceCompany\data\Textures\104th_P1_Red_1C_JNCO_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_Malevolence_Officer_Helmet : SWLB_clone_P1_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = "true";
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper P1 Helmet (104th MLV Officer)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thMalevolenceCompany\data\Textures\104th_P1_Red_1C_Officer_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_Malevolence_SNCO_Helmet : SWLB_clone_P1_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = "true";
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper P1 Helmet (104th MLV SNCO)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thMalevolenceCompany\data\Textures\104th_P1_Red_1C_SNCO_Helmet.paa" }; // the file path to the texture
	};

	// MLV Base Uniforms

	class JA_104th_Malevolence_Base_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper P1 armor (104th MLV)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"104thMalevolenceCompany\data\Textures\104th_P1_Red_1C_Upper.paa",
			"104thMalevolenceCompany\data\Textures\104th_P1_Red_1C_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Base_Malevolence";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Malevolence_Base_Medic_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper P1 Medic armor (104th MLV)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"104thMalevolenceCompany\data\Textures\104th_P1_Red_1C_Medic_Upper.paa",
			"104thMalevolenceCompany\data\Textures\104th_P1_Red_1C_Medic_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Base_Malevolence_Medic";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	}
	class JA_104th_Invisible_Base_Rebreather_Uniform : SWLB_CEE_Lightweight_Rebreather
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Lightweight Rebreather Vest (Invisible)";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			""
		};
		class ItemInfo: VestItem
		{
			uniformModel="-";
			containerClass="Supply100";
			vestType = "Rebreather";
			mass=80;
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"camo3"
			};
			class HitpointsProtectionInfo
			{
				class Legs
				{
					hitpointName="HitLegs";
					armor=6;
					passThrough=0.30000001;
				};
			};
		};
	};

	// MLV Base Vests

	    class JA_104th_Vest_ME : SWLB_CEE_Recon_Lieutenant
    {
        author = "Dak";
        displayName = "Clone Trooper Captain Vest (104th MLV)";
        model = "\SWLB_CEE\data\SWLB_CEE_Recon_Lieutenant.p3d";
        uniformModel = "\SWLB_CEE\data\SWLB_CEE_Recon_Lieutenant.p3d";
        hiddenSelections[] =
            {
                "camo1",
                "camo2"};
        hiddenSelectionsTextures[] = 
            {
                "104thMalevolenceCompany\data\Textures\104th_Officer_Accessories_P1_Red_Company_Base.paa",
                "104thMalevolenceCompany\data\Textures\104th_Heavy_Accessories_Trooper_VetRed.paa"};
        class ItemInfo: Vestitem
        {
            uniformModel = "\SWLB_CEE\data\SWLB_CEE_Recon_Lieutenant.p3d";
            containerClass = "Supply100";
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
	class JA_104th_Base_Commander_Vest_ME : SWLB_clone_commander_armor
    {
        author = "Dak";
        displayName = "Clone Trooper Commander Vest (104th MLV)";
        hiddenSelections[] =
            {
                "camo1"};
        hiddenSelectionsTextures[] =
            {
                "104thMalevolenceCompany\data\Textures\104th_Officer_Accessories_P1_Red_Company_Base.paa"};
        class ItemInfo: ItemInfo
        {
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
	class JA_104th_ME_PSGT_Base_Kama : SWLB_clone_kama_armor
    {
        author = "Tundra";
        displayName = "Clone Trooper Kama (104th MLV)";
        hiddenSelections[] =
        {
            "camo1"
        };
        hiddenSelectionsTextures[] =
        {
            "104thMalevolenceCompany\data\Textures\104th_Officer_Accessories_P1_Red_AB_Base.paa"
        };
        class ItemInfo: ItemInfo
		{
            containerClass = "Supply100";
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
    class JA_104th_ME_PSGT_Alt1_Kama : SWLB_clone_kama_armor
    {
        author = "Tundra";
        displayName = "Clone Trooper Kama (104th MLV 01)";
        hiddenSelections[] =
        {
            "camo1"

        };
        hiddenSelectionsTextures[] =
        {
            "104thMalevolenceCompany\data\Textures\104th_Officer_Accessories_P1_Red_INF_Alt_1.paa"
        };
        class ItemInfo: ItemInfo
		{
            containerClass = "Supply100";
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
    class JA_104th_ME_PSGT_Alt2_Kama : SWLB_clone_kama_armor
    {
        author = "Tundra";
        displayName = "Clone Trooper Kama (104th MLV 02)";
        hiddenSelections[] =
        {
            "camo1"

        };
        hiddenSelectionsTextures[] =
        {
            "104thMalevolenceCompany\data\Textures\104th_Officer_Accessories_P1_Red_INF_Alt_2.paa"
        };
        class ItemInfo: ItemInfo
		{
            containerClass = "Supply100";
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
    class JA_104th_ME_Medic_Vest : SWLB_clone_medic_armor
    {
        author = "Dak";
        displayName = "Clone Trooper Medic Vest (104th MLV)";
        hiddenSelections[] =
            {
                "camo1"};
        hiddenSelectionsTextures[] =
            {
                "104thMalevolenceCompany\data\Textures\104th_Heavy_Accessories_Medic_VetRed.paa"
            };
        class ItemInfo: ItemInfo
        {
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
    class JA_104th_ME_officer_Vest : SWLB_clone_officer_armor
    {
        author = "Dak";
        displayName = "Clone Trooper Officer Vest (104th MLV)";
        hiddenSelections[] =
            {
                "camo1"
            };
        hiddenSelectionsTextures[] =
            {
                "104thMalevolenceCompany\data\Textures\104th_Officer_Accessories_P1_Red_INF_Base.paa"
            };
        class ItemInfo: ItemInfo
        {
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
    class JA_104th_ME_NCO_Vest : SWLB_CEE_Force_Recon_NCO
    {
        author = "Fish";
        scope = 2;
        displayName = "Clone Trooper SNCO Vest (104th MLV)";
        hiddenSelections[] = {"camo1","camo2","camo3","pauldron"};
        hiddenSelectionsTextures[] =
            {
                "104thMalevolenceCompany\data\Textures\104th_Accessories_Light_P1_Red_Base.paa", // Heavy
                "104thMalevolenceCompany\data\Textures\104th_Officer_Accessories_P1_Red_INF_Base.paa",
                "104thMalevolenceCompany\data\Textures\104th_Accessories_Light_P1_Red_Base.paa",                               // Heavy
                "104thMalevolenceCompany\data\Textures\104th_Heavy_Accessories_Trooper_VetRed.paa" // Heavy
            };
        class ItemInfo: ItemInfo
		{
            containerClass = "Supply100";
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
    class JA_104th_ME_NCO_Medic_Vest : SWLB_CEE_Force_Recon_NCO
    {
        author = "Fish";
        scope = 2;
        displayName = "Clone Trooper NCO Medic Vest (104th MLV)";
        hiddenSelections[] = {"camo1","camo2","camo3","pauldron"};
        hiddenSelectionsTextures[] =
            {
                "104thMalevolenceCompany\data\Textures\104th_Accessories_Light_P1_Red_Base.paa", // Heavy
                "104thMalevolenceCompany\data\Textures\104th_Officer_Accessories_P1_INF_Medic.paa",
                "104thMalevolenceCompany\data\Textures\104th_Accessories_Light_P1_Red_Base.paa", // Heavy
                "104thMalevolenceCompany\data\Textures\104th_Heavy_Accessories_Medic_VetRed.paa" // Heavy
            };
        class ItemInfo: ItemInfo
		{
            containerClass = "Supply100";
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
    class JA_104th_ME_Recon_Vest : SWLB_CEE_Force_Recon_NCO
	{
		author = "Emmet"; 
		scope = 2;
		displayName = "Clone Force Recon Vest (104th MLV MK1)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2",
				"camo3"};
		hiddenSelectionsTextures[] =
			{
				"104thMalevolenceCompany\data\Textures\104th_Accessories_Light_P1_Red_Base.paa", // Heavy
                "104thMalevolenceCompany\data\Textures\104th_Officer_Accessories_P1_Red_INF_Base.paa",
				"104thMalevolenceCompany\data\Textures\Heavy_Accessories_Trooper_VetRed.paa" // Heavy
			};
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply100";
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
	class JA_104th_ME_Recon_Vest2 : SWLB_CEE_Force_Recon
	{
		author = "Emmet"; 
		scope = 2;
		displayName = "Clone Force Recon Vest (104th MLV MK2)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"104thMalevolenceCompany\data\Textures\Heavy_Accessories_Trooper_VetRed.paa", // Heavy
				"104thMalevolenceCompany\data\Textures\104th_Accessories_Light_P1_Red_Base.paa"
			};
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply100";
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
	class JA_104th_ME_Grenadier_Vest : SWLB_clone_grenadier_armor
	{
		author = "Emmet"; 
		scope = 2;
		displayName = "Clone Trooper Grenadier Vest (104th MLV)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"
			};
		hiddenSelectionsTextures[] = {
			"104thMalevolenceCompany\data\Textures\104th_Accessories_Light_P1_Red_Base.paa",
			"104thMalevolenceCompany\data\Textures\104th_Heavy_Accessories_Medic_VetRed.paa"
		};

		class ItemInfo: ItemInfo
		{
			containerClass = "Supply100";
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
	class JA_104th_ME_Heavy_Vest : SWLB_CEE_Heavy_Vest
	{
		author = "Emmet"; 
		scope = 2;
		displayName = "Clone Trooper Heavy Vest (104th MLV)";
		hiddenSelections[] = {"ammo","camo1","camo2","camo3","pauldron"};
		hiddenSelectionsTextures[] = {
			"104thMalevolenceCompany\data\Textures\104th_Heavy_Accessories_Medic_VetRed.paa",
			"104thMalevolenceCompany\data\Textures\104th_Heavy_Accessories_Medic_VetRed.paa",
			"104thMalevolenceCompany\data\Textures\104th_Heavy_Accessories_Medic_VetRed.paa",
			"104thMalevolenceCompany\data\Textures\104th_Accessories_Light_P1_Red_Base.paa",
			"104thMalevolenceCompany\data\Textures\104th_Heavy_Accessories_Medic_VetRed.paa"};

		class ItemInfo: ItemInfo
		{
			containerClass = "Supply100";
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
	//Raider Accessories Officer    
	class JA_104th_AB_ME_NCO_Base_Trooper_Armor : SWLB_clone_airborne_nco_armor
	{
		author = "Dak";
		displayName = "Clone Airborne NCO Vest (104th MLV)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2",
				"camo3",
				"camo4"};
		hiddenSelectionsTextures[] =
			{
				"104thMalevolenceCompany\data\Textures\104th_Heavy_Accessories_Trooper_VetRed.paa", // Heavy
				"104thMalevolenceCompany\data\Textures\104th_Officer_Accessories_P1_Red_AB_Base.paa",
				"104thMalevolenceCompany\data\Textures\104th_Heavy_Accessories_Trooper_VetRed.paa", // Heavy
				"104thMalevolenceCompany\data\Textures\104th_Heavy_Accessories_Trooper_VetRed.paa"  // Heavy
			};
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply100";
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
	class JA_104th_AB_ME_NCO_Alt1_Trooper_Armor : SWLB_clone_airborne_nco_armor
	{
		author = "Dak";
		displayName = "Clone Airborne NCO Vest (104th MLV 01)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2",
				"camo3",
				"camo4"};
		hiddenSelectionsTextures[] =
			{
				"104thMalevolenceCompany\data\Textures\104th_Heavy_Accessories_Trooper_VetRed.paa", // Heavy
				"104thMalevolenceCompany\data\Textures\104th_Officer_Accessories_P1_Red_AB_Alt_1.paa",
				"104thMalevolenceCompany\data\Textures\104th_Heavy_Accessories_Trooper_VetRed.paa", // Heavy
				"104thMalevolenceCompany\data\Textures\104th_Heavy_Accessories_Trooper_VetRed.paa"  // Heavy
			};
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply100";
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
	class JA_104th_AB_ME_NCO_Alt2_Trooper_Armor : SWLB_clone_airborne_nco_armor
	{
		author = "Dak";
		displayName = "Clone Airborne NCO Vest (104th MLV 02)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2",
				"camo3",
				"camo4"};
		hiddenSelectionsTextures[] =
			{
				"104thMalevolenceCompany\data\Textures\104th_Heavy_Accessories_Trooper_VetRed.paa", // Heavy
				"104thMalevolenceCompany\data\Textures\104th_Officer_Accessories_P1_Red_AB_Alt_2.paa",
				"104thMalevolenceCompany\data\Textures\104th_Heavy_Accessories_Trooper_VetRed.paa", // Heavy
				"104thMalevolenceCompany\data\Textures\104th_Heavy_Accessories_Trooper_VetRed.paa"  // Heavy
			};
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply100";
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
	class JA_104th_AB_ME_NCO_Medic_Trooper_Armor : SWLB_clone_airborne_nco_armor
	{
		author = "Dak";
		displayName = "Clone Airborne NCO Medic Vest (104th MLV)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2",
				"camo3",
				"camo4"};
		hiddenSelectionsTextures[] =
			{
				"104thMalevolenceCompany\data\Textures\104th_Heavy_Accessories_Medic_VetRed.paa", // Heavy
				"104thMalevolenceCompany\data\Textures\104th_Officer_Accessories_P1_AB_Medic.paa",
				"104thMalevolenceCompany\data\Textures\104th_Heavy_Accessories_Medic_VetRed.paa", // Heavy
				"104thMalevolenceCompany\data\Textures\104th_Heavy_Accessories_Medic_VetRed.paa"  // Heavy
			};
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply100";
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
	class JA_104th_AB_ME_Base_Trooper_Armor : SWLB_clone_airborne_armor
	{
		author = "Dak";
		displayName = "Clone Airborne Trooper Vest (104th MLV)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2",
				"camo3",
				"camo4"};
		hiddenSelectionsTextures[] =
			{
				"104thMalevolenceCompany\data\Textures\104th_Heavy_Accessories_Trooper_VetRed.paa", // Heavy
				"104thMalevolenceCompany\data\Textures\104th_Officer_Accessories_P1_AB_Trooper.paa",
				"104thMalevolenceCompany\data\Textures\104th_Heavy_Accessories_Trooper_VetRed.paa" // Heavy
			};
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply100";
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
	class JA_104th_AB_ME_Medic_Trooper_Armor : SWLB_clone_airborne_armor
	{
		author = "Dak";
		displayName = "Clone Airborne Medic Vest (104th MLV)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2",
				"camo3",
				"camo4"};
		hiddenSelectionsTextures[] =
			{
				"104thMalevolenceCompany\data\Textures\104th_ Heavy_Accessories_Medic_VetRed.paa", // Heavy
				"104thMalevolenceCompany\data\Textures\104th_ Officer_Accessories_P1_AB_Medic.paa",
				"104thMalevolenceCompany\data\Textures\104th_ Heavy_Accessories_Medic_VetRed.paa" // Heavy
			};
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply100";
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
	class JA_104th_AB_ME_Officer_Trooper_Armor : ls_gar_airborneOfficer_vest // Fixes the white pauldron issue
	{
		author = "Dak";
		displayName = "Clone Airborne Officer Vest (104th MLV)";
		hiddenSelectionsTextures[] =
			{
				"104thMalevolenceCompany\data\Textures\104th_ Heavy_Accessories_Trooper_VetRed.paa",	  // Small "pocket" on left arm
				"104thMalevolenceCompany\data\Textures\104th_ Heavy_Accessories_Trooper_VetRed.paa",	  // Heavy Vest Bag / Straps
				"104thMalevolenceCompany\data\Textures104th_ Officer_Accessories_P1_Red_AB_Base.paa", // Kama
				"104thMalevolenceCompany\data\Textures\104th_ Heavy_Accessories_Trooper_VetRed.paa"	  /*,    // Unknown, No change seen in-game when changed
					 "JangosArmory1\data\Textures104th_ Officer_Accessories_P1_Red_AB_Base.paa"*/
																			  // Pauldron - Currently broken until LS fixes the selections
																			  // Final texture is commented out as the new airborne vest has a small piece of the NCO (small) pauldron that is textured.
																			  // Leaving it empty makes it appear invisible.
			};
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply100";
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
	class SWLB_clone_base_P1;
	class SWLB_clone_marshal_commander_base_P2;
	class SWLB_clone_backpack;
	class SWLB_clone_RTO_mini_backpack;
	class SWLB_clone_backpack_heavy;
	class SWLB_clone_backpack_medic;
	class SWLB_clone_backpack_RTO;
	class EG_InvisBagMain;


	class JA_104th_Base_Malevolence : SWLB_clone_base_P1
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
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"104thMalevolenceCompany\data\Textures\104th_P1_Red_1C_Upper.paa", "104thMalevolenceCompany\data\Textures\104th_P1_Red_1C_Lower.paa"};
		linkedItems[] = {JA_104th_Malevolence_Base_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Malevolence_Base_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};	
	class JA_104th_Base_Malevolence_Medic : SWLB_clone_base_P1
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
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"104thMalevolenceCompany\data\Textures\104th_P1_Red_1C_Medic_Upper.paa", "104thMalevolenceCompany\data\Textures\104th_P1_Red_1C_Medic_Lower.paa"};
		linkedItems[] = {JA_104th_Malevolence_Base_Medic_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Malevolence_Base_Medic_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};

};

class CfgGroups{
	class West{
		class JA_Bluefor{
			name = "Jango's Finest";
			class JA_Bluefor_P1_Troopers_Malevolence{
				name = "Malevolence - P1";
				class JA_Group_P1_Team_Malevolence{
					name = "P1 - Team";
					side = 1;
					class Unit0 {
						vehicle = "JA_104th_Base_Malevolence";
						rank = "CORPORAL";
						position[] = {0,0,0};
						side = 1;
					};
					class Unit1 {
						vehicle = "JA_104th_Base_Malevolence";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
						side = 1;
					};
					class Unit2 {
						vehicle = "JA_104th_Base_Malevolence_Medic";
						rank = "PRIVATE";
						position[] = {5,-5,0};
						side = 1;
					};
				};
				class JA_Group_P1_Squad_Malevolence{
					name = "P1 - Squad";
					side = 1;
					class Unit0 {
						vehicle = "JA_104th_Base_Malevolence";
						rank = "CORPORAL";
						position[] = {0,0,0};
						side = 1;
					};
					class Unit1 {
						vehicle = "JA_104th_Base_Malevolence";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
						side = 1;
					};
					class Unit2 {
						vehicle = "JA_104th_Base_Malevolence_Medic";
						rank = "PRIVATE";
						position[] = {5,-5,0};
						side = 1;
					};
					class Unit3 {
						vehicle = "JA_104th_Base_Malevolence";
						rank = "PRIVATE";
						position[] = {10,-10,0};
						side = 1;
					};
					class Unit4 {
						vehicle = "JA_104th_Base_Malevolence";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
						side = 1;
					};
					class Unit5 {
						vehicle = "JA_104th_Base_Malevolence";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
						side = 1;
					};
				};
				class JA_Group_ARF_Team_Malevolence{
					name = "P1 - ARF Squad";
					side = 1;
					class Unit0 {
						vehicle = "JA_104th_Base_Malevolence_ARF";
						rank = "CORPORAL";
						position[] = {0,0,0};
						side = 1;
					};
					class Unit1 {
						vehicle = "JA_104th_Base_Malevolence_ARF";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
						side = 1;
					};
					class Unit2 {
						vehicle = "JA_104th_Base_Malevolence_ARF";
						rank = "PRIVATE";
						position[] = {5,-5,0};
						side = 1;
					};
					class Unit3 {
						vehicle = "JA_104th_Base_Malevolence_ARF";
						rank = "PRIVATE";
						position[] = {10,-10,0};
						side = 1;
					};
				};	
			};
		};
	};
};