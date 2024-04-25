#include "basicDefines_A3.hpp"
class DefaultEventhandlers;
class UniformSlotInfo;
class CfgPatches
{
	class Jangos_Armory_Phantom
	{
		author = "Jango's Finest";
		units[] = {
			"JA_104th_P2_1C_Base",
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

			"JA_104th_P2_1C_Base_Uniform",
			"JA_104th_P2_1C_Medic_Uniform",
			"JA_104th_P2_1C_JTAC_Uniform",
			"JA_104th_P2_1C_Engineer_Uniform"
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
	class SWLB_clone_P2_Helmet;
	class SWLB_P2_SpecOps_Helmet;
	class lsd_gar_standart_nvg;
	class lsd_gar_rangefinder_nvg;
	class lsd_gar_p2MarshalCommander_nvg;
	class SWLB_clone_airborne_nco_armor;
	class SWLB_CEE_Lightweight_Rebreather;
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
			"104thPhantomCompany\data\Textures\104th_Engineer_Base_Helmet.paa",
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
		hiddenSelectionsTextures[] = { "104thPhantomCompany\data\Textures\104th_P2_Medic_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_JTAC_1C_Helmet : SWLB_P2_SpecOps_Helmet
	{
		author = "Ice";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";
		hiddenSelections[] = {"camo1"};															 // don't change this
		displayname = "Clone Trooper Special Activities Helmet (104th [1C] JTAC)";					 // the name it will be in game
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

	class JA_104th_P2_1C_Base_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper P2 Armor (104th [1C] Base)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"104thPhantomCompany\data\Textures\104th_P2_1C_Base_Upper.paa",
			"104thPhantomCompany\data\Textures\104th_P2_1C_Base_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_P2_1C_Base";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_P2_1C_Engineer_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper P2 armor (104th [1C] Engineer)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"104thPhantomCompany\data\Textures\104th_P2_Engineer_Upper.paa",
				"104thPhantomCompany\data\Textures\104th_P2_Engineer_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_P2_1C_Engineer";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_P2_1C_Medic_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper P2 armor (104th [1C] Medic)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"104thPhantomCompany\data\Textures\104th_P2_Medic_Upper.paa",
			"104thPhantomCompany\data\Textures\104th_P2_Medic_Lower.paa"
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

	class JA_104th_P2_1C_Base : SWLB_clone_base_P2
	{
		author = "Bulky & Cyan";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_P2_1C_Base_Uniform";
		displayName = "P2 1C Base";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Basic";
		hiddenSelections[] = {"camo1", "camo2"};
				hiddenSelectionsTextures[] =
		{
			"104thPhantomCompany\data\Textures\104th_P2_1C_Base_Upper.paa",
			"104thPhantomCompany\data\Textures\104th_P2_1C_Base_Lower.paa"
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
			"104thPhantomCompany\data\Textures\104th_P2_Engineer_Upper.paa",
			"104thPhantomCompany\data\Textures\104th_P2_Engineer_Lower.paa"
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
			"104thPhantomCompany\data\Textures\104th_P2_Medic_Upper.paa",
			"104thPhantomCompany\data\Textures\104th_P2_Medic_Lower.paa"
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