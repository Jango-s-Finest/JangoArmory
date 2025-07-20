#include "basicDefines_A3.hpp"
class DefaultEventhandlers;
class UniformSlotInfo;
class CfgPatches
{
	class Jangos_Armory_Prowler
	{
		author = "Jango's Finest";
		units[] = {
			"JA_104th_Base_P2_Prowler_NCO",
			"JA_104th_Base_P2_Prowler_Officer",
			"JA_104th_Base_P2_Prowler_Fenris",
			"JA_104th_Base_P2_Prowler_Trooper",
			"JA_104th_Base_P2_Prowler_Medic"};
		weapons[] = {
			"JA_Prowler_P2_Base_NCO_Helmet",
			"JA_Prowler_P2_Base_NCO_Uniform",
			"JA_Prowler_P2_Base_Officer_Helmet",
			"JA_Prowler_P2_Base_Officer_Uniform",
			"JA_Prowler_P2_Base_Fenris_Helmet",
			"JA_Prowler_P2_Base_Fenris_Uniform",
			"JA_Prowler_P2_Base_Trooper_Helmet",
			"JA_Prowler_P2_Base_Trooper_Uniform",
			"JA_Prowler_P2_Base_Medic_Helmet",
			"JA_Prowler_ENG_Base_Helmet",
			"JA_Prowler_ENG_Officer_Helmet",
			"JA_Prowler_P2_Base_Medic_Uniform",
			"JA_Prowler_P2_Base_Fenris_Armor"};
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
			side = 1;	  // Opfor = 0, Blufor = 1, Indep = 2.
			icon = "";
		};
	};
};
class cfgEditorSubcategories
{
	class 104th_Categ_Clones_Prowler
	{
		displayname = "104th - Prowler Company";
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
	class ls_gar_commander_vest;
	class ls_gar_airborne_vest;
	class ls_gar_airborneOfficer_vest;
	class ls_gar_barc_helmet;
	class ls_gar_engineer_helmet;
	class ls_gar_airborne_helmet;
	class ls_gar_phase1Arf_helmet;
	class ls_gar_arc_helmet;
	class ls_gar_phase1_helmet;
	class ls_gar_rex_helmet;
	class ls_gar_phase2_helmet;
	class lsd_gar_standart_nvg;
	class lsd_gar_rangefinder_nvg;
	class lsd_gar_p2MarshalCommander_nvg;
	class ls_gar_airborneNCO_vest;
	class UniformItem;
	class VestItem;

	// Inheritance for vests
	// Makes making each vest a rebreather easier
	class ItemInfo;
	class ls_gar_clone_vest;
	class ls_gar_officer_vest : ls_gar_clone_vest
	{
		class ItemInfo;
	};

