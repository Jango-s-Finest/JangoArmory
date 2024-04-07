#include "basicDefines_A3.hpp"
class DefaultEventhandlers;
class UniformSlotInfo;
class CfgPatches
{
	class Jangos_Armory_ARC_Vests
	{
		author = "Jango's Finest";
		requiredVersion = 0.1;
		requiredAddons[] = {};
		units[] = {
		};
		weapons[] = {
			"JA_104th_Angel_Vest",
			"JA_104th_Frosty_Vest",
			"JA_104th_Hunter_Vest",
			"JA_104th_Sigil_Vest",
			"JA_104th_Spectre_Vest",
			"JA_104th_Loner_Vest",
			"JA_104th_Crowbi_Vest"
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
	class SWLB_clone_medic_armor;
	class UniformItem;
	class VestItem;
	
    // Inheritance for vests
    // Makes making each vest a rebreather easier
    class SWLB_clone_basic_armor;
    class SWLB_clone_airborne_armor: SWLB_clone_basic_armor
    {
        class ItemInfo;
    };
    class SWLB_clone_airborne_nco_armor: SWLB_clone_airborne_armor
    {
        class ItemInfo;
    };
    class SWLB_CEE_Airborne_Officer: SWLB_clone_airborne_armor
    {
        class ItemInfo;
    };
    class SWLB_CEE_Force_Recon_NCO: SWLB_clone_airborne_armor
    {
        class ItemInfo;
    };
    class SWLB_CEE_Officer_Tactical: SWLB_clone_airborne_armor
    {
        class ItemInfo;
    };
    
    class ls_blueforVest_base;
    class ls_gar_airborneOfficer_vest: ls_blueforVest_base
    {
        class ItemInfo;
    };

    class SWLB_clone_officer_armor: SWLB_clone_basic_armor
    {
        class ItemInfo;
    };
    class SWLB_clone_commander_armor: SWLB_clone_officer_armor
    {
        class ItemInfo;
    };
    class SWLB_clone_arc_armor: SWLB_clone_officer_armor
    {
        class ItemInfo;
    };
    class SWLB_clone_kama_armor: SWLB_clone_basic_armor
    {
        class ItemInfo;
    };

	class JA_104th_Angel_Vest : SWLB_clone_arc_armor
	{
		author = "Dak";
		displayName = "Clone ARC Trooper Vest (104th Angel)";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_arc_armor_ca.paa";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"

			};
		hiddenSelectionsTextures[] =
			{
				"Jangos_ARC_Vests\data\Textures\104th_ARC_Angel_ARC_Accessories.paa",
				"Jangos_ARC_Vests\data\Textures\104th_ARC_Angel_Officer_Accessories.paa"};
		class ItemInfo : ItemInfo
		{
			vestType = "Rebreather";
			uniformModel = "\SWLB_clones\SWLB_clone_arc_armor.p3d";
			containerClass = "Supply100";
			hiddenSelections[] = {"camo1", "camo2"};
			mass = 100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 10;
					PassThrough = 0.3;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 10;
					passThrough = 0.3;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 4;
					passThrough = 0.3;
				};
			};
		};
	};
	class JA_104th_Frosty_Vest : SWLB_clone_arc_armor
	{
		author = "Dak";
		displayName = "Clone ARC Trooper Vest (104th Frosty)";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_arc_armor_ca.paa";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"

			};
		hiddenSelectionsTextures[] =
			{
				"Jangos_ARC_Vests\data\Textures\104th_ARC_Frosty_ARC_Accessories.paa",
				"Jangos_ARC_Vests\data\Textures\104th_ARC_Frosty_Officer_Accessories.paa"};
		class ItemInfo : ItemInfo
		{
			vestType = "Rebreather";
			uniformModel = "\SWLB_clones\SWLB_clone_arc_armor.p3d";
			containerClass = "Supply100";
			hiddenSelections[] = {"camo1", "camo2"};
			mass = 100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 10;
					PassThrough = 0.3;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 10;
					passThrough = 0.3;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 4;
					passThrough = 0.3;
				};
			};
		};
	};
