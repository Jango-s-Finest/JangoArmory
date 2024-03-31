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
	class InventoryItem_Base_F;
	class ItemCore;
	class SWLB_Clone_Pilot_P2_Helmet;
	class SWLB_clone_uniform;
	class SWLB_clone_mc_uniform;
	class SWLB_clone_arc_armor;
	class SWLB_clone_officer_armor;
	class SWLB_clone_commander_armor;
	class SWLB_clone_airborne_armor;
	class SWLB_CEE_Airborne_Officer;
	class SWLB_CEE_Force_Recon_NCO;
	class SWLB_clone_BARC_helmet;
	class SWLB_clone_AB_helmet;
	class SWLB_clone_ARF_P1_Helmet;
	class SWLB_clone_P15_Helmet;
	class SWLB_clone_P1_helmet;
	class SWLB_clone_P1_2_helmet;
	class SWLB_clone_P2_Helmet;
	class lsd_gar_standart_nvg;
	class lsd_gar_rangefinder_nvg;
	class lsd_gar_p2MarshalCommander_nvg;
	class SWLB_clone_kama_armor;
	class SWLB_clone_medic_armor;
	class SWLB_clone_basic_armor;
	class SWLB_clone_airborne_nco_armor;
	class SWLB_clone_eng_helmet;
	class SWLB_P2_SpecOps_Helmet;
	class UniformItem;
	class VestItem;

	// Base
	class JA_104th_ARF_Helmet : SWLB_clone_ARF_P1_Helmet
	{
		author = "Tundra";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};													   // don't change this
		displayname = "Clone Trooper ARF P1 Helmet (104th ARF)";						   // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_ARF_Helmets\data\Textures\104th_ARF_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_ARF_Urban_Helmet : SWLB_clone_ARF_P1_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};															 // don't change this
		displayname = "Clone Trooper ARF P1 Helmet (104th ARF Urban)";							 // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_ARF_Helmets\data\Textures\104th_ARF_Urban_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_ARF_Jungle_Helmet : SWLB_clone_ARF_P1_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};															  // don't change this
		displayname = "Clone Trooper ARF P1 Helmet (104th ARF Jungle)";							  // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_ARF_Helmets\data\Textures\104th_ARF_Jungle_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_ARF_Desert_Helmet : SWLB_clone_ARF_P1_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};															  // don't change this
		displayname = "Clone Trooper ARF P1 Helmet (104th ARF Desert)";							  // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_ARF_Helmets\data\Textures\104th_ARF_Desert_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_ARF_Medic_Helmet : SWLB_clone_ARF_P1_Helmet
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
	class JA_104th_Achilles_Helmet : SWLB_clone_ARF_P1_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper ARF Helmet (104th Achilles)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "Jangos_ARF_Helmets\data\Textures\104th_ARF_Achilles_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_Beans_Helmet : SWLB_clone_ARF_P1_Helmet
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
	class JA_104th_Fire_Helmet : SWLB_clone_ARF_P1_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};															// don't change this
		displayname = "Clone Trooper ARF Helmet (104th Fire)";									// the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_ARF_Helmets\data\Textures\104th_ARF_Fire_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Unix_Helmet : SWLB_clone_ARF_P1_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper ARF Helmet (104th Unix)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "Jangos_ARF_Helmets\data\Textures\104th_ARF_Unix_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_Woods_Helmet : SWLB_clone_ARF_P1_Helmet
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

class CfgVehicles
{
	class SWLB_clone_base_P2;
	class SWLB_clone_marshal_commander_base_P2;
	class SWLB_clone_backpack;
	class SWLB_clone_RTO_mini_backpack;
	class SWLB_clone_backpack_heavy;
	class SWLB_clone_backpack_medic;
	class SWLB_clone_backpack_RTO;
	class JLTS_Clone_jumppack;
	class JA_104th_Jumppack_JT12;
	class JA_104th_Jumppack_JT12_LR;
	// General Uniforms
	
};
