#include "basicDefines_A3.hpp"
class DefaultEventhandlers;
class UniformSlotInfo;
class CfgPatches
{
	class Jangos_Armory_Airborne_Armours
	{
		author = "Jango's Finest";
		requiredVersion = 0.1;
		requiredAddons[] = {};
		units[] = {
			"JA_104th_Azure",
			"JA_104th_Stache",
			"JA_104th_Carmine",
			"JA_104th_Clutch",
			"JA_104th_Dak",
			"JA_104th_Osiris",
			"JA_104th_Magnum",
			"JA_104th_Bulky",
			"JA_104th_Cyan",
			"JA_104th_Axel",
			"JA_104th_Kage",
			"JA_104th_Red",
			"JA_104th_Garm",
			"JA_104th_Sixes",
			"JA_104th_Soul",
			"JA_104th_Trustful",
			"JA_104th_Raptor"
		};
		weapons[] = {
			"JA_104th_Azure_Uniform",
			"JA_104th_Stache_Uniform",
			"JA_104th_Carmine_Uniform",
			"JA_104th_Clutch_Uniform",
			"JA_104th_Osiris_Uniform",
			"JA_104th_Dak_Uniform",
			"JA_104th_Magnum_Uniform",
			"JA_104th_Bulky_Uniform",
			"JA_104th_Cyan_Uniform",
			"JA_104th_Axel_Uniform",
			"JA_104th_Kage_Uniform",
			"JA_104th_Red_Uniform",
			"JA_104th_Garm_Uniform",
			"JA_104th_Sixes_Uniform",
			"JA_104th_Soul_Uniform",
			"JA_104th_Trustful_Uniform",
			"JA_104th_Raptor_Uniform"
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
	class ItemInfo;
	class SWLB_Clone_Pilot_P2_Helmet;
	class SWLB_clone_uniform;
	class SWLB_clone_mc_uniform;
	class SWLB_clone_arc_armor;
	class SWLB_clone_officer_armor;
	class SWLB_clone_commander_armor;
	class SWLB_clone_airborne_armor;
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
	class SWLB_clone_eng_helmet;
	class SWLB_P2_SpecOps_Helmet;
	class UniformItem;
	class VestItem;

	class JA_104th_Base_AB_Uniform : SWLB_clone_airborne_armor
	{
		class ItemInfo: UniformItem
		{
			class HitpointsProtectionInfo
			{
				class Arms
				{
					hitpointName = "HitArms";
					armor = 40;
					explosionShielding  = 20;
					passThrough = 0.5;
				};
				class Hands
				{
					hitpointName = "HitHands";
					armor = 40;
					explosionShielding  = 20;
					passThrough = 0.5;
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 40;
					explosionShielding  = 20;
					passThrough = 0.5;
				};
				
				class chest
				{
					hitpointName = "HitChest";
					armor = 40;
					explosionShielding  = 20;
					passThrough = 0.5;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 40;
					explosionShielding  = 20;
					passThrough = 0.5;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 40;
					explosionShielding  = 20;
					passThrough = 0.5;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 40;
					explosionShielding  = 20;
					passThrough = 0.5;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 40;
					explosionShielding  = 20;
					passThrough = 0.5;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 40;
					explosionShielding  = 20;
					passThrough = 0.5;
				};
			};
		};
	};
	class JA_104th_Base_MC_AB_Uniform : SWLB_clone_mc_uniform
	{
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Arms
				{
					hitpointName = "HitArms";
					armor = 40;
					explosionShielding  = 20;
					passThrough = 0.5;
				};
				class Hands
				{
					hitpointName = "HitHands";
					armor = 40;
					explosionShielding  = 20;
					passThrough = 0.5;
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 40;
					explosionShielding  = 20;
					passThrough = 0.5;
				};
				class chest
				{
					hitpointName = "HitChest";
					armor = 40;
					explosionShielding  = 20;
					passThrough = 0.5;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 40;
					explosionShielding  = 20;
					passThrough = 0.5;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 40;
					explosionShielding  = 20;
					passThrough = 0.5;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 40;
					explosionShielding  = 20;
					passThrough = 0.5;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 40;
					explosionShielding  = 20;
					passThrough = 0.5;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 40;
					explosionShielding  = 20;
					passThrough = 0.5;
				};
			};
		};
	};
	class JA_104th_Stache_Uniform : JA_104th_Base_AB_Uniform
	{
		author = "Fish";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Stache)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Airborne_Armours\data\Textures\104th_AB_Stache_Upper.paa",
				"Jangos_Airborne_Armours\data\Textures\104th_AB_Stache_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Stache";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Azure_Uniform : JA_104th_Base_AB_Uniform
	{
		author = "Fish";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Azure)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Airborne_Armours\data\Textures\104th_AB_Azure_Upper.paa",
				"Jangos_Airborne_Armours\data\Textures\104th_AB_Azure_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Azure";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Carmine_Uniform : JA_104th_Base_AB_Uniform
	{
		author = "Jango's Finest";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Carmine)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Airborne_Armours\data\Textures\104th_AB_Carmine_Upper.paa",
				"Jangos_Airborne_Armours\data\Textures\104th_AB_Carmine_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Carmine";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Clutch_Uniform : JA_104th_Base_AB_Uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Clutch)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Airborne_Armours\data\Textures\104th_AB_Clutch_Upper.paa",
				"Jangos_Airborne_Armours\data\Textures\104th_AB_Clutch_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Clutch";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Cyan_Uniform : JA_104th_Base_AB_Uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Cyan)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Airborne_Armours\data\Textures\104th_AB_Cyan_Upper.paa",
				"Jangos_Airborne_Armours\data\Textures\104th_AB_Cyan_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Cyan";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Dak_Uniform : JA_104th_Base_AB_Uniform
	{
		author = "Jango's Finest";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Dak)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Airborne_Armours\data\Textures\104th_AB_Dak_Upper.paa",
				"Jangos_Airborne_Armours\data\Textures\104th_AB_Dak_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Dak";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Ceasar_Uniform : JA_104th_Base_AB_Uniform
	{
		author = "Jango's Finest";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Ceasar)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Airborne_Armours\data\Textures\104th_AB_Ceasar_Upper.paa",
				"Jangos_Airborne_Armours\data\Textures\104th_AB_Ceasar_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Ceasar";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Osiris_Uniform : JA_104th_Base_AB_Uniform
	{
		author = "Jango's Finest";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Osiris)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Airborne_Armours\data\Textures\104th_AB_Osiris_Upper.paa",
				"Jangos_Airborne_Armours\data\Textures\104th_AB_Osiris_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Osiris";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Magnum_Uniform : JA_104th_Base_MC_AB_Uniform
	{
		author = "Jango's Finest";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Magnum)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2",
				"biceps",
				"rank"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Airborne_Armours\data\Textures\104th_AB_Magnum_Upper.paa",
				"Jangos_Airborne_Armours\data\Textures\104th_AB_Magnum_Lower.paa",
				"Jangos_Airborne_Armours\data\Textures\104th_AB_Magnum_Upper.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Magnum";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Bulky_Uniform : JA_104th_Base_AB_Uniform
	{
		author = "Fish";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Bulky)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Airborne_Armours\data\Textures\104th_P2_Bulky_Upper.paa",
				"Jangos_Airborne_Armours\data\Textures\104th_P2_Bulky_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Bulky";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Axel_Uniform : JA_104th_Base_AB_Uniform
	{
		author = "Fish";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Axel)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Airborne_Armours\data\Textures\104th_AB_Axel_Upper.paa",
				"Jangos_Airborne_Armours\data\Textures\104th_AB_Axel_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Axel";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Kage_Uniform : JA_104th_Base_AB_Uniform
	{
		author = "Jango's Finest";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Kage)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Airborne_Armours\data\Textures\104th_AB_Kage_Upper.paa",
				"Jangos_Airborne_Armours\data\Textures\104th_AB_Kage_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Kage";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Sixes_Uniform : JA_104th_Base_AB_Uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Sixes)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Airborne_Armours\data\Textures\104th_AB_Sixes_Upper.paa",
				"Jangos_Airborne_Armours\data\Textures\104th_AB_Sixes_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Sixes";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Soul_Uniform : JA_104th_Base_AB_Uniform
	{
		author = "Jango's Finest";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Soul)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Airborne_Armours\data\Textures\104th_AB_Soul_Upper.paa",
				"Jangos_Airborne_Armours\data\Textures\104th_AB_Soul_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Soul";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Red_Uniform : JA_104th_Base_AB_Uniform
	{
		author = "Ice";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Red)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Airborne_Armours\data\Textures\104th_AB_Red_Upper.paa",
				"Jangos_Airborne_Armours\data\Textures\104th_AB_Red_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Red";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Garm_Uniform : JA_104th_Base_AB_Uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Garm)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Airborne_Armours\data\Textures\104th_AB_Garm_Upper.paa",
				"Jangos_Airborne_Armours\data\Textures\104th_AB_Garm_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Garm";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Trustful_Uniform : JA_104th_Base_AB_Uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Trustful)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Airborne_Armours\data\Textures\104th_AB_Trustful_Upper.paa",
				"Jangos_Airborne_Armours\data\Textures\104th_AB_Trustful_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Trustful";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Raptor_Uniform : JA_104th_Base_AB_Uniform
	{
		author = "Ice";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Raptor)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Airborne_Armours\data\Textures\104th_AB_Raptor_Upper.paa",
				"Jangos_Airborne_Armours\data\Textures\104th_AB_Raptor_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Raptor";
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
	class JA_104th_Jumppack_JT12;
	class JA_104th_Jumppack_JT12_LR;
	// General Uniforms

	class JA_104th_Stache : SWLB_clone_base_P2
	{
		author = "Fish";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        side = 1;
		displayName = "104th Stache";
		uniformClass = "JA_104th_Stache_Uniform";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		hiddenSelectionsTextures[] =
		{
			"Jangos_Airborne_Armours\data\Textures\104th_AB_Stache_Upper.paa",
			"Jangos_Airborne_Armours\data\Textures\104th_AB_Stache_Lower.paa"
		};
		linkedItems[] = { JA_104th_Stache_Helmet ,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_Stache_Helmet ,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_104th_Azure : SWLB_clone_base_P2
	{
		author = "Fish";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        side = 1;
		displayName = "104th Azure";
		uniformClass = "JA_104th_Azure_Uniform";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		hiddenSelectionsTextures[] =
		{
			"Jangos_Airborne_Armours\data\Textures\104th_AB_Azure_Upper.paa",
			"Jangos_Airborne_Armours\data\Textures\104th_AB_Azure_Lower.paa"
		};
		linkedItems[] = { JA_104th_Azure_Helmet ,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_Azure_Helmet ,SWLB_clone_basic_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_104th_Magnum : SWLB_clone_marshal_commander_base_P2
	{
		author = "Fish";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_Magnum_Uniform";
		displayName = "104th Magnum";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		hiddenSelections[] = {"camo1", "camo2", "biceps", "rank"};
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Armours\data\Textures\104th_AB_Magnum_Upper.paa", "Jangos_Airborne_Armours\data\Textures\104th_AB_Magnum_Lower.paa", "Jangos_Airborne_Armours\data\Textures\104th_AB_Magnum_Upper.paa"};
		linkedItems[] = {JA_104th_Magnum_Helmet, JA_104th_Magnum_Vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		// all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Magnum_Helmet, JA_104th_Magnum_Vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Bulky : SWLB_clone_base_P2
	{
		author = "Fish";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_Bulky_Uniform";
		displayName = "104th Bulky";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Armours\data\Textures\104th_P2_Bulky_Upper.paa", "Jangos_Airborne_Armours\data\Textures\104th_P2_Bulky_Lower.paa"};
		linkedItems[] = {JA_104th_Bulky_Helmet, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		 // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Bulky_Helmet, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Cyan : SWLB_clone_base_P2
	{
		author = "Cyan";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_Cyan_Uniform";
		displayName = "104th Cyan";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Armours\data\Textures\104th_AB_Cyan_Upper.paa", "Jangos_Airborne_Armours\data\Textures\104th_AB_Cyan_Lower.paa"};
		linkedItems[] = {JA_104th_Bulky_Helmet, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		 // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Bulky_Helmet, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
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
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Armours\data\Textures\104th_AB_Dak_Upper.paa", "Jangos_Airborne_Armours\data\Textures\104th_AB_Dak_Lower.paa"};
		linkedItems[] = {JA_104th_Dak_Helmet, SWLB_CEE_Airborne_Officer, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		  // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Dak_Helmet, SWLB_CEE_Airborne_Officer, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Ceasar : SWLB_clone_base_P2
	{
		author = "Tundra";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_Ceasar_Uniform";
		displayName = "104th Ceasar";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Armours\data\Textures\104th_AB_Ceasar_Upper.paa", "Jangos_Airborne_Armours\data\Textures\104th_AB_Ceasar_Lower.paa"};
		linkedItems[] = {JA_104th_Ceasar_Helmet, SWLB_CEE_Airborne_Officer, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		  // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Ceasar_Helmet, SWLB_CEE_Airborne_Officer, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Axel : SWLB_clone_base_P2
	{
		author = "Fish";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_Axel_Uniform";
		displayName = "104th Axel";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Armours\data\Textures\104th_AB_Axel_Upper.paa", "Jangos_Airborne_Armours\data\Textures\104th_AB_Axel_Lower.paa"};
		linkedItems[] = {JA_104th_Axel_Helmet, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		// all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Axel_Helmet, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Osiris : SWLB_clone_base_P2
	{
		author = "Tundra";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_Osiris_Uniform";
		displayName = "104th Osiris";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Armours\data\Textures\104th_AB_Osiris_Upper.paa", "Jangos_Airborne_Armours\data\Textures\104th_AB_Osiris_Lower.paa"};
		linkedItems[] = {JA_104th_Osiris_Helmet, JA_104th_Osiris_Vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		// all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Osiris_Helmet, JA_104th_Osiris_Vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
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
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Armours\data\Textures\104th_AB_Carmine_Upper.paa", "Jangos_Airborne_Armours\data\Textures\104th_AB_Carmine_Lower.paa"};
		linkedItems[] = {JA_104th_Carmine_Helmet, JA_104th_Carmine_Vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		  // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Carmine_Helmet, JA_104th_Carmine_Vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Clutch : SWLB_clone_base_P2
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_Clutch_Uniform";
		displayName = "104th Clutch";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Armours\data\Textures\104th_AB_Clutch_Upper.paa", "Jangos_Airborne_Armours\data\Textures\104th_AB_Clutch_Lower.paa"};
		linkedItems[] = {JA_104th_Clutch_Helmet, SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		  // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Clutch_Helmet, SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Kage : SWLB_clone_base_P2
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_Kage_Uniform";
		displayName = "104th Kage";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Armours\data\Textures\104th_AB_Kage_Upper.paa", "Jangos_Airborne_Armours\data\Textures\104th_AB_Kage_Lower.paa"};
		linkedItems[] = {JA_104th_Kage_Helmet, SWLB_clone_airborne_nco_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		   // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Kage_Helmet, SWLB_clone_airborne_nco_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Sixes : SWLB_clone_base_P2
	{
		author = "Fish";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_Sixes_Uniform";
		displayName = "104th Sixes";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Armours\data\Textures\104th_AB_Sixes_Upper.paa", "Jangos_Airborne_Armours\data\Textures\104th_AB_Sixes_Lower.paa"};
		linkedItems[] = {JA_104th_Bulky_Helmet, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		 // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Bulky_Helmet, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Soul : SWLB_clone_base_P2
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_Soul_Uniform";
		displayName = "104th Soul";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Armours\data\Textures\104th_AB_Soul_Upper.paa", "Jangos_Airborne_Armours\data\Textures\104th_AB_Soul_Lower.paa"};
		linkedItems[] = {JA_104th_Soul_Helmet, SWLB_clone_airborne_nco_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		   // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Soul_Helmet, SWLB_clone_airborne_nco_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
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
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Armours\data\Textures\104th_AB_Red_Upper.paa", "Jangos_Airborne_Armours\data\Textures\104th_AB_Red_Lower.paa"};
		linkedItems[] = {JA_104th_Red_Helmet, SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		   // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Red_Helmet, SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
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
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Armours\data\Textures\104th_AB_Garm_Upper.paa", "Jangos_Airborne_Armours\data\Textures\104th_AB_Garm_Lower.paa"};
		linkedItems[] = {JA_104th_Garm_Helmet, SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		// all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Garm_Helmet, SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
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
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Armours\data\Textures\104th_AB_Trustful_Upper.paa", "Jangos_Airborne_Armours\data\Textures\104th_AB_Trustful_Lower.paa"};
		linkedItems[] = {JA_104th_Garm_Helmet, SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		// all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Garm_Helmet, SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
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
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Armours\data\Textures\104th_AB_Raptor_Upper.paa", "Jangos_Airborne_Armours\data\Textures\104th_AB_Raptor_Lower.paa"};
		linkedItems[] = {JA_104th_Raptor_Helmet, SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		  // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Raptor_Helmet, SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
};
