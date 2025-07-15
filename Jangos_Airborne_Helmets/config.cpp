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
		weapons[] = {
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
			"JA_104th_Skav_AB_Helmet",
			"JA_104th_Magnum_Helmet",
			"JA_104th_Scrub_Helmet",
			"JA_104th_Sixes_Helmet",
			"JA_104th_Bulky_Helmet",
			"JA_104th_Cyan_Helmet",
			"JA_104th_Azure_Helmet",
			"JA_104th_Kage_Helmet",
			"104th_Kaleck_Helmet",
			"JA_104th_Soul_Helmet",
			"JA_104th_Trustful_Helmet",
			"JA_104th_Stache_Helmet"};
		units[] = {};
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
	class ls_gar_airborne_helmet;
	class ls_sob_phase2SpecOp_helmet;
	class ls_gar_phase1_helmet;

	class JA_104th_Kaleck_Helmet : ls_sob_phase2SpecOp_helmet
	{
		author = "Fish";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		// don't change this
		displayname = "Clone Trooper P2 Special Activities Helmet (104th Kaleck)"; // the name it will be in game
		visionMode[] = {"Normal", "NVG", "TI"};
		thermalMode[] = {0, 1};
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Helmets\data\Textures\104th_JTAC_Kaleck_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2SpecOp\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_Doc_Helmet : ls_gar_phase1_helmet
    {
        author = "Dak";
        scopeArsenal = 2;
        side = 1;
        grad_slingHelmet_allow = "true";
        displayname = "Clone Trooper P1 Helmet (104th Doc)";                                            // the name it will be in game
        hiddenSelectionsTextures[] = {"Jangos_Airborne_Helmets\data\Textures\104th_AB_Doc_Helmet_P1.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\illum_co.paa"}; // the file path to the texture
		visionMode[] = {"Normal"};
    };
	class JA_104th_AB_Red_Helmet : ls_gar_airborne_helmet
	{
		author = "Tundra";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		// don't change this
		displayname = "Clone Trooper AB Helmet (104th Red)"; // the name it will be in game
		visionMode[] = {"Normal", "NVG", "TI"};
		thermalMode[] = {0, 1};
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Helmets\data\Textures\104th_AB_Red_Helmet.paa","Jangos_Airborne_Helmets\data\Textures\104th_AB_Red_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_AB_Habit_Helmet : ls_gar_airborne_helmet
	{
		author = "Tundra";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		// don't change this
		displayname = "Clone Trooper AB Helmet (104th Habit)"; // the name it will be in game
		visionMode[] = {"Normal", "NVG", "TI"};
		thermalMode[] = {0, 1};
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Helmets\data\Textures\104th_AB_Habit_Helmet.paa","Jangos_Airborne_Helmets\data\Textures\104th_AB_Habit_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Ratchet_Helmet : ls_gar_airborne_helmet
	{
		author = "Tundra";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		// don't change this
		displayname = "Clone Trooper AB Helmet (104th Ratchet)"; // the name it will be in game
		visionMode[] = {"Normal", "NVG", "TI"};
		thermalMode[] = {0, 1};
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Helmets\data\Textures\104th_AB_Ratchet_Helmet.paa","Jangos_Airborne_Helmets\data\Textures\104th_AB_Ratchet_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_AB_Base_Helmet : ls_gar_airborne_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		// don't change this
		displayname = "Clone Trooper AB Helmet (Base)"; // the name it will be in game
		visionMode[] = {"Normal", "NVG", "TI"};
		thermalMode[] = {0, 1};
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Helmets\data\Textures\104th_AB_Base_Helmet.paa","Jangos_Airborne_Helmets\data\Textures\104th_AB_Base_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_AB_Medic_Helmet : ls_gar_airborne_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		// don't change this
		displayname = "Clone Trooper AB Helmet (Medic)"; // the name it will be in game
		visionMode[] = {"Normal", "NVG", "TI"};
		thermalMode[] = {0, 1};
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Helmets\data\Textures\104th_AB_Medic_Helmet.paa","Jangos_Airborne_Helmets\data\Textures\104th_AB_Medic_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Raptor_Helmet : ls_gar_airborne_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		// don't change this
		displayname = "Clone Trooper AB Helmet (104th Raptor)"; // the name it will be in game
		visionMode[] = {"Normal", "NVG", "TI"};
		thermalMode[] = {0, 1};
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Helmets\data\Textures\104th_AB_Raptor_Helmet.paa","Jangos_Airborne_Helmets\data\Textures\104th_AB_Raptor_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Scrub_Helmet : ls_gar_airborne_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		// don't change this
		displayname = "Clone Trooper AB Helmet (104th Scrub)"; // the name it will be in game
		visionMode[] = {"Normal", "NVG", "TI"};
		thermalMode[] = {0, 1};
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Helmets\data\Textures\104th_AB_Scrub_Helmet.paa","Jangos_Airborne_Helmets\data\Textures\104th_AB_Scrub_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Sentinel_Helmet : ls_gar_airborne_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		// don't change this
		displayname = "Clone Trooper AB Helmet (104th Sentinel)"; // the name it will be in game
		visionMode[] = {"Normal", "NVG", "TI"};
		thermalMode[] = {0, 1};
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Helmets\data\Textures\104th_AB_Sentinel_Helmet.paa","Jangos_Airborne_Helmets\data\Textures\104th_AB_Sentinel_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Dak_Helmet : ls_gar_airborne_helmet
	{
		author = "Tundra";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		// don't change this
		displayname = "Clone Trooper AB Helmet (104th Dak)"; // the name it will be in game
		visionMode[] = {"Normal", "NVG", "TI"};
		thermalMode[] = {0, 1};
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Helmets\data\Textures\104th_AB_Dak_Helmet.paa","Jangos_Airborne_Helmets\data\Textures\104th_AB_Dak_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Clutch_Helmet : ls_gar_airborne_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		// don't change this
		displayname = "Clone Trooper AB Helmet (104th Clutch)"; // the name it will be in game
		visionMode[] = {"Normal", "NVG", "TI"};
		thermalMode[] = {0, 1};
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Helmets\data\Textures\104th_AB_Clutch_Helmet.paa","Jangos_Airborne_Helmets\data\Textures\104th_AB_Clutch_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Garm_Helmet : ls_gar_airborne_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		// don't change this
		displayname = "Clone Trooper AB Helmet (104th Garm)"; // the name it will be in game
		visionMode[] = {"Normal", "NVG", "TI"};
		thermalMode[] = {0, 1};
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Helmets\data\Textures\104th_AB_Garm_Helmet.paa","Jangos_Airborne_Helmets\data\Textures\104th_AB_Garm_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Axel_Helmet : ls_gar_airborne_helmet
	{
		author = "Ice";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		// don't change this
		displayname = "Clone Trooper AB Helmet (104th Axel)"; // the name it will be in game
		visionMode[] = {"Normal", "NVG", "TI"};
		thermalMode[] = {0, 1};
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Helmets\data\Textures\104th_AB_Axel_Helmet.paa","Jangos_Airborne_Helmets\data\Textures\104th_AB_Axel_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Osiris_Helmet : ls_gar_airborne_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		// don't change this
		displayname = "Clone Trooper AB Helmet (104th Osiris)"; // the name it will be in game
		visionMode[] = {"Normal", "NVG", "TI"};
		thermalMode[] = {0, 1};
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Helmets\data\Textures\104th_AB_Osiris_Helmet.paa","Jangos_Airborne_Helmets\data\Textures\104th_AB_Osiris_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Skav_AB_Helmet : ls_gar_airborne_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		// don't change this
		displayname = "Clone Trooper AB Helmet (104th Skav)"; // the name it will be in game
		visionMode[] = {"Normal", "NVG", "TI"};
		thermalMode[] = {0, 1};
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Helmets\data\Textures\104th_AB_Skav_Helmet.paa","Jangos_Airborne_Helmets\data\Textures\104th_AB_Skav_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Magnum_Helmet : ls_gar_airborne_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		// don't change this
		displayname = "Clone Trooper AB Helmet (104th Magnum)"; // the name it will be in game
		visionMode[] = {"Normal"};
		subItems[] = {""};
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Helmets\data\Textures\104th_AB_Magnum_Helmet.paa","Jangos_Airborne_Helmets\data\Textures\104th_AB_Magnum_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Sixes_Helmet : ls_gar_airborne_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		// don't change this
		displayname = "Clone Trooper AB Helmet (104th Sixes)"; // the name it will be in game
		visionMode[] = {"Normal", "NVG", "TI"};
		thermalMode[] = {0, 1};
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Helmets\data\Textures\104th_AB_Sixes_Helmet.paa","Jangos_Airborne_Helmets\data\Textures\104th_AB_Sixes_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Cyan_Helmet : ls_gar_airborne_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		// don't change this
		displayname = "Clone Trooper AB Helmet (104th Cyan)"; // the name it will be in game
		visionMode[] = {"Normal", "NVG", "TI"};
		thermalMode[] = {0, 1};
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Helmets\data\Textures\104th_AB_Cyan_Helmet.paa","Jangos_Airborne_Helmets\data\Textures\104th_AB_Cyan_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Ceasar_Helmet : ls_gar_airborne_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		// don't change this
		displayname = "Clone Trooper AB Helmet (104th Ceasar)"; // the name it will be in game
		visionMode[] = {"Normal", "NVG", "TI"};
		thermalMode[] = {0, 1};
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Helmets\data\Textures\104th_AB_Ceasar_Helmet.paa","Jangos_Airborne_Helmets\data\Textures\104th_AB_Ceasar_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Azure_Helmet : ls_gar_airborne_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		// don't change this
		displayname = "Clone Trooper AB Helmet (104th Azure)"; // the name it will be in game
		visionMode[] = {"Normal", "NVG", "TI"};
		thermalMode[] = {0, 1};
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Helmets\data\Textures\104th_AB_Azure_Helmet.paa","Jangos_Airborne_Helmets\data\Textures\104th_AB_Azure_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Kage_Helmet : ls_gar_airborne_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		// don't change this
		displayname = "Clone Trooper AB Helmet (104th Kage)"; // the name it will be in game
		visionMode[] = {"Normal", "NVG", "TI"};
		thermalMode[] = {0, 1};
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Helmets\data\Textures\104th_AB_Kage_Helmet.paa","Jangos_Airborne_Helmets\data\Textures\104th_AB_Kage_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_AB_Kaleck_Helmet : ls_gar_airborne_helmet
	{
		author = "Fish";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		// don't change this
		displayname = "Clone Trooper AB Helmet (104th Kaleck)"; // the name it will be in game
		visionMode[] = {"Normal", "NVG", "TI"};
		thermalMode[] = {0, 1};
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Helmets\data\Textures\104th_AB_Kaleck_Helmet.paa","Jangos_Airborne_Helmets\data\Textures\104th_AB_Kaleck_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_AB_Soul_Helmet : ls_gar_airborne_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		// don't change this
		displayname = "Clone Trooper AB Helmet (104th Soul)"; // the name it will be in game
		visionMode[] = {"Normal", "NVG", "TI"};
		thermalMode[] = {0, 1};
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Helmets\data\Textures\104th_AB_Soul_Helmet.paa","Jangos_Airborne_Helmets\data\Textures\104th_AB_Soul_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Trustful_Helmet : ls_gar_airborne_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		// don't change this
		displayname = "Clone Trooper AB Helmet (104th Trustful)"; // the name it will be in game
		visionMode[] = {"Normal", "NVG", "TI"};
		thermalMode[] = {0, 1};
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Helmets\data\Textures\104th_AB_Trustful_Helmet.paa","Jangos_Airborne_Helmets\data\Textures\104th_AB_Trustful_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Stache_Helmet : ls_gar_airborne_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		// don't change this
		displayname = "Clone Trooper AB Helmet (104th Stache)"; // the name it will be in game
		visionMode[] = {"Normal", "NVG", "TI"};
		thermalMode[] = {0, 1};
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Helmets\data\Textures\104th_AB_Stache_Helmet.paa","Jangos_Airborne_Helmets\data\Textures\104th_AB_Stache_Helmet.paa"}; // the file path to the texture
	};
};