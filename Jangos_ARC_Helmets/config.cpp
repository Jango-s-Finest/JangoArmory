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
	class ItemInfo;
	class SWLB_clone_P15_Helmet;
	class HeadgearItem;

	class JA_104th_Clone_P15_Helmet : SWLB_clone_P15_Helmet
	{
		class ItemInfo : HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 40;
					explosionShielding  = 20;
					passThrough = 0.3;
				};
			};
		};
	};

	class JA_104th_Angel_Helmet : JA_104th_Clone_P15_Helmet
	{
		author = "Ice";
		scope = 2;
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";									
		displayname = "Clone Trooper ARC Trooper Helmet (104th Angel)";						  // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_ARC_Helmets\data\textures\104th_ARC_Angel_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Crowbi_Helmet : JA_104th_Clone_P15_Helmet
	{
		author = "Ice";
		scope = 2;
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";									
		displayname = "Clone Trooper ARC Trooper Helmet (104th Crowbi)";						  // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_ARC_Helmets\data\textures\104th_ARC_Crowbi_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Drifter_Helmet : JA_104th_Clone_P15_Helmet
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";													
		displayname = "Clone Trooper ARC Trooper Helmet (104th Drifter)";								  // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_ARC_Helmets\data\textures\104th_ARC_Drifter_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Frosty_Helmet : JA_104th_Clone_P15_Helmet
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";													
		displayname = "Clone Trooper ARC Trooper Helmet (104th Frosty)";								  // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_ARC_Helmets\data\textures\104th_ARC_Frosty_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Hunter_Helmet : JA_104th_Clone_P15_Helmet
	{
		author = "Tundra";
		scope = 2;
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = "true";
		displayname = "Clone Trooper ARC Trooper Helmet (104th Hunter)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "Jangos_ARC_Helmets\data\textures\104th_ARC_Hunter_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_Loner_Helmet : JA_104th_Clone_P15_Helmet
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";											
		displayname = "Clone Trooper ARC Trooper Helmet (104th Loner)";							 // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_ARC_Helmets\data\textures\104th_ARC_Loner_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Spectre_Helmet : JA_104th_Clone_P15_Helmet
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";												
		displayname = "Clone Trooper ARC Trooper Helmet (104th Spectre)";								// the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_ARC_Helmets\data\textures\104th_ARC_Spectre_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Sigil_Helmet : JA_104th_Clone_P15_Helmet
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";													
		displayname = "Clone Trooper ARC Trooper Helmet (104th Sigil)";							 // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_ARC_Helmets\data\textures\104th_ARC_Sigil_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Vision_Helmet : JA_104th_Clone_P15_Helmet
	{
		author = "Dak";
		scope = 2;
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
