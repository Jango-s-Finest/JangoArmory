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
		units[] = {};
		weapons[] = {
			"JA_104th_Banker_Helmet",
			"JA_104th_Beans_Helmet",
			"JA_104th_Blood_Helmet",
			"JA_104th_Bomb_Helmet",
			"JA_104th_Byte_Helmet",
			"JA_104th_Bulky_Helmet",
			"JA_104th_Badger_Helmet",
			"JA_104th_Carmine_Helmet",
			"JA_104th_Calvin_Helmet",
			"JA_104th_Dart_Helmet",
			"JA_104th_Dragan_Helmet",
			"JA_104th_Doc_Helmet",
			"JA_104th_Ed_Helmet",
			"JA_104th_Galahad_Helmet",
			"JA_104th_Gravity_Helmet",
			"JA_104th_Hound_Helmet",
			"JA_104th_Tiger_Helmet",
			"JA_104th_Spirit_Helmet",
			"JA_104th_Skav_Helmet",
			"JA_104th_Xan_Helmet",
			"JA_104th_Tinkle_Helmet",
			"JA_104th_Tusk_Helmet",
			"JA_104th_Test_Helmet",
			"JA_104th_Mad_Helmet",
			"JA_104th_Mower_Helmet",
			"JA_104th_Chills_Helmet",
			"JA_104th_Kyo_Helmet",
			"JA_104th_Crash_Helmet",
			"JA_104th_Paraso_Helmet",
			"JA_104th_Pretz_Helmet",
			"JA_104th_Reaper_Helmet",
		units[] = {
			"JA_104th_Habit_Helmet",
			"JA_104th_Red_Helmet",
			"JA_104th_AB_Base_Helmet",
			"JA_104th_AB_Medic_Helmet",
			"JA_104th_Raptor_Helmet",
			"JA_104th_Dak_Helmet",
			"JA_104th_Clutch_Helmet",
			"JA_104th_Garm_Helmet",
			"JA_104th_Axel_Helmet",
			"JA_104th_Osiris_Helmet",
			"JA_104th_Magnum_Helmet",
			"JA_104th_Sixes_Helmet",
			"JA_104th_Bulky_Helmet",
			"JA_104th_Cyan_Helmet",
			"JA_104th_Azure_Helmet",
			"JA_104th_Kage_Helmet",
			"104th_Kaleck_Helmet",
			"JA_104th_Soul_Helmet",
			"JA_104th_Trustful_Helmet",
			"JA_104th_Stache_Helmet"
		};
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
	class ls_gar_barc_helmet;
	class ls_gar_desert_helmet;
	class UniformItem;
	class VestItem;
	class HeadgearItem;

	class JA_104th_Banker_Helmet : SWLB_clone_P2_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";
		hiddenSelections[] = {"camo1"};															// don't change this
		displayname = "Clone Trooper P2 Helmet (104th Banker)";									// the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_P2_Banker_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Bomb_Helmet : SWLB_clone_P2_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";
		hiddenSelections[] = {"camo1"};															// don't change this
		displayname = "Clone Trooper P2 Helmet (104th Bomb)";									// the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_P2_Bomb_Helmet.paa"}; // the file path to the texture
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
	class JA_104th_Bulky_Helmet : SWLB_clone_P2_Helmet
	{
		author = "Fish";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};														   // don't change this
		displayname = "Clone Trooper P2 Helmet (104th Bulky)";								   // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_P2_Bulky_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Badger_Helmet : SWLB_P2_SpecOps_Helmet
	{
		author = "Fish";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};														   // don't change this
		displayname = "Clone Tanker P2 Helmet (104th Badger)";								   // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_JTAC_Badger_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Carmine_Helmet : SWLB_clone_P2_helmet
	{
		author = "Fish";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {
			"camo1",
		};														 // don't change this
		displayname = "Clone Trooper P2 Helmet (104th Carmine)"; // the name it will be in game
		hiddenSelectionsTextures[] = {
			"Jangos_Infantry_Helmets\data\Textures\104th_P2_Carmine_Helmet.paa",
		}; // the file path to the texture
	};
	class JA_104th_Calvin_Helmet : SWLB_clone_P2_helmet
	{
		author = "Fish";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {
			"camo1",
		};														 // don't change this
		displayname = "Clone Trooper P2 Helmet (104th Calvin)"; // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_P2_Calvin_Helmet.paa",
		}; // the file path to the texture
	};
	class JA_104th_Chills_Helmet : SWLB_clone_P2_Helmet
	{
		author = "Fish";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {
			"camo1",
		};														// don't change this
		displayname = "Clone Trooper P2 Helmet (104th Chills)"; // the name it will be in game
		hiddenSelectionsTextures[] = {
			"Jangos_Infantry_Helmets\data\Textures\104th_P2_Chills_Helmet.paa",
		}; // the file path to the texture
	};
	class JA_104th_Crash_Helmet : SWLB_P2_SpecOps_Helmet{
		author = "Fish";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {
			"camo1",
		};														// don't change this
		displayname = "Clone Trooper P2 Helmet (104th Crash)"; // the name it will be in game
		hiddenSelectionsTextures[] = {
			"Jangos_Infantry_Helmets\data\Textures\104th_P2_Crash_Helmet.paa",
		}; // the file path to the texture
	};
	class JA_104th_AB_Medic_Helmet : SWLB_clone_AB_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};																	  // don't change this
		displayname = "Clone Trooper P2 Helmet (104th Death)";											  // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_P2_Death_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Dart_Helmet : ls_gar_engineer_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {
			"camo1",
			"illum",
			"visor"};												// don't change this
		displayname = "Clone Trooper Engineer Helmet (104th Dart)"; // the name it will be in game
		hiddenSelectionsMaterials[] = {};
		hiddenSelectionsTextures[] = {
			"Jangos_Infantry_Helmets\data\Textures\104th_P2_Dart_Helmet.paa",
			"ls_armor_bluefor\helmet\gar\engineer\data\light_co.paa",
			"ls_armor_bluefor\helmet\gar\engineer\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_Dragan_Helmet : SWLB_clone_P2_Helmet
	{
		author = "Fish";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};							// don't change this
		displayname = "Clone Trooper P2 Helmet (104th Dragan)"; // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_P2_Dragan_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Ed_Helmet : SWLB_clone_P2_Helmet
	{
		author = "Tundra";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper P2 Helmet (104th Ed)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "Jangos_Infantry_Helmets\data\Textures\104th_P2_Ed_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_Gravity_Helmet : SWLB_Clone_P2_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};															 // don't change this
		displayname = "Clone Trooper Helmet (104th Gravity)";									 // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_P2_Gravity_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Galahad_Helmet : ls_gar_barc_helmet // BARC HELMET DON'T USE AS P2 BASE
	{
		author = "Fish";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1","visor"};														   // don't change this
		displayname = "Clone Trooper BARC Helmet (104th Galahad)"; // the name it will be in game
		hiddenSelectionsTextures[] = {
			"Jangos_Infantry_Helmets\data\Textures\104th_BARC_Galahad_Helmet.paa",
			"ls_armor_bluefor\helmet\gar\barc\data\visor_co.paa"
		}; // the file path to the texture
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
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Helmets\data\Textures\104th_AB_Dak_Helmet.paa"}; // the file path to the texture
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
	class JA_104th_Knockout_Helmet : SWLB_Clone_P2_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};															 // don't change this
		displayname = "Clone Trooper Helmet (104th Knockout)";									 // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_P2_Knockout_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Bulky_Helmet : SWLB_clone_AB_Helmet
	{
		author = "Fish";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};													// don't change this
		displayname = "Clone Trooper P2 Helmet (104th Knockout)"; // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_P2_Knockout_Helmet.paa"}; // the file path to the texture
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
	class JA_104th_Kaleck_Helmet : SWLB_clone_AB_Helmet
	{
		author = "Tundra";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper P1-2 Helmet (104th Tusk)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "Jangos_Infantry_Helmets\data\Textures\104th_P1-2_Tusk_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_Test_Helmet : SWLB_clone_P2_helmet
	{
		author = "Fish";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1", "visor" }; // don't change this
		displayname = "Clone Trooper P2 Helmet (104th Test)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "Jangos_Infantry_Helmets\data\Textures\104th_P2_Test_Helmet.paa", "Jangos_Infantry_Helmets\data\Textures\104th_P2_Test_visor.paa" }; // the file path to the texture
		hiddenSelectionsMaterials[] =
		{
			"Jangos_Infantry_Helmets\data\Textures\JA_helmet.rvmat",
			"Jangos_Infantry_Helmets\data\Textures\JA_visor.rvmat"
		};
	};
	class JA_104th_Vertigo_Helmet : SWLB_Clone_P2_Helmet
	{
		author = "Dak";
		author = "Fish";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};																	 // don't change this
		displayname = "Clone Trooper AB Helmet (104th Kaleck)";											 // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Helmets\data\Textures\104th_AB_Kaleck_Helmet.paa"}; // the file path to the texture
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
	class JA_104th_Trustful_Helmet : SWLB_clone_AB_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};																	 // don't change this
		displayname = "Clone Trooper AB Helmet (104th Trustful)";											 // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Helmets\data\Textures\104th_AB_Trustful_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Stache_Helmet : SWLB_clone_AB_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};																	 // don't change this
		displayname = "Clone Trooper AB Helmet (104th Stache)";											 // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Helmets\data\Textures\104th_AB_Stache_Helmet.paa"}; // the file path to the texture
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