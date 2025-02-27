#include "basicDefines_A3.hpp"
class DefaultEventhandlers;
class UniformSlotInfo;
class CfgPatches
{
	class Jangos_Armory_Phantom
	{
		author = "Jango's Finest";
		units[] = {
			"JA_104th_P2_1C_01_CT",
			"JA_104th_P2_1C_02_CT",
			"JA_104th_P2_1C_Medic",
			"JA_104th_P2_1C_Engineer",
			"JA_104th_P2_1C_JTAC"
		};
		weapons[] = {
			"JA_104th_P2_1C_01_CT_Helmet",
			"JA_104th_P2_1C_02_CT_Helmet",
			"JA_104th_P2_1C_03_CT_Helmet",
			"JA_104th_P2_1C_04_CT_Helmet",
			"JA_104th_P2_1C_05_CT_Helmet",
			"JA_104th_P2_1C_06_CT_Helmet",
			"JA_104th_P2_1C_07_CT_Helmet",
			"JA_104th_P2_1C_08_CT_Helmet",
			"JA_104th_P2_1C_Medic_Helmet",
			"JA_104th_Engineer_1C_Base_Helmet",
			"JA_104th_JTAC_1C_Helmet",
			"JA_104th_Desert_1C_Medic_Helmet",
			"JA_104th_Desert_1C_Medic_NCO_Helmet",
			"JA_104th_Desert_1C_NCO_Helmet",
			"JA_104th_Desert_1C_Officer_Helmet",
			"JA_104th_Desert_1C_Base_Helmet",

			"JA_104th_P2_1C_01_CT_Uniform",
			"JA_104th_P2_1C_02_CT_Uniform",
			"JA_104th_P2_1C_Medic_Uniform",
			"JA_104th_P2_1C_JTAC_Uniform",
			"JA_104th_P2_1C_Engineer_Uniform",
			"JA_104th_ARC_P2_Vest",
            "JA_104th_Vest_P2",
			"JA_104th_P2_Vest",
            "JA_104th_P2_PSGT_Base_Kama",
            "JA_104th_P2_PSGT_Alt1_Kama",
            "JA_104th_P2_PSGT_Alt2_Kama",
            "JA_104th_P2_Medic_Vest",
            "JA_104th_P2_officer_Vest",
            "JA_104th_P2_NCO_Vest",
            "JA_104th_P2_NCO_Medic_Vest",
            "JA_104th_P2_Recon_Vest",
            "JA_104th_P2_Recon_Vest2",
            "JA_104th_P2_Grenadier_Vest",
            "JA_104th_P2_basic_Vest",
            "JA_104th_P2_Heavy_Vest",
			"JA_104th_Base_Commander_Vest_P2",
			"JA_104th_AB_P2_NCO_Base_Trooper_Armor",
			"JA_104th_AB_P2_NCO_Alt1_Trooper_Armor",
			"JA_104th_AB_P2_NCO_Alt2_Trooper_Armor",
			"JA_104th_AB_P2_NCO_Medic_Trooper_Armor",
			"JA_104th_AB_P2_Base_Trooper_Armor",
			"JA_104th_AB_P2_Medic_Trooper_Armor",
			"JA_104th_AB_P2_Officer_Trooper_Armor"
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
	class ls_gar_desert_helmet;
	class ls_gar_engineer_helmet;
	class SWLB_clone_P15_Helmet;
	class SWLB_clone_P1_helmet;
	class SWLB_clone_P1_2_helmet;
	class SWLB_clone_P2_helmet;
	class SWLB_P2_SpecOps_Helmet;
	class lsd_gar_standart_nvg;
	class lsd_gar_rangefinder_nvg;
	class lsd_gar_p2MarshalCommander_nvg;
	class SWLB_clone_airborne_nco_armor;
	class SWLB_CEE_Lightweight_Rebreather;
	class SWLB_clone_basic_armor;
	class JA_104th_Clone_Base_armor;
	class ls_blueforVest_base;
	class SWLB_clone_airborne_armor;
	class UniformItem;
	class VestItem;
	class Bag_Base;
	class JA_104th_Base_CT_Uniform : SWLB_clone_uniform
	{
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Base_CT";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
			class HitpointsProtectionInfo
			{
				class Arms
				{
					hitpointName = "HitArms";
					armor = 40;
					explosionShielding  = 20;
					passThrough = 0.5;
				};
				class Hands
				{
					hitpointName = "HitHands";
					armor = 40;
					explosionShielding  = 20;
					passThrough = 0.5;
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 40;
					explosionShielding  = 20;
					passThrough = 0.5;
				};
				
				class chest
				{
					hitpointName = "HitChest";
					armor = 40;
					explosionShielding  = 20;
					passThrough = 0.5;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 40;
					explosionShielding  = 20;
					passThrough = 0.5;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 40;
					explosionShielding  = 20;
					passThrough = 0.5;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 40;
					explosionShielding  = 20;
					passThrough = 0.5;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 40;
					explosionShielding  = 20;
					passThrough = 0.5;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 40;
					explosionShielding  = 20;
					passThrough = 0.5;
				};
			};
		};
	};

