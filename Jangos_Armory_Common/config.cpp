#include "basicDefines_A3.hpp"
class DefaultEventhandlers;
class UniformSlotInfo;
class CfgPatches
{
	class Jangos_Armory_Common // Texture Path Fix Req
	{
		author = "Jango's Finest"; 
		requiredVersion = 0.1;
		requiredAddons[] = {};
		units[] = {
			"JA_LGC_Quick",
			"JA_332nd_Chich", 
			"JA_Cadet_Yellow1",
			"JA_Cadet_Yellow2",
			"JA_Cadet_Yellow3",
			"JA_Cadet_Yellow4",
			"JA_Cadet_Yellow5",
			"JA_Cadet_Red1",
			"JA_Cadet_Red2",
			"JA_Cadet_Red3",
			"JA_Cadet_Red4",
			"JA_Cadet_Red5",
			"JA_Cadet_Blue1",
			"JA_Cadet_Blue2",
			"JA_Cadet_Blue3",
			"JA_Cadet_Blue4",
			"JA_Cadet_Blue5",
			"JA_Cadet_Green1",
			"JA_Cadet_Green2",
			"JA_Cadet_Green3",
			"JA_Cadet_Green4",
			"JA_Cadet_Green5"
		};
		weapons[] = {
			"JA_LGC_Quick_Helmet",
			"JA_LGC_Quick_Uniform",
			"JA_332nd_Chich_Helmet",
			"JA_332nd_Chich_Uniform",
			"JA_332nd_Chich_Vest",
			"JA_332nd_Chich_CM_Visor",
			"JA_Cadet_Yellow_Helmet",
			"JA_Cadet_Red_Helmet",
			"JA_Cadet_Blue_Helmet",
			"JA_Cadet_Green_Helmet",
			"JA_Cadet_Yellow1_Uniform",
			"JA_Cadet_Yellow2_Uniform",
			"JA_Cadet_Yellow3_Uniform",
			"JA_Cadet_Yellow4_Uniform",
			"JA_Cadet_Yellow5_Uniform",
			"JA_Cadet_Red1_Uniform",
			"JA_Cadet_Red2_Uniform",
			"JA_Cadet_Red3_Uniform",
			"JA_Cadet_Red4_Uniform",
			"JA_Cadet_Red5_Uniform",
			"JA_Cadet_Blue1_Uniform",
			"JA_Cadet_Blue2_Uniform",
			"JA_Cadet_Blue3_Uniform",
			"JA_Cadet_Blue4_Uniform",
			"JA_Cadet_Blue5_Uniform",
			"JA_Cadet_Green1_Uniform",
			"JA_Cadet_Green2_Uniform",
			"JA_Cadet_Green3_Uniform",
			"JA_Cadet_Green4_Uniform",
			"JA_Cadet_Green5_Uniform"
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



	class JA_LGC_Quick_Helmet : SWLB_clone_P2_Helmet // Legacy Quick Set
	{
		author = "Tundra";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};													  // don't change this
		displayname = "Clone Trooper P2 Helmet (Quick)";								  // the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Armory_Common\data\Textures\104_LGC_Quick_P2_Helmet.paa"}; // the file path to the texture
	};
	class JA_LGC_Quick_Uniform : SWLB_clone_uniform
	{
		author = "Jango's Finest";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (Quick)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Armory_Common\data\Textures\104_LGC_Quick_Upper.paa",
				"Jangos_Armory_Common\data\Textures\104_LGC_Quick_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_LGC_Quick";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_332nd_Chich_Helmet : SWLB_clone_P2_Helmet // Legacy Chich Set
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {"camo1"};													// don't change this
		displayname = "Clone Trooper P2 Helmet (332nd Chich)";							// the name it will be in game
		hiddenSelectionsTextures[] = {"Jangos_Armory_Common\data\Textures\332nd_Chich_Helmet.paa"}; // the file path to the texture
	};
	class JA_332nd_Chich_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (332nd Chich)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Armory_Common\data\Textures\332nd_Chich_Upper.paa",
				"Jangos_Armory_Common\data\Textures\332nd_Chich_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_332nd_Chich";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_332nd_Chich_Vest : SWLB_clone_commander_armor
	{
		author = "Dak";
		displayName = "Clone Trooper Commander Vest (332nd Chich)";
		hiddenSelections[] =
			{
				"camo1"

			};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Armory_Common\data\Textures\332nd_Chich_CM_Kama.paa"};
		class ItemInfo : ItemInfo
		{
			vestType = "Rebreather";
		};
	};
	class JA_332nd_Chich_CM_Visor : lsd_gar_p2MarshalCommander_nvg
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
				"Jangos_Armory_Common\data\Textures\332nd_Chich_CM_Visor.paa",
				"Jangos_Armory_Common\data\Textures\332nd_Chich_CM_Visor.paa"};
	};

	class JA_Cadet_Yellow_Helmet : SWLB_clone_P1_helmet
	{
		author = "Emmet";
			scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Cadet Helmet (Yellow)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "Jangos_Armory_Common\data\Textures\Yellow_P1_Cadet_Helmet.paa" }; // the file path to the texture
	};

	class JA_Cadet_Red_Helmet : SWLB_clone_P1_helmet
	{
		author = "Emmet";
			scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Cadet Helmet (Red)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "Jangos_Armory_Common\data\Textures\Red_P1_Cadet_Helmet.paa" }; // the file path to the texture
	};

	class JA_Cadet_Blue_Helmet : SWLB_clone_P1_helmet
	{
		author = "Emmet";
			scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Cadet Helmet (Blue)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "Jangos_Armory_Common\data\Textures\Blue_P1_Cadet_Helmet.paa" }; // the file path to the texture
	};

	class JA_Cadet_Green_Helmet : SWLB_clone_P1_helmet
	{
		author = "Emmet";
			scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Cadet Helmet (Green)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "Jangos_Armory_Common\data\Textures\Green_P1_Cadet_Helmet.paa" }; // the file path to the texture
	};

	class JA_Cadet_Yellow1_Uniform : SWLB_clone_uniform
	{
		author = "Emmet";
			scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Cadet Armor (Yellow 1)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Jangos_Armory_Common\data\Textures\Yellow_P1_Cadet_Upper_1.paa",
			"Jangos_Armory_Common\data\Textures\Yellow_P1_Cadet_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_Cadet_Yellow1";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};

	class JA_Cadet_Yellow2_Uniform : SWLB_clone_uniform
	{
		author = "Emmet";
			scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Cadet Armor (Yellow 2)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Jangos_Armory_Common\data\Textures\Yellow_P1_Cadet_Upper_2.paa",
			"Jangos_Armory_Common\data\Textures\Yellow_P1_Cadet_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_Cadet_Yellow2";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};

	class JA_Cadet_Yellow3_Uniform : SWLB_clone_uniform
	{
		author = "Emmet";
			scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Cadet Armor (Yellow 3)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Jangos_Armory_Common\data\Textures\Yellow_P1_Cadet_Upper_3.paa",
			"Jangos_Armory_Common\data\Textures\Yellow_P1_Cadet_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_Cadet_Yellow3";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};

	class JA_Cadet_Yellow4_Uniform : SWLB_clone_uniform
	{
		author = "Emmet";
			scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Cadet Armor (Yellow 4)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Jangos_Armory_Common\data\Textures\Yellow_P1_Cadet_Upper_4.paa",
			"Jangos_Armory_Common\data\Textures\Yellow_P1_Cadet_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_Cadet_Yellow4";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};

	class JA_Cadet_Yellow5_Uniform : SWLB_clone_uniform
	{
		author = "Emmet";
			scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Cadet Armor (Yellow 5)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Jangos_Armory_Common\data\Textures\Yellow_P1_Cadet_Upper_5.paa",
			"Jangos_Armory_Common\data\Textures\Yellow_P1_Cadet_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_Cadet_Yellow5";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};

	class JA_Cadet_Red1_Uniform : SWLB_clone_uniform
	{
		author = "Emmet";
			scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Cadet Armor (Red 1)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Jangos_Armory_Common\data\Textures\Red_P1_Cadet_Upper_1.paa",
			"Jangos_Armory_Common\data\Textures\Red_P1_Cadet_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_Cadet_Red1";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};

	class JA_Cadet_Red2_Uniform : SWLB_clone_uniform
	{
		author = "Emmet";
			scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Cadet Armor (Red 2)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Jangos_Armory_Common\data\Textures\Red_P1_Cadet_Upper_2.paa",
			"Jangos_Armory_Common\data\Textures\Red_P1_Cadet_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_Cadet_Red2";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};

	class JA_Cadet_Red3_Uniform : SWLB_clone_uniform
	{
		author = "Emmet";
			scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Cadet Armor (Red 3)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Jangos_Armory_Common\data\Textures\Red_P1_Cadet_Upper_3.paa",
			"Jangos_Armory_Common\data\Textures\Red_P1_Cadet_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_Cadet_Red3";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};

	class JA_Cadet_Red4_Uniform : SWLB_clone_uniform
	{
		author = "Emmet";
			scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Cadet Armor (Red 4)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Jangos_Armory_Common\data\Textures\Red_P1_Cadet_Upper_4.paa",
			"Jangos_Armory_Common\data\Textures\Red_P1_Cadet_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_Cadet_Red4";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};

	class JA_Cadet_Red5_Uniform : SWLB_clone_uniform
	{
		author = "Emmet";
			scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Cadet Armor (Red 5)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Jangos_Armory_Common\data\Textures\Red_P1_Cadet_Upper_5.paa",
			"Jangos_Armory_Common\data\Textures\Red_P1_Cadet_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_Cadet_Red5";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};

	class JA_Cadet_Blue1_Uniform : SWLB_clone_uniform
	{
		author = "Emmet";
			scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Cadet Armor (Blue 1)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Jangos_Armory_Common\data\Textures\Blue_P1_Cadet_Upper_1.paa",
			"Jangos_Armory_Common\data\Textures\Blue_P1_Cadet_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_Cadet_Blue1";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};

	class JA_Cadet_Blue2_Uniform : SWLB_clone_uniform
	{
		author = "Emmet";
			scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Cadet Armor (Blue 2)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Jangos_Armory_Common\data\Textures\Blue_P1_Cadet_Upper_2.paa",
			"Jangos_Armory_Common\data\Textures\Blue_P1_Cadet_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_Cadet_Blue2";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};

	class JA_Cadet_Blue3_Uniform : SWLB_clone_uniform
	{
		author = "Emmet";
			scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Cadet Armor (Blue 3)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Jangos_Armory_Common\data\Textures\Blue_P1_Cadet_Upper_3.paa",
			"Jangos_Armory_Common\data\Textures\Blue_P1_Cadet_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_Cadet_Blue3";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};

	class JA_Cadet_Blue4_Uniform : SWLB_clone_uniform
	{
		author = "Emmet";
			scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Cadet Armor (Blue 4)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Jangos_Armory_Common\data\Textures\Blue_P1_Cadet_Upper_4.paa",
			"Jangos_Armory_Common\data\Textures\Blue_P1_Cadet_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_Cadet_Blue4";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};

	class JA_Cadet_Blue5_Uniform : SWLB_clone_uniform
	{
		author = "Emmet";
			scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Cadet Armor (Blue 5)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Jangos_Armory_Common\data\Textures\Blue_P1_Cadet_Upper_5.paa",
			"Jangos_Armory_Common\data\Textures\Blue_P1_Cadet_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_Cadet_Blue5";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};

	class JA_Cadet_Green1_Uniform : SWLB_clone_uniform
	{
		author = "Emmet";
			scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Cadet Armor (Green 1)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Jangos_Armory_Common\data\Textures\Green_P1_Cadet_Upper_1.paa",
			"Jangos_Armory_Common\data\Textures\Green_P1_Cadet_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_Cadet_Green1";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};

	class JA_Cadet_Green2_Uniform : SWLB_clone_uniform
	{
		author = "Emmet";
			scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Cadet Armor (Green 2)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Jangos_Armory_Common\data\Textures\Green_P1_Cadet_Upper_2.paa",
			"Jangos_Armory_Common\data\Textures\Green_P1_Cadet_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_Cadet_Green2";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};

	class JA_Cadet_Green3_Uniform : SWLB_clone_uniform
	{
		author = "Emmet";
			scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Cadet Armor (Green 3)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Jangos_Armory_Common\data\Textures\Green_P1_Cadet_Upper_3.paa",
			"Jangos_Armory_Common\data\Textures\Green_P1_Cadet_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_Cadet_Green3";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};

	class JA_Cadet_Green4_Uniform : SWLB_clone_uniform
	{
		author = "Emmet";
			scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Cadet Armor (Green 4)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Jangos_Armory_Common\data\Textures\Green_P1_Cadet_Upper_4.paa",
			"Jangos_Armory_Common\data\Textures\Green_P1_Cadet_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_Cadet_Green4";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};

	class JA_Cadet_Green5_Uniform : SWLB_clone_uniform
	{
		author = "Emmet";
			scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Cadet Armor (Green 5)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Jangos_Armory_Common\data\Textures\Green_P1_Cadet_Upper_5.paa",
			"Jangos_Armory_Common\data\Textures\Green_P1_Cadet_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_Cadet_Green5";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
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

	class JA_LGC_Quick : SWLB_clone_base_P2
	{
		author = "Tundra";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_LGC_Quick_Uniform";
		displayName = "104th Quick";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Special";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_Armory_Common\data\Textures\104_LGC_Quick_Upper.paa", "Jangos_Armory_Common\data\Textures\104_LGC_Quick_Lower.paa"};
		linkedItems[] = {JA_Quick_Helmet, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		   // all items that will be on unit
		respawnLinkedItems[] = {JA_Quick_Helmet, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_332nd_Chich : SWLB_clone_base_P2
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_332nd_Chich_Uniform";
		displayName = "332nd Chich";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Special";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_Armory_Common\data\Textures\332nd_Chich_Upper.paa", "Jangos_Armory_Common\data\Textures\332nd_Chich_Lower.paa"};
		linkedItems[] = {JA_302nd_Chich_Helmet, JA_302nd_Chich_Vest, JA_302nd_CommanderVisor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		   // all items that will be on unit
		respawnLinkedItems[] = {JA_302nd_Chich_Helmet, JA_302nd_Chich_Vest, JA_302nd_CommanderVisor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	// Cadet Armor
	class JA_Cadet_Yellow1 : SWLB_clone_base_P2
	{
		author = "Emmet";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		displayName = "104th Cadet Yellow 1";
		uniformClass = "JA_Cadet_Yellow1_Uniform";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Basic";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = { "Jangos_Armory_Common\data\textures\Yellow_P1_Cadet_Upper_1.paa", "Jangos_Armory_Common\data\Textures\Yellow_P1_Cadet_Lower.paa" };
		linkedItems[] = { JA_Cadet_Yellow_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_Cadet_Yellow_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_Cadet_Yellow2 : SWLB_clone_base_P2
	{
		author = "Emmet";
			scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		displayName = "104th Cadet Yellow 2";
		uniformClass = "JA_Cadet_Yellow2_Uniform";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Basic";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = { "Jangos_Armory_Common\data\textures\Yellow_P1_Cadet_Upper_2.paa", "Jangos_Armory_Common\data\Textures\Yellow_P1_Cadet_Lower.paa" };
		linkedItems[] = { JA_Cadet_Yellow_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_Cadet_Yellow_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_Cadet_Yellow3 : SWLB_clone_base_P2
	{
		author = "Emmet";
			scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		displayName = "104th Cadet Yellow 3";
		uniformClass = "JA_Cadet_Yellow3_Uniform";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Basic";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = { "Jangos_Armory_Common\data\textures\Yellow_P1_Cadet_Upper_3.paa", "Jangos_Armory_Common\data\Textures\Yellow_P1_Cadet_Lower.paa" };
		linkedItems[] = { JA_Cadet_Yellow_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_Cadet_Yellow_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_Cadet_Yellow4 : SWLB_clone_base_P2
	{
		author = "Emmet";
			scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		displayName = "104th Cadet Yellow 4";
		uniformClass = "JA_Cadet_Yellow4_Uniform";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Basic";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = { "Jangos_Armory_Common\data\textures\Yellow_P1_Cadet_Upper_4.paa", "Jangos_Armory_Common\data\Textures\Yellow_P1_Cadet_Lower.paa" };
		linkedItems[] = { JA_Cadet_Yellow_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_Cadet_Yellow_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_Cadet_Yellow5 : SWLB_clone_base_P2
	{
		author = "Emmet";
			scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		displayName = "104th Cadet Yellow 5";
		uniformClass = "JA_Cadet_Yellow5_Uniform";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Basic";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = { "Jangos_Armory_Common\data\textures\Yellow_P1_Cadet_Upper_5.paa", "Jangos_Armory_Common\data\Textures\Yellow_P1_Cadet_Lower.paa" };
		linkedItems[] = { JA_Cadet_Yellow_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_Cadet_Yellow_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_Cadet_Red1 : SWLB_clone_base_P2
	{
		author = "Emmet";
			scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		displayName = "104th Cadet Red 1";
		uniformClass = "JA_Cadet_Red1_Uniform";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Basic";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = { "Jangos_Armory_Common\data\textures\Red_P1_Cadet_Upper_1.paa", "Jangos_Armory_Common\data\Textures\Red_P1_Cadet_Lower.paa" };
		linkedItems[] = { JA_Cadet_Red_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_Cadet_Red_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_Cadet_Red2 : SWLB_clone_base_P2
	{
		author = "Emmet";
			scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		displayName = "104th Cadet Red 2";
		uniformClass = "JA_Cadet_Red2_Uniform";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Basic";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = { "Jangos_Armory_Common\data\textures\Red_P1_Cadet_Upper_2.paa", "Jangos_Armory_Common\data\Textures\Red_P1_Cadet_Lower.paa" };
		linkedItems[] = { JA_Cadet_Red_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_Cadet_Red_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_Cadet_Red3 : SWLB_clone_base_P2
	{
		author = "Emmet";
			scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		displayName = "104th Cadet Red 3";
		uniformClass = "JA_Cadet_Red3_Uniform";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Basic";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = { "Jangos_Armory_Common\data\textures\Red_P1_Cadet_Upper_3.paa", "Jangos_Armory_Common\data\Textures\Red_P1_Cadet_Lower.paa" };
		linkedItems[] = { JA_Cadet_Red_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_Cadet_Red_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_Cadet_Red4 : SWLB_clone_base_P2
	{
		author = "Emmet";
			scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		displayName = "104th Cadet Red 4";
		uniformClass = "JA_Cadet_Red4_Uniform";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Basic";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = { "Jangos_Armory_Common\data\textures\Red_P1_Cadet_Upper_4.paa", "Jangos_Armory_Common\data\Textures\Red_P1_Cadet_Lower.paa" };
		linkedItems[] = { JA_Cadet_Red_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_Cadet_Red_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_Cadet_Red5 : SWLB_clone_base_P2
	{
		author = "Emmet";
			scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		displayName = "104th Cadet Red 5";
		uniformClass = "JA_Cadet_Red5_Uniform";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Basic";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = { "Jangos_Armory_Common\data\textures\Red_P1_Cadet_Upper_5.paa", "Jangos_Armory_Common\data\Textures\Red_P1_Cadet_Lower.paa" };
		linkedItems[] = { JA_Cadet_Red_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_Cadet_Red_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_Cadet_Blue1 : SWLB_clone_base_P2
	{
		author = "Emmet";
			scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		displayName = "104th Cadet Blue 1";
		uniformClass = "JA_Cadet_Blue1_Uniform";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Basic";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = { "Jangos_Armory_Common\data\textures\Blue_P1_Cadet_Upper_1.paa", "Jangos_Armory_Common\data\Textures\Blue_P1_Cadet_Lower.paa" };
		linkedItems[] = { JA_Cadet_Blue_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_Cadet_Blue_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_Cadet_Blue2 : SWLB_clone_base_P2
	{
		author = "Emmet";
			scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		displayName = "104th Cadet Blue 2";
		uniformClass = "JA_Cadet_Blue2_Uniform";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Basic";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = { "Jangos_Armory_Common\data\textures\Blue_P1_Cadet_Upper_2.paa", "Jangos_Armory_Common\data\Textures\Blue_P1_Cadet_Lower.paa" };
		linkedItems[] = { JA_Cadet_Blue_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_Cadet_Blue_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_Cadet_Blue3 : SWLB_clone_base_P2
	{
		author = "Emmet";
			scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		displayName = "104th Cadet Blue 3";
		uniformClass = "JA_Cadet_Blue3_Uniform";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Basic";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = { "Jangos_Armory_Common\data\textures\Blue_P1_Cadet_Upper_3.paa", "Jangos_Armory_Common\data\Textures\Blue_P1_Cadet_Lower.paa" };
		linkedItems[] = { JA_Cadet_Blue_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_Cadet_Blue_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_Cadet_Blue4 : SWLB_clone_base_P2
	{
		author = "Emmet";
			scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		displayName = "104th Cadet Blue 4";
		uniformClass = "JA_Cadet_Blue4_Uniform";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Basic";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = { "Jangos_Armory_Common\data\textures\Blue_P1_Cadet_Upper_4.paa", "Jangos_Armory_Common\data\Textures\Blue_P1_Cadet_Lower.paa" };
		linkedItems[] = { JA_Cadet_Blue_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_Cadet_Blue_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_Cadet_Blue5 : SWLB_clone_base_P2
	{
		author = "Emmet";
			scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		displayName = "104th Cadet Blue 5";
		uniformClass = "JA_Cadet_Blue5_Uniform";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Basic";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = { "Jangos_Armory_Common\data\textures\Blue_P1_Cadet_Upper_5.paa", "Jangos_Armory_Common\data\Textures\Blue_P1_Cadet_Lower.paa" };
		linkedItems[] = { JA_Cadet_Blue_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_Cadet_Blue_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_Cadet_Green1 : SWLB_clone_base_P2
	{
		author = "Emmet";
			scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		displayName = "104th Cadet Green 1";
		uniformClass = "JA_Cadet_Green1_Uniform";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Basic";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = { "Jangos_Armory_Common\data\textures\Green_P1_Cadet_Upper_1.paa", "Jangos_Armory_Common\data\Textures\Green_P1_Cadet_Lower.paa" };
		linkedItems[] = { JA_Cadet_Green_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_Cadet_Green_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_Cadet_Green2 : SWLB_clone_base_P2
	{
		author = "Emmet";
			scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		displayName = "104th Cadet Green 2";
		uniformClass = "JA_Cadet_Green2_Uniform";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Basic";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = { "Jangos_Armory_Common\data\textures\Green_P1_Cadet_Upper_2.paa", "Jangos_Armory_Common\data\Textures\Green_P1_Cadet_Lower.paa" };
		linkedItems[] = { JA_Cadet_Green_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_Cadet_Green_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_Cadet_Green3 : SWLB_clone_base_P2
	{
		author = "Emmet";
			scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		displayName = "104th Cadet Green 3";
		uniformClass = "JA_Cadet_Green3_Uniform";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Basic";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = { "Jangos_Armory_Common\data\textures\Green_P1_Cadet_Upper_3.paa", "Jangos_Armory_Common\data\Textures\Green_P1_Cadet_Lower.paa" };
		linkedItems[] = { JA_Cadet_Green_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_Cadet_Green_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_Cadet_Green4 : SWLB_clone_base_P2
	{
		author = "Emmet";
			scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		displayName = "104th Cadet Green 4";
		uniformClass = "JA_Cadet_Green4_Uniform";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Basic";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = { "Jangos_Armory_Common\data\textures\Green_P1_Cadet_Upper_4.paa", "Jangos_Armory_Common\data\Textures\Green_P1_Cadet_Lower.paa" };
		linkedItems[] = { JA_Cadet_Green_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_Cadet_Green_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_Cadet_Green5 : SWLB_clone_base_P2
	{
		author = "Emmet";
			scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		displayName = "104th Cadet Green 5";
		uniformClass = "JA_Cadet_Green5_Uniform";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Basic";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = { "Jangos_Armory_Common\data\textures\Green_P1_Cadet_Upper_5.paa", "Jangos_Armory_Common\data\Textures\Green_P1_Cadet_Lower.paa" };
		linkedItems[] = { JA_Cadet_Green_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_Cadet_Green_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
};
