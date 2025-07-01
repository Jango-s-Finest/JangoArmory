#include "basicDefines_A3.hpp"
class DefaultEventhandlers;
class UniformSlotInfo;
class CfgPatches
{
	class Jangos_Armory_Gash
	{
		author = "Jango's Finest";
		units[] = {
			"JA_104th_Captain_Tre_P1_Gash",
			"JA_104th_Medic_P2_Gash",
			"JA_104th_Base_P2_Gash",
			"JA_104th_NCO_P2_Gash",
			"JA_104th_SGT_Dire_P2_Gash",
			"JA_104th_Lt_Bark_P2_Gash",
			"JA_104th_Officer_P2_Gash",
			"JA_104th_Base_BARC_Gash"};
		weapons[] = {
			"JA_Gash_P2_SGT_Dire_Uniform",
			"JA_Gash_P2_SGT_Dire_Helmet",
			"JA_Gash_P2_Lt_Bark_Uniform",
			"JA_Gash_P2_Lt_Bark_Helmet",
			"JA_Gash_P2_Officer_Uniform",
			"JA_Gash_P2_Officer_Helmet",
			"JA_Gash_P2_NCO_Uniform",
			"JA_Gash_P2_NCO_Helmet",
			"JA_Gash_P2_Base_Uniform",
			"JA_Gash_P2_Base_Helmet",
			"JA_Gash_P2_Medic_Uniform",
			"JA_Gash_BARC_Base_Helmet",
			"JA_Gash_P1_Captain_Tre_Helmet",
			"JA_Gash_P1_Captain_Tre_Uniform"};
	};
};

class CfgFactionClasses
{
	class 104th_Guys
	{
		displayname = "Jango's Finest";
		priority = 1; // Position in list.
		side = 1;	  // Opfor = 0, Blufor = 1, Indep = 2.
	};
};
class cfgEditorSubcategories
{
	class 104th_Categ_Clones_Gash
	{
		displayname = "104th - Gash Company";
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
	class lsd_gar_rangefinder_nvg;
	class lsd_gar_p1Rangefinder_nvg;
	class ls_gar_commander_vest;
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
	class ls_gar_clone_vest;
	class ls_gar_airborneNCO_vest;
	class UniformItem;

	class JA_Gash_P2_SGT_Dire_Uniform : ls_gar_marshalCommander_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper P2 armor (Gash - SGT Dire)";
		model = "\ls\core\addons\characters_clone_legacy\uniforms\phase2\ls_gar_phase2_uniform.p3d";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"104thGashCompany\data\Textures\SGT_Dire_Upper.paa",
				"104thGashCompany\data\Textures\SGT_Dire_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			scope = 2;
			uniformClass = "JA_104th_SGT_Dire_P2_Gash";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_Gash_P2_SGT_Dire_Helmet : ls_gar_barc_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;

