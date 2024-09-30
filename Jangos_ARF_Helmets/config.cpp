#include "basicDefines_A3.hpp"
class DefaultEventhandlers;
class UniformSlotInfo;
class CfgPatches
{
	class Jangos_Armory_ARF_Helmets
	{
		author = "Jango's Finest";
		requiredVersion = 0.1;
		requiredAddons[] = {};
		units[] = {
		};
		weapons[] = {
			"JA_104th_ARF_Helmet",
			"JA_104th_ARF_Urban_Helmet",
			"JA_104th_ARF_Jungle_Helmet",
			"JA_104th_ARF_Desert_Helmet",
			"JA_104th_ARF_Medic_Helmet",
			"JA_104th_Achilles_Helmet",
			"JA_104th_Beans_Helmet",
			"JA_104th_IQ_Helmet",
			"JA_104th_Fire_Helmet",
			"JA_104th_Unix_Helmet",
			"JA_104th_Woods_Helmet"
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
	class ItemInfo;
	class SWLB_clone_ARF_P1_Helmet
	{
		class ItemInfo;
	};
	class ls_gar_phase2Arf_helmet
	{
		class ItemInfo;
	};

	class JA_104th_ARF_P1_Helmet : SWLB_clone_ARF_P1_Helmet
	{
		class ItemInfo : ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 40;
					explosionShielding  = 20;
					passThrough = 0.3;
				};
			};
		};
	};
	class JA_104th_ARF_P2_Helmet : ls_gar_phase2Arf_helmet
	{
		class ItemInfo : ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 40;
					explosionShielding  = 20;
					passThrough = 0.3;
				};
			};
		};
	};

	// Base
	class JA_104th_ARF_Helmet : JA_104th_ARF_P1_Helmet
	{
		author = "Tundra";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};													   // don't change this
		displayname = "Clone Trooper ARF P1 Helmet (104th ARF)";						   // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_ARF_Helmets\data\Textures\104th_ARF_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_ARF_Urban_Helmet : JA_104th_ARF_P1_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};															 // don't change this
		displayname = "Clone Trooper ARF P1 Helmet (104th ARF Urban)";							 // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_ARF_Helmets\data\Textures\104th_ARF_Urban_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_ARF_Jungle_Helmet : JA_104th_ARF_P1_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};															  // don't change this
		displayname = "Clone Trooper ARF P1 Helmet (104th ARF Jungle)";							  // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_ARF_Helmets\data\Textures\104th_ARF_Jungle_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_ARF_Desert_Helmet : JA_104th_ARF_P1_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};															  // don't change this
		displayname = "Clone Trooper ARF P1 Helmet (104th ARF Desert)";							  // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_ARF_Helmets\data\Textures\104th_ARF_Desert_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_ARF_Medic_Helmet : JA_104th_ARF_P1_Helmet
	{
		author = "Tundra";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};															// don't change this
		displayname = "Clone Trooper ARF P1 Helmet (104th ARF Medic)";							// the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_ARF_Helmets\data\Textures\104th_ARF_Medic_Helmet.paa"}; // the file path to the texture
	};
	// Customs
	class JA_104th_Achilles_Helmet : JA_104th_ARF_P1_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper ARF Helmet (104th Achilles)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "Jangos_ARF_Helmets\data\Textures\104th_ARF_Achilles_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_Beans_Helmet : JA_104th_ARF_P1_Helmet
	{
		author = "Ice";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};															 // don't change this
		displayname = "Clone Trooper ARF Helmet (104th Beans)";									 // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_ARF_Helmets\data\Textures\104th_ARF_Beans_Helmet.paa"}; // the file path to the texture
		subItems[] = {"Integrated_NVG_TI_0_F"};
	};
	class JA_104th_IQ_Helmet : JA_104th_ARF_P2_Helmet // Use for ARF + Chops template
	{
		author = "Ice";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1", "camo2", "camo3"};															 // don't change this
		displayname = "Clone Trooper ARF Helmet (104th IQ)";									 // the name it will be in game
		hiddenSelectionsTextures[]= 
		{
			"Jangos_ARF_Helmets\data\Textures\104th_ARF_IQ_Helmet.paa",
			"Jangos_ARF_Helmets\data\Textures\104th_ARF_IQ_Flaps.paa",
			"Jangos_ARF_Helmets\data\Textures\104th_ARF_IQ_Helmet.paa"
		};
		subItems[] = {"Integrated_NVG_TI_0_F"};
	};
	class JA_104th_Fire_Helmet : JA_104th_ARF_P1_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};															// don't change this
		displayname = "Clone Trooper ARF Helmet (104th Fire)";									// the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_ARF_Helmets\data\Textures\104th_ARF_Fire_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Unix_Helmet : JA_104th_ARF_P1_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper ARF Helmet (104th Unix)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "Jangos_ARF_Helmets\data\Textures\104th_ARF_Unix_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_Woods_Helmet : JA_104th_ARF_P1_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper ARF Helmet (104th Woods)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "Jangos_ARF_Helmets\data\Textures\104th_ARF_Woods_Helmet.paa" }; // the file path to the texture
	};
};
