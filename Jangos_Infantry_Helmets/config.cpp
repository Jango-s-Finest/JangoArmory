#include "basicDefines_A3.hpp"
class DefaultEventhandlers;
class UniformSlotInfo;
class CfgPatches
{
	class Jangos_Armory_Infantry_Helmets
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
			"JA_104th_Duce_Helmet",
			"JA_104th_Quick_Helmet",
			"JA_104th_Scurvy_Helmet_ME",
			"JA_104th_Magnum_Helmet_ME",
			"JA_104th_Galahad_Helmet_ME",
			"JA_104th_Bulky_Helmet_ME",
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
			"JA_104th_Red_Helmet",
			"JA_104th_Knightfall_Helmet",
			"JA_104th_Knockout_Helmet",
			"JA_104th_Scurvy_Helmet",
			"JA_104th_Death_Helmet",
			"JA_104th_Irish_Helmet",
			"JA_104th_Welty_Helmet"
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
	class SWLB_clone_AB_helmet;
	class ls_gar_engineer_helmet;
	class SWLB_clone_ARF_P1_Helmet;
	class SWLB_clone_BARC_helmet;
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

	class JA_104th_Boris_Helmet : SWLB_clone_P2_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";
		hiddenSelections[] = {"camo1"};															// don't change this
		displayname = "Clone Trooper P2 Helmet (104th Boris)";									// the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_P2_Boris_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Patch_Helmet : SWLB_clone_P2_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";
		hiddenSelections[] = {"camo1"};															// don't change this
		displayname = "Clone Trooper P2 Helmet (104th Patch)";									// the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_P2_Patch_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Lax_Helmet : SWLB_clone_P2_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";
		hiddenSelections[] = {"camo1"};															// don't change this
		displayname = "Clone Trooper P2 Helmet (104th Lax)";									// the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_P2_Lax_Helmet.paa"}; // the file path to the texture
	};
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
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};															// don't change this
		displayname = "Clone Trooper P2 Helmet (104th Bomb)";									// the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_P2_Bomb_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Blood_Helmet : SWLB_clone_P2_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};															// don't change this
		displayname = "Clone Trooper P2 Helmet (104th Blood)";									// the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_P2_Blood_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Byte_Helmet : SWLB_clone_P2_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};														   // don't change this
		displayname = "Clone Trooper P2 Helmet (104th Byte)";								   // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_P2_Byte_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Quick_Helmet : SWLB_P2_SpecOps_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};														   // don't change this
		displayname = "Clone Trooper P2 Special Activities Helmet (104th Quick)";								   // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_P2_Quick_JTAC_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Duce_Helmet : SWLB_clone_P2_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};														   // don't change this
		displayname = "Clone Trooper P2 Helmet (104th Duce)";								   // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_P2_Duce_Helmet.paa"}; // the file path to the texture
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
	class JA_104th_Crash_Helmet : SWLB_P2_SpecOps_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};															  // don't change this
		displayname = "Clone Trooper P2 Special Activities Helmet (104th Crash)";					  // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_JTAC_Crash_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Death_Helmet : SWLB_clone_P2_Helmet
	{
		author = "Fish";
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
	class JA_104th_Archibold_Helmet : ls_gar_engineer_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {
			"camo1",
			"illum",
			"visor"};												// don't change this
		displayname = "Clone Trooper Engineer Helmet (104th Archibold)"; // the name it will be in game
		hiddenSelectionsMaterials[] = {};
		hiddenSelectionsTextures[] = {
			"Jangos_Infantry_Helmets\data\Textures\104th_Engi_Archibold_Helmet.paa",
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
	};
	class JA_104th_Glitch_Helmet : SWLB_Clone_P2_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};															 // don't change this
		displayname = "Clone Trooper Helmet (104th Glitch)";									 // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_P2_Glitch_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Ghost_Helmet : SWLB_P2_SpecOps_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};															  // don't change this
		displayname = "Clone Trooper P2 Special Activities Helmet (104th Ghost)";					  // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_JTAC_Ghost_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Hound_Helmet : SWLB_Clone_P2_Helmet
	{
		author = "Cyan";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};															 // don't change this
		displayname = "Clone Trooper P2 Helmet (104th Hound)";									 // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_P2_Hound_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Knightfall_Helmet : SWLB_clone_P2_Helmet
	{
		author = "Tundra";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper P2 Helmet (104th Knightfall)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "Jangos_Infantry_Helmets\data\Textures\104th_P2_Knightfall_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_Kyo_Helmet : SWLB_clone_P2_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {
			"camo1",
		};																								// don't change this
		displayname = "Clone Trooper P2 Helmet (104th Kyo)";											// the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_P2_Kyo_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Mad_Helmet : SWLB_clone_P2_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};														  // don't change this
		displayname = "Clone Trooper P2 Helmet (104th Mad)";								  // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_P2_Mad_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Mower_Helmet : SWLB_clone_P2_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};															// don't change this
		displayname = "Clone Trooper P2 Helmet (104th Mower)";									// the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_P2_Mower_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Paraso_Helmet : SWLB_clone_P2_Helmet
	{
		author = "Tundra";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};															 // don't change this
		displayname = "Clone Trooper P2 Helmet (104th Paraso)";									 // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_P2_Paraso_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Pretz_Helmet : SWLB_clone_P2_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};															// don't change this
		displayname = "Clone Trooper P2 Helmet (104th Pretz)";									// the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_P2_Pretz_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Pulse_Helmet : SWLB_clone_P2_helmet
	{
		author = "Fish";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {
			"camo1",
		};													   // don't change this
		displayname = "Clone Trooper P2 Helmet (104th Pulse)"; // the name it will be in game
		hiddenSelectionsMaterials[] = {};
		hiddenSelectionsTextures[] = {
			"Jangos_Infantry_Helmets\data\Textures\104th_P2_Pulse_Helmet.paa",
		}; // the file path to the texture
	};
	class JA_104th_Red_Helmet : SWLB_clone_P2_helmet
	{
		author = "Cyan";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";
		hiddenSelections[] = {
			"camo1",
		};													   // don't change this
		displayname = "Clone Trooper P2 Helmet (104th Red)"; // the name it will be in game
		hiddenSelectionsMaterials[] = {};
		hiddenSelectionsTextures[] = {
			"Jangos_Infantry_Helmets\data\Textures\104th_P2_Red_Helmet.paa",
		}; // the file path to the texture
	};
	class JA_104th_Reaper_Helmet : ls_gar_engineer_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {
			"camo1",
			"illum",
			"visor"};													// don't change this
		displayname = "Clone Trooper Engineer Helmet (104th Reaper)"; // the name it will be in game
		hiddenSelectionsMaterials[] = {};
		hiddenSelectionsTextures[] = {
			"Jangos_Infantry_Helmets\data\Textures\104th_CE_Reaper_Helmet.paa",
			"ls_armor_bluefor\helmet\gar\engineer\data\light_co.paa",
			"ls_armor_bluefor\helmet\gar\engineer\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_Scurvy_Helmet : SWLB_clone_P2_Helmet
	{
		author = "Tundra";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper P2 Helmet (104th Scurvy)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "Jangos_Infantry_Helmets\data\Textures\104th_P2_Scurvy_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_Skav_Helmet : SWLB_clone_P2_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};																	   // don't change this
		displayname = "Clone Trooper P2 Helmet (104th Skav)";											   // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_P2_Skav_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Spirit_Helmet : SWLB_clone_P2_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};																	   // don't change this
		displayname = "Clone Trooper P2 Helmet (104th Spirit)";											   // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_P2_Spirit_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Irish_Helmet : SWLB_Clone_P2_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};															  // don't change this
		displayname = "Clone Trooper P2 Helmet (104th Irish)";									  // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_P2_Irish_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Knockout_Helmet : SWLB_Clone_P2_Helmet
	{
		author = "Fish";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};													// don't change this
		displayname = "Clone Trooper P2 Helmet (104th Knockout)"; // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_P2_Knockout_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Talisman_Helmet : SWLB_clone_P2_helmet
	{
		author = "Fish";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {
			"camo1",
		};														  // don't change this
		displayname = "Clone Trooper P2 Helmet (104th Talisman)"; // the name it will be in game
		hiddenSelectionsMaterials[] = {};
		hiddenSelectionsTextures[] = {
			"Jangos_Infantry_Helmets\data\Textures\104th_P2_Talisman_Helmet.paa",
		}; // the file path to the texture
	};
	class JA_104th_Tiger_Helmet : SWLB_clone_P2_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};																	  // don't change this
		displayname = "Clone Trooper P2 Helmet (104th Tiger)";											  // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_P2_Tiger_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Tinkle_Helmet : SWLB_clone_P2_Helmet
	{
		author = "Fish";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {
			"camo1",
		};														// don't change this
		displayname = "Clone Trooper P2 Helmet (104th Tinkle)"; // the name it will be in game
		hiddenSelectionsMaterials[] = {};
		hiddenSelectionsTextures[] = {
			"Jangos_Infantry_Helmets\data\Textures\104th_P2_Tinkle_Helmet.paa",
		}; // the file path to the texture
	};
	class JA_104th_Tusk_Helmet : SWLB_clone_P1_2_helmet
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
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};															  // don't change this
		displayname = "Clone Trooper P2 Helmet (104th Vertigo)";									  // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_P2_Vertigo_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Walker_Helmet : SWLB_clone_eng_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {
			"camo1",
			"illum",
			"visor"};												  // don't change this
		displayname = "Clone Trooper Engineer Helmet (104th Walker)"; // the name it will be in game
		hiddenSelectionsMaterials[] = {};
		hiddenSelectionsTextures[] = {
			"Jangos_Infantry_Helmets\data\Textures\104th_P2_Walker_Helmet.paa",
			"ls_armor_bluefor\helmet\gar\engineer\data\light_co.paa",
			"ls_armor_bluefor\helmet\gar\engineer\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_Welty_Helmet : SWLB_P2_SpecOps_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};															// don't change this
		displayname = "Clone Trooper P2 Helmet (104th Welty)";									// the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_JTAC_Welty_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Xan_Helmet : SWLB_P2_SpecOps_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};																	  // don't change this
		displayname = "Clone Trooper P2 Special Activities Helmet (104th Xan)";							  // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_JTAC_Xan_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Soul_Helmet : SWLB_clone_P1_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};															  // don't change this
		displayname = "Clone Trooper P1 Helmet (104th Soul)";									  // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_P1_Soul_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Vegas_Helmet : SWLB_Clone_P2_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};															  // don't change this
		displayname = "Clone Trooper P2 Helmet (104th Vegas)";									  // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_P2_Vegas_Helmet.paa"}; // the file path to the texture
	};
};