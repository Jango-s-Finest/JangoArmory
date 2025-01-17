#include "basicDefines_A3.hpp"
class DefaultEventhandlers;
class UniformSlotInfo;
class CfgPatches
{
	class Jangos_Armory_Backpacks
	{
		author = "Jango's Finest";
		requiredVersion = 0.1;
		requiredAddons[] = {};
		units[] = {
			"JA_104th_Backpack",
			"JA_104th_ARC_Backpack",
			"JA_104th_Backpack_Invis",
			"JA_104th_Accessories_Heavy_Backpack",
			"JA_104th_Medic_Backpack",
			"JA_104th_RTO_Backpack",
			"JA_104th_RTO_Mini_Backpack",
			"JA_104th_Jumppack_LR", // JT12s to Backpacks
			"JA_104th_Jumppack",
			"JA_104th_Jumppack_JT12_LR",
			"JA_104th_Jumppack_JT12",
			"JA_104th_Jumppack_mc_LR",
			"JA_104th_Jumppack_mc",
			"JA_104th_Jumppack_CDV",
			"JA_104th_Jumppack_JT12_Raider",
			"JA_104th_Jumppack_JT12_Raider_LR",
			"JA_104th_Jumppack_JT12_Magnum_LR",
			"JA_104th_Accessories_Heavy_Backpack_Bulky",
			"JA_104th_Jumppack_JT12_Raider_1",
			"JA_104th_Jumppack_JT12_Raider_1_LR",
			"JA_104th_Jumppack_JT12_Raider_2",
			"JA_104th_Jumppack_JT12_Raider_2_LR",
			"JA_104th_Jumppack_JT12_Raider_3",
			"JA_104th_Jumppack_JT12_Raider_3_LR",
			"JA_104th_Jumppack_JT12_Raider_4",
			"JA_104th_Jumppack_JT12_Raider_4_LR",
			"JA_104th_Backpack_Cerberus_1",
			"JA_104th_Accessories_Heavy_Backpack_Cerberus_1",
			"JA_104th_Medic_Backpack_Cerberus_1",
			"JA_104th_RTO_Backpack_Cerberus_1",
			"JA_104th_Backpack_Cerberus_2",
			"JA_104th_Accessories_Heavy_Backpack_Cerberus_2",
			"JA_104th_Medic_Backpack_Cerberus_2",
			"JA_104th_RTO_Backpack_Cerberus_2",
			"JA_104th_Backpack_Cerberus_3",
			"JA_104th_Accessories_Heavy_Backpack_Cerberus_3",
			"JA_104th_Medic_Backpack_Cerberus_3",
			"JA_104th_RTO_Backpack_Cerberus_3",
			"JA_104th_Backpack_Cerberus_4",
			"JA_104th_Accessories_Heavy_Backpack_Cerberus_4",
			"JA_104th_Medic_Backpack_Cerberus_4",
			"JA_104th_RTO_Backpack_Cerberus_4",
			"JA_104th_Backpack_ME",
			"JA_104th_Accessories_Heavy_Backpack_ME",
			"JA_104th_Medic_Backpack_ME",
			"JA_104th_RTO_Backpack_ME",
			"JA_104th_Accessories_Heavy_Backpack_ME"
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
		priority = 1; // Position in list. 
                side = 1; // Opfor = 0, Blufor = 1, Indep = 2. 
	};
};
class cfgEditorSubcategories
{
	class 104th_Categ_Clones
	{
		displayname = "104th - Customs";
	};
	class 104th_Categ_Basic
	{
		displayname = "104th - Base";
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
	class SWLB_clone_commander_armor;
	class SWLB_clone_BARC_helmet;
	class SWLB_clone_AB_helmet;
	class SWLB_clone_ARF_P1_Helmet;
	class SWLB_clone_P15_Helmet;
	class SWLB_clone_P1_helmet;
	class SWLB_clone_P1_2_helmet;
	class SWLB_clone_P2_Helmet;
	class lsd_gar_standart_nvg;
	class lsd_gar_rangefinder_nvg;
	class SWLB_clone_medic_armor;
	class SWLB_clone_basic_armor;
	class lsd_gar_p2MarshalCommander_nvg;
	class SWLB_clone_airborne_nco_armor;
	class ls_gar_desert_helmet;
	class UniformItem;
};

class CfgVehicles
{
	class SWLB_clone_base_P2;
	class SWLB_clone_marshal_commander_base_P2;
	class SWLB_clone_backpack;
	class SWLB_clone_backpack_heavy;
	class SWLB_clone_backpack_medic;
	class SWLB_clone_backpack_RTO;
	class SWLB_clone_RTO_mini_backpack;
	class JLTS_Clone_jumppack;
	class JLTS_Clone_jumppack_JT12_104;
	class ls_greenfor_journeymanJetpack_backpack;
	class JLTS_Clone_jumppack_mc;
	class RD501_JLTS_Clone_jumppack_cdv;
	class SWLB_clone_arc_backpack;
	class ls_gar_survival_backpack;
	
	
	// Common Infantry Backpacks
	class JA_104th_Backpack : SWLB_clone_backpack
	{
		author = "Tundra";
		scope = 2;
		scopeCurator = 2;
		displayname = "Clone Trooper backpack (104th)";
		hiddenSelectionsTextures[] =
		{
			"Jangos_Armory_Backpacks\data\Textures\104th_Clone_Backpack_Normal.paa", // don't change this
			"Jangos_Armory_Backpacks\data\Textures\104th_Clone_Backpack_Normal.paa", // don't change unless RTO
			"", // Heavy
			"", // Medic
			"" // RTO
		};
	};
	class JA_104th_Backpack_Invis : ls_gar_survival_backpack
	{
		author = "Tundra";
		scope = 2;
		scopeCurator = 2;
		displayname = "Clone Trooper backpack (Invisible)";
		hiddenSelectionsTextures[] =
		{
			""
		};
		maximumload = 280; // In LBS (320 = 32 lbs original, 400 = 40 lbs)
	};
	class JA_104th_ARC_Backpack : SWLB_clone_arc_backpack
	{
		author = "Cyan";
		scope = 2;
		scopeCurator = 2;
		displayname = "Clone Trooper ARC backpack (104th)";
		maximumLoad = 360;
	};
	class JA_104th_Accessories_Heavy_Backpack : SWLB_clone_backpack_heavy
	{
		author = "Tundra";
		scopeCurator = 2;
		displayname = "Clone Trooper Heavy backpack (104th)";
		hiddenSelectionsTextures[] =
		{
			"Jangos_Armory_Backpacks\data\Textures\104th_Clone_Backpack_Normal.paa", // don't change this
			"Jangos_Armory_Backpacks\data\Textures\104th_Clone_Backpack_Normal.paa", // don't change unless RTO
			"Jangos_Armory_Backpacks\data\Textures\104th_Clone_Backpack_Normal.paa", // Heavy
			"", // Medic
			"" // RTO
		};
	};
	class JA_104th_Medic_Backpack : SWLB_clone_backpack_medic
	{
		author = "Tundra";
		scopeCurator = 2;
		displayname = "Clone Trooper medic backpack (104th)";
		maximumLoad = 300;
		hiddenSelectionsTextures[] =
		{
			"Jangos_Armory_Backpacks\data\Textures\104th_Clone_Backpack_Medic.paa", // don't change this
			"Jangos_Armory_Backpacks\data\Textures\104th_Clone_Backpack_Medic.paa", // don't change unless RTO
			"", // Heavy
			"Jangos_Armory_Backpacks\data\Textures\104th_Clone_Backpack_Medic.paa", // Medic
			"" // RTO
		};
	};
	class JA_104th_RTO_Backpack : SWLB_clone_backpack_RTO
	{
		author = "Tundra";
		scopeCurator = 2;
		displayname = "Clone Trooper RTO backpack (104th)";
		hiddenSelectionsTextures[] =
		{
			"Jangos_Armory_Backpacks\data\Textures\104th_Clone_Backpack_Normal.paa", // don't change this
			"", // don't change unless RTO
			"", // Heavy
			"", // Medic
			"Jangos_Armory_Backpacks\data\Textures\104th_Clone_Backpack_Normal.paa" // RTO
		};
	};
	class JA_104th_RTO_Mini_Backpack : SWLB_clone_RTO_mini_backpack
	{
		author = "Tundra";
		scopeCurator = 2;
		displayname = "Clone Trooper RTO mini backpack (104th)";
		maximumLoad = 200;
		hiddenSelectionsTextures[] =
		{
			"Jangos_Armory_Backpacks\data\Textures\104th_MiniPack.paa", // Minipack
			"Jangos_Armory_Backpacks\data\Textures\104th_MiniPack_slots.paa" // slotss
		};
	};

