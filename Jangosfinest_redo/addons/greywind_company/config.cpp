#include "\JA\jangos_Armory\addons\main\script_component.hpp"
#include "basicDefines_A3.hpp"
class CfgPatches
{
	class Jangos_Armory_Greywind
	{
		author = "Jango's Finest";
		units[] += {
			"JA_104th_Bolt_P2_Greywind_ARF",
			"JA_104th_Dingo_P2_Greywind_ARF",
			"JA_104th_Mouse_P2_Greywind_ARF",
			"JA_104th_Vilkas_P2_Greywind_ARF"};
		weapons[] += {
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
	class ls_gar_marshalCommander_uniform;
	class ls_gar_phase1Arf_helmet;
	class UniformItem;

	class JA_Greywind_P2_Bolt_ARF_Helmet : ls_gar_phase1Arf_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;

		displayname = "Clone Trooper ARF Helmet (Bolt)";												// the name it will be in game
		hiddenSelectionsTextures[] = {QPATHTOEF(greywind_company,data\textures\Vilkas_ARF_Bolt_Helmet.paa),"","\ls\core\addons\characters_clone_legacy\helmets\arf\data\helmet_co.paa"}; // the file path to the texture
	};
	class JA_Greywind_P2_Bolt_ARF_Uniform : ls_gar_marshalCommander_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper ARF armor (Bolt)";
		model = "\ls\core\addons\characters_clone_legacy\uniforms\phase2\ls_gar_phase2_uniform.p3d";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				QPATHTOEF(greywind_company,data\textures\Vilkas_ARF_Bolt_Upper.paa),
				QPATHTOEF(greywind_company,data\textures\Vilkas_ARF_Bolt_Lower.paa)};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			scope = 2;
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
		hiddenSelectionsTextures[] = {QPATHTOEF(greywind_company,data\textures\Vilkas_ARF_Dingo_Helmet.paa),"","\ls\core\addons\characters_clone_legacy\helmets\arf\data\helmet_co.paa"}; // the file path to the texture
	};
	class JA_Greywind_P2_Dingo_ARF_Uniform : ls_gar_marshalCommander_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper ARF armor (Dingo)";
		model = "\ls\core\addons\characters_clone_legacy\uniforms\phase2\ls_gar_phase2_uniform.p3d";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				QPATHTOEF(greywind_company,data\textures\Vilkas_ARF_Dingo_Upper.paa),
				QPATHTOEF(greywind_company,data\textures\Vilkas_ARF_Dingo_Lower.paa)};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			scope = 2;
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
		hiddenSelectionsTextures[] = {QPATHTOEF(greywind_company,data\textures\Vilkas_ARF_Mouse_Helmet.paa),"","\ls\core\addons\characters_clone_legacy\helmets\arf\data\helmet_co.paa"}; // the file path to the texture
	};
	class JA_Greywind_P2_Mouse_ARF_Uniform : ls_gar_marshalCommander_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper ARF armor (Mouse)";
		model = "\ls\core\addons\characters_clone_legacy\uniforms\phase2\ls_gar_phase2_uniform.p3d";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				QPATHTOEF(greywind_company,data\textures\Vilkas_ARF_Mouse_Upper.paa),
				QPATHTOEF(greywind_company,data\textures\Vilkas_ARF_Mouse_Lower.paa)};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			scope = 2;
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
		hiddenSelectionsTextures[] = {QPATHTOEF(greywind_company,data\textures\Vilkas_ARF_Vilkas_Helmet.paa),"","\ls\core\addons\characters_clone_legacy\helmets\arf\data\helmet_co.paa"}; // the file path to the texture
	};
	class JA_Greywind_P2_Vilkas_ARF_Uniform : ls_gar_marshalCommander_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper ARF armor (Vilkas)";
		model = "\ls\core\addons\characters_clone_legacy\uniforms\phase2\ls_gar_phase2_uniform.p3d";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				QPATHTOEF(greywind_company,data\textures\Vilkas_ARF_Vilkas_Upper.paa),
				QPATHTOEF(greywind_company,data\textures\Vilkas_ARF_Vilkas_Lower.paa)};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			scope = 2;
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
		hiddenSelectionsTextures[] = {QPATHTOEF(greywind_company,data\textures\Vilkas_ARF_Bolt_Upper.paa), QPATHTOEF(greywind_company,data\textures\Vilkas_ARF_Bolt_Lower.paa)};
		linkedItems[] = {"JA_Greywind_P2_Bolt_ARF_Helmet", "ls_gar_clone_vest", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};		 // all items that will be on unit
		respawnLinkedItems[] = {"JA_Greywind_P2_Bolt_ARF_Helmet", "ls_gar_clone_vest", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"}; // all items that will be on unit on respawn
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
		hiddenSelectionsTextures[] = {QPATHTOEF(greywind_company,data\textures\Vilkas_ARF_Dingo_Upper.paa), QPATHTOEF(greywind_company,data\textures\Vilkas_ARF_Dingo_Lower.paa)};
		linkedItems[] = {"JA_Greywind_P2_Dingo_ARF_Helmet", "ls_gar_clone_vest", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};		  // all items that will be on unit
		respawnLinkedItems[] = {"JA_Greywind_P2_Dingo_ARF_Helmet", "ls_gar_clone_vest", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"}; // all items that will be on unit on respawn
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
		hiddenSelectionsTextures[] = {QPATHTOEF(greywind_company,data\textures\Vilkas_ARF_Mouse_Upper.paa), QPATHTOEF(greywind_company,data\textures\Vilkas_ARF_Mouse_Lower.paa)};
		linkedItems[] = {"JA_Greywind_P2_Mouse_ARF_Helmet", "ls_gar_clone_vest", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};		  // all items that will be on unit
		respawnLinkedItems[] = {"JA_Greywind_P2_Mouse_ARF_Helmet", "ls_gar_clone_vest", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"}; // all items that will be on unit on respawn
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
		hiddenSelectionsTextures[] = {QPATHTOEF(greywind_company,data\textures\Vilkas_ARF_Vilkas_Upper.paa), QPATHTOEF(greywind_company,data\textures\Vilkas_ARF_Vilkas_Lower.paa)};
		linkedItems[] = {"JA_Greywind_P2_Vilkas_ARF_Helmet", "ls_gar_clone_vest", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};		   // all items that will be on unit
		respawnLinkedItems[] = {"JA_Greywind_P2_Vilkas_ARF_Helmet", "ls_gar_clone_vest", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"}; // all items that will be on unit on respawn
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
