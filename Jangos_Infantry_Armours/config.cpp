#include "basicDefines_A3.hpp"
class DefaultEventhandlers;
class UniformSlotInfo;
class CfgPatches
{
	class Jangos_Armory_Infantry_Armours
	{
		author = "Jango's Finest";
		requiredVersion = 0.1;
		requiredAddons[] = {};
		units[] = {
			"JA_104th_Banker",
			"JA_104th_Bomb",
			"JA_104th_Crash",
			"JA_104th_Paraso",
			"JA_104th_Tiger",
			"JA_104th_Doc",
			"JA_104th_Death",
			"JA_104th_Ed",
			"JA_104th_Galahad",
			"JA_104th_Mad",
			"JA_104th_Pacify",
			"JA_104th_Garm",
			"JA_104th_Tinkle",
			"JA_104th_Skav",
			"JA_104th_Kyo",
			"JA_104th_Talisman",
			"JA_104th_Tusk",
			"JA_104th_Spirit",
			"JA_104th_Scurvy",
			"JA_104th_Knightfall",
			"JA_104th_Irish",
			"JA_104th_Knockout",
			"JA_104th_Welty"
		};
		weapons[] = {
			"JA_104th_Banker_Uniform",
			"JA_104th_Bomb_Uniform",
			"JA_104th_Galahad_Uniform",
			"JA_104th_Welty_Uniform",
			"JA_104th_Tiger_Uniform",
			"JA_104th_Doc_Uniform",
			"JA_104th_Ed_Uniform",
			"JA_104th_Tinkle_Uniform",
			"JA_104th_Knightfall_Uniform",
			"JA_104th_Knockout_Uniform",
			"JA_104th_Skav_Uniform",
			"JA_104th_Talisman_Uniform",
			"JA_104th_Tusk_Uniform",
			"JA_104th_Kyo_Uniform",
			"JA_104th_Crash_Uniform",
			"JA_104th_Paraso_Uniform",
			"JA_104th_Spirit_Uniform",
			"JA_104th_Scurvy_Uniform",
			"JA_104th_Irish_Uniform",
			"JA_104th_Death_Uniform"
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

	class JA_104th_Crash_Uniform : SWLB_clone_mc_uniform
	{
		author = "Ice";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Crash)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2",
				"biceps",
				"rank"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Infantry_Armours\data\Textures\104th_JTAC_Crash_Upper.paa",
				"Jangos_Infantry_Armours\data\Textures\104th_JTAC_Crash_Lower.paa",
				"Jangos_Infantry_Armours\data\Textures\104th_JTAC_Crash_Upper.paa",
				""};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Crash";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Banker_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Banker)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Infantry_Armours\data\Textures\104th_P2_Banker_Upper.paa",
				"Jangos_Infantry_Armours\data\Textures\104th_P2_Banker_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Banker";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Bomb_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Bomb)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Infantry_Armours\data\Textures\104th_P2_Bomb_Upper.paa",
				"Jangos_Infantry_Armours\data\Textures\104th_P2_Bomb_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Bomb";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Blood_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Blood)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Infantry_Armours\data\Textures\104th_P2_Blood_Upper.paa",
				"Jangos_Infantry_Armours\data\Textures\104th_P2_Blood_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Blood";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Dak_Uniform : SWLB_clone_uniform
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
				"Jangos_Infantry_Armours\data\Textures\104th_AB_Dak_Upper.paa",
				"Jangos_Infantry_Armours\data\Textures\104th_AB_Dak_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Dak";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Dak_Uniform_Test1 : SWLB_clone_uniform
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
				"Jangos_Infantry_Armours\data\Textures\104th_AB_Dak_Upper.paa",
				"Jangos_Infantry_Armours\data\Textures\104th_AB_Dak_Lower.paa"};
		armor = 2;
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Dak";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 2;
					PassThrough = 0.3;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 2;
					passThrough = 0.3;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 2;
					passThrough = 0.3;
				};
			};
		};
	};
	class JA_104th_Dak_Uniform_Test2 : SWLB_clone_uniform
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
				"Jangos_Infantry_Armours\data\Textures\104th_AB_Dak_Upper.paa",
				"Jangos_Infantry_Armours\data\Textures\104th_AB_Dak_Lower.paa"};
		armor = 5;
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Dak";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 5;
					PassThrough = 0.3;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 5;
					passThrough = 0.3;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 5;
					passThrough = 0.3;
				};
			};
		};
	};
	class JA_104th_Dak_Uniform_Test3 : SWLB_clone_uniform
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
				"Jangos_Infantry_Armours\data\Textures\104th_AB_Dak_Upper.paa",
				"Jangos_Infantry_Armours\data\Textures\104th_AB_Dak_Lower.paa"};
		armor = 10;
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Dak";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 10;
					PassThrough = 0.3;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 10;
					passThrough = 0.3;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 10;
					passThrough = 0.3;
				};
			};
		};
	};
	class JA_104th_Dak_Uniform_Test4 : SWLB_clone_uniform
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
				"Jangos_Infantry_Armours\data\Textures\104th_AB_Dak_Upper.paa",
				"Jangos_Infantry_Armours\data\Textures\104th_AB_Dak_Lower.paa"};
		armor = 20;
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Dak";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.3;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 20;
					passThrough = 0.3;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 20;
					passThrough = 0.3;
				};
			};
		};
	};
	class JA_104th_Dart_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Dart)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Infantry_Armours\data\Textures\104th_P2_Dart_Upper.paa",
				"Jangos_Infantry_Armours\data\Textures\104th_P2_Dart_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Dart";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Doc_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Doc)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Infantry_Armours\data\Textures\104th_P2_Doc_Upper.paa",
				"Jangos_Infantry_Armours\data\Textures\104th_P2_Doc_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Doc";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Death_Uniform : SWLB_clone_uniform
	{
		author = "Fish";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Death)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Infantry_Armours\data\Textures\104th_P2_Death_Upper.paa",
				"Jangos_Infantry_Armours\data\Textures\104th_P2_Death_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Death";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Ed_Uniform : SWLB_clone_uniform
	{
		author = "Jango's Finest";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper armor (104th Ed)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Jangos_Infantry_Armours\data\Textures\104th_P2_Ed_Upper.paa",
			"Jangos_Infantry_Armours\data\Textures\104th_P2_Ed_Lower.paa"
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
	class JA_104th_Galahad_Uniform : SWLB_clone_uniform
	{
		author = "Jango's Finest";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper armor (104th Galahad)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Jangos_Infantry_Armours\data\Textures\104th_P2_Galahad_Upper.paa",
			"Jangos_Infantry_Armours\data\Textures\104th_P2_Galahad_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Galahad";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Irish_Uniform : SWLB_clone_uniform
	{
		author = "Jango's Finest";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper armor (104th Irish)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Jangos_Infantry_Armours\data\Textures\104th_P2_Irish_Upper.paa",
			"Jangos_Infantry_Armours\data\Textures\104th_P2_Irish_Lower.paa"
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
	class JA_104th_Knightfall_Uniform : SWLB_clone_uniform // UPD
	{
		author = "Jango's Finest";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper armor (104th Knightfall)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Jangos_Infantry_Armours\data\Textures\104th_P2_Knightfall_Upper.paa",
			"Jangos_Infantry_Armours\data\Textures\104th_P2_Knightfall_Lower.paa"
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
	class JA_104th_Knockout_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Knockout)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Infantry_Armours\data\Textures\104th_P2_Knockout_Upper.paa",
				"Jangos_Infantry_Armours\data\Textures\104th_P2_Knockout_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Knockout";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Kyo_Uniform : SWLB_clone_uniform
	{
		author = "Fish";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Kyo)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Infantry_Armours\data\Textures\104th_P2_Kyo_Upper.paa",
				"Jangos_Infantry_Armours\data\Textures\104th_P2_Kyo_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Kyo";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Paraso_Uniform : SWLB_clone_uniform
	{
		author = "Jango's Finest";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Paraso)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Infantry_Armours\data\Textures\104th_P2_Paraso_Upper.paa",
				"Jangos_Infantry_Armours\data\Textures\104th_P2_Paraso_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Paraso";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Pacify_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Pacify)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Infantry_Armours\data\Textures\104th_P2_Pacify_Upper.paa",
				"Jangos_Infantry_Armours\data\Textures\104th_P2_Pacify_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Pacify";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Mad_Uniform : SWLB_clone_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Mad)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Infantry_Armours\data\Textures\104th_P2_Mad_Upper.paa",
				"Jangos_Infantry_Armours\data\Textures\104th_P2_Mad_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Mad";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Skav_Uniform : SWLB_clone_uniform
	{
		author = "Fish";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Skav)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Infantry_Armours\data\Textures\104th_P2_Skav_Upper.paa",
				"Jangos_Infantry_Armours\data\Textures\104th_P2_Skav_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Skav";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Scurvy_Uniform : SWLB_clone_uniform
	{
		author = "Jango's Finest";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper armor (104th Scurvy)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Jangos_Infantry_Armours\data\Textures\104th_P2_Scurvy_Upper.paa",
			"Jangos_Infantry_Armours\data\Textures\104th_P2_Scurvy_Lower.paa"
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
	class JA_104th_Spirit_Uniform : SWLB_clone_uniform
	{
		author = "Jango's Finest";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper armor (104th Spirit)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Jangos_Infantry_Armours\data\Textures\104th_P2_Spirit_Upper.paa",
			"Jangos_Infantry_Armours\data\Textures\104th_P2_Spirit_Lower.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Spirit";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Talisman_Uniform : SWLB_clone_uniform
	{
		author = "Fish";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Talisman)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Infantry_Armours\data\Textures\104th_P2_Talisman_Upper.paa",
				"Jangos_Infantry_Armours\data\Textures\104th_P2_Talisman_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Talisman";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Tiger_Uniform : SWLB_clone_uniform
	{
		author = "Ice";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Tiger)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Infantry_Armours\data\Textures\104th_P2_Tiger_Upper.paa",
				"Jangos_Infantry_Armours\data\Textures\104th_P2_Tiger_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Tiger";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Tinkle_Uniform : SWLB_clone_uniform
	{
		author = "Fish";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Tinkle)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Infantry_Armours\data\Textures\104th_P2_Tinkle_Upper.paa",
				"Jangos_Infantry_Armours\data\Textures\104th_P2_Tinkle_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Tinkle";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Tusk_Uniform : SWLB_clone_uniform // UPD
	{
		author = "Jango's Finest";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Clone Trooper armor (104th Tusk)";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Jangos_Infantry_Armours\data\Textures\104th_P2_Tusk_Upper.paa",
			"Jangos_Infantry_Armours\data\Textures\104th_P2_Tusk_Lower.paa"
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
	class JA_104th_Welty_Uniform : SWLB_clone_uniform
	{
		author = "Ice";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Welty)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Infantry_Armours\data\Textures\104th_P2_Welty_Upper.paa",
				"Jangos_Infantry_Armours\data\Textures\104th_P2_Welty_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Welty";
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

	// Cerberus PLT, Infantry, Engineer, Medic Uniforms

	class JA_104th_Banker : SWLB_clone_base_P2
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_Banker_Uniform";
		displayName = "104th Banker";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Armours\data\Textures\104th_P2_Banker_Upper.paa", "Jangos_Infantry_Armours\data\Textures\104th_P2_Banker_Lower.paa"};
		linkedItems[] = {JA_104th_Banker_Helmet, SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		 // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Banker_Helmet, SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Bomb : SWLB_clone_base_P2
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_Bomb_Uniform";
		displayName = "104th Bomb";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Armours\data\Textures\104th_P2_Bomb_Upper.paa", "Jangos_Infantry_Armours\data\Textures\104th_P2_Bomb_Lower.paa"};
		linkedItems[] = {JA_104th_Blood_Helmet, SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		 // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Blood_Helmet, SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Blood : SWLB_clone_base_P2
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_Blood_Uniform";
		displayName = "104th Blood";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Armours\data\Textures\104th_P2_Blood_Upper.paa", "Jangos_Infantry_Armours\data\Textures\104th_P2_Blood_Lower.paa"};
		linkedItems[] = {JA_104th_Blood_Helmet, SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		 // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Blood_Helmet, SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Dart : SWLB_clone_base_P2
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_Dart_Uniform";
		displayName = "104th Dart";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Armours\data\Textures\104th_P2_Dart_Upper.paa", "Jangos_Infantry_Armours\data\Textures\104th_P2_Dart_Lower.paa"};
		linkedItems[] = {JA_104th_Dart_Helmet, SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		// all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Dart_Helmet, SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
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
		hiddenSelections[] = {"camo1", "camo2", "biceps", "rank"};
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Armours\data\Textures\104th_JTAC_Crash_Upper.paa", "Jangos_Infantry_Armours\data\Textures\104th_JTAC_Crash_Lower.paa", "Jangos_Infantry_Armours\data\Textures\104th_Crash_Base_Upper.paa", ""};
		linkedItems[] = {JA_104th_Crash_Helmet, SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		 // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Crash_Helmet, SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
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
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Armours\data\Textures\104th_P2_Paraso_Upper.paa", "Jangos_Infantry_Armours\data\Textures\104th_P2_Paraso_Lower.paa"};
		linkedItems[] = {JA_104th_Paraso_Helmet, SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		  // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Paraso_Helmet, SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Tiger : SWLB_clone_base_P2
	{
		author = "Ice";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_Tiger_Uniform_ME";
		displayName = "104th Tiger";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Armours\data\Textures\104th_P2_Tiger_Upper.paa", "Jangos_Infantry_Armours\data\Textures\104th_P2_Tiger_Lower.paa"};
		linkedItems[] = {JA_104th_Tiger_Helmet, SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		 // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Tiger_Helmet, SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Death : SWLB_clone_base_P2
	{
		author = "Fish";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_Death_Uniform";
		displayName = "104th Death";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Armours\data\Textures\104th_P2_Death_Upper.paa", "Jangos_Infantry_Armours\data\Textures\104th_P2_Death_Lower.paa"};
		linkedItems[] = {JA_104th_Death_Helmet, SWLB_clone_basic_armor, JA_104th_Death_NVG_Tanker, JA_104th_Death_Kama, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		 // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Death_Helmet, SWLB_clone_basic_armor, JA_104th_Death_NVG_Tanker, JA_104th_Death_Kama, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Ed : SWLB_clone_base_P2
	{
		author = "Tundra";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_104th_Ed_Uniform";
		displayName = "104th Ed";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Armours\data\Textures\104th_P2_Ed_Upper.paa", "Jangos_Infantry_Armours\data\Textures\104th_P2_Ed_Lower.paa"};
		linkedItems[] = { JA_104th_Ed_Helmet,SWLB_clone_officer_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_Ed_Helmet,SWLB_clone_officer_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_104th_Galahad : SWLB_clone_base_P2
	{
		author = "Tundra";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_104th_Galahad_Uniform";
		displayName = "104th Ed";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Armours\data\Textures\104th_P2_Galahad_Upper.paa", "Jangos_Infantry_Armours\data\Textures\104th_P2_Galahad_Lower.paa"};
		linkedItems[] = { JA_104th_Galahad_Helmet,SWLB_clone_officer_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_Galahad_Helmet,SWLB_clone_officer_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_104th_Irish: SWLB_clone_base_P2
	{
		author = "Tundra";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_104th_Irish_Uniform";
		displayName = "104th Irish";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Armours\data\Textures\104th_P2_Irish_Upper.paa", "Jangos_Infantry_Armours\data\Textures\104th_P2_Irish_Lower.paa"};
		linkedItems[] = { JA_104th_Irish_Helmet,SWLB_clone_officer_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_Irish_Helmet,SWLB_clone_officer_armor,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
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
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Armours\data\Textures\104th_P2_Welty_Upper.paa", "Jangos_Infantry_Armours\data\Textures\104th_P2_Welty_Lower.paa"};
		linkedItems[] = {JA_104th_Welty_Helmet, SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		 // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Welty_Helmet, SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Doc : SWLB_clone_base_P2
	{
		author = "Ice";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_Doc_Uniform";
		displayName = "104th Doc";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Armours\data\Textures\104th_P2_Doc_Upper.paa", "Jangos_Infantry_Armours\data\Textures\104th_P2_Doc_Lower.paa"};
		linkedItems[] = {JA_104th_Doc_Helmet, SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		   // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Doc_Helmet, SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Tinkle : SWLB_clone_base_P2
	{
		author = "Fish";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_Tinkle_Uniform";
		displayName = "104th Tinkle";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Armours\data\Textures\104th_P2_Tinkle_Upper.paa", "Jangos_Infantry_Armours\data\Textures\104th_P2_Tinkle_Lower.paa"};
		linkedItems[] = {JA_104th_Tinkle_Helmet, SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		  // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Tinkle_Helmet, SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Knightfall : SWLB_clone_base_P2
	{
		author = "Tundra";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_104th_Knightfall_Uniform";
		displayName = "104th Knightfall";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = { "Jangos_Infantry_Armours\data\Textures\104th_P2_Knightfall_Upper.paa", "Jangos_Infantry_Armours\data\Textures\104th_P2_Knightfall_Lower.paa" };
		linkedItems[] = { JA_104th_Tanner_Helmet,JA_104thKnightfallVest,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Tanner_Helmet,JA_104thKnightfallVest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_104th_Knockout : SWLB_clone_base_P2
	{
		author = "Ice";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_Knockout_Uniform";
		displayName = "104th Knockout";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Armours\data\Textures\104th_P2_Knockout_Upper.paa", "Jangos_Infantry_Armours\data\Textures\104th_P2_Knockout_Lower.paa"};
		linkedItems[] = {JA_104th_Knockout_Helmet, SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		// all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Knockout_Helmet, SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Talisman : SWLB_clone_base_P2
	{
		author = "Fish";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_Talisman_Uniform";
		displayName = "104th Talisman";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Armours\data\Textures\104th_P2_Talisman_Upper.paa", "Jangos_Infantry_Armours\data\Textures\104th_P2_Talisman_Lower.paa"};
		linkedItems[] = {JA_104th_Talisman_Helmet, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		// all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Talisman_Helmet, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Tusk : SWLB_clone_base_P2
	{
		author = "Tundra";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		uniformClass = "JA_104th_Tusk_Uniform";
		displayName = "104th Tusk";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = { "Jangos_Infantry_Armours\data\Textures\104th_P2_Tusk_Upper.paa", "Jangos_Infantry_Armours\data\Textures\104th_P2_Tusk_Lower.paa" };
		linkedItems[] = {JA_104th_Tusk_Helmet, JA_104thTuskVest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Tusk_Helmet, JA_104thTuskVest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_104th_Kyo : SWLB_clone_base_P2
	{
		author = "Fish";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_Kyo_Uniform";
		displayName = "104th Kyo";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Armours\data\Textures\104th_P2_Kyo_Upper.paa", "Jangos_Infantry_Armours\data\Textures\104th_P2_Kyo_Lower.paa"};
		linkedItems[] = {JA_104th_Kyo_Helmet, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		   // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Kyo_Helmet, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Skav : SWLB_clone_base_P2
	{
		author = "Fish";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_Skav_Uniform";
		displayName = "104th Skav";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Armours\data\Textures\104th_P2_Skav_Upper.paa", "Jangos_Infantry_Armours\data\Textures\104th_P2_Skav_Lower.paa"};
		linkedItems[] = {JA_104th_Skav_Helmet, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		// all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Skav_Helmet, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Scurvy : SWLB_clone_base_P2
	{
		author = "Tundra";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		displayName = "104th Scurvy";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		uniformClass = "JA_104th_Scurvy_Uniform";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = { "Jangos_Infantry_Armours\data\Textures\104th_P2_Scurvy_Upper.paa", "Jangos_Infantry_Armours\data\Textures\104th_P2_Scurvy_Lower.paa" };
		linkedItems[] = { JA_104th_Scurvy_Uniform,JA_104thScurvyVest ,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_Scurvy_Uniform,JA_104thScurvyVest,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
	};
	class JA_104th_Spirit : SWLB_clone_base_P2
	{
		author = "Cyan";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		displayName = "104th Spirit";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		uniformClass = "JA_104th_Spirit_Uniform";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = { "Jangos_Infantry_Armours\data\Textures\104th_P2_Spirit_Upper.paa", "Jangos_Infantry_Armours\data\Textures\104th_P2_Spirit_Lower.paa" };
		linkedItems[] = { JA_104th_Spirit_Uniform,JA_104thScurvyVest ,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit
		respawnLinkedItems[] = { JA_104th_Spirit_Uniform,JA_104thScurvyVest,ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio }; // all items that will be on unit on respawn
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
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Armours\data\Textures\104th_P2_Mad_Upper.paa", "Jangos_Infantry_Armours\data\Textures\104th_P2_Mad_Lower.paa"};
		linkedItems[] = {JA_104th_Mad_Helmet, SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		   // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Mad_Helmet, SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
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
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Armours\data\Textures\104th_P2_Pacify_Upper.paa", "Jangos_Infantry_Armours\data\Textures\104th_P2_Pacify_Lower.paa"};
		linkedItems[] = {JA_104th_Pacify_Helmet, SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		  // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Pacify_Helmet, SWLB_clone_basic_armor, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
		};
	};
};