	// Cerberus Specific
	class JA_104th_Backpack_Cerberus_1 : SWLB_clone_backpack
	{
		author = "Tundra";
		scope = 2;
		scopeCurator = 2;
		displayname = "Clone Trooper backpack (Cerberus 1-1)";
		hiddenSelectionsTextures[] =
			{
				"Jangos_Armory_Backpacks\data\Textures\104th_1-1_Squad_Backpack.paa", // don't change this
				"Jangos_Armory_Backpacks\data\Textures\104th_1-1_Squad_Backpack.paa", // don't change unless RTO
				"",															// Heavy
				"",															// Medic
				""															// RTO
			};
	};
	class JA_104th_Accessories_Heavy_Backpack_Cerberus_1 : SWLB_clone_backpack_heavy
	{
		author = "Tundra";
		scopeCurator = 2;
		displayname = "Clone Trooper Heavy backpack (Cerberus 1-1)";
		hiddenSelectionsTextures[] =
			{
				"Jangos_Armory_Backpacks\data\Textures\104th_1-1_Squad_Backpack.paa", // don't change this
				"Jangos_Armory_Backpacks\data\Textures\104th_1-1_Squad_Backpack.paa", // don't change unless RTO
				"Jangos_Armory_Backpacks\data\Textures\104th_1-1_Squad_Backpack.paa", // Heavy
				"",															// Medic
				""															// RTO
			};
	};
	class JA_104th_Medic_Backpack_Cerberus_1 : SWLB_clone_backpack_medic
	{
		author = "Tundra";
		scopeCurator = 2;
		displayname = "Clone Trooper medic backpack (Cerberus 1-1)";
		maximumLoad = 300;
		hiddenSelectionsTextures[] =
			{
				"Jangos_Armory_Backpacks\data\Textures\104th_1-1_Squad_Backpack.paa", // don't change this
				"Jangos_Armory_Backpacks\data\Textures\104th_1-1_Squad_Backpack.paa", // don't change unless RTO
				"",															// Heavy
				"Jangos_Armory_Backpacks\data\Textures\104th_1-1_Squad_Backpack.paa", // Medic
				""															// RTO
			};
	};
	class JA_104th_RTO_Backpack_Cerberus_1 : SWLB_clone_backpack_RTO
	{
		author = "Tundra";
		scopeCurator = 2;
		displayname = "Clone Trooper RTO backpack (Cerberus 1-1)";
		hiddenSelectionsTextures[] =
			{
				"Jangos_Armory_Backpacks\data\Textures\104th_1-1_Squad_Backpack.paa", // don't change this
				"",															// don't change unless RTO
				"",															// Heavy
				"",															// Medic
				"Jangos_Armory_Backpacks\data\Textures\104th_1-1_Squad_Backpack.paa"	// RTO
			};
	};
	class JA_104th_Backpack_Cerberus_2 : SWLB_clone_backpack
	{
		author = "Tundra";
		scope = 2;
		scopeCurator = 2;
		displayname = "Clone Trooper backpack (Cerberus 1-2)";
		hiddenSelectionsTextures[] =
			{
				"Jangos_Armory_Backpacks\data\Textures\104th_1-2_Squad_Backpack.paa", // don't change this
				"Jangos_Armory_Backpacks\data\Textures\104th_1-2_Squad_Backpack.paa", // don't change unless RTO
				"",															// Heavy
				"",															// Medic
				""															// RTO
			};
	};
	class JA_104th_Accessories_Heavy_Backpack_Cerberus_2 : SWLB_clone_backpack_heavy
	{
		author = "Tundra";
		scopeCurator = 2;
		displayname = "Clone Trooper Heavy backpack (Cerberus 1-2)";
		hiddenSelectionsTextures[] =
			{
				"Jangos_Armory_Backpacks\data\Textures\104th_1-2_Squad_Backpack.paa", // don't change this
				"Jangos_Armory_Backpacks\data\Textures\104th_1-2_Squad_Backpack.paa", // don't change unless RTO
				"Jangos_Armory_Backpacks\data\Textures\104th_1-2_Squad_Backpack.paa", // Heavy
				"",															// Medic
				""															// RTO
			};
	};
	class JA_104th_Medic_Backpack_Cerberus_2 : SWLB_clone_backpack_medic
	{
		author = "Tundra";
		scopeCurator = 2;
		displayname = "Clone Trooper medic backpack (Cerberus 1-2)";
		maximumLoad = 300;
		hiddenSelectionsTextures[] =
			{
				"Jangos_Armory_Backpacks\data\Textures\104th_1-2_Squad_Backpack.paa", // don't change this
				"Jangos_Armory_Backpacks\data\Textures\104th_1-2_Squad_Backpack.paa", // don't change unless RTO
				"",															// Heavy
				"Jangos_Armory_Backpacks\data\Textures\104th_1-2_Squad_Backpack.paa", // Medic
				""															// RTO
			};
	};
	class JA_104th_RTO_Backpack_Cerberus_2 : SWLB_clone_backpack_RTO
	{
		author = "Tundra";
		scopeCurator = 2;
		displayname = "Clone Trooper RTO backpack (Cerberus 1-2)";
		hiddenSelectionsTextures[] =
			{
				"Jangos_Armory_Backpacks\data\Textures\104th_1-2_Squad_Backpack.paa", // don't change this
				"",															// don't change unless RTO
				"",															// Heavy
				"",															// Medic
				"Jangos_Armory_Backpacks\data\Textures\104th_1-2_Squad_Backpack.paa"	// RTO
			};
	};
	class JA_104th_Backpack_Cerberus_3 : SWLB_clone_backpack
	{
		author = "Tundra";
		scope = 2;
		scopeCurator = 2;
		displayname = "Clone Trooper backpack (Cerberus 1-3)";
		hiddenSelectionsTextures[] =
			{
				"Jangos_Armory_Backpacks\data\Textures\104th_1-3_Squad_Backpack.paa", // don't change this
				"Jangos_Armory_Backpacks\data\Textures\104th_1-3_Squad_Backpack.paa", // don't change unless RTO
				"",															// Heavy
				"",															// Medic
				""															// RTO
			};
	};
	class JA_104th_Accessories_Heavy_Backpack_Cerberus_3 : SWLB_clone_backpack_heavy
	{
		author = "Tundra";
		scopeCurator = 2;
		displayname = "Clone Trooper Heavy backpack (Cerberus 1-3)";
		hiddenSelectionsTextures[] =
			{
				"Jangos_Armory_Backpacks\data\Textures\104th_1-3_Squad_Backpack.paa", // don't change this
				"Jangos_Armory_Backpacks\data\Textures\104th_1-3_Squad_Backpack.paa", // don't change unless RTO
				"Jangos_Armory_Backpacks\data\Textures\104th_1-3_Squad_Backpack.paa", // Heavy
				"",															// Medic
				""															// RTO
			};
	};
	class JA_104th_Medic_Backpack_Cerberus_3 : SWLB_clone_backpack_medic
	{
		author = "Tundra";
		scopeCurator = 2;
		displayname = "Clone Trooper medic backpack (Cerberus 1-3)";
		maximumLoad = 300;
		hiddenSelectionsTextures[] =
			{
				"Jangos_Armory_Backpacks\data\Textures\104th_1-3_Squad_Backpack.paa", // don't change this
				"Jangos_Armory_Backpacks\data\Textures\104th_1-3_Squad_Backpack.paa", // don't change unless RTO
				"",															// Heavy
				"Jangos_Armory_Backpacks\data\Textures\104th_1-3_Squad_Backpack.paa", // Medic
				""															// RTO
			};
	};
	class JA_104th_RTO_Backpack_Cerberus_3 : SWLB_clone_backpack_RTO
	{
		author = "Tundra";
		scopeCurator = 2;
		displayname = "Clone Trooper RTO backpack (Cerberus 1-3)";
		hiddenSelectionsTextures[] =
			{
				"Jangos_Armory_Backpacks\data\Textures\104th_1-3_Squad_Backpack.paa", // don't change this
				"",															// don't change unless RTO
				"",															// Heavy
				"",															// Medic
				"Jangos_Armory_Backpacks\data\Textures\104th_1-3_Squad_Backpack.paa"	// RTO
			};
	};
	class JA_104th_Accessories_Heavy_Backpack_Bulky : SWLB_clone_backpack_heavy
	{
		author = "Tundra";
		scopeCurator = 2;
		displayname = "Clone Trooper Heavy backpack (Bulky)";
		hiddenSelectionsTextures[] =
			{
				"Jangos_Armory_Backpacks\data\Textures\104th_P2_Bulky_Backpack.paa", // don't change this
				"Jangos_Armory_Backpacks\data\Textures\104th_P2_Bulky_Backpack.paa", // don't change unless RTO
				"Jangos_Armory_Backpacks\data\Textures\104th_P2_Bulky_Backpack.paa", // Heavy
				"",															// Medic
				""															// RTO
			};
		tf_dialog = "SWLB_clone_rto_radio_dialog" ;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_hasLRradio = 1;
		tf_range = 25000;
		tf_additional_channel = 1;
		tf_subtype = "digital_lr";
	};
	class JA_104th_Backpack_Cerberus_4 : SWLB_clone_backpack
	{
		author = "Tundra";
		scope = 2;
		scopeCurator = 2;
		displayname = "Clone Trooper backpack (Cerberus 1-4)";
		hiddenSelectionsTextures[] =
			{
				"Jangos_Armory_Backpacks\data\Textures\104th_1-4_Squad_Backpack.paa", // don't change this
				"Jangos_Armory_Backpacks\data\Textures\104th_1-4_Squad_Backpack.paa", // don't change unless RTO
				"",															// Heavy
				"",															// Medic
				""															// RTO
			};
	};
	class JA_104th_Accessories_Heavy_Backpack_Cerberus_4 : SWLB_clone_backpack_heavy
	{
		author = "Tundra";
		scopeCurator = 2;
		displayname = "Clone Trooper Heavy backpack (Cerberus 1-4)";
		hiddenSelectionsTextures[] =
			{
				"Jangos_Armory_Backpacks\data\Textures\104th_1-4_Squad_Backpack.paa", // don't change this
				"Jangos_Armory_Backpacks\data\Textures\104th_1-4_Squad_Backpack.paa", // don't change unless RTO
				"Jangos_Armory_Backpacks\data\Textures\104th_1-4_Squad_Backpack.paa", // Heavy
				"",															// Medic
				""															// RTO
			};
	};
	class JA_104th_Medic_Backpack_Cerberus_4 : SWLB_clone_backpack_medic
	{
		author = "Tundra";
		scopeCurator = 2;
		displayname = "Clone Trooper medic backpack (Cerberus 1-4)";
		maximumLoad = 300;
		hiddenSelectionsTextures[] =
			{
				"Jangos_Armory_Backpacks\data\Textures\104th_1-4_Squad_Backpack.paa", // don't change this
				"Jangos_Armory_Backpacks\data\Textures\104th_1-4_Squad_Backpack.paa", // don't change unless RTO
				"",															// Heavy
				"Jangos_Armory_Backpacks\data\Textures\104th_1-4_Squad_Backpack.paa", // Medic
				""															// RTO
			};
	};
	class JA_104th_RTO_Backpack_Cerberus_4 : SWLB_clone_backpack_RTO
	{
		author = "Tundra";
		scopeCurator = 2;
		displayname = "Clone Trooper RTO backpack (Cerberus 1-4)";
		hiddenSelectionsTextures[] =
			{
				"Jangos_Armory_Backpacks\data\Textures\104th_1-4_Squad_Backpack.paa", // don't change this
				"",															// don't change unless RTO
				"",															// Heavy
				"",															// Medic
				"Jangos_Armory_Backpacks\data\Textures\104th_1-4_Squad_Backpack.paa"	// RTO
			};
	};

