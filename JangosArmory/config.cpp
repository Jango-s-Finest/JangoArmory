#include "basicDefines_A3.hpp"
class DefaultEventhandlers;
class UniformSlotInfo;
class CfgPatches
{
	class Jangos_Armory_1
	{
		author = "Jango's Finest";
		requiredVersion = 0.1;
		requiredAddons[] = {};
		units[] = {
			"JA_104th_Bail",
			"JA_104th_Irish",
			"JA_104th_Scurvy",
			"JA_104th_Hunter",
			"JA_104th_Banker",
			"JA_104th_Ed",
			"JA_104th_Angel",
			"JA_104th_Knightfall",
			"JA_104th_Tusk",
			"JA_104th_Echo",
			"JA_104th_Backpack",
			"JA_104th_Accessories_Heavy_Backpack",
			"JA_104th_Medic_Backpack",
			"JA_104th_RTO_Backpack",
			"JA_104th_RTO_Mini_Backpack"
		};
		weapons[] = {
			"JA_104th_Bail_Uniform",
			"JA_104th_Irish_Uniform",
			"JA_104th_Scurvy_Uniform",
			"JA_104th_Hunter_Uniform",
			"JA_104th_Banker_Uniform",
			"JA_104th_Ed_Uniform",
			"JA_104th_Angel_Uniform",
			"JA_104th_Knightfall_Uniform",
			"JA_104th_Tusk_Uniform",
			"JA_104th_Echo_Uniform",
			"JA_104thScurvyVest",
			"JA_104thAngelVest",
			"JA_104thKnightfallVest",
			"JA_104thTuskVest",
			"JA_104thPSGTKama",
			"JA_104thNVG",
			"JA_104thNVG_NCO",
			"JA_104thCommanderVisor",
			"JA_104th_Red_Vest",
			"JA_104th_Habit_Helmet",
			"JA_104th_Bravo_Helmet",
			"JA_104th_Bail_Pilot_Helmet",
			"JA_104th_Irish_Helmet",
			"JA_104th_Scurvy_Helmet",
			"JA_104th_Hunter_Helmet",
			"JA_104th_Banker_Helmet",
			"JA_104th_Red_Helmet",
			"JA_104th_Ed_Helmet",
			"JA_104th_Angel_Helmet",
			"JA_104th_Tanner_Helmet",
			"JA_104th_Tusk_Helmet",
			"JA_104th_Echo_Pilot_Helmet"
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
	class UniformItem;
	class VestItem;
	
	// General Uniforms
	// ARF

	// AIRBORNEE


	// Pilots
	class JA_104th_Bail_Uniform : SWLB_clone_uniform
	{
		author = "Jango's Finest";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper armor (104th Bail)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory3\data\Textures\104th_Bail_Upper.paa",
			"JangosArmory3\data\Textures\104th_Bail_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Bail";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};

	// 1-1
	class JA_104th_Irish_Uniform : SWLB_clone_uniform
	{
		author = "Jango's Finest";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper armor (104th Irish)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory\data\Textures\104th_P2_Irish_Upper.paa",
			"JangosArmory\data\Textures\104th_P2_Irish_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Irish";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};

	// 1-2

	class JA_104th_Scurvy_Uniform : SWLB_clone_uniform
	{
		author = "Jango's Finest";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper armor (104th Scurvy)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory\data\Textures\104th_Scurvy_Upper.paa",
			"JangosArmory\data\Textures\104th_Scurvy_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Scurvy";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};

	// 1-3

	class JA_104th_Hunter_Uniform : SWLB_clone_uniform
	{
		author = "Jango's Finest";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper armor (104th Hunter)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory3\data\Textures\104th_ARC_Hunter_Upper.paa",
			"JangosArmory3\data\Textures\104th_ARC_Hunter_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Hunter";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};

	// 1-4
	class JA_104th_Banker_Uniform : SWLB_clone_uniform
	{
		author = "Jango's Finest";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper armor (104th Banker)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory\data\Textures\104th_P2_Banker_Upper.paa",
			"JangosArmory\data\Textures\104th_P2_Banker_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Banker";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};

	// Platoon
	class JA_104th_Ed_Uniform : SWLB_clone_uniform
	{
		author = "Jango's Finest";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper armor (104th Ed)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory\data\Textures\104th_P2_Ed_Upper.paa",
			"JangosArmory\data\Textures\104th_P2_Ed_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Ed";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};

	class JA_104th_Angel_Uniform : SWLB_clone_uniform
	{
		author = "Jango's Finest";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper armor (104th Archangel)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory\data\Textures\104th_ARC_Angel_Upper.paa",
			"JangosArmory\data\Textures\104th_ARC_Angel_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Angel";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};

	// Command Staff
	class JA_104th_Knightfall_Uniform : SWLB_clone_uniform
	{
		author = "Jango's Finest";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper armor (104th Knightfall)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory\data\Textures\104th_Knightfall_Upper.paa",
			"JangosArmory\data\Textures\104th_Knightfall_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Knightfall";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};

	class JA_104th_Tusk_Uniform : SWLB_clone_uniform
	{
		author = "Jango's Finest";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper armor (104th Tusk)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory\data\Textures\104th_Tusk_Upper.paa",
			"JangosArmory\data\Textures\104th_Tusk_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Tusk";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};

	class JA_104th_Echo_Uniform : SWLB_clone_uniform
	{
		author = "Jango's Finest";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper armor (104th Echo)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory\data\Textures\104th_Echo_Upper.paa",
			"JangosArmory\data\Textures\104th_Echo_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "";
			uniformClass = "JA_104th_Echo";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};

	// Vests
	class JA_104thScurvyVest : SWLB_clone_medic_armor
	{
		author = "Tundra";
		displayName = "Clone trooper medic vest (104th Scurvy)";
		hiddenSelections[] =
		{
			"camo1"

		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory\data\Textures\104th_Scurvy_Accessories.paa"
		};
		vestType="Rebreather";		
	};

	class JA_104thAngelVest : SWLB_clone_arc_armor
	{
		author = "Tundra";
		displayName = "Clone ARC Trooper Vest (104th Archangel)";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_arc_armor_ca.paa";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"

		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory\data\Textures\104th_ARC_Angel_Accessories_ARC.paa",
			"JangosArmory\data\Textures\104th_ARC_Angel_Accessories_Officer.paa"
		};
		vestType="Rebreather";	
	};

