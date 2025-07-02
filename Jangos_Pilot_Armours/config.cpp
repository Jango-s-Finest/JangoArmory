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
			"JA_104th_Cherryy"};
		weapons[] = {
			"JA_104th_Base_Uniform",
			"JA_104th_Bail_Uniform",
			"JA_104th_Beef_Uniform",
			"JA_104th_Haze_Uniform",
			"JA_104th_Varelli_Uniform",
			"JA_104th_Fish_Uniform",
			"JA_104th_OD_Uniform",
			"JA_104th_Cherryy_Uniform"};
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
	class ls_gar_phase2Pilot_helmet;
	class ls_gar_phase2_uniform;
	class ls_gar_marshalCommander_uniform;
	class ls_gar_arc_vest;
	class ls_gar_officer_vest;
	class ls_gar_commander_vest;
	class ls_gar_airborne_vest;
	class ls_gar_airborneOfficer_vest;
	class ls_gar_forceReconNCO_vest;
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
	class ls_gar_kama_vest;
	class ls_gar_medic_vest;
	class ls_gar_clone_vest;
	class ls_gar_airborneNCO_vest;
	class ls_gar_engineer_helmet;
	class ls_sob_phase2SpecOp_helmet;
	class UniformItem;
	class VestItem;

	class JA_104th_Base_Uniform : ls_gar_marshalCommander_uniform
	{
		author = "Jango's Finest";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th [1C] Pilot)";
		model = "\ls\core\addons\characters_clone_legacy\uniforms\phase2\ls_gar_phase2_uniform.p3d";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Pilot_Armours\data\Textures\104th_P2_1C_Aviation_Upper.paa",
				"Jangos_Pilot_Armours\data\Textures\104th_P2_1C_Aviation_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			scope = 2;
			uniformClass = "JA_104th_Base";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Bail_Uniform : ls_gar_marshalCommander_uniform // TEXTURE PATH UPD + UNIT
	{
		author = "Jango's Finest";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Bail)";
		model = "\ls\core\addons\characters_clone_legacy\uniforms\phase2\ls_gar_phase2_uniform.p3d";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Pilot_Armours\data\Textures\104th_Pilot_Bail_Upper.paa",
				"Jangos_Pilot_Armours\data\Textures\104th_Pilot_Bail_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			scope = 2;
			uniformClass = "JA_104th_Bail";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Beef_Uniform : ls_gar_marshalCommander_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Beef)";
		model = "\ls\core\addons\characters_clone_legacy\uniforms\phase2\ls_gar_phase2_uniform.p3d";
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
			scope = 2;
			uniformClass = "JA_104th_Beef";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Fire_Uniform : ls_gar_marshalCommander_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Fire)";
		model = "\ls\core\addons\characters_clone_legacy\uniforms\phase2\ls_gar_phase2_uniform.p3d";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Pilot_Armours\data\Textures\104th_Pilot_Fire_Uniform_Upper.paa",
				"Jangos_Pilot_Armours\data\Textures\104th_Pilot_Fire_Uniform_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			scope = 2;
			uniformClass = "JA_104th_Fire";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Haze_Uniform : ls_gar_marshalCommander_uniform
	{
		author = "Jango's Finest";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Haze)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Pilot_Armours\data\Textures\104th_Pilot_Haze_Upper.paa",
				"Jangos_Pilot_Armours\data\Textures\104th_Pilot_Haze_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "";
			uniformClass = "JA_104th_Haze";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};

	class JA_104th_Varelli_Uniform : ls_gar_marshalCommander_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Varelli)";
		model = "\ls\core\addons\characters_clone_legacy\uniforms\phase2\ls_gar_phase2_uniform.p3d";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Pilot_Armours\data\Textures\104th_Pilot_Varelli_Upper.paa",
				"Jangos_Pilot_Armours\data\Textures\104th_Pilot_Varelli_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			scope = 2;
			uniformClass = "JA_104th_Varelli";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};

	class JA_104th_OD_Uniform : ls_gar_marshalCommander_uniform
	{
		author = "Fish";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th OD)";
		model = "\ls\core\addons\characters_clone_legacy\uniforms\phase2\ls_gar_phase2_uniform.p3d";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Pilot_Armours\data\Textures\104th_Pilot_OD_Upper.paa",
				"Jangos_Pilot_Armours\data\Textures\104th_Pilot_OD_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			scope = 2;
			uniformClass = "JA_104th_OD";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};

	class JA_104th_Cherryy_Uniform : ls_gar_marshalCommander_uniform
	{
		author = "Fish";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Cherryy)";
		model = "\ls\core\addons\characters_clone_legacy\uniforms\phase2\ls_gar_phase2_uniform.p3d";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Pilot_Armours\data\Textures\104th_Pilot_Cherryy_Upper.paa",
				"Jangos_Pilot_Armours\data\Textures\104th_Pilot_Cherryy_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			scope = 2;
			uniformClass = "JA_104th_Cherryy";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};

	class JA_104th_Fish_Uniform : ls_gar_marshalCommander_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Fish)";
		model = "\ls\core\addons\characters_clone_legacy\uniforms\phase2\ls_gar_phase2_uniform.p3d";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Pilot_Armours\data\Textures\104th_Pilot_Fish_Upper.paa",
				"Jangos_Pilot_Armours\data\Textures\104th_Pilot_Fish_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			scope = 2;
			uniformClass = "JA_104th_Fish";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
};

