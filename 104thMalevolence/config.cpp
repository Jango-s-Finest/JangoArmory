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
	class 104th_Categ_Clones_malevolence
	{
		displayname = "104th - Malevolence";
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
	class SWLB_clone_airborne_nco_armor;
	class SWLB_CEE_Lightweight_Rebreather;
	class UniformItem;
	class VestItem;
	class Bag_Base;

/////////////////////P1 Malevolence
	class JA_Malevolence_Base_ARF_Helmet : SWLB_clone_ARF_P1_Helmet
	{
		author = "Dak"
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone trooper ARF Helmet (Malevolence)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thMalevolence\data\Textures\104th_ARF_Helmet.paa" }; // the file path to the texture
	};
	class JA_Malevolence_Base_ARF_Uniform : SWLB_clone_uniform
	{
		author = "Dak"
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper ARF armor (Malevolence)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"104thMalevolence\data\Textures\104th_ARF_Upper.paa",
			"104thMalevolence\data\Textures\104th_ARF_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Base_Malevolence_ARF";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_Malevolence_Base_Helmet : SWLB_clone_P1_helmet
	{
		author = "Dak"
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone trooper Helmet (Malevolence)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thMalevolence\data\Textures\104th_Trooper_Helmet.paa" }; // the file path to the texture
	};
	class JA_Malevolence_Base_Uniform : SWLB_clone_uniform
	{
		author = "Dak"
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper armor (Malevolence)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"104thMalevolence\data\Textures\104th_Trooper_Upper.paa",
			"104thMalevolence\data\Textures\104th_Trooper_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Base_Malevolence";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_Malevolence_Base_Medic_Helmet : SWLB_clone_P1_helmet
	{
		author = "Dak"
		scopeArsenal = 2;
        side = 1;
		grad_slingHelmet_allow = true;
		hiddenSelections[] = { "camo1" }; // don't change this
		displayname = "Clone trooper medic Helmet (Malevolence)"; // the name it will be in game
		hiddenSelectionsTextures[] = { "104thMalevolence\data\Textures\104th_Medic_Helmet.paa" }; // the file path to the texture
	};
	class JA_Malevolence_Base_Medic_Uniform : SWLB_clone_uniform
	{
		author = "Dak"
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone trooper medic armor (Malevolence)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"104thMalevolence\data\Textures\104th_Medic_Upper.paa",
			"104thMalevolence\data\Textures\104th_Trooper_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Base_Malevolence_Medic";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_Invisible_Base_Rebreather_Uniform : SWLB_CEE_Lightweight_Rebreather
	{
		author = "Dak"
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone lightweight rebreather vest (Invisible)";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			""
		};
		class ItemInfo: VestItem
		{
			uniformModel="-";
			containerClass="Supply100";
			vestType="Rebreather";
			mass=80;
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"camo3"
			};
			class HitpointsProtectionInfo
			{
				class Legs
				{
					hitpointName="HitLegs";
					armor=6;
					passThrough=0.30000001;
				};
			};
		};
	};
/////////////////////Final
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
	class EG_InvisBagMain;
/////////ME
	class JA_104th_Base_Malevolence_ARF : SWLB_clone_base_P1
	{
		author = "Dak"
		scope = 2;
		scopeArsenal = 2;
        side = 1;
		uniformClass = "JA_Malevolence_Base_ARF_Uniform";
		displayName = "ME - ARF";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_malevolence";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"104thMalevolence\data\Textures\104th_ARF_Upper.paa", "104thMalevolence\data\Textures\104th_ARF_Lower.paa"};
		linkedItems[] = {JA_Malevolence_Base_ARF_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = {JA_Malevolence_Base_ARF_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};	class JA_104th_Base_Malevolence : SWLB_clone_base_P1
	{
		author = "Dak"
		scope = 2;
		scopeArsenal = 2;
        side = 1;
		uniformClass = "JA_Malevolence_Base_Uniform";
		displayName = "ME - Trooper";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_malevolence";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"104thMalevolence\data\Textures\104th_Trooper_Upper.paa", "104thMalevolence\data\Textures\104th_Trooper_Lower.paa"};
		linkedItems[] = {JA_Malevolence_Base_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = {JA_Malevolence_Base_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};	class JA_104th_Base_Malevolence_Medic : SWLB_clone_base_P1
	{
		author = "Dak"
		scope = 2;
		scopeArsenal = 2;
        side = 1;
		uniformClass = "JA_Malevolence_Base_Medic_Uniform";
		displayName = "ME - Trooper Medic";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_malevolence";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"104thMalevolence\data\Textures\104th_Medic_Upper.paa", "104thMalevolence\data\Textures\104th_Trooper_Lower.paa"};
		linkedItems[] = {JA_Malevolence_Base_Medic_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = {JA_Malevolence_Base_Medic_Helmet,SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};////////Final
	class JA_104th_Backpack_Malevolence  : SWLB_clone_backpack
	{
		author = "Tundra";
		scope = 2;
		scopeCurator = 2;
		displayname = "Clone trooper backpack (Malevolence)";
		hiddenSelectionsTextures[] =
		{
			"104thMalevolence\data\Textures\SWLB_clone_backpack_ME.paa", // don't change this
			"104thMalevolence\data\Textures\SWLB_clone_backpack_ME.paa", // don't change unless RTO
			"", // Heavy
			"", // Medic
			"" // RTO
		};
	};	class JA_104th_Heavy_Backpack_Malevolence  : SWLB_clone_backpack_heavy
	{
		author = "Tundra";
		scopeCurator = 2;
		displayname = "Clone trooper Heavy backpack (Malevolence)";
		hiddenSelectionsTextures[] =
		{
			"104thMalevolence\data\Textures\SWLB_clone_backpack_ME.paa", // don't change this
			"104thMalevolence\data\Textures\SWLB_clone_backpack_ME.paa", // don't change unless RTO
			"104thMalevolence\data\Textures\SWLB_clone_backpack_ME.paa", // Heavy
			"", // Medic
			"" // RTO
		};
	};	class JA_104th_Medic_Backpack_Malevolence  : SWLB_clone_backpack_medic
	{
		author = "Tundra";
		scopeCurator = 2;
		displayname = "Clone trooper medic backpack (Malevolence)";
		hiddenSelectionsTextures[] =
		{
			"104thMalevolence\data\Textures\SWLB_clone_backpack_ME.paa", // don't change this
			"104thMalevolence\data\Textures\SWLB_clone_backpack_ME.paa", // don't change unless RTO
			"", // Heavy
			"104thMalevolence\data\Textures\SWLB_clone_backpack_ME.paa", // Medic
			"" // RTO
		};
	};	class JA_104th_RTO_Backpack_Malevolence  : SWLB_clone_backpack_RTO
	{
		author = "Tundra";
		scopeCurator = 2;
		displayname = "Clone trooper RTO backpack (Malevolence)";
		hiddenSelectionsTextures[] =
		{
			"104thMalevolence\data\Textures\SWLB_clone_backpack_ME.paa", // don't change this
			"", // don't change unless RTO
			"", // Heavy
			"", // Medic
			"104thMalevolence\data\Textures\SWLB_clone_backpack_ME.paa" // RTO
		};
	};	class JA_104th_RTO_Backpack_Invisible  : SWLB_clone_RTO_mini_backpack
	{
		author = "Tundra";
		scopeCurator = 2;
		displayname = "Clone trooper RTO backpack (Invisible)";
		maximumLoad = 200;
        picture = "JangosArmory\jfalogo.paa";
		hiddenSelectionsTextures[] =
		{
			"", // don't change this
			"", // don't change unless RTO
			"", // Heavy
			"", // Medic
			"", // RTO
			""
		};
	};	class JA_104th_Backpack_Invisible : EG_InvisBagMain
	{
		author = "Tundra";
		scopeCurator = 2;
		displayname = "Clone trooper backpack (Invisible)";
        picture = "JangosArmory\jfalogo.paa";
		maximumLoad = 280;
		mass='20';
		hiddenSelectionsTextures[] =
		{
			"", // don't change this
			"", // don't change unless RTO
			"", // Heavy
			"", // Medic
			"", // RTO
			""
		};
	};};