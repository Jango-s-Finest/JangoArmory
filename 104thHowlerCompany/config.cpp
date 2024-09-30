#include "basicDefines_A3.hpp"
class DefaultEventhandlers;
class UniformSlotInfo;
class CfgPatches
{
	class Jangos_Armory_Howler
	{
		author = "Jango's Finest";
		units[] = {
			"JA_104th_Base_SB_Howler_Kaleb",
			"JA_104th_Base_SB_Howler_NCO",
			"JA_104th_Base_SB_Howler_Officer",
			"JA_104th_Base_P2_Howler_Kaleb",
			"JA_104th_Base_P2_Howler_NCO",
			"JA_104th_Base_P2_Howler_Officer",
			"JA_104th_Base_ME_Howler_Kaleb",
			"JA_104th_Base_ME_Howler_NCO",
			"JA_104th_Base_ME_Howler_Officer",
			"JA_104th_Base_ME_Howler_Paak",
			"JA_104th_Base_P2_Howler_Paak",
			"JA_104th_Base_SB_Howler_Paak",
			"JA_104th_Base_ME_Howler_Trooper",
			"JA_104th_Base_P2_Howler_Trooper",
			"JA_104th_Base_SB_Howler_Trooper",
			"JA_104th_Base_ME_Howler_Medic",
			"JA_104th_Base_P2_Howler_Medic",
			"JA_104th_Base_SB_Howler_Medic"
		};
		weapons[] = {
			"JA_Howler_SB_Base_Kaleb_Helmet",
			"JA_Howler_SB_Base_Kaleb_Uniform",
			"JA_Howler_SB_Base_NCO_Helmet",
			"JA_Howler_SB_Base_NCO_Uniform",
			"JA_Howler_SB_Base_Officer_Helmet",
			"JA_Howler_SB_Base_Officer_Uniform",
			"JA_Howler_P2_Base_Kaleb_Helmet",
			"JA_Howler_P2_Base_Kaleb_Uniform",
			"JA_Howler_P2_Base_NCO_Helmet",
			"JA_Howler_P2_Base_NCO_Uniform",
			"JA_Howler_P2_Base_Officer_Helmet",
			"JA_Howler_P2_Base_Officer_Uniform",
			"JA_Howler_ME_Base_Kaleb_Helmet",
			"JA_Howler_ME_Base_Kaleb_Uniform",
			"JA_Howler_ME_Base_NCO_Helmet",
			"JA_Howler_ME_Base_NCO_Uniform",
			"JA_Howler_ME_Base_Officer_Helmet",
			"JA_Howler_ME_Base_Officer_Uniform",
			"JA_Howler_SB_Base_Paak_Helmet",
			"JA_Howler_SB_Base_Paak_Uniform",
			"JA_Howler_P2_Base_Paak_Helmet",
			"JA_Howler_P2_Base_Paak_Uniform",
			"JA_Howler_ME_Base_Paak_Helmet",
			"JA_Howler_ME_Base_Paak_Uniform",
			"JA_Howler_SB_Base_Trooper_Helmet",
			"JA_Howler_SB_Base_Trooper_Uniform",
			"JA_Howler_P2_Base_Trooper_Helmet",
			"JA_Howler_P2_Base_Trooper_Uniform",
			"JA_Howler_ME_Base_Trooper_Helmet",
			"JA_Howler_ME_Base_Trooper_Uniform",
			"JA_Howler_SB_Base_Medic_Helmet",
			"JA_Howler_SB_Base_Medic_Uniform",
			"JA_Howler_P2_Base_Medic_Helmet",
			"JA_Howler_P2_Base_Medic_Uniform",
			"JA_Howler_ME_Base_Medic_Helmet",
			"JA_Howler_ME_Base_Medic_Uniform",
			"JA_Howler_AB_Base_Trooper_Armor",
			"JA_Howler_AB_Base_NCO_Armor",
			"JA_Howler_AB_Base_Officer_Armor",
			"JA_Howler_P2_Base_Officer_Armor"
		};
	};
};

class CfgFactionClasses
{
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
};
class cfgEditorSubcategories
{
	class 104th_Categ_Clones_Howler
	{
		displayname = "104th - Howler Company";
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
	class UniformItem;
	class VestItem;

    // Inheritance for vests
    // Makes making each vest a rebreather easier
    class ItemInfo;
    class SWLB_clone_basic_armor;
	class JA_104th_AB_Base_Trooper_Armor;
    class SWLB_clone_airborne_armor;
    class JA_104th_Spirit_Vest;
    class SWLB_CEE_Force_Recon_NCO;
    
