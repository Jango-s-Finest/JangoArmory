#include "basicDefines_A3.hpp"
class DefaultEventhandlers;
class UniformSlotInfo;
class CfgPatches
{
	class Jangos_Armory_Airborne_Armours_2
	{
		author = "Jango's Finest";
		requiredVersion = 0.1;
		requiredAddons[] = {};
		units[] = {
			};
		weapons[] = {
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
	class ItemInfo;
	class ls_gar_phase2Pilot_helmet;
	class ls_gar_phase2_uniform;
	class ls_gar_marshalCommander_uniform;
	class ls_gar_arc_vest;
	class ls_gar_officer_vest;
	class ls_gar_commander_vest;
	class ls_gar_airborne_vest;
	class ls_gar_airborneOfficer_vest;
	class ls_gar_forceReconNCO_vest;
	class ls_gar_barc_helmet;
	class ls_gar_airborne_helmet;
	class ls_gar_phase1Arf_helmet;
	class ls_gar_arc_helmet;
	class ls_gar_phase1_helmet;
	class ls_gar_rex_helmet;
	class ls_gar_phase2_helmet;
	class lsd_gar_standart_nvg;
	class lsd_gar_rangefinder_nvg;
	class lsd_gar_p2MarshalCommander_nvg;
	class ls_gar_kama_vest;
	class ls_gar_medic_vest;
	class ls_gar_clone_vest;
	class ls_gar_airborneNCO_vest;
	class ls_gar_engineer_helmet;
	class ls_sob_phase2SpecOp_helmet;
	class JA_104th_P2_1C_JTAC_Uniform;
	class UniformItem;
	class VestItem;
	class JA_104th_Base_MC_AB_Uniform;
	class JA_104th_Base_AB_Uniform;
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
				"Jangos_Airborne_Armours_2\data\Textures\104th_AB_Granite_Upper.paa",
				"Jangos_Airborne_Armours_2\data\textures\104th_AB_Granite_Lower.paa",
				"Jangos_Airborne_Armours_2\data\Textures\104th_AB_Granite_Upper.paa"};
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
				"Jangos_Airborne_Armours_2\data\Textures\104th_AB_Tinkle_Upper.paa",
				"Jangos_Airborne_Armours_2\data\textures\104th_AB_Tinkle_Lower.paa",
				"Jangos_Airborne_Armours_2\data\Textures\104th_AB_Tinkle_Upper.paa",
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
				"Jangos_Airborne_Armours_2\data\Textures\104th_AB_Grimmer_Upper.paa",
				"Jangos_Airborne_Armours_2\data\textures\104th_AB_Grimmer_Lower.paa"};
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
};

class CfgVehicles
{
	class lsd_gar_phase2_base;
	class ls_gar_marshalCommander_base;
	class ls_gar_standard_backpack;
	class ls_gar_rto_mini_backpack;
	class ls_gar_heavy_backpack;
	class ls_gar_medic_backpack;
	class ls_gar_Radio_backpack;
	class JLTS_Clone_jumppack;
	class JA_104th_Jumppack_JT12;
	class JA_104th_Jumppack_JT12_LR;
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
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Armours_2\data\Textures\104th_AB_Granite_Upper.paa", "Jangos_Airborne_Armours_2\data\Textures\104th_AB_Granite_Lower.paa", "Jangos_Airborne_Armours_2\data\Textures\104th_AB_Granite_Upper.paa"};
		linkedItems[] = {JA_104th_Granite_Helmet, JA_104th_Granite_Vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		// all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Granite_Helmet, JA_104th_Granite_Vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
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
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Armours_2\data\Textures\104th_AB_Tinkle_Upper.paa", "Jangos_Airborne_Armours_2\data\Textures\104th_AB_Tinkle_Lower.paa","Jangos_Airborne_Armours_2\data\Textures\104th_AB_Tinkle_Upper.paa"};
		linkedItems[] = {JA_104th_Tinkle_Helmet, JA_104th_Tinkle_Vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		// all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Tinkle_Helmet, JA_104th_Tinkle_Vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
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
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Armours_2\data\Textures\104th_AB_Grimmer_Upper.paa", "Jangos_Airborne_Armours_2\data\Textures\104th_AB_Grimmer_Lower.paa"};
		linkedItems[] = {JA_104th_Grimmer_Helmet, JA_104th_Grimmer_Vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		// all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Grimmer_Helmet, JA_104th_Grimmer_Vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
};
