#include "\JA\jangos_Armory\addons\main\script_component.hpp"
#include "basicDefines_A3.hpp"
class CfgPatches
{
	class ADDON
	{
		author = "Jango's Finest";
		requiredVersion = 0.1;
		requiredAddons[] = {};
		units[] = {
			"JA_104th_Granite",
			"JA_104th_Tinkle",
			"JA_104th_Grimmer",
			"JA_104th_Artorias",
			"JA_104th_Hound",
			"JA_104th_Kage_test"
		};
		weapons[] = {
			"JA_104th_SenateComando_Uniform",
			"JA_104th_Granite_Uniform",
			"JA_104th_Tinkle_Uniform",
			"JA_104th_Grimmer_Uniform",
			"JA_104th_Artorias_Uniform",
			"JA_104th_Hound_Uniform",
			"JA_104th_Kage_Uniform_test"
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
	class UniformItem;
	class JA_104th_Base_MC_AB_Uniform;
	class JA_104th_Base_AB_Uniform;
	class ls_csfUniform_senateCommando;
	class JA_104th_SenateComando_Uniform : ls_csfUniform_senateCommando
	{
		class ItemInfo : UniformItem
		{
			class HitpointsProtectionInfo
			{
				class Arms
				{
					hitpointName = "HitArms";
					armor = 40;
					explosionShielding = 20;
					passThrough = 0.5;
				};
				class Hands
				{
					hitpointName = "HitHands";
					armor = 40;
					explosionShielding = 20;
					passThrough = 0.5;
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 40;
					explosionShielding = 20;
					passThrough = 0.5;
				};

				class chest
				{
					hitpointName = "HitChest";
					armor = 40;
					explosionShielding = 20;
					passThrough = 0.5;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 40;
					explosionShielding = 20;
					passThrough = 0.5;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 40;
					explosionShielding = 20;
					passThrough = 0.5;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 40;
					explosionShielding = 20;
					passThrough = 0.5;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 40;
					explosionShielding = 20;
					passThrough = 0.5;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 40;
					explosionShielding = 20;
					passThrough = 0.5;
				};
			};
		};
	};
	class JA_104th_Granite_Uniform : JA_104th_Base_MC_AB_Uniform
	{
		author = "Jango's Finest";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Granite)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2",
				"biceps",
				"rank"};
		hiddenSelectionsTextures[] =
			{
				QPATHTOEF(airborne_armours_2,data\textures\104th_AB_Granite_Upper.paa),
				QPATHTOEF(airborne_armours_2,data\textures\104th_AB_Granite_Lower.paa),
				QPATHTOEF(airborne_armours_2,data\textures\104th_AB_Granite_Upper.paa)};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			scope = 2;
			uniformClass = "JA_104th_Granite";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Tinkle_Uniform : JA_104th_Base_MC_AB_Uniform
	{
		author = "Jango's Finest";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Tinkle)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				QPATHTOEF(airborne_armours_2,data\textures\104th_AB_Tinkle_Upper.paa),
				QPATHTOEF(airborne_armours_2,data\textures\104th_AB_Tinkle_Lower.paa),
				QPATHTOEF(airborne_armours_2,data\textures\104th_AB_Tinkle_Upper.paa),
			};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			scope = 2;
			uniformClass = "JA_104th_Tinkle";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Grimmer_Uniform : JA_104th_Base_AB_Uniform
	{
		author = "Jango's Finest";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Grimmer)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				QPATHTOEF(airborne_armours_2,data\textures\104th_AB_Grimmer_Upper.paa),
				QPATHTOEF(airborne_armours_2,data\textures\104th_AB_Grimmer_Lower.paa)};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			scope = 2;
			uniformClass = "JA_104th_Grimmer";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Artorias_Uniform : JA_104th_Base_AB_Uniform
	{
		author = "Jango's Finest";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Artorias)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				QPATHTOEF(airborne_armours_2,data\textures\104th_AB_Artorias_Upper.paa),
				QPATHTOEF(airborne_armours_2,data\textures\104th_AB_Artorias_Lower.paa)};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			scope = 2;
			uniformClass = "JA_104th_Artorias";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Hound_Uniform : JA_104th_Base_AB_Uniform
	{
		author = "Jango's Finest";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Hound)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				QPATHTOEF(airborne_armours_2,data\textures\104th_AB_Hound_Upper.paa),
				QPATHTOEF(airborne_armours_2,data\textures\104th_AB_Hound_Lower.paa)};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			scope = 2;
			uniformClass = "JA_104th_Hound";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Kage_Uniform_test : JA_104th_SenateComando_Uniform
	{
		author = "Jango's Finest";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Senate Commando Trooper Armor (104th Kage)";
		hiddenSelections[] = {
			"camo1",
			"camo2",
			"undersuit",
			"insignia"
		};
		hiddenSelectionsTextures[] = {
			QPATHTOEF(airborne_armours_2,data\textures\104th_AB_Kage_Upper.paa),
			QPATHTOEF(airborne_armours_2,data\textures\104th_AB_Kage_Lower.paa),
			"\ls\core\addons\characters_clone_legacy\uniforms\phase2\data\undersuit_co.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			scope = 2;
			uniformClass = "JA_104th_Kage_test";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
};

class CfgVehicles
{
	class lsd_gar_phase2_base;
	class ls_gar_marshalCommander_base;
	class ls_csf_senateCommando;
	// General Uniforms
	class JA_104th_Granite : ls_gar_marshalCommander_base
	{
		author = "Fish";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_Granite_Uniform";
		displayName = "104th Granite";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		hiddenSelections[] = {"camo1", "camo2", "biceps", "rank"};
		hiddenSelectionsTextures[] = {QPATHTOEF(airborne_armours_2,data\textures\104th_AB_Granite_Upper.paa), QPATHTOEF(airborne_armours_2,data\textures\104th_AB_Granite_Lower.paa), QPATHTOEF(airborne_armours_2,data\textures\104th_AB_Granite_Upper.paa)};
		linkedItems[] = {"JA_104th_Granite_Helmet", "JA_104th_Granite_Vest", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};		// all items that will be on unit
		respawnLinkedItems[] = {"JA_104th_Granite_Helmet", "JA_104th_Granite_Vest", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"}; // all items that will be on unit on respawn
	};
	class JA_104th_Tinkle : ls_gar_marshalCommander_base
	{
		author = "Fish";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_Tinkle_Uniform";
		displayName = "104th Tinkle";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {QPATHTOEF(airborne_armours_2,data\textures\104th_AB_Tinkle_Upper.paa), QPATHTOEF(airborne_armours_2,data\textures\104th_AB_Tinkle_Lower.paa),QPATHTOEF(airborne_armours_2,data\textures\104th_AB_Tinkle_Upper.paa)};
		linkedItems[] = {"JA_104th_Tinkle_Helmet", "JA_104th_Tinkle_Vest", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};		// all items that will be on unit
		respawnLinkedItems[] = {"JA_104th_Tinkle_Helmet", "JA_104th_Tinkle_Vest", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"}; // all items that will be on unit on respawn
	};
	class JA_104th_Grimmer : lsd_gar_phase2_base
	{
		author = "Fish";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_Grimmer_Uniform";
		displayName = "104th Grimmer";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {QPATHTOEF(airborne_armours_2,data\textures\104th_AB_Grimmer_Upper.paa), QPATHTOEF(airborne_armours_2,data\textures\104th_AB_Grimmer_Lower.paa)};
		linkedItems[] = {"JA_104th_Grimmer_Helmet", "JA_104th_Grimmer_Vest", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};		// all items that will be on unit
		respawnLinkedItems[] = {"JA_104th_Grimmer_Helmet", "JA_104th_Grimmer_Vest", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"}; // all items that will be on unit on respawn
	};
	class JA_104th_Artorias : lsd_gar_phase2_base
	{
		author = "Fish";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_Artorias_Uniform";
		displayName = "104th Artorias";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {QPATHTOEF(airborne_armours_2,data\textures\104th_AB_Artorias_Upper.paa), QPATHTOEF(airborne_armours_2,data\textures\104th_AB_Artorias_Lower.paa)};
		linkedItems[] = {"JA_104th_Artorias_Helmet", "JA_104th_Artorias_Vest", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};		// all items that will be on unit
		respawnLinkedItems[] = {"JA_104th_Artorias_Helmet", "JA_104th_Artorias_Vest", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"}; // all items that will be on unit on respawn
	};
	class JA_104th_Hound : lsd_gar_phase2_base
	{
		author = "Fish";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_Hound_Uniform";
		displayName = "104th Hound";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {QPATHTOEF(airborne_armours_2,data\textures\104th_AB_Hound_Upper.paa), QPATHTOEF(airborne_armours_2,data\textures\104th_AB_Hound_Lower.paa)};
		linkedItems[] = {"JA_104th_Hound_Helmet", "JA_104th_Hound_Vest", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};		// all items that will be on unit
		respawnLinkedItems[] = {"JA_104th_Hound_Helmet", "JA_104th_Hound_Vest", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"}; // all items that will be on unit on respawn
	};
	class JA_104th_Kage_test : ls_csf_senateCommando
	{
		author = "Fish";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_Kage_Uniform_test";
		displayName = "104th Kage";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		hiddenSelections[] = {"camo1","camo2","undersuit","insignia"};
		hiddenSelectionsTextures[] = {QPATHTOEF(airborne_armours_2,data\textures\104th_AB_Kage_Upper.paa), QPATHTOEF(airborne_armours_2,data\textures\104th_AB_Kage_Lower.paa),"\ls\core\addons\characters_clone_legacy\uniforms\phase2\data\undersuit_co.paa"};
		linkedItems[] = {"JA_104th_Kage_Helmet", "JA_104th_Kage_Vest", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};		// all items that will be on unit
		respawnLinkedItems[] = {"JA_104th_Kage_Helmet", "JA_104th_Kage_Vest", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"}; // all items that will be on unit on respawn
	};
};
