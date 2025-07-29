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
			"JA_104th_Welty_Helmet"};
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
	class ls_gar_airborne_helmet;
	class ls_gar_phase1Arf_helmet;
	class ls_gar_barc_helmet;
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
	class ls_gar_barc_helmet;
	class ls_gar_desert_helmet;
	class ls_sob_commando_helmet;
	class ls_sob_tech_helmet;
	class UniformItem;
	class VestItem;
	class HeadgearItem;

	// Tech
	class JA_104th_Carmine_Tech_Helmet : ls_sob_tech_helmet
	{
		author = "Jango's Finest";
		displayName = "Clone Trooper Tech Helmet (104th Carmine)"; // in-game name
		hiddenSelections[] = {"camo1", "glass"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Infantry_Helmets\data\textures\104th_Tech_Carmine_Helmet.paa",
				"Jangos_Infantry_Helmets\data\textures\104th_Carmine_Tech_Glasses.paa",
			};
		model = "\ls_armor_bluefor\helmet\sob\tech\ls_sob_tech_helmet.p3d";
	};
	// RC
	class JA_104th_Spectre_RC_Helmet : ls_sob_commando_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"illum", "camo1"};																																				 // don't change this
		displayname = "Clone Trooper Republic Commando Helmet (104th Spectre)";																													 // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_Company_Spectre_RC_Helmet.paa", "Jangos_Infantry_Helmets\data\Textures\104th_Company_Spectre_RC_Helmet.paa"}; // the file path to the texture
	};
	// Special Activities
	class JA_104th_Hawkeye_Helmet : ls_sob_phase2SpecOp_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		displayname = "Clone Trooper P2 Special Activities Helmet (104th Hawkeye)";							  // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_Hawkeye_JTAC_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2SpecOp\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_Quick_Helmet : ls_sob_phase2SpecOp_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		displayname = "Clone Trooper P2 Special Activities Helmet (104th Quick)";							   // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_P2_Quick_JTAC_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2SpecOp\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_Badger_Helmet : ls_sob_phase2SpecOp_helmet
	{
		author = "Fish";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		displayname = "Clone Trooper P2 Special Activities Helmet (104th Badger)";							 // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_JTAC_Badger_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2SpecOp\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_Crash_Helmet : ls_sob_phase2SpecOp_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		displayname = "Clone Trooper P2 Special Activities Helmet (104th Crash)";							// the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_JTAC_Crash_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2SpecOp\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_Ghost_Helmet : ls_sob_phase2SpecOp_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		displayname = "Clone Trooper P2 Special Activities Helmet (104th Ghost)";							// the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_JTAC_Ghost_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2SpecOp\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_Welty_Helmet : ls_sob_phase2SpecOp_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		displayname = "Clone Trooper P2 Special Activities Helmet (104th Welty)";							// the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_JTAC_Welty_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2SpecOp\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_Xan_Helmet : ls_sob_phase2SpecOp_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		displayname = "Clone Trooper P2 Special Activities Helmet (104th Xan)";							  // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_JTAC_Xan_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2SpecOp\data\visor_co.paa"}; // the file path to the texture
	};
	// Engineer
	class JA_104th_Dart_Helmet : ls_gar_engineer_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {
			"camo1",
			"illum",
			"visor"};
		displayname = "Clone Trooper Engineer Helmet (104th Dart)"; // the name it will be in game
		hiddenSelectionsTextures[] = {
			"Jangos_Infantry_Helmets\data\Textures\104th_P2_Dart_Helmet.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\engineer\data\light_co.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\engineer\data\visor_co.paa"}; // the file path to the texture
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
			"visor"};													 // don't change this
		displayname = "Clone Trooper Engineer Helmet (104th Archibold)"; // the name it will be in game
		hiddenSelectionsTextures[] = {
			"Jangos_Infantry_Helmets\data\Textures\104th_Engi_Archibold_Helmet.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\engineer\data\light_co.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\engineer\data\visor_co.paa"}; // the file path to the texture
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
			"visor"};												  // don't change this
		displayname = "Clone Trooper Engineer Helmet (104th Reaper)"; // the name it will be in game
		hiddenSelectionsTextures[] = {
			"Jangos_Infantry_Helmets\data\Textures\104th_CE_Reaper_Helmet.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\engineer\data\light_co.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\engineer\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_Walker_Helmet : ls_gar_engineer_helmet
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
		hiddenSelectionsTextures[] = {
			"Jangos_Infantry_Helmets\data\Textures\104th_P2_Walker_Helmet.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\engineer\data\light_co.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\engineer\data\visor_co.paa"}; // the file path to the texture
	};
	// P1/2
	class JA_104th_Tusk_Helmet : ls_gar_rex_helmet
	{
		author = "Tundra";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		displayname = "Clone Trooper P1-2 Helmet (104th Tusk)";											   // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_P1-2_Tusk_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\rex\data\visor_co.paa"}; // the file path to the texture
	};
	// P1
	class JA_104th_Soul_Helmet : ls_gar_phase1_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		displayname = "Clone Trooper P1 Helmet (104th Soul)";											 // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_P1_Soul_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\illum_co.paa"}; // the file path to the texture
	};
	// BARC
	class JA_104th_Galahad_Helmet : ls_gar_barc_helmet // BARC HELMET DON'T USE AS P2 BASE
	{
		author = "Fish";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1", "visor"};				   // don't change this
		displayname = "Clone Trooper BARC Helmet (104th Galahad)"; // the name it will be in game
		hiddenSelectionsTextures[] = {
			"Jangos_Infantry_Helmets\data\Textures\104th_BARC_Galahad_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\barc\data\visor_co.paa"}; // the file path to the texture
	};
	// P2
	class JA_104th_Skipps_Helmet : ls_gar_phase2_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";
		displayname = "Clone Trooper P2 Helmet (104th Skipps)";											   // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_Skipps_P2_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_Granite_Helmet : ls_gar_phase2_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";
		displayname = "Clone Trooper P2 Helmet (104th Granite)";											   // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_P2_Granite_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_Rich_Helmet : ls_gar_phase2_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";
		displayname = "Clone Trooper P2 Helmet (104th Rich)";											   // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_P2_Rich_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_Boris_Helmet : ls_gar_phase2_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";
		displayname = "Clone Trooper P2 Helmet (104th Boris)";											  // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_P2_Boris_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_Patch_Helmet : ls_gar_phase2_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";
		displayname = "Clone Trooper P2 Helmet (104th Patch)";											  // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_P2_Patch_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_Lax_Helmet : ls_gar_phase2_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";
		displayname = "Clone Trooper P2 Helmet (104th Lax)";											// the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_P2_Lax_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_Banker_Helmet : ls_gar_phase2_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";
		displayname = "Clone Trooper P2 Helmet (104th Banker)";											   // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_P2_Banker_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_Bomb_Helmet : ls_gar_phase2_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		displayname = "Clone Trooper P2 Helmet (104th Bomb)";											 // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_P2_Bomb_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_Blood_Helmet : ls_gar_phase2_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		displayname = "Clone Trooper P2 Helmet (104th Blood)";											  // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_P2_Blood_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_Byte_Helmet : ls_gar_phase2_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		displayname = "Clone Trooper P2 Helmet (104th Byte)";											 // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_P2_Byte_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_Duce_Helmet : ls_gar_phase2_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		displayname = "Clone Trooper P2 Helmet (104th Duce)";											 // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_P2_Duce_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_Bulky_Helmet : ls_gar_phase2_helmet
	{
		author = "Fish";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		displayname = "Clone Trooper P2 Helmet (104th Bulky)";											  // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_P2_Bulky_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_Carmine_Helmet : ls_gar_phase2_helmet
	{
		author = "Fish";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		displayname = "Clone Trooper P2 Helmet (104th Carmine)"; // the name it will be in game
		hiddenSelectionsTextures[] = {
			"Jangos_Infantry_Helmets\data\Textures\104th_P2_Carmine_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"
		}; // the file path to the texture
	};
	class JA_104th_Calvin_Helmet : ls_gar_phase2_helmet
	{
		author = "Fish";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		displayname = "Clone Trooper P2 Helmet (104th Calvin)"; // the name it will be in game
		hiddenSelectionsTextures[] = {
			"Jangos_Infantry_Helmets\data\Textures\104th_P2_Calvin_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"
		}; // the file path to the texture
	};
	class JA_104th_Chills_Helmet : ls_gar_phase2_helmet
	{
		author = "Fish";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		displayname = "Clone Trooper P2 Helmet (104th Chills)"; // the name it will be in game
		hiddenSelectionsTextures[] = {
			"Jangos_Infantry_Helmets\data\Textures\104th_P2_Chills_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"
		}; // the file path to the texture
	};
	class JA_104th_Death_Helmet : ls_gar_phase2_helmet
	{
		author = "Fish";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		displayname = "Clone Trooper P2 Helmet (104th Death)";											  // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_P2_Death_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_Dragan_Helmet : ls_gar_phase2_helmet
	{
		author = "Fish";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		displayname = "Clone Trooper P2 Helmet (104th Dragan)";											   // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_P2_Dragan_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_Ed_Helmet : ls_gar_phase2_helmet
	{
		author = "Tundra";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		displayname = "Clone Trooper P2 Helmet (104th Ed)";											   // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_P2_Ed_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_Gravity_Helmet : ls_gar_phase2_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		displayname = "Clone Trooper Helmet (104th Gravity)";												// the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_P2_Gravity_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_Glitch_Helmet : ls_gar_phase2_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		displayname = "Clone Trooper Helmet (104th Glitch)";											   // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_P2_Glitch_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_Hound_Helmet : ls_gar_phase2_helmet
	{
		author = "Cyan";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		displayname = "Clone Trooper P2 Helmet (104th Hound)";											  // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_P2_Hound_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_Knightfall_Helmet : ls_gar_phase2_helmet
	{
		author = "Tundra";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		displayname = "Clone Trooper P2 Helmet (104th Knightfall)";											   // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_P2_Knightfall_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_Kyo_Helmet : ls_gar_phase2_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		displayname = "Clone Trooper P2 Helmet (104th Kyo)";											// the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_P2_Kyo_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_Mad_Helmet : ls_gar_phase2_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		displayname = "Clone Trooper P2 Helmet (104th Mad)";											// the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_P2_Mad_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_Mower_Helmet : ls_gar_phase2_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		displayname = "Clone Trooper P2 Helmet (104th Mower)";											  // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_P2_Mower_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_Paraso_Helmet : ls_gar_phase2_helmet
	{
		author = "Tundra";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		displayname = "Clone Trooper P2 Helmet (104th Paraso)";											   // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_P2_Paraso_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_Pretz_Helmet : ls_gar_phase2_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		displayname = "Clone Trooper P2 Helmet (104th Pretz)";											  // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_P2_Pretz_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_Pulse_Helmet : ls_gar_phase2_helmet
	{
		author = "Fish";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		displayname = "Clone Trooper P2 Helmet (104th Pulse)"; // the name it will be in game
		hiddenSelectionsTextures[] = {
			"Jangos_Infantry_Helmets\data\Textures\104th_P2_Pulse_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"
		}; // the file path to the texture
	};
	class JA_104th_Red_Helmet : ls_gar_phase2_helmet
	{
		author = "Cyan";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";
		displayname = "Clone Trooper P2 Helmet (104th Red)"; // the name it will be in game

		hiddenSelectionsTextures[] = {
			"Jangos_Infantry_Helmets\data\Textures\104th_P2_Red_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"
		}; // the file path to the texture
	};
	class JA_104th_Scurvy_Helmet : ls_gar_phase2_helmet
	{
		author = "Tundra";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		displayname = "Clone Trooper P2 Helmet (104th Scurvy)";											   // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_P2_Scurvy_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_Skav_Helmet : ls_gar_phase2_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		displayname = "Clone Trooper P2 Helmet (104th Skav)";											 // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_P2_Skav_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_Spirit_Helmet : ls_gar_phase2_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		displayname = "Clone Trooper P2 Helmet (104th Spirit)";											   // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_P2_Spirit_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_Irish_Helmet : ls_gar_phase2_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		displayname = "Clone Trooper P2 Helmet (104th Irish)";											  // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_P2_Irish_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_Knockout_Helmet : ls_gar_phase2_helmet
	{
		author = "Fish";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		displayname = "Clone Trooper P2 Helmet (104th Knockout)";											 // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_P2_Knockout_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_Talisman_Helmet : ls_gar_phase2_helmet
	{
		author = "Fish";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		displayname = "Clone Trooper P2 Helmet (104th Talisman)"; // the name it will be in game

		hiddenSelectionsTextures[] = {
			"Jangos_Infantry_Helmets\data\Textures\104th_P2_Talisman_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"
		}; // the file path to the texture
	};
	class JA_104th_Tiger_Helmet : ls_gar_phase2_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		displayname = "Clone Trooper P2 Helmet (104th Tiger)";											  // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_P2_Tiger_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_Tinkle_Helmet : ls_gar_phase2_helmet
	{
		author = "Fish";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		displayname = "Clone Trooper P2 Helmet (104th Tinkle)"; // the name it will be in game

		hiddenSelectionsTextures[] = {
			"Jangos_Infantry_Helmets\data\Textures\104th_P2_Tinkle_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"
		}; // the file path to the texture
	};
	class JA_104th_Test_Helmet : ls_gar_phase2_helmet
	{
		author = "Fish";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1", "visor"};																														  // don't change this
		displayname = "Clone Trooper P2 Helmet (104th Test)";																											  // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_P2_Test_Helmet.paa", "Jangos_Infantry_Helmets\data\Textures\104th_P2_Test_visor.paa"}; // the file path to the texture
		hiddenSelectionsMaterials[] =
			{
				"Jangos_Infantry_Helmets\data\Textures\JA_helmet.rvmat",
				"Jangos_Infantry_Helmets\data\Textures\JA_visor.rvmat"};
	};
	class JA_104th_Vertigo_Helmet : ls_gar_phase2_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		displayname = "Clone Trooper P2 Helmet (104th Vertigo)";											// the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_P2_Vertigo_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_Vegas_Helmet : ls_gar_phase2_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		displayname = "Clone Trooper P2 Helmet (104th Vegas)";											  // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_P2_Vegas_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"}; // the file path to the texture
	};
};