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
			"JA_104th_Doc_AB",
			"JA_104th_Sixes",
			"JA_104th_Soul",
			"JA_104th_Trustful",
			"JA_104th_Raptor"};
		weapons[] = {
			"JA_104th_Azure_Uniform",
			"JA_104th_Stache_Uniform",
			"JA_104th_Carmine_Uniform",
			"JA_104th_Clutch_Uniform",
			"JA_104th_Osiris_Uniform",
			"JA_104th_Dak_Uniform",
			"JA_104th_Magnum_Uniform",
			"JA_104th_Bulky_Uniform",
			"JA_104th_Doc_AB_Uniform",
			"JA_104th_Cyan_Uniform",
			"JA_104th_Axel_Uniform",
			"JA_104th_Kage_Uniform",
			"JA_104th_Red_Uniform",
			"JA_104th_Garm_Uniform",
			"JA_104th_Sixes_Uniform",
			"JA_104th_Soul_Uniform",
			"JA_104th_Trustful_Uniform",
			"JA_104th_Raptor_Uniform"};
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
	class ls_gar_phase2Pilot_helmet;
	class ls_gar_phase2_uniform;
	class ls_gar_marshalCommander_uniform;
	class ls_gar_arc_vest;
	class ls_gar_officer_vest;
	class ls_gar_commander_vest;
	class ls_gar_airborne_vest;
	class ls_gar_airborneOfficer_vest;
	class ls_gar_forceReconNCO_vest;
	class ls_gar_barc_helmet;
	class ls_gar_airborne_helmet;
	class ls_gar_phase1Arf_helmet;
	class ls_gar_arc_helmet;
	class ls_gar_phase1_helmet;
	class ls_gar_rex_helmet;
	class ls_gar_phase2_helmet;
	class lsd_gar_standart_nvg;
	class lsd_gar_rangefinder_nvg;
	class lsd_gar_p2MarshalCommander_nvg;
	class ls_gar_kama_vest;
	class ls_gar_medic_vest;
	class ls_gar_clone_vest;
	class ls_gar_airborneNCO_vest;
	class ls_gar_engineer_helmet;
	class ls_sob_phase2SpecOp_helmet;
	class JA_104th_P2_1C_JTAC_Uniform;
	class UniformItem;
	class VestItem;

	class JA_104th_Base_AB_Uniform : ls_gar_marshalCommander_uniform
	{
		model = "\ls\core\addons\characters_clone_legacy\uniforms\phase2\ls_gar_phase2_uniform.p3d";
		class ItemInfo : UniformItem
		{
			class HitpointsProtectionInfo
			{
				class Arms
				{
					hitpointName = "HitArms";
					armor = 40;
					explosionShielding = 20;
					passThrough = 0.5;
				};
				class Hands
				{
					hitpointName = "HitHands";
					armor = 40;
					explosionShielding = 20;
					passThrough = 0.5;
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 40;
					explosionShielding = 20;
					passThrough = 0.5;
				};

				class chest
				{
					hitpointName = "HitChest";
					armor = 40;
					explosionShielding = 20;
					passThrough = 0.5;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 40;
					explosionShielding = 20;
					passThrough = 0.5;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 40;
					explosionShielding = 20;
					passThrough = 0.5;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 40;
					explosionShielding = 20;
					passThrough = 0.5;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 40;
					explosionShielding = 20;
					passThrough = 0.5;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 40;
					explosionShielding = 20;
					passThrough = 0.5;
				};
			};
		};
	};
	class JA_104th_Base_MC_AB_Uniform : ls_gar_marshalCommander_uniform
	{
		class ItemInfo : ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Arms
				{
					hitpointName = "HitArms";
					armor = 40;
					explosionShielding = 20;
					passThrough = 0.5;
				};
				class Hands
				{
					hitpointName = "HitHands";
					armor = 40;
					explosionShielding = 20;
					passThrough = 0.5;
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 40;
					explosionShielding = 20;
					passThrough = 0.5;
				};
				class chest
				{
					hitpointName = "HitChest";
					armor = 40;
					explosionShielding = 20;
					passThrough = 0.5;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 40;
					explosionShielding = 20;
					passThrough = 0.5;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 40;
					explosionShielding = 20;
					passThrough = 0.5;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 40;
					explosionShielding = 20;
					passThrough = 0.5;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 40;
					explosionShielding = 20;
					passThrough = 0.5;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 40;
					explosionShielding = 20;
					passThrough = 0.5;
				};
			};
		};
	};
	class JA_104th_Habit_Uniform : JA_104th_Base_AB_Uniform
	{
		author = "Fish";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Habit)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Airborne_Armours\data\Textures\104th_AB_Habit_Upper.paa",
				"Jangos_Airborne_Armours\data\Textures\104th_AB_Habit_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			scope = 2;
			uniformClass = "JA_104th_Habit";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Scrub_Uniform : JA_104th_Base_AB_Uniform
	{
		author = "Fish";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Scrub)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Airborne_Armours\data\Textures\104th_AB_Scrub_Upper.paa",
				"Jangos_Airborne_Armours\data\Textures\104th_AB_Scrub_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			scope = 2;
			uniformClass = "JA_104th_Scrub";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
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
			scope = 2;
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
			scope = 2;
			uniformClass = "JA_104th_Azure";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Ratchet_Uniform : JA_104th_Base_AB_Uniform
	{
		author = "Fish";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Ratchet)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Airborne_Armours\data\Textures\104th_AB_Ratchet_Armor_Upper.paa",
				"Jangos_Airborne_Armours\data\Textures\104th_AB_Ratchet_Armor_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			scope = 2;
			uniformClass = "JA_104th_Ratchet";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Carmine_Uniform : JA_104th_P2_1C_JTAC_Uniform
	{
		author = "Jango's Finest";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Carmine)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2",
				"biceps",
				"rank"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Airborne_Armours\data\Textures\104th_P2_Carmine_Upper.paa",
				"Jangos_Airborne_Armours\data\Textures\104th_P2_Carmine_Lower.paa",
				"Jangos_Airborne_Armours\data\Textures\104th_P2_Carmine_Upper.paa",
				"",
			};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			scope = 2;
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
			scope = 2;
			uniformClass = "JA_104th_Clutch";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Doc_AB_Uniform : JA_104th_Base_AB_Uniform
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
				"Jangos_Airborne_Armours\data\Textures\104th_AB_Doc_Upper.paa",
				"Jangos_Airborne_Armours\data\Textures\104th_AB_Doc_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			scope = 2;
			uniformClass = "JA_104th_Doc_AB";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Cyan_Uniform_old : JA_104th_Base_AB_Uniform
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
			scope = 2;
			uniformClass = "JA_104th_Cyan_old";
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
			scope = 2;
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
			scope = 2;
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
			scope = 2;
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
			scope = 2;
			uniformClass = "JA_104th_Magnum";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Kaleck_Uniform : JA_104th_Base_MC_AB_Uniform
	{
		author = "Jango's Finest";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Kaleck)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2",
				"biceps",
				"rank"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Airborne_Armours\data\Textures\104th_AB_Kaleck_Armor_Upper.paa",
				"Jangos_Airborne_Armours\data\Textures\104th_AB_Kaleck_Armor_Lower.paa",
				"Jangos_Airborne_Armours\data\Textures\104th_AB_Kaleck_Armor_Upper.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			scope = 2;
			uniformClass = "JA_104th_Kaleck";
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
			scope = 2;
			uniformClass = "JA_104th_Bulky";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Axel_Uniform_old : JA_104th_Base_AB_Uniform
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
			scope = 2;
			uniformClass = "JA_104th_Axel_old";
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
			scope = 2;
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
			scope = 2;
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
			scope = 2;
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
			scope = 2;
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
			scope = 2;
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
			scope = 2;
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
			scope = 2;
			uniformClass = "JA_104th_Raptor";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
};

