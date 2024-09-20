#include "basicDefines_A3.hpp"
class DefaultEventhandlers;
class UniformSlotInfo;
class CfgPatches
{
	class Jangos_Armory_ARF_Vests
	{
		author = "Jango's Finest";
		requiredVersion = 0.1;
		requiredAddons[] = {};
		units[] = {
		};
		weapons[] = {
			"JA_104th_IQ_Vest",
			"JA_104th_Woods_Vest"
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
	class SWLB_clone_airborne_nco_armor;
	class SWLB_clone_eng_helmet;
	class SWLB_P2_SpecOps_Helmet;
	class UniformItem;
	class VestItem;

    // Inheritance for vests
    // Makes making each vest a rebreather easier
    class SWLB_clone_basic_armor;
    class SWLB_CEE_Recon_Lieutenant: SWLB_clone_basic_armor
    {
        class ItemInfo;
    };
    

	class JA_104th_IQ_Vest : SWLB_CEE_Recon_Lieutenant
	{
		author = "Emmet";
		scope = 2;
		displayName = "Clone Force Recon Officer Vest (104th IQ)";
		model = "\SWLB_CEE\data\SWLB_CEE_Recon_Lieutenant.p3d";
		uniformModel = "\SWLB_CEE\data\SWLB_CEE_Recon_Lieutenant.p3d";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] = 
			{
				"Jangos_ARF_Vests\data\Textures\104th_ARF_IQ_Officer_Kama.paa",
				"SWLB_clones\data\heavy_accessories_co.paa"};
		class ItemInfo: Vestitem
		{
			uniformModel = "\SWLB_CEE\data\SWLB_CEE_Recon_Lieutenant.p3d";
			containerClass = "Supply100";
			hiddenSelections[] = {"camo1","camo2"};
			mass = 80;
			vestType = "Rebreather";

            class HitpointsProtectionInfo {
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 8;
                    passThrough = 0.3;
                };
                class Body {
                    hitpointName = "HitBody";
                    armor = 8;
                    passThrough = 0.3;
                };
                class Chest {
                    hitpointName = "HitChest";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Diaphragm {
                    hitpointName = "HitDiaphragm";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
		};
	};
	class JA_104th_Woods_Vest : SWLB_CEE_Recon_Lieutenant
	{
		author = "Dak";
		scope = 2;
		displayName = "Clone Force Recon Officer Vest (104th Woods)";
		model = "\SWLB_CEE\data\SWLB_CEE_Recon_Lieutenant.p3d";
		uniformModel = "\SWLB_CEE\data\SWLB_CEE_Recon_Lieutenant.p3d";
		hiddenSelections[] = 
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] = 
			{
				"Jangos_ARF_Vests\data\Textures\104th_ARF_Woods_Officer_Kama.paa",
				"SWLB_clones\data\heavy_accessories_co.paa"};
		class ItemInfo: Vestitem
		{
			uniformModel = "\SWLB_CEE\data\SWLB_CEE_Recon_Lieutenant.p3d";
			containerClass = "Supply100";
			hiddenSelections[] = {"camo1","camo2"};
			mass = 80;
			vestType = "Rebreather";

            class HitpointsProtectionInfo {
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 8;
                    passThrough = 0.3;
                };
                class Body {
                    hitpointName = "HitBody";
                    armor = 8;
                    passThrough = 0.3;
                };
                class Chest {
                    hitpointName = "HitChest";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Diaphragm {
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
