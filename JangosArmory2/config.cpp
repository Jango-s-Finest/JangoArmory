#include "basicDefines_A3.hpp"
class DefaultEventhandlers;
class UniformSlotInfo;
class CfgPatches
{
	class Jangos_Armory_2
	{
		author = "Jango's Finest";
		requiredVersion = 0.1;
		requiredAddons[] = {};
		units[] = {
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
			"JA_Cadet_Green5",
			"JA_104th_Beans",
			"JA_104th_Dragon",
			"JA_104th_AB_Medic",
			"JA_104th_P2_Medic"
		};
		weapons[] = {
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
			"JA_Cadet_Green5_Uniform",
			"JA_104th_Dragon_Helmet",
			"JA_104th_Dragon_Uniform",
			"JA_104th_Beans_Helmet",
			"JA_104th_Beans_Uniform",
			"JA_104th_AB_Base_Helmet",
			"JA_104th_AB_Medic_Helmet",
			"JA_104th_AB_Medic_Uniform",
			"JA_104th_P2_Medic_Helmet",
			"JA_104th_P2_Medic_Uniform",
			"JA_104th_Desert_Medic_Helmet",
			"JA_104th_Desert_Medic_NCO_Helmet",
			"JA_104th_Desert_NCO_Helmet",
			"JA_104th_Desert_Officer_Helmet",
			"JA_104th_Desert_Trooper_Helmet",
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
	class SWLB_clone_nvg;
	class SWLB_clone_nvg_nco;
	class SWLB_clone_ccVisor;
	class SWLB_clone_medic_armor;
	class SWLB_clone_basic_armor;
	class SWLB_clone_mcVisor;
	class SWLB_clone_airborne_nco_armor;
	class ls_gar_desert_helmet;
	class UniformItem;

	// Cadet Armor
	class JA_104th_Desert_Medic_Helmet : ls_gar_desert_helmet
	{
		author = "Dak";
			scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "Camo1","Visor" }; // don't change this
		displayname = "Clone trooper Desert Helmet (Medic)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory2\data\Textures\104th_Desert_Helmet_Base_Medic.paa","JangosArmory2\data\Textures\Visor_Desert.paa" }; // the file path to the texture
	};