	class JA_104thKnightfallVest : SWLB_clone_commander_armor
	{
		author = "Tundra";
		displayName = "Clone trooper commander vest (104th Knightfall)";
		hiddenSelections[] =
		{
			"camo1"

		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory\data\Textures\104th_Knightfall_Accessories.paa"
		};
		vestType="Rebreather";	
	};

	class JA_104thTuskVest : SWLB_clone_commander_armor
	{
		author = "Tundra";
		displayName = "Clone trooper commander vest (104th Tusk)";
		hiddenSelections[] =
		{
			"camo1"

		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory\data\Textures\104th_Tusk_Accessories.paa"
		};
		vestType="Rebreather";	
	};

	class JA_104thPSGTKama : SWLB_clone_kama_armor
	{
		author = "Tundra";
		displayName = "Clone trooper Kama (104th)";
		hiddenSelections[] =
		{
			"camo1"

		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory\data\Textures\104th_Pauldron_and_Kama.paa"
		};
		vestType="Rebreather";	
	};

	class JA_104thNVG : SWLB_clone_nvg
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
			"JangosArmory\data\Textures\104th_NVGs.paa",
			""
		};
	};

	class JA_104thNVG_NCO : SWLB_clone_nvg_nco
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
			"JangosArmory\data\Textures\104th_NVGs.paa",
			"JangosArmory\data\Textures\104th_NVGs.paa"
		};
	};

	class JA_104thCommanderVisor : SWLB_clone_mcVisor
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
			"JangosArmory\data\Textures\104th_Commander_NV.paa",
			"JangosArmory\data\Textures\104th_Commander_NV.paa"
		};
	};

	class JA_104th_Red_Vest : SWLB_clone_airborne_nco_armor
	{
		author = "Emmet"
			scope = 2;
		displayName = "Airborne NCO Vest (104th Red)";
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
			"JangosArmory\data\Textures\104th_Red_Vest.paa",
			"JangosArmory\data\Textures\104th_Accessories_Heavy.paa", //Heavy
			"JangosArmory\data\Textures\104th_Accessories_Heavy.paa" //Heavy
		};
		vestType="Rebreather";	
	};


	// AIRBORNEEEEE Helmets

	class JA_104th_Habit_Helmet : SWLB_clone_AB_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper Airborne Helmet (104th Habit)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory\data\Textures\104th_AB_Habit_Helmet.paa" }; // the file path to the texture
	};

	class JA_104th_Bravo_Helmet : SWLB_Clone_Pilot_P2_Helmet
	{
		author = "Emmet";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true
			hiddenSelections[] = { "camo1" }; // dont change thise
		displayName = "Clone Airborne Helmet (104th Bravo)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory3\data\Textures\104th_Bravo_Helmet.paa" }; // The file path to the texture
	};

	// Pilots Helmets
	class JA_104th_Bail_Pilot_Helmet : SWLB_Clone_Pilot_P2_Helmet
	{
		author = "Tundra";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper Pilot Helmet (104th Bail)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory3\data\Textures\104th_Bail_Helmet.paa" }; // the file path to the texture
	};

	// 1-1 Helmets
	class JA_104th_Irish_Helmet : SWLB_clone_P2_Helmet
	{
		author = "Tundra";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper P2 Helmet (104th Irish)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory\data\Textures\104th_P2_Irish_Helmet.paa" }; // the file path to the texture
	};

	// 1-2 Helmets

	class JA_104th_Scurvy_Helmet : SWLB_clone_P2_Helmet
	{
		author = "Tundra";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper P2 Helmet (104th Scurvy)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory\data\Textures\104th_Scurvy_P2_Helmet.paa" }; // the file path to the texture
	};

	// 1-3 Helmets


	class JA_104th_Hunter_Helmet : SWLB_clone_P15_Helmet
	{
		author = "Tundra";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper ARC Trooper Helmet (104th Hunter)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory3\data\Textures\104th_ARC_Hunter_Helmet.paa" }; // the file path to the texture
	};

	//1-4 Helmets
	class JA_104th_Banker_Helmet : SWLB_clone_P2_Helmet
	{
		author = "Tundra";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper P2 Helmet (104th Banker)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory\data\Textures\104th_P2_Banker_Helmet.paa" }; // the file path to the texture
	};
	
	class JA_104th_Red_Helmet : SWLB_clone_AB_helmet
	{
		author = "Tundra";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper AB Helmet (104th Red)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory\data\Textures\104th_Red_AB_Helmet.paa" }; // the file path to the texture
	};

	// Platoon  Helmets
	class JA_104th_Ed_Helmet : SWLB_clone_P2_Helmet
	{
		author = "Tundra";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper P2 Helmet (104th Ed)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory\data\Textures\104th_P2_Ed_Helmet.paa" }; // the file path to the texture
	};

	class JA_104th_Angel_Helmet : SWLB_clone_P15_Helmet
	{
		author = "Tundra";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper ARC Trooper Helmet (104th Archangel)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory\data\Textures\104th_ARC_Angel_Helmet.paa" }; // the file path to the texture
	};

	// Command Staff
	class JA_104th_Tanner_Helmet : SWLB_clone_P2_Helmet
	{
		author = "Tundra";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper P2 Helmet (104th Knightfall)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory\data\Textures\104th_Knightfall_P2_Helmet.paa" }; // the file path to the texture
	};

	class JA_104th_Tusk_Helmet : SWLB_clone_P1_2_helmet
	{
		author = "Tundra";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper P1-2 Helmet (104th Tusk)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory\data\Textures\104th_P1-2_Tusk_Helmet.paa" }; // the file path to the texture
	};


	class JA_104th_Echo_Pilot_Helmet : SWLB_Clone_Pilot_P2_Helmet
	{
		author = "Tundra";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper Pilot Helmet (104th Echo)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory\data\Textures\104th_Echo_Pilot_Helmet.paa" }; // the file path to the texture
	};

	// Special

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
	// General Uniforms

	// AIRBORNEEE
	// Pilots
	class JA_104th_Bail : SWLB_clone_base_P2
	{
		author = "Tundra"
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_104th_Bail_Uniform";
		displayName = "104th Bail";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"JangosArmory3\data\Textures\104th_Bail_Upper.paa", "JangosArmory3\data\Textures\104th_Bail_Lower.paa"};
		linkedItems[] = { JA_104th_Bail_Pilot_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_Bail_Pilot_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	// 1-1
	class JA_104th_Irish : SWLB_clone_base_P2
	{
		author = "Tundra"
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		displayName = "104th Irish";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		uniformClass = "JA_104th_Irish_Uniform";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"JangosArmory\data\Textures\104th_P2_Irish_Upper.paa", "JangosArmory\data\Textures\104th_P2_Irish_Lower.paa"};
		linkedItems[] = {JA_104th_Irish_Helmet, SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Irish_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	// 1-2

	class JA_104th_Scurvy : SWLB_clone_base_P2
	{
		author = "Tundra"
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		displayName = "104th Scurvy";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		uniformClass = "JA_104th_Scurvy_Uniform";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = { "JangosArmory\data\Textures\104th_Scurvy_Upper.paa", "JangosArmory\data\Textures\104th_Scurvy_Lower.paa" };
		linkedItems[] = { JA_104th_Scurvy_Uniform,JA_104thScurvyVest ,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_Scurvy_Uniform,JA_104thScurvyVest,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	// 1-3
	class JA_104th_Hunter : SWLB_clone_base_P2
	{
		author = "Tundra"
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_104th_Hunter_Uniform";
		displayName = "104th Hunter";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = { "JangosArmory3\data\Textures\104th_ARC_Hunter_Upper.paa", "JangosArmory3\data\Textures\104th_ARC_Hunter_Lower.paa" };
		linkedItems[] = { JA_104th_Hunter_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_Hunter_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	// 1-4
	class JA_104th_Banker : SWLB_clone_base_P2
	{
		author = "Tundra"
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_104th_Banker_Uniform";
		displayName = "104th Banker";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"JangosArmory\data\Textures\104th_P2_Banker_Upper.paa", "JangosArmory\data\Textures\104th_P2_Banker_Lower.paa"};
		linkedItems[] = { JA_104th_Banker_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_Banker_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	// Platoon
	class JA_104th_Ed : SWLB_clone_base_P2
	{
		author = "Tundra"
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_104th_Ed_Uniform";
		displayName = "104th Ed";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"JangosArmory\data\Textures\104th_P2_Ed_Upper.paa", "JangosArmory\data\Textures\104th_P2_Ed_Lower.paa"};
		linkedItems[] = { JA_104th_Ed_Helmet,SWLB_clone_officer_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_Ed_Helmet,SWLB_clone_officer_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_104th_Angel : SWLB_clone_base_P2
	{
		author = "Tundra"
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_104th_Angel_Uniform";
		displayName = "104th Angel";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"JangosArmory\data\Textures\104th_ARC_Angel_Upper.paa", "JangosArmory\data\Textures\104th_ARC_Angel_Lower.paa"};
		linkedItems[] = { JA_104th_Angel_Helmet,JA_104thAngelVest,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_Angel_Helmet,JA_104thAngelVest,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	// Command Staff
	class JA_104th_Knightfall : SWLB_clone_base_P2
	{
		author = "Tundra"
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_104th_Knightfall_Uniform";
		displayName = "104th Knightfall";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = { "JangosArmory\data\Textures\104th_Knightfall_Upper.paa", "JangosArmory\data\Textures\104th_Knightfall_Lower.paa" };
		linkedItems[] = { JA_104th_Tanner_Helmet,JA_104thKnightfallVest,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Tanner_Helmet,JA_104thKnightfallVest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_104th_Tusk : SWLB_clone_base_P2
	{
		author = "Tundra"
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_104th_Tusk_Uniform";
		displayName = "104th Tusk";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = { "JangosArmory\data\Textures\104th_Tusk_Upper.paa", "JangosArmory\data\Textures\104th_Tusk_Lower.paa" };
		linkedItems[] = {JA_104th_Tusk_Helmet, JA_104thTuskVest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Tusk_Helmet, JA_104thTuskVest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_104th_Echo : SWLB_clone_base_P2
	{
		author = "Tundra"
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_104th_Echo_Uniform";
		displayName = "104th Echo";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = { "JangosArmory\data\Textures\104th_Echo_Upper.paa", "JangosArmory\data\Textures\104th_Echo_Lower.paa" };
		linkedItems[] = { JA_104th_Echo_Pilot_Helmet,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_Echo_Pilot_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	// Backpacks
	class JA_104th_Backpack : SWLB_clone_backpack
	{
		author = "Tundra";
		scope = 2;
		scopeCurator = 2;
		displayname = "Clone trooper backpack (104th)";
		hiddenSelectionsTextures[] =
		{
			"JangosArmory\data\Textures\104th_Clone_Backpack_Normal.paa", // don't change this
			"JangosArmory\data\Textures\104th_Clone_Backpack_Normal.paa", // don't change unless RTO
			"", // Heavy
			"", // Medic
			"" // RTO
		};
	};
	class JA_104th_Accessories_Heavy_Backpack : SWLB_clone_backpack_heavy
	{
		author = "Tundra";
		scopeCurator = 2;
		displayname = "Clone trooper Heavy backpack (104th)";
		hiddenSelectionsTextures[] =
		{
			"JangosArmory\data\Textures\104th_Clone_Backpack_Normal.paa", // don't change this
			"JangosArmory\data\Textures\104th_Clone_Backpack_Normal.paa", // don't change unless RTO
			"JangosArmory\data\Textures\104th_Clone_Backpack_Normal.paa", // Heavy
			"", // Medic
			"" // RTO
		};
	};
	class JA_104th_Medic_Backpack : SWLB_clone_backpack_medic
	{
		author = "Tundra";
		scopeCurator = 2;
		displayname = "Clone trooper medic backpack (104th)";
		maximumLoad = 300;
		hiddenSelectionsTextures[] =
		{
			"JangosArmory\data\Textures\104th_Clone_Backpack_Medic.paa", // don't change this
			"JangosArmory\data\Textures\104th_Clone_Backpack_Medic.paa", // don't change unless RTO
			"", // Heavy
			"JangosArmory\data\Textures\104th_Clone_Backpack_Medic.paa", // Medic
			"" // RTO
		};
	};
	class JA_104th_RTO_Backpack : SWLB_clone_backpack_RTO
	{
		author = "Tundra";
		scopeCurator = 2;
		displayname = "Clone trooper RTO backpack (104th)";
		hiddenSelectionsTextures[] =
		{
			"JangosArmory\data\Textures\104th_Clone_Backpack_Normal.paa", // don't change this
			"", // don't change unless RTO
			"", // Heavy
			"", // Medic
			"JangosArmory\data\Textures\104th_Clone_Backpack_Normal.paa" // RTO
		};
	};
	class JA_104th_RTO_Mini_Backpack : SWLB_clone_RTO_mini_backpack
	{
		author = "Tundra";
		scopeCurator = 2;
		displayname = "Clone trooper RTO mini backpack (104th)";
		maximumLoad = 200;
		hiddenSelectionsTextures[] =
		{
			"JangosArmory\data\Textures\104th_MiniPack.paa", // Minipack
			"JangosArmory\data\Textures\104th_MiniPack_slots.paa" // slotss
		};
	};};
