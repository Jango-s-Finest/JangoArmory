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
			"ls_gar_kama_vest",
			"JA_104th_Cherryy_Pilot_officer_Vest",
			"JA_104th_Fire_Pilot_officer_Vest"
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
	class JA_104th_Clone_Base_armor;
	class ls_gar_kama_vest : JA_104th_Clone_Base_armor
	{
		class ItemInfo;
	};
	class JA_104th_Cherryy_Pilot_officer_Vest : ls_gar_kama_vest
	{
		author = "Dak";
		displayName = "Clone Pilot Officer Vest (104th Cherryy)";
		hiddenSelections[] =
			{
				"camo1"};
		hiddenSelectionsTextures[] =
			{
				"\JA\jangos_Armory\addons\pilot_vests\data\textures\104th_Pilot_Cherryy_Accessories_Officer.paa"};
		class ItemInfo : ItemInfo
		{
			containerClass = "Supply80";
			vestType = "Rebreather";

			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 8;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 8;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 15;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 10;
					passThrough = 0.3;
				};
			};
		};
	};
	class JA_104th_Fire_Pilot_officer_Vest : ls_gar_kama_vest
	{
		author = "Dak";
		displayName = "Clone Pilot Officer Vest (104th Fire)";
		hiddenSelections[] =
			{
				"camo1"};
		hiddenSelectionsTextures[] =
			{
				"\JA\jangos_Armory\addons\pilot_vests\data\textures\104th_Pilot_Fire_Accessories_Officer.paa"};
		class ItemInfo : ItemInfo
		{
			containerClass = "Supply80";
			vestType = "Rebreather";

			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 8;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 8;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 15;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 10;
					passThrough = 0.3;
				};
			};
		};
	};
};