    // Inheritance for vests
    // Makes making each vest a rebreather easier
    // Inheritance for vests
    // Makes making each vest a rebreather easier
    class ItemInfo;
    class ls_gar_airborneOfficer_vest : ls_blueforVest_base
	{
		class ItemInfo;
	};
    class SWLB_CEE_Recon_Lieutenant: SWLB_clone_basic_armor 
    {
        class ItemInfo;
    };
	class SWLB_clone_officer_armor : SWLB_clone_basic_armor
    {
        class ItemInfo;
    };
    class SWLB_clone_arc_armor: SWLB_clone_officer_armor
    {
        class ItemInfo;
    };
	class SWLB_clone_kama_armor: JA_104th_Clone_Base_armor
    {
        class ItemInfo;
    };
    class SWLB_clone_medic_armor: SWLB_clone_basic_armor
    {
        class ItemInfo;
    };
    class SWLB_CEE_Force_Recon_NCO : SWLB_clone_airborne_armor
    {
        class ItemInfo;
    };
    class SWLB_CEE_Force_Recon : SWLB_clone_airborne_armor
    {
        class ItemInfo;
    };
    class SWLB_CEE_Heavy_Vest : SWLB_clone_airborne_armor
    {
        class ItemInfo;
    };
	class SWLB_clone_grenadier_armor : SWLB_clone_basic_armor
    {
        class ItemInfo;
    };

