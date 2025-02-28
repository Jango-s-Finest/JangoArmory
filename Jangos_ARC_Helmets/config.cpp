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

	class JA_104th_Angel_Helmet : SWLB_clone_P15_Helmet
	{
		author = "Ice";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";									
		displayname = "Clone Trooper ARC Trooper Helmet (104th Angel)";						  // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_ARC_Helmets\data\textures\104th_ARC_Angel_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Crowbi_Helmet : SWLB_clone_P15_Helmet
	{
		author = "Ice";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";									
		displayname = "Clone Trooper ARC Trooper Helmet (104th Crowbi)";						  // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_ARC_Helmets\data\textures\104th_ARC_Crowbi_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Drifter_Helmet : SWLB_clone_P15_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";													
		displayname = "Clone Trooper ARC Trooper Helmet (104th Drifter)";								  // the name it will be in game
		subItems[] = {"OPTRE_Glasses_Visor"};
		optreHUDStyle = "ODST_1";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelectionsTextures[] = {"Jangos_ARC_Helmets\data\textures\104th_ARC_Drifter_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Frosty_Helmet : SWLB_clone_P15_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";													
		displayname = "Clone Trooper ARC Trooper Helmet (104th Frosty)";								  // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_ARC_Helmets\data\textures\104th_ARC_Frosty_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Hunter_Helmet : SWLB_clone_P15_Helmet
	{
		author = "Tundra";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = "true";
		displayname = "Clone Trooper ARC Trooper Helmet (104th Hunter)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "Jangos_ARC_Helmets\data\textures\104th_ARC_Hunter_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_Loner_Helmet : SWLB_clone_P15_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";											
		displayname = "Clone Trooper ARC Trooper Helmet (104th Loner)";							 // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_ARC_Helmets\data\textures\104th_ARC_Loner_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Spectre_Helmet : SWLB_clone_P15_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";												
		displayname = "Clone Trooper ARC Trooper Helmet (104th Spectre)";								// the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_ARC_Helmets\data\textures\104th_ARC_Spectre_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Sigil_Helmet : SWLB_clone_P15_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";													
		displayname = "Clone Trooper ARC Trooper Helmet (104th Sigil)";							 // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_ARC_Helmets\data\textures\104th_ARC_Sigil_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Vision_Helmet : SWLB_clone_P15_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";													
		displayname = "Clone Trooper ARC Trooper Helmet (104th Vision)";								  // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_ARC_Helmets\data\textures\104th_ARC_Vision_Helmet.paa"}; // the file path to the texture
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
