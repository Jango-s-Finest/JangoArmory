#include "basicDefines_A3.hpp"
class DefaultEventhandlers;
class UniformSlotInfo;
class CfgPatches
{
	class Jangos_Armory_Airborne_Vests
	{
		author = "Jango's Finest";
		requiredVersion = 0.1;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {
			"JA_104th_AB_Base_Trooper_Armor",
			"JA_104th_AB_NCO_Trooper_Armor",
			"JA_104th_AB_Officer_Trooper_Armor",
			"JA_104th_AB_Officer_Trooper_Armor_Fixed",
			"JA_104th_AB_ME_Officer_Trooper_Armor",
			"JA_104th_AB_ME_NCO_Trooper_Armor",
			"JA_104th_AB_ME_Base_Trooper_Armor",
			"JA_104th_AB_Officer_Vest_Axel",
			"JA_104th_AB_Officer_Vest_Dak",
			"JA_104th_Carmine_Vest",
			"JA_104th_Osiris_Vest",
			"JA_104th_Kage_Vest",
			"JA_104th_Magnum_Vest",
			"JA_104th_Clutch_Vest"
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
	class JA_104th_Vest;
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
	class SWLB_clone_kama_armor;
	class SWLB_clone_eng_helmet;
	class SWLB_P2_SpecOps_Helmet;
	class UniformItem;
	class VestItem;

	// Inheritance for vests
	// Makes making each vest a rebreather easier
	class SWLB_clone_basic_armor;
	class SWLB_clone_airborne_armor : SWLB_clone_basic_armor
	{
		class ItemInfo;
	};
	class SWLB_clone_airborne_nco_armor : SWLB_clone_airborne_armor
	{
		class ItemInfo;
	};
	class SWLB_CEE_Airborne_Officer : SWLB_clone_airborne_armor
	{
		class ItemInfo;
	};
	class SWLB_CEE_Force_Recon_NCO : SWLB_clone_airborne_armor
	{
		class ItemInfo;
	};
   class SWLB_CEE_Recon_Lieutenant: SWLB_clone_basic_armor 
    {
        class ItemInfo;
    };
	class ls_blueforVest_base;
	class ls_gar_airborneOfficer_vest : ls_blueforVest_base
	{
		class ItemInfo;
	};

	class SWLB_clone_officer_armor : SWLB_clone_basic_armor
	{
		class ItemInfo;
	};
	class SWLB_clone_commander_armor : SWLB_clone_officer_armor
	{
		class ItemInfo;
	};
	class SWLB_clone_arc_armor : SWLB_clone_officer_armor
	{
		class ItemInfo;
	};

	class JA_104th_AB_ME_Officer_Trooper_Armor : ls_gar_airborneOfficer_vest // Fixes the white pauldron issue
	{
		author = "Dak";
		displayName = "Clone Airborne Officer Vest (ME)";
		hiddenSelectionsTextures[] =
			{
				"Jangos_Airborne_Vests\data\Textures\104th_Accessories_Heavy.paa",	  // Small "pocket" on left arm
				"Jangos_Airborne_Vests\data\Textures\104th_Accessories_Heavy.paa",	  // Heavy Vest Bag / Straps
				"Jangos_Airborne_Vests\data\Textures\104th_ME_Pauldron_and_Kama.paa", // Kama
				"Jangos_Airborne_Vests\data\Textures\104th_Accessories_Heavy.paa"	  /*,    // Unknown, No change seen in-game when changed
					 "JangosArmory1\data\Textures\104th_ME_Pauldron_and_Kama.paa"*/
																			  // Pauldron - Currently broken until LS fixes the selections
																			  // Final texture is commented out as the new airborne vest has a small piece of the NCO (small) pauldron that is textured.
																			  // Leaving it empty makes it appear invisible.
			};
		class ItemInfo : ItemInfo
		{
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
	class JA_104th_AB_Officer_Trooper_Armor : ls_gar_airborneOfficer_vest
	{
		author = "Dak";
		displayName = "Clone Airborne Officer Vest (104th)";

		hiddenSelectionsTextures[] =
			{
				"Jangos_Airborne_Vests\data\Textures\104th_Accessories_Heavy.paa", // Small "pocket" on left arm
				"Jangos_Airborne_Vests\data\Textures\104th_Accessories_Heavy.paa", // Heavy Vest Bag / Straps
				"Jangos_Airborne_Vests\data\textures\104th_Pauldron_and_Kama.paa", // Kama
				"Jangos_Airborne_Vests\data\Textures\104th_Accessories_Heavy.paa" 
			};
		class ItemInfo : ItemInfo
		{
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
	class JA_104th_AB_ME_NCO_Trooper_Armor : SWLB_clone_airborne_nco_armor
	{
		author = "Dak";
		displayName = "Clone Airborne NCO Vest (ME)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2",
				"camo3",
				"camo4"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Airborne_Vests\data\Textures\104th_Accessories_Heavy_ME.paa", // Heavy
				"Jangos_Airborne_Vests\data\Textures\104th_ME_Pauldron_and_Kama.paa",
				"Jangos_Airborne_Vests\data\Textures\104th_Accessories_Heavy_ME.paa", // Heavy
				"Jangos_Airborne_Vests\data\Textures\104th_Accessories_Heavy_ME.paa"  // Heavy
			};
		class ItemInfo : ItemInfo
		{
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
	class JA_104th_AB_ME_Base_Trooper_Armor : SWLB_clone_airborne_armor
	{
		author = "Dak";
		displayName = "Clone Airborne Trooper Vest (ME)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2",
				"camo3",
				"camo4"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Airborne_Vests\data\Textures\104th_Accessories_Heavy_ME.paa", // Heavy
				"Jangos_Airborne_Vests\data\Textures\104th_ME_Pauldron_and_Kama.paa",
				"Jangos_Airborne_Vests\data\Textures\104th_Accessories_Heavy_ME.paa" // Heavy
			};
		class ItemInfo : ItemInfo
		{
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
	class JA_104th_AB_NCO_Trooper_Armor : SWLB_clone_airborne_nco_armor
	{
		author = "Dak";
		displayName = "Clone Airborne NCO Vest (104th)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2",
				"camo3",
				"camo4"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Airborne_Vests\data\Textures\104th_Accessories_Heavy.paa", // Heavy
				"Jangos_Airborne_Vests\data\Textures\104th_Pauldron_and_Kama.paa",
				"Jangos_Airborne_Vests\data\Textures\104th_Accessories_Heavy.paa", // Heavy
				"Jangos_Airborne_Vests\data\Textures\104th_Accessories_Heavy.paa"  // Heavy
			};
		class ItemInfo : ItemInfo
		{
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
	class JA_104th_AB_Base_Trooper_Armor : SWLB_clone_airborne_armor
	{
		author = "Dak";
		displayName = "Clone Airborne Trooper Vest (104th)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2",
				"camo3",
				"camo4"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Airborne_Vests\data\Textures\104th_Accessories_Heavy.paa", // Heavy
				"Jangos_Airborne_Vests\data\Textures\104th_Pauldron_and_Kama.paa",
				"Jangos_Airborne_Vests\data\Textures\104th_Accessories_Heavy.paa" // Heavy
			};
		class ItemInfo : ItemInfo
		{
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
	class JA_104th_AB_Officer_Vest_Axel : ls_gar_airborneOfficer_vest
	{
		author = "Fish";
		displayName = "Clone Airborne Officer Vest (104th Axel)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2",
				"camo3",
				"camo4",
				"camo5"};
		hiddenSelectionsTextures[] =
			{
				// Jangos_Airborne_Vests\data\Textures\104th_Accessories_Heavy.paa doesn't exist
				"Jangos_Airborne_Vests\data\Textures\104th_Accessories_Heavy.paa", // Heavy
				"Jangos_Airborne_Vests\data\Textures\104th_Accessories_Heavy.paa", // Heavy
				"Jangos_Airborne_Vests\data\Textures\104_AB_Axel_Kama.paa",
				"Jangos_Airborne_Vests\data\Textures\104th_Accessories_Heavy.paa" 
			};
		class ItemInfo : ItemInfo
		{
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
	class JA_104th_AB_Officer_Vest_Dak : JA_104th_Vest
	{
		author = "Emmet";
		scope = 2;
		displayName = "Clone Airborne Officer Vest (104th Dak)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"
			};
		hiddenSelectionsTextures[] = 
			{
				"Jangos_Airborne_Vests\data\Textures\104th_AB_Dak_Kama.paa",
				"SWLB_clones\data\heavy_accessories_co.paa"
			};
	};
	class JA_104th_Carmine_Vest : SWLB_clone_airborne_nco_armor
	{
		author = "Emmet" 
		scope = 2;
		displayName = "Clone Airborne NCO Vest (104th Carmine)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2",
				"camo3",
				"camo4"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Airborne_Vests\data\Textures\104th_Accessories_Heavy.paa", // Heavy
				"Jangos_Airborne_Vests\data\Textures\104th_AB_Carmine_Kama.paa",
				"Jangos_Airborne_Vests\data\Textures\104th_Accessories_Heavy.paa", // Heavy
				"Jangos_Airborne_Vests\data\Textures\104th_Accessories_Heavy.paa"  // Heavy
			};
		class ItemInfo : ItemInfo
		{
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
	class JA_104th_Osiris_Vest : SWLB_clone_airborne_nco_armor
	{
		author = "Emmet" 
		scope = 2;
		displayName = "Clone Airborne NCO Vest (104th Osiris)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2",
				"camo3",
				"camo4"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Airborne_Vests\data\Textures\104th_Accessories_Heavy.paa", // Heavy
				"Jangos_Airborne_Vests\data\Textures\104th_AB_Osiris_Kama.paa",
				"Jangos_Airborne_Vests\data\Textures\104th_Accessories_Heavy.paa", // Heavy
				"Jangos_Airborne_Vests\data\Textures\104th_Accessories_Heavy.paa"  // Heavy
			};
		class ItemInfo : ItemInfo
		{
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
	class JA_104th_Kage_Vest : SWLB_clone_airborne_nco_armor
	{
		author = "Emmet" 
		scope = 2;
		displayName = "Clone Airborne NCO Vest (104th Kage)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2",
				"camo3",
				"camo4"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Airborne_Vests\data\Textures\104th_Accessories_Heavy.paa", // Heavy
				"Jangos_Airborne_Vests\data\Textures\104th_AB_Kage_Kama.paa",
				"Jangos_Airborne_Vests\data\Textures\104th_Accessories_Heavy.paa", // Heavy
				"Jangos_Airborne_Vests\data\Textures\104th_Accessories_Heavy.paa"  // Heavy
			};
		class ItemInfo : ItemInfo
		{
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
	class JA_104th_Magnum_Vest : SWLB_clone_airborne_nco_armor
	{
		author = "Emmet" 
		scope = 2;
		displayName = "Clone Airborne NCO Vest (104th Magnum)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2",
				"camo3",
				"camo4"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Airborne_Vests\data\Textures\104th_Accessories_Heavy.paa", // Heavy
				"Jangos_Airborne_Vests\data\Textures\104th_AB_Magnum_Kama.paa",
				"Jangos_Airborne_Vests\data\Textures\104th_Accessories_Heavy.paa", // Heavy
				"Jangos_Airborne_Vests\data\Textures\104th_Accessories_Heavy.paa"  // Heavy
			};
		class ItemInfo : ItemInfo
		{
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
	class JA_104th_Clutch_Vest : SWLB_clone_airborne_nco_armor
	{
		author = "Emmet" 
		scope = 2;
		displayName = "Clone Airborne NCO Vest (104th Clutch)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2",
				"camo3",
				"camo4"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Airborne_Vests\data\Textures\104th_AB_Clutch_Heavy.paa", // Heavy
				"Jangos_Airborne_Vests\data\Textures\104th_AB_Clutch_Kama.paa",
				"Jangos_Airborne_Vests\data\Textures\104th_AB_Clutch_Heavy.paa", // Heavy
				"Jangos_Airborne_Vests\data\Textures\104th_AB_Clutch_Heavy.paa"  // Heavy
			};
		class ItemInfo : ItemInfo
		{
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