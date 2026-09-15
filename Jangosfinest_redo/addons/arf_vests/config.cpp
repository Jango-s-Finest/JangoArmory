#include "\JA\jangos_Armory\addons\main\script_component.hpp"
#include "basicDefines_A3.hpp"
class CfgPatches
{
	class Jangos_Armory_ARF
	{
		author = "Jango's Finest";
		requiredVersion = 0.1;
		requiredAddons[] = {};
		units[] += {};
		weapons[] += {
			"ls_gar_forceReconLieutenant_vest",
			"JA_104th_IQ_Vest",
			"JA_104th_Woods_Vest",
			"JA_104th_Achilles_Vest"
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

	// Inheritance for vests
	// Makes making each vest a rebreather easier
	class VestItem;
	class ls_gar_clone_vest;
	class ls_gar_forceReconLieutenant_vest : ls_gar_clone_vest
	{
	};

	class JA_104th_IQ_Vest : ls_gar_forceReconLieutenant_vest
	{
		author = "Emmet";
		scope = 2;
		displayName = "Clone Force Recon Officer Vest (104th IQ)";
		model = "\ls\core\addons\characters_clone_legacy\vests\forceRecon\ls_gar_forceReconLieutenant_vest.p3d";
		uniformModel = "\ls\core\addons\characters_clone_legacy\vests\forceRecon\ls_gar_forceReconLieutenant_vest.p3d";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				QPATHTOEF(arf_vests,data\textures\104th_ARF_IQ_Officer_Kama.paa),
				"\ls\core\addons\characters_clone_legacy\vests\common\heavy\heavy_accessories_co.paa"};
		class ItemInfo : VestItem
		{
			uniformModel = "\ls\core\addons\characters_clone_legacy\vests\forceRecon\ls_gar_forceReconLieutenant_vest.p3d";
			containerClass = "Supply80";
			hiddenSelections[] = {"camo1", "camo2"};
			mass = 80;
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
	class JA_104th_Woods_Vest : ls_gar_forceReconLieutenant_vest
	{
		author = "Dak";
		scope = 2;
		displayName = "Clone Force Recon Officer Vest (104th Woods)";
		model = "\ls\core\addons\characters_clone_legacy\vests\forceRecon\ls_gar_forceReconLieutenant_vest.p3d";
		uniformModel = "\ls\core\addons\characters_clone_legacy\vests\forceRecon\ls_gar_forceReconLieutenant_vest.p3d";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				QPATHTOEF(arf_vests,data\textures\104th_ARF_Woods_Officer_Kama.paa),
				"\ls\core\addons\characters_clone_legacy\vests\common\heavy\heavy_accessories_co.paa"};
		class ItemInfo : VestItem
		{
			uniformModel = "\ls\core\addons\characters_clone_legacy\vests\forceRecon\ls_gar_forceReconLieutenant_vest.p3d";
			containerClass = "Supply80";
			hiddenSelections[] = {"camo1", "camo2"};
			mass = 80;
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
	class JA_104th_Achilles_Vest : ls_gar_forceReconLieutenant_vest
	{
		author = "Dak";
		scope = 2;
		displayName = "Clone Force Recon Officer Vest (104th Achilles)";
		model = "\ls\core\addons\characters_clone_legacy\vests\forceRecon\ls_gar_forceReconLieutenant_vest.p3d";
		uniformModel = "\ls\core\addons\characters_clone_legacy\vests\forceRecon\ls_gar_forceReconLieutenant_vest.p3d";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				QPATHTOEF(arf_vests,data\textures\104th_ARF_Achilles_Accessories_Officer.paa),
				"\ls\core\addons\characters_clone_legacy\vests\common\heavy\heavy_accessories_co.paa"};
		class ItemInfo : VestItem
		{
			uniformModel = "\ls\core\addons\characters_clone_legacy\vests\forceRecon\ls_gar_forceReconLieutenant_vest.p3d";
			containerClass = "Supply80";
			hiddenSelections[] = {"camo1", "camo2"};
			mass = 80;
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

class CfgVehicles
{
	// General Uniforms
};
