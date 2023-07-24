#include "basicDefines_A3.hpp"
class DefaultEventhandlers;
class UniformSlotInfo;
class CfgPatches
{
	class Jangos_Armory_4
	{
		author = "Jango's Finest";
		requiredVersion = 0.1;
		requiredAddons[] = {};
		units[] = {
		};
		weapons[] = {
			"JA_104th_AB_Axel_Officer_Trooper_Armor",
			"JA_104th_AB_Galahad_Officer_Trooper_Armor",
			"JA_104th_Carmine_Vest",
			"JA_104th_Osiris_Vest"
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
	class SWLB_Clone_airborne_armor;
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
	class SWLB_clone_basic_armor;
	class SWLB_clone_airborne_nco_armor;
	class ls_gar_airborneOfficer_vest;
	class SWLB_clone_eng_helmet;
	class SWLB_P2_SpecOps_Helmet;
	class UniformItem;
	class VestItem;
	class JA_104th_AB_Axel_Officer_Trooper_Armor : SWLB_CEE_Airborne_Officer
	{
        scopeArsenal = 0; // Duplicate vest
		author = "Dak";
		displayName = "Clone Airborne Officer Vest (104th Axel)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5"
		};
		hiddenSelectionsTextures[] =
		{
			"Jangos_Airborne_Vests\data\Textures\104th_AB_Axel_Heavy.paa", //Heavy
			"Jangos_Airborne_Vests\data\Textures\104th_AB_Axel_Heavy.paa", //Heavy
			"Jangos_Airborne_Vests\data\Textures\104th_AB_Axel_Officer.paa", 
			"Jangos_Airborne_Vests\data\Textures\104th_AB_Axel_Heavy.paa", //Heavy
			"Jangos_Airborne_Vests\data\Textures\104th_AB_Axel_Officer.paa"
		};
		vestType="Rebreather";	
	};
	class JA_104th_AB_Galahad_Officer_Trooper_Armor : ls_gar_airborneOfficer_vest
	{
		author = "Dak";
		displayName = "Clone Airborne Officer Vest (104th Galahad)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5"
		};
		hiddenSelectionsTextures[] =
		{
            // Jangos_Airborne_Vests\data\Textures\104th_Accessories_Heavy.paa doesn't exist
			"JangosArmory4\data\Textures\104th_Accessories_Heavy.paa", //Heavy
			"JangosArmory4\data\Textures\104th_Accessories_Heavy.paa", //Heavy
			"Jangos_Airborne_Vests\data\Textures\104th_AB_Galahad_Kama.paa", 
			"JangosArmory4\data\Textures\104th_Accessories_Heavy.paa"/*, //Heavy
			"Jangos_Airborne_Vests\data\Textures\104th_AB_Galahad_Kama.paa"*/
		};
		vestType="Rebreather";	
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
			"camo4"
		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory1\data\Textures\104th_Accessories_Heavy.paa", // Heavy
			"Jangos_Airborne_Vests\data\Textures\104th_AB_Carmine_Kama.paa",
			"JangosArmory1\data\Textures\104th_Accessories_Heavy.paa", //Heavy
			"JangosArmory1\data\Textures\104th_Accessories_Heavy.paa" //Heavy
		};
		vestType="Rebreather";	
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
			"camo4"
		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory1\data\Textures\104th_Accessories_Heavy.paa", // Heavy
			"Jangos_Airborne_Vests\data\Textures\104th_AB_Osiris_Kama.paa",
			"JangosArmory1\data\Textures\104th_Accessories_Heavy.paa", //Heavy
			"JangosArmory1\data\Textures\104th_Accessories_Heavy.paa" //Heavy
		};
		vestType="Rebreather";	
	};
};
