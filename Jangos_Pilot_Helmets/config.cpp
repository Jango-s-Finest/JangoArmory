#include "basicDefines_A3.hpp"
class DefaultEventhandlers;
class UniformSlotInfo;
class CfgPatches
{
	class Jangos_Armory_Pilot_Helmets
	{
		author = "Jango's Finest";
		requiredVersion = 0.1;
		requiredAddons[] = {};
		units[] = {
		};
		weapons[] = {
			"JA_104th_Bail_Pilot_Helmet",
			"JA_104th_Beef_Pilot_Helmet",
			"JA_104th_Haze_Pilot_Helmet",
			"JA_104th_Varelli_Pilot_Helmet",
			"JA_104th_Fish_Pilot_Helmet",
			"JA_104th_OD_Pilot_Helmet",
			"JA_104th_Cherryy_Pilot_Helmet"
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
	class SWLB_Clone_Pilot_P2_Helmet
	{
		class ItemInfo;
	};

	class JA_104th_Pilot_P2_Helmet : SWLB_Clone_Pilot_P2_Helmet
	{
		class ItemInfo : ItemInfo
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

	class JA_104th_Bail_Pilot_Helmet : JA_104th_Pilot_P2_Helmet
	{
		author = "Tundra";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper Pilot Helmet (104th Bail)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "Jangos_Pilot_Helmets\data\Textures\104th_Pilot_Bail_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_Beef_Pilot_Helmet : JA_104th_Pilot_P2_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};															  // don't change this
		displayname = "Clone Trooper Pilot Helmet (104th Beef)";								  // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Pilot_Helmets\data\Textures\104th_Pilot_Beef_Helmet.paa"}; // the file path to the texture
	};
	class JA_104th_Haze_Pilot_Helmet : JA_104th_Pilot_P2_Helmet
	{
		author = "Tundra";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper Pilot Helmet (104th Haze)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "Jangos_Pilot_Helmets\data\Textures\104th_Pilot_Haze_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_Varelli_Pilot_Helmet : JA_104th_Pilot_P2_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper Pilot Helmet (104th Varelli)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "Jangos_Pilot_Helmets\data\Textures\104th_Pilot_Varelli_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_OD_Pilot_Helmet : JA_104th_Pilot_P2_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper Pilot Helmet (104th OD)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "Jangos_Pilot_Helmets\data\Textures\104th_Pilot_OD_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_Cherryy_Pilot_Helmet : JA_104th_Pilot_P2_Helmet
	{
		author = "Fish";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper Pilot Helmet (104th Cherryy)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "Jangos_Pilot_Helmets\data\Textures\104th_Pilot_Cherryy_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_Fish_Pilot_Helmet : JA_104th_Pilot_P2_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper Pilot Helmet (104th Fish)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "Jangos_Pilot_Helmets\data\Textures\104th_Pilot_Fish_Helmet.paa" }; // the file path to the texture
	};
	
};
