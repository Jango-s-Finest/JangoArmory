#include "basicDefines_A3.hpp"
class DefaultEventhandlers;
class UniformSlotInfo;
class CfgPatches
{
	class Jangos_Armory_Infantry_Helmets_2
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
			"JA_104th_Gravity_Helmet_old",
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
			"Jangos_Infantry_Helmets_2\data\Textures\104th_P2_Dart_Helmet.paa",
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
		displayname = "Clone Trooper Engineer Helmet (104th Axel)"; // the name it will be in game
		hiddenSelectionsTextures[] = {
			"Jangos_Infantry_Helmets_2\data\Textures\104th_Engi_Archibold_Helmet.paa",
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
			"Jangos_Infantry_Helmets_2\data\Textures\104th_CE_Reaper_Helmet.paa",
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
			"Jangos_Infantry_Helmets_2\data\Textures\104th_P2_Walker_Helmet.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\engineer\data\light_co.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\engineer\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_Poet_Helmet : ls_gar_engineer_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {
			"camo1",
			"illum",
			"visor"};												  // don't change this
		displayname = "Clone Trooper Engineer Helmet (104th Poet)"; // the name it will be in game
		hiddenSelectionsTextures[] = {
			"Jangos_Infantry_Helmets_2\data\Textures\104th_Poet_Helmet_Engineer.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\engineer\data\light_co.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\engineer\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_Boris_Helmet : ls_gar_phase1_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		displayname = "Clone Trooper P1 Helmet (104th Boris)";											 // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets_2\data\Textures\104th_P1_Boris_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\illum_co.paa"}; // the file path to the texture
	};
	class JA_104th_Boombox_Helmet : ls_gar_phase2_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";
		displayname = "Clone Trooper P2 Helmet (104th Boombox)";											   // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets_2\data\Textures\104th_P2_Boombox_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_Sobek_Helmet : ls_sob_phase2SpecOp_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		displayname = "Clone Trooper P2 Special Activities Helmet (104th Sobek)";							  // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets_2\data\Textures\104th_P2_Sobek_SpecOps_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2SpecOp\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_Rust_Helmet : ls_sob_phase2SpecOp_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		displayname = "Clone Trooper P2 Special Activities Helmet (104th Rust)";							  // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets_2\data\Textures\104th_P2_Rust_SpecOps_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2SpecOp\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_Patch_Helmet : ls_gar_phase1_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		displayname = "Clone Trooper P1 Helmet (104th Patch)";											 // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets_2\data\Textures\104th_P1_Patch_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\illum_co.paa"}; // the file path to the texture
	};
	class JA_104th_Aloo_Helmet : ls_gar_phase2_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";
		displayname = "Clone Trooper P2 Helmet (104th Aloo)";											   // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets_2\data\Textures\104th_P2_Aloo_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_Rookie_Helmet : ls_gar_phase2_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";
		displayname = "Clone Trooper P2 Helmet (104th Rookie)";											   // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets_2\data\Textures\104th_P2_Rookie_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_Chaser_Helmet : ls_gar_phase2_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";
		displayname = "Clone Trooper P2 Helmet (104th Chaser)";											   // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets_2\data\Textures\104th_P2_Chaser_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_Dash_Helmet : ls_gar_phase2_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";
		displayname = "Clone Trooper P2 Helmet (104th Dash)";											   // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets_2\data\Textures\104th_P2_Dash_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_Six_Helmet : ls_gar_phase2_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";
		displayname = "Clone Trooper P2 Helmet (104th Six)";											   // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets_2\data\Textures\104th_P2_Six_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"}; // the file path to the texture
	};
};