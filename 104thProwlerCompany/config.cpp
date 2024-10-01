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
	class SWLB_Clone_Pilot_P2_Helmet;
	class JA_104th_Base_Clone_Uniform;
	class SWLB_clone_mc_uniform;
	class SWLB_clone_arc_armor;
	class SWLB_CEE_Airborne_Officer;
	class SWLB_clone_BARC_helmet;
	class SWLB_clone_eng_helmet;
	class SWLB_clone_AB_helmet;
	class JA_104th_ARF_P1_Helmet;
	class SWLB_clone_P15_Helmet;
	class SWLB_clone_P1_helmet;
	class SWLB_clone_P1_2_helmet;
	class SWLB_clone_P2_Helmet;
	class lsd_gar_standart_nvg;
	class lsd_gar_rangefinder_nvg;
	class lsd_gar_p2MarshalCommander_nvg;
	class SWLB_clone_airborne_nco_armor;
	class UniformItem;
	class VestItem;

	// Inheritance for vests
	// Makes making each vest a rebreather easier
	class ItemInfo;
	class SWLB_clone_basic_armor;
	class JA_104th_Base_officer_Vest;

	class JA_Prowler_P2_Base_NCO_Helmet : SWLB_clone_BARC_helmet
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};																	   // don't change this
		displayname = "Clone Trooper Helmet (Prowler NCO - P2)";										   // the name it will be in game
		hiddenSelectionsTextures[] = {"104thProwlerCompany\data\Textures\Prowler_Armored_NCO_Helmet.paa"}; // the file path to the texture
	};
	class JA_Prowler_P2_Base_NCO_Uniform : JA_104th_Base_Clone_Uniform
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (Prowler NCO - P2)";
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
			uniformClass = "JA_104th_Base_P2_Prowler_NCO";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_Prowler_P2_Base_Officer_Helmet : SWLB_clone_BARC_helmet
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};																		   // don't change this
		displayname = "Clone Trooper Helmet (Prowler Officer - P2)";										   // the name it will be in game
		hiddenSelectionsTextures[] = {"104thProwlerCompany\data\Textures\Prowler_Armored_Officer_Helmet.paa"}; // the file path to the texture
	};
	class JA_Prowler_P2_Base_Officer_Uniform : JA_104th_Base_Clone_Uniform
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (Prowler Officer - P2)";
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
			uniformClass = "JA_104th_Base_P2_Prowler_Officer";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_Prowler_P2_Base_Fenris_Helmet : SWLB_clone_BARC_helmet
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};																  // don't change this
		displayname = "Clone Trooper Helmet (Prowler Fenris - P2)";									  // the name it will be in game
		hiddenSelectionsTextures[] = {"104thProwlerCompany\data\Textures\Captain_Fenris_Helmet.paa"}; // the file path to the texture
	};
	class JA_Prowler_P2_Base_Fenris_Uniform : JA_104th_Base_Clone_Uniform
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (Prowler Fenris - P2)";
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
			uniformClass = "JA_104th_Base_P2_Prowler_Fenris";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_Prowler_P2_Base_Trooper_Helmet : SWLB_clone_BARC_helmet
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};																		   // don't change this
		displayname = "Clone Trooper Helmet (Prowler Trooper - P2)";										   // the name it will be in game
		hiddenSelectionsTextures[] = {"104thProwlerCompany\data\Textures\Prowler_Armored_Trooper_Helmet.paa"}; // the file path to the texture
	};
	class JA_Prowler_P2_Base_Trooper_Uniform : JA_104th_Base_Clone_Uniform
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (Prowler Trooper - P2)";
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
			uniformClass = "JA_104th_Base_P2_Prowler_Trooper";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_Prowler_P2_Base_Medic_Helmet : SWLB_clone_BARC_helmet
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};																		 // don't change this
		displayname = "Clone Trooper Helmet (Prowler Medic - P2)";											 // the name it will be in game
		hiddenSelectionsTextures[] = {"104thProwlerCompany\data\Textures\Prowler_Armored_Medic_Helmet.paa"}; // the file path to the texture
	};
	class ls_gar_engineer_helmet;
	class JA_Prowler_ENG_Base_Helmet : ls_gar_engineer_helmet
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] =
			{
				"camo1",
				"illum",
				"visor"};											   // don't change this
		displayname = "Clone Trooper Helmet (Prowler Engineer - Eng)"; // the name it will be in game
		hiddenSelectionsMaterials[] = {};
		hiddenSelectionsTextures[] = {
			"104thProwlerCompany\data\Textures\Prowler_ENG_Engineer_Helmet.paa",
			"ls_armor_bluefor\helmet\gar\engineer\data\light_co.paa",
			"ls_armor_bluefor\helmet\gar\engineer\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_Prowler_ENG_Officer_Helmet : SWLB_clone_eng_helmet
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] =
			{
				"camo1",
				"illum"};											  // don't change this
		displayname = "Clone Trooper Helmet (Prowler Officer - Eng)"; // the name it will be in game
		hiddenSelectionsTextures[] = {
			"104thProwlerCompany\data\Textures\Prowler_ENG_Officer_Helmet.paa",
			"104thProwlerCompany\data\Textures\Prowler_ENG_Officer_Helmet.paa"}; // the file path to the texture
	};
	class JA_Prowler_P2_Base_Medic_Uniform : JA_104th_Base_Clone_Uniform
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (Prowler Medic - P2)";
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
			uniformClass = "JA_104th_Base_P2_Prowler_Medic";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_Prowler_P2_Base_Fenris_Armor : JA_104th_Base_officer_Vest
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

	class JA_104th_Base_P2_Prowler_NCO : SWLB_clone_base_P2
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
		linkedItems[] = {JA_Prowler_P2_Base_NCO_Helmet, SWLB_clone_airborne_nco_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		// all items that will be on unit
		respawnLinkedItems[] = {JA_Prowler_P2_Base_NCO_Helmet, SWLB_clone_airborne_nco_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Base_P2_Prowler_Officer : SWLB_clone_base_P2
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
		linkedItems[] = {JA_Prowler_P2_Base_Officer_Helmet, JA_104th_Base_officer_Vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		   // all items that will be on unit
		respawnLinkedItems[] = {JA_Prowler_P2_Base_Officer_Helmet, JA_104th_Base_officer_Vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Base_P2_Prowler_Fenris : SWLB_clone_base_P2
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
	class JA_104th_Base_P2_Prowler_Trooper : SWLB_clone_base_P2
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
	class JA_104th_Base_P2_Prowler_Medic : SWLB_clone_base_P2
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