class JA_104th_Hunter_Vest : SWLB_clone_arc_armor
	{
		author = "Ice";
		displayName = "Clone ARC Trooper Vest (104th Hunter)";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_arc_armor_ca.paa";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"

			};
		hiddenSelectionsTextures[] =
			{
				"Jangos_ARC_Vests\data\Textures\104th_ARC_Hunter_ARC_Accessories.paa",
				"Jangos_ARC_Vests\data\Textures\104th_ARC_Hunter_Officer_Accessories.paa"};
		class ItemInfo : ItemInfo
		{
			vestType = "Rebreather";
			uniformModel = "\SWLB_clones\SWLB_clone_arc_armor.p3d";
			containerClass = "Supply100";
			hiddenSelections[] = {"camo1", "camo2"};
			mass = 100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 10;
					PassThrough = 0.3;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 10;
					passThrough = 0.3;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 4;
					passThrough = 0.3;
				};
			};
		};
	};
	class JA_104th_Crowbi_Vest : SWLB_clone_arc_armor
	{
		author = "Ice";
		displayName = "Clone ARC Trooper Vest (104th Crowbi)";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_arc_armor_ca.paa";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"

			};
		hiddenSelectionsTextures[] =
			{
				"Jangos_ARC_Vests\data\Textures\104th_ARC_Crowbi_ARC_Accessories.paa",
				"Jangos_ARC_Vests\data\Textures\104th_ARC_Crowbi_Officer_Accessories.paa"};
		class ItemInfo : ItemInfo
		{
			vestType = "Rebreather";
			uniformModel = "\SWLB_clones\SWLB_clone_arc_armor.p3d";
			containerClass = "Supply100";
			hiddenSelections[] = {"camo1", "camo2"};
			mass = 100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 10;
					PassThrough = 0.3;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 10;
					passThrough = 0.3;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 4;
					passThrough = 0.3;
				};
			};
		};
	};
	class JA_104th_Sigil_Vest : SWLB_clone_arc_armor
	{
		author = "Dak";
		displayName = "Clone ARC Trooper Vest (104th Sigil)";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_arc_armor_ca.paa";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"

			};
		hiddenSelectionsTextures[] =
			{
				"Jangos_ARC_Vests\data\Textures\104th_ARC_Sigil_ARC_Accessories.paa",
				"Jangos_ARC_Vests\data\Textures\104th_ARC_Sigil_Officer_Accessories.paa"};
		class ItemInfo : ItemInfo
		{
			vestType = "Rebreather";
			uniformModel = "\SWLB_clones\SWLB_clone_arc_armor.p3d";
			containerClass = "Supply100";
			hiddenSelections[] = {"camo1","camo2"};
			mass = 100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 10;
					PassThrough = 0.3;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 10;
					passThrough = 0.3;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 4;
					passThrough = 0.3;
				};
			};
		};
	};
	class JA_104th_Spectre_Vest : SWLB_clone_arc_armor
	{
		author = "Dak";
		displayName = "Clone ARC Trooper Vest (104th Spectre)";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_arc_armor_ca.paa";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"

			};
		hiddenSelectionsTextures[] =
			{
				"Jangos_ARC_Vests\data\Textures\104th_ARC_Spectre_ARC_Accessories.paa",
				"Jangos_ARC_Vests\data\Textures\104th_ARC_Spectre_Officer_Accessories.paa"};
		class ItemInfo : ItemInfo
		{
			vestType = "Rebreather";
			uniformModel = "\SWLB_clones\SWLB_clone_arc_armor.p3d";
			containerClass = "Supply100";
			hiddenSelections[] = {"camo1","camo2"};
			mass = 100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 10;
					PassThrough = 0.3;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 10;
					passThrough = 0.3;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 4;
					passThrough = 0.3;
				};
			};
		};
	};
	class JA_104th_Loner_Vest : SWLB_clone_arc_armor
	{
		author = "Dak";
		displayName = "Clone ARC Trooper Vest (104th Loner)";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_arc_armor_ca.paa";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"

			};
		hiddenSelectionsTextures[] =
			{
				"Jangos_ARC_Vests\data\Textures\104th_ARC_Loner_ARC_Accessories.paa",
				"Jangos_ARC_Vests\data\Textures\104th_ARC_Loner_Officer_Accessories.paa"};
		class ItemInfo : ItemInfo
		{
			vestType = "Rebreather";
			uniformModel = "\SWLB_clones\SWLB_clone_arc_armor.p3d";
			containerClass = "Supply100";
			hiddenSelections[] = {"camo1","camo2"};
			mass = 100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 10;
					PassThrough = 0.3;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 10;
					passThrough = 0.3;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 4;
					passThrough = 0.3;
				};
			};
		};
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
