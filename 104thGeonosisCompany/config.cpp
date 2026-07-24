#include "basicDefines_A3.hpp"
class DefaultEventhandlers;
class UniformSlotInfo;
class CfgPatches
{
	class Jangos_Armory_Geonosis
	{
		author = "Jango's Finest";
		units[] = {
			"JA_104th_P1_Geonosis_CT",
			"JA_104th_P1_Geonosis_SGT",
			"JA_104th_P1_Geonosis_LT",
			"JA_104th_P1_Geonosis_CPT",
			"JA_104th_P1_Geonosis_CMD"
		};
		weapons[] = {
			"JA_104th_P1_Geonosis_CT_Helmet",
			"JA_104th_P1_Geonosis_CT_Uniform",
			"JA_104th_P1_Geonosis_SGT_Helmet",
			"JA_104th_P1_Geonosis_SGT_Uniform",
			"JA_104th_P1_Geonosis_LT_Helmet",
			"JA_104th_P1_Geonosis_LT_Uniform",
			"JA_104th_P1_Geonosis_CPT_Helmet",
			"JA_104th_P1_Geonosis_CPT_Uniform",
			"JA_104th_P1_Geonosis_CMD_Helmet",
			"JA_104th_P1_Geonosis_CMD_Uniform",
			"JA_104th_Vest_P1",
			"JA_104th_Base_Commander_Vest_GEO",
			"JA_104th_P1_officer_Vest",
			"JA_104th_ARC_PSGT_Vest"
		};
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
	class 104th_Categ_Clones_Geonosis
	{
		displayname = "104th - Geonosis";
	};
};

class CfgWeapons
{
	class InventoryItem_Base_F;
	class ItemCore;
	class ls_gar_phase2Pilot_helmet;
	class ls_gar_phase2_uniform;
	class ls_gar_marshalCommander_uniform;
	class ls_gar_commander_vest;
	class ls_gar_barc_helmet;
	class ls_gar_airborne_helmet;
	class ls_gar_phase1Arf_helmet;
	class ls_gar_desert_helmet;
	class ls_gar_engineer_helmet;
	class ls_gar_arc_helmet;
	class ls_gar_phase1_helmet;
	class ls_gar_rex_helmet;
	class ls_gar_phase2_helmet;
	class ls_sob_phase2SpecOp_helmet;
	class lsd_gar_standart_nvg;
	class lsd_gar_rangefinder_nvg;
	class lsd_gar_p2MarshalCommander_nvg;
	class ls_gar_airborneNCO_vest;
	class ls_gar_rebreather_vest;
	class ls_gar_clone_vest;
	class JA_104th_Clone_Base_armor;
	class ls_cloneVest_base;
	class ls_gar_airborne_vest;
	class ls_gar_kama_vest;
	class ls_gar_arc_vest;
	class UniformItem;
	class VestItem;
	class Bag_Base;
	class JA_104th_Base_CT_Uniform;

	// Inheritance for vests
	// Makes making each vest a rebreather easier
	// Inheritance for vests
	// Makes making each vest a rebreather easier
	class ItemInfo;
	class ls_gar_forceReconLieutenant_vest : ls_gar_clone_vest
	{
		class ItemInfo;
	};
	class ls_gar_officer_vest : ls_gar_clone_vest
	{
		class ItemInfo;
	};

	class JA_104th_P1_Geonosis_CT_Helmet : ls_gar_phase1_helmet
	{
		author = "Bulky & Cyan";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";

		displayname = "Clone Trooper P1 Helmet (104th Geonosis CT)";										 // the name it will be in game
		hiddenSelectionsTextures[] = {"104thGeonosisCompany\data\Textures\104th_P1_Geonosis_Shiny_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\illum_co.paa"}; // the file path to the texture
	};

	class JA_104th_P1_Geonosis_CT_Uniform : JA_104th_Base_CT_Uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper P1 Armor (104th Geonosis CT)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"104thGeonosisCompany\data\Textures\104th_P1_Geonosis_Shiny_Upper.paa",
				"104thGeonosisCompany\data\Textures\104th_P1_Geonosis_Shiny_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			scope = 2;
			uniformClass = "JA_104th_P1_Geonosis_CT";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_P1_Geonosis_SGT_Helmet : ls_gar_phase1_helmet
	{
		author = "Bulky & Cyan";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";

		displayname = "Clone Trooper P1 Helmet (104th Geonosis SGT)";										 // the name it will be in game
		hiddenSelectionsTextures[] = {"104thGeonosisCompany\data\Textures\104th_P1_Geonosis_Sargeant_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\illum_co.paa"}; // the file path to the texture
	};