	class JA_104th_Backpack_ME : SWLB_clone_backpack
	{
		author = "Tundra";
		scope = 2;
		scopeCurator = 2;
		displayname = "Clone Trooper backpack (104th MLV)";
		hiddenSelectionsTextures[] =
			{
				"Jangos_Armory_Backpacks\data\Textures\104th_P1_Red_Backpack.paa", // don't change this
				"Jangos_Armory_Backpacks\data\Textures\104th_P1_Red_Backpack.paa", // don't change unless RTO
				"",															// Heavy
				"",															// Medic
				""															// RTO
			};
	};
	class JA_104th_Accessories_Heavy_Backpack_ME : SWLB_clone_backpack_heavy
	{
		author = "Tundra";
		scopeCurator = 2;
		displayname = "Clone Trooper Heavy backpack (104th MLV)";
		hiddenSelectionsTextures[] =
			{
				"Jangos_Armory_Backpacks\data\Textures\104th_P1_Red_Backpack.paa", // don't change this
				"Jangos_Armory_Backpacks\data\Textures\104th_P1_Red_Backpack.paa", // don't change unless RTO
				"Jangos_Armory_Backpacks\data\Textures\104th_P1_Red_Backpack.paa", // Heavy
				"",															// Medic
				""															// RTO
			};
	};
	class JA_104th_Medic_Backpack_ME : SWLB_clone_backpack_medic
	{
		author = "Tundra";
		scopeCurator = 2;
		displayname = "Clone Trooper medic backpack (104th MLV)";
		maximumLoad = 300;
		hiddenSelectionsTextures[] =
			{
				"Jangos_Armory_Backpacks\data\Textures\104th_P1_Red_Medic_Backpack.paa", // don't change this
				"Jangos_Armory_Backpacks\data\Textures\104th_P1_Red_Medic_Backpack.paa", // don't change unless RTO
				"",															// Heavy
				"Jangos_Armory_Backpacks\data\Textures\104th_P1_Red_Medic_Backpack.paa", // Medic
				""															// RTO
			};
	};
	class JA_104th_RTO_Backpack_ME : SWLB_clone_backpack_RTO
	{
		author = "Tundra";
		scopeCurator = 2;
		displayname = "Clone Trooper RTO backpack (104th MLV)";
		hiddenSelectionsTextures[] =
			{
				"Jangos_Armory_Backpacks\data\Textures\104th_P1_Red_Backpack.paa", // don't change this
				"",															// don't change unless RTO
				"",															// Heavy
				"",															// Medic
				"Jangos_Armory_Backpacks\data\Textures\104th_P1_Red_Backpack.paa"	// RTO
			};
	};

