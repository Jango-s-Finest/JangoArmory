#include "basicDefines_A3.hpp"
class DefaultEventhandlers;
class UniformSlotInfo;
class CfgPatches
{
	class Jangos_Armory_ARF_Armours
	{
		author = "Jango's Finest";
		requiredVersion = 0.1;
		requiredAddons[] = {};
		units[] = {
			"JA_104th_ARF_Uniform",
			"JA_104th_ARF_Desert",
			"JA_104th_ARF_Urban",
			"JA_104th_ARF_Jungle",
			"JA_104th_ARF_Medic_Uniform",
			'JA_104th_Achilles',
			'JA_104th_Fire',
			"JA_104th_Beans",
			"JA_104th_Unix",
			"JA_104th_Woods"
		};
		weapons[] = {
			"JA_104th_ARF",
			"JA_104th_ARF_Desert_Uniform",
			"JA_104th_ARF_Urban_Uniform",
			"JA_104th_ARF_Jungle_Uniform",
			"JA_104th_ARF_Medic",
			'JA_104th_Achilles_Uniform',
			"JA_104th_Beans_Uniform",
			"JA_104th_Fire_Uniform",
			"JA_104th_Unix_Uniform",
			"JA_104th_Woods_Uniform"
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
	
	// Base
	class JA_104th_ARF_Uniform : SWLB_clone_uniform
	{
		author = "Jango's Finest";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th ARF)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_ARF_Armours\data\Textures\104th_ARF_Upper.paa",
				"Jangos_ARF_Armours\data\Textures\104th_ARF_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_ARF";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_ARF_Desert_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th ARF Desert)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_ARF_Armours\data\Textures\104th_ARF_Desert_Upper.paa",
				"Jangos_ARF_Armours\data\Textures\104th_ARF_Desert_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_ARF_Desert";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};

