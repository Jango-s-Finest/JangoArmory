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
			"JA_104th_Pacify",
			"JA_104th_Garm",
			"JA_104th_Beans",
			"JA_104th_IQ",
			"JA_104th_IQ_ME",
			"JA_104th_Raptor",
			"JA_104th_Habit",
			"JA_104th_Niner",
			"JA_104th_Vision",
			"JA_104th_Mad",
			"JA_104th_Drifter",
			"JA_104th_Sigil",
			'JA_104th_Woods',
			'JA_104th_Trustful',
			'JA_104th_Click',
			'JA_104th_Bomb',
			"JA_104th_Scav",
			"JA_104th_Welty",
		};
		weapons[] = {
			"JA_104th_Pacify_Uniform",
			"JA_104th_Pacify_Helmet",
			"JA_104th_Garm_Uniform",
			"JA_104th_Axel_Helmet",
			"JA_104th_Raptor_Uniform",
			"JA_104th_ARC_Vest",
			"JA_104th_Habit_Uniform",
			"JA_104th_Vision_Uniform",
			"JA_104th_Mad_Helmet",
			"JA_104th_Click_Helmet",
			"JA_104th_Woods_Helmet",
			"JA_104th_Woods_Uniform",
			"JA_104th_Drifter_Uniform",
			"JA_104th_Mad_Uniform",
			"JA_104th_Frosty_Vest",
			"JA_104th_AB_ME_Officer_Trooper_Armor",
			"JA_104th_ME_officer_Vest",
			"JA_104th_ME_Commander_Vest",
			"JA_104th_AB_Officer_Trooper_Armor",
			"JA_104th_Base_officer_Vest",
			"JA_104th_Base_Commander_Vest",
			"JA_104th_ME_Medic_Vest",
			"JA_104th_AB_ME_NCO_Trooper_Armor",
			"JA_104th_AB_ME_Base_Trooper_Armor",
			"JA_104th_Base_Medic_Vest",
			"JA_104th_AB_NCO_Trooper_Armor",
			"JA_104th_AB_Base_Trooper_Armor",
			"JA_104th_Vest",
			"JA_104th_Crowbi_NVG_NCO",
			"JA_104th_Hunter_NVG_NCO",
			"JA_104th_Hunter_Vest",
			"JA_104th_Crowbi_Vest",
			"JA_104th_Beans_Helmet",
			"JA_104th_Beans_Uniform",
			"JA_104th_IQ_Helmet",
			"JA_104th_IQ_Uniform",
			"JA_104th_IQ_Helmet_ME",
			"JA_104th_IQ_Uniform_ME",
			"JA_104th_Niner_Uniform",
			"JA_104th_Garm_Helmet",
			"JA_104th_Vision_Helmet",
			"JA_104th_Mower_Helmet",
			"JA_104th_Drifter_Helmet",
			"JA_104th_Sigil_Helmet",
			"JA_104th_Sigil_Uniform",
			"JA_104th_Bomb_Helmet",
			"JA_104th_Bomb_Uniform",
			"JA_104th_Bone_Helmet",
			"JA_104th_Duce_Helmet",
			"JA_104th_OD_Helmet",
			"JA_104th_Clutch_Helmet",
			"JA_104th_Bacon_Helmet",
			"JA_104th_Cake_Helmet",
			"JA_104th_Moose_Helmet",
			"JA_104th_Achilles_Helmet",
			"JA_104th_Welty_Helmet",
			"JA_104th_Welty_Uniform",
			'JA_104th_AB_Fire_Armor',
			'JA_104th_Trustful_Helmet',
			'JA_104th_Trustful_Uniform',
			'JA_104th_Click_Uniform',
			'JA_104th_Scav_Helmet',
			"JA_104th_Scav_Uniform",
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
	class SWLB_P2_SpecOps_Helmet;
	class SWLB_clone_recon_officer_armor;
	class ls_gar_phase2Arf_helmet;
	class SWLB_clone_eng_helmet;
	class UniformItem;
	class VestItem;
	// General Uniforms
	class JA_104th_Duce_Helmet : SWLB_clone_AB_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper AB Helmet (104th Duce)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory4\data\Textures\104th_AB_Duce_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_OD_Helmet : SWLB_clone_AB_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper AB Helmet (104th OD)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory4\data\Textures\104th_AB_OD_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_Achilles_Helmet : SWLB_clone_AB_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper AB Helmet (104th Achilles)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory4\data\Textures\104th_AB_Achilles_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_Clutch_Helmet : SWLB_clone_AB_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper AB Helmet (104th Clutch)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory4\data\Textures\104th_AB_Clutch_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_Pacify_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper armor (104th Pacify)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory4\data\Textures\104th_P2_Pacify_Upper.paa",
			"JangosArmory4\data\Textures\104th_P2_Pacify_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Pacify";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Pacify_Helmet : SWLB_clone_P2_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper P2 Helmet (104th Pacify)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory4\data\Textures\104th_P2_Pacify_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_Bacon_Helmet : SWLB_clone_P2_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper P2 Helmet (104th Bacon)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory4\data\Textures\104th_P2_Bacon_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_Cake_Helmet : SWLB_clone_P2_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper P2 Helmet (104th Cake)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory4\data\Textures\104th_P2_Cake_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_Moose_Helmet : SWLB_clone_P2_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper P2 Helmet (104th Moose)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory4\data\Textures\104th_P2_Moose_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_Welty_Helmet : SWLB_clone_P2_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper P2 Helmet (104th Welty)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory4\data\Textures\104th_P2_Welty_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_Garm_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper armor (104th Garm)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory4\data\Textures\104th_AB_Garm_Upper.paa",
			"JangosArmory4\data\Textures\104th_AB_Garm_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Garm";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Trustful_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper armor (104th Trustful)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory4\data\Textures\104th_AB_Trustful_Upper.paa",
			"JangosArmory4\data\Textures\104th_AB_Trustful_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Trustful";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Trustful_Helmet : SWLB_clone_AB_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper AB Helmet (104th Trustful)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory4\data\Textures\104th_AB_Trustful_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_AB_Fire_Armor : SWLB_clone_airborne_nco_armor
	{
		author = "Dak";
		displayName = "Clone Airborne NCO vest (104th Fire)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory4\data\Textures\104th_AB_Fire_Heavy_Malevolence.paa", // Heavy
			"JangosArmory4\data\Textures\104th_AB_Fire_Officer_Malevolence.paa",
			"JangosArmory4\data\Textures\104th_AB_Fire_Heavy_Malevolence.paa", //Heavy
			"JangosArmory4\data\Textures\104th_AB_Fire_Heavy_Malevolence.paa" //Heavy
		};
		vestType="Rebreather";	
	};
	class JA_104th_P2_Scav_Armor : SWLB_clone_recon_officer_armor
	{
		author = "Dak";
		displayName = "Clone NCO vest (104th Scav)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2",
		};
		hiddenSelectionsTextures[] =
		{
			"\SWLB_clones\data\heavy_accessories_co.paa",
			"JangosArmory4\data\Textures\104th_P2_Scav_Kama.paa", // Heavy
		};
		vestType="Rebreather";	
	};
	class JA_104th_Vision_Helmet : SWLB_clone_P2_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper P2 Helmet (104th Vision)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory4\data\Textures\104th_P2_Vision_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_Mower_Helmet : SWLB_clone_P2_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper P2 Helmet (104th Mower)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory4\data\Textures\104th_P2_Mower_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_Drifter_Helmet : SWLB_clone_P2_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper P2 Helmet (104th Drifter)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory4\data\Textures\104th_P2_Drifter_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_Drifter_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper armor (104th Drifter)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory4\data\Textures\104th_P2_Drifter_Upper.paa",
			"JangosArmory4\data\Textures\104th_P2_Drifter_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Drifter";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Niner_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper armor (104th Niner)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory4\data\Textures\104th_AB_Niner_Upper.paa",
			"JangosArmory4\data\Textures\104th_AB_Niner_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Niner";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Garm_Helmet : SWLB_clone_AB_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper AB Helmet (104th Garm)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory4\data\Textures\104th_AB_Garm_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_Click_Helmet : SWLB_clone_P2_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper P2 Helmet (104th Click)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory4\data\Textures\104th_P2_Click_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_Woods_Helmet : SWLB_clone_ARF_P1_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper ARF Helmet (104th Woods)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory4\data\Textures\104th_ARF_Woods_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_Mad_Helmet : SWLB_clone_P2_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper P2 Helmet (104th Mad)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory4\data\Textures\104th_P2_Mad_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_Scav_Helmet : SWLB_clone_eng_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = {
            "camo1",
            "illum"
        }; // don't change this
		displayname = "Clone Trooper Engineer Helmet (104th Scav)"; // the name it will be in game
		hiddenSelectionsTextures[] = { 
			"JangosArmory4\data\Textures\104th_P2_Scav_Helmet.paa",
			"JangosArmory4\data\Textures\104th_P2_Scav_Helmet.paa" 
		}; // the file path to the texture
	};
	class JA_104th_Bone_Helmet : SWLB_clone_P2_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper P2 Helmet (104th Bone)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory4\data\Textures\104th_P2_Bone_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_Mad_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper armor (104th Mad)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory4\data\Textures\104th_P2_Mad_Upper.paa",
			"JangosArmory4\data\Textures\104th_P2_Mad_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Mad";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Click_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper armor (104th Click)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory4\data\Textures\104th_P2_Click_Upper.paa",
			"JangosArmory4\data\Textures\104th_P2_Click_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Click";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Vision_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper armor (104th Vision)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory4\data\Textures\104th_P2_Vision_Upper.paa",
			"JangosArmory4\data\Textures\104th_P2_Vision_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Vision";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Axel_Helmet : SWLB_clone_AB_Helmet
	{
		author = "Ice";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper AB Helmet (104th Axel)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory4\data\Textures\104th_AB_Axel_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_Raptor_Uniform : SWLB_clone_uniform
	{
		author = "Ice";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper armor (104th Raptor)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory4\data\Textures\104th_AB_Raptor_Upper.paa",
			"JangosArmory4\data\Textures\104th_AB_Raptor_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Raptor";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_ARC_Vest: SWLB_clone_officer_armor //wip
	{
		author="Dak";
		displayName="Clone ARC Trooper vest (104th)";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_arc_armor_ca.paa";
		model="JangosArmory4\data\model\arcVest.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"JangosArmory4\data\Textures\104th_Pauldron_and_Kama.paa",
			"JangosArmory4\data\Textures\104th_ARC_Hunter_ARC.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="JangosArmory4\data\model\arcVest.p3d";
			containerClass="Supply100";
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
			mass=100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=10;
					PassThrough=0.30000001;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=10;
					passThrough=0.30000001;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=4;
					passThrough=0.30000001;
				};
			};
		};
	};
	class JA_104th_Habit_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper armor (104th Habit)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory4\data\Textures\104th_P2_Habit_Upper.paa",
			"JangosArmory4\data\Textures\104th_P2_Habit_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Habit";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Frosty_Vest : SWLB_clone_arc_armor
	{
		author = "Dak";
		displayName = "Clone ARC Trooper Vest (104th Frosty)";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_arc_armor_ca.paa";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"

		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory4\data\Textures\104th_ARC_Frosty_Vest.paa",
			"JangosArmory4\data\Textures\104th_ARC_Frosty_Pauldron.paa"
		};
		vestType="Rebreather";	
	};
	class JA_104th_AB_ME_Officer_Trooper_Armor : SWLB_CEE_Airborne_Officer
	{
		author = "Dak";
		displayName = "Clone Airborne Officer vest (ME)";
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
			"JangosArmory4\data\Textures\104th_Accessories_Heavy.paa", //Heavy
			"JangosArmory4\data\Textures\104th_Accessories_Heavy.paa", //Heavy
			"JangosArmory1\data\Textures\104th_ME_Pauldron_and_Kama.paa", 
			"JangosArmory4\data\Textures\104th_Accessories_Heavy.paa", //Heavy
			"JangosArmory1\data\Textures\104th_ME_Pauldron_and_Kama.paa"
		};
		vestType="Rebreather";	
	};
	class JA_104th_ME_officer_Vest : SWLB_clone_officer_armor
	{
		author = "Dak";
		displayName = "Clone Trooper Officer vest (ME)";
		hiddenSelections[] =
		{
			"camo1"
		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory1\data\Textures\104th_ME_Pauldron_and_Kama.paa"
		};
		vestType="Rebreather";	
	};
	class JA_104th_ME_Commander_Vest : SWLB_clone_commander_armor
	{
		author = "Dak";
		displayName = "Clone Trooper Commander vest (ME)";
		hiddenSelections[] =
		{
			"camo1"
		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory1\data\Textures\104th_ME_Pauldron_and_Kama.paa"
		};
		vestType="Rebreather";	
	};
	class JA_104th_AB_Officer_Trooper_Armor : SWLB_CEE_Airborne_Officer
	{
		author = "Dak";
		displayName = "Clone Airborne Officer vest (104th)";
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
			"JangosArmory4\data\Textures\104th_Accessories_Heavy.paa", //Heavy
			"JangosArmory4\data\Textures\104th_Accessories_Heavy.paa", //Heavy
			"JangosArmory4\data\Textures\104th_Pauldron_and_Kama.paa", 
			"JangosArmory4\data\Textures\104th_Accessories_Heavy.paa", //Heavy
			"JangosArmory4\data\Textures\104th_Pauldron_and_Kama.paa"
		};
		vestType="Rebreather";	
	};
	class JA_104th_Base_officer_Vest : SWLB_clone_officer_armor
	{
		author = "Dak";
		displayName = "Clone Trooper Officer vest (104th)";
		hiddenSelections[] =
		{
			"camo1"
		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory4\data\Textures\104th_Pauldron_and_Kama.paa"
		};
		vestType="Rebreather";	
	};
	class JA_104th_Base_Commander_Vest : SWLB_clone_commander_armor
	{
		author = "Dak";
		displayName = "Clone Trooper Commander vest (104th)";
		hiddenSelections[] =
		{
			"camo1"
		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory4\data\Textures\104th_Pauldron_and_Kama.paa"
		};
		vestType="Rebreather";	
	};
	class JA_104th_ME_Medic_Vest : SWLB_clone_medic_armor
	{
		author = "Dak";
		displayName = "Clone Trooper Medic vest (ME)";
		hiddenSelections[] =
		{
			"camo1"
		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory4\data\Textures\104th_Accessories_Heavy_ME.paa"
		};
		vestType="Rebreather";	
	};
	class JA_104th_AB_ME_NCO_Trooper_Armor : SWLB_clone_airborne_nco_armor
	{
		author = "Dak";
		displayName = "Clone Airborne NCO vest (ME)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory4\data\Textures\104th_Accessories_Heavy_ME.paa", // Heavy
			"JangosArmory1\data\Textures\104th_ME_Pauldron_and_Kama.paa",
			"JangosArmory4\data\Textures\104th_Accessories_Heavy_ME.paa", //Heavy
			"JangosArmory4\data\Textures\104th_Accessories_Heavy_ME.paa" //Heavy
		};
		vestType="Rebreather";	
	};
	class JA_104th_AB_ME_Base_Trooper_Armor : SWLB_Clone_airborne_armor
	{
		author = "Dak";
		displayName = "Clone Airborne Trooper vest (ME)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory4\data\Textures\104th_Accessories_Heavy_ME.paa", // Heavy
			"JangosArmory1\data\Textures\104th_ME_Pauldron_and_Kama.paa",
			"JangosArmory4\data\Textures\104th_Accessories_Heavy_ME.paa", //Heavy
			"JangosArmory4\data\Textures\104th_Accessories_Heavy_ME.paa" //Heavy
		};
		vestType="Rebreather";	
	};
	class JA_104th_Base_Medic_Vest : SWLB_clone_medic_armor
	{
		author = "Dak";
		displayName = "Clone Trooper Medic vest (104th)";
		hiddenSelections[] =
		{
			"camo1"
		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory4\data\Textures\104th_Accessories_Heavy.paa"
		};
		vestType="Rebreather";	
	};
	class JA_104th_AB_NCO_Trooper_Armor : SWLB_clone_airborne_nco_armor
	{
		author = "Dak";
		displayName = "Clone Airborne NCO vest (104th)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory4\data\Textures\104th_Accessories_Heavy.paa", // Heavy
			"JangosArmory4\data\Textures\104th_Pauldron_and_Kama.paa",
			"JangosArmory4\data\Textures\104th_Accessories_Heavy.paa", //Heavy
			"JangosArmory4\data\Textures\104th_Accessories_Heavy.paa" //Heavy
		};
		vestType="Rebreather";	
	};
	class JA_104th_AB_Base_Trooper_Armor : SWLB_Clone_airborne_armor
	{
		author = "Dak";
		displayName = "Clone Airborne Trooper vest (104th)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory4\data\Textures\104th_Accessories_Heavy.paa", // Heavy
			"JangosArmory4\data\Textures\104th_Pauldron_and_Kama.paa",
			"JangosArmory4\data\Textures\104th_Accessories_Heavy.paa", //Heavy
			"JangosArmory4\data\Textures\104th_Accessories_Heavy.paa" //Heavy
		};
		vestType="Rebreather";	
	};
	class JA_104th_Vest : SWLB_clone_arc_armor
	{
		author = "Ice";
		displayName = "Clone Trooper Captain Vest (104th)";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_arc_armor_ca.paa";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"

		};
		hiddenSelectionsTextures[] =
		{
			"",
			"JangosArmory4\data\Textures\104th_Pauldron_and_Kama.paa"
		};
		vestType="Rebreather";	
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
			"JangosArmory4\data\Textures\104th_ARC_Crowbi_NVG.paa",
			"JangosArmory4\data\Textures\104th_ARC_Crowbi_NVG.paa"
		};
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
			"JangosArmory4\data\Textures\104th_ARC_Hunter_Rangefinder.paa",
			"JangosArmory4\data\Textures\104th_ARC_Hunter_Rangefinder.paa"
		};
	};
	class JA_104th_Hunter_Vest : SWLB_clone_arc_armor
	{
		author = "Ice";
		displayName = "Clone ARC Trooper Vest (104th Hunter)";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_arc_armor_ca.paa";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"

		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory4\data\Textures\104th_ARC_Hunter_ARC.paa",
			"JangosArmory4\data\Textures\104th_ARC_Hunter_Officer.paa"
		};
		vestType="Rebreather";	
	};
	class JA_104th_Crowbi_Vest : SWLB_clone_arc_armor
	{
		author = "Ice";
		displayName = "Clone ARC Trooper Vest (104th Crowbi)";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_arc_armor_ca.paa";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"

		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory4\data\Textures\104th_ARC_Crowbi_Accessories_ARC.paa",
			"JangosArmory4\data\Textures\104th_ARC_Crowbi_Accessories_Officer.paa"
		};
		vestType="Rebreather";	
	};
	class JA_104th_Beans_Helmet : SWLB_clone_ARF_P1_Helmet
	{
		author = "Ice";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper ARF Helmet (104th Beans)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory4\data\Textures\104th_ARF_Beans_Helmet.paa" }; // the file path to the texture
		subItems[] = {"Integrated_NVG_TI_0_F"};
	};
	class JA_104th_Beans_Uniform : SWLB_clone_uniform
	{
		author = "Ice";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper armor (104th Beans)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory4\data\Textures\104th_ARF_Beans_Upper.paa",
			"JangosArmory4\data\Textures\104th_ARF_Beans_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Beans";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_IQ_Helmet : ls_gar_phase2Arf_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		displayname = "Clone Trooper ARF Helmet (104th IQ)"; // the name it will be in game
		hiddenSelectionsTextures[] = {
			"JangosArmory4\data\Textures\104th_ARF_IQ_Helmet_Malevolence.paa",
			"JangosArmory4\data\Textures\104th_ARF_IQ_Flaps.paa",
			"JangosArmory4\data\Textures\104th_ARF_IQ_Helmet_Malevolence.paa"
		}; // the file path to the texture
	};
	class JA_104th_IQ_Helmet_ME : SWLB_clone_ARF_P1_Helmet
	{
		author = "Ice";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper ARF Helmet (104th IQ ME)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory4\data\Textures\104th_ARF_IQ_Helmet_Malevolence.paa" }; // the file path to the texture
	};
	class JA_104th_Woods_Uniform : SWLB_clone_uniform
	{
		author = "Ice";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper armor (104th Woods)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory4\data\Textures\104th_ARF_Woods_Upper.paa",
			"JangosArmory4\data\Textures\104th_ARF_Woods_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Woods";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_IQ_Uniform : SWLB_clone_uniform
	{
		author = "Ice";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper armor (104th IQ)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory4\data\Textures\104th_ARF_IQ_Upper.paa",
			"JangosArmory4\data\Textures\104th_ARF_IQ_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_IQ";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Scav_Uniform : SWLB_clone_uniform
	{
		author = "Ice";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper armor (104th Scav)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory4\data\Textures\104th_P2_Scav_Upper.paa",
			"JangosArmory4\data\Textures\104th_P2_Scav_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Scav";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Bone_Uniform : SWLB_clone_uniform
	{
		author = "Ice";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper armor (104th Bone)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory4\data\Textures\104th_P2_Bone_Upper.paa",
			"JangosArmory4\data\Textures\104th_P2_Bone_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Bone";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Welty_Uniform : SWLB_clone_uniform
	{
		author = "Ice";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper armor (104th Welty)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory4\data\Textures\104th_P2_Welty_Upper.paa",
			"JangosArmory4\data\Textures\104th_P2_Welty_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Welty";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_IQ_Uniform_ME : SWLB_clone_uniform
	{
		author = "Ice";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper armor (104th IQ ME)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory4\data\Textures\104th_ARF_IQ_Upper_Malevolence.paa",
			"JangosArmory4\data\Textures\104th_ARF_IQ_Lower_Malevolence.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_IQ";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Sigil_Helmet : SWLB_clone_AB_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper AB Helmet (104th Sigil)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory4\data\Textures\104th_AB_Sigil_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_Sigil_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper armor (104th Sigil)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory4\data\Textures\104th_AB_Sigil_Upper.paa",
			"JangosArmory4\data\Textures\104th_AB_Sigil_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Sigil";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Bomb_Helmet : SWLB_clone_P2_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper P2 Helmet (104th Bomb)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory4\data\Textures\104th_P2_Bomb_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_Bomb_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper armor (104th Bomb)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory4\data\Textures\104th_P2_Bomb_Upper.paa",
			"JangosArmory4\data\Textures\104th_P2_Bomb_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Bomb";
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
	class JLTS_Clone_jumppack;
	// General Uniforms
	class JA_104th_Sigil : SWLB_clone_base_P2
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_104th_Sigil_Uniform";
		displayName = "104th AB Sigil";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"JangosArmory4\data\Textures\104th_AB_Sigil_Upper.paa", "JangosArmory4\data\Textures\104th_AB_Sigil_Lower.paa"};
		linkedItems[] = { JA_104th_Sigil_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_Sigil_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};	
	class JA_104th_Bomb : SWLB_clone_base_P2
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_104th_Bomb_Uniform";
		displayName = "104th P2 Bomb";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"JangosArmory4\data\Textures\104th_P2_Bomb_Upper.paa", "JangosArmory4\data\Textures\104th_P2_Bomb_Lower.paa"};
		linkedItems[] = { JA_104th_Bomb_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_Bomb_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};	
	class JA_104th_Pacify : SWLB_clone_base_P2
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_104th_Pacify_Uniform";
		displayName = "104th Pacify";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"JangosArmory4\data\Textures\104th_P2_Pacify_Upper.paa", "JangosArmory4\data\Textures\104th_P2_Pacify_Lower.paa"};
		linkedItems[] = { JA_104th_Pacify_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_Pacify_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_104th_Garm : SWLB_clone_base_P2
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_104th_Garm_Uniform";
		displayName = "104th Garm";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"JangosArmory4\data\Textures\104th_AB_Garm_Upper.paa", "JangosArmory4\data\Textures\104th_AB_Garm_Lower.paa"};
		linkedItems[] = { JA_104th_Garm_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_Garm_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_104th_Niner : SWLB_clone_base_P2
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_104th_Niner_Uniform";
		displayName = "104th Niner";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"JangosArmory4\data\Textures\104th_AB_Niner_Upper.paa", "JangosArmory4\data\Textures\104th_AB_Niner_Lower.paa"};
		linkedItems[] = { JA_104th_Niner_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_Niner_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};	
	class JA_104th_Drifter : SWLB_clone_base_P2
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_104th_Drifter_Uniform";
		displayName = "104th Drifter";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"JangosArmory4\data\Textures\104th_P2_Drifter_Upper.paa", "JangosArmory4\data\Textures\104th_P2_Drifter_Lower.paa"};
		linkedItems[] = { JA_104th_Drifter_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_Drifter_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_104th_Mad : SWLB_clone_base_P2
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_104th_Mad_Uniform";
		displayName = "104th Mad";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"JangosArmory4\data\Textures\104th_P2_Mad_Upper.paa", "JangosArmory4\data\Textures\104th_P2_Mad_Lower.paa"};
		linkedItems[] = { JA_104th_Mad_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_Mad_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_104th_Vision : SWLB_clone_base_P2
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_104th_Vision_Uniform";
		displayName = "104th Vision";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"JangosArmory4\data\Textures\104th_P2_Vision_Upper.paa", "JangosArmory4\data\Textures\104th_P2_Vision_Lower.paa"};
		linkedItems[] = { JA_104th_Vision_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_Vision_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_104th_Raptor : SWLB_clone_base_P2
	{
		author = "Ice";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_104th_Raptor_Uniform";
		displayName = "104th Raptor";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"JangosArmory4\data\Textures\104th_AB_Raptor_Upper.paa", "JangosArmory4\data\Textures\104th_AB_Raptor_Lower.paa"};
		linkedItems[] = { JA_104th_Raptor_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_Raptor_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};	
	class JA_104th_Beans : SWLB_clone_base_P2
	{
		author = "Ice";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_104th_Beans_Uniform";
		displayName = "104th Beans";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"JangosArmory4\data\Textures\104th_ARF_Beans_Upper.paa", "JangosArmory4\data\Textures\104th_ARF_Beans_Lower.paa"};
		linkedItems[] = { JA_104th_Beans_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_Beans_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};	
	class JA_104th_Woods : SWLB_clone_base_P2
	{
		author = "Ice";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_104th_Woods_Uniform";
		displayName = "104th Woods";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"JangosArmory4\data\Textures\104th_ARF_Woods_Upper.paa", "JangosArmory4\data\Textures\104th_ARF_Woods_Lower.paa"};
		linkedItems[] = { JA_104th_Woods_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_Woods_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_104th_IQ : SWLB_clone_base_P2
	{
		author = "Ice";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_104th_IQ_Uniform";
		displayName = "104th IQ";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"JangosArmory4\data\Textures\104th_ARF_IQ_Upper.paa", "JangosArmory4\data\Textures\104th_ARF_IQ_Lower.paa"};
		linkedItems[] = { JA_104th_IQ_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_IQ_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_104th_IQ_ME : SWLB_clone_base_P2
	{
		author = "Ice";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_104th_IQ_Uniform_ME";
		displayName = "104th IQ ME";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"JangosArmory4\data\Textures\104th_ARF_IQ_Upper_Malevolence.paa", "JangosArmory4\data\Textures\104th_ARF_IQ_Lower_Malevolence.paa"};
		linkedItems[] = { JA_104th_IQ_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_IQ_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_104th_Scav : SWLB_clone_base_P2
	{
		author = "Ice";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_104th_Scav_Uniform_ME";
		displayName = "104th Scav";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"JangosArmory4\data\Textures\104th_P2_Scav_Upper.paa", "JangosArmory4\data\Textures\104th_P2_Scav_Lower.paa"};
		linkedItems[] = { JA_104th_Scav_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_Scav_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_104th_Bone : SWLB_clone_base_P2
	{
		author = "Ice";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_104th_Bone_Uniform_ME";
		displayName = "104th Bone";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"JangosArmory4\data\Textures\104th_P2_Bone_Upper.paa", "JangosArmory4\data\Textures\104th_P2_Bone_Lower.paa"};
		linkedItems[] = { JA_104th_Bone_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_Bone_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_104th_Welty : SWLB_clone_base_P2
	{
		author = "Ice";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_104th_Welty_Uniform_ME";
		displayName = "104th Welty";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"JangosArmory4\data\Textures\104th_P2_Welty_Upper.paa", "JangosArmory4\data\Textures\104th_P2_Welty_Lower.paa"};
		linkedItems[] = { JA_104th_Welty_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_Welty_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_104th_Habit : SWLB_clone_base_P2
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_104th_Habit_Uniform";
		displayName = "104th Habit";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"JangosArmory4\data\Textures\104th_P2_Habit_Upper.paa", "JangosArmory4\data\Textures\104th_P2_Habit_Lower.paa"};
		linkedItems[] = { JA_104th_Habit_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_Habit_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};	
	class JA_104th_Trustful : SWLB_clone_base_P2
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_104th_Trustful_Uniform";
		displayName = "104th Trustful";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"JangosArmory4\data\Textures\104th_AB_Trustful_Upper.paa", "JangosArmory4\data\Textures\104th_AB_Trustful_Lower.paa"};
		linkedItems[] = { JA_104th_Trustful_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_Trustful_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_104th_Click : SWLB_clone_base_P2
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_104th_Click_Uniform";
		displayName = "104th Click";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"JangosArmory4\data\Textures\104th_P2_Click_Upper.paa", "JangosArmory4\data\Textures\104th_P2_Click_Lower.paa"};
		linkedItems[] = { JA_104th_Click_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_Click_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
};
