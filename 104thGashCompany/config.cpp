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
			"JA_104th_Base_BARC_Gash"
		};
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
			"JA_Gash_P1_Captain_Tre_Uniform"
		};
	};
};

class CfgFactionClasses
{
	class 104th_Guys
	{
		displayname = "Jango's Finest";
		priority = 1; // Position in list. 
                side = 1; // Opfor = 0, Blufor = 1, Indep = 2. 
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
	class SWLB_Clone_Pilot_P2_Helmet;
	class SWLB_clone_uniform;
	class SWLB_clone_mc_uniform;
	class SWLB_clone_arc_armor;
	class SWLB_clone_officer_armor;
	class SWLB_clone_rangefinder;
	class SWLB_CEE_P1_rangefinder;
	class SWLB_clone_commander_armor;
	class SWLB_clone_BARC_helmet;
	class SWLB_clone_AB_helmet;
	class SWLB_clone_ARF_P1_Helmet;
	class SWLB_clone_P15_Helmet;
	class SWLB_clone_P1_helmet;
	class SWLB_clone_P1_2_helmet;
	class SWLB_clone_P2_Helmet;
	class SWLB_clone_nvg;
	class SWLB_clone_nvg_nco;
	class SWLB_clone_ccVisor;
	class SWLB_clone_mcVisor;
	class SWLB_clone_basic_armor;
	class SWLB_clone_airborne_nco_armor;
	class UniformItem;

