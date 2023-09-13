#include "basicDefines_A3.hpp"
class DefaultEventhandlers;
class UniformSlotInfo;
class CfgPatches
{
	class Jangos_Armory_Infantry_Armours
	{
		author = "Jango's Finest";
		requiredVersion = 0.1;
		requiredAddons[] = {};
		units[] = {
			"JA_104th_Base_Engineer_Trooper",
			"JA_104th_Welty",
			"JA_104th_Tiger",
			"JA_104th_Scav",
			"JA_104th_Doc"
		};
		weapons[] = {
			"JA_Engineer_Base_Trooper_Uniform",
			"JA_Enginner_Base_Trooper_Uniform", // Fallback class for kits made with the old uniform
			"JA_104th_Welty_Uniform",
			"JA_104th_Tiger_Uniform",
			"JA_104th_Scav_Uniform",
			"JA_104th_Doc_Uniform"
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
	class SWLB_clone_airborne_armor;
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
	class SWLB_clone_eng_helmet;
	class SWLB_P2_SpecOps_Helmet;
	class UniformItem;
	class VestItem;
	class JA_Engineer_Base_Trooper_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper armor (Engineer - P2)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Jangos_Infantry_Armours\data\Textures\104th_Engineer_Upper_Base.paa",
			"Jangos_Infantry_Armours\data\Textures\104th_Engineer_Lower_Base.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Base_Engineer_Trooper";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
    class JA_Enginner_Base_Trooper_Uniform: JA_Engineer_Base_Trooper_Uniform
    {
        scopeArsenal = 0;
        displayName = "== Deprecated Class ==";
        descriptionShort = "Deprecated class, switch to JA_Engineer_Base_Trooper_Uniform.";
    };

	class JA_104th_Welty_Uniform : SWLB_clone_uniform
	{
		author = "Ice";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper armor (104th Welty)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Jangos_Infantry_Armours\data\Textures\104th_P2_Welty_Upper.paa",
			"Jangos_Infantry_Armours\data\Textures\104th_P2_Welty_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Welty";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Tiger_Uniform : SWLB_clone_uniform
	{
		author = "Ice";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper armor (104th Tiger)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Jangos_Infantry_Armours\data\Textures\104th_P2_Tiger_Upper.paa",
			"Jangos_Infantry_Armours\data\Textures\104th_P2_Tiger_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Tiger";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Scav_Uniform : SWLB_clone_uniform
	{
		author = "Ice";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper armor (104th Skav)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Jangos_Infantry_Armours\data\Textures\104th_P2_Skav_Upper.paa",
			"Jangos_Infantry_Armours\data\Textures\104th_P2_Skav_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Scav";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Doc_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper armor (104th Doc)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Jangos_Infantry_Armours\data\Textures\104th_P2_Doc_Upper.paa",
			"Jangos_Infantry_Armours\data\Textures\104th_P2_Doc_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Doc";
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
	class JA_104th_Jumppack_JT12;
	class JA_104th_Jumppack_JT12_LR;
	// General Uniforms
	class JA_104th_Base_Engineer_Trooper : SWLB_clone_base_P2
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_Engineer_Base_Trooper_Uniform";
		displayName = "P2 - Engineer";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Basic";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Armours\data\Textures\104th_Engineer_Upper_Base.paa","Jangos_Infantry_Armours\data\Textures\104th_Engineer_Lower_Base.paa"};
		linkedItems[] = {JA_104th_Engineer_Base_Helmet, SWLB_CEE_Engineer_Vest_NCO, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Engineer_Base_Helmet, SWLB_CEE_Engineer_Vest_NCO, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};  
	class JA_104th_Tiger : SWLB_clone_base_P2
	{
		author = "Ice";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_104th_Tiger_Uniform_ME";
		displayName = "104th Tiger";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Armours\data\Textures\104th_P2_Tiger_Upper.paa", "Jangos_Infantry_Armours\data\Textures\104th_P2_Tiger_Lower.paa"};
		linkedItems[] = { JA_104th_Tiger_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_Tiger_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_104th_Welty : SWLB_clone_base_P2
	{
		author = "Ice";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_104th_Welty_Uniform_ME";
		displayName = "104th Welty";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Armours\data\Textures\104th_P2_Welty_Upper.paa", "Jangos_Infantry_Armours\data\Textures\104th_P2_Welty_Lower.paa"};
		linkedItems[] = { JA_104th_Welty_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_Welty_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_104th_Scav : SWLB_clone_base_P2
	{
		author = "Ice";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_104th_Scav_Uniform_ME";
		displayName = "104th Skav";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Armours\data\Textures\104th_P2_Skav_Upper.paa", "Jangos_Infantry_Armours\data\Textures\104th_P2_Skav_Lower.paa"};
		linkedItems[] = { JA_104th_Scav_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_Scav_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_104th_Doc : SWLB_clone_base_P2
	{
		author = "Ice";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_104th_Doc_Uniform";
		displayName = "104th Doc";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Armours\data\Textures\104th_P2_Doc_Upper.paa", "Jangos_Infantry_Armours\data\Textures\104th_P2_Doc_Lower.paa"};
		linkedItems[] = { JA_104th_Doc_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_Doc_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
};