class CfgVehicles
{
	class lsd_gar_phase2_base;
	class ls_gar_marshalCommander_base;
	class ls_gar_standard_backpack;
	class ls_gar_rto_mini_backpack;
	class ls_gar_heavy_backpack;
	class ls_gar_medic_backpack;
	class ls_gar_Radio_backpack;
	class JLTS_Clone_jumppack;
	class JA_104th_Jumppack_JT12;
	class JA_104th_Jumppack_JT12_LR;
	// General Uniforms

	class JA_104th_Base : lsd_gar_phase2_base
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
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_Pilot_Armours\data\Textures\104th_P2_1C_Aviation_Upper.paa", "Jangos_Pilot_Armours\data\Textures\104th_P2_1C_Aviation_Lower.paa"};
		linkedItems[] = {JA_104th_Base_Pilot_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		 // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Base_Pilot_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Bail : lsd_gar_phase2_base
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
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_Pilot_Armours\data\Textures\104th_Pilot_Bail_Upper.paa", "Jangos_Pilot_Armours\data\Textures\104th_Pilot_Bail_Lower.paa"};
		linkedItems[] = {JA_104th_Bail_Pilot_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		 // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Bail_Pilot_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Beef : lsd_gar_phase2_base
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
		linkedItems[] = {JA_104th_Beef_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		   // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Beef_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Fire : lsd_gar_phase2_base
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
		hiddenSelectionsTextures[] = {"Jangos_Pilot_Armours\data\Textures\104th_Pilot_Fire_Uniform_Upper.paa", "Jangos_Pilot_Armours\data\Textures\104th_Pilot_Fire_Uniform_Lower.paa"};
		linkedItems[] = {JA_104th_Fire_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		   // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Fire_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Haze : lsd_gar_phase2_base
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
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_Pilot_Armours\data\Textures\104th_Pilot_Haze_Upper.paa", "Jangos_Pilot_Armours\data\Textures\104th_Pilot_Haze_Lower.paa"};
		linkedItems[] = {JA_104th_Echo_Pilot_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		 // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Echo_Pilot_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Varelli : lsd_gar_phase2_base
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
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_Pilot_Armours\data\Textures\104th_Pilot_Varelli_Upper.paa", "Jangos_Pilot_Armours\data\Textures\104th_Pilot_Varelli_Lower.paa"};
		linkedItems[] = {JA_104th_Varelli_Pilot_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		// all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Varelli_Pilot_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_OD : lsd_gar_phase2_base
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
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_Pilot_Armours\data\Textures\104th_Pilot_OD_Upper.paa", "Jangos_Pilot_Armours\data\Textures\104th_Pilot_OD_Lower.paa"};
		linkedItems[] = {JA_104th_OD_Pilot_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		   // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_OD_Pilot_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Cherryy : lsd_gar_phase2_base
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
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_Pilot_Armours\data\Textures\104th_Pilot_Cherryy_Upper.paa", "Jangos_Pilot_Armours\data\Textures\104th_Pilot_Cherryy_Lower.paa"};
		linkedItems[] = {JA_104th_Cherryy_Pilot_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		// all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Cherryy_Pilot_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Fish : lsd_gar_phase2_base
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
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_Pilot_Armours\data\Textures\104th_Pilot_Fish_Upper.paa", "Jangos_Pilot_Armours\data\Textures\104th_Pilot_Fish_Lower.paa"};
		linkedItems[] = {JA_104th_Fish_Pilot_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		 // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Fish_Pilot_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
};
