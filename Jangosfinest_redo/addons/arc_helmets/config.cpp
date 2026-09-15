#include "\JA\jangos_Armory\addons\main\script_component.hpp"
#include "basicDefines_A3.hpp"
class CfgPatches
{
	class Jangos_Armory_ARC
	{
		author = "Jango's Finest";
		requiredVersion = 0.1;
		requiredAddons[] = {};
		units[] += {};
		weapons[] += {
			"JA_104th_Angel_Helmet_old",
			"JA_104th_Crowbi_Helmet",
			"JA_104th_Drifter_Helmet",
			"JA_104th_Frosty_Helmet",
			"JA_104th_Hunter_Helmet",
			"JA_104th_Loner_Helmet",
			"JA_104th_Spectre_Helmet_old",
			"JA_104th_Sigil_Helmet",
			"JA_104th_Vision_Helmet",
			"JA_104th_Ceasar_Helmet",
			"JA_104th_Vegas_Helmet",
			"JA_104th_Osiris_Helmet_old_arc",
			"JA_104th_Kaleck_Helmet"
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
	class ls_gar_arc_helmet;

	class JA_104th_Angel_Helmet_old : ls_gar_arc_helmet
	{
		author = "Ice";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";
		displayname = "Clone Trooper ARC Trooper Helmet (104th Angel)";								  // the name it will be in game
		hiddenSelectionsTextures[] = {QPATHTOEF(arc_helmets,data\textures\104th_ARC_Angel_Helmet.paa),"\ls\core\addons\characters_clone_legacy\helmets\arc\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\arc\data\helmet_co.paa"}; // the file path to the texture
	};
	class JA_104th_Crowbi_Helmet : ls_gar_arc_helmet
	{
		author = "Ice";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";
		displayname = "Clone Trooper ARC Trooper Helmet (104th Crowbi)";							   // the name it will be in game
		hiddenSelectionsTextures[] = {QPATHTOEF(arc_helmets,data\textures\104th_ARC_Crowbi_Helmet.paa),"\ls\core\addons\characters_clone_legacy\helmets\arc\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\arc\data\helmet_co.paa"}; // the file path to the texture
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
		hiddenSelectionsTextures[] = {QPATHTOEF(arc_helmets,data\textures\104th_ARC_Drifter_Helmet.paa),"\ls\core\addons\characters_clone_legacy\helmets\arc\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\arc\data\helmet_co.paa"}; // the file path to the texture
	};
	class JA_104th_Frosty_Helmet : ls_gar_arc_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";
		displayname = "Clone Trooper ARC Trooper Helmet (104th Frosty)";							   // the name it will be in game
		hiddenSelectionsTextures[] = {QPATHTOEF(arc_helmets,data\textures\104th_ARC_Frosty_Helmet.paa),"\ls\core\addons\characters_clone_legacy\helmets\arc\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\arc\data\helmet_co.paa"}; // the file path to the texture
	};
	class JA_104th_Hunter_Helmet : ls_gar_arc_helmet
	{
		author = "Tundra";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";
		displayname = "Clone Trooper ARC Trooper Helmet (104th Hunter)";							   // the name it will be in game
		hiddenSelectionsTextures[] = {QPATHTOEF(arc_helmets,data\textures\104th_ARC_Hunter_Helmet.paa),"\ls\core\addons\characters_clone_legacy\helmets\arc\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\arc\data\helmet_co.paa"}; // the file path to the texture
	};
	class JA_104th_Loner_Helmet : ls_gar_arc_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";
		displayname = "Clone Trooper ARC Trooper Helmet (104th Loner)";								  // the name it will be in game
		hiddenSelectionsTextures[] = {QPATHTOEF(arc_helmets,data\textures\104th_ARC_Loner_Helmet.paa),"\ls\core\addons\characters_clone_legacy\helmets\arc\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\arc\data\helmet_co.paa"}; // the file path to the texture
	};
	class JA_104th_Spectre_Helmet_old : ls_gar_arc_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";
		displayname = "Clone Trooper ARC Trooper Helmet (104th Spectre)";								// the name it will be in game
		hiddenSelectionsTextures[] = {QPATHTOEF(arc_helmets,data\textures\104th_ARC_Spectre_Helmet.paa),"\ls\core\addons\characters_clone_legacy\helmets\arc\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\arc\data\helmet_co.paa"}; // the file path to the texture
	};
	class JA_104th_Sigil_Helmet : ls_gar_arc_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";
		displayname = "Clone Trooper ARC Trooper Helmet (104th Sigil)";								  // the name it will be in game
		hiddenSelectionsTextures[] = {QPATHTOEF(arc_helmets,data\textures\104th_ARC_Sigil_Helmet.paa),"\ls\core\addons\characters_clone_legacy\helmets\arc\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\arc\data\helmet_co.paa"}; // the file path to the texture
	};
	// class JA_104th_Vision_Helmet_1 : ls_gar_arc_helmet
	// {
	// 	author = "Dak";
	// 	scopeArsenal = 2;
	// 	side = 1;
	// 	grad_slingHelmet_allow = "true";
	// 	displayname = "Clone Trooper ARC Trooper Helmet (104th Vision)";							   // the name it will be in game
	// 	hiddenSelectionsMaterials[] = {"","\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat","\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
	// 	hiddenSelectionsTextures[] = {QPATHTOEF(arc_helmets,data\textures\104th_ARC_Vision_Helmet.paa),QPATHTOEF(infantry_helmets_2,data\textures\Bacta_camoP1_P2_co.paa),"\ls\core\addons\characters_clone_legacy\helmets\arc\data\helmet_co.paa"}; // the file path to the texture
	// };
	// class JA_104th_Ceasar_Helmet_1 : ls_gar_arc_helmet
	// {
	// 	author = "Dak";
	// 	scopeArsenal = 2;
	// 	side = 1;
	// 	grad_slingHelmet_allow = "true";
	// 	displayname = "Clone Trooper ARC Trooper Helmet (104th Ceasar)";							   // the name it will be in game
	// 	hiddenSelectionsMaterials[] = {"","\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat","\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
	// 	hiddenSelectionsTextures[] = {QPATHTOEF(arc_helmets,data\textures\104th_ARC_Ceasar_Helmet.paa),QPATHTOEF(infantry_helmets_2,data\textures\Bacta_camoP1_P2_co.paa),"\ls\core\addons\characters_clone_legacy\helmets\arc\data\helmet_co.paa"}; // the file path to the texture
	// };
	class JA_104th_Vision_Helmet : ls_gar_arc_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";
		displayname = "Clone Trooper ARC Trooper Helmet (104th Vision)";							   // the name it will be in game
		hiddenSelectionsTextures[] = {QPATHTOEF(arc_helmets,data\textures\104th_ARC_Vision_Helmet.paa),"\ls\core\addons\characters_clone_legacy\helmets\arc\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\arc\data\helmet_co.paa"}; // the file path to the texture
	};
	class JA_104th_Ceasar_Helmet : ls_gar_arc_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";
		displayname = "Clone Trooper ARC Trooper Helmet (104th Ceasar)";							   // the name it will be in game
		hiddenSelectionsTextures[] = {QPATHTOEF(arc_helmets,data\textures\104th_ARC_Ceasar_Helmet.paa),"\ls\core\addons\characters_clone_legacy\helmets\arc\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\arc\data\helmet_co.paa"}; // the file path to the texture
	};
	// class JA_104th_Ceasar_Helmet_2 : ls_gar_arc_helmet
	// {
	// 	author = "Dak";
	// 	scopeArsenal = 2;
	// 	side = 1;
	// 	grad_slingHelmet_allow = "true";
	// 	displayname = "Clone Trooper ARC Trooper Helmet (104th Ceasar)";							   // the name it will be in game
	// 	hiddenSelectionsMaterials[] = {"","\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat","\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
	// 	hiddenSelectionsTextures[] = {QPATHTOEF(arc_helmets,data\textures\104th_ARC_Ceasar_Helmet.paa),QPATHTOEF(infantry_helmets_2,data\textures\cezarvisor.paa),"\ls\core\addons\characters_clone_legacy\helmets\arc\data\helmet_co.paa"}; // the file path to the texture
	// };
	class JA_104th_Vegas_Helmet : ls_gar_arc_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";
		displayname = "Clone Trooper ARC Trooper Helmet (104th Vegas)";							   // the name it will be in game
		hiddenSelectionsTextures[] = {QPATHTOEF(arc_helmets,data\textures\104th_ARC_Vegas_Helmet.paa),"\ls\core\addons\characters_clone_legacy\helmets\arc\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\arc\data\helmet_co.paa"}; // the file path to the texture
	};
	class JA_104th_Osiris_Helmet_old_arc : ls_gar_arc_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";
		displayname = "Clone Trooper ARC Trooper Helmet (104th Osiris)";							   // the name it will be in game
		hiddenSelectionsTextures[] = {QPATHTOEF(arc_helmets,data\textures\104th_ARC_Osiris_Helmet.paa),"\ls\core\addons\characters_clone_legacy\helmets\arc\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\arc\data\helmet_co.paa"}; // the file path to the texture
	};
	class JA_104th_Kaleck_Helmet : ls_gar_arc_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";
		displayname = "Clone Trooper ARC Trooper Helmet (104th Kaleck)";							   // the name it will be in game
		hiddenSelectionsTextures[] = {QPATHTOEF(arc_helmets,data\textures\104th_ARC_Kaleck_Helmet.paa),"\ls\core\addons\characters_clone_legacy\helmets\arc\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\arc\data\helmet_co.paa"}; // the file path to the texture
	};
};

class CfgVehicles
{
	// General Uniforms
};