	class JA_104th_Desert_Medic_NCO_Helmet : ls_gar_desert_helmet
	{
		author = "Dak";
			scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "Camo1","Visor" }; // don't change this
		displayname = "Clone trooper Desert Helmet (Medic NCO)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory2\data\Textures\104th_Desert_Helmet_Base_Medic_NCO.paa","JangosArmory2\data\Textures\Visor_Desert.paa" }; // the file path to the texture
	};

	class JA_104th_Desert_NCO_Helmet : ls_gar_desert_helmet
	{
		author = "Dak";
			scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "Camo1","Visor" }; // don't change this
		displayname = "Clone trooper Desert Helmet (NCO)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory2\data\Textures\104th_Desert_Helmet_Base_NCO.paa","JangosArmory2\data\Textures\Visor_Desert.paa" }; // the file path to the texture
	};

	class JA_104th_Desert_Officer_Helmet : ls_gar_desert_helmet
	{
		author = "Dak";
			scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "Camo1","Visor" }; // don't change this
		displayname = "Clone trooper Desert Helmet (Officer)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory2\data\Textures\104th_Desert_Helmet_Base_Officer.paa","JangosArmory2\data\Textures\Visor_Desert.paa" }; // the file path to the texture
	};

	class JA_104th_Desert_Trooper_Helmet : ls_gar_desert_helmet
	{
		author = "Dak";
			scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "Camo1","Visor" }; // don't change this
		displayname = "Clone trooper Desert Helmet (Base)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory2\data\Textures\104th_Desert_Helmet_Base_Trooper.paa","JangosArmory2\data\Textures\Visor_Desert.paa" }; // the file path to the texture
	};

	class JA_104th_P2_Medic_Helmet : SWLB_clone_P2_helmet
	{
		author = "Dak";
			scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone trooper P2 Helmet (Medic)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory2\data\Textures\104th_P2_Medic_Helmet.paa" }; // the file path to the texture
	};

	class JA_104th_P2_Medic_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
			scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper P2 Armor (Medic)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory2\data\Textures\104th_P2_Medic_Upper.paa",
			"JangosArmory2\data\Textures\104th_P2_Medic_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_P2_Medic";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};

	class JA_104th_AB_Base_Helmet : SWLB_clone_AB_helmet
	{
		author = "Dak";
			scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone trooper Airborne Helmet (Base)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory2\data\Textures\104th_AB_Base_Helmet.paa" }; // the file path to the texture
	};

	class JA_104th_AB_Medic_Helmet : SWLB_clone_AB_helmet
	{
		author = "Dak";
			scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone trooper Airborne Helmet (Medic)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory2\data\Textures\104th_AB_Medic_Helmet.paa" }; // the file path to the texture
	};

	class JA_104th_AB_Medic_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
			scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper Airborne Armor (Medic)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory2\data\Textures\104th_AB_Medic_Upper.paa",
			"JangosArmory2\data\Textures\104th_AB_Medic_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_AB_Medic";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};

	class JA_Cadet_Yellow_Helmet : SWLB_clone_P1_helmet
	{
		author = "Emmet";
			scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Cadet Helmet (Yellow)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory2\data\Textures\Yellow_P1_Cadet_Helmet.paa" }; // the file path to the texture
	};

	class JA_Cadet_Red_Helmet : SWLB_clone_P1_helmet
	{
		author = "Emmet";
			scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Cadet Helmet (Red)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory2\data\Textures\Red_P1_Cadet_Helmet.paa" }; // the file path to the texture
	};

	class JA_Cadet_Blue_Helmet : SWLB_clone_P1_helmet
	{
		author = "Emmet";
			scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Cadet Helmet (Blue)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory2\data\Textures\Blue_P1_Cadet_Helmet.paa" }; // the file path to the texture
	};

	class JA_Cadet_Green_Helmet : SWLB_clone_P1_helmet
	{
		author = "Emmet";
			scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Cadet Helmet (Green)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory2\data\Textures\Green_P1_Cadet_Helmet.paa" }; // the file path to the texture
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
			"JangosArmory2\data\Textures\Yellow_P1_Cadet_Upper_1.paa",
			"JangosArmory2\data\Textures\Yellow_P1_Cadet_Lower.paa"
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
			"JangosArmory2\data\Textures\Yellow_P1_Cadet_Upper_2.paa",
			"JangosArmory2\data\Textures\Yellow_P1_Cadet_Lower.paa"
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
			"JangosArmory2\data\Textures\Yellow_P1_Cadet_Upper_3.paa",
			"JangosArmory2\data\Textures\Yellow_P1_Cadet_Lower.paa"
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
			"JangosArmory2\data\Textures\Yellow_P1_Cadet_Upper_4.paa",
			"JangosArmory2\data\Textures\Yellow_P1_Cadet_Lower.paa"
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
			"JangosArmory2\data\Textures\Yellow_P1_Cadet_Upper_5.paa",
			"JangosArmory2\data\Textures\Yellow_P1_Cadet_Lower.paa"
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
			"JangosArmory2\data\Textures\Red_P1_Cadet_Upper_1.paa",
			"JangosArmory2\data\Textures\Red_P1_Cadet_Lower.paa"
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
			"JangosArmory2\data\Textures\Red_P1_Cadet_Upper_2.paa",
			"JangosArmory2\data\Textures\Red_P1_Cadet_Lower.paa"
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
			"JangosArmory2\data\Textures\Red_P1_Cadet_Upper_3.paa",
			"JangosArmory2\data\Textures\Red_P1_Cadet_Lower.paa"
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
			"JangosArmory2\data\Textures\Red_P1_Cadet_Upper_4.paa",
			"JangosArmory2\data\Textures\Red_P1_Cadet_Lower.paa"
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
			"JangosArmory2\data\Textures\Red_P1_Cadet_Upper_5.paa",
			"JangosArmory2\data\Textures\Red_P1_Cadet_Lower.paa"
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
			"JangosArmory2\data\Textures\Blue_P1_Cadet_Upper_1.paa",
			"JangosArmory2\data\Textures\Blue_P1_Cadet_Lower.paa"
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
			"JangosArmory2\data\Textures\Blue_P1_Cadet_Upper_2.paa",
			"JangosArmory2\data\Textures\Blue_P1_Cadet_Lower.paa"
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
			"JangosArmory2\data\Textures\Blue_P1_Cadet_Upper_3.paa",
			"JangosArmory2\data\Textures\Blue_P1_Cadet_Lower.paa"
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
			"JangosArmory2\data\Textures\Blue_P1_Cadet_Upper_4.paa",
			"JangosArmory2\data\Textures\Blue_P1_Cadet_Lower.paa"
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
			"JangosArmory2\data\Textures\Blue_P1_Cadet_Upper_5.paa",
			"JangosArmory2\data\Textures\Blue_P1_Cadet_Lower.paa"
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
			"JangosArmory2\data\Textures\Green_P1_Cadet_Upper_1.paa",
			"JangosArmory2\data\Textures\Green_P1_Cadet_Lower.paa"
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
			"JangosArmory2\data\Textures\Green_P1_Cadet_Upper_2.paa",
			"JangosArmory2\data\Textures\Green_P1_Cadet_Lower.paa"
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
			"JangosArmory2\data\Textures\Green_P1_Cadet_Upper_3.paa",
			"JangosArmory2\data\Textures\Green_P1_Cadet_Lower.paa"
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
			"JangosArmory2\data\Textures\Green_P1_Cadet_Upper_4.paa",
			"JangosArmory2\data\Textures\Green_P1_Cadet_Lower.paa"
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
			"JangosArmory2\data\Textures\Green_P1_Cadet_Upper_5.paa",
			"JangosArmory2\data\Textures\Green_P1_Cadet_Lower.paa"
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

	//104th

	class JA_104th_Dragon_Helmet : SWLB_clone_P2_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // dont change this
		displayName = "Clone trooper AB Helmet (104th Dragon)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory2\data\Textures\104th_P2_Dragon_Helmet.paa" }; // the file path to the texture
	};
	
	class JA_104th_Dragon_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
			scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper armor (104th Dragon)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory2\data\Textures\104th_P2_Dragon_Upper.paa",
			"JangosArmory2\data\Textures\104th_P2_Dragon_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Dragon";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};

	// 104th


	class JA_104th_Beans_Uniform : SWLB_clone_uniform
	{
		author = "Tundra";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper armor (104th Beans)";
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Beans";
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

	// Cadet Armors

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
		hiddenSelectionsTextures[] = { "JangosArmory2\data\textures\Yellow_P1_Cadet_Upper_1.paa", "JangosArmory2\data\Textures\Yellow_P1_Cadet_Lower.paa" };
		linkedItems[] = { JA_Cadet_Yellow_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_Cadet_Yellow_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	}

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
		hiddenSelectionsTextures[] = { "JangosArmory2\data\textures\Yellow_P1_Cadet_Upper_2.paa", "JangosArmory2\data\Textures\Yellow_P1_Cadet_Lower.paa" };
		linkedItems[] = { JA_Cadet_Yellow_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_Cadet_Yellow_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	}

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
		hiddenSelectionsTextures[] = { "JangosArmory2\data\textures\Yellow_P1_Cadet_Upper_3.paa", "JangosArmory2\data\Textures\Yellow_P1_Cadet_Lower.paa" };
		linkedItems[] = { JA_Cadet_Yellow_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_Cadet_Yellow_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	}

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
		hiddenSelectionsTextures[] = { "JangosArmory2\data\textures\Yellow_P1_Cadet_Upper_4.paa", "JangosArmory2\data\Textures\Yellow_P1_Cadet_Lower.paa" };
		linkedItems[] = { JA_Cadet_Yellow_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_Cadet_Yellow_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	}

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
		hiddenSelectionsTextures[] = { "JangosArmory2\data\textures\Yellow_P1_Cadet_Upper_5.paa", "JangosArmory2\data\Textures\Yellow_P1_Cadet_Lower.paa" };
		linkedItems[] = { JA_Cadet_Yellow_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_Cadet_Yellow_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	}

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
		hiddenSelectionsTextures[] = { "JangosArmory2\data\textures\Red_P1_Cadet_Upper_1.paa", "JangosArmory2\data\Textures\Red_P1_Cadet_Lower.paa" };
		linkedItems[] = { JA_Cadet_Red_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_Cadet_Red_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	}

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
		hiddenSelectionsTextures[] = { "JangosArmory2\data\textures\Red_P1_Cadet_Upper_2.paa", "JangosArmory2\data\Textures\Red_P1_Cadet_Lower.paa" };
		linkedItems[] = { JA_Cadet_Red_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_Cadet_Red_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	}

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
		hiddenSelectionsTextures[] = { "JangosArmory2\data\textures\Red_P1_Cadet_Upper_3.paa", "JangosArmory2\data\Textures\Red_P1_Cadet_Lower.paa" };
		linkedItems[] = { JA_Cadet_Red_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_Cadet_Red_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	}

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
		hiddenSelectionsTextures[] = { "JangosArmory2\data\textures\Red_P1_Cadet_Upper_4.paa", "JangosArmory2\data\Textures\Red_P1_Cadet_Lower.paa" };
		linkedItems[] = { JA_Cadet_Red_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_Cadet_Red_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	}

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
		hiddenSelectionsTextures[] = { "JangosArmory2\data\textures\Red_P1_Cadet_Upper_5.paa", "JangosArmory2\data\Textures\Red_P1_Cadet_Lower.paa" };
		linkedItems[] = { JA_Cadet_Red_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_Cadet_Red_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	}

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
		hiddenSelectionsTextures[] = { "JangosArmory2\data\textures\Blue_P1_Cadet_Upper_1.paa", "JangosArmory2\data\Textures\Blue_P1_Cadet_Lower.paa" };
		linkedItems[] = { JA_Cadet_Blue_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_Cadet_Blue_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	}

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
		hiddenSelectionsTextures[] = { "JangosArmory2\data\textures\Blue_P1_Cadet_Upper_2.paa", "JangosArmory2\data\Textures\Blue_P1_Cadet_Lower.paa" };
		linkedItems[] = { JA_Cadet_Blue_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_Cadet_Blue_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	}

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
		hiddenSelectionsTextures[] = { "JangosArmory2\data\textures\Blue_P1_Cadet_Upper_3.paa", "JangosArmory2\data\Textures\Blue_P1_Cadet_Lower.paa" };
		linkedItems[] = { JA_Cadet_Blue_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_Cadet_Blue_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	}

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
		hiddenSelectionsTextures[] = { "JangosArmory2\data\textures\Blue_P1_Cadet_Upper_4.paa", "JangosArmory2\data\Textures\Blue_P1_Cadet_Lower.paa" };
		linkedItems[] = { JA_Cadet_Blue_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_Cadet_Blue_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	}

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
		hiddenSelectionsTextures[] = { "JangosArmory2\data\textures\Blue_P1_Cadet_Upper_5.paa", "JangosArmory2\data\Textures\Blue_P1_Cadet_Lower.paa" };
		linkedItems[] = { JA_Cadet_Blue_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_Cadet_Blue_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	}

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
		hiddenSelectionsTextures[] = { "JangosArmory2\data\textures\Green_P1_Cadet_Upper_1.paa", "JangosArmory2\data\Textures\Green_P1_Cadet_Lower.paa" };
		linkedItems[] = { JA_Cadet_Green_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_Cadet_Green_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	}

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
		hiddenSelectionsTextures[] = { "JangosArmory2\data\textures\Green_P1_Cadet_Upper_2.paa", "JangosArmory2\data\Textures\Green_P1_Cadet_Lower.paa" };
		linkedItems[] = { JA_Cadet_Green_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_Cadet_Green_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	}

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
		hiddenSelectionsTextures[] = { "JangosArmory2\data\textures\Green_P1_Cadet_Upper_3.paa", "JangosArmory2\data\Textures\Green_P1_Cadet_Lower.paa" };
		linkedItems[] = { JA_Cadet_Green_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_Cadet_Green_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	}

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
		hiddenSelectionsTextures[] = { "JangosArmory2\data\textures\Green_P1_Cadet_Upper_4.paa", "JangosArmory2\data\Textures\Green_P1_Cadet_Lower.paa" };
		linkedItems[] = { JA_Cadet_Green_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_Cadet_Green_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	}

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
		hiddenSelectionsTextures[] = { "JangosArmory2\data\textures\Green_P1_Cadet_Upper_5.paa", "JangosArmory2\data\Textures\Green_P1_Cadet_Lower.paa" };
		linkedItems[] = { JA_Cadet_Green_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_Cadet_Green_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	}

	class JA_104th_Dragon : SWLB_clone_base_P2
	{
		author = "Dak";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        side = 1;
		displayName = "104th Dragon";
		uniformClass = "JA_104th_Dragon_Uniform";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones";
		hiddenSelectionsTextures[] =
		{
			"JangosArmory2\data\Textures\104th_P2_Dragon_Upper.paa",
			"JangosArmory2\data\Textures\104th_P2_Dragon_Lower.paa"
		};
		linkedItems[] = { JA_104th_Dragon_Helmet ,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_Dragon_Helmet ,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_104th_AB_Medic : SWLB_clone_base_P2
	{
		author = "Dak";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        side = 1;
		displayName = "104th AB Medic";
		uniformClass = "JA_104th_AB_Medic_Uniform";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Basic";
		hiddenSelectionsTextures[] =
		{
			"JangosArmory2\data\Textures\104th_AB_Medic_Upper.paa",
			"JangosArmory2\data\Textures\104th_AB_Medic_Lower.paa"
		};
		linkedItems[] = { JA_104th_AB_Medic_Helmet ,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_AB_Medic_Helmet ,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};

	class JA_104th_P2_Medic : SWLB_clone_base_P2
	{
		author = "Dak";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        side = 1;
		displayName = "104th P2 Medic";
		uniformClass = "JA_104th_P2_Medic_Uniform";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Basic";
		hiddenSelectionsTextures[] =
		{
			"JangosArmory2\data\Textures\104th_P2_Medic_Upper.paa",
			"JangosArmory2\data\Textures\104th_P2_Medic_Lower.paa"
		};
		linkedItems[] = { JA_104th_P2_Medic_Helmet ,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_P2_Medic_Helmet ,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};

};