    class ls_blueforVest_base;
    class JA_104th_AB_Officer_Trooper_Armor;

    class SWLB_clone_officer_armor;
	class JA_104th_Base_officer_Vest;

	class JA_Howler_SB_Base_Kaleb_Helmet : SWLB_clone_P1_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper Helmet (Howler Kaleb - SB)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thHowlerCompany\data\Textures\Howler_Kaleb_HelmetSB.paa" }; // the file path to the texture
	};
	class JA_Howler_SB_Base_Kaleb_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper armor (Howler Kaleb - SB)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"104thHowlerCompany\data\Textures\Howler_Kaleb_UpperSB.paa",
			"104thHowlerCompany\data\Textures\Howler_Kaleb_LowerSB.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Base_SB_Howler_Kaleb";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_Howler_SB_Base_NCO_Helmet : SWLB_clone_P1_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper Helmet (Howler NCO - SB)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thHowlerCompany\data\Textures\Howler_NCO_HelmetSB.paa" }; // the file path to the texture
	};
	class JA_Howler_SB_Base_NCO_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper armor (Howler NCO - SB)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"104thHowlerCompany\data\Textures\Howler_NCO_UpperSB.paa",
			"104thHowlerCompany\data\Textures\Howler_NCO_LowerSB.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Base_SB_Howler_NCO";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_Howler_SB_Base_Officer_Helmet : SWLB_clone_P1_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper Helmet (Howler Officer - SB)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thHowlerCompany\data\Textures\Howler_Officer_HelmetSB.paa" }; // the file path to the texture
	};
	class JA_Howler_SB_Base_Officer_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper armor (Howler Officer - SB)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"104thHowlerCompany\data\Textures\Howler_Officer_UpperSB.paa",
			"104thHowlerCompany\data\Textures\Howler_Officer_LowerSB.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Base_SB_Howler_Officer";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_Howler_P2_Base_Kaleb_Helmet : SWLB_clone_AB_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper Helmet (Howler Kaleb - P2)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thHowlerCompany\data\Textures\Howler_Kaleb_Helmet.paa" }; // the file path to the texture
	};
	class JA_Howler_P2_Base_Kaleb_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper armor (Howler Kaleb - P2)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"104thHowlerCompany\data\Textures\Howler_Kaleb_Upper.paa",
			"104thHowlerCompany\data\Textures\Howler_Kaleb_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Base_P2_Howler_Kaleb";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_Howler_P2_Base_NCO_Helmet : SWLB_clone_AB_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper Helmet (Howler NCO - P2)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thHowlerCompany\data\Textures\Howler_NCO_Helmet.paa" }; // the file path to the texture
	};
	class JA_Howler_P2_Base_NCO_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper armor (Howler NCO - P2)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"104thHowlerCompany\data\Textures\Howler_NCO_Upper.paa",
			"104thHowlerCompany\data\Textures\Howler_NCO_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Base_P2_Howler_NCO";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_Howler_P2_Base_Officer_Helmet : SWLB_clone_AB_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper Helmet (Howler Officer - P2)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thHowlerCompany\data\Textures\Howler_Officer_Helmet.paa" }; // the file path to the texture
	};
	class JA_Howler_P2_Base_Officer_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper armor (Howler Officer - P2)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"104thHowlerCompany\data\Textures\Howler_Officer_Upper.paa",
			"104thHowlerCompany\data\Textures\Howler_Officer_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Base_P2_Howler_Officer";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_Howler_ME_Base_Kaleb_Helmet : SWLB_clone_P1_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper Helmet (Howler Kaleb - ME)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thHowlerCompany\data\Textures\helmet_P1_kalebM_-_Kopie.paa" }; // the file path to the texture
	};
	class JA_Howler_ME_Base_Kaleb_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper armor (Howler Kaleb - ME)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"104thHowlerCompany\data\Textures\Howler_KalebM_Upper.paa",
			"104thHowlerCompany\data\Textures\Howler_KalebM_Lower_-_Kopie.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Base_ME_Howler_Kaleb";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_Howler_ME_Base_NCO_Helmet : SWLB_clone_P1_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper Helmet (Howler NCO - ME)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thHowlerCompany\data\Textures\Howler_NCO_HelmetM.paa" }; // the file path to the texture
	};
	class JA_Howler_ME_Base_NCO_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper armor (Howler NCO - ME)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"104thHowlerCompany\data\Textures\Howler_NCO_UpperM.paa",
			"104thHowlerCompany\data\Textures\Howler_NCO_LowerM.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Base_ME_Howler_NCO";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_Howler_ME_Base_Officer_Helmet : SWLB_clone_P1_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper Helmet (Howler Officer - ME)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thHowlerCompany\data\Textures\Howler_Officer_HelmetM.paa" }; // the file path to the texture
	};
	class JA_Howler_ME_Base_Officer_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper armor (Howler Officer - ME)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"104thHowlerCompany\data\Textures\Howler_Officer_UpperM.paa",
			"104thHowlerCompany\data\Textures\Howler_Officer_LowerM.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Base_ME_Howler_Officer";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_Howler_SB_Base_Paak_Helmet : SWLB_clone_P1_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper Helmet (Howler Paak - SB)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thHowlerCompany\data\Textures\Howler_Paak_HelmetSB.paa" }; // the file path to the texture
	};
	class JA_Howler_SB_Base_Paak_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper armor (Howler Paak - SB)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"104thHowlerCompany\data\Textures\Howler_Paak_UpperSB.paa",
			"104thHowlerCompany\data\Textures\Howler_Paak_LowerSB.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Base_SB_Howler_Paak";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
    class JA_Howler_P2_Base_Paak_Helmet : SWLB_clone_P2_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper Helmet (Howler Paak - P2)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thHowlerCompany\data\Textures\Howler_Paak_Helmet.paa" }; // the file path to the texture
	};
	class JA_Howler_P2_Base_Paak_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper armor (Howler Paak - P2)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"104thHowlerCompany\data\Textures\Howler_Paak_Upper.paa",
			"104thHowlerCompany\data\Textures\Howler_Paak_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Base_P2_Howler_Paak";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
    class JA_Howler_ME_Base_Paak_Helmet : SWLB_clone_P1_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper Helmet (Howler Paak - ME)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thHowlerCompany\data\Textures\Howler_Paak_HelmetM.paa" }; // the file path to the texture
	};
	class JA_Howler_ME_Base_Paak_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper armor (Howler Paak - ME)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"104thHowlerCompany\data\Textures\Howler_Paak_UpperM.paa",
			"104thHowlerCompany\data\Textures\Howler_Paak_LowerM.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Base_ME_Howler_Paak";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_Howler_SB_Base_Trooper_Helmet : SWLB_clone_P1_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper Helmet (Howler Trooper - SB)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thHowlerCompany\data\Textures\Howler_Trooper_HelmetSB.paa" }; // the file path to the texture
	};
	class JA_Howler_SB_Base_Trooper_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper armor (Howler Trooper - SB)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"104thHowlerCompany\data\Textures\Howler_Trooper_UpperSB.paa",
			"104thHowlerCompany\data\Textures\Howler_Trooper_LowerSB.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Base_SB_Howler_Trooper";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
    class JA_Howler_P2_Base_Trooper_Helmet : SWLB_clone_AB_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper Helmet (Howler Trooper - P2)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thHowlerCompany\data\Textures\Howler_Trooper_Helmet.paa" }; // the file path to the texture
	};
	class JA_Howler_P2_Base_Trooper_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper armor (Howler Trooper - P2)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"104thHowlerCompany\data\Textures\Howler_Trooper_Upper.paa",
			"104thHowlerCompany\data\Textures\Howler_Trooper_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Base_P2_Howler_Trooper";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
    class JA_Howler_ME_Base_Trooper_Helmet : SWLB_clone_P1_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper Helmet (Howler Trooper - ME)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thHowlerCompany\data\Textures\Howler_Trooper_HelmetM.paa" }; // the file path to the texture
	};
	class JA_Howler_ME_Base_Trooper_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper armor (Howler Trooper - ME)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"104thHowlerCompany\data\Textures\Howler_Trooper_UpperM.paa",
			"104thHowlerCompany\data\Textures\Howler_Trooper_LowerM.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Base_ME_Howler_Trooper";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_Howler_SB_Base_Medic_Helmet : SWLB_clone_P1_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper Helmet (Howler Medic - SB)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thHowlerCompany\data\Textures\Howler_Medic_HelmetSB.paa" }; // the file path to the texture
	};
	class JA_Howler_SB_Base_Medic_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper armor (Howler Medic - SB)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"104thHowlerCompany\data\Textures\Howler_Medic_UpperSB.paa",
			"104thHowlerCompany\data\Textures\Howler_Trooper_LowerSB.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Base_SB_Howler_Medic";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
    class JA_Howler_P2_Base_Medic_Helmet : SWLB_clone_AB_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper Helmet (Howler Medic - P2)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thHowlerCompany\data\Textures\Howler_Medic_Helmet.paa" }; // the file path to the texture
	};
	class JA_Howler_P2_Base_Medic_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper armor (Howler Medic - P2)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"104thHowlerCompany\data\Textures\Howler_Medic_Upper.paa",
			"104thHowlerCompany\data\Textures\Howler_Trooper_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Base_P2_Howler_Medic";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
    class JA_Howler_ME_Base_Medic_Helmet : SWLB_clone_P1_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper Helmet (Howler Medic - ME)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thHowlerCompany\data\Textures\Howler_Medic_HelmetM.paa" }; // the file path to the texture
	};
	class JA_Howler_ME_Base_Medic_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper armor (Howler Medic - ME)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"104thHowlerCompany\data\Textures\Howler_Medic_UpperM.paa",
			"104thHowlerCompany\data\Textures\Howler_Trooper_LowerM.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Base_ME_Howler_Medic";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_Howler_AB_Base_Trooper_Armor : JA_104th_AB_Base_Trooper_Armor
	{
		author = "Dak";
		displayName = "Clone Airborne Trooper Vest (Howler)";
		hiddenSelectionsTextures[] =
		{
			"SWLB_clones\data\heavy_accessories_co.paa", // Heavy
			"104thHowlerCompany\data\Textures\Howler_Officer_Kama.paa",
			"SWLB_clones\data\heavy_accessories_co.paa" //Heavy
		};
	};
    class JA_Howler_AB_Base_NCO_Armor: JA_104th_Spirit_Vest
    {
        displayName = "Clone Airborne NCO Vest (Howler)"
        hiddenSelectionsTextures[] =
        {
            "SWLB_clones\data\heavy_accessories_co.paa",               // Bag and Chest Strap
            "104thHowlerCompany\data\Textures\Howler_Officer_Kama.paa", // Kama
            "SWLB_clones\data\heavy_accessories_co.paa",               // Left Shoulder Thing
            "SWLB_clones\data\heavy_accessories_co.paa"                // NCO Pauldron
        };
    };
	class JA_Howler_AB_Base_Officer_Armor : JA_104th_AB_Officer_Trooper_Armor // Fixes white pauldron issue
	{
		author = "Dak";
		displayName = "Clone Airborne Officer Vest (Howler)";
		hiddenSelectionsTextures[] =
		{
            // Fixed Kama texture being applied to every selection
			"JangosArmory4\data\Textures\104th_Accessories_Heavy.paa",  // Small "pocket" on left arm
			"JangosArmory4\data\Textures\104th_Accessories_Heavy.paa",  // Heavy Vest Bag / Straps
			"104thHowlerCompany\data\Textures\Howler_Officer_Kama.paa", // Kama
			"JangosArmory4\data\Textures\104th_Accessories_Heavy.paa"/*,  // Unknown, No change seen in-game when changed
			"104thHowlerCompany\data\Textures\Howler_Officer_Kama.paa"*/  // Pauldron - Currently broken until LS fixes the selections
            // Final texture is commented out as the new airborne vest has a small piece of the NCO (small) pauldron that is textured.
            // Leaving it empty makes it appear invisible.
		};
	};
	class JA_Howler_P2_Base_Officer_Armor : JA_104th_Base_officer_Vest
	{
		author = "Dak";
		displayName = "Clone Trooper Officer Vest (Howler)";
		hiddenSelections[] =
		{
			"camo1"

		};
		hiddenSelectionsTextures[] =
		{
			"104thHowlerCompany\data\Textures\Howler_Officer_Kama.paa"
		};
	};
};