class CfgVehicles
{
	class lsd_gar_phase2_base;
	class ls_gar_marshalCommander_base;
	class ls_gar_standard_backpack;
	class ls_gar_rto_mini_backpack;
	class ls_gar_heavy_backpack;
	class ls_gar_medic_backpack;
	class ls_gar_Radio_backpack;
	class JLTS_Clone_jumppack;
	class JA_104th_Jumppack_JT12;
	class JA_104th_Jumppack_JT12_LR;
	// General Uniforms

	class JA_104th_Base_AB : lsd_gar_phase2_base
	{
		author = "Ice";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_Base_AB_Uniform";
		displayName = "104th ARC";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		hiddenSelections[] = {"camo1", "camo2"};
		linkedItems[] = {JA_104th_Angel_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		// all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Angel_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Habit : lsd_gar_phase2_base
	{
		author = "Fish";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 1;
		displayName = "104th Habit";
		uniformClass = "JA_104th_Habit_Uniform";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Airborne_Armours\data\Textures\104th_AB_Habit_Upper.paa",
				"Jangos_Airborne_Armours\data\Textures\104th_AB_Habit_Lower.paa"};
		linkedItems[] = {JA_104th_Habit_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		 // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Habit_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Scrub : lsd_gar_phase2_base
	{
		author = "Fish";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 1;
		displayName = "104th Scrub";
		uniformClass = "JA_104th_Scrub_Uniform";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Airborne_Armours\data\Textures\104th_AB_Scrub_Upper.paa",
				"Jangos_Airborne_Armours\data\Textures\104th_AB_Scrub_Lower.paa"};
		linkedItems[] = {JA_104th_Scrub_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		 // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Scrub_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Stache : lsd_gar_phase2_base
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
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Airborne_Armours\data\Textures\104th_AB_Stache_Upper.paa",
				"Jangos_Airborne_Armours\data\Textures\104th_AB_Stache_Lower.paa"};
		linkedItems[] = {JA_104th_Stache_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		 // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Stache_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Azure : lsd_gar_phase2_base
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
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Airborne_Armours\data\Textures\104th_AB_Azure_Upper.paa",
				"Jangos_Airborne_Armours\data\Textures\104th_AB_Azure_Lower.paa"};
		linkedItems[] = {JA_104th_Azure_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		// all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Azure_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Ratchet : lsd_gar_phase2_base
	{
		author = "Fish";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 1;
		displayName = "104th Ratchet";
		uniformClass = "JA_104th_Ratchet_Uniform";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Airborne_Armours\data\Textures\104th_AB_Ratchet_Armor_Upper.paa",
				"Jangos_Airborne_Armours\data\Textures\104th_AB_Ratchet_Armor_Lower.paa"};
		linkedItems[] = {JA_104th_Ratchet_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		  // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Ratchet_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Magnum : ls_gar_marshalCommander_base
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
	class JA_104th_Kaleck : ls_gar_marshalCommander_base
	{
		author = "Fish";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_Kaleck_Uniform";
		displayName = "104th Kaleck";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		hiddenSelections[] = {"camo1", "camo2", "biceps", "rank"};
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Armours\data\Textures\104th_AB_Kaleck_Armor_Upper.paa", "Jangos_Airborne_Armours\data\Textures\104th_AB_Kaleck_Armor_Lower.paa", "Jangos_Airborne_Armours\data\Textures\104th_AB_Kaleck_Armor_Upper.paa"};
		linkedItems[] = {JA_104th_Kaleck_Helmet, JA_104th_Kaleck_Vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		// all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Kaleck_Helmet, JA_104th_Kaleck_Vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Bulky : lsd_gar_phase2_base
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
	class JA_104th_Cyan_old : lsd_gar_phase2_base
	{
		author = "Cyan";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_Cyan_Uniform_old";
		displayName = "104th Cyan";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Armours\data\Textures\104th_AB_Cyan_Upper.paa", "Jangos_Airborne_Armours\data\Textures\104th_AB_Cyan_Lower.paa"};
		linkedItems[] = {JA_104th_Bulky_Helmet, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		 // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Bulky_Helmet, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Dak : lsd_gar_phase2_base
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
		linkedItems[] = {JA_104th_Dak_Helmet, ls_gar_airborneOfficer_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		// all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Dak_Helmet, ls_gar_airborneOfficer_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Ceasar : lsd_gar_phase2_base
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
		linkedItems[] = {JA_104th_Ceasar_Helmet, ls_gar_airborneOfficer_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		   // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Ceasar_Helmet, ls_gar_airborneOfficer_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Axel_old : lsd_gar_phase2_base
	{
		author = "Fish";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_Axel_Uniform_old";
		displayName = "104th Axel";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Armours\data\Textures\104th_AB_Axel_Upper.paa", "Jangos_Airborne_Armours\data\Textures\104th_AB_Axel_Lower.paa"};
		linkedItems[] = {JA_104th_Axel_Helmet, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		// all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Axel_Helmet, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Osiris : lsd_gar_phase2_base
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
	class JA_104th_Carmine : ls_gar_marshalCommander_base
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
		hiddenSelections[] =
			{
				"camo1",
				"camo2",
				"biceps",
				"rank"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Airborne_Armours\data\Textures\104th_P2_Carmine_Upper.paa",
				"Jangos_Airborne_Armours\data\Textures\104th_P2_Carmine_Lower.paa",
				"Jangos_Airborne_Armours\data\Textures\104th_P2_Carmine_Upper.paa",
				"",
			};
		linkedItems[] = {JA_104th_Carmine_Helmet, JA_104th_Carmine_Vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		  // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Carmine_Helmet, JA_104th_Carmine_Vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Clutch : lsd_gar_phase2_base
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
		linkedItems[] = {JA_104th_Clutch_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		 // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Clutch_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Doc_AB : lsd_gar_phase2_base
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_Doc_AB_Uniform";
		displayName = "104th Doc";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_Airborne_Armours\data\Textures\104th_AB_Doc_Upper.paa", "Jangos_Airborne_Armours\data\Textures\104th_AB_Doc_Lower.paa"};
		linkedItems[] = {JA_104th_Doc_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		 // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Doc_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Kage : lsd_gar_phase2_base
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
		linkedItems[] = {JA_104th_Kage_Helmet, ls_gar_airborneNCO_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		 // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Kage_Helmet, ls_gar_airborneNCO_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Sixes : lsd_gar_phase2_base
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
	class JA_104th_Soul : lsd_gar_phase2_base
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
		linkedItems[] = {JA_104th_Soul_Helmet, ls_gar_airborneNCO_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		 // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Soul_Helmet, ls_gar_airborneNCO_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Red : lsd_gar_phase2_base
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
		linkedItems[] = {JA_104th_Red_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		  // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Red_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Garm : lsd_gar_phase2_base
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
		linkedItems[] = {JA_104th_Garm_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		   // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Garm_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Trustful : lsd_gar_phase2_base
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
		linkedItems[] = {JA_104th_Garm_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		   // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Garm_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Raptor : lsd_gar_phase2_base
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
		linkedItems[] = {JA_104th_Raptor_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		 // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Raptor_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
};
