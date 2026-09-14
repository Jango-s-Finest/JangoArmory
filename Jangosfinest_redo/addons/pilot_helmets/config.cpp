#include "basicDefines_A3.hpp"
#include "\JA\jangos_Armory\addons\main\script_component.hpp"
class CfgPatches
{
	class ADDON
	{
		author = "Jango's Finest";
		requiredVersion = 0.1;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {
			"JA_104th_Base_Pilot_Helmet",
			"JA_104th_Bail_Pilot_Helmet",
			"JA_104th_Beef_Pilot_Helmet",
			"JA_104th_Haze_Pilot_Helmet",
			"JA_104th_Varelli_Pilot_Helmet",
			"JA_104th_OD_Pilot_Helmet",
			"JA_104th_Cherryy_Pilot_Helmet",
			"JA_104th_Hightower_Pilot_Helmet",
			"JA_104th_Fish_Pilot_Helmet",
			"JA_104th_Cherryy_Pilot_Helmet_P1",
			"JA_104th_ME_Pilot_Helmet_P1",
			"JA_104th_Duce_Pilot_Helmet_P1",
			"JA_104th_Fire_Pilot_Helmet_P1",
			"JA_104th_Dak_Pilot_Helmet_P1",
			"JA_104th_ME_Dak_Pilot_Helmet_P1",
			"JA_104th_Strawberry_Pilot_Helmet",
			"JA_104th_Boris_Pilot_Helmet",
			"JA_104th_Storm_Pilot_Helmet",
			"JA_104th_Spirit_Pilot_Helmet_P1"
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
	class ls_gar_phase2Pilot_helmet;
	class ls_gar_phase1Pilot_helmet;

	class JA_104th_Base_Pilot_Helmet : ls_gar_phase2Pilot_helmet
	{
		author = "Cherryy";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;

		displayname = "Clone Trooper Pilot Helmet (104th [1C] 01)";										  // the name it will be in game
		hiddenSelectionsTextures[] = {QPATHTOEF(pilot_helmets,data\textures\104th_P2_1C_Pilot_Helmet.paa),"\ls\core\addons\characters_clone_legacy\helmets\phase2Pilot\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_Bail_Pilot_Helmet : ls_gar_phase2Pilot_helmet
	{
		author = "Tundra";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;

		displayname = "Clone Trooper Pilot Helmet (104th Bail)";										 // the name it will be in game
		hiddenSelectionsTextures[] = {QPATHTOEF(pilot_helmets,data\textures\104th_Pilot_Bail_Helmet.paa),"\ls\core\addons\characters_clone_legacy\helmets\phase2Pilot\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_Beef_Pilot_Helmet : ls_gar_phase2Pilot_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		// don't change this
		displayname = "Clone Trooper Pilot Helmet (104th Beef)";										 // the name it will be in game
		hiddenSelectionsTextures[] = {QPATHTOEF(pilot_helmets,data\textures\104th_Pilot_Beef_Helmet.paa),"\ls\core\addons\characters_clone_legacy\helmets\phase2Pilot\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_Haze_Pilot_Helmet : ls_gar_phase2Pilot_helmet
	{
		author = "Tundra";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;

		displayname = "Clone Trooper Pilot Helmet (104th Haze)";										 // the name it will be in game
		hiddenSelectionsTextures[] = {QPATHTOEF(pilot_helmets,data\textures\104th_Pilot_Haze_Helmet.paa),"\ls\core\addons\characters_clone_legacy\helmets\phase2Pilot\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_Varelli_Pilot_Helmet : ls_gar_phase2Pilot_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;

		displayname = "Clone Trooper Pilot Helmet (104th Varelli)";											// the name it will be in game
		hiddenSelectionsTextures[] = {QPATHTOEF(pilot_helmets,data\textures\104th_Pilot_Varelli_Helmet.paa),"\ls\core\addons\characters_clone_legacy\helmets\phase2Pilot\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_OD_Pilot_Helmet : ls_gar_phase2Pilot_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;

		displayname = "Clone Trooper Pilot Helmet (104th OD)";										   // the name it will be in game
		hiddenSelectionsTextures[] = {QPATHTOEF(pilot_helmets,data\textures\104th_Pilot_OD_Helmet.paa),"\ls\core\addons\characters_clone_legacy\helmets\phase2Pilot\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_Cherryy_Pilot_Helmet : ls_gar_phase2Pilot_helmet
	{
		author = "Fish";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;

		displayname = "Clone Trooper Pilot Helmet (104th Cherryy)";											// the name it will be in game
		hiddenSelectionsTextures[] = {QPATHTOEF(pilot_helmets,data\textures\104th_Pilot_Cherryy_Helmet.paa),"\ls\core\addons\characters_clone_legacy\helmets\phase2Pilot\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_Hightower_Pilot_Helmet : ls_gar_phase2Pilot_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;

		displayname = "Clone Trooper Pilot Helmet (104th Hightower)";											 // the name it will be in game
		hiddenSelectionsTextures[] = {QPATHTOEF(pilot_helmets,data\textures\104th_Pilot_Hightower_P2_Helmet.paa),"\ls\core\addons\characters_clone_legacy\helmets\phase2Pilot\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_Fish_Pilot_Helmet : ls_gar_phase2Pilot_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;

		displayname = "Clone Trooper Pilot Helmet (104th Fish)";										 // the name it will be in game
		hiddenSelectionsTextures[] = {QPATHTOEF(pilot_helmets,data\textures\104th_Pilot_Fish_Helmet.paa),"\ls\core\addons\characters_clone_legacy\helmets\phase2Pilot\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_Cherryy_Pilot_Helmet_P1 : ls_gar_phase1Pilot_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		displayname = "Clone Trooper Pilot P1 Helmet (104th Cherryy)"; // the name it will be in game
		hiddenSelectionsTextures[] = {
			QPATHTOEF(pilot_helmets,data\textures\104th_P1_Cherryy_Helmet.paa),
			QPATHTOEF(pilot_helmets,data\textures\104th_P1_Cherryy_Lifesupport.paa),"\ls\core\addons\characters_clone_legacy\helmets\phase1Pilot\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_ME_Pilot_Helmet_P1 : ls_gar_phase1Pilot_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		displayname = "Clone Trooper Pilot P1 Helmet (104th MLV)"; // the name it will be in game
		hiddenSelectionsTextures[] = {
			QPATHTOEF(pilot_helmets,data\textures\104th_P1_Red_Pilot_Helmet.paa),
			QPATHTOEF(pilot_helmets,data\textures\104th_P1_Red_Pilot_Lifesupport.paa),"\ls\core\addons\characters_clone_legacy\helmets\phase1Pilot\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_Duce_Pilot_Helmet_P1 : ls_gar_phase1Pilot_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		displayname = "Clone Trooper Pilot P1 Helmet (104th Duce)"; // the name it will be in game
		hiddenSelectionsTextures[] = {
			QPATHTOEF(pilot_helmets,data\textures\104th_Pilot_Duce_Helmet.paa),
			QPATHTOEF(pilot_helmets,data\textures\104th_Pilot_Duce_Life_Support.paa),"\ls\core\addons\characters_clone_legacy\helmets\phase1Pilot\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_Fire_Pilot_Helmet_P1 : ls_gar_phase1Pilot_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		displayname = "Clone Trooper Pilot P1 Helmet (104th Fire)"; // the name it will be in game
		hiddenSelectionsMaterials[] = {"","","\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
		hiddenSelectionsTextures[] = {
			QPATHTOEF(pilot_helmets,data\textures\104th_Pilot_Fire_Helmet.paa),
			QPATHTOEF(pilot_helmets,data\textures\104th_Pilot_Fire_Life_Support.paa),"Jangos_Infantry_Helmets_2\data\textures\Bacta_camoP1_P2_co.paa"}; // the file path to the texture
	};
	class JA_104th_Dak_Pilot_Helmet_P1 : ls_gar_phase1Pilot_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		displayname = "Clone Trooper Pilot P1 Helmet (104th Dak)"; // the name it will be in game
		hiddenSelectionsMaterials[] = {"","","\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
		hiddenSelectionsTextures[] = {
			QPATHTOEF(pilot_helmets,data\textures\104th_Pilot_Dak_P1_Helmet.paa),
			QPATHTOEF(pilot_helmets,data\textures\104th_Pilot_Dak_P1_Life_Support.paa),"Jangos_Infantry_Helmets_2\data\textures\Bacta_camoP1_P2_co.paa"}; // the file path to the texture
	};
	class JA_104th_ME_Dak_Pilot_Helmet_P1 : ls_gar_phase1Pilot_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		displayname = "Clone Trooper Pilot P1 Helmet (104th Dak MLV)"; // the name it will be in game
		hiddenSelectionsTextures[] = {
			QPATHTOEF(pilot_helmets,data\textures\104th_Pilot_Dak_Mlv_Helmet.paa),
			QPATHTOEF(pilot_helmets,data\textures\104th_Pilot_Dak_Mlv_Life_Support.paa),"\ls\core\addons\characters_clone_legacy\helmets\phase1Pilot\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_Strawberry_Pilot_Helmet : ls_gar_phase2Pilot_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;

		displayname = "Clone Trooper Pilot Helmet (104th Strawberry)";										 // the name it will be in game
		hiddenSelectionsTextures[] = {QPATHTOEF(pilot_helmets,data\textures\104_P2_Strawberry_Pilot_Helmet.paa),"\ls\core\addons\characters_clone_legacy\helmets\phase2Pilot\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_Boris_Pilot_Helmet : ls_gar_phase2Pilot_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;

		displayname = "Clone Trooper Pilot Helmet (104th Boris)";										 // the name it will be in game
		hiddenSelectionsTextures[] = {QPATHTOEF(pilot_helmets,data\textures\104th_P2_Boris_Pilot_Helmet.paa),"\ls\core\addons\characters_clone_legacy\helmets\phase2Pilot\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_Storm_Pilot_Helmet : ls_gar_phase2Pilot_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;

		displayname = "Clone Trooper Pilot Helmet (104th Storm)";										 // the name it will be in game
		hiddenSelectionsTextures[] = {QPATHTOEF(pilot_helmets,data\textures\104th_P2_Storm_Pilot_Helmet.paa),"\ls\core\addons\characters_clone_legacy\helmets\phase2Pilot\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_Spirit_Pilot_Helmet_P1 : ls_gar_phase1Pilot_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		displayname = "Clone Trooper Pilot P1 Helmet (104th Spirit)"; // the name it will be in game
		hiddenSelectionsMaterials[] = {"","","\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
		hiddenSelectionsTextures[] = {
			QPATHTOEF(pilot_helmets,data\textures\104th_Pilot_Spirit_Pilot_P1_Helmet.paa),
			QPATHTOEF(pilot_helmets,data\textures\104th_Pilot_Spirit_Pilot_Life_Support.paa),"Jangos_Infantry_Helmets_2\data\textures\Bacta_camoP1_P2_co.paa"}; // the file path to the texture
	};
};
