#include "basicDefines_A3.hpp"
class DefaultEventhandlers;
class UniformSlotInfo;
class CfgPatches
{
	class Jangos_Armory_Attachments
	{
		author = "Jango's Finest";
		requiredVersion = 0.1;
		requiredAddons[] = {};
		units[] = {
			"",
			};
		weapons[] = {
			"JA_104thNVG", 
			"JA_104thNVG_NCO",
			"JA_104thCommanderVisor",
			"JA_104th_Death_NVG_Tanker",
			"JA_104th_Crowbi_NVG_NCO",
			"JA_104th_Hunter_NVG_NCO",
			"JA_104th_Sigil_NVG_NCO",
			"JA_104th_Specter_NVG_NCO",
			"JA_104th_Loner_NVG_NCO"
		};
	};
};

class CfgFactionClasses
{
	class 104th_Guys
	{
		displayname = "Jango's Finest";
		priority = 1; // Position in list.
		side = 1;	  // Opfor = 0, Blufor = 1, Indep = 2.
		icon = "";
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
	class 104th_Categ_Special
	{
		displayname = "104th - Special";
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
	class lsd_gar_barcm2_helmet;
	class lsd_gar_rangefinder_nvg;
	class lsd_gar_p2MarshalCommander_nvg;
	class SWLB_P2_SpecOps_Helmet;
	class UniformItem;
	class VestItem;
	class lsd_gar_tanker_nvg; // Death NVGs
	
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
	class SWLB_CEE_Officer_Tactical : SWLB_clone_airborne_armor
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

	// General Attachments
	class JA_104thNVG : lsd_gar_standart_nvg // Move to J_A_Attachments
	{
		author = "Tundra";
		displayName = "Clone NVG Visor (104th)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"

		};
		hiddenSelectionsTextures[] =
		{
			"Jangos_Armory_Attachments\data\Textures\104th_NVGs.paa",
			""
		};
	};

	class JA_104thNVG_NCO : lsd_gar_rangefinder_nvg
	{
		author = "Tundra";
		displayName = "Clone NVG NCO Visor (104th)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"

		};
		hiddenSelectionsTextures[] =
		{
			"Jangos_Armory_Attachments\data\Textures\104th_NVGs.paa",
			"Jangos_Armory_Attachments\data\Textures\104th_NVGs.paa"
		};
	};

	class JA_104thCommanderVisor : lsd_gar_p2MarshalCommander_nvg
	{
		author = "Tundra";
		displayName = "Clone Commander Visor (104th Daddy)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"

		};
		hiddenSelectionsTextures[] =
		{
			"Jangos_Armory_Attachments\data\Textures\104th_Commander_NV.paa",
			"Jangos_Armory_Attachments\data\Textures\104th_Commander_NV.paa"
		};
	};
	class JA_104th_Death_NVG_Tanker : lsd_gar_tanker_nvg
	{
		author = "Fish";
		displayName = "Republic Armored Plating NVG (104th Death)";
		hiddenSelections[] =
			{
				"camo1"

			};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Armory_Attachments\data\Textures\104th_P2_Death_NVG.paa"};
	};
	class JA_104th_Crowbi_NVG_NCO : lsd_gar_rangefinder_nvg
	{
		author = "Ice";
		displayName = "Clone NVG NCO Visor (104th Crowbi)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"

			};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Armory_Attachments\data\Textures\104th_ARC_Crowbi_NVG.paa",
				"Jangos_Armory_Attachments\data\Textures\104th_ARC_Crowbi_NVG.paa"};
	};
	class JA_104th_Hunter_NVG_NCO : lsd_gar_rangefinder_nvg
	{
		author = "Ice";
		displayName = "Clone NVG NCO Visor (104th Hunter)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"

			};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Armory_Attachments\data\Textures\104th_ARC_Hunter_Rangefinder.paa",
				"Jangos_Armory_Attachments\data\Textures\104th_ARC_Hunter_Rangefinder.paa"};
	};
	class JA_104th_Loner_NVG_NCO : lsd_gar_rangefinder_nvg
	{
		author = "Ice";
		displayName = "Clone NVG NCO Visor (104th Loner)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"

			};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Armory_Attachments\data\Textures\104th_ARC_Loner_NVG.paa",
				"Jangos_Armory_Attachments\data\Textures\104th_ARC_Loner_NVG.paa"};
	};
	class JA_104th_Sigil_NVG_NCO : lsd_gar_rangefinder_nvg
	{
		author = "Ice";
		displayName = "Clone NVG NCO Visor (104th Sigil)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"

			};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Armory_Attachments\data\Textures\104th_ARC_Sigil_NVG.paa",
				"Jangos_Armory_Attachments\data\Textures\104th_ARC_Sigil_NVG.paa"};
	};
	class JA_104th_Specter_NVG_NCO : lsd_gar_rangefinder_nvg
	{
		author = "Ice";
		displayName = "Clone NVG NCO Visor (104th Spectre)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"

			};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Armory_Attachments\data\Textures\104th_ARC_Spectre_NVG.paa",
				"Jangos_Armory_Attachments\data\Textures\104th_ARC_Spectre_NVG.paa"};
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

};
