#include "basicDefines_A3.hpp"
class DefaultEventhandlers;
class UniformSlotInfo;
class CfgPatches
{
	class Jangos_Armory_Airborne_Helmets
	{
		author = "Jango's Finest";
		requiredVersion = 0.1;
		requiredAddons[] = {};
		units[] = {
			"JA_104th_Habit_Helmet",
			"JA_104th_Red_Helmet",
			"JA_104th_AB_Base_Helmet",
			"JA_104th_AB_Medic_Helmet",
			"JA_104th_Raptor_Helmet",
			"JA_104th_Dak_Helmet",
			"JA_104th_Duce_Helmet",
			"JA_104th_OD_Helmet",
			"JA_104th_Achilles_Helmet",
			"JA_104th_Clutch_Helmet",
			"JA_104th_Trustful_Helmet",
			"JA_104th_Sigil_Helmet",
			"JA_104th_Misfire_Helmet",
			"JA_104th_Garm_Helmet",
			"JA_104th_Axel_Helmet",
			"JA_104th_Axel_Helmet_ME",
			"JA_104th_Skav_Helmet",
			"JA_104th_Osiris_Helmet",
			"JA_104th_Traveler_Helmet",
			"JA_104th_Shovel_Helmet",
			"JA_104th_Magnum_Helmet",
			"JA_104th_Sixes_Helmet",
			"JA_104th_Bulky_Helmet",
			"JA_104th_Cyan_Helmet",
			"JA_104th_Azure_Helmet",
			"JA_104th_Kage_Helmet",
			"JA_104th_Soul_Helmet"};
		weapons[] = {};
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
	class JA_104th_Habit_Helmet : SWLB_clone_AB_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};																	  // don't change this
		displayname = "Clone Trooper AB Helmet (104th Habit)";											  // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Helmets\data\Textures\104th_AB_Habit_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Red_Helmet : SWLB_clone_AB_helmet
	{
		author = "Tundra";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};																	// don't change this
		displayname = "Clone Trooper AB Helmet (104th Red)";											// the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Helmets\data\Textures\104th_AB_Red_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_AB_Base_Helmet : SWLB_clone_AB_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};																	 // don't change this
		displayname = "Clone Trooper Airborne Helmet (Base)";											 // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Helmets\data\Textures\104th_AB_Base_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_AB_Medic_Helmet : SWLB_clone_AB_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};																	  // don't change this
		displayname = "Clone Trooper Airborne Helmet (Medic)";											  // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Helmets\data\Textures\104th_AB_Medic_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Raptor_Helmet : SWLB_clone_AB_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};																	   // don't change this
		displayname = "Clone Trooper AB Helmet (104th Raptor)";											   // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Helmets\data\Textures\104th_AB_Raptor_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Dak_Helmet : SWLB_clone_AB_helmet
	{
		author = "Tundra";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};																	// don't change this
		displayname = "Clone Trooper AB Helmet (104th Dak)";											// the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Helmets\data\Textures\104th_Dak_AB_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Duce_Helmet : SWLB_clone_AB_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};																	 // don't change this
		displayname = "Clone Trooper AB Helmet (104th Duce)";											 // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Helmets\data\Textures\104th_AB_Duce_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_OD_Helmet : SWLB_clone_AB_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};																   // don't change this
		displayname = "Clone Trooper AB Helmet (104th OD)";											   // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Helmets\data\Textures\104th_AB_OD_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Clutch_Helmet : SWLB_clone_AB_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};																	   // don't change this
		displayname = "Clone Trooper AB Helmet (104th Clutch)";											   // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Helmets\data\Textures\104th_AB_Clutch_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Trustful_Helmet : SWLB_clone_AB_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};																		 // don't change this
		displayname = "Clone Trooper AB Helmet (104th Trustful)";											 // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Helmets\data\Textures\104th_AB_Trustful_Helmet.paa"}; // the file path to the texture
	};
	// class JA_104th_Sigil_Helmet : SWLB_clone_AB_helmet
	// {
	// 	author = "Dak";
	// 	scopeArsenal = 2;
	//     side = 1;
	// 	grad_slingHelmet_allow = true;
	// 	hiddenSelections[] = { "camo1" }; // don't change this
	// 	displayname = "Clone Trooper AB Helmet (104th Sigil)"; // the name it will be in game
	// 	hiddenSelectionsTextures[] = { "Jangos_Airborne_Helmets\data\Textures\104th_AB_Sigil_Helmet.paa" }; // the file path to the texture
	// };
	class JA_104th_Misfire_Helmet : SWLB_clone_AB_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};																		// don't change this
		displayname = "Clone Trooper AB Helmet (104th Misfire)";											// the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Helmets\data\Textures\104th_AB_Misfire_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Garm_Helmet : SWLB_clone_AB_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};																	 // don't change this
		displayname = "Clone Trooper AB Helmet (104th Garm)";											 // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Helmets\data\Textures\104th_AB_Garm_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Axel_Helmet : SWLB_clone_AB_Helmet
	{
		author = "Ice";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};																	 // don't change this
		displayname = "Clone Trooper AB Helmet (104th Axel)";											 // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Helmets\data\Textures\104th_AB_Axel_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Axel_Helmet_ME : SWLB_clone_AB_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};																				 // don't change this
		displayname = "Clone Trooper AB Helmet (104th Axel ME)";													 // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Helmets\data\Textures\104th_AB_Axel_Helmet_Malevolence.paa"}; // the file path to the texture
	};
	class JA_104th_Skav_Helmet : SWLB_clone_AB_Helmet
	{
		author = "Fish";
		scopeArsenal = 0;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};																	 // don't change this
		displayname = "Clone Trooper AB Helmet (104th Skav)";											 // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Helmets\data\Textures\104th_AB_Skav_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Osiris_Helmet : SWLB_clone_AB_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};																	   // don't change this
		displayname = "Clone Trooper AB Helmet (104th Osiris)";											   // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Helmets\data\Textures\104th_AB_Osiris_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Traveler_Helmet : SWLB_clone_AB_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};																		 // don't change this
		displayname = "Clone Trooper AB Helmet (104th Traveler)";											 // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Helmets\data\Textures\104th_AB_Traveler_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Shovel_Helmet : SWLB_clone_AB_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};																	   // don't change this
		displayname = "Clone Trooper AB Helmet (104th Shovel)";											   // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Helmets\data\Textures\104th_AB_Shovel_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Magnum_Helmet : SWLB_clone_AB_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};																	   // don't change this
		displayname = "Clone Trooper AB Helmet (104th Magnum)";											   // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Helmets\data\Textures\104th_AB_Magnum_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Sixes_Helmet : SWLB_clone_AB_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};																	  // don't change this
		displayname = "Clone Trooper AB Helmet (104th Sixes)";											  // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Helmets\data\Textures\104th_AB_Sixes_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Bulky_Helmet : SWLB_clone_AB_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};																	  // don't change this
		displayname = "Clone Trooper AB Helmet (104th Bulky)";											  // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Helmets\data\Textures\104th_AB_Bulky_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Cyan_Helmet : SWLB_clone_AB_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};																	 // don't change this
		displayname = "Clone Trooper AB Helmet (104th Cyan)";											 // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Helmets\data\Textures\104th_AB_Cyan_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Azure_Helmet : SWLB_clone_AB_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};																	  // don't change this
		displayname = "Clone Trooper AB Helmet (104th Azure)";											  // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Helmets\data\Textures\104th_AB_Azure_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Kage_Helmet : SWLB_clone_AB_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};																	 // don't change this
		displayname = "Clone Trooper AB Helmet (104th Kage)";											 // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Helmets\data\Textures\104th_AB_Kage_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Soul_Helmet : SWLB_clone_AB_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};																	 // don't change this
		displayname = "Clone Trooper AB Helmet (104th Soul)";											 // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Helmets\data\Textures\104th_AB_Soul_Helmet.paa"}; // the file path to the texture
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
