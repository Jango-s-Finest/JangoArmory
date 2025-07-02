#include "basicDefines_A3.hpp"
class DefaultEventhandlers;
class UniformSlotInfo;
class CfgPatches
{
	class Jangos_Armory_Pilot_Vests
	{
		author = "Jango's Finest";
		requiredVersion = 0.1;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {};
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
	class ls_gar_phase2Pilot_helmet;
	class ls_gar_phase2_uniform;
	class ls_gar_marshalCommander_uniform;
	class ls_gar_arc_vest;
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
	class ls_gar_medic_vest;
	class ls_gar_clone_vest;
	class ls_gar_airborneNCO_vest;
	class ls_gar_engineer_helmet;
	class ls_sob_phase2SpecOp_helmet;
	class JA_104th_Clone_Base_armor;
	class UniformItem;
	class ItemInfo;
	class VestItem;
	class ls_gar_kama_vest : JA_104th_Clone_Base_armor
	{
		class ItemInfo;
	};
	class ls_gar_officer_vest : ls_gar_clone_vest
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
				"Jangos_Pilot_Vests\data\Textures\104th_Pilot_Cherryy_Accessories_Officer.paa"};
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
};
