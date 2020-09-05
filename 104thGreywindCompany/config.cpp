#include "basicDefines_A3.hpp"
class DefaultEventhandlers;
class UniformSlotInfo;
class CfgPatches
{
	class Jangos_Armory_Greywind
	{
		author = "Jango's Finest";
		units[] = {
			"JA_104th_Bolt_P2_Greywind_ARF",
			"JA_104th_Dingo_P2_Greywind_ARF",
			"JA_104th_Mouse_P2_Greywind_ARF",
			"JA_104th_Vilkas_P2_Greywind_ARF"
		};
		weapons[] = {
			"JA_Greywind_P2_Bolt_ARF_Helmet",
			"JA_Greywind_P2_Bolt_ARF_Uniform",
			"JA_Greywind_P2_Dingo_ARF_Helmet",
			"JA_Greywind_P2_Dingo_ARF_Uniform",
			"JA_Greywind_P2_Mouse_ARF_Helmet",
			"JA_Greywind_P2_Mouse_ARF_Uniform",
			"JA_Greywind_P2_Vilkas_ARF_Helmet",
			"JA_Greywind_P2_Vilkas_ARF_Uniform"
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
	class 104th_Categ_Clones_Greywind
	{
		displayname = "104th - Greywind Company";
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

	class JA_Greywind_P2_Bolt_ARF_Helmet : SWLB_clone_ARF_P1_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone trooper ARF Helmet (Bolt)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thGreywindCompany\data\Textures\Vilkas_ARF_Bolt_Helmet.paa" }; // the file path to the texture
	};
	class JA_Greywind_P2_Bolt_ARF_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper ARF armor (Bolt)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"104thGreywindCompany\data\Textures\Vilkas_ARF_Bolt_Upper.paa",
			"104thGreywindCompany\data\Textures\Vilkas_ARF_Bolt_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Bolt_P2_Greywind_ARF";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_Greywind_P2_Dingo_ARF_Helmet : SWLB_clone_ARF_P1_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone trooper ARF Helmet (Dingo)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thGreywindCompany\data\Textures\Vilkas_ARF_Dingo_Helmet.paa" }; // the file path to the texture
	};
	class JA_Greywind_P2_Dingo_ARF_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper ARF armor (Dingo)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"104thGreywindCompany\data\Textures\Vilkas_ARF_Dingo_Upper.paa",
			"104thGreywindCompany\data\Textures\Vilkas_ARF_Dingo_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Dingo_P2_Greywind_ARF";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_Greywind_P2_Mouse_ARF_Helmet : SWLB_clone_ARF_P1_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone trooper ARF Helmet (Mouse)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thGreywindCompany\data\Textures\Vilkas_ARF_Mouse_Helmet.paa" }; // the file path to the texture
	};
	class JA_Greywind_P2_Mouse_ARF_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper ARF armor (Mouse)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"104thGreywindCompany\data\Textures\Vilkas_ARF_Mouse_Upper.paa",
			"104thGreywindCompany\data\Textures\Vilkas_ARF_Mouse_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Mouse_P2_Greywind_ARF";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_Greywind_P2_Vilkas_ARF_Helmet : SWLB_clone_ARF_P1_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone trooper ARF Helmet (Vilkas)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thGreywindCompany\data\Textures\Vilkas_ARF_Vilkas_Helmet.paa" }; // the file path to the texture
	};
	class JA_Greywind_P2_Vilkas_ARF_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper ARF armor (Vilkas)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"104thGreywindCompany\data\Textures\Vilkas_ARF_Vilkas_Upper.paa",
			"104thGreywindCompany\data\Textures\Vilkas_ARF_Vilkas_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Vilkas_P2_Greywind_ARF";
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
	class JA_104th_Bolt_P2_Greywind_ARF : SWLB_clone_base_P2
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_Greywind_P2_Bolt_ARF_Uniform";
		displayName = "Bolt - ARF";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Greywind";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"104thGreywindCompany\data\Textures\Vilkas_ARF_Bolt_Upper.paa", "104thGreywindCompany\data\Textures\Vilkas_ARF_Bolt_Lower.paa"};
		linkedItems[] = {JA_Greywind_P2_Bolt_ARF_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = {JA_Greywind_P2_Bolt_ARF_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_104th_Dingo_P2_Greywind_ARF : SWLB_clone_base_P2
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_Greywind_P2_Dingo_ARF_Uniform";
		displayName = "Dingo - ARF";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Greywind";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"104thGreywindCompany\data\Textures\Vilkas_ARF_Dingo_Upper.paa", "104thGreywindCompany\data\Textures\Vilkas_ARF_Dingo_Lower.paa"};
		linkedItems[] = {JA_Greywind_P2_Dingo_ARF_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = {JA_Greywind_P2_Dingo_ARF_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_104th_Mouse_P2_Greywind_ARF : SWLB_clone_base_P2
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_Greywind_P2_Mouse_ARF_Uniform";
		displayName = "Mouse - ARF";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Greywind";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"104thGreywindCompany\data\Textures\Vilkas_ARF_Mouse_Upper.paa", "104thGreywindCompany\data\Textures\Vilkas_ARF_Mouse_Lower.paa"};
		linkedItems[] = {JA_Greywind_P2_Mouse_ARF_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = {JA_Greywind_P2_Mouse_ARF_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_104th_Vilkas_P2_Greywind_ARF : SWLB_clone_base_P2
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_Greywind_P2_Vilkas_ARF_Uniform";
		displayName = "Vilkas - ARF";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Greywind";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"104thGreywindCompany\data\Textures\Vilkas_ARF_Vilkas_Upper.paa", "104thGreywindCompany\data\Textures\Vilkas_ARF_Vilkas_Lower.paa"};
		linkedItems[] = {JA_Greywind_P2_Vilkas_ARF_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = {JA_Greywind_P2_Vilkas_ARF_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
};

class CfgGroups{
	class West{
		class JA_Bluefor{
			name = "Jango's Finest";
			class JA_Bluefor_P2_Troopers_Greywind{
				name = "Greywind - P2";
				class JA_Group_ARF_Team_Greywind{
					name = "ARF - Team";
					side = 1;
					class Unit0 {
						vehicle = "JA_104th_Vilkas_P2_Greywind_ARF";
						rank = "CORPORAL";
						position[] = {0,0,0};
						side = 1;
					};
					class Unit1 {
						vehicle = "JA_104th_Mouse_P2_Greywind_ARF";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
						side = 1;
					};
					class Unit2 {
						vehicle = "JA_104th_Dingo_P2_Greywind_ARF";
						rank = "PRIVATE";
						position[] = {5,-5,0};
						side = 1;
					};
					class Unit3 {
						vehicle = "JA_104th_Bolt_P2_Greywind_ARF";
						rank = "PRIVATE";
						position[] = {10,-10,0};
						side = 1;
					};
				};		
			};
		};
	};
};