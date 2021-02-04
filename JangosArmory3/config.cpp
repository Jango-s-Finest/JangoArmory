#include "basicDefines_A3.hpp"
class DefaultEventhandlers;
class UniformSlotInfo;
class CfgPatches
{
	class Jangos_Armory_3
	{
		author = "Jango's Finest";
		requiredVersion = 0.1;
		requiredAddons[] = {};
		units[] = {
			"JA_104th_Crash",
			"JA_104th_JTAC",
			"JA_104th_Crowbi",
			"JA_104th_Red",
			"JA_104th_Waffle",
			"JA_104th_Salty",
			"JA_104th_Fenrir",
			"JA_104th_Paraso",
			"JA_104th_ARF",
			"JA_104th_ARFMedic",
			"JA_104th_Carmine",
			"JA_104th_Dak",
			"JA_Quick",
			"JA_332nd_Chich",
			"JA_104th_Frosty",
			"JA_104th_Spectre",
			"JA_104th_Jumppack_LR",
			"JA_104th_Jumppack",
			"JA_104th_Jumppack_JT12_LR",
			"JA_104th_Jumppack_JT12",
			"JA_104th_Jumppack_mc_LR",
			"JA_104th_Jumppack_mc"		
		};
		weapons[] = {
			"JA_104th_Crash_Uniform",
			"JA_104th_JTAC_Uniform",
			"JA_104th_JTAC_Helmet",
			"JA_104th_Crowbi_Helmet",
			"JA_104th_Crowbi_Uniform",
			"JA_104th_Red_Uniform",
			"JA_104th_Waffle_Helmet",
			"JA_104th_Waffle_Uniform",
			"JA_104th_Salty_Helmet",
			"JA_104th_Salty_Uniform",
			"JA_104th_Fenrir_Uniform",
			"JA_104th_Crash_Helmet",
			"JA_104th_Spectre_Helmet",
			"JA_104th_Spectre_Uniform",
			"JA_104th_Frosty_Helmet",
			"JA_104th_Frosty_Uniform",
			"JA_104th_Fenrir_Helmet",
			"JA_104th_Niner_Helmet",
			"JA_104th_Raptor_Helmet",
			"JA_302nd_Chich_Helmet",
			"JA_302nd_Chich_Uniform",
			"JA_302nd_Chich_Vest",
			"JA_302nd_CommanderVisor",
			"JA_104th_Paraso_Helmet",
			"JA_104th_Paraso_Uniform",
			"JA_104th_ARF_Uniform",
			"JA_104th_ARFMedic_Uniform",
			"JA_104th_Carmine_Uniform",
			"JA_104th_Dak_Uniform",
			"JA_Quick_Uniform",
			"JA_104th_Carmine_Vest",
			"JA_104th_ARF_Helmet",
			"JA_104th_ARFMedic_Helmet",
			"JA_104th_Carmine_Helmet",
			"JA_104th_Dak_Helmet",
			"JA_Quick_Helmet"
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
	class SWLB_clone_nvg;
	class SWLB_clone_nvg_nco;
	class SWLB_clone_ccVisor;
	class SWLB_clone_mcVisor;
	class SWLB_clone_kama_armor;
	class SWLB_clone_medic_armor;
	class SWLB_clone_basic_armor;
	class SWLB_clone_airborne_nco_armor;
	class SWLB_P2_SpecOps_Helmet;
	class UniformItem;
	class VestItem;
	
	// General Uniforms
	class JA_104th_Crash_Uniform : SWLB_clone_mc_uniform
	{
		author = "Ice";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper armor (104th Crash)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2",
			"biceps",
			"rank"
		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory3\data\Textures\104th_JTAC_Crash_Upper.paa",
			"JangosArmory3\data\Textures\104th_JTAC_Crash_Lower.paa",
			"JangosArmory3\data\Textures\104th_JTAC_Crash_Upper.paa",
			""
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Crash";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_JTAC_Uniform : SWLB_clone_mc_uniform
	{
		author = "Ice";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper armor (104th JTAC)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2",
			"biceps",
			"rank"
		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory3\data\Textures\104th_JTAC_Base_Upper.paa",
			"JangosArmory3\data\Textures\104th_JTAC_Base_Lower.paa",
			"JangosArmory3\data\Textures\104th_JTAC_Base_Upper.paa",
			""
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_JTAC";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_JTAC_Helmet : SWLB_P2_SpecOps_Helmet
	{
		author = "Ice";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper Special Activities Helmet (104th JTAC)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory3\data\Textures\104th_JTAC_Base_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_Crowbi_Helmet : SWLB_clone_P15_Helmet
	{
		author = "Ice";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper ARC Trooper Helmet (104th Crowbi)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory3\data\Textures\104th_ARC_Crowbi_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_Crowbi_Uniform : SWLB_clone_uniform
	{
		author = "Ice";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper armor (104th Crowbi)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory3\data\Textures\104th_ARC_Crowbi_Upper.paa",
			"JangosArmory3\data\Textures\104th_ARC_Crowbi_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Crowbi";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Red_Uniform : SWLB_clone_uniform
	{
		author = "Ice";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper armor (104th Red)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory3\data\Textures\104th_AB_Red_Upper.paa",
			"JangosArmory3\data\Textures\104th_AB_Red_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Red";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Waffle_Helmet : SWLB_clone_AB_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper Airborne Helmet (104th Waffle)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory3\data\Textures\104th_AB_Waffle_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_Waffle_Uniform : SWLB_clone_uniform
	{
		author = "Ice";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper armor (104th Waffle)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory3\data\Textures\104th_AB_Waffle_Upper.paa",
			"JangosArmory3\data\Textures\104th_AB_Waffle_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Waffle";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Salty_Helmet : SWLB_clone_P2_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper P2 Helmet (104th Salty)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory3\data\Textures\104th_P2_Salty_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_Salty_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper armor (104th Salty)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory3\data\Textures\104th_P2_Salty_Upper.paa",
			"JangosArmory3\data\Textures\104th_P2_Salty_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Salty";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Fenrir_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper armor (104th Fenrir)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory3\data\Textures\104th_ARF_Fenrir_Upper.paa",
			"JangosArmory3\data\Textures\104th_ARF_Fenrir_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Fenrir";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Crash_Helmet : SWLB_P2_SpecOps_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper Special Activities Helmet (104th Crash)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory3\data\Textures\104th_JTAC_Crash_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_Spectre_Helmet : SWLB_clone_AB_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper Airborne Helmet (104th Spectre)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory3\data\Textures\104th_AB_Spectre_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_Spectre_Uniform : SWLB_clone_mc_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper armor (104th Spectre)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2",
			"biceps",
			"rank"
		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory3\data\Textures\104th_AB_Spectre_Upper.paa",
			"JangosArmory3\data\Textures\104th_AB_Spectre_Lower.paa",
			"JangosArmory3\data\Textures\104th_AB_Spectre_Upper.paa",
			""
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Spectre";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Frosty_Helmet : SWLB_clone_P15_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper ARC Trooper Helmet (104th Frosty)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory3\data\Textures\104th_ARC_Frosty_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_Frosty_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper armor (104th Frosty)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory3\data\Textures\104th_ARC_Frosty_Upper.paa",
			"JangosArmory3\data\Textures\104th_ARC_Frosty_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Frosty";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Fenrir_Helmet : SWLB_clone_ARF_P1_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper ARF Helmet (104th Fenrir)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory3\data\Textures\104th_ARF_Fenrir_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_Niner_Helmet : SWLB_clone_AB_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper Airborne Helmet (104th Niner)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory3\data\Textures\104th_AB_Niner_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_Raptor_Helmet : SWLB_clone_AB_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper Airborne Helmet (104th Raptor)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory3\data\Textures\104th_AB_Raptor_Helmet.paa" }; // the file path to the texture
	};
	class JA_302nd_Chich_Helmet : SWLB_clone_P2_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper P2 Helmet (332nd Chich)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory3\data\Textures\332chichhlmet.paa" }; // the file path to the texture
	};
	class JA_302nd_Chich_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper armor (332nd Chich)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory3\data\Textures\332chichupper.paa",
			"JangosArmory3\data\Textures\332chichlower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_332nd_Chich";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_302nd_Chich_Vest : SWLB_clone_commander_armor
	{
		author = "Dak";
		displayName = "Clone trooper commander vest (332nd Chich)";
		hiddenSelections[] =
		{
			"camo1"

		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory3\data\Textures\332chichkama.paa"
		};
		vestType="Rebreather";	
	};
	class JA_302nd_CommanderVisor : SWLB_clone_mcVisor
	{
		author = "Dak";
		displayName = "Clone Commander Visor (332nd Chich)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"

		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory3\data\Textures\332commandervisor.paa",
			"JangosArmory3\data\Textures\332commandervisor.paa"
		};
	};
	class JA_104th_Paraso_Helmet : SWLB_clone_P2_Helmet
	{
		author = "Tundra";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper P2 Helmet (104th Paraso)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory3\data\Textures\104th_P2_Paraso_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_Paraso_Uniform : SWLB_clone_uniform
	{
		author = "Jango's Finest";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper armor (104th Paraso)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory3\data\Textures\104th_P2_Paraso_Upper.paa",
			"JangosArmory3\data\Textures\104th_P2_Paraso_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Paraso";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_ARF_Uniform : SWLB_clone_uniform
	{
		author = "Jango's Finest";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper armor (104th ARF)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory3\data\Textures\104th_ARF_Upper.paa",
			"JangosArmory3\data\Textures\104th_ARF_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_ARF";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_ARFMedic_Uniform : SWLB_clone_uniform
	{
		author = "Jango's Finest";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper armor (104th ARF Medic)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory3\data\Textures\104th_ARFMedic_Upper.paa",
			"JangosArmory3\data\Textures\104th_ARFMedic_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_ARFMedic";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Carmine_Uniform : SWLB_clone_uniform
	{
		author = "Jango's Finest";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper armor (104th Carmine)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory3\data\Textures\104th_Carmine_Upper.paa",
			"JangosArmory3\data\Textures\104th_Carmine_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Carmine";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Dak_Uniform : SWLB_clone_uniform
	{
		author = "Jango's Finest";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper armor (104th Dak)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory3\data\Textures\104th_Dak_Upper.paa",
			"JangosArmory3\data\Textures\104th_Dak_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Dak";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_Quick_Uniform : SWLB_clone_uniform
	{
		author = "Jango's Finest";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper armor (Quick)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory3\data\Textures\Quick_Upper.paa",
			"JangosArmory3\data\Textures\Quick_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_Quick";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Carmine_Vest : SWLB_clone_airborne_nco_armor
	{
		author = "Emmet"
			scope = 2;
		displayName = "Airborne NCO Vest (104th Carmine)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory\data\Textures\104th_Accessories_Heavy.paa", // Heavy
			"JangosArmory3\data\Textures\officer_Kama_Carmine.paa",
			"JangosArmory\data\Textures\104th_Accessories_Heavy.paa", //Heavy
			"JangosArmory\data\Textures\104th_Accessories_Heavy.paa" //Heavy
		};
		vestType="Rebreather";	
	};
	class JA_104th_ARF_Helmet : SWLB_clone_ARF_P1_Helmet
	{
		author = "Tundra";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper ARF P1 Helmet (104th ARF)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory3\data\Textures\104th_ARF_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_ARFMedic_Helmet : SWLB_clone_ARF_P1_Helmet
	{
		author = "Tundra";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper ARF P1 Helmet (104th ARF Medic)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory3\data\Textures\104th_ARFMedic_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_Carmine_Helmet : SWLB_clone_AB_helmet
	{
		author = "Tundra";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper Airborne Helmet (104th Carmine)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory3\data\Textures\104th_Carmine_AB_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_Dak_Helmet : SWLB_clone_AB_helmet
	{
		author = "Tundra";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper Airborne Helmet (104th Dak)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory3\data\Textures\104th_Dak_AB_Helmet.paa" }; // the file path to the texture
	};
	class JA_Quick_Helmet : SWLB_clone_P2_Helmet
	{
		author = "Tundra";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper P2 Helmet (Quick)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory3\data\Textures\Quick_P2_Helmet.paa" }; // the file path to the texture
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
	class JLTS_Clone_jumppack_JT12_104;
	class JLTS_Clone_jumppack_mc;
	// General Uniforms
	class JA_104th_Crash : SWLB_clone_marshal_commander_base_P2
	{
		author = "Ice";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_104th_Crash_Uniform";
		displayName = "104th Crash";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones";
		hiddenSelections[] = { "camo1", "camo2","biceps","rank" };
		hiddenSelectionsTextures[] = {"JangosArmory3\data\Textures\104th_JTAC_Crash_Upper.paa", "JangosArmory3\data\Textures\104th_JTAC_Crash_Lower.paa","JangosArmory3\data\Textures\104th_Crash_Base_Upper.paa",""};
		linkedItems[] = { JA_104th_Crash_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_Crash_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};	
	class JA_104th_JTAC : SWLB_clone_marshal_commander_base_P2
	{
		author = "Ice";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_104th_JTAC_Uniform";
		displayName = "104th JTAC";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Basic";
		hiddenSelections[] = { "camo1", "camo2","biceps","rank" };
		hiddenSelectionsTextures[] = {"JangosArmory3\data\Textures\104th_JTAC_Base_Upper.paa", "JangosArmory3\data\Textures\104th_JTAC_Base_Lower.paa","JangosArmory3\data\Textures\104th_JTAC_Base_Upper.paa",""};
		linkedItems[] = { JA_104th_JTAC_Base_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_JTAC_Base_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};	
	class JA_104th_Crowbi : SWLB_clone_base_P2
	{
		author = "Ice";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_104th_Crowbi_Uniform";
		displayName = "104th ARC Crowbi";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"JangosArmory3\data\Textures\104th_ARC_Crowbi_Upper.paa", "JangosArmory3\data\Textures\104th_ARC_Crowbi_Lower.paa"};
		linkedItems[] = { JA_104th_Crowbi_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_Crowbi_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};	
	class JA_104th_Red : SWLB_clone_base_P2
	{
		author = "Ice";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_104th_Red_Uniform";
		displayName = "104th AB Red";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"JangosArmory3\data\Textures\104th_AB_Red_Upper.paa", "JangosArmory3\data\Textures\104th_AB_Red_Lower.paa"};
		linkedItems[] = { JA_104th_Red_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_Red_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};	
	class JA_104th_Waffle : SWLB_clone_base_P2
	{
		author = "Ice";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_104th_Waffle_Uniform";
		displayName = "104th AB Waffle";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"JangosArmory3\data\Textures\104th_AB_Waffle_Upper.paa", "JangosArmory3\data\Textures\104th_AB_Waffle_Lower.paa"};
		linkedItems[] = { JA_104th_Waffle_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_Waffle_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};	
	class JA_104th_Salty : SWLB_clone_base_P2
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_104th_Salty_Uniform";
		displayName = "104th P2 Salty";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"JangosArmory3\data\Textures\104th_P2_Salty_Upper.paa", "JangosArmory3\data\Textures\104th_P2_Salty_Lower.paa"};
		linkedItems[] = { JA_104th_Salty_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_Salty_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};	
	class JA_104th_Fenrir : SWLB_clone_base_P2
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_104th_Fenrir_Uniform";
		displayName = "104th ARF Fenrir";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"JangosArmory3\data\Textures\104th_ARF_Fenrir_Upper.paa", "JangosArmory3\data\Textures\104th_ARF_Fenrir_Lower.paa"};
		linkedItems[] = { JA_104th_Fenrir_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_Fenrir_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};	
	class JA_104th_Paraso : SWLB_clone_base_P2
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_104th_Paraso_Uniform";
		displayName = "104th P1 Paraso";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"JangosArmory3\data\Textures\104th_P2_Paraso_Upper.paa", "JangosArmory3\data\Textures\104th_P2_Paraso_Lower.paa"};
		linkedItems[] = { JA_104th_Paraso_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_Paraso_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};	
	class JA_104th_ARF : SWLB_clone_base_P2
	{
		author = "Tundra";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_104th_ARF_Uniform";
		displayName = "104th ARF";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Basic";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"JangosArmory3\data\Textures\104th_ARF_Upper.paa", "JangosArmory3\data\Textures\104th_ARF_Lower.paa"};
		linkedItems[] = { JA_104th_ARF_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_ARF_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};	
	class JA_104th_ARFMedic : SWLB_clone_base_P2
	{
		author = "Tundra";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_104th_ARFMedic_Uniform";
		displayName = "104th ARF Medic";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Basic";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"JangosArmory3\data\Textures\104th_ARFMedic_Upper.paa", "JangosArmory3\data\Textures\104th_ARFMedic_Lower.paa"};
		linkedItems[] = { JA_104th_ARFMedic_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_ARFMedic_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_104th_Carmine : SWLB_clone_base_P2
	{
		author = "Tundra";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_104th_Carmine_Uniform";
		displayName = "104th Carmine";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"JangosArmory3\data\Textures\104th_Carmine_Upper.paa", "JangosArmory3\data\Textures\104th_Carmine_Lower.paa"};
		linkedItems[] = { JA_104th_Carmine_Helmet, JA_104th_Carmine_Vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_Carmine_Helmet, JA_104th_Carmine_Vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_104th_Dak : SWLB_clone_base_P2
	{
		author = "Tundra";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_104th_Dak_Uniform";
		displayName = "104th Dak";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = { "JangosArmory3\data\Textures\104th_Dak_Upper.paa", "JangosArmory3\data\Textures\104th_Dak_Lower.paa" };
		linkedItems[] = { JA_104th_Dak_Helmet, SWLB_CEE_Airborne_Officer, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_Dak_Helmet, SWLB_CEE_Airborne_Officer, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};	
	class JA_Quick : SWLB_clone_base_P2
	{
		author = "Tundra";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_Quick_Uniform";
		displayName = "104th Quick";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Special";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"JangosArmory3\data\Textures\Quick_Upper.paa", "JangosArmory3\data\Textures\Quick_Lower.paa"};
		linkedItems[] = { JA_Quick_Helmet,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_Quick_Helmet,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_332nd_Chich : SWLB_clone_base_P2
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_302nd_Chich_Uniform";
		displayName = "332nd Chich";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Special";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"JangosArmory3\data\Textures\332chichupper.paa", "JangosArmory3\data\Textures\332chichlower.paa"};
		linkedItems[] = { JA_302nd_Chich_Helmet,JA_302nd_Chich_Vest,JA_302nd_CommanderVisor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_302nd_Chich_Helmet,JA_302nd_Chich_Vest,JA_302nd_CommanderVisor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_104th_Frosty : SWLB_clone_base_P2
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_104th_Frosty_Uniform";
		displayName = "104th Frosty";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"JangosArmory3\data\Textures\104th_ARC_Frosty_Upper.paa", "JangosArmory3\data\Textures\104th_ARC_Frosty_Lower.paa"};
		linkedItems[] = { JA_104th_Frosty_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_Frosty_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_104th_Spectre : SWLB_clone_marshal_commander_base_P2
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		vehicleClass = "Men";
        side = 1;
		uniformClass = "JA_104th_Spectre_Uniform";
		displayName = "104th Spectre";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		hiddenSelections[] ={"camo1","camo2","biceps","rank"};
		hiddenSelectionsTextures[] ={"JangosArmory3\data\Textures\104th_AB_Spectre_Upper.paa","JangosArmory3\data\Textures\104th_AB_Spectre_Lower.paa","JangosArmory3\data\Textures\104th_AB_Spectre_Upper.paa",""};
		linkedItems[] = { JA_104th_Spectre_Uniform,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_Spectre_Uniform,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_104th_Jumppack_LR : JLTS_Clone_jumppack
	{
		author = "Dak";
		scope = 2;
		scopeCurator = 2;
		displayname = "Clone trooper jumppack LR";
		RD501_jumppack_energy_capacity = 100;
		tf_dialog = "SWLB_clone_rto_radio_dialog"
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_hasLRradio = 1;
		tf_range = 25000;
		tf_additional_channel=1;
		tf_subtype = "digital_lr";
	};
	class JA_104th_Jumppack : JLTS_Clone_jumppack
	{
		author = "Dak";
		scope = 2;
		scopeCurator = 2;
		displayname = "Clone trooper jumppack";
		RD501_jumppack_energy_capacity = 100;
	};
	class JA_104th_Jumppack_JT12_LR : JLTS_Clone_jumppack_JT12_104
	{
		author = "Dak";
		scope = 2;
		scopeCurator = 2;
		displayname = "Clone trooper JT12 LR";
		RD501_jumppack_energy_capacity = 100;
		tf_dialog = "SWLB_clone_rto_radio_dialog"
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_hasLRradio = 1;
		tf_range = 25000;
		tf_additional_channel=1;
		tf_subtype = "digital_lr";
	};
	class JA_104th_Jumppack_JT12 : JLTS_Clone_jumppack_JT12_104
	{
		author = "Dak";
		scope = 2;
		scopeCurator = 2;
		displayname = "Clone trooper JT12";
		RD501_jumppack_energy_capacity = 100;
	};
	class JA_104th_Jumppack_mc_LR : JLTS_Clone_jumppack_mc
	{
		author = "Dak";
		scope = 2;
		scopeCurator = 2;
		displayname = "Clone marshal commander jumppack LR";
		RD501_jumppack_energy_capacity = 100;
		tf_dialog = "SWLB_clone_rto_radio_dialog"
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_hasLRradio = 1;
		tf_range = 25000;
		tf_additional_channel=1;
		tf_subtype = "digital_lr";
	};		
	class JA_104th_Jumppack_mc : JLTS_Clone_jumppack_mc
	{
		author = "Dak";
		scope = 2;
		scopeCurator = 2;
		displayname = "Clone marshal commander jumppack";
		RD501_jumppack_energy_capacity = 100;
		tf_dialog = "";
		tf_dialogUpdate = "";
		tf_encryptionCode = "";
		tf_hasLRradio = 0;
		tf_range = 0;
		tf_subtype = "";
	};		
};
