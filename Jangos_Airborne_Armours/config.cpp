#include "basicDefines_A3.hpp"
class DefaultEventhandlers;
class UniformSlotInfo;
class CfgPatches
{
	class Jangos_Armory_Airborne_Armours
	{
		author = "Jango's Finest";
		requiredVersion = 0.1;
		requiredAddons[] = {};
		units[] = {
			"JA_104th_Carmine",
			"JA_104th_Osiris",
			"JA_104th_Magnum",
			"JA_104th_Bulky",
			"JA_104th_Axel",
			"JA_104th_Skav",
			"JA_104th_Kage"
		};
		weapons[] = {
			"JA_104th_Carmine_Uniform",
			"JA_104th_Osiris_Uniform",
			"JA_104th_Magnum_Uniform",
			"JA_104th_Bulky_Uniform",
			"JA_104th_Axel_Uniform",
			"JA_104th_Skav_Uniform",
			"JA_104th_Kage_Uniform"
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
	class JA_104th_Carmine_Uniform : SWLB_clone_uniform
	{
		author = "Jango's Finest";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper armor (104th Carmine)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Jangos_Airborne_Armours\data\Textures\104th_AB_Carmine_Upper.paa",
			"Jangos_Airborne_Armours\data\Textures\104th_AB_Carmine_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Carmine";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};	
	class JA_104th_Osiris_Uniform : SWLB_clone_uniform
	{
		author = "Jango's Finest";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper armor (104th Osiris)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Jangos_Airborne_Armours\data\Textures\104th_AB_Osiris_Upper.paa",
			"Jangos_Airborne_Armours\data\Textures\104th_AB_Osiris_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Osiris";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};	
	class JA_104th_Magnum_Uniform : SWLB_clone_mc_uniform
	{
		author = "Jango's Finest";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper armor (104th Magnum)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2",
			"biceps",
			"rank"
		};
		hiddenSelectionsTextures[] =
		{
			"Jangos_Airborne_Armours\data\Textures\104th_AB_Magnum_Upper.paa",
			"Jangos_Airborne_Armours\data\Textures\104th_AB_Magnum_Lower.paa",
			"Jangos_Airborne_Armours\data\Textures\104th_AB_Magnum_Upper.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Magnum";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};	
	class JA_104th_Bulky_Uniform : SWLB_clone_uniform
	{
		author = "Fish";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper armor (104th Bulky)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Jangos_Airborne_Armours\data\Textures\104th_AB_Bulky_Body_Upper.paa",
			"Jangos_Airborne_Armours\data\Textures\104th_AB_Bulky_Body_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Bulky";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};	
	class JA_104th_Axel_Uniform : SWLB_clone_uniform
	{
		author = "Fish";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper armor (104th Axel)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Jangos_Airborne_Armours\data\Textures\104th_AB_Axel_Upper.paa",
			"Jangos_Airborne_Armours\data\Textures\104th_AB_Axel_Lower.paa"
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
	class JA_104th_Skav_Uniform : SWLB_clone_uniform
	{
		author = "Fish";
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
			"Jangos_Airborne_Armours\data\Textures\104th_AB_Skav_Upper.paa",
			"Jangos_Airborne_Armours\data\Textures\104th_AB_Skav_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Skav";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};	
	class JA_104th_Kage_Uniform : SWLB_clone_uniform
	{
		author = "Jango's Finest";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper armor (104th Kage)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Jangos_Airborne_Armours\data\Textures\104th_AB_Kage_Upper.paa",
			"Jangos_Airborne_Armours\data\Textures\104th_AB_Kage_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Kage";
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
	
	class JA_104th_Magnum : SWLB_clone_marshal_commander_base_P2
	{
		author = "Fish";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_104th_Magnum_Uniform";
		displayName = "104th Magnum";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		hiddenSelections[] = { "camo1","camo2","biceps","rank" };
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Armours\data\Textures\104th_AB_Magnum_Upper.paa", "Jangos_Airborne_Armours\data\Textures\104th_AB_Magnum_Lower.paa", "Jangos_Airborne_Armours\data\Textures\104th_AB_Magnum_Upper.paa"};
		linkedItems[] = { JA_104th_Magnum_Helmet, JA_104th_Magnum_Vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_Magnum_Helmet, JA_104th_Magnum_Vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_104th_Bulky : SWLB_clone_base_P2
	{
		author = "Fish";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_104th_Bulky_Uniform";
		displayName = "104th Bulky";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Armours\data\Textures\104th_AB_Bulky_Body_Upper.paa", "Jangos_Airborne_Armours\data\Textures\104th_AB_Bulky_Body_Lower.paa"};
		linkedItems[] = { JA_104th_Bulky_Helmet, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_Bulky_Helmet, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_104th_Axel : SWLB_clone_base_P2
	{
		author = "Fish";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_104th_Axel_Uniform";
		displayName = "104th Axel";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Armours\data\Textures\104th_AB_Axel_Upper.paa", "Jangos_Airborne_Armours\data\Textures\104th_AB_Axel_Lower.paa"};
		linkedItems[] = { JA_104th_Axel_Helmet, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_Axel_Helmet, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_104th_Skav : SWLB_clone_base_P2
	{
		author = "Fish";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_104th_Skav_Uniform";
		displayName = "104th Skav";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Armours\data\Textures\104th_AB_Skav_Upper.paa", "Jangos_Airborne_Armours\data\Textures\104th_AB_Skav_Lower.paa"};
		linkedItems[] = { JA_104th_Skav_Helmet, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_Skav_Helmet, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_104th_Osiris : SWLB_clone_base_P2
	{
		author = "Tundra";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_104th_Osiris_Uniform";
		displayName = "104th Osiris";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Armours\data\Textures\104th_AB_Osiris_Upper.paa", "Jangos_Airborne_Armours\data\Textures\104th_AB_Osiris_Lower.paa"};
		linkedItems[] = { JA_104th_Osiris_Helmet, JA_104th_Osiris_Vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_Osiris_Helmet, JA_104th_Osiris_Vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_104th_Carmine : SWLB_clone_base_P2
	{
		author = "Tundra";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_104th_Carmine_Uniform";
		displayName = "104th Carmine";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Armours\data\Textures\104th_AB_Carmine_Upper.paa", "Jangos_Airborne_Armours\data\Textures\104th_AB_Carmine_Lower.paa"};
		linkedItems[] = { JA_104th_Carmine_Helmet, JA_104th_Carmine_Vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_Carmine_Helmet, JA_104th_Carmine_Vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_104th_Kage : SWLB_clone_base_P2
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_104th_Kage_Uniform";
		displayName = "104th Kage";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Armours\data\Textures\104th_AB_Kage_Upper.paa", "Jangos_Airborne_Armours\data\Textures\104th_AB_Kage_Lower.paa"};
		linkedItems[] = { JA_104th_Kage_Helmet, SWLB_clone_airborne_nco_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_Kage_Helmet, SWLB_clone_airborne_nco_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	
};
