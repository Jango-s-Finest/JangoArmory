#include "basicDefines_A3.hpp"
class DefaultEventhandlers;
class UniformSlotInfo;
class CfgPatches
{
	class Jangos_Armory
	{
		author = "Jango's Finest";
		requiredAddons[]= {};
		units[] = {
			"JA_104th_Beans",
			"JA_104th_IQ"
		};
		weapons[] = {
			"JA_104th_Beans_Uniform",
			"JA_104th_IQ_Uniform",
			"JA_104th_Beans_Helmet",
			"JA_104th_IQ_Helmet",
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
	class JA_104th_Bomb_Uniform : SWLB_clone_uniform
	{
		author = "Ice";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper armor (104th Bomb)";
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
	class JA_104th_Axel_Helmet : SWLB_clone_AB_Helmet
	{
		author = "Ice";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper Airborne Helmet (104th Axel)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory4\data\Textures\104th_AB_Axel_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_Raptor_Uniform : SWLB_clone_uniform
	{
		author = "Ice";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper armor (104th Raptor)";
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
	class JA_104th_Bomb_Helmet : SWLB_clone_P2_helmet
	{
		author = "Ice";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper P2 Helmet (104th Bomb)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory4\data\Textures\104th_P2_Bomb_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_Needle_Helmet : SWLB_clone_P2_helmet
	{
		author = "Ice";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper P2 Helmet (104th Needle)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory4\data\Textures\104th_P2_Needle_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_ARC_Vest: SWLB_clone_officer_armor //wip
	{
		author="Dak";
		displayName="Clone ARC trooper vest (104th)";
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
			"JangosArmory4\data\Textures\104th_ARC_Hunter_Vest.paa"
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
		displayName = "Clone trooper armor (104th Habit)";
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
	class JA_104th_Palv_Helmet : SWLB_clone_AB_Helmet
	{
		author = "Dak";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper Airborne Helmet (104th Palv)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory4\data\Textures\104th_AB_Palv_Helmet.paa" }; // the file path to the texture
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
			"JangosArmory\data\Textures\104th_ME_Pauldron_and_Kama.paa", 
			"JangosArmory4\data\Textures\104th_Accessories_Heavy.paa", //Heavy
			"JangosArmory\data\Textures\104th_ME_Pauldron_and_Kama.paa"
		};
		vestType="Rebreather";	
	};
	class JA_104th_ME_officer_Vest : SWLB_clone_officer_armor
	{
		author = "Dak";
		displayName = "Clone trooper Officer vest (ME)";
		hiddenSelections[] =
		{
			"camo1"
		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory\data\Textures\104th_ME_Pauldron_and_Kama.paa"
		};
		vestType="Rebreather";	
	};
	class JA_104th_ME_Commander_Vest : SWLB_clone_commander_armor
	{
		author = "Dak";
		displayName = "Clone trooper Commander vest (ME)";
		hiddenSelections[] =
		{
			"camo1"
		};
		hiddenSelectionsTextures[] =
		{
			"JangosArmory\data\Textures\104th_ME_Pauldron_and_Kama.paa"
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
		displayName = "Clone trooper Officer vest (104th)";
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
		displayName = "Clone trooper Commander vest (104th)";
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
		displayName = "Clone trooper Medic vest (ME)";
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
			"JangosArmory\data\Textures\104th_ME_Pauldron_and_Kama.paa",
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
			"JangosArmory\data\Textures\104th_ME_Pauldron_and_Kama.paa",
			"JangosArmory4\data\Textures\104th_Accessories_Heavy_ME.paa", //Heavy
			"JangosArmory4\data\Textures\104th_Accessories_Heavy_ME.paa" //Heavy
		};
		vestType="Rebreather";	
	};
	class JA_104th_Base_Medic_Vest : SWLB_clone_medic_armor
	{
		author = "Dak";
		displayName = "Clone trooper Medic vest (104th)";
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
	class JA_104th_Crowbi_NVG_NCO : SWLB_clone_nvg_nco
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
	class JA_104th_Hunter_NVG_NCO : SWLB_clone_nvg_nco
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
			"JangosArmory4\data\Textures\104th_ARC_Hunter_Vest.paa",
			"JangosArmory4\data\Textures\104th_ARC_Hunter_Accessories.paa"
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
			"JangosArmory4\data\Textures\104th_ARC_Crowbi_Vest.paa",
			"JangosArmory4\data\Textures\104th_ARC_Crowbi_Pauldron.paa"
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
	};
	class JA_104th_Beans_Uniform : SWLB_clone_uniform
	{
		author = "Ice";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper armor (104th Beans)";
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
	class JA_104th_IQ_Helmet : SWLB_clone_ARF_P1_Helmet
	{
		author = "Ice";
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone Trooper ARF Helmet (104th IQ)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "JangosArmory4\data\Textures\104th_ARF_IQ_Helmet.paa" }; // the file path to the texture
	};
	class JA_104th_IQ_Uniform : SWLB_clone_uniform
	{
		author = "Ice";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper armor (104th IQ)";
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
	class JA_104th_Bomb : SWLB_clone_base_P2
	{
		author = "Ice"
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_104th_Bomb_Uniform";
		displayName = "104th Bomb";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"JangosArmory4\data\Textures\104th_P2_Bomb_Upper.paa", "JangosArmory4\data\Textures\104th_P2_Bomb_Lower.paa"};
		linkedItems[] = { JA_104th_Bomb_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_Bomb_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};	
	class JA_104th_Raptor : SWLB_clone_base_P2
	{
		author = "Ice"
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
		author = "Ice"
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
	class JA_104th_IQ : SWLB_clone_base_P2
	{
		author = "Ice"
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
	class JA_104th_Habit : SWLB_clone_base_P2
	{
		author = "Dak"
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
};
