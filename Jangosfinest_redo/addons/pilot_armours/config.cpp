#include "basicDefines_A3.hpp"
#include "\JA\jangos_Armory\addons\main\script_component.hpp"
class CfgPatches
{
	class ADDON
	{
		author = "Jango's Finest";
		requiredVersion = 0.1;
		requiredAddons[] = {};
		units[] = {
			"JA_104th_Base",
			"JA_104th_Bail",
			"JA_104th_Beef",
			"JA_104th_Fire",
			"JA_104th_Haze",
			"JA_104th_Varelli",
			"JA_104th_OD",
			"JA_104th_Cherryy",
			"JA_104th_Fish",
			"JA_104th_Spirit",
			"JA_104th_Boris"
		};
		weapons[] = {
			"JA_104th_Base_Uniform",
			"JA_104th_Bail_Uniform",
			"JA_104th_Beef_Uniform",
			"JA_104th_Fire_Uniform",
			"JA_104th_Haze_Uniform",
			"JA_104th_Varelli_Uniform",
			"JA_104th_OD_Uniform",
			"JA_104th_Cherryy_Uniform",
			"JA_104th_Fish_Uniform",
			"JA_104th_Spirit_Uniform",
			"JA_104th_Boris_Uniform"
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
	class ls_gar_marshalCommander_uniform;
	class UniformItem;

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
				QPATHTOEF(pilot_armours,data\textures\104th_P2_1C_Aviation_Upper.paa),
				QPATHTOEF(pilot_armours,data\textures\104th_P2_1C_Aviation_Lower.paa)};
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
				QPATHTOEF(pilot_armours,data\textures\104th_Pilot_Bail_Upper.paa),
				QPATHTOEF(pilot_armours,data\textures\104th_Pilot_Bail_Lower.paa)};
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
				QPATHTOEF(pilot_armours,data\textures\104th_Pilot_Beef_Upper.paa),
				QPATHTOEF(pilot_armours,data\textures\104th_Pilot_Beef_Lower.paa)};
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
				QPATHTOEF(pilot_armours,data\textures\104th_Pilot_Fire_Uniform_Upper.paa),
				QPATHTOEF(pilot_armours,data\textures\104th_Pilot_Fire_Uniform_Lower.paa)};
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
				QPATHTOEF(pilot_armours,data\textures\104th_Pilot_Haze_Upper.paa),
				QPATHTOEF(pilot_armours,data\textures\104th_Pilot_Haze_Lower.paa)};
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
				QPATHTOEF(pilot_armours,data\textures\104th_Pilot_Varelli_Upper.paa),
				QPATHTOEF(pilot_armours,data\textures\104th_Pilot_Varelli_Lower.paa)};
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
				QPATHTOEF(pilot_armours,data\textures\104th_Pilot_OD_Upper.paa),
				QPATHTOEF(pilot_armours,data\textures\104th_Pilot_OD_Lower.paa)};
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
				QPATHTOEF(pilot_armours,data\textures\104th_Pilot_Cherryy_Upper.paa),
				QPATHTOEF(pilot_armours,data\textures\104th_Pilot_Cherryy_Lower.paa)};
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
				QPATHTOEF(pilot_armours,data\textures\104th_Pilot_Fish_Upper.paa),
				QPATHTOEF(pilot_armours,data\textures\104th_Pilot_Fish_Lower.paa)};
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
	class JA_104th_Spirit_Uniform : ls_gar_marshalCommander_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Spirit)";
		model = "\ls\core\addons\characters_clone_legacy\uniforms\phase2\ls_gar_phase2_uniform.p3d";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				QPATHTOEF(pilot_armours,data\textures\104th_Pilot_Spirit_Upper.paa),
				QPATHTOEF(pilot_armours,data\textures\104th_Pilot_Spirit_Lower.paa)};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			scope = 2;
			uniformClass = "JA_104th_Spirit";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Boris_Uniform : ls_gar_marshalCommander_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Boris)";
		model = "\ls\core\addons\characters_clone_legacy\uniforms\phase2\ls_gar_phase2_uniform.p3d";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				QPATHTOEF(pilot_armours,data\textures\104th_Pilot_Boris_Upper.paa),
				QPATHTOEF(pilot_armours,data\textures\104th_Pilot_Boris_Lower.paa)};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			scope = 2;
			uniformClass = "JA_104th_Boris";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
};

