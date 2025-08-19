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
		units[] = {};
		weapons[] = {
			"JA_104th_ARF_Helmet",
			"JA_104th_ARF_Urban_Helmet",
			"JA_104th_ARF_Jungle_Helmet",
			"JA_104th_ARF_Desert_Helmet",
			"JA_104th_ARF_Medic_Helmet",
			"JA_104th_Achilles_Helmet",
			"JA_104th_Beans_Helmet",
			"JA_104th_Cyan_Helmet_A",
			"JA_104th_Gravity_Helmet_A",
			"JA_104th_IQ_Helmet",
			"JA_104th_Fire_Helmet",
			"JA_104th_Unix_Helmet",
			"JA_104th_Welty_Helmet_A",
			"JA_104th_Woods_Helmet"};
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
	class InventoryItem_Base_F;
	class ItemCore;
	class ls_gar_phase2Pilot_helmet;
	class ls_gar_phase2_uniform;
	class ls_gar_marshalCommander_uniform;
	class ls_gar_arc_vest;
	class ls_gar_officer_vest;
	class ls_gar_commander_vest;
	class ls_gar_airborne_vest;
	class ls_gar_airborneOfficer_vest;
	class ls_gar_forceReconNCO_vest;
	class ls_gar_barc_helmet;
	class ls_gar_airborne_helmet;
	class ls_gar_phase1Arf_helmet;
	class ls_gar_phase2Arf_helmet;
	class ls_gar_arc_helmet;
	class ls_gar_phase1_helmet;
	class ls_gar_rex_helmet;
	class ls_gar_phase2_helmet;
	class lsd_gar_standart_nvg;
	class lsd_gar_rangefinder_nvg;
	class lsd_gar_p2MarshalCommander_nvg;
	class ls_gar_kama_vest;
	class ls_gar_medic_vest;
	class ls_gar_clone_vest;
	class ls_gar_airborneNCO_vest;
	class ls_gar_engineer_helmet;
	class ls_sob_phase2SpecOp_helmet;
	class UniformItem;
	class VestItem;

	// Base
	class JA_104th_ARF_Helmet : ls_gar_phase1Arf_helmet
	{
		author = "Tundra";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		// don't change this
		displayname = "Clone Trooper ARF P1 Helmet (104th ARF)";								// the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_ARF_Helmets\data\Textures\104th_ARF_Helmet.paa","","\ls\core\addons\characters_clone_legacy\helmets\arf\data\helmet_co.paa"}; // the file path to the texture
	};
	class JA_104th_ARF_Urban_Helmet : ls_gar_phase1Arf_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		// don't change this
		displayname = "Clone Trooper ARF P1 Helmet (104th ARF Urban)";								  // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_ARF_Helmets\data\Textures\104th_ARF_Urban_Helmet.paa","","\ls\core\addons\characters_clone_legacy\helmets\arf\data\helmet_co.paa"}; // the file path to the texture
	};
	class JA_104th_ARF_Jungle_Helmet : ls_gar_phase1Arf_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		// don't change this
		displayname = "Clone Trooper ARF P1 Helmet (104th ARF Jungle)";								   // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_ARF_Helmets\data\Textures\104th_ARF_Jungle_Helmet.paa","","\ls\core\addons\characters_clone_legacy\helmets\arf\data\helmet_co.paa"}; // the file path to the texture
	};
	class JA_104th_ARF_Desert_Helmet : ls_gar_phase1Arf_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		// don't change this
		displayname = "Clone Trooper ARF P1 Helmet (104th ARF Desert)";								   // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_ARF_Helmets\data\Textures\104th_ARF_Desert_Helmet.paa","","\ls\core\addons\characters_clone_legacy\helmets\arf\data\helmet_co.paa"}; // the file path to the texture
	};
	class JA_104th_ARF_Medic_Helmet : ls_gar_phase1Arf_helmet
	{
		author = "Tundra";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		// don't change this
		displayname = "Clone Trooper ARF P1 Helmet (104th ARF Medic)";								  // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_ARF_Helmets\data\Textures\104th_ARF_Medic_Helmet.paa","","\ls\core\addons\characters_clone_legacy\helmets\arf\data\helmet_co.paa"}; // the file path to the texture
	};
	// Customs
	class JA_104th_Achilles_Helmet : ls_gar_phase1Arf_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;

		displayname = "Clone Trooper ARF Helmet (104th Achilles)";										 // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_ARF_Helmets\data\Textures\104th_ARF_Achilles_Helmet.paa","","\ls\core\addons\characters_clone_legacy\helmets\arf\data\helmet_co.paa"}; // the file path to the texture
	};
	class JA_104th_Cyan_Helmet : ls_gar_phase1Arf_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;

		displayname = "Clone Trooper ARF Helmet (104th Cyan)";										 // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_ARF_Helmets\data\Textures\104th_ARF_Cyan_Helmet.paa","","\ls\core\addons\characters_clone_legacy\helmets\arf\data\helmet_co.paa"}; // the file path to the texture
	};
	class JA_104th_Welty_Helmet : ls_gar_phase1Arf_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;

		displayname = "Clone Trooper ARF Helmet (104th Welty)";										 // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_ARF_Helmets\data\Textures\104th_ARF_Welty_Helmet.paa","","\ls\core\addons\characters_clone_legacy\helmets\arf\data\helmet_co.paa"}; // the file path to the texture
	};
	class JA_104th_Beans_Helmet : ls_gar_phase1Arf_helmet
	{
		author = "Ice";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		// don't change this
		displayname = "Clone Trooper ARF Helmet (104th Beans)";										  // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_ARF_Helmets\data\Textures\104th_ARF_Beans_Helmet.paa","","\ls\core\addons\characters_clone_legacy\helmets\arf\data\helmet_co.paa"}; // the file path to the texture
		subItems[] = {"Integrated_NVG_TI_0_F"};
	};
	class JA_104th_Gravity_Helmet_A : ls_gar_phase1Arf_helmet
	{
		author = "Cyan";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		// don't change this
		displayname = "Clone Trooper ARF Helmet (104th Gravity)";										  // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_ARF_Helmets\data\Textures\104th_ARF_Gravity_Helmet.paa","","\ls\core\addons\characters_clone_legacy\helmets\arf\data\helmet_co.paa"}; // the file path to the texture
		subItems[] = {"Integrated_NVG_TI_0_F"};
	};
	class JA_104th_Fire_Helmet : ls_gar_phase1Arf_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		// don't change this
		displayname = "Clone Trooper ARF Helmet (104th Fire)";										 // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_ARF_Helmets\data\Textures\104th_ARF_Fire_Helmet.paa","","\ls\core\addons\characters_clone_legacy\helmets\arf\data\helmet_co.paa"}; // the file path to the texture
	};
	class JA_104th_Unix_Helmet : ls_gar_phase1Arf_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;

		displayname = "Clone Trooper ARF Helmet (104th Unix)";										 // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_ARF_Helmets\data\Textures\104th_ARF_Unix_Helmet.paa","","\ls\core\addons\characters_clone_legacy\helmets\arf\data\helmet_co.paa"}; // the file path to the texture
	};
	class JA_104th_Woods_Helmet : ls_gar_phase1Arf_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;

		displayname = "Clone Trooper ARF Helmet (104th Woods)";										  // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_ARF_Helmets\data\Textures\104th_ARF_Woods_Helmet.paa","","\ls\core\addons\characters_clone_legacy\helmets\arf\data\helmet_co.paa"}; // the file path to the texture
	};
	class JA_104th_Woods_Helmet_ME : ls_gar_phase1Arf_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;

		displayname = "Clone Trooper ARF Helmet (104th Woods)";											 // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_ARF_Helmets\data\Textures\104th_P1_ARF_Woods_Helmet.paa","","\ls\core\addons\characters_clone_legacy\helmets\arf\data\helmet_co.paa"}; // the file path to the texture
	};
	class JA_104th_Achilles_Helmet_ME : ls_gar_phase1Arf_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;

		displayname = "Clone Trooper ARF Helmet (104th Achilles)";											// the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_ARF_Helmets\data\Textures\104th_P1_ARF_Achilles_Helmet.paa","","\ls\core\addons\characters_clone_legacy\helmets\arf\data\helmet_co.paa"}; // the file path to the texture
	};
	class JA_104th_Fire_Helmet_ME : ls_gar_phase1Arf_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;

		displayname = "Clone Trooper ARF Helmet (104th Fire)";											// the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_ARF_Helmets\data\Textures\104th_P1_ARF_Fire_Helmet.paa","","\ls\core\addons\characters_clone_legacy\helmets\arf\data\helmet_co.paa"}; // the file path to the texture
	};
	class JA_104th_Unix_Helmet_ME : ls_gar_phase1Arf_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;

		displayname = "Clone Trooper ARF Helmet (104th Unix)";											// the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_ARF_Helmets\data\Textures\104th_P1_ARF_Unix_Helmet.paa","","\ls\core\addons\characters_clone_legacy\helmets\arf\data\helmet_co.paa"}; // the file path to the texture
	};
	class JA_104th_IQ_Helmet : ls_gar_phase2Arf_helmet // Use for ARF + Chops template
	{
		author = "Ice";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1", "camo2", "camo3"};	 // don't change this
		displayname = "Clone Trooper ARF Helmet (104th IQ)"; // the name it will be in game
		hiddenSelectionsTextures[] =
			{
				"Jangos_ARF_Helmets\data\Textures\104th_ARF_IQ_Helmet.paa",
				"Jangos_ARF_Helmets\data\Textures\104th_ARF_IQ_Flaps.paa",
				"Jangos_ARF_Helmets\data\Textures\104th_ARF_IQ_Helmet.paa"};
		subItems[] = {"Integrated_NVG_TI_0_F"};
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
	class JLTS_Clone_jumppack;
	class JA_104th_Jumppack_JT12;
	class JA_104th_Jumppack_JT12_LR;
	// General Uniforms
};