	class JA_Gash_P2_SGT_Dire_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper P2 armor (Gash - SGT Dire)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"104thGashCompany\data\Textures\SGT_Dire_Upper.paa",
			"104thGashCompany\data\Textures\SGT_Dire_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_SGT_Dire_P2_Gash";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_Gash_P2_SGT_Dire_Helmet : SWLB_clone_BARC_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone trooper P2 Helmet (SGT Dire)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thGashCompany\data\Textures\SGT_Dire_Helmet.paa" }; // the file path to the texture
	};
	class JA_Gash_P2_Lt_Bark_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper P2 armor (Gash - Lt Bark)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"104thGashCompany\data\Textures\Lt_Bark_Upper_2.paa",
			"104thGashCompany\data\Textures\Lt_Bark_Lower_5.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Lt_Bark_P2_Gash";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_Gash_P2_Lt_Bark_Helmet : SWLB_clone_BARC_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone trooper P2 Helmet (Lt Bark)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thGashCompany\data\Textures\LT_Bark_Helmet.paa" }; // the file path to the texture
	};
	class JA_Gash_P2_Officer_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper P2 armor (Gash - Officer)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"104thGashCompany\data\Textures\Gash_Officer_Upper.paa",
			"104thGashCompany\data\Textures\Gash_Officer_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Officer_P2_Gash";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_Gash_P2_Officer_Helmet : SWLB_clone_P2_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone trooper P2 Helmet (Officer)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thGashCompany\data\Textures\Gash_Officer_Helmet.paa" }; // the file path to the texture
	};
	class JA_Gash_P2_NCO_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper P2 armor (Gash - NCO)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"104thGashCompany\data\Textures\Gash_NCO_Upper.paa",
			"104thGashCompany\data\Textures\Gash_NCO_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_NCO_P2_Gash";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_Gash_P2_NCO_Helmet : SWLB_clone_P2_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone trooper P2 Helmet (NCO)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thGashCompany\data\Textures\Gash_NCO_Helmet.paa" }; // the file path to the texture
	};
	class JA_Gash_P2_Base_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper P2 armor (Gash - Base)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"104thGashCompany\data\Textures\Gash_Upper_Final.paa",
			"104thGashCompany\data\Textures\Gash_Lower_Final.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Base_P2_Gash";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_Gash_P2_Base_Helmet : SWLB_clone_P2_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone trooper P2 Helmet (Base)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thGashCompany\data\Textures\Gash_Helmet_P3_3.paa" }; // the file path to the texture
	};
	class JA_Gash_P2_Medic_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper P2 armor (Gash - Medic)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"104thGashCompany\data\Textures\Gash_Medic.paa",
			"104thGashCompany\data\Textures\Gash_Lower_Final.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Medic_P2_Gash";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_Gash_BARC_Base_Helmet : SWLB_clone_BARC_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone trooper BARC Helmet (Base)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thGashCompany\data\Textures\Gash_Barc_Helmet.paa" }; // the file path to the texture
	};
	class JA_Gash_P1_Captain_Tre_Helmet : SWLB_clone_P1_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone trooper P1 Helmet (Captain Tre)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thGashCompany\data\Textures\Captain_tre_Helmet.paa" }; // the file path to the texture
	};
	class JA_Gash_P1_Captain_Tre_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper P1 armor (Captain Tre)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"104thGashCompany\data\Textures\Captain_Tre_Upper.paa",
			"104thGashCompany\data\Textures\Captain_Tre_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Captain_Tre_P1_Gash";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
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
/////////P2
	class JA_104th_Captain_Tre_P1_Gash : SWLB_clone_base_P1
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
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"104thGashCompany\data\Textures\Captain_Tre_Upper.paa", "104thGashCompany\data\Textures\Captain_Tre_Lower.paa"};
		linkedItems[] = {JA_Gash_P1_Captain_Tre_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = {JA_Gash_P1_Captain_Tre_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_104th_Medic_P2_Gash : SWLB_clone_base_P2
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
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"104thGashCompany\data\Textures\Gash_Medic.paa", "104thGashCompany\data\Textures\Gash_Lower_Final.paa"};
		linkedItems[] = {JA_Gash_P2_Base_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = {JA_Gash_P2_Base_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_104th_Base_P2_Gash : SWLB_clone_base_P2
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
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"104thGashCompany\data\Textures\Gash_Upper_Final.paa", "104thGashCompany\data\Textures\Gash_Lower_Final.paa"};
		linkedItems[] = {JA_Gash_P2_Base_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = {JA_Gash_P2_Base_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_104th_NCO_P2_Gash : SWLB_clone_base_P2
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
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"104thGashCompany\data\Textures\Gash_NCO_Upper.paa", "104thGashCompany\data\Textures\Gash_NCO_Lower.paa"};
		linkedItems[] = {JA_Gash_P2_NCO_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = {JA_Gash_P2_NCO_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_104th_SGT_Dire_P2_Gash : SWLB_clone_base_P2
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
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"104thGashCompany\data\Textures\SGT_Dire_Upper.paa", "104thGashCompany\data\Textures\SGT_Dire_Lower.paa"};
		linkedItems[] = {JA_Gash_P2_SGT_Dire_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = {JA_Gash_P2_SGT_Dire_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_104th_Lt_Bark_P2_Gash : SWLB_clone_base_P2
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
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"104thGashCompany\data\Textures\Lt_Bark_Upper_2.paa", "104thGashCompany\data\Textures\Lt_Bark_Lower_5.paa"};
		linkedItems[] = {JA_Gash_P2_Lt_Bark_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = {JA_Gash_P2_Lt_Bark_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_104th_Officer_P2_Gash : SWLB_clone_base_P2
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
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"104thGashCompany\data\Textures\Gash_Officer_Upper.paa", "104thGashCompany\data\Textures\Gash_Officer_Lower.paa"};
		linkedItems[] = {JA_Gash_P2_Officer_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = {JA_Gash_P2_Officer_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_104th_Base_BARC_Gash : SWLB_clone_base_P2
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
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"104thGashCompany\data\Textures\Gash_Upper_Final.paa", "104thGashCompany\data\Textures\Gash_Lower_Final.paa"};
		linkedItems[] = {JA_Gash_BARC_Base_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = {JA_Gash_BARC_Base_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
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