	class JA_104th_P1_Geonosis_SGT_Uniform : JA_104th_Base_CT_Uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper P1 Armor (104th Geonosis SGT)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"104thGeonosisCompany\data\Textures\104th_P1_Geonosis_Sargeant_Upper.paa",
				"104thGeonosisCompany\data\Textures\104th_P1_Geonosis_Shiny_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			scope = 2;
			uniformClass = "JA_104th_P1_Geonosis_SGT";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_P1_Geonosis_LT_Helmet : ls_gar_phase1_helmet
	{
		author = "Bulky & Cyan";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";

		displayname = "Clone Trooper P1 Helmet (104th Geonosis LT)";										 // the name it will be in game
		hiddenSelectionsTextures[] = {"104thGeonosisCompany\data\Textures\104th_P1_Geonosis_Lieutenant_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\illum_co.paa"}; // the file path to the texture
	};

	class JA_104th_P1_Geonosis_LT_Uniform : JA_104th_Base_CT_Uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper P1 Armor (104th Geonosis LT)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"104thGeonosisCompany\data\Textures\104th_P1_Geonosis_Lieutenant_Upper.paa",
				"104thGeonosisCompany\data\Textures\104th_P1_Geonosis_Shiny_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			scope = 2;
			uniformClass = "JA_104th_P1_Geonosis_LT";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_P1_Geonosis_CPT_Helmet : ls_gar_phase1_helmet
	{
		author = "Bulky & Cyan";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";

		displayname = "Clone Trooper P1 Helmet (104th Geonosis CPT)";										 // the name it will be in game
		hiddenSelectionsTextures[] = {"104thGeonosisCompany\data\Textures\104th_P1_Geonosis_Captain_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\illum_co.paa"}; // the file path to the texture
	};

	class JA_104th_P1_Geonosis_CPT_Uniform : JA_104th_Base_CT_Uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper P1 Armor (104th Geonosis CPT)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"104thGeonosisCompany\data\Textures\104th_P1_Geonosis_Captain_Upper.paa",
				"104thGeonosisCompany\data\Textures\104th_P1_Geonosis_Shiny_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			scope = 2;
			uniformClass = "JA_104th_P1_Geonosis_CPT";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_P1_Geonosis_CMDR_Helmet : ls_gar_phase1_helmet
	{
		author = "Bulky & Cyan";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";

		displayname = "Clone Trooper P1 Helmet (104th Geonosis CMDR)";										 // the name it will be in game
		hiddenSelectionsTextures[] = {"104thGeonosisCompany\data\Textures\104th_P1_Geonosis_Commander_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\illum_co.paa"}; // the file path to the texture
	};

