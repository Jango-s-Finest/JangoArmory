#include "basicDefines_A3.hpp"
class DefaultEventhandlers;
class UniformSlotInfo;
class CfgPatches
{
	class Jangos_Armory_Pilot_Armours
	{
		author = "Jango's Finest";
		requiredVersion = 0.1;
		requiredAddons[] = {};
		units[] = {
			"JA_104th_Base",
			"JA_104th_Bail",
			"JA_104th_Beef",
			"JA_104th_Haze",
			"JA_104th_Varelli",
			"JA_104th_Fish",
			"JA_104th_OD",
			"JA_104th_Cherryy"
		};
		weapons[] = {
			"JA_104th_Base_Uniform",
			"JA_104th_Bail_Uniform",
			"JA_104th_Beef_Uniform",
			"JA_104th_Haze_Uniform",
			"JA_104th_Varelli_Uniform",
			"JA_104th_Fish_Uniform",
			"JA_104th_OD_Uniform",
			"JA_104th_Cherryy_Uniform"
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


	class JA_104th_Base_Uniform : SWLB_clone_uniform 
	{
		author = "Jango's Finest";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper armor (104th [1C] Pilot)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Jangos_Pilot_Armours\data\Textures\104th_P2_1C_Aviation_Upper.paa",
			"Jangos_Pilot_Armours\data\Textures\104th_P2_1C_Aviation_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Base";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Bail_Uniform : SWLB_clone_uniform // TEXTURE PATH UPD + UNIT
	{
		author = "Jango's Finest";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper armor (104th Bail)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Jangos_Pilot_Armours\data\Textures\104th_Pilot_Bail_Upper.paa",
			"Jangos_Pilot_Armours\data\Textures\104th_Pilot_Bail_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Bail";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Beef_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Beef)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Pilot_Armours\data\Textures\104th_Pilot_Beef_Upper.paa",
				"Jangos_Pilot_Armours\data\Textures\104th_Pilot_Beef_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Beef";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Haze_Uniform : SWLB_clone_uniform 
	{
		author = "Jango's Finest";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper armor (104th Haze)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Jangos_Pilot_Armours\data\Textures\104th_Pilot_Haze_Upper.paa",
			"Jangos_Pilot_Armours\data\Textures\104th_Pilot_Haze_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "";
			uniformClass = "JA_104th_Haze";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};


	class JA_104th_Varelli_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper armor (104th Varelli)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Jangos_Pilot_Armours\data\Textures\104th_Pilot_Varelli_Upper.paa",
			"Jangos_Pilot_Armours\data\Textures\104th_Pilot_Varelli_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Varelli";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};

	class JA_104th_OD_Uniform : SWLB_clone_uniform
	{
		author = "Fish";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper armor (104th OD)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Jangos_Pilot_Armours\data\Textures\104th_Pilot_OD_Upper.paa",
			"Jangos_Pilot_Armours\data\Textures\104th_Pilot_OD_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_OD";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};

	class JA_104th_Cherryy_Uniform : SWLB_clone_uniform
	{
		author = "Fish";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper armor (104th Cherryy)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Jangos_Pilot_Armours\data\Textures\104th_Pilot_Cherryy_Upper.paa",
			"Jangos_Pilot_Armours\data\Textures\104th_Pilot_Cherryy_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Cherryy";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};

	class JA_104th_Fish_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper armor (104th Fish)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Jangos_Pilot_Armours\data\Textures\104th_Pilot_Fish_Upper.paa",
			"Jangos_Pilot_Armours\data\Textures\104th_Pilot_Fish_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Fish";
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

	class JA_104th_Base : SWLB_clone_base_P2
	{
		author = "Cherryy";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_104th_Base_Uniform";
		displayName = "104th Base Pilot";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"Jangos_Pilot_Armours\data\Textures\104th_P2_1C_Aviation_Upper.paa", "Jangos_Pilot_Armours\data\Textures\104th_P2_1C_Aviation_Lower.paa"};
		linkedItems[] = { JA_104th_Base_Pilot_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_Base_Pilot_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_104th_Bail : SWLB_clone_base_P2
	{
		author = "Tundra";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_104th_Bail_Uniform";
		displayName = "104th Bail";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"Jangos_Pilot_Armours\data\Textures\104th_Pilot_Bail_Upper.paa", "Jangos_Pilot_Armours\data\Textures\104th_Pilot_Bail_Lower.paa"};
		linkedItems[] = { JA_104th_Bail_Pilot_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_Bail_Pilot_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_104th_Beef : SWLB_clone_base_P2
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_Beef_Uniform";
		displayName = "104th Beef";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_Pilot_Armours\data\Textures\104th_Pilot_Beef_Upper.paa", "Jangos_Pilot_Armours\data\Textures\104th_Pilot_Beef_Lower.paa"};
		linkedItems[] = {JA_104th_Beef_Helmet, SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		// all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Beef_Helmet, SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Haze : SWLB_clone_base_P2
	{
		author = "Tundra";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_104th_Haze_Uniform";
		displayName = "104th Haze";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = { "Jangos_Pilot_Armours\data\Textures\104th_Pilot_Haze_Upper.paa", "Jangos_Pilot_Armours\data\Textures\104th_Pilot_Haze_Lower.paa" };
		linkedItems[] = { JA_104th_Echo_Pilot_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_Echo_Pilot_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_104th_Varelli : SWLB_clone_base_P2
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_104th_Varelli_Uniform";
		displayName = "104th Varelli";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"Jangos_Pilot_Armours\data\Textures\104th_Pilot_Varelli_Upper.paa", "Jangos_Pilot_Armours\data\Textures\104th_Pilot_Varelli_Lower.paa"};
		linkedItems[] = { JA_104th_Varelli_Pilot_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_Varelli_Pilot_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_104th_OD : SWLB_clone_base_P2
	{
		author = "Fish";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_104th_OD_Uniform";
		displayName = "104th OD";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"Jangos_Pilot_Armours\data\Textures\104th_Pilot_OD_Upper.paa", "Jangos_Pilot_Armours\data\Textures\104th_Pilot_OD_Lower.paa"};
		linkedItems[] = { JA_104th_OD_Pilot_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_OD_Pilot_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_104th_Cherryy : SWLB_clone_base_P2
	{
		author = "Fish";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_104th_Cherryy_Uniform";
		displayName = "104th Cherryy";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"Jangos_Pilot_Armours\data\Textures\104th_Pilot_Cherryy_Upper.paa", "Jangos_Pilot_Armours\data\Textures\104th_Pilot_Cherryy_Lower.paa"};
		linkedItems[] = { JA_104th_Cherryy_Pilot_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_Cherryy_Pilot_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_104th_Fish : SWLB_clone_base_P2
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_104th_Fish_Uniform";
		displayName = "104th Fish";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"Jangos_Pilot_Armours\data\Textures\104th_Pilot_Fish_Upper.paa", "Jangos_Pilot_Armours\data\Textures\104th_Pilot_Fish_Lower.paa"};
		linkedItems[] = { JA_104th_Fish_Pilot_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_Fish_Pilot_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	
};
