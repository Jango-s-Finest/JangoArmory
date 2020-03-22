#include "basicDefines_A3.hpp"
class DefaultEventhandlers;
class UniformSlotInfo;
class CfgPatches
{
	class Jangos_Armory
	{
		author = "Jango's Finest";
		units[] = {};
		weapons[] = {};
	};
};

class cfgFactionClasses
{
	class 104th_Guys
	{
		displayname = "Jango's Finest";
		priority = 3; // Position in list. 
        side = 1; // Opfor = 0, Blufor = 1, Indep = 2. 
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
	class SWLB_clone_basic_armor;
	class SWLB_clone_airborne_nco_armor;
	class UniformItem;
	class VestItem;

	class JA_Howler_SB_Base_Kaleb_Helmet : SWLB_clone_P1_helmet
	{
		author = "Dak"
		scopeArsenal = 2;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone trooper Helmet (Howler Kaleb - SB)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thHowlerCompany\data\Textures\Howler_Kaleb_HelmetSB.paa" }; // the file path to the texture
	};
	class JA_Howler_SB_Base_Kaleb_Uniform : SWLB_clone_uniform
	{
		author = "Dak"
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper armor (Howler Kaleb - SB)";
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
		author = "Dak"
		scopeArsenal = 2;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone trooper Helmet (Howler NCO - SB)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thHowlerCompany\data\Textures\Howler_NCO_HelmetSB.paa" }; // the file path to the texture
	};
	class JA_Howler_SB_Base_NCO_Uniform : SWLB_clone_uniform
	{
		author = "Dak"
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper armor (Howler NCO - SB)";
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
		author = "Dak"
		scopeArsenal = 2;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone trooper Helmet (Howler Officer - SB)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thHowlerCompany\data\Textures\Howler_Officer_HelmetSB.paa" }; // the file path to the texture
	};
	class JA_Howler_SB_Base_Officer_Uniform : SWLB_clone_uniform
	{
		author = "Dak"
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper armor (Howler Officer - SB)";
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
		author = "Dak"
		scopeArsenal = 2;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone trooper Helmet (Howler Kaleb - P2)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thHowlerCompany\data\Textures\Howler_Kaleb_Helmet.paa" }; // the file path to the texture
	};
	class JA_Howler_P2_Base_Kaleb_Uniform : SWLB_clone_uniform
	{
		author = "Dak"
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper armor (Howler Kaleb - P2)";
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
		author = "Dak"
		scopeArsenal = 2;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone trooper Helmet (Howler NCO - P2)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thHowlerCompany\data\Textures\Howler_NCO_Helmet.paa" }; // the file path to the texture
	};
	class JA_Howler_P2_Base_NCO_Uniform : SWLB_clone_uniform
	{
		author = "Dak"
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper armor (Howler NCO - P2)";
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
		author = "Dak"
		scopeArsenal = 2;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone trooper Helmet (Howler Officer - P2)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thHowlerCompany\data\Textures\Howler_Officer_Helmet.paa" }; // the file path to the texture
	};
	class JA_Howler_P2_Base_Officer_Uniform : SWLB_clone_uniform
	{
		author = "Dak"
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper armor (Howler Officer - P2)";
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
		author = "Dak"
		scopeArsenal = 2;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone trooper Helmet (Howler Kaleb - ME)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thHowlerCompany\data\Textures\helmet_P1_kalebM_-_Kopie.paa" }; // the file path to the texture
	};
	class JA_Howler_ME_Base_Kaleb_Uniform : SWLB_clone_uniform
	{
		author = "Dak"
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper armor (Howler Kaleb - ME)";
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
		author = "Dak"
		scopeArsenal = 2;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone trooper Helmet (Howler NCO - ME)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thHowlerCompany\data\Textures\Howler_NCO_HelmetM.paa" }; // the file path to the texture
	};
	class JA_Howler_ME_Base_NCO_Uniform : SWLB_clone_uniform
	{
		author = "Dak"
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper armor (Howler NCO - ME)";
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
		author = "Dak"
		scopeArsenal = 2;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone trooper Helmet (Howler Officer - ME)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thHowlerCompany\data\Textures\Howler_Officer_HelmetM.paa" }; // the file path to the texture
	};
	class JA_Howler_ME_Base_Officer_Uniform : SWLB_clone_uniform
	{
		author = "Dak"
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper armor (Howler Officer - ME)";
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
		author = "Dak"
		scopeArsenal = 2;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone trooper Helmet (Howler Paak - SB)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thHowlerCompany\data\Textures\Howler_Paak_HelmetSB.paa" }; // the file path to the texture
	};
	class JA_Howler_SB_Base_Paak_Uniform : SWLB_clone_uniform
	{
		author = "Dak"
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper armor (Howler Paak - SB)";
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
		author = "Dak"
		scopeArsenal = 2;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone trooper Helmet (Howler Paak - P2)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thHowlerCompany\data\Textures\Howler_Paak_Helmet.paa" }; // the file path to the texture
	};
	class JA_Howler_P2_Base_Paak_Uniform : SWLB_clone_uniform
	{
		author = "Dak"
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper armor (Howler Paak - P2)";
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
		author = "Dak"
		scopeArsenal = 2;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone trooper Helmet (Howler Paak - ME)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thHowlerCompany\data\Textures\Howler_Paak_HelmetM.paa" }; // the file path to the texture
	};
	class JA_Howler_ME_Base_Paak_Uniform : SWLB_clone_uniform
	{
		author = "Dak"
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper armor (Howler Paak - ME)";
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
		author = "Dak"
		scopeArsenal = 2;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone trooper Helmet (Howler Trooper - SB)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thHowlerCompany\data\Textures\Howler_Trooper_HelmetSB.paa" }; // the file path to the texture
	};
	class JA_Howler_SB_Base_Trooper_Uniform : SWLB_clone_uniform
	{
		author = "Dak"
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper armor (Howler Trooper - SB)";
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
		author = "Dak"
		scopeArsenal = 2;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone trooper Helmet (Howler Trooper - P2)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thHowlerCompany\data\Textures\Howler_Trooper_Helmet.paa" }; // the file path to the texture
	};
	class JA_Howler_P2_Base_Trooper_Uniform : SWLB_clone_uniform
	{
		author = "Dak"
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper armor (Howler Trooper - P2)";
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
		author = "Dak"
		scopeArsenal = 2;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone trooper Helmet (Howler Trooper - ME)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thHowlerCompany\data\Textures\Howler_Trooper_HelmetM.paa" }; // the file path to the texture
	};
	class JA_Howler_ME_Base_Trooper_Uniform : SWLB_clone_uniform
	{
		author = "Dak"
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper armor (Howler Trooper - ME)";
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
		author = "Dak"
		scopeArsenal = 2;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone trooper Helmet (Howler Medic - SB)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thHowlerCompany\data\Textures\Howler_Medic_HelmetSB.paa" }; // the file path to the texture
	};
	class JA_Howler_SB_Base_Medic_Uniform : SWLB_clone_uniform
	{
		author = "Dak"
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper armor (Howler Medic - SB)";
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
		author = "Dak"
		scopeArsenal = 2;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone trooper Helmet (Howler Medic - P2)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thHowlerCompany\data\Textures\Howler_Medic_Helmet.paa" }; // the file path to the texture
	};
	class JA_Howler_P2_Base_Medic_Uniform : SWLB_clone_uniform
	{
		author = "Dak"
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper armor (Howler Medic - P2)";
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
		author = "Dak"
		scopeArsenal = 2;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone trooper Helmet (Howler Medic - ME)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thHowlerCompany\data\Textures\Howler_Medic_HelmetM.paa" }; // the file path to the texture
	};
	class JA_Howler_ME_Base_Medic_Uniform : SWLB_clone_uniform
	{
		author = "Dak"
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper armor (Howler Medic - ME)";
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
	class JA_Howler_AB_Base_Trooper_Armor : SWLB_Clone_airborne_armor
	{
		author = "Dak";
		displayName = "Clone Airborne Trooper vest (Howler)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[] =
		{
			"104thHowlerCompany\data\Textures\officer_accessories_Howler.paa", // Heavy
			"104thHowlerCompany\data\Textures\officer_accessories_Howler.paa",
			"104thHowlerCompany\data\Textures\officer_accessories_Howler.paa", //Heavy
			"104thHowlerCompany\data\Textures\officer_accessories_Howler.paa" //Heavy
		};
		
	};
	class JA_Howler_AB_Base_Officer_Armor : SWLB_CEE_Airborne_Officer
	{
		author = "Dak";
		displayName = "Clone Airborne Officer vest (Howler)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[] =
		{
			"104thHowlerCompany\data\Textures\Howler_Officer_Kama.paa", // Heavy
			"104thHowlerCompany\data\Textures\Howler_Officer_Kama.paa",
			"104thHowlerCompany\data\Textures\Howler_Officer_Kama.paa", //Heavy
			"104thHowlerCompany\data\Textures\Howler_Officer_Kama.paa" //Heavy
		};
	};
	class JA_Howler_P2_Base_Officer_Armor : SWLB_clone_officer_armor
	{
		author = "Dak";
		displayName = "Clone Trooper Officer vest (Howler)";
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
		author = "Dak"
		scope = 2;
		scopeArsenal = 2;
		uniformClass = "JA_Howler_SB_Base_Kaleb_Uniform";
		displayName = "Blue - Kaleb";
		faction = "104th_Guys"
		editorSubcategory = "104th_Categ_Clones_Howler";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"104thHowlerCompany\data\Textures\Howler_Kaleb_UpperSB.paa","104thHowlerCompany\data\Textures\Howler_Kaleb_LowerSB.paa"};
		linkedItems[] = {JA_Howler_SB_Base_Kaleb_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = {JA_Howler_SB_Base_Kaleb_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	}
	class JA_104th_Base_SB_Howler_NCO : SWLB_clone_base_P1
	{
		author = "Dak"
		scope = 2;
		scopeArsenal = 2;
		uniformClass = "JA_Howler_SB_Base_NCO_Uniform";
		displayName = "Blue - NCO";
		faction = "104th_Guys"
		editorSubcategory = "104th_Categ_Clones_Howler";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"104thHowlerCompany\data\Textures\Howler_NCO_UpperSB.paa","104thHowlerCompany\data\Textures\Howler_NCO_LowerSB.paa"};
		linkedItems[] = {JA_Howler_SB_Base_NCO_Helmet, SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = {JA_Howler_SB_Base_NCO_Helmet, SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	}
	class JA_104th_Base_SB_Howler_Officer : SWLB_clone_base_P1
	{
		author = "Dak"
		scope = 2;
		scopeArsenal = 2;
		uniformClass = "JA_Howler_SB_Base_Officer_Uniform";
		displayName = "Blue - Officer";
		faction = "104th_Guys"
		editorSubcategory = "104th_Categ_Clones_Howler";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"104thHowlerCompany\data\Textures\Howler_Officer_UpperSB.paa","104thHowlerCompany\data\Textures\Howler_Officer_LowerSB.paa"};
		linkedItems[] = {JA_Howler_SB_Base_Officer_Helmet,JA_Howler_P2_Base_Officer_Armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = {JA_Howler_SB_Base_Officer_Helmet,JA_Howler_P2_Base_Officer_Armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	}
	class JA_104th_Base_P2_Howler_Kaleb : SWLB_clone_base_P2
	{
		author = "Dak"
		scope = 2;
		scopeArsenal = 2;
		uniformClass = "JA_Howler_P2_Base_Kaleb_Uniform";
		displayName = "P2 - Kaleb";
		faction = "104th_Guys"
		editorSubcategory = "104th_Categ_Clones_Howler";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"104thHowlerCompany\data\Textures\Howler_Kaleb_Upper.paa","104thHowlerCompany\data\Textures\Howler_Kaleb_Lower.paa"};
		linkedItems[] = {JA_Howler_P2_Base_Kaleb_Helmet,JA_Howler_AB_Base_Trooper_Armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = {JA_Howler_P2_Base_Kaleb_Helmet,JA_Howler_AB_Base_Trooper_Armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	}
	class JA_104th_Base_P2_Howler_NCO : SWLB_clone_base_P2
	{
		author = "Dak"
		scope = 2;
		scopeArsenal = 2;
		uniformClass = "JA_Howler_P2_Base_NCO_Uniform";
		displayName = "P2 - NCO";
		faction = "104th_Guys"
		editorSubcategory = "104th_Categ_Clones_Howler";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"104thHowlerCompany\data\Textures\Howler_NCO_Upper.paa","104thHowlerCompany\data\Textures\Howler_NCO_Lower.paa"};
		linkedItems[] = {JA_Howler_P2_Base_NCO_Helmet,JA_Howler_AB_Base_Trooper_Armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = {JA_Howler_P2_Base_NCO_Helmet,JA_Howler_AB_Base_Trooper_Armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	}
	class JA_104th_Base_P2_Howler_Officer : SWLB_clone_base_P2
	{
		author = "Dak"
		scope = 2;
		scopeArsenal = 2;
		uniformClass = "JA_Howler_P2_Base_Officer_Uniform";
		displayName = "P2 - Officer";
		faction = "104th_Guys"
		editorSubcategory = "104th_Categ_Clones_Howler";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"104thHowlerCompany\data\Textures\Howler_Officer_Upper.paa","104thHowlerCompany\data\Textures\Howler_Officer_Lower.paa"};
		linkedItems[] = {JA_Howler_P2_Base_Officer_Helmet,JA_Howler_AB_Base_Officer_Armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = {JA_Howler_P2_Base_Officer_Helmet,JA_Howler_AB_Base_Officer_Armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	}
	class JA_104th_Base_ME_Howler_Kaleb : SWLB_clone_base_P1
	{
		author = "Dak"
		scope = 2;
		scopeArsenal = 2;
		uniformClass = "JA_Howler_ME_Base_Kaleb_Uniform";
		displayName = "ME - Kaleb";
		faction = "104th_Guys"
		editorSubcategory = "104th_Categ_Clones_Howler";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"104thHowlerCompany\data\Textures\Howler_KalebM_Upper.paa","104thHowlerCompany\data\Textures\Howler_KalebM_Lower_-_Kopie.paa"};
		linkedItems[] = {JA_Howler_ME_Base_Kaleb_Helmet, SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = {JA_Howler_ME_Base_Kaleb_Helmet, SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	}
	class JA_104th_Base_ME_Howler_NCO : SWLB_clone_base_P1
	{
		author = "Dak"
		scope = 2;
		scopeArsenal = 2;
		uniformClass = "JA_Howler_ME_Base_NCO_Uniform";
		displayName = "ME - NCO";
		faction = "104th_Guys"
		editorSubcategory = "104th_Categ_Clones_Howler";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"104thHowlerCompany\data\Textures\Howler_NCO_UpperM.paa","104thHowlerCompany\data\Textures\Howler_NCO_LowerM.paa"};
		linkedItems[] = {JA_Howler_ME_Base_NCO_Helmet, SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = {JA_Howler_ME_Base_NCO_Helmet, SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	}
	class JA_104th_Base_ME_Howler_Officer : SWLB_clone_base_P1
	{
		author = "Dak"
		scope = 2;
		scopeArsenal = 2;
		uniformClass = "JA_Howler_ME_Base_Officer_Uniform";
		displayName = "ME - Officer";
		faction = "104th_Guys"
		editorSubcategory = "104th_Categ_Clones_Howler";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"104thHowlerCompany\data\Textures\Howler_Officer_UpperM.paa","104thHowlerCompany\data\Textures\Howler_Officer_LowerM.paa"};
		linkedItems[] = {JA_Howler_ME_Base_Officer_Helmet,JA_Howler_P2_Base_Officer_Armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = {JA_Howler_ME_Base_Officer_Helmet,JA_Howler_P2_Base_Officer_Armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	}
	class JA_104th_Base_ME_Howler_Paak : SWLB_clone_base_P1
	{
		author = "Dak"
		scope = 2;
		scopeArsenal = 2;
		uniformClass = "JA_Howler_ME_Base_Paak_Uniform";
		displayName = "ME - Paak";
		faction = "104th_Guys"
		editorSubcategory = "104th_Categ_Clones_Howler";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"104thHowlerCompany\data\Textures\Howler_Paak_UpperM.paa","104thHowlerCompany\data\Textures\Howler_Paak_LowerM.paa"};
		linkedItems[] = {JA_Howler_ME_Base_Paak_Helmet, SWLB_CEE_Force_Recon_NCO, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = {JA_Howler_ME_Base_Paak_Helmet, SWLB_CEE_Force_Recon_NCO, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	}
    class JA_104th_Base_P2_Howler_Paak : SWLB_clone_base_P2
	{
		author = "Dak"
		scope = 2;
		scopeArsenal = 2;
		uniformClass = "JA_Howler_P2_Base_Paak_Uniform";
		displayName = "P2 - Paak";
		faction = "104th_Guys"
		editorSubcategory = "104th_Categ_Clones_Howler";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"104thHowlerCompany\data\Textures\Howler_Paak_Upper.paa","104thHowlerCompany\data\Textures\Howler_Paak_Lower.paa"};
		linkedItems[] = {JA_Howler_P2_Base_Paak_Helmet, SWLB_CEE_Force_Recon_NCO, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = {JA_Howler_P2_Base_Paak_Helmet, SWLB_CEE_Force_Recon_NCO, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	}
    class JA_104th_Base_SB_Howler_Paak : SWLB_clone_base_P1
	{
		author = "Dak"
		scope = 2;
		scopeArsenal = 2;
		uniformClass = "JA_Howler_SB_Base_Paak_Uniform";
		displayName = "Blue - Paak";
		faction = "104th_Guys"
		editorSubcategory = "104th_Categ_Clones_Howler";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"104thHowlerCompany\data\Textures\Howler_Paak_UpperSB.paa","104thHowlerCompany\data\Textures\Howler_Paak_LowerSB.paa"};
		linkedItems[] = {JA_Howler_SB_Base_Paak_Helmet, SWLB_CEE_Force_Recon_NCO, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = {JA_Howler_SB_Base_Paak_Helmet, SWLB_CEE_Force_Recon_NCO, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	}
	class JA_104th_Base_ME_Howler_Trooper : SWLB_clone_base_P1
	{
		author = "Dak"
		scope = 2;
		scopeArsenal = 2;
		uniformClass = "JA_Howler_ME_Base_Trooper_Uniform";
		displayName = "ME - Trooper";
		faction = "104th_Guys"
		editorSubcategory = "104th_Categ_Clones_Howler";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"104thHowlerCompany\data\Textures\Howler_Trooper_UpperM.paa","104thHowlerCompany\data\Textures\Howler_Trooper_LowerM.paa"};
		linkedItems[] = {JA_Howler_ME_Base_Trooper_Helmet, SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = {JA_Howler_ME_Base_Trooper_Helmet, SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	}
    class JA_104th_Base_P2_Howler_Trooper : SWLB_clone_base_P2
	{
		author = "Dak"
		scope = 2;
		scopeArsenal = 2;
		uniformClass = "JA_Howler_P2_Base_Trooper_Uniform";
		displayName = "P2 - Trooper";
		faction = "104th_Guys"
		editorSubcategory = "104th_Categ_Clones_Howler";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"104thHowlerCompany\data\Textures\Howler_Trooper_Upper.paa","104thHowlerCompany\data\Textures\Howler_Trooper_Lower.paa"};
		linkedItems[] = {JA_Howler_P2_Base_Trooper_Helmet,JA_Howler_AB_Base_Trooper_Armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = {JA_Howler_P2_Base_Trooper_Helmet,JA_Howler_AB_Base_Trooper_Armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	}
    class JA_104th_Base_SB_Howler_Trooper : SWLB_clone_base_P1
	{
		author = "Dak"
		scope = 2;
		scopeArsenal = 2;
		uniformClass = "JA_Howler_SB_Base_Trooper_Uniform";
		displayName = "Blue - Trooper";
		faction = "104th_Guys"
		editorSubcategory = "104th_Categ_Clones_Howler";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"104thHowlerCompany\data\Textures\Howler_Trooper_UpperSB.paa","104thHowlerCompany\data\Textures\Howler_Trooper_LowerSB.paa"};
		linkedItems[] = {JA_Howler_SB_Base_Trooper_Helmet, SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = {JA_Howler_SB_Base_Trooper_Helmet, SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	}
	class JA_104th_Base_ME_Howler_Medic : SWLB_clone_base_P1
	{
		author = "Dak"
		scope = 2;
		scopeArsenal = 2;
		uniformClass = "JA_Howler_ME_Base_Medic_Uniform";
		displayName = "ME - Medic";
		faction = "104th_Guys"
		editorSubcategory = "104th_Categ_Clones_Howler";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"104thHowlerCompany\data\Textures\Howler_Medic_UpperM.paa","104thHowlerCompany\data\Textures\Howler_Trooper_LowerM.paa"};
		linkedItems[] = {JA_Howler_ME_Base_Medic_Helmet, SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = {JA_Howler_ME_Base_Medic_Helmet, SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	}
    class JA_104th_Base_P2_Howler_Medic : SWLB_clone_base_P2
	{
		author = "Dak"
		scope = 2;
		scopeArsenal = 2;
		uniformClass = "JA_Howler_P2_Base_Medic_Uniform";
		displayName = "P2 - Medic";
		faction = "104th_Guys"
		editorSubcategory = "104th_Categ_Clones_Howler";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"104thHowlerCompany\data\Textures\Howler_Medic_Upper.paa","104thHowlerCompany\data\Textures\Howler_Trooper_Lower.paa"};
		linkedItems[] = {JA_Howler_P2_Base_Medic_Helmet,JA_Howler_AB_Base_Trooper_Armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = {JA_Howler_P2_Base_Medic_Helmet,JA_Howler_AB_Base_Trooper_Armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	}
    class JA_104th_Base_SB_Howler_Medic : SWLB_clone_base_P1
	{
		author = "Dak"
		scope = 2;
		scopeArsenal = 2;
		uniformClass = "JA_Howler_SB_Base_Medic_Uniform";
		displayName = "Blue - Medic";
		faction = "104th_Guys"
		editorSubcategory = "104th_Categ_Clones_Howler";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"104thHowlerCompany\data\Textures\Howler_Medic_UpperSB.paa","104thHowlerCompany\data\Textures\Howler_Trooper_LowerSB.paa"};
		linkedItems[] = {JA_Howler_SB_Base_Medic_Helmet, SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = {JA_Howler_SB_Base_Medic_Helmet, SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	}
};