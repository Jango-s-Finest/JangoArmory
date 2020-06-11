#include "basicDefines_A3.hpp"
class DefaultEventhandlers;
class UniformSlotInfo;
class CfgPatches
{
	class Jangos_Armory
	{
		author = "Jango's Finest";
		units[] = {};
		weapons[] = {};
	};
};

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
class cfgEditorSubcategories
{
	class 104th_Categ_Clones
	{
		displayname = "104th - Customs";
	};
	class 104th_Categ_Basic
	{
		displayname = "104th - Base";
	};
	class 104th_Categ_Special
	{
		displayname = "104th - Special";
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
	class SWLB_clone_nvg;
	class SWLB_clone_nvg_nco;
	class SWLB_clone_ccVisor;
	class SWLB_clone_mcVisor;
	class SWLB_clone_kama_armor;
	class SWLB_clone_medic_armor;
	class SWLB_clone_basic_armor;
	class SWLB_clone_airborne_nco_armor;
	class SWLB_P2_SpecOps_Helmet;
	class UniformItem;
	class VestItem;
	
	// General Uniforms
	class JA_104th_Beans_Helmet : SWLB_clone_ARF_P1_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper ARF Helmet (104th Beans)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory4\data\Textures\104th_ARF_Beans_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_Beans_Uniform : SWLB_clone_uniform
	{
		author = "Ice";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper armor (104th Beans)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory4\data\Textures\104th_ARF_Beans_Upper.paa",
			"JangosArmory4\data\Textures\104th_ARF_Beans_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Beans";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_IQ_Helmet : SWLB_clone_ARF_P1_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper ARF Helmet (104th IQ)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory4\data\Textures\104th_ARF_IQ_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_IQ_Uniform : SWLB_clone_uniform
	{
		author = "Ice";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper armor (104th IQ)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory4\data\Textures\104th_ARF_IQ_Upper.paa",
			"JangosArmory4\data\Textures\104th_ARF_IQ_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_IQ";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
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
	// General Uniforms
	class JA_104th_Beans : SWLB_clone_base_P2
	{
		author = "Ice"
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_104th_Beans_Uniform";
		displayName = "104th Base Beans";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_Basic";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"JangosArmory4\data\Textures\104th_ARF_Beans_Upper.paa", "JangosArmory4\data\Textures\104th_ARF_Beans_Lower.paa"};
		linkedItems[] = { JA_104th_Beans_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_Beans_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};	
	class JA_104th_IQ : SWLB_clone_base_P2
	{
		author = "Ice"
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_104th_IQ_Uniform";
		displayName = "104th Base IQ";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_Basic";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"JangosArmory4\data\Textures\104th_ARF_IQ_Upper.paa", "JangosArmory4\data\Textures\104th_ARF_IQ_Lower.paa"};
		linkedItems[] = { JA_104th_IQ_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_IQ_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};	
};
