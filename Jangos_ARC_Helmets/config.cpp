#include "basicDefines_A3.hpp"
class DefaultEventhandlers;
class UniformSlotInfo;
class CfgPatches
{
	class Jangos_Armory_ARC_Helmets
	{
		author = "Jango's Finest";
		requiredVersion = 0.1;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {
			"JA_104th_Angel_Helmet",
			"JA_104th_Sigil_Helmet",
			"JA_104th_Crowbi_Helmet",
			"JA_104th_Drifter_Helmet",
			"JA_104th_Frosty_Helmet",
			"JA_104th_Hunter_Helmet",
			"JA_104th_Loner_Helmet",
			"JA_104th_Vision_Helmet",
			"JA_104th_Spectre_Helmet"

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

	class JA_104th_Angel_Helmet : ls_gar_arc_helmet
	{
		author = "Ice";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";
		displayname = "Clone Trooper ARC Trooper Helmet (104th Angel)";								  // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_ARC_Helmets\data\textures\104th_ARC_Angel_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\arc\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\arc\data\helmet_co.paa"}; // the file path to the texture
	};
	class JA_104th_Crowbi_Helmet : ls_gar_arc_helmet
	{
		author = "Ice";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";
		displayname = "Clone Trooper ARC Trooper Helmet (104th Crowbi)";							   // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_ARC_Helmets\data\textures\104th_ARC_Crowbi_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\arc\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\arc\data\helmet_co.paa"}; // the file path to the texture
	};
	class JA_104th_Drifter_Helmet : ls_gar_arc_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";
		displayname = "Clone Trooper ARC Trooper Helmet (104th Drifter)"; // the name it will be in game
		subItems[] = {"OPTRE_Glasses_Visor"};
		optreHUDStyle = "ODST_1";
		optreVarietys[] = {"_dp", "_dp", "_dp"};
		hiddenSelectionsTextures[] = {"Jangos_ARC_Helmets\data\textures\104th_ARC_Drifter_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\arc\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\arc\data\helmet_co.paa"}; // the file path to the texture
	};
	class JA_104th_Frosty_Helmet : ls_gar_arc_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";
		displayname = "Clone Trooper ARC Trooper Helmet (104th Frosty)";							   // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_ARC_Helmets\data\textures\104th_ARC_Frosty_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\arc\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\arc\data\helmet_co.paa"}; // the file path to the texture
	};
	class JA_104th_Hunter_Helmet : ls_gar_arc_helmet
	{
		author = "Tundra";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";
		displayname = "Clone Trooper ARC Trooper Helmet (104th Hunter)";							   // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_ARC_Helmets\data\textures\104th_ARC_Hunter_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\arc\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\arc\data\helmet_co.paa"}; // the file path to the texture
	};
	class JA_104th_Loner_Helmet : ls_gar_arc_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";
		displayname = "Clone Trooper ARC Trooper Helmet (104th Loner)";								  // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_ARC_Helmets\data\textures\104th_ARC_Loner_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\arc\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\arc\data\helmet_co.paa"}; // the file path to the texture
	};
	class JA_104th_Spectre_Helmet : ls_gar_arc_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";
		displayname = "Clone Trooper ARC Trooper Helmet (104th Spectre)";								// the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_ARC_Helmets\data\textures\104th_ARC_Spectre_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\arc\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\arc\data\helmet_co.paa"}; // the file path to the texture
	};
	class JA_104th_Sigil_Helmet : ls_gar_arc_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";
		displayname = "Clone Trooper ARC Trooper Helmet (104th Sigil)";								  // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_ARC_Helmets\data\textures\104th_ARC_Sigil_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\arc\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\arc\data\helmet_co.paa"}; // the file path to the texture
	};
	class JA_104th_Vision_Helmet : ls_gar_arc_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";
		displayname = "Clone Trooper ARC Trooper Helmet (104th Vision)";							   // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_ARC_Helmets\data\textures\104th_ARC_Vision_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\arc\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\arc\data\helmet_co.paa"}; // the file path to the texture
	};
};

class CfgVehicles
{
	class lsd_gar_phase2_base;
	class ls_gar_marshalCommander_base;
	class ls_gar_standart_backpack;
	class ls_gar_rto_mini_backpack;
	class ls_gar_heavy_backpack;
	class ls_gar_medic_backpack;
	class ls_gar_Radio_backpack;
	class JLTS_Clone_jumppack;
	class JA_104th_Jumppack_JT12;
	class JA_104th_Jumppack_JT12_LR;
	// General Uniforms
};