		displayname = "Clone Trooper P2 Helmet (SGT Dire)";									 // the name it will be in game
		hiddenSelectionsTextures[] = {"104thGashCompany\data\Textures\SGT_Dire_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\barc\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_Gash_P2_Lt_Bark_Uniform : ls_gar_marshalCommander_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper P2 armor (Gash - Lt Bark)";
		model = "\ls\core\addons\characters_clone_legacy\uniforms\phase2\ls_gar_phase2_uniform.p3d";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"104thGashCompany\data\Textures\Lt_Bark_Upper_2.paa",
				"104thGashCompany\data\Textures\Lt_Bark_Lower_5.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			scope = 2;
			uniformClass = "JA_104th_Lt_Bark_P2_Gash";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_Gash_P2_Lt_Bark_Helmet : ls_gar_barc_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;

		displayname = "Clone Trooper P2 Helmet (Lt Bark)";									// the name it will be in game
		hiddenSelectionsTextures[] = {"104thGashCompany\data\Textures\LT_Bark_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\barc\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_Gash_P2_Officer_Uniform : ls_gar_marshalCommander_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper P2 armor (Gash - Officer)";
		model = "\ls\core\addons\characters_clone_legacy\uniforms\phase2\ls_gar_phase2_uniform.p3d";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"104thGashCompany\data\Textures\Gash_Officer_Upper.paa",
				"104thGashCompany\data\Textures\Gash_Officer_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			scope = 2;
			uniformClass = "JA_104th_Officer_P2_Gash";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_Gash_P2_Officer_Helmet : ls_gar_phase2_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;

		displayname = "Clone Trooper P2 Helmet (Officer)";										 // the name it will be in game
		hiddenSelectionsTextures[] = {"104thGashCompany\data\Textures\Gash_Officer_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_Gash_P2_NCO_Uniform : ls_gar_marshalCommander_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper P2 armor (Gash - NCO)";
		model = "\ls\core\addons\characters_clone_legacy\uniforms\phase2\ls_gar_phase2_uniform.p3d";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"104thGashCompany\data\Textures\Gash_NCO_Upper.paa",
				"104thGashCompany\data\Textures\Gash_NCO_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			scope = 2;
			uniformClass = "JA_104th_NCO_P2_Gash";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_Gash_P2_NCO_Helmet : ls_gar_phase2_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;

		displayname = "Clone Trooper P2 Helmet (NCO)";										 // the name it will be in game
		hiddenSelectionsTextures[] = {"104thGashCompany\data\Textures\Gash_NCO_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_Gash_P2_Base_Uniform : ls_gar_marshalCommander_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper P2 armor (Gash - Base)";
		model = "\ls\core\addons\characters_clone_legacy\uniforms\phase2\ls_gar_phase2_uniform.p3d";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"104thGashCompany\data\Textures\Gash_Upper_Final.paa",
				"104thGashCompany\data\Textures\Gash_Lower_Final.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			scope = 2;
			uniformClass = "JA_104th_Base_P2_Gash";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_Gash_P2_Base_Helmet : ls_gar_phase2_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;

		displayname = "Clone Trooper P2 Helmet (Base)";										  // the name it will be in game
		hiddenSelectionsTextures[] = {"104thGashCompany\data\Textures\Gash_Helmet_P3_3.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_Gash_P2_Medic_Uniform : ls_gar_marshalCommander_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper P2 armor (Gash - Medic)";
		model = "\ls\core\addons\characters_clone_legacy\uniforms\phase2\ls_gar_phase2_uniform.p3d";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"104thGashCompany\data\Textures\Gash_Medic.paa",
				"104thGashCompany\data\Textures\Gash_Lower_Final.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			scope = 2;
			uniformClass = "JA_104th_Medic_P2_Gash";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_Gash_BARC_Base_Helmet : ls_gar_barc_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;

		displayname = "Clone Trooper BARC Helmet (Base)";									  // the name it will be in game
		hiddenSelectionsTextures[] = {"104thGashCompany\data\Textures\Gash_Barc_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\barc\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_Gash_P1_Captain_Tre_Helmet : ls_gar_phase1_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;

		displayname = "Clone Trooper P1 Helmet (Captain Tre)";									// the name it will be in game
		hiddenSelectionsTextures[] = {"104thGashCompany\data\Textures\Captain_tre_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\illum_co.paa"}; // the file path to the texture
	};
	class JA_Gash_P1_Captain_Tre_Uniform : ls_gar_marshalCommander_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper P1 armor (Captain Tre)";
		model = "\ls\core\addons\characters_clone_legacy\uniforms\phase2\ls_gar_phase2_uniform.p3d";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"104thGashCompany\data\Textures\Captain_Tre_Upper.paa",
				"104thGashCompany\data\Textures\Captain_Tre_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			scope = 2;
			uniformClass = "JA_104th_Captain_Tre_P1_Gash";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
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
	/////////P2
	class JA_104th_Captain_Tre_P1_Gash : lsd_gar_phase2_base
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_Gash_P1_Captain_Tre_Uniform";
		displayName = "Captain Tre - P1";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Gash";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"104thGashCompany\data\Textures\Captain_Tre_Upper.paa", "104thGashCompany\data\Textures\Captain_Tre_Lower.paa"};
		linkedItems[] = {JA_Gash_P1_Captain_Tre_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		// all items that will be on unit
		respawnLinkedItems[] = {JA_Gash_P1_Captain_Tre_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Medic_P2_Gash : lsd_gar_phase2_base
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_Gash_P2_Medic_Uniform";
		displayName = "Gash - Medic";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Gash";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"104thGashCompany\data\Textures\Gash_Medic.paa", "104thGashCompany\data\Textures\Gash_Lower_Final.paa"};
		linkedItems[] = {JA_Gash_P2_Base_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		 // all items that will be on unit
		respawnLinkedItems[] = {JA_Gash_P2_Base_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Base_P2_Gash : lsd_gar_phase2_base
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_Gash_P2_Base_Uniform";
		displayName = "Gash - Base";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Gash";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"104thGashCompany\data\Textures\Gash_Upper_Final.paa", "104thGashCompany\data\Textures\Gash_Lower_Final.paa"};
		linkedItems[] = {JA_Gash_P2_Base_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		 // all items that will be on unit
		respawnLinkedItems[] = {JA_Gash_P2_Base_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_NCO_P2_Gash : lsd_gar_phase2_base
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_Gash_P2_NCO_Uniform";
		displayName = "Gash - NCO";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Gash";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"104thGashCompany\data\Textures\Gash_NCO_Upper.paa", "104thGashCompany\data\Textures\Gash_NCO_Lower.paa"};
		linkedItems[] = {JA_Gash_P2_NCO_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		// all items that will be on unit
		respawnLinkedItems[] = {JA_Gash_P2_NCO_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_SGT_Dire_P2_Gash : lsd_gar_phase2_base
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_Gash_P2_SGT_Dire_Uniform";
		displayName = "Gash - SGT Dire";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Gash";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"104thGashCompany\data\Textures\SGT_Dire_Upper.paa", "104thGashCompany\data\Textures\SGT_Dire_Lower.paa"};
		linkedItems[] = {JA_Gash_P2_SGT_Dire_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		 // all items that will be on unit
		respawnLinkedItems[] = {JA_Gash_P2_SGT_Dire_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Lt_Bark_P2_Gash : lsd_gar_phase2_base
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_Gash_P2_Lt_Bark_Uniform";
		displayName = "Gash - Lt Bark";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Gash";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"104thGashCompany\data\Textures\Lt_Bark_Upper_2.paa", "104thGashCompany\data\Textures\Lt_Bark_Lower_5.paa"};
		linkedItems[] = {JA_Gash_P2_Lt_Bark_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		// all items that will be on unit
		respawnLinkedItems[] = {JA_Gash_P2_Lt_Bark_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Officer_P2_Gash : lsd_gar_phase2_base
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_Gash_P2_Officer_Uniform";
		displayName = "Gash - Officer";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Gash";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"104thGashCompany\data\Textures\Gash_Officer_Upper.paa", "104thGashCompany\data\Textures\Gash_Officer_Lower.paa"};
		linkedItems[] = {JA_Gash_P2_Officer_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		// all items that will be on unit
		respawnLinkedItems[] = {JA_Gash_P2_Officer_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Base_BARC_Gash : lsd_gar_phase2_base
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_Gash_P2_Base_Uniform";
		displayName = "Gash - BARC";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Gash";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"104thGashCompany\data\Textures\Gash_Upper_Final.paa", "104thGashCompany\data\Textures\Gash_Lower_Final.paa"};
		linkedItems[] = {JA_Gash_BARC_Base_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		   // all items that will be on unit
		respawnLinkedItems[] = {JA_Gash_BARC_Base_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
};

/*class CfgGroups{
	class West{
		class JA_Bluefor{
			name = "Jango's Finest";
			class JA_Bluefor_P2_Troopers_Gash{
				name = "Gash - P2";
				class JA_Group_ARF_Team_Gash{
					name = "ARF - Team";
					side = 1;
					class Unit0 {
						vehicle = "JA_104th_Vilkas_P2_Gash_ARF";
						rank = "CORPORAL";
						position[] = {0,0,0};
						side = 1;
					};
					class Unit1 {
						vehicle = "JA_104th_Mouse_P2_Gash_ARF";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
						side = 1;
					};
					class Unit2 {
						vehicle = "JA_104th_Dingo_P2_Gash_ARF";
						rank = "PRIVATE";
						position[] = {5,-5,0};
						side = 1;
					};
					class Unit3 {
						vehicle = "JA_104th_Bolt_P2_Gash_ARF";
						rank = "PRIVATE";
						position[] = {10,-10,0};
						side = 1;
					};
				};
			};
		};
	};
};*/