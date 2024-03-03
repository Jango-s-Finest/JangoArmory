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
			"JA_104th_Doc_Helmet",
			"JA_104th_Tiger_Helmet",
			"JA_104th_Spirit_Helmet",
			"JA_104th_Xan_Helmet",
			"JA_104th_Tinkle_Helmet",
			"JA_104th_Chills_Helmet",
			"JA_104th_Kyo_Helmet",
			"JA_104th_Galahad_Helmet",
			"JA_104th_Knockout_Helmet",
			"JA_104th_Death_Helmet"};
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
	class JA_104th_Doc_Helmet : SWLB_clone_P2_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};																	// don't change this
		displayname = "Clone Trooper P2 Helmet (104th Doc)";											// the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_P2_Doc_Helmet.paa"}; // the file path to the texture
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
	class JA_104th_Xan_Helmet : SWLB_P2_SpecOps_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};																	  // don't change this
		displayname = "Clone Trooper Special Activities Helmet (104th Xan)";							  // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Helmets\data\Textures\104th_JTAC_Xan_Helmet.paa"}; // the file path to the texture
	};
	class lsd_gar_tanker_nvg;
	class JA_104th_Death_NVG_Tanker : lsd_gar_tanker_nvg
	{
		author = "Fish";
		displayName = "Republic Armored Plating NVG (104th Death)";
		hiddenSelections[] =
			{
				"camo1"

			};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Infantry_Helmets\data\Textures\104th_P2_Death_NVG.paa"};
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
			"Jangos_Infantry_Helmets\data\Textures\104th_Helmet_P2_Tinkle.paa",
		}; // the file path to the texture
	};
	class JA_104th_Galahad_Helmet : SWLB_clone_BARC_helmet
	{
		author = "Fish";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {
			"camo1",
		};														   // don't change this
		displayname = "Clone Trooper Barc Helmet (104th Galahad)"; // the name it will be in game
		hiddenSelectionsMaterials[] = {};
		hiddenSelectionsTextures[] = {
			"Jangos_Infantry_Helmets\data\Textures\104th_BARC_Galahad.paa",
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
		hiddenSelectionsMaterials[] = {};
		hiddenSelectionsTextures[] = {
			"Jangos_Infantry_Helmets\data\Textures\104th_Chills_Helmet_P2.paa",
		}; // the file path to the texture
	};
	class ls_gar_engineer_helmet;
	class JA_104th_Knockout_Helmet : ls_gar_engineer_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {
			"camo1",
			"illum",
			"visor"};													// don't change this
		displayname = "Clone Trooper Engineer Helmet (104th Knockout)"; // the name it will be in game
		hiddenSelectionsMaterials[] = {};
		hiddenSelectionsTextures[] = {
			"Jangos_Infantry_Helmets\data\Textures\104th_CE_Knockout_Helmet.paa",
			"ls_armor_bluefor\helmet\gar\engineer\data\light_co.paa",
			"ls_armor_bluefor\helmet\gar\engineer\data\visor_co.paa"}; // the file path to the texture
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
		hiddenSelectionsMaterials[] = {};
		hiddenSelectionsTextures[] = {
			"Jangos_Infantry_Helmets\data\Textures\104th_P2_Carmine.paa",
		}; // the file path to the texture
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
			"Jangos_Infantry_Helmets\data\Textures\104th_P2_Pulse.paa",
		}; // the file path to the texture
	};
	class JA_104th_Reaper_Helmet : SWLB_clone_P2_helmet
	{
		author = "Fish";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {
			"camo1",
		};														// don't change this
		displayname = "Clone Trooper P2 Helmet (104th Reaper)"; // the name it will be in game
		hiddenSelectionsMaterials[] = {};
		hiddenSelectionsTextures[] = {
			"Jangos_Infantry_Helmets\data\Textures\104th_P2_Reaper.paa",
		}; // the file path to the texture
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
			"Jangos_Infantry_Helmets\data\Textures\104th_P2_Talisman.paa",
		}; // the file path to the texture
	};
};