	// Airborne JT12s
	class JA_104th_Jumppack_LR : JLTS_Clone_jumppack
	{
		author = "Dak";
		scope = 2;
		scopeCurator = 2;
		displayname = "Clone Trooper jumppack LR";
		RD501_jumppack_energy_capacity = 100;
		tf_dialog = "SWLB_clone_rto_radio_dialog";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_hasLRradio = 1;
		tf_range = 25000;
		tf_additional_channel = 1;
		tf_subtype = "digital_lr";
	};
	class JA_104th_Jumppack : JLTS_Clone_jumppack
	{
		author = "Dak";
		scope = 2;
		scopeCurator = 2;
		displayname = "Clone Trooper jumppack";
		RD501_jumppack_energy_capacity = 100;
	};
	class JA_104th_Jumppack_JT12_LR_DC : JLTS_Clone_jumppack_JT12_104
	{
		author = "Dak";
		scope = 2;
		scopeCurator = 2;
		displayname = "Clone Trooper JT12 LR - NO RECHARGE";
		RD501_jumppack_energy_capacity = 100;
		tf_dialog = "SWLB_clone_rto_radio_dialog";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_hasLRradio = 1;
		tf_range = 25000;
		tf_additional_channel = 1;
		tf_subtype = "digital_lr";
		JLTS_energy[] = {15, 3000};
		JLTS_recharge = -1;
	};
	class JA_104th_Jumppack_JT12_DC : JLTS_Clone_jumppack_JT12_104
	{
		author = "Dak";
		scope = 2;
		scopeCurator = 2;
		displayname = "Clone Trooper JT12  - NO RECHARGE";
		RD501_jumppack_energy_capacity = 100;
		JLTS_energy[] = {15, 3000};
		JLTS_recharge = -1;
	};
	class JA_104th_Jumppack_JT12_LR_Journeyman : ls_greenfor_journeymanJetpack_backpack
	{
		author = "Dak";
		scope = 2;
		scopeCurator = 2;
		displayname = "Clone Trooper JT12 LR - Journeyman";
		RD501_jumppack_energy_capacity = 100;
		tf_dialog = "SWLB_clone_rto_radio_dialog";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_hasLRradio = 1;
		tf_range = 25000;
		tf_additional_channel = 1;
		tf_subtype = "digital_lr";
	};
	class JA_104th_Jumppack_JT12_LR : JLTS_Clone_jumppack_JT12_104
	{
		author = "Dak";
		scope = 2;
		scopeCurator = 2;
		displayname = "Clone Trooper JT12 LR";
		RD501_jumppack_energy_capacity = 100;
		tf_dialog = "SWLB_clone_rto_radio_dialog";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_hasLRradio = 1;
		tf_range = 25000;
		tf_additional_channel = 1;
		tf_subtype = "digital_lr";
	};
	class JA_104th_Jumppack_JT12 : JLTS_Clone_jumppack_JT12_104
	{
		author = "Dak";
		scope = 2;
		scopeCurator = 2;
		displayname = "Clone Trooper JT12";
		RD501_jumppack_energy_capacity = 100;
	};
	class JA_104th_Jumppack_mc_LR : JLTS_Clone_jumppack_mc
	{
		author = "Dak";
		scope = 2;
		scopeCurator = 2;
		displayname = "Clone Marshal Commander Jumppack LR";
		RD501_jumppack_energy_capacity = 100;
		tf_dialog = "SWLB_clone_rto_radio_dialog";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_hasLRradio = 1;
		tf_range = 25000;
		tf_additional_channel = 1;
		tf_subtype = "digital_lr";
	};
	class JA_104th_Jumppack_mc : JLTS_Clone_jumppack_mc
	{
		author = "Dak";
		scope = 2;
		scopeCurator = 2;
		displayname = "Clone Marshal Commander jumppack";
		RD501_jumppack_energy_capacity = 100;
		tf_dialog = "";
		tf_dialogUpdate = "";
		tf_encryptionCode = "";
		tf_hasLRradio = 0;
		tf_range = 0;
		tf_subtype = "";
	};
	class JA_104th_Jumppack_CDV : RD501_JLTS_Clone_jumppack_cdv
	{
		author = "501st + Echo";
		scope = 2;
		scopeCurator = 2;
		displayname = "Clone CDV Pilot jumppack";
		tf_dialog = "anarc210_radio_dialog";
		tf_dialogUpdate = "[""CH%1""] call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_hasLRradio = 1;
		tf_range = 40000;
		tf_subtype = "airborne";
	};
	class JA_104th_Jumppack_JT12_Magnum_LR : JA_104th_Jumppack_JT12_LR_Journeyman
	{
		author = "Dak";
		scope = 2;
		scopeCurator = 2;
		displayname = "Clone Trooper JT12 LR (Magnum)";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"Jangos_Armory_Backpacks\data\Textures\104th_AB_Magnum_Jumppack.paa"};
	};
	class JA_104th_Jumppack_JT12_Raider_LR : JA_104th_Jumppack_JT12_LR
	{
		author = "Dak";
		scope = 2;
		scopeCurator = 2;
		displayname = "Clone Trooper JT12 LR (Raider)";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"Jangos_Armory_Backpacks\data\Textures\104th_Raider_Jumppack.paa"};
	};
	class JA_104th_Jumppack_JT12_Raider : JA_104th_Jumppack_JT12
	{
		author = "Dak";
		scope = 2;
		scopeCurator = 2;
		displayname = "Clone Trooper JT12 (Raider)";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"Jangos_Armory_Backpacks\data\Textures\104th_Raider_Jumppack.paa"};
	};
	class JA_104th_Jumppack_JT12_Raider_1_LR : JA_104th_Jumppack_JT12_LR
	{
		author = "Dak";
		scope = 2;
		scopeCurator = 2;
		displayname = "Clone Trooper JT12 LR (Raider 2-1)";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"Jangos_Armory_Backpacks\data\Textures\104th_Raider_2-1_Jumppack.paa"};
	};
	class JA_104th_Jumppack_JT12_Raider_1 : JA_104th_Jumppack_JT12
	{
		author = "Dak";
		scope = 2;
		scopeCurator = 2;
		displayname = "Clone Trooper JT12 (Raider 2-1)";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"Jangos_Armory_Backpacks\data\Textures\104th_Raider_2-1_Jumppack.paa"};
	};
	class JA_104th_Jumppack_JT12_Raider_2_LR : JA_104th_Jumppack_JT12_LR
	{
		author = "Dak";
		scope = 2;
		scopeCurator = 2;
		displayname = "Clone Trooper JT12 LR (Raider 2-2)";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"Jangos_Armory_Backpacks\data\Textures\104th_Raider_2-2_Jumppack.paa"};
	};
	class JA_104th_Jumppack_JT12_Raider_2 : JA_104th_Jumppack_JT12
	{
		author = "Dak";
		scope = 2;
		scopeCurator = 2;
		displayname = "Clone Trooper JT12 (Raider 2-2)";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"Jangos_Armory_Backpacks\data\Textures\104th_Raider_2-2_Jumppack.paa"};
	};
	class JA_104th_Jumppack_JT12_Raider_3_LR : JA_104th_Jumppack_JT12_LR
	{
		author = "Dak";
		scope = 2;
		scopeCurator = 2;
		displayname = "Clone Trooper JT12 LR (Raider 2-3)";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"Jangos_Armory_Backpacks\data\Textures\104th_Raider_2-3_Jumppack.paa"};
	};
	class JA_104th_Jumppack_JT12_Raider_3 : JA_104th_Jumppack_JT12
	{
		author = "Dak";
		scope = 2;
		scopeCurator = 2;
		displayname = "Clone Trooper JT12 (Raider 2-3)";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"Jangos_Armory_Backpacks\data\Textures\104th_Raider_2-3_Jumppack.paa"};
	};
	class JA_104th_Jumppack_JT12_Raider_4_LR : JA_104th_Jumppack_JT12_LR
	{
		author = "Dak";
		scope = 2;
		scopeCurator = 2;
		displayname = "Clone Trooper JT12 LR (Raider 2-4)";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"Jangos_Armory_Backpacks\data\Textures\104th_Raider_2-4_Jumppack.paa"};
	};
	class JA_104th_Jumppack_JT12_Raider_4 : JA_104th_Jumppack_JT12
	{
		author = "Dak";
		scope = 2;
		scopeCurator = 2;
		displayname = "Clone Trooper JT12 (Raider 2-4)";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"Jangos_Armory_Backpacks\data\Textures\104th_Raider_2-4_Jumppack.paa"};
	};
};