	class JA_104th_P2_1C_01_CT_Helmet : SWLB_clone_P2_helmet
	{
		author = "Bulky & Cyan";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = "true";
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper P2 Helmet (104th [1C] 01 CT)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thPhantomCompany\data\Textures\104th_P2_1C_01_CT_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_P2_1C_02_CT_Helmet : SWLB_clone_P2_helmet
	{
		author = "Bulky & Cyan";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = "true";
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper P2 Helmet (104th [1C] 02 CT)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thPhantomCompany\data\Textures\104th_P2_1C_02_CT_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_P2_1C_03_CT_Helmet : SWLB_clone_P2_helmet
	{
		author = "Bulky & Cyan";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = "true";
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper P2 Helmet (104th [1C] 03 CT)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thPhantomCompany\data\Textures\104th_P2_1C_03_CT_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_P2_1C_04_CT_Helmet : SWLB_clone_P2_helmet
	{
		author = "Bulky & Cyan";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = "true";
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper P2 Helmet (104th [1C] 04 CT)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thPhantomCompany\data\Textures\104th_P2_1C_04_CT_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_P2_1C_05_CT_Helmet : SWLB_clone_P2_helmet
	{
		author = "Bulky & Cyan";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = "true";
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper P2 Helmet (104th [1C] 05 CT)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thPhantomCompany\data\Textures\104th_P2_1C_05_CT_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_P2_1C_06_CT_Helmet : SWLB_clone_P2_helmet
	{
		author = "Bulky & Cyan";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = "true";
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper P2 Helmet (104th [1C] 06 CT)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thPhantomCompany\data\Textures\104th_P2_1C_06_CT_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_P2_1C_07_CT_Helmet : SWLB_clone_P2_helmet
	{
		author = "Bulky & Cyan";
			scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = "true";
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper P2 Helmet (104th [1C] 07 CT)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thPhantomCompany\data\Textures\104th_P2_1C_07_CT_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_P2_1C_08_CT_Helmet : SWLB_clone_P2_helmet
	{
		author = "Bulky & Cyan";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = "true";
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper P2 Helmet (104th [1C] 08 CT)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thPhantomCompany\data\Textures\104th_P2_1C_08_CT_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_P2_1C_V8_CT_Helmet : SWLB_clone_P2_helmet
	{
		author = "Bulky & Cyan";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = "true";
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper P2 Helmet (104th [1C] V8 CT)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thPhantomCompany\data\Textures\104th_PC_P2_CT_V8_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_Engineer_1C_Base_Helmet : ls_gar_engineer_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";
		hiddenSelections[] =
			{
				"camo1",
				"illum",
				"visor"};											// don't change this
		displayname = "Clone Trooper Engineer Helmet (104th [1C] Base)"; // the name it will be in game
		hiddenSelectionsMaterials[] = {};
		hiddenSelectionsTextures[] = {
			"104thPhantomCompany\data\Textures\104th_Engineer_1C_Base_Helmet.paa",
			"ls_armor_bluefor\helmet\gar\engineer\data\light_co.paa",
			"ls_armor_bluefor\helmet\gar\engineer\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_P2_1C_Medic_Helmet : SWLB_clone_P2_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = "true";
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper P2 Helmet (104th [1C] Medic)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thPhantomCompany\data\Textures\104th_P2_1C_Medic_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_JTAC_1C_Helmet : SWLB_P2_SpecOps_Helmet
	{
		author = "Ice";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";
		hiddenSelections[] = {"camo1"};															 // don't change this
		displayname = "Clone Trooper P2 Special Activities Helmet (104th [1C] JTAC)";					 // the name it will be in game
		hiddenSelectionsTextures[] = {"104thPhantomCompany\data\Textures\104th_JTAC_Base_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Desert_1C_Medic_Helmet : ls_gar_desert_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = "true";
		hiddenSelections[] = { "Camo1","Visor" }; // don't change this
		displayname = "Clone Trooper Desert Helmet (104th [1C] Medic)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thPhantomCompany\data\Textures\104th_Desert_Base_Medic_Helmet.paa","104thPhantomCompany\data\Textures\Visor_Desert.paa" }; // the file path to the texture
	};

	class JA_104th_Desert_1C_Medic_NCO_Helmet : ls_gar_desert_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = "true";
		hiddenSelections[] = { "Camo1","Visor" }; // don't change this
		displayname = "Clone Trooper Desert Helmet (104th [1C] Medic NCO)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thPhantomCompany\data\Textures\104th_Desert_Base_Medic_NCO_Helmet.paa","104thPhantomCompany\data\Textures\Visor_Desert.paa" }; // the file path to the texture
	};

	class JA_104th_Desert_1C_NCO_Helmet : ls_gar_desert_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = "true";
		hiddenSelections[] = { "Camo1","Visor" }; // don't change this
		displayname = "Clone Trooper Desert Helmet (104th [1C] NCO)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thPhantomCompany\data\Textures\104th_Desert_Base_NCO_Helmet.paa","104thPhantomCompany\data\Textures\Visor_Desert.paa" }; // the file path to the texture
	};

	class JA_104th_Desert_1C_Officer_Helmet : ls_gar_desert_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = "true";
		hiddenSelections[] = { "Camo1","Visor" }; // don't change this
		displayname = "Clone Trooper Desert Helmet (104th [1C] Officer)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thPhantomCompany\data\Textures\104th_Desert_Base_Officer_Helmet","104thPhantomCompany\data\Textures\Visor_Desert.paa" }; // the file path to the texture
	};
	class JA_104th_Desert_1C_Base_Helmet : ls_gar_desert_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = "true";
		hiddenSelections[] = { "Camo1","Visor" }; // don't change this
		displayname = "Clone Trooper Desert Helmet (104th [1C] Base)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thPhantomCompany\data\Textures\104th_Desert_Base_Trooper_Helmet.paa","104thPhantomCompany\data\Textures\Visor_Desert.paa" }; // the file path to the texture
	};

	class JA_104th_AB_1C_01_CT_Helmet : SWLB_clone_AB_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};																	 // don't change this
		displayname = "Clone Trooper Airborne Helmet (104th [1C] 01 CT)";											 // the name it will be in game
		visionMode[] = {"Normal"};
		hiddenSelectionsTextures[] = {"104thPhantomCompany\data\Textures\104th_P2_AB_1C_01_CT_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_AB_1C_02_CT_Helmet : SWLB_clone_AB_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};																	 // don't change this
		displayname = "Clone Trooper Airborne Helmet (104th [1C] 02 CT)";											 // the name it will be in game
		visionMode[] = {"Normal"};
		hiddenSelectionsTextures[] = {"104thPhantomCompany\data\Textures\104th_P2_AB_1C_02_CT_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_AB_1C_03_CT_Helmet : SWLB_clone_AB_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};																	 // don't change this
		displayname = "Clone Trooper Airborne Helmet (104th [1C] 03 CT)";											 // the name it will be in game
		visionMode[] = {"Normal"};
		hiddenSelectionsTextures[] = {"104thPhantomCompany\data\Textures\104th_P2_AB_1C_03_CT_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_AB_1C_04_CT_Helmet : SWLB_clone_AB_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};																	 // don't change this
		displayname = "Clone Trooper Airborne Helmet (104th [1C] 04 CT)";											 // the name it will be in game
		visionMode[] = {"Normal"};
		hiddenSelectionsTextures[] = {"104thPhantomCompany\data\Textures\104th_P2_AB_1C_04_CT_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_AB_1C_Medic_Helmet : SWLB_clone_AB_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};																	 // don't change this
		displayname = "Clone Trooper Airborne Helmet (104th [1C] Medic)";											 // the name it will be in game
		visionMode[] = {"Normal"};
		hiddenSelectionsTextures[] = {"104thPhantomCompany\data\Textures\104th_P2_AB_1C_Medic_Helmet.paa"}; // the file path to the texture
	};

	class JA_104th_P2_1C_01_CT_Uniform : JA_104th_Base_CT_Uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper P2 Armor (104th [1C] Cerberus trooper)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"104thPhantomCompany\data\Textures\104th_P2_1C_01_CT_Upper.paa",
			"104thPhantomCompany\data\Textures\104th_P2_1C_01_CT_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_P2_1C_01_CT";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";

		};
	};
	class JA_104th_P2_1C_02_CT_Uniform : JA_104th_Base_CT_Uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper P2 Armor (104th [1C] Warhawk trooper)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"104thPhantomCompany\data\Textures\104th_P2_1C_02_CT_Upper.paa",
			"104thPhantomCompany\data\Textures\104th_P2_1C_02_CT_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_P2_1C_02_CT";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_P2_1C_Engineer_Uniform : JA_104th_Base_CT_Uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper P2 armor (104th [1C] Cerberus Engineer)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"104thPhantomCompany\data\Textures\104th_P2_1C_Engineer_Upper.paa",
				"104thPhantomCompany\data\Textures\104th_P2_1C_Engineer_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_P2_1C_Engineer";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_P2_1C_Medic_Uniform : JA_104th_Base_CT_Uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper P2 armor (104th [1C] Cerberus Medic)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"104thPhantomCompany\data\Textures\104th_P2_1C_Infantry_Medic_Upper.paa",
			"104thPhantomCompany\data\Textures\104th_P2_1C_Infantry_Medic_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_P2_1C_Medic";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_AB_1C_Medic_Uniform : JA_104th_Base_CT_Uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper P2 armor (104th [1C] Warhawk Medic)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"104thPhantomCompany\data\Textures\JA_104th_P2_AB_1C_Medic_Upper.paa",
			"104thPhantomCompany\data\Textures\JA_104th_P2_AB_1C_Medic_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_P2_1C_Medic";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_P2_1C_JTAC_Uniform : SWLB_clone_mc_uniform
	{
		author = "Ice";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper P2 armor (104th [1C] JTAC)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2",
				"biceps",
				"rank"};
		hiddenSelectionsTextures[] =
			{
				"104thPhantomCompany\data\Textures\104th_JTAC_Base_Upper.paa",
				"104thPhantomCompany\data\Textures\104th_JTAC_Base_Lower.paa",
				"104thPhantomCompany\data\Textures\104th_JTAC_Base_Upper.paa",
				""};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_P2_1C_JTAC";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	// [1C] Base Vests
	class JA_104th_ARC_P2_Vest : SWLB_clone_arc_armor
	{
		author = "DAK";
		displayName = "Clone ARC Trooper Vest (104th [1C])";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_arc_armor_ca.paa";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"

		};
		hiddenSelectionsTextures[] =
		{
			"104thPhantomCompany\data\textures\Accessories_ARC.paa",
			"104thPhantomCompany\data\Textures\104th_Officer_Accessories_P2_ARC_Base.paa"
		};
		class ItemInfo: ItemInfo
		{
			vestType = "Rebreather";
			uniformModel = "\SWLB_clones\SWLB_clone_arc_armor.p3d";
			containerClass = "Supply100";
			hiddenSelections[] = {"camo1","camo2"};
			mass = 100;
			class HitpointsProtectionInfo
			{
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
	class JA_104th_Vest_P2 : SWLB_CEE_Recon_Lieutenant
    {
        author = "Dak";
        displayName = "Clone Trooper Captain Vest (104th [1C])";
        model = "\SWLB_CEE\data\SWLB_CEE_Recon_Lieutenant.p3d";
        uniformModel = "\SWLB_CEE\data\SWLB_CEE_Recon_Lieutenant.p3d";
        hiddenSelections[] =
            {
                "camo1",
                "camo2"};
        hiddenSelectionsTextures[] = 
            {
                "104thPhantomCompany\data\Textures\104th_Officer_Accessories_P2_Company_Base.paa",
                "104thPhantomCompany\data\Textures\104th_Heavy_Accessories_Trooper_Grey.paa"};
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
	class JA_104th_Base_Commander_Vest_P2 : SWLB_clone_commander_armor
    {
        author = "Dak";
        displayName = "Clone Trooper Commander Vest (104th [1C])";
        hiddenSelections[] =
            {
                "camo1"};
        hiddenSelectionsTextures[] =
            {
                "104thPhantomCompany\data\Textures\104th_Officer_Accessories_P2_Company_Base.paa"};
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
	class JA_104th_P2_PSGT_Base_Kama : SWLB_clone_kama_armor
    {
        author = "Tundra";
        displayName = "Clone Trooper Kama (104th [1C])";
        hiddenSelections[] =
        {
            "camo1"
        };
        hiddenSelectionsTextures[] =
        {
            "104thPhantomCompany\data\Textures\104th_Officer_Accessories_P2_INF_Base.paa"
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
    class JA_104th_P2_PSGT_Alt1_Kama : SWLB_clone_kama_armor
    {
        author = "Tundra";
        displayName = "Clone Trooper Kama (104th [1C] 01)";
        hiddenSelections[] =
        {
            "camo1"

        };
        hiddenSelectionsTextures[] =
        {
            "104thPhantomCompany\data\Textures\104th_Officer_Accessories_P2_INF_Alt_1.paa"
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
    class JA_104th_P2_PSGT_Alt2_Kama : SWLB_clone_kama_armor
    {
        author = "Tundra";
        displayName = "Clone Trooper Kama (104th [1C] 02)";
        hiddenSelections[] =
        {
            "camo1"

        };
        hiddenSelectionsTextures[] =
        {
            "104thPhantomCompany\data\Textures\104th_Officer_Accessories_P2_INF_Alt_2.paa"
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
    class JA_104th_P2_Medic_Vest : SWLB_clone_medic_armor
    {
        author = "Dak";
        displayName = "Clone Trooper Medic Vest (104th [1C])";
        hiddenSelections[] =
            {
                "camo1"};
        hiddenSelectionsTextures[] =
            {
                "104thPhantomCompany\data\Textures\104th_Heavy_Accessories_Medic_Grey.paa"
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
    class JA_104th_P2_officer_Vest : SWLB_clone_officer_armor
    {
        author = "Dak";
        displayName = "Clone Trooper Officer Vest (104th [1C])";
        hiddenSelections[] =
            {
                "camo1"
            };
        hiddenSelectionsTextures[] =
            {
                "104thPhantomCompany\data\Textures\104th_Officer_Accessories_P2_INF_Base.paa"
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
    class JA_104th_P2_NCO_Vest : SWLB_CEE_Force_Recon_NCO
    {
        author = "Fish";
        scope = 2;
        displayName = "Clone Trooper SNCO Vest (104th [1C])";
        hiddenSelections[] = {"camo1","camo2","camo3","pauldron"};
        hiddenSelectionsTextures[] =
            {
                "104thPhantomCompany\data\Textures\104th_Accessories_Light_P2_Base.paa", // Heavy
                "104thPhantomCompany\data\Textures\104th_Officer_Accessories_P2_INF_Base.paa",
                "104thPhantomCompany\data\Textures\104th_Accessories_Light_P2_Base.paa",                               // Heavy
                "104thPhantomCompany\data\Textures\104th_Heavy_Accessories_Trooper_Grey.paa" // Heavy
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
    class JA_104th_P2_NCO_Medic_Vest : SWLB_clone_airborne_nco_armor
    {
        author = "Fish";
        scope = 2;
        displayName = "Clone Trooper NCO Medic Vest (104th [1C])";
        hiddenSelections[] =
			{
				"camo1",
				"camo2",
				"camo3",
				"camo4"};
		hiddenSelectionsTextures[] =
			{
				"104thPhantomCompany\data\Textures\104th_Heavy_Accessories_Medic_Grey.paa", // Heavy
				"104thPhantomCompany\data\Textures\104th_Officer_Accessories_P2_INF_Medic.paa",
				"104thPhantomCompany\data\Textures\104th_Heavy_Accessories_Medic_Grey.paa", // Heavy
				"104thPhantomCompany\data\Textures\104th_Heavy_Accessories_Medic_Grey.paa"  // Heavy
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
	class JA_104th_P2_Recon_Vest : SWLB_CEE_Force_Recon //missing straps
	{
		author = "Emmet"; 
		scope = 2;
		displayName = "Clone Force Recon Vest (104th [1C])";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"104thPhantomCompany\data\Textures\104th_Heavy_Accessories_Trooper_Grey.paa", // Heavy
				"104thPhantomCompany\data\Textures\104th_Accessories_Light_P2_Base.paa"
			};
		model = "\SWLB_CEE\data\SWLB_CEE_Force_Recon.p3d";
		uniformModel = "\SWLB_CEE\data\SWLB_CEE_Force_Recon.p3d";
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply80";
			vestType = "Rebreather";
			hiddenSelections[] ={"camo1","camo2"};
			uniformModel = "\SWLB_CEE\data\SWLB_CEE_Force_Recon.p3d";

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
	class JA_104th_P2_Grenadier_Vest : SWLB_clone_grenadier_armor
	{
		author = "Emmet"; 
		scope = 2;
		displayName = "Clone Trooper Grenadier Vest (104th [1C])";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"
			};
		hiddenSelectionsTextures[] = {
			"104thPhantomCompany\data\Textures\104th_Accessories_Light_P2_Base.paa",
			"104thPhantomCompany\data\Textures\104th_Heavy_Accessories_Trooper_Grey.paa"
		};

		class ItemInfo: ItemInfo
		{
			containerClass = "Supply80";
			vestType = "Rebreather";
			hiddenSelections[] = {"camo1","camo2"};
			uniformModel = "\SWLB_clones\SWLB_clone_grenadier_armor.p3d";
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
	class JA_104th_P2_Heavy_Vest : SWLB_CEE_Heavy_Vest
	{
		author = "Emmet"; 
		scope = 2;
		displayName = "Clone Trooper Heavy Vest (104th [1C])";
		hiddenSelections[] = {"ammo","camo1","camo2","camo3","pauldron"};
		hiddenSelectionsTextures[] = {
			"104thPhantomCompany\data\Textures\104th_Heavy_Accessories_Trooper_Grey.paa",
			"104thPhantomCompany\data\Textures\104th_Heavy_Accessories_Trooper_Grey.paa",
			"104thPhantomCompany\data\Textures\104th_Heavy_Accessories_Trooper_Grey.paa",
			"104thPhantomCompany\data\Textures\104th_Accessories_Light_P2_Base.paa",
			"104thPhantomCompany\data\Textures\104th_Heavy_Accessories_Trooper_Grey.paa"};

		class ItemInfo: ItemInfo
		{
			containerClass = "Supply80";
			vestType = "Rebreather";
			hiddenSelections[] = {"ammo","camo1","camo2","camo3","pauldron"};
			uniformModel = "\SWLB_CEE\data\SWLB_CEE_Heavy_Vest.p3d";

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
	class JA_104th_AB_P2_NCO_Base_Trooper_Armor : SWLB_clone_airborne_nco_armor
	{
		author = "Dak";
		displayName = "Clone Airborne NCO Vest (104th [1C])";
		hiddenSelections[] =
			{
				"camo1",
				"camo2",
				"camo3",
				"camo4"};
		hiddenSelectionsTextures[] =
			{
				"104thPhantomCompany\data\Textures\104th_Heavy_Accessories_Trooper_Grey.paa", // Heavy
				"104thPhantomCompany\data\Textures\104th_Officer_Accessories_P2_AB_Base.paa",
				"104thPhantomCompany\data\Textures\104th_Heavy_Accessories_Trooper_Grey.paa", // Heavy
				"104thPhantomCompany\data\Textures\104th_Heavy_Accessories_Trooper_Grey.paa"  // Heavy
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
	class JA_104th_AB_P2_NCO_Alt1_Trooper_Armor : SWLB_clone_airborne_nco_armor
	{
		author = "Dak";
		displayName = "Clone Airborne NCO Vest (104th [1C] 01)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2",
				"camo3",
				"camo4"};
		hiddenSelectionsTextures[] =
			{
				"104thPhantomCompany\data\Textures\104th_Heavy_Accessories_Trooper_Grey.paa", // Heavy
				"104thPhantomCompany\data\Textures\104th_Officer_Accessories_P2_AB_Alt_1.paa",
				"104thPhantomCompany\data\Textures\104th_Heavy_Accessories_Trooper_Grey.paa", // Heavy
				"104thPhantomCompany\data\Textures\104th_Heavy_Accessories_Trooper_Grey.paa"  // Heavy
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
	class JA_104th_AB_P2_NCO_Alt2_Trooper_Armor : SWLB_clone_airborne_nco_armor
	{
		author = "Dak";
		displayName = "Clone Airborne NCO Vest (104th [1C] 02)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2",
				"camo3",
				"camo4"};
		hiddenSelectionsTextures[] =
			{
				"104thPhantomCompany\data\Textures\104th_Heavy_Accessories_Trooper_Grey.paa", // Heavy
				"104thPhantomCompany\data\Textures\104th_Officer_Accessories_P2_AB_Alt_2.paa",
				"104thPhantomCompany\data\Textures\104th_Heavy_Accessories_Trooper_Grey.paa", // Heavy
				"104thPhantomCompany\data\Textures\104th_Heavy_Accessories_Trooper_Grey.paa"  // Heavy
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
	class JA_104th_AB_P2_NCO_Medic_Trooper_Armor : SWLB_clone_airborne_nco_armor
	{
		author = "Dak";
		displayName = "Clone Airborne NCO Medic Vest (104th [1C])";
		hiddenSelections[] =
			{
				"camo1",
				"camo2",
				"camo3",
				"camo4"};
		hiddenSelectionsTextures[] =
			{
				"104thPhantomCompany\data\Textures\104th_Heavy_Accessories_Medic_Grey.paa", // Heavy
				"104thPhantomCompany\data\Textures\104th_Officer_Accessories_P2_AB_Medic.paa",
				"104thPhantomCompany\data\Textures\104th_Heavy_Accessories_Medic_Grey.paa", // Heavy
				"104thPhantomCompany\data\Textures\104th_Heavy_Accessories_Medic_Grey.paa"  // Heavy
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
	class JA_104th_AB_P2_Base_Trooper_Armor : SWLB_clone_airborne_armor
	{
		author = "Dak";
		displayName = "Clone Airborne Trooper Vest (104th [1C])";
		hiddenSelections[] =
			{
				"camo1",
				"camo2",
				"camo3",
				"camo4"};
		hiddenSelectionsTextures[] =
			{
				"104thPhantomCompany\data\Textures\104th_Heavy_Accessories_Trooper_Grey.paa", // Heavy
				"104thPhantomCompany\data\Textures\104th_Officer_Accessories_P2_AB_Trooper.paa",
				"104thPhantomCompany\data\Textures\104th_Heavy_Accessories_Trooper_Grey.paa" // Heavy
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
	class JA_104th_AB_P2_Medic_Trooper_Armor : SWLB_clone_airborne_armor
	{
		author = "Dak";
		displayName = "Clone Airborne Medic Vest (104th [1C])";
		hiddenSelections[] =
			{
				"camo1",
				"camo2",
				"camo3",
				"camo4"};
		hiddenSelectionsTextures[] =
			{
				"104thPhantomCompany\data\Textures\104th_Heavy_Accessories_Medic_Grey.paa", // Heavy
				"104thPhantomCompany\data\Textures\104th_Officer_Accessories_P2_AB_Medic.paa",
				"104thPhantomCompany\data\Textures\104th_Heavy_Accessories_Medic_Grey.paa" // Heavy
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
	class JA_104th_AB_P2_Officer_Trooper_Armor : SWLB_CEE_Recon_Lieutenant // Fixes the white pauldron issue
	{
		author = "Dak";
		displayName = "Clone Airborne Officer Vest (104th [1C])";
		model = "\SWLB_CEE\data\SWLB_CEE_Recon_Lieutenant.p3d";
        uniformModel = "\SWLB_CEE\data\SWLB_CEE_Recon_Lieutenant.p3d";
        hiddenSelections[] =
            {
                "camo1",
                "camo2"};
        hiddenSelectionsTextures[] = 
            {
                "104thPhantomCompany\data\Textures\104th_Officer_Accessories_P2_AB_Base.paa",
                "104thPhantomCompany\data\Textures\104th_Heavy_Accessories_Trooper_Grey.paa"};
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
	//Aviation Accessories
    class JA_104th_P2_Pilot_officer_Vest : SWLB_clone_officer_armor
    {
        author = "Dak";
        displayName = "Clone Pilot Officer Vest (104th [1C])";
        hiddenSelections[] =
            {
                "camo1"
            };
        hiddenSelectionsTextures[] =
            {
                "104thPhantomCompany\data\Textures\104th_Officer_Accessories_P2_Aviation.paa"
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

	class JA_104th_Base_CT : SWLB_clone_base_P2
	{
		author = "Ice";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_Base_CT_Uniform";
		displayName = "104th CT";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"104thPhantomCompany\data\Textures\104th_P2_1C_Infantry_Upper.paa","104thPhantomCompany\data\Textures\104th_P2_1C_Infantry_Lower.paa"};
		linkedItems[] = {JA_104th_Angel_Helmet, SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		  // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Angel_Helmet, SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_P2_1C_01_CT : SWLB_clone_base_P2
	{
		author = "Bulky & Cyan";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_P2_1C_01_CT_Uniform";
		displayName = "P2 1C Cerberus trooper";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Basic";
		hiddenSelections[] = {"camo1", "camo2"};
				hiddenSelectionsTextures[] =
		{
			"104thPhantomCompany\data\Textures\104th_P2_1C_01_CT_Upper.paa",
			"104thPhantomCompany\data\Textures\104th_P2_1C_01_CT_Lower.paa"
		};
		linkedItems[] = {JA_104th_P2_1C_CT_V1_Helmet, SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		 // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_P2_1C_CT_V1_Helmet, SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_P2_1C_02_CT : SWLB_clone_base_P2
	{
		author = "Bulky & Cyan";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_P2_1C_02_CT_Uniform";
		displayName = "P2 1C Warhawk trooper";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Basic";
		hiddenSelections[] = {"camo1", "camo2"};
				hiddenSelectionsTextures[] =
		{
			"104thPhantomCompany\data\Textures\104th_P2_1C_02_CT_Upper.paa",
			"104thPhantomCompany\data\Textures\104th_P2_1C_02_CT_Lower.paa"
		};
		linkedItems[] = {JA_104th_P2_1C_CT_V1_Helmet, SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		 // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_P2_1C_CT_V1_Helmet, SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_P2_1C_Engineer : SWLB_clone_base_P2
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_P2_1C_Engineer_Uniform";
		displayName = "104th 1C Engineer";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Basic";
		hiddenSelections[] = {"camo1", "camo2"};
				hiddenSelectionsTextures[] =
		{
			"104thPhantomCompany\data\Textures\104th_P2_1C_Engineer_Upper.paa",
			"104thPhantomCompany\data\Textures\104th_P2_1C_Engineer_Lower.paa"
		};
		linkedItems[] = {JA_104th_Engineer_1C_Base_Helmet, SWLB_CEE_Engineer_Vest_NCO, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		 // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Engineer_1C_Base_Helmet, SWLB_CEE_Engineer_Vest_NCO, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_P2_1C_Medic : SWLB_clone_base_P2
	{
		author = "Dak";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        side = 1;
		displayName = "104th P2 1C Medic";
		uniformClass = "JA_104th_P2_1C_Medic_Uniform";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Basic";
		hiddenSelectionsTextures[] =
		{
			"104thPhantomCompany\data\Textures\104th_P2_1C_Infantry_Medic_Upper.paa",
			"104thPhantomCompany\data\Textures\104th_P2_1C_Infantry_Medic_Lower.paa"
		};
		linkedItems[] = { JA_104th_P2_1C_Medic_Helmet ,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_P2_1C_Medic_Helmet ,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_104th_AB_1C_Medic : SWLB_clone_base_P2
	{
		author = "Dak";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        side = 1;
		displayName = "104th AB 1C Medic";
		uniformClass = "JA_104th_AB_1C_Medic_Uniform";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Basic";
		hiddenSelectionsTextures[] =
		{
			"104thPhantomCompany\data\Textures\JA_104th_P2_AB_1C_Medic_Upper.paa",
			"104thPhantomCompany\data\Textures\JA_104th_P2_AB_1C_Medic_Lower.paa"
		};
		linkedItems[] = { JA_104th_P2_1C_Medic_Helmet ,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_P2_1C_Medic_Helmet ,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_104th_P2_1C_JTAC : SWLB_clone_marshal_commander_base_P2
	{
		author = "Ice";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_P2_1C_JTAC_Uniform";
		displayName = "104th 1C JTAC";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Basic";
		hiddenSelections[] = {"camo1", "camo2", "biceps", "rank"};
		hiddenSelectionsTextures[] = {"104thPhantomCompany\data\Textures\104th_JTAC_Base_Upper.paa", "104thPhantomCompany\data\Textures\104th_JTAC_Base_Lower.paa", "104thPhantomCompany\data\Textures\104th_JTAC_Base_Upper.paa", ""};
		linkedItems[] = {JA_104th_JTAC_1C_Helmet, SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		 // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_JTAC_1C_Helmet, SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
};

class CfgGroups{};
class CfgGlasses{
    class JA_104th_P2_Magnum_Medic_Headware
	{
		author = "Dak";
		displayName = "Clone Airborne Satchel Magnum (104th Magnum)";
        descriptionUse = "give sachel";
        scope = 2;
        identityTypes[] = {};
        hiddenSelections[] = {"ammo","camo1","camo2","camo3","camo4","camo5","pauldron"};
        hiddenSelectionsTextures[] = 
        {
            "",
            "",//"swlb_core\data\common_textures\accessories\light_accessories_co.paa",
            "104thPhantomCompany\data\Textures\104th_AB_Magnum_Accesories_Heavy.paa",
            "",//"swlb_core\data\common_textures\accessories\\officer_accessories_co.paa",
            "",//"swlb_core\data\common_textures\equipment\bag_co.paa",
            "",//"swlb_core\data\common_textures\accessories\light_accessories_co.paa",
            ""
        };
        model = "ls_armor_bluefor\vest\gar\heavy\ls_gar_heavyAlt_vest.p3d";
        //model = "\SWLB_clones\SWLB_clone_airborne_armor.p3d";
        picture = "\SWLB_clones\data\ui\icon_SWLB_clone_airborne_armor_ca.paa";
	};
	
}