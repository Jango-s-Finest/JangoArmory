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
			"JA_104th_Vilkas_P2_Greywind_ARF"};
		weapons[] = {
			"JA_Greywind_P2_Bolt_ARF_Helmet",
			"JA_Greywind_P2_Bolt_ARF_Uniform",
			"JA_Greywind_P2_Dingo_ARF_Helmet",
			"JA_Greywind_P2_Dingo_ARF_Uniform",
			"JA_Greywind_P2_Mouse_ARF_Helmet",
			"JA_Greywind_P2_Mouse_ARF_Uniform",
			"JA_Greywind_P2_Vilkas_ARF_Helmet",
			"JA_Greywind_P2_Vilkas_ARF_Uniform"};
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
	class 104th_Categ_Clones_Greywind
	{
		displayname = "104th - Greywind Company";
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

	class JA_Greywind_P2_Bolt_ARF_Helmet : ls_gar_phase1Arf_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;

		displayname = "Clone Trooper ARF Helmet (Bolt)";												// the name it will be in game
		hiddenSelectionsTextures[] = {"104thGreywindCompany\data\Textures\Vilkas_ARF_Bolt_Helmet.paa","","\ls\core\addons\characters_clone_legacy\helmets\arf\data\helmet_co.paa"}; // the file path to the texture
	};
	class JA_Greywind_P2_Bolt_ARF_Uniform : ls_gar_phase2_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper ARF armor (Bolt)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"104thGreywindCompany\data\Textures\Vilkas_ARF_Bolt_Upper.paa",
				"104thGreywindCompany\data\Textures\Vilkas_ARF_Bolt_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Bolt_P2_Greywind_ARF";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_Greywind_P2_Dingo_ARF_Helmet : ls_gar_phase1Arf_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;

		displayname = "Clone Trooper ARF Helmet (Dingo)";												 // the name it will be in game
		hiddenSelectionsTextures[] = {"104thGreywindCompany\data\Textures\Vilkas_ARF_Dingo_Helmet.paa","","\ls\core\addons\characters_clone_legacy\helmets\arf\data\helmet_co.paa"}; // the file path to the texture
	};
	class JA_Greywind_P2_Dingo_ARF_Uniform : ls_gar_phase2_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper ARF armor (Dingo)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"104thGreywindCompany\data\Textures\Vilkas_ARF_Dingo_Upper.paa",
				"104thGreywindCompany\data\Textures\Vilkas_ARF_Dingo_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Dingo_P2_Greywind_ARF";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_Greywind_P2_Mouse_ARF_Helmet : ls_gar_phase1Arf_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;

		displayname = "Clone Trooper ARF Helmet (Mouse)";												 // the name it will be in game
		hiddenSelectionsTextures[] = {"104thGreywindCompany\data\Textures\Vilkas_ARF_Mouse_Helmet.paa","","\ls\core\addons\characters_clone_legacy\helmets\arf\data\helmet_co.paa"}; // the file path to the texture
	};
	class JA_Greywind_P2_Mouse_ARF_Uniform : ls_gar_phase2_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper ARF armor (Mouse)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"104thGreywindCompany\data\Textures\Vilkas_ARF_Mouse_Upper.paa",
				"104thGreywindCompany\data\Textures\Vilkas_ARF_Mouse_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Mouse_P2_Greywind_ARF";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_Greywind_P2_Vilkas_ARF_Helmet : ls_gar_phase1Arf_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;

		displayname = "Clone Trooper ARF Helmet (Vilkas)";												  // the name it will be in game
		hiddenSelectionsTextures[] = {"104thGreywindCompany\data\Textures\Vilkas_ARF_Vilkas_Helmet.paa","","\ls\core\addons\characters_clone_legacy\helmets\arf\data\helmet_co.paa"}; // the file path to the texture
	};
	class JA_Greywind_P2_Vilkas_ARF_Uniform : ls_gar_phase2_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper ARF armor (Vilkas)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"104thGreywindCompany\data\Textures\Vilkas_ARF_Vilkas_Upper.paa",
				"104thGreywindCompany\data\Textures\Vilkas_ARF_Vilkas_Lower.paa"};
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
	class lsd_gar_phase2_base;
	class lsd_gar_phase2_base;
	class ls_gar_marshalCommander_base;
	class ls_gar_standart_backpack;
	class ls_gar_rto_mini_backpack;
	class ls_gar_heavy_backpack;
	class ls_gar_medic_backpack;
	class ls_gar_Radio_backpack;
	/////////P2
	class JA_104th_Bolt_P2_Greywind_ARF : lsd_gar_phase2_base
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
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"104thGreywindCompany\data\Textures\Vilkas_ARF_Bolt_Upper.paa", "104thGreywindCompany\data\Textures\Vilkas_ARF_Bolt_Lower.paa"};
		linkedItems[] = {JA_Greywind_P2_Bolt_ARF_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		 // all items that will be on unit
		respawnLinkedItems[] = {JA_Greywind_P2_Bolt_ARF_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Dingo_P2_Greywind_ARF : lsd_gar_phase2_base
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
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"104thGreywindCompany\data\Textures\Vilkas_ARF_Dingo_Upper.paa", "104thGreywindCompany\data\Textures\Vilkas_ARF_Dingo_Lower.paa"};
		linkedItems[] = {JA_Greywind_P2_Dingo_ARF_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		  // all items that will be on unit
		respawnLinkedItems[] = {JA_Greywind_P2_Dingo_ARF_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Mouse_P2_Greywind_ARF : lsd_gar_phase2_base
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
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"104thGreywindCompany\data\Textures\Vilkas_ARF_Mouse_Upper.paa", "104thGreywindCompany\data\Textures\Vilkas_ARF_Mouse_Lower.paa"};
		linkedItems[] = {JA_Greywind_P2_Mouse_ARF_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		  // all items that will be on unit
		respawnLinkedItems[] = {JA_Greywind_P2_Mouse_ARF_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Vilkas_P2_Greywind_ARF : lsd_gar_phase2_base
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
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"104thGreywindCompany\data\Textures\Vilkas_ARF_Vilkas_Upper.paa", "104thGreywindCompany\data\Textures\Vilkas_ARF_Vilkas_Lower.paa"};
		linkedItems[] = {JA_Greywind_P2_Vilkas_ARF_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		   // all items that will be on unit
		respawnLinkedItems[] = {JA_Greywind_P2_Vilkas_ARF_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
};

class CfgGroups
{
	class West
	{
		class JA_Bluefor
		{
			name = "Jango's Finest";
			class JA_Bluefor_P2_Troopers_Greywind
			{
				name = "Greywind - P2";
				class JA_Group_ARF_Team_Greywind
				{
					name = "ARF - Team";
					side = 1;
					class Unit0
					{
						vehicle = "JA_104th_Vilkas_P2_Greywind_ARF";
						rank = "CORPORAL";
						position[] = {0, 0, 0};
						side = 1;
					};
					class Unit1
					{
						vehicle = "JA_104th_Mouse_P2_Greywind_ARF";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
						side = 1;
					};
					class Unit2
					{
						vehicle = "JA_104th_Dingo_P2_Greywind_ARF";
						rank = "PRIVATE";
						position[] = {5, -5, 0};
						side = 1;
					};
					class Unit3
					{
						vehicle = "JA_104th_Bolt_P2_Greywind_ARF";
						rank = "PRIVATE";
						position[] = {10, -10, 0};
						side = 1;
					};
				};
			};
		};
	};
};