class CfgVehicles
{
	class lsd_gar_phase2_base;
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
		hiddenSelectionsTextures[] = {QPATHTOEF(pilot_armours,data\textures\104th_P2_1C_Aviation_Upper.paa), QPATHTOEF(pilot_armours,data\textures\104th_P2_1C_Aviation_Lower.paa)};
		linkedItems[] = {"JA_104th_Base_Pilot_Helmet", "'ls_gar_clone_vest'", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};		 // all items that will be on unit
		respawnLinkedItems[] = {"JA_104th_Base_Pilot_Helmet", "'ls_gar_clone_vest'", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"}; // all items that will be on unit on respawn
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
		hiddenSelectionsTextures[] = {QPATHTOEF(pilot_armours,data\textures\104th_Pilot_Bail_Upper.paa), QPATHTOEF(pilot_armours,data\textures\104th_Pilot_Bail_Lower.paa)};
		linkedItems[] = {"JA_104th_Bail_Pilot_Helmet", "'ls_gar_clone_vest'", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};		 // all items that will be on unit
		respawnLinkedItems[] = {"JA_104th_Bail_Pilot_Helmet", "'ls_gar_clone_vest'", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"}; // all items that will be on unit on respawn
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
		hiddenSelectionsTextures[] = {QPATHTOEF(pilot_armours,data\textures\104th_Pilot_Beef_Upper.paa), QPATHTOEF(pilot_armours,data\textures\104th_Pilot_Beef_Lower.paa)};
		linkedItems[] = {"JA_104th_Beef_Helmet", "'ls_gar_clone_vest'", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};		   // all items that will be on unit
		respawnLinkedItems[] = {"JA_104th_Beef_Helmet", "'ls_gar_clone_vest'", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"}; // all items that will be on unit on respawn
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
		hiddenSelectionsTextures[] = {QPATHTOEF(pilot_armours,data\textures\104th_Pilot_Fire_Uniform_Upper.paa), QPATHTOEF(pilot_armours,data\textures\104th_Pilot_Fire_Uniform_Lower.paa)};
		linkedItems[] = {"JA_104th_Fire_Helmet", "'ls_gar_clone_vest'", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};		   // all items that will be on unit
		respawnLinkedItems[] = {"JA_104th_Fire_Helmet", "'ls_gar_clone_vest'", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"}; // all items that will be on unit on respawn
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
		hiddenSelectionsTextures[] = {QPATHTOEF(pilot_armours,data\textures\104th_Pilot_Haze_Upper.paa), QPATHTOEF(pilot_armours,data\textures\104th_Pilot_Haze_Lower.paa)};
		linkedItems[] = {"JA_104th_Echo_Pilot_Helmet", "'ls_gar_clone_vest'", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};		 // all items that will be on unit
		respawnLinkedItems[] = {"JA_104th_Echo_Pilot_Helmet", "'ls_gar_clone_vest'", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"}; // all items that will be on unit on respawn
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
		hiddenSelectionsTextures[] = {QPATHTOEF(pilot_armours,data\textures\104th_Pilot_Varelli_Upper.paa), QPATHTOEF(pilot_armours,data\textures\104th_Pilot_Varelli_Lower.paa)};
		linkedItems[] = {"JA_104th_Varelli_Pilot_Helmet", "'ls_gar_clone_vest'", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};		// all items that will be on unit
		respawnLinkedItems[] = {"JA_104th_Varelli_Pilot_Helmet", "'ls_gar_clone_vest'", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"}; // all items that will be on unit on respawn
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
		hiddenSelectionsTextures[] = {QPATHTOEF(pilot_armours,data\textures\104th_Pilot_OD_Upper.paa), QPATHTOEF(pilot_armours,data\textures\104th_Pilot_OD_Lower.paa)};
		linkedItems[] = {"JA_104th_OD_Pilot_Helmet", "'ls_gar_clone_vest'", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};		   // all items that will be on unit
		respawnLinkedItems[] = {"JA_104th_OD_Pilot_Helmet", "'ls_gar_clone_vest'", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"}; // all items that will be on unit on respawn
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
		hiddenSelectionsTextures[] = {QPATHTOEF(pilot_armours,data\textures\104th_Pilot_Cherryy_Upper.paa), QPATHTOEF(pilot_armours,data\textures\104th_Pilot_Cherryy_Lower.paa)};
		linkedItems[] = {"JA_104th_Cherryy_Pilot_Helmet", "'ls_gar_clone_vest'", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};		// all items that will be on unit
		respawnLinkedItems[] = {"JA_104th_Cherryy_Pilot_Helmet", "'ls_gar_clone_vest'", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"}; // all items that will be on unit on respawn
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
		hiddenSelectionsTextures[] = {QPATHTOEF(pilot_armours,data\textures\104th_Pilot_Fish_Upper.paa), QPATHTOEF(pilot_armours,data\textures\104th_Pilot_Fish_Lower.paa)};
		linkedItems[] = {"JA_104th_Fish_Pilot_Helmet", "'ls_gar_clone_vest'", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};		 // all items that will be on unit
		respawnLinkedItems[] = {"JA_104th_Fish_Pilot_Helmet", "'ls_gar_clone_vest'", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"}; // all items that will be on unit on respawn
	};
	class JA_104th_Spirit : lsd_gar_phase2_base
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_Spirit_Uniform";
		displayName = "104th Spirit";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {QPATHTOEF(pilot_armours,data\textures\104th_Pilot_Spirit_Upper.paa), QPATHTOEF(pilot_armours,data\textures\104th_Pilot_Spirit_Lower.paa)};
		linkedItems[] = {"JA_104th_Spirit_Pilot_Helmet", "'ls_gar_clone_vest'", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};		 // all items that will be on unit
		respawnLinkedItems[] = {"JA_104th_Spirit_Pilot_Helmet", "'ls_gar_clone_vest'", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"}; // all items that will be on unit on respawn
	};
	class JA_104th_Boris : lsd_gar_phase2_base
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_Boris_Uniform";
		displayName = "104th Boris";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {QPATHTOEF(pilot_armours,data\textures\104th_Pilot_Boris_Upper.paa), QPATHTOEF(pilot_armours,data\textures\104th_Pilot_Boris_Lower.paa)};
		linkedItems[] = {"JA_104th_Boris_Pilot_Helmet", "'ls_gar_clone_vest'", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};		 // all items that will be on unit
		respawnLinkedItems[] = {"JA_104th_Boris_Pilot_Helmet", "'ls_gar_clone_vest'", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"}; // all items that will be on unit on respawn
	};
};