	class JA_104th_ARF_Jungle_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th ARF Jungle)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_ARF_Armours\data\Textures\104th_ARF_Jungle_Upper.paa",
				"Jangos_ARF_Armours\data\Textures\104th_ARF_Jungle_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_ARF_Jungle";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};

	class JA_104th_ARF_Urban_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th ARF Urban)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_ARF_Armours\data\Textures\104th_ARF_Urban_Upper.paa",
				"Jangos_ARF_Armours\data\Textures\104th_ARF_Urban_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_ARF_Urban";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_ARF_Medic_Uniform : SWLB_clone_uniform
	{
		author = "Jango's Finest";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th ARF Medic)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_ARF_Armours\data\Textures\104th_ARF_Medic_Upper.paa",
				"Jangos_ARF_Armours\data\Textures\104th_ARF_Medic_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_ARF_Medic";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	// Customs
	class JA_104th_Achilles_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Achilles)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_ARF_Armours\data\Textures\104th_ARF_Achilles_Upper.paa",
				"Jangos_ARF_Armours\data\Textures\104th_ARF_Achilles_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Achilles";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Beans_Uniform : SWLB_clone_uniform
	{
		author = "Ice";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Beans)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_ARF_Armours\data\Textures\104th_ARF_Beans_Upper.paa",
				"JJangos_ARF_Armours\data\Textures\104th_ARF_Beans_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Beans";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Fire_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Fire)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_ARF_Armours\data\Textures\104th_ARF_Fire_Upper.paa",
				"Jangos_ARF_Armours\data\Textures\104th_ARF_Fire_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Fire";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Unix_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Unix)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_ARF_Armours\data\Textures\104th_ARF_Unix_Upper.paa",
				"Jangos_ARF_Armours\data\Textures\104th_ARF_Unix_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Unix";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Woods_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Woods)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_ARF_Armours\data\Textures\104th_ARF_Woods_Upper.paa",
				"Jangos_ARF_Armours\data\Textures\104th_ARF_Woods_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Woods";
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
	
	class JA_104th_ARF : SWLB_clone_base_P2
	{
		author = "Tundra";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_ARF_Uniform";
		displayName = "104th ARF";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Basic";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_ARF_Armours\data\Textures\104th_ARF_Upper.paa", "Jangos_ARF_Armours\data\Textures\104th_ARF_Lower.paa"};
		linkedItems[] = {JA_104th_ARF_Helmet, SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		   // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_ARF_Helmet, SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_ARF_Desert : SWLB_clone_base_P2
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_ARF_Desert_Uniform";
		displayName = "104th ARF Desert";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Basic";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_ARF_Armours\data\Textures\104th_ARF_Desert_Upper.paa", "Jangos_ARF_Armours\data\Textures\104th_ARF_Desert_Lower.paa"};
		linkedItems[] = {JA_104th_ARF_Desert_Helmet, SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		  // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_ARF_Desert_Helmet, SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_ARF_Jungle : SWLB_clone_base_P2
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_ARF_Jungle_Uniform";
		displayName = "104th ARF Jungle";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Basic";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_ARF_Armours\data\Textures\104th_ARF_Jungle_Upper.paa", "Jangos_ARF_Armours\data\Textures\104th_ARF_Jungle_Lower.paa"};
		linkedItems[] = {JA_104th_ARF_Jungle_Helmet, SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		  // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_ARF_Jungle_Helmet, SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_ARF_Urban : SWLB_clone_base_P2
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_ARF_Urban_Uniform";
		displayName = "104th ARF Urban";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Basic";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_ARF_Armours\data\Textures\104th_ARF_Urban_Upper.paa", "Jangos_ARF_Armours\data\Textures\104th_ARF_Urban_Lower.paa"};
		linkedItems[] = {JA_104th_ARF_Urban_Helmet, SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		 // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_ARF_Urban_Helmet, SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_ARF_Medic : SWLB_clone_base_P2
	{
		author = "Tundra";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_ARF_Medic_Uniform";
		displayName = "104th ARF Medic";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Basic";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_ARF_Armours\data\Textures\104th_ARF_Medic_Upper.paa", "Jangos_ARF_Armours\data\Textures\104th_ARF_Medic_Lower.paa"};
		linkedItems[] = {JA_104th_ARFMedic_Helmet, SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		// all items that will be on unit
		respawnLinkedItems[] = {JA_104th_ARFMedic_Helmet, SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Achilles : SWLB_clone_base_P2
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_Achilles_Uniform";
		displayName = "104th Achilles";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_ARF_Armours\data\Textures\104th_ARF_Achilles_Upper.paa", "Jangos_ARF_Armours\data\Textures\104th_ARF_Achilles_Lower.paa"};
		linkedItems[] = {JA_104th_Achilles_Helmet, SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		// all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Achilles_Helmet, SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Beans : SWLB_clone_base_P2
	{
		author = "Ice";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_Beans_Uniform";
		displayName = "104th Beans";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_ARF_Armours\data\Textures\104th_ARF_Beans_Upper.paa", "Jangos_ARF_Armours\data\Textures\104th_ARF_Beans_Lower.paa"};
		linkedItems[] = {JA_104th_Beans_Helmet, SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		 // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Beans_Helmet, SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Fire : SWLB_clone_base_P2
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_Fire_Uniform";
		displayName = "104th Fire";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_ARF_Armours\data\Textures\104th_ARF_Fire_Upper.paa", "Jangos_ARF_Armours\data\Textures\104th_ARF_Fire_Lower.paa"};
		linkedItems[] = {JA_104th_Fire_Helmet, SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		// all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Fire_Helmet, SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Unix : SWLB_clone_base_P2
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_Unix_Uniform";
		displayName = "104th Unix";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_ARF_Armours\data\Textures\104th_ARF_Unix_Upper.paa", "Jangos_ARF_Armours\data\Textures\104th_ARF_Unix_Lower.paa"};
		linkedItems[] = {JA_104th_Unix_Helmet, SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		// all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Unix_Helmet, SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Woods : SWLB_clone_base_P2
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_Woods_Uniform";
		displayName = "104th Woods";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_ARF_Armours\data\Textures\104th_ARF_Woods_Upper.paa", "Jangos_ARF_Armours\data\Textures\104th_ARF_Woods_Lower.paa"};
		linkedItems[] = {JA_104th_Woods_Helmet, SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		// all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Woods_Helmet, SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
};