	class JA_Prowler_P2_Base_NCO_Helmet : ls_gar_barc_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		// don't change this
		displayname = "Clone Trooper Helmet (Prowler NCO - P2)";										   // the name it will be in game
		hiddenSelectionsTextures[] = {"104thProwlerCompany\data\Textures\Prowler_Armored_NCO_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\barc\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_Prowler_P2_Base_NCO_Uniform : ls_gar_marshalCommander_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (Prowler NCO - P2)";
		model = "\ls\core\addons\characters_clone_legacy\uniforms\phase2\ls_gar_phase2_uniform.p3d";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"104thProwlerCompany\data\Textures\Prowler_Armored_NCO_Upper.paa",
				"104thProwlerCompany\data\Textures\Prowler_Armored_NCO_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			scope = 2;
			uniformClass = "JA_104th_Base_P2_Prowler_NCO";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_Prowler_P2_Base_Officer_Helmet : ls_gar_barc_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		// don't change this
		displayname = "Clone Trooper Helmet (Prowler Officer - P2)";										   // the name it will be in game
		hiddenSelectionsTextures[] = {"104thProwlerCompany\data\Textures\Prowler_Armored_Officer_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\barc\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_Prowler_P2_Base_Officer_Uniform : ls_gar_marshalCommander_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (Prowler Officer - P2)";
		model = "\ls\core\addons\characters_clone_legacy\uniforms\phase2\ls_gar_phase2_uniform.p3d";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"104thProwlerCompany\data\Textures\Prowler_Armored_Officer_Upper.paa",
				"104thProwlerCompany\data\Textures\Prowler_Armored_Officer_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			scope = 2;
			uniformClass = "JA_104th_Base_P2_Prowler_Officer";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_Prowler_P2_Base_Fenris_Helmet : ls_gar_barc_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		// don't change this
		displayname = "Clone Trooper Helmet (Prowler Fenris - P2)";									  // the name it will be in game
		hiddenSelectionsTextures[] = {"104thProwlerCompany\data\Textures\Captain_Fenris_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\barc\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_Prowler_P2_Base_Fenris_Uniform : ls_gar_marshalCommander_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (Prowler Fenris - P2)";
		model = "\ls\core\addons\characters_clone_legacy\uniforms\phase2\ls_gar_phase2_uniform.p3d";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"104thProwlerCompany\data\Textures\Captain_Fenris_Upper.paa",
				"104thProwlerCompany\data\Textures\Captain_Fenris_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			scope = 2;
			uniformClass = "JA_104th_Base_P2_Prowler_Fenris";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_Prowler_P2_Base_Trooper_Helmet : ls_gar_barc_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		// don't change this
		displayname = "Clone Trooper Helmet (Prowler Trooper - P2)";										   // the name it will be in game
		hiddenSelectionsTextures[] = {"104thProwlerCompany\data\Textures\Prowler_Armored_Trooper_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\barc\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_Prowler_P2_Base_Trooper_Uniform : ls_gar_marshalCommander_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (Prowler Trooper - P2)";
		model = "\ls\core\addons\characters_clone_legacy\uniforms\phase2\ls_gar_phase2_uniform.p3d";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"104thProwlerCompany\data\Textures\Prowler_Armored_Trooper_Upper.paa",
				"104thProwlerCompany\data\Textures\Prowler_Armored_Trooper_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			scope = 2;
			uniformClass = "JA_104th_Base_P2_Prowler_Trooper";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_Prowler_P2_Base_Medic_Helmet : ls_gar_barc_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		// don't change this
		displayname = "Clone Trooper Helmet (Prowler Medic - P2)";											 // the name it will be in game
		hiddenSelectionsTextures[] = {"104thProwlerCompany\data\Textures\Prowler_Armored_Medic_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\barc\data\visor_co.paa"}; // the file path to the texture
	};
	class ls_gar_engineer_helmet;
	class JA_Prowler_ENG_Base_Helmet : ls_gar_engineer_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] =
			{
				"camo1",
				"illum",
				"visor"};														// don't change this
		displayname = "Clone Trooper Engineer Helmet (Prowler Engineer - Eng)"; // the name it will be in game

		hiddenSelectionsTextures[] = {
			"104thProwlerCompany\data\Textures\Prowler_ENG_Engineer_Helmet.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\engineer\data\light_co.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\engineer\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_Prowler_ENG_Officer_Helmet : ls_gar_engineer_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] =
			{
				"camo1",
				"illum",
				"visor"};													   // don't change this
		displayname = "Clone Trooper Engineer Helmet (Prowler Officer - Eng)"; // the name it will be in game
		hiddenSelectionsTextures[] = {
			"104thProwlerCompany\data\Textures\Prowler_ENG_Officer_Helmet.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\engineer\data\light_co.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\engineer\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_Prowler_P2_Base_Medic_Uniform : ls_gar_marshalCommander_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (Prowler Medic - P2)";
		model = "\ls\core\addons\characters_clone_legacy\uniforms\phase2\ls_gar_phase2_uniform.p3d";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"104thProwlerCompany\data\Textures\Prowler_Armored_Medic_Upper.paa",
				"104thProwlerCompany\data\Textures\Prowler_Armored_Medic_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			scope = 2;
			uniformClass = "JA_104th_Base_P2_Prowler_Medic";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_Prowler_P2_Base_Fenris_Armor : ls_gar_officer_vest
	{
		author = "Dak";
		displayName = "Clone Trooper Officer Vest (Fenris)";
		hiddenSelections[] =
			{
				"camo1"

			};
		hiddenSelectionsTextures[] =
			{
				"104thProwlerCompany\data\Textures\fenriskama.paa"};
		class ItemInfo : ItemInfo
		{
			containerClass = "Supply80";
			vestType = "Rebreather";
		};
	};
};

class CfgVehicles
{
	class lsd_gar_phase2_base;
	class lsd_gar_phase2_base;
	class ls_gar_marshalCommander_base;
	class ls_gar_standard_backpack;
	class ls_gar_rto_mini_backpack;
	class ls_gar_heavy_backpack;
	class ls_gar_medic_backpack;
	class ls_gar_Radio_backpack;

	class JA_104th_Base_P2_Prowler_NCO : lsd_gar_phase2_base
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_Prowler_P2_Base_NCO_Uniform";
		displayName = "P2 - NCO";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Prowler";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"104thProwlerCompany\data\Textures\Prowler_Armored_NCO_Upper.paa", "104thProwlerCompany\data\Textures\Prowler_Armored_NCO_Lower.paa"};
		linkedItems[] = {JA_Prowler_P2_Base_NCO_Helmet, ls_gar_airborneNCO_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		  // all items that will be on unit
		respawnLinkedItems[] = {JA_Prowler_P2_Base_NCO_Helmet, ls_gar_airborneNCO_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Base_P2_Prowler_Officer : lsd_gar_phase2_base
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_Prowler_P2_Base_Officer_Uniform";
		displayName = "P2 - Officer";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Prowler";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"104thProwlerCompany\data\Textures\Prowler_Armored_Officer_Upper.paa", "104thProwlerCompany\data\Textures\Prowler_Armored_Officer_Lower.paa"};
		linkedItems[] = {JA_Prowler_P2_Base_Officer_Helmet, ls_gar_officer_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		  // all items that will be on unit
		respawnLinkedItems[] = {JA_Prowler_P2_Base_Officer_Helmet, ls_gar_officer_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Base_P2_Prowler_Fenris : lsd_gar_phase2_base
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_Prowler_P2_Base_Fenris_Uniform";
		displayName = "P2 - Fenris";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Prowler";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"104thProwlerCompany\data\Textures\Captain_Fenris_Upper.paa", "104thProwlerCompany\data\Textures\Captain_Fenris_Lower.paa"};
		linkedItems[] = {JA_Prowler_P2_Base_Fenris_Helmet, JA_Prowler_P2_Base_Fenris_Armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		 // all items that will be on unit
		respawnLinkedItems[] = {JA_Prowler_P2_Base_Fenris_Helmet, JA_Prowler_P2_Base_Fenris_Armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Base_P2_Prowler_Trooper : lsd_gar_phase2_base
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_Prowler_P2_Base_Trooper_Uniform";
		displayName = "P2 - Trooper";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Prowler";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"104thProwlerCompany\data\Textures\Prowler_Armored_Trooper_Upper.paa", "104thProwlerCompany\data\Textures\Prowler_Armored_Trooper_Lower.paa"};
		linkedItems[] = {JA_Prowler_P2_Base_Trooper_Helmet, JA_Prowler_AB_Base_Trooper_Armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		   // all items that will be on unit
		respawnLinkedItems[] = {JA_Prowler_P2_Base_Trooper_Helmet, JA_Prowler_AB_Base_Trooper_Armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Base_P2_Prowler_Medic : lsd_gar_phase2_base
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_Prowler_P2_Base_Medic_Uniform";
		displayName = "P2 - Medic";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Prowler";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"104thProwlerCompany\data\Textures\Prowler_Armored_Medic_Upper.paa", "104thProwlerCompany\data\Textures\Prowler_Armored_Medic_Lower.paa"};
		linkedItems[] = {JA_Prowler_P2_Base_Medic_Helmet, JA_Prowler_AB_Base_Trooper_Armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		 // all items that will be on unit
		respawnLinkedItems[] = {JA_Prowler_P2_Base_Medic_Helmet, JA_Prowler_AB_Base_Trooper_Armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
};

class CfgGroups
{
	class West
	{
		class JA_Bluefor
		{
			name = "Jango's Finest";
			class JA_Bluefor_P2_Troopers_Prowler
			{
				name = "Prowler - P2";
				class JA_Group_P2_Team_Prowler
				{
					name = "P2 - Team";
					side = 1;
					class Unit0
					{
						vehicle = "JA_104th_Base_P2_Prowler_Trooper";
						rank = "CORPORAL";
						position[] = {0, 0, 0};
						side = 1;
					};
					class Unit1
					{
						vehicle = "JA_104th_Base_P2_Prowler_Trooper";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
						side = 1;
					};
					class Unit2
					{
						vehicle = "JA_104th_Base_P2_Prowler_Medic";
						rank = "PRIVATE";
						position[] = {5, -5, 0};
						side = 1;
					};
				};
				class JA_Group_P2_Squad_Prowler
				{
					name = "P2 - Squad";
					side = 1;
					class Unit0
					{
						vehicle = "JA_104th_Base_P2_Prowler_NCO";
						rank = "CORPORAL";
						position[] = {0, 0, 0};
						side = 1;
					};
					class Unit1
					{
						vehicle = "JA_104th_Base_P2_Prowler_Trooper";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
						side = 1;
					};
					class Unit2
					{
						vehicle = "JA_104th_Base_P2_Prowler_Trooper";
						rank = "PRIVATE";
						position[] = {5, -5, 0};
						side = 1;
					};
					class Unit3
					{
						vehicle = "JA_104th_Base_P2_Prowler_Medic";
						rank = "PRIVATE";
						position[] = {10, -10, 0};
						side = 1;
					};
					class Unit4
					{
						vehicle = "JA_104th_Base_P2_Prowler_Trooper";
						rank = "CORPORAL";
						position[] = {-10, -10, 0};
						side = 1;
					};
					class Unit5
					{
						vehicle = "JA_104th_Base_P2_Prowler_Trooper";
						rank = "PRIVATE";
						position[] = {-15, -15, 0};
						side = 1;
					};
				};
				class JA_Group_Kaleb_P2_Squad_Prowler
				{
					name = "P2 - Kaleb Squad";
					side = 1;
					class Unit0
					{
						vehicle = "JA_104th_Base_P2_Prowler_Fenris";
						rank = "CORPORAL";
						position[] = {0, 0, 0};
						side = 1;
					};
					class Unit1
					{
						vehicle = "JA_104th_Base_P2_Prowler_Officer";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
						side = 1;
					};
					class Unit2
					{
						vehicle = "JA_104th_Base_P2_Prowler_Trooper";
						rank = "PRIVATE";
						position[] = {5, -5, 0};
						side = 1;
					};
					class Unit3
					{
						vehicle = "JA_104th_Base_P2_Prowler_Medic";
						rank = "PRIVATE";
						position[] = {10, -10, 0};
						side = 1;
					};
					class Unit4
					{
						vehicle = "JA_104th_Base_P2_Prowler_Trooper";
						rank = "CORPORAL";
						position[] = {-10, -10, 0};
						side = 1;
					};
					class Unit5
					{
						vehicle = "JA_104th_Base_P2_Prowler_Trooper";
						rank = "PRIVATE";
						position[] = {-15, -15, 0};
						side = 1;
					};
				};
			};
		};
	};
};