class CfgVehicles
{
	class SWLB_clone_base_P2;
	class SWLB_clone_base_P1;
	class SWLB_clone_marshal_commander_base_P2;
	class SWLB_clone_backpack;
	class SWLB_clone_RTO_mini_backpack;
	class SWLB_clone_backpack_heavy;
	class SWLB_clone_backpack_medic;
	class SWLB_clone_backpack_RTO;
	class JA_104th_Base_SB_Howler_Kaleb : SWLB_clone_base_P1
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_Howler_SB_Base_Kaleb_Uniform";
		displayName = "Blue - Kaleb";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Howler";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"104thHowlerCompany\data\Textures\Howler_Kaleb_UpperSB.paa","104thHowlerCompany\data\Textures\Howler_Kaleb_LowerSB.paa"};
		linkedItems[] = {JA_Howler_SB_Base_Kaleb_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = {JA_Howler_SB_Base_Kaleb_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};	
	class JA_104th_Base_SB_Howler_NCO : SWLB_clone_base_P1
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_Howler_SB_Base_NCO_Uniform";
		displayName = "Blue - NCO";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Howler";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"104thHowlerCompany\data\Textures\Howler_NCO_UpperSB.paa","104thHowlerCompany\data\Textures\Howler_NCO_LowerSB.paa"};
		linkedItems[] = {JA_Howler_SB_Base_NCO_Helmet, SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = {JA_Howler_SB_Base_NCO_Helmet, SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};	
	class JA_104th_Base_SB_Howler_Officer : SWLB_clone_base_P1
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_Howler_SB_Base_Officer_Uniform";
		displayName = "Blue - Officer";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Howler";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"104thHowlerCompany\data\Textures\Howler_Officer_UpperSB.paa","104thHowlerCompany\data\Textures\Howler_Officer_LowerSB.paa"};
		linkedItems[] = {JA_Howler_SB_Base_Officer_Helmet,JA_Howler_P2_Base_Officer_Armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = {JA_Howler_SB_Base_Officer_Helmet,JA_Howler_P2_Base_Officer_Armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};	
	class JA_104th_Base_P2_Howler_Kaleb : SWLB_clone_base_P2
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_Howler_P2_Base_Kaleb_Uniform";
		displayName = "P2 - Kaleb";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Howler";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"104thHowlerCompany\data\Textures\Howler_Kaleb_Upper.paa","104thHowlerCompany\data\Textures\Howler_Kaleb_Lower.paa"};
		linkedItems[] = {JA_Howler_P2_Base_Kaleb_Helmet,JA_Howler_AB_Base_Trooper_Armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = {JA_Howler_P2_Base_Kaleb_Helmet,JA_Howler_AB_Base_Trooper_Armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};	
	class JA_104th_Base_P2_Howler_NCO : SWLB_clone_base_P2
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_Howler_P2_Base_NCO_Uniform";
		displayName = "P2 - NCO";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Howler";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"104thHowlerCompany\data\Textures\Howler_NCO_Upper.paa","104thHowlerCompany\data\Textures\Howler_NCO_Lower.paa"};
		linkedItems[] = {JA_Howler_P2_Base_NCO_Helmet,JA_Howler_AB_Base_Trooper_Armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = {JA_Howler_P2_Base_NCO_Helmet,JA_Howler_AB_Base_Trooper_Armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};	
	class JA_104th_Base_P2_Howler_Officer : SWLB_clone_base_P2
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_Howler_P2_Base_Officer_Uniform";
		displayName = "P2 - Officer";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Howler";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"104thHowlerCompany\data\Textures\Howler_Officer_Upper.paa","104thHowlerCompany\data\Textures\Howler_Officer_Lower.paa"};
		linkedItems[] = {JA_Howler_P2_Base_Officer_Helmet,JA_Howler_AB_Base_Officer_Armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = {JA_Howler_P2_Base_Officer_Helmet,JA_Howler_AB_Base_Officer_Armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};	
	class JA_104th_Base_ME_Howler_Kaleb : SWLB_clone_base_P1
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_Howler_ME_Base_Kaleb_Uniform";
		displayName = "ME - Kaleb";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Howler";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"104thHowlerCompany\data\Textures\Howler_KalebM_Upper.paa","104thHowlerCompany\data\Textures\Howler_KalebM_Lower_-_Kopie.paa"};
		linkedItems[] = {JA_Howler_ME_Base_Kaleb_Helmet, SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = {JA_Howler_ME_Base_Kaleb_Helmet, SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};	
	class JA_104th_Base_ME_Howler_NCO : SWLB_clone_base_P1
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_Howler_ME_Base_NCO_Uniform";
		displayName = "ME - NCO";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Howler";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"104thHowlerCompany\data\Textures\Howler_NCO_UpperM.paa","104thHowlerCompany\data\Textures\Howler_NCO_LowerM.paa"};
		linkedItems[] = {JA_Howler_ME_Base_NCO_Helmet, SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = {JA_Howler_ME_Base_NCO_Helmet, SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};	
	class JA_104th_Base_ME_Howler_Officer : SWLB_clone_base_P1
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_Howler_ME_Base_Officer_Uniform";
		displayName = "ME - Officer";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Howler";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"104thHowlerCompany\data\Textures\Howler_Officer_UpperM.paa","104thHowlerCompany\data\Textures\Howler_Officer_LowerM.paa"};
		linkedItems[] = {JA_Howler_ME_Base_Officer_Helmet,JA_Howler_P2_Base_Officer_Armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = {JA_Howler_ME_Base_Officer_Helmet,JA_Howler_P2_Base_Officer_Armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_104th_Base_ME_Howler_Paak : SWLB_clone_base_P1
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_Howler_ME_Base_Paak_Uniform";
		displayName = "ME - Paak";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Howler";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"104thHowlerCompany\data\Textures\Howler_Paak_UpperM.paa","104thHowlerCompany\data\Textures\Howler_Paak_LowerM.paa"};
		linkedItems[] = {JA_Howler_ME_Base_Paak_Helmet, SWLB_CEE_Force_Recon_NCO, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = {JA_Howler_ME_Base_Paak_Helmet, SWLB_CEE_Force_Recon_NCO, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
    class JA_104th_Base_P2_Howler_Paak : SWLB_clone_base_P2
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_Howler_P2_Base_Paak_Uniform";
		displayName = "P2 - Paak";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Howler";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"104thHowlerCompany\data\Textures\Howler_Paak_Upper.paa","104thHowlerCompany\data\Textures\Howler_Paak_Lower.paa"};
		linkedItems[] = {JA_Howler_P2_Base_Paak_Helmet, SWLB_CEE_Force_Recon_NCO, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = {JA_Howler_P2_Base_Paak_Helmet, SWLB_CEE_Force_Recon_NCO, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
    class JA_104th_Base_SB_Howler_Paak : SWLB_clone_base_P1
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_Howler_SB_Base_Paak_Uniform";
		displayName = "Blue - Paak";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Howler";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"104thHowlerCompany\data\Textures\Howler_Paak_UpperSB.paa","104thHowlerCompany\data\Textures\Howler_Paak_LowerSB.paa"};
		linkedItems[] = {JA_Howler_SB_Base_Paak_Helmet, SWLB_CEE_Force_Recon_NCO, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = {JA_Howler_SB_Base_Paak_Helmet, SWLB_CEE_Force_Recon_NCO, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_104th_Base_ME_Howler_Trooper : SWLB_clone_base_P1
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_Howler_ME_Base_Trooper_Uniform";
		displayName = "ME - Trooper";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Howler";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"104thHowlerCompany\data\Textures\Howler_Trooper_UpperM.paa","104thHowlerCompany\data\Textures\Howler_Trooper_LowerM.paa"};
		linkedItems[] = {JA_Howler_ME_Base_Trooper_Helmet, SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = {JA_Howler_ME_Base_Trooper_Helmet, SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
    class JA_104th_Base_P2_Howler_Trooper : SWLB_clone_base_P2
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_Howler_P2_Base_Trooper_Uniform";
		displayName = "P2 - Trooper";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Howler";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"104thHowlerCompany\data\Textures\Howler_Trooper_Upper.paa","104thHowlerCompany\data\Textures\Howler_Trooper_Lower.paa"};
		linkedItems[] = {JA_Howler_P2_Base_Trooper_Helmet,JA_Howler_AB_Base_Trooper_Armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = {JA_Howler_P2_Base_Trooper_Helmet,JA_Howler_AB_Base_Trooper_Armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
    class JA_104th_Base_SB_Howler_Trooper : SWLB_clone_base_P1
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_Howler_SB_Base_Trooper_Uniform";
		displayName = "Blue - Trooper";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Howler";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"104thHowlerCompany\data\Textures\Howler_Trooper_UpperSB.paa","104thHowlerCompany\data\Textures\Howler_Trooper_LowerSB.paa"};
		linkedItems[] = {JA_Howler_SB_Base_Trooper_Helmet, SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = {JA_Howler_SB_Base_Trooper_Helmet, SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_104th_Base_ME_Howler_Medic : SWLB_clone_base_P1
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_Howler_ME_Base_Medic_Uniform";
		displayName = "ME - Medic";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Howler";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"104thHowlerCompany\data\Textures\Howler_Medic_UpperM.paa","104thHowlerCompany\data\Textures\Howler_Trooper_LowerM.paa"};
		linkedItems[] = {JA_Howler_ME_Base_Medic_Helmet, SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = {JA_Howler_ME_Base_Medic_Helmet, SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
    class JA_104th_Base_P2_Howler_Medic : SWLB_clone_base_P2
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_Howler_P2_Base_Medic_Uniform";
		displayName = "P2 - Medic";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Howler";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"104thHowlerCompany\data\Textures\Howler_Medic_Upper.paa","104thHowlerCompany\data\Textures\Howler_Trooper_Lower.paa"};
		linkedItems[] = {JA_Howler_P2_Base_Medic_Helmet,JA_Howler_AB_Base_Trooper_Armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = {JA_Howler_P2_Base_Medic_Helmet,JA_Howler_AB_Base_Trooper_Armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
    class JA_104th_Base_SB_Howler_Medic : SWLB_clone_base_P1
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_Howler_SB_Base_Medic_Uniform";
		displayName = "Blue - Medic";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Howler";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"104thHowlerCompany\data\Textures\Howler_Medic_UpperSB.paa","104thHowlerCompany\data\Textures\Howler_Trooper_LowerSB.paa"};
		linkedItems[] = {JA_Howler_SB_Base_Medic_Helmet, SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = {JA_Howler_SB_Base_Medic_Helmet, SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
};

class CfgGroups{
	class West{
		class JA_Bluefor{
			name = "Jango's Finest";
			class JA_Bluefor_P2_Troopers_Howler{
				name = "Howler - P2";
				class JA_Group_P2_Team_Howler{
					name = "P2 - Team";
					side = 1;
					class Unit0 {
						vehicle = "JA_104th_Base_P2_Howler_Trooper";
						rank = "CORPORAL";
						position[] = {0,0,0};
						side = 1;
					};
					class Unit1 {
						vehicle = "JA_104th_Base_P2_Howler_Trooper";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
						side = 1;
					};
					class Unit2 {
						vehicle = "JA_104th_Base_P2_Howler_Medic";
						rank = "PRIVATE";
						position[] = {5,-5,0};
						side = 1;
					};
				};
				class JA_Group_P2_Squad_Howler{
					name = "P2 - Squad";
					side = 1;
					class Unit0 {
						vehicle = "JA_104th_Base_P2_Howler_NCO";
						rank = "CORPORAL";
						position[] = {0,0,0};
						side = 1;
					};
					class Unit1 {
						vehicle = "JA_104th_Base_P2_Howler_Trooper";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
						side = 1;
					};
					class Unit2 {
						vehicle = "JA_104th_Base_P2_Howler_Trooper";
						rank = "PRIVATE";
						position[] = {5,-5,0};
						side = 1;
					};
					class Unit3 {
						vehicle = "JA_104th_Base_P2_Howler_Medic";
						rank = "PRIVATE";
						position[] = {10,-10,0};
						side = 1;
					};
					class Unit4 {
						vehicle = "JA_104th_Base_P2_Howler_Trooper";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
						side = 1;
					};
					class Unit5 {
						vehicle = "JA_104th_Base_P2_Howler_Trooper";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
						side = 1;
					};
				};
				class JA_Group_Kaleb_P2_Squad_Howler{
					name = "P2 - Kaleb Squad";
					side = 1;
					class Unit0 {
						vehicle = "JA_104th_Base_P2_Howler_Kaleb";
						rank = "CORPORAL";
						position[] = {0,0,0};
						side = 1;
					};
					class Unit1 {
						vehicle = "JA_104th_Base_P2_Howler_Officer";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
						side = 1;
					};
					class Unit2 {
						vehicle = "JA_104th_Base_P2_Howler_Paak";
						rank = "PRIVATE";
						position[] = {5,-5,0};
						side = 1;
					};
					class Unit3 {
						vehicle = "JA_104th_Base_P2_Howler_Medic";
						rank = "PRIVATE";
						position[] = {10,-10,0};
						side = 1;
					};
					class Unit4 {
						vehicle = "JA_104th_Base_P2_Howler_Trooper";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
						side = 1;
					};
					class Unit5 {
						vehicle = "JA_104th_Base_P2_Howler_Trooper";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
						side = 1;
					};
				};	
			};
			class JA_Bluefor_SB_Troopers_Howler{
				name = "Howler - SB";
				class JA_Group_SB_Team_Howler{
					name = "SB - Team";
					side = 1;
					class Unit0 {
						vehicle = "JA_104th_Base_SB_Howler_Trooper";
						rank = "CORPORAL";
						position[] = {0,0,0};
						side = 1;
					};
					class Unit1 {
						vehicle = "JA_104th_Base_SB_Howler_Trooper";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
						side = 1;
					};
					class Unit2 {
						vehicle = "JA_104th_Base_SB_Howler_Medic";
						rank = "PRIVATE";
						position[] = {5,-5,0};
						side = 1;
					};
				};
				class JA_Group_SB_Squad_Howler{
					name = "SB - Squad";
					side = 1;
					class Unit0 {
						vehicle = "JA_104th_Base_SB_Howler_NCO";
						rank = "CORPORAL";
						position[] = {0,0,0};
						side = 1;
					};
					class Unit1 {
						vehicle = "JA_104th_Base_SB_Howler_Trooper";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
						side = 1;
					};
					class Unit2 {
						vehicle = "JA_104th_Base_SB_Howler_Trooper";
						rank = "PRIVATE";
						position[] = {5,-5,0};
						side = 1;
					};
					class Unit3 {
						vehicle = "JA_104th_Base_SB_Howler_Medic";
						rank = "PRIVATE";
						position[] = {10,-10,0};
						side = 1;
					};
					class Unit4 {
						vehicle = "JA_104th_Base_SB_Howler_Trooper";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
						side = 1;
					};
					class Unit5 {
						vehicle = "JA_104th_Base_SB_Howler_Trooper";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
						side = 1;
					};
				};
				class JA_Group_Kaleb_SB_Squad_Howler{
					name = "SB - Kaleb Squad";
					side = 1;
					class Unit0 {
						vehicle = "JA_104th_Base_SB_Howler_Kaleb";
						rank = "CORPORAL";
						position[] = {0,0,0};
						side = 1;
					};
					class Unit1 {
						vehicle = "JA_104th_Base_SB_Howler_Officer";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
						side = 1;
					};
					class Unit2 {
						vehicle = "JA_104th_Base_SB_Howler_Paak";
						rank = "PRIVATE";
						position[] = {5,-5,0};
						side = 1;
					};
					class Unit3 {
						vehicle = "JA_104th_Base_SB_Howler_Medic";
						rank = "PRIVATE";
						position[] = {10,-10,0};
						side = 1;
					};
					class Unit4 {
						vehicle = "JA_104th_Base_SB_Howler_Trooper";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
						side = 1;
					};
					class Unit5 {
						vehicle = "JA_104th_Base_SB_Howler_Trooper";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
						side = 1;
					};
				};	
			};
			class JA_Bluefor_ME_Troopers_Howler{
				name = "Howler - ME";
				class JA_Group_ME_Team_Howler{
					name = "ME - Team";
					side = 1;
					class Unit0 {
						vehicle = "JA_104th_Base_ME_Howler_Trooper";
						rank = "CORPORAL";
						position[] = {0,0,0};
						side = 1;
					};
					class Unit1 {
						vehicle = "JA_104th_Base_ME_Howler_Trooper";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
						side = 1;
					};
					class Unit2 {
						vehicle = "JA_104th_Base_ME_Howler_Medic";
						rank = "PRIVATE";
						position[] = {5,-5,0};
						side = 1;
					};
				};
				class JA_Group_ME_Squad_Howler{
					name = "ME - Squad";
					side = 1;
					class Unit0 {
						vehicle = "JA_104th_Base_ME_Howler_NCO";
						rank = "CORPORAL";
						position[] = {0,0,0};
						side = 1;
					};
					class Unit1 {
						vehicle = "JA_104th_Base_ME_Howler_Trooper";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
						side = 1;
					};
					class Unit2 {
						vehicle = "JA_104th_Base_ME_Howler_Trooper";
						rank = "PRIVATE";
						position[] = {5,-5,0};
						side = 1;
					};
					class Unit3 {
						vehicle = "JA_104th_Base_ME_Howler_Medic";
						rank = "PRIVATE";
						position[] = {10,-10,0};
						side = 1;
					};
					class Unit4 {
						vehicle = "JA_104th_Base_ME_Howler_Trooper";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
						side = 1;
					};
					class Unit5 {
						vehicle = "JA_104th_Base_ME_Howler_Trooper";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
						side = 1;
					};
				};
				class JA_Group_Kaleb_ME_Squad_Howler{
					name = "ME - Kaleb Squad";
					side = 1;
					class Unit0 {
						vehicle = "JA_104th_Base_ME_Howler_Kaleb";
						rank = "CORPORAL";
						position[] = {0,0,0};
						side = 1;
					};
					class Unit1 {
						vehicle = "JA_104th_Base_ME_Howler_Officer";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
						side = 1;
					};
					class Unit2 {
						vehicle = "JA_104th_Base_ME_Howler_Paak";
						rank = "PRIVATE";
						position[] = {5,-5,0};
						side = 1;
					};
					class Unit3 {
						vehicle = "JA_104th_Base_ME_Howler_Medic";
						rank = "PRIVATE";
						position[] = {10,-10,0};
						side = 1;
					};
					class Unit4 {
						vehicle = "JA_104th_Base_ME_Howler_Trooper";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
						side = 1;
					};
					class Unit5 {
						vehicle = "JA_104th_Base_ME_Howler_Trooper";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
						side = 1;
					};
				};	
			};
		};
	};
};