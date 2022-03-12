#include "basicDefines_A3.hpp"
class DefaultEventhandlers;
class UniformSlotInfo;
class CfgPatches
{
	class Jangos_Armory_4
	{
		author = "Jango's Finest";
		requiredVersion = 0.1;
		requiredAddons[] = {};
		units[] = {
			"JA_104th_Axel",
			"JA_104th_Clutch",
		};
		weapons[] = {
			"JA_104th_Axel_Helmet_ME",
			"JA_104th_Axel_Uniform",
			"JA_104th_Shovel_Helmet",
			"JA_104th_Pretz_Helmet",
			"JA_104th_Clutch_Uniform",
			"JA_104th_Spectre_Vest",
			"JA_104th_Loner_Helmet",
			"JA_104th_Loner_Uniform",
			"JA_104th_Loner_Vest",
			"JA_104th_Hunter_Helmet_ME",
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
	class SWLB_clone_arc_armor;
	class SWLB_clone_officer_armor;
	class SWLB_clone_commander_armor;
	class SWLB_Clone_airborne_armor;
	class SWLB_CEE_Airborne_Officer;
	class SWLB_CEE_Force_Recon_NCO;
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
	class SWLB_clone_kama_armor;
	class SWLB_clone_medic_armor;
	class SWLB_clone_basic_armor;
	class SWLB_clone_airborne_nco_armor;
	class SWLB_P2_SpecOps_Helmet;
	class UniformItem;
	class VestItem;
	// General Uniforms
	class JA_104th_Axel_Helmet_ME : SWLB_clone_AB_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper Airborne Helmet (104th Axel ME)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory5\data\Textures\104th_AB_Axel_Helmet_Malevolence.paa" }; // the file path to the texture
	};
	class JA_104th_Axel_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper armor (104th Axel)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory5\data\Textures\104th_AB_Axel_Upper_Malevolence.paa",
			"JangosArmory5\data\Textures\104th_AB_Axel_Lower_Malevolence.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Axel";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	
	class JA_104th_Shovel_Helmet : SWLB_clone_AB_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper Airborne Helmet (104th Shovel)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory5\data\Textures\104th_AB_Shovel_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_Beef_Helmet : SWLB_Clone_Pilot_P2_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper Pilot Helmet (104th Beef)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory5\data\Textures\104th_Pilot_Beef_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_Pretz_Helmet : SWLB_clone_P2_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper Helmet (104th Pretz)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory5\data\Textures\104th_AB_Pretz_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_Clutch_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper armor (104th Clutch)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory5\data\Textures\104th_AB_Clutch_Upper.paa",
			"JangosArmory5\data\Textures\104th_AB_Clutch_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Clutch";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Spectre_Vest : SWLB_clone_arc_armor
	{
		author = "Dak";
		displayName = "Clone ARC Trooper Vest (104th Spectre)";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_arc_armor_ca.paa";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"

		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory5\data\Textures\104th_ARC_Spectre_ARC.paa",
			"JangosArmory5\data\Textures\104th_ARC_Spectre_Officer.paa"
		};
		vestType="Rebreather";	
	};
	class JA_104th_Loner_Helmet : SWLB_clone_P15_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper ARC Trooper Helmet (104th Loner)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory5\data\Textures\104th_ARC_Loner_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_Loner_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper armor (104th Loner)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory5\data\Textures\104th_ARC_Loner_Upper.paa",
			"JangosArmory5\data\Textures\104th_ARC_Loner_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Loner";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Loner_Vest : SWLB_clone_arc_armor
	{
		author = "Dak";
		displayName = "Clone ARC Trooper Vest (104th Loner)";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_arc_armor_ca.paa";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"

		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory5\data\Textures\104th_ARC_Loner_ARC.paa",
			"JangosArmory5\data\Textures\104th_ARC_Loner_Officer.paa"
		};
		vestType="Rebreather";	
	};
	class JA_104th_Hunter_Helmet_ME : SWLB_clone_P15_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper ARC Trooper Helmet (104th Hunter ME)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory5\data\Textures\104th_ARC_Hunter_Helmet_Malevolence.paa" }; // the file path to the texture
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
	// General Uniforms
	
	class JA_104th_Axel : SWLB_clone_base_P2
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_104th_Axel_Uniform";
		displayName = "104th Axel";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"JangosArmory5\data\Textures\104th_AB_Axel_Upper_Malevolence.paa", "JangosArmory5\data\Textures\104th_AB_Axel_Lower_Malevolence.paa"};
		linkedItems[] = { JA_104th_Axel_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_Axel_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_104th_Clutch : SWLB_clone_base_P2
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_104th_Clutch_Uniform";
		displayName = "104th Clutch";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"JangosArmory5\data\Textures\104th_AB_Clutch_Upper.paa", "JangosArmory5\data\Textures\104th_AB_Clutch_Lower.paa"};
		linkedItems[] = { JA_104th_Clutch_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_Clutch_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
};