	class JA_104th_P1_Geonosis_CMDR_Uniform : JA_104th_Base_CT_Uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper P1 Armor (104th Geonosis CMDR)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"104thGeonosisCompany\data\Textures\104th_P1_Geonosis_Commander_Upper.paa",
				"104thGeonosisCompany\data\Textures\104th_P1_Geonosis_Shiny_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			scope = 2;
			uniformClass = "JA_104th_P1_Geonosis_CMDR";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	
	class JA_104th_Vest_P1 : ls_gar_forceReconLieutenant_vest
	{
		author = "Dak";
		displayName = "Clone Trooper Captain Vest (104th Geonosis)";
		model = "\ls\core\addons\characters_clone_legacy\vests\forceRecon\ls_gar_forceReconLieutenant_vest.p3d";
		uniformModel = "\ls\core\addons\characters_clone_legacy\vests\forceRecon\ls_gar_forceReconLieutenant_vest.p3d";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"104thGeonosisCompany\data\textures\104th_P1_Geonosis_Captain_Accessories_Officer.paa",
				"\ls\core\addons\characters_clone_legacy\vests\common\heavy\heavy_accessories_co.paa"};
		class ItemInfo : Vestitem
		{
			uniformModel = "\ls\core\addons\characters_clone_legacy\vests\forceRecon\ls_gar_forceReconLieutenant_vest.p3d";
			containerClass = "Supply80";
			hiddenSelections[] = {"camo1", "camo2"};
			mass = 80;
			vestType = "Rebreather";

			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 8;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 8;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 15;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 10;
					passThrough = 0.3;
				};
			};
		};
	};
	class JA_104th_P1_officer_Vest : ls_gar_officer_vest
	{
		author = "Dak";
		displayName = "Clone Trooper Officer Vest (104th Geonosis)";
		hiddenSelections[] =
			{
				"camo1"};
		hiddenSelectionsTextures[] =
			{
				"104thGeonosisCompany\data\Textures\104th_P1_Geonosis_Lieutenant_Accessories_Officer.paa"};
		class ItemInfo : ItemInfo
		{
			containerClass = "Supply80";
			vestType = "Rebreather";

			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 8;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 8;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 15;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 10;
					passThrough = 0.3;
				};
			};
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
	class EG_InvisBagMain;

	class JA_104th_P1_Geonosis_CT : lsd_gar_phase2_base
	{
		author = "Bulky & Cyan";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_P1_Geonosis_CT_Uniform";
		displayName = "P1 Clone Trooper";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Geonosis";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] =
			{
				"104thGeonosisCompany\data\Textures\104th_P1_Geonosis_Shiny_Upper.paa",
				"104thGeonosisCompany\data\Textures\104th_P1_Geonosis_Shiny_Lower.paa"};
		linkedItems[] = {JA_104th_P2_1C_CT_V1_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		  // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_P2_1C_CT_V1_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_P1_Geonosis_SGT : lsd_gar_phase2_base
	{
		author = "Bulky & Cyan";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_P1_Geonosis_SGT_Uniform";
		displayName = "P1 SGT Clone Trooper";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Geonosis";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] =
			{
				"104thGeonosisCompany\data\Textures\104th_P1_Geonosis_Sargeant_Upper.paa",
				"104thGeonosisCompany\data\Textures\104th_P1_Geonosis_Shiny_Lower.paa"};
		linkedItems[] = {JA_104th_P2_1C_CT_V1_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		  // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_P2_1C_CT_V1_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_P1_Geonosis_LT : lsd_gar_phase2_base
	{
		author = "Bulky & Cyan";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_P1_Geonosis_LT_Uniform";
		displayName = "P1 LT Clone Trooper";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Geonosis";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] =
			{
				"104thGeonosisCompany\data\Textures\104th_P1_Geonosis_Lieutenant_Upper.paa",
				"104thGeonosisCompany\data\Textures\104th_P1_Geonosis_Shiny_Lower.paa"};
		linkedItems[] = {JA_104th_P2_1C_CT_V1_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		  // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_P2_1C_CT_V1_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_P1_Geonosis_CPT : lsd_gar_phase2_base
	{
		author = "Bulky & Cyan";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_P1_Geonosis_CPT_Uniform";
		displayName = "P1 CPT Clone Trooper";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Geonosis";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] =
			{
				"104thGeonosisCompany\data\Textures\104th_P1_Geonosis_Captain_Upper.paa",
				"104thGeonosisCompany\data\Textures\104th_P1_Geonosis_Shiny_Lower.paa"};
		linkedItems[] = {JA_104th_P2_1C_CT_V1_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		  // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_P2_1C_CT_V1_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_P1_Geonosis_CMDR : lsd_gar_phase2_base
	{
		author = "Bulky & Cyan";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_P1_Geonosis_CMDR_Uniform";
		displayName = "P1 CMDR Clone Trooper";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Geonosis";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] =
			{
				"104thGeonosisCompany\data\Textures\104th_P1_Geonosis_Commander_Upper.paa",
				"104thGeonosisCompany\data\Textures\104th_P1_Geonosis_Shiny_Lower.paa"};
		linkedItems[] = {JA_104th_P2_1C_CT_V1_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		  // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_P2_1C_CT_V1_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};

	class JA_104th_Medic_Backpack_Geonosis : ls_gar_medic_backpack
	{
		author = "Tundra";
		scopeCurator = 2;
		displayname = "Clone Trooper medic backpack (104th Geonosis)";
		maximumLoad = 450;
		model = "\ls\core\addons\characters_clone_legacy\backpacks\standard_old\ls_gar_standard_backpack_old.p3d";
		hiddenSelections[] = {"camo1","cover","heavy","medic","RTO"};
		hiddenSelectionsTextures[] =
			{
				"104thGeonosisCompany\data\textures\104th_P1_Geonosis_Backpack_Medic.paa", // don't change this
				"104thGeonosisCompany\data\textures\104th_P1_Geonosis_Backpack_Medic.paa", // don't change unless RTO
				"",																			 // Heavy
				"104thGeonosisCompany\data\textures\104th_P1_Geonosis_Backpack_Medic.paa", // Medic
				""																			 // RTO
			};
	};
};
