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
			"JA_104th_Test",
			"JA_104th_Spirit",
			"JA_104th_Scurvy",
			"JA_104th_Knightfall",
			"JA_104th_Irish",
			"JA_104th_Knockout",
			"JA_104th_Welty"};
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
			"JA_104th_Test_Uniform",
			"JA_104th_Kyo_Uniform",
			"JA_104th_Crash_Uniform",
			"JA_104th_Paraso_Uniform",
			"JA_104th_Spirit_Uniform",
			"JA_104th_Scurvy_Uniform",
			"JA_104th_Irish_Uniform",
			"JA_104th_Death_Uniform"};
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
	class ls_sob_commando_uniform;
	class UniformItem;
	class VestItem;

	class JA_104th_Base_Clone_Uniform : ls_gar_marshalCommander_uniform
	{
		model = "\ls\core\addons\characters_clone_legacy\uniforms\phase2\ls_gar_phase2_uniform.p3d";
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
	class JA_104th_Base_Clone_MC_Uniform : ls_gar_marshalCommander_uniform
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

	class JA_104th_Crash_Uniform : JA_104th_Base_Clone_MC_Uniform
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
			scope = 2;
			uniformClass = "JA_104th_Crash";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Quick_Uniform : JA_104th_Base_Clone_Uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Quick)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Infantry_Armours\data\Textures\104th_P2_Quick_Upper.paa",
				"Jangos_Infantry_Armours\data\Textures\104th_P2_Quick_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			scope = 2;
			uniformClass = "JA_104th_Quick";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Spectre_RC_Uniform : ls_sob_commando_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper Republic Commando armor (104th Spectre)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] = {
			"Jangos_Infantry_Armours\data\Textures\104th_Company_Spectre_RC_Upper.paa",
			"Jangos_Infantry_Armours\data\Textures\104th_Company_Spectre_RC_Lower.paa"};

		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			scope = 2;
			uniformClass = "JA_104th_Spectre_RC";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Banker_Uniform : JA_104th_Base_Clone_Uniform
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
			scope = 2;
			uniformClass = "JA_104th_Banker";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Miniminer_Uniform : JA_104th_Base_Clone_Uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Miniminer)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Infantry_Armours\data\Textures\104th_P2_Miniminer_Upper.paa",
				"Jangos_Infantry_Armours\data\Textures\104th_P2_Miniminer_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			scope = 2;
			uniformClass = "JA_104th_Miniminer";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Axel_Uniform : JA_104th_Base_Clone_Uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Axel)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Infantry_Armours\data\Textures\104th_Engi_Axel_Upper.paa",
				"Jangos_Infantry_Armours\data\Textures\104th_Engi_Axel_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			scope = 2;
			uniformClass = "JA_104th_Axel";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Granite_Uniform : JA_104th_Base_Clone_Uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Granite)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Infantry_Armours\data\Textures\104th_P2_Granite_Upper.paa",
				"Jangos_Infantry_Armours\data\Textures\104th_P2_Granite_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			scope = 2;
			uniformClass = "JA_104th_Granite";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_IQ_Uniform : JA_104th_Base_Clone_MC_Uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th IQ)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2",
				"biceps",
				"rank"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Infantry_Armours\data\Textures\104th_P2_IQ_Upper.paa",
				"Jangos_Infantry_Armours\data\Textures\104th_P2_IQ_Lower.paa",
				"Jangos_Infantry_Armours\data\Textures\104th_P2_IQ_Upper.paa",
				"",
			};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			scope = 2;
			uniformClass = "JA_104th_IQ";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Lax_Uniform : JA_104th_Base_Clone_Uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Lax)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Infantry_Armours\data\Textures\104th_P2_Lax_Upper.paa",
				"Jangos_Infantry_Armours\data\Textures\104th_P2_Lax_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			scope = 2;
			uniformClass = "JA_104th_Lax";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Patch_Uniform : JA_104th_Base_Clone_Uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Patch)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Infantry_Armours\data\Textures\104th_P2_Patch_Upper.paa",
				"Jangos_Infantry_Armours\data\Textures\104th_P2_Patch_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			scope = 2;
			uniformClass = "JA_104th_Patch";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Archibold_Uniform : JA_104th_Base_Clone_Uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Archibold)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Infantry_Armours\data\Textures\104th_Engi_Archibold_Upper.paa",
				"Jangos_Infantry_Armours\data\Textures\104th_Engi_Archibold_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			scope = 2;
			uniformClass = "JA_104th_Archibold";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Bomb_Uniform : JA_104th_Base_Clone_Uniform
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
			scope = 2;
			uniformClass = "JA_104th_Bomb";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Blood_Uniform : JA_104th_Base_Clone_Uniform
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
			scope = 2;
			uniformClass = "JA_104th_Blood";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Dart_Uniform : JA_104th_Base_Clone_Uniform
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
			scope = 2;
			uniformClass = "JA_104th_Dart";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Doc_Uniform : JA_104th_Base_Clone_Uniform
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
			scope = 2;
			uniformClass = "JA_104th_Doc";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Death_Uniform : JA_104th_Base_Clone_Uniform
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
			scope = 2;
			uniformClass = "JA_104th_Death";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Ed_Uniform : JA_104th_Base_Clone_Uniform
	{
		author = "Jango's Finest";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Ed)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Infantry_Armours\data\Textures\104th_P2_Ed_Upper.paa",
				"Jangos_Infantry_Armours\data\Textures\104th_P2_Ed_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			scope = 2;
			uniformClass = "JA_104th_Ed";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Galahad_Uniform : JA_104th_Base_Clone_Uniform
	{
		author = "Jango's Finest";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Galahad)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Infantry_Armours\data\Textures\104th_BARC_Galahad_Upper.paa",
				"Jangos_Infantry_Armours\data\Textures\104th_BARC_Galahad_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			scope = 2;
			uniformClass = "JA_104th_Galahad";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Irish_Uniform : JA_104th_Base_Clone_Uniform
	{
		author = "Jango's Finest";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Irish)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Infantry_Armours\data\Textures\104th_P2_Irish_Upper.paa",
				"Jangos_Infantry_Armours\data\Textures\104th_P2_Irish_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			scope = 2;
			uniformClass = "JA_104th_Irish";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Knightfall_Uniform : JA_104th_Base_Clone_Uniform // UPD
	{
		author = "Jango's Finest";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Knightfall)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Infantry_Armours\data\Textures\104th_P2_Knightfall_Upper.paa",
				"Jangos_Infantry_Armours\data\Textures\104th_P2_Knightfall_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			scope = 2;
			uniformClass = "JA_104th_Knightfall";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Knockout_Uniform : JA_104th_Base_Clone_Uniform
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
			scope = 2;
			uniformClass = "JA_104th_Knockout";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Kyo_Uniform : JA_104th_Base_Clone_Uniform
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
			scope = 2;
			uniformClass = "JA_104th_Kyo";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Paraso_Uniform : JA_104th_Base_Clone_Uniform
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
			scope = 2;
			uniformClass = "JA_104th_Paraso";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Pacify_Uniform : JA_104th_Base_Clone_Uniform
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
			scope = 2;
			uniformClass = "JA_104th_Pacify";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Mad_Uniform : JA_104th_Base_Clone_Uniform
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
			scope = 2;
			uniformClass = "JA_104th_Mad";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Skav_Uniform : JA_104th_Base_Clone_Uniform
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
			scope = 2;
			uniformClass = "JA_104th_Skav";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Scurvy_Uniform : JA_104th_Base_Clone_Uniform
	{
		author = "Jango's Finest";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Scurvy)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Infantry_Armours\data\Textures\104th_p2_scurvy_upper.paa",
				"Jangos_Infantry_Armours\data\Textures\104th_p2_scurvy_lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			scope = 2;
			uniformClass = "JA_104th_Scurvy";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Spirit_Uniform : JA_104th_Base_Clone_Uniform
	{
		author = "Jango's Finest";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Spirit)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Infantry_Armours\data\Textures\104th_P2_Spirit_Upper.paa",
				"Jangos_Infantry_Armours\data\Textures\104th_P2_Spirit_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			scope = 2;
			uniformClass = "JA_104th_Spirit";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Talisman_Uniform : JA_104th_Base_Clone_Uniform
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
			scope = 2;
			uniformClass = "JA_104th_Talisman";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Tiger_Uniform : JA_104th_Base_Clone_Uniform
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
			scope = 2;
			uniformClass = "JA_104th_Tiger";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Tinkle_Uniform : JA_104th_Base_Clone_MC_Uniform
	{
		author = "Fish";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Tinkle)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2",
				"biceps",
				"rank"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Infantry_Armours\data\Textures\104th_P2_Tinkle_Upper.paa",
				"Jangos_Infantry_Armours\data\Textures\104th_P2_Tinkle_Lower.paa",
				"Jangos_Infantry_Armours\data\Textures\104th_P2_Tinkle_Upper.paa",
				""};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			scope = 2;
			uniformClass = "JA_104th_Tinkle";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Tusk_Uniform : JA_104th_Base_Clone_Uniform // UPD
	{
		author = "Jango's Finest";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Tusk)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Infantry_Armours\data\Textures\104th_P2_Tusk_Upper.paa",
				"Jangos_Infantry_Armours\data\Textures\104th_P2_Tusk_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			scope = 2;
			uniformClass = "JA_104th_Tusk";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Test_Uniform : JA_104th_Base_Clone_Uniform // UPD
	{
		author = "Fish";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (104th Test)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2",
				"undersuit"};
		hiddenSelectionsTextures[] =
			{
				"Jangos_Infantry_Armours\data\Textures\104th_P2_Test_Upper.paa",
				"Jangos_Infantry_Armours\data\Textures\104th_P2_Test_Lower.paa",
				"Jangos_Infantry_Armours\data\Textures\104th_P2_Test_Suit.paa"};
		hiddenSelectionsMaterials[] =
			{
				"Jangos_Infantry_Armours\data\Textures\JA_camo1.rvmat",
				"Jangos_Infantry_Armours\data\Textures\JA_camo2.rvmat",
				"Jangos_Infantry_Armours\data\Textures\JA_undersuit.rvmat"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			scope = 2;
			uniformClass = "JA_104th_Test";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_Welty_Uniform_old : JA_104th_Base_Clone_Uniform
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
			scope = 2;
			uniformClass = "JA_104th_Welty_old";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
};

class CfgVehicles
{
	class lsd_gar_phase2_base;
	class ls_sob_commando_unit;
	class ls_gar_marshalCommander_base;
	class ls_gar_standard_backpack;
	class ls_gar_rto_mini_backpack;
	class ls_gar_heavy_backpack;
	class ls_gar_medic_backpack;
	class ls_gar_Radio_backpack;
	class JLTS_Clone_jumppack;
	class JA_104th_Jumppack_JT12;
	class JA_104th_Jumppack_JT12_LR;

	// Cerberus PLT, Infantry, Engineer, Medic Uniforms

	class JA_104th_Spectre_RC : ls_sob_commando_unit
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_Spectre_RC_Uniform";
		displayName = "104th Spectre";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Armours\data\Textures\104th_Company_Spectre_RC_Upper.paa", "Jangos_Infantry_Armours\data\Textures\104th_Company_Spectre_RC_Lower.paa"};
		linkedItems[] = {JA_104th_Spectre_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		  // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Spectre_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Banker : lsd_gar_phase2_base
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
		linkedItems[] = {JA_104th_Banker_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		 // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Banker_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Miniminer : lsd_gar_phase2_base
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_Miniminer_Uniform";
		displayName = "104th Miniminer";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Armours\data\Textures\104th_P2_Miniminer_Upper.paa", "Jangos_Infantry_Armours\data\Textures\104th_P2_Miniminer_Lower.paa"};
		linkedItems[] = {JA_104th_Miniminer_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		 // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Miniminer_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Granite : lsd_gar_phase2_base
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_Granite_Uniform";
		displayName = "104th Granite";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Armours\data\Textures\104th_P2_Granite_Upper.paa", "Jangos_Infantry_Armours\data\Textures\104th_P2_Granite_Lower.paa"};
		linkedItems[] = {JA_104th_Granite_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		 // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Granite_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Axel : lsd_gar_phase2_base
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_Axel_Uniform";
		displayName = "104th Axel";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Armours\data\Textures\104th_Engi_Axel_Upper.paa", "Jangos_Infantry_Armours\data\Textures\104th_Engi_Axel_Lower.paa"};
		linkedItems[] = {JA_104th_Axel_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		 // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Axel_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_IQ : ls_gar_marshalCommander_base
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_IQ_Uniform";
		displayName = "104th IQ";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones";
		hiddenSelections[] = {"camo1", "camo2", "biceps", "rank"};
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Armours\data\Textures\104th_P2_IQ_Upper.paa", "Jangos_Infantry_Armours\data\Textures\104th_P2_IQ_Lower.paa","Jangos_Infantry_Armours\data\Textures\104th_P2_IQ_Upper.paa",""};
		linkedItems[] = {JA_104th_Fire_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		   // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Fire_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Lax : lsd_gar_phase2_base
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_Lax_Uniform";
		displayName = "104th Lax";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Armours\data\Textures\104th_P2_Lax_Upper.paa", "Jangos_Infantry_Armours\data\Textures\104th_P2_Lax_Lower.paa"};
		linkedItems[] = {JA_104th_Lax_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		 // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Lax_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Patch : lsd_gar_phase2_base
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_Patch_Uniform";
		displayName = "104th Patch";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Armours\data\Textures\104th_P2_Patch_Upper.paa", "Jangos_Infantry_Armours\data\Textures\104th_P2_Patch_Lower.paa"};
		linkedItems[] = {JA_104th_Patch_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		 // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Patch_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Archibold : lsd_gar_phase2_base
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_Archibold_Uniform";
		displayName = "104th Archibold";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Armours\data\Textures\104th_Engi_Archibold_Upper.paa", "Jangos_Infantry_Armours\data\Textures\104th_Engi_Archibold_Lower.paa"};
		linkedItems[] = {JA_104th_Archibold_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		// all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Archibold_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Bomb : lsd_gar_phase2_base
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
		linkedItems[] = {JA_104th_Blood_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		// all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Blood_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Blood : lsd_gar_phase2_base
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
		linkedItems[] = {JA_104th_Blood_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		// all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Blood_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Dart : lsd_gar_phase2_base
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
		linkedItems[] = {JA_104th_Dart_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		   // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Dart_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Crash : ls_gar_marshalCommander_base
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
		linkedItems[] = {JA_104th_Crash_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		// all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Crash_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Paraso : lsd_gar_phase2_base
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
		linkedItems[] = {JA_104th_Paraso_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		 // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Paraso_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Tiger : lsd_gar_phase2_base
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
		linkedItems[] = {JA_104th_Tiger_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		// all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Tiger_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Death : lsd_gar_phase2_base
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
		linkedItems[] = {JA_104th_Death_Helmet, ls_gar_clone_vest, JA_104th_Death_NVG_Tanker, JA_104th_Death_Kama, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		// all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Death_Helmet, ls_gar_clone_vest, JA_104th_Death_NVG_Tanker, JA_104th_Death_Kama, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Ed : lsd_gar_phase2_base
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
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Armours\data\Textures\104th_P2_Ed_Upper.paa", "Jangos_Infantry_Armours\data\Textures\104th_P2_Ed_Lower.paa"};
		linkedItems[] = {JA_104th_Ed_Helmet, ls_gar_officer_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		   // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Ed_Helmet, ls_gar_officer_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Galahad : lsd_gar_phase2_base
	{
		author = "Tundra";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_Galahad_Uniform";
		displayName = "104th Galahad";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Armours\data\Textures\104th_BARC_Galahad_Upper.paa", "Jangos_Infantry_Armours\data\Textures\104th_BARC_Galahad_Lower.paa"};
		linkedItems[] = {JA_104th_Galahad_Helmet, JA_104th_Galahad_Vest, JA_104th_BARC_Galahad_NVG, ls_gar_officer_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		  // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Galahad_Helmet, JA_104th_Galahad_Vest, JA_104th_BARC_Galahad_NVG, ls_gar_officer_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Irish : lsd_gar_phase2_base
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
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Armours\data\Textures\104th_P2_Irish_Upper.paa", "Jangos_Infantry_Armours\data\Textures\104th_P2_Irish_Lower.paa"};
		linkedItems[] = {JA_104th_Irish_Helmet, ls_gar_officer_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		  // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Irish_Helmet, ls_gar_officer_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Welty_old : lsd_gar_phase2_base
	{
		author = "Ice";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_Welty_Uniform_old";
		displayName = "104th Welty";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Armours\data\Textures\104th_P2_Welty_Upper.paa", "Jangos_Infantry_Armours\data\Textures\104th_P2_Welty_Lower.paa"};
		linkedItems[] = {JA_104th_Welty_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		// all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Welty_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Quick : lsd_gar_phase2_base
	{
		author = "Ice";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_Quick_Uniform";
		displayName = "104th Quick";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Armours\data\Textures\104th_P2_Quick_Upper.paa", "Jangos_Infantry_Armours\data\Textures\104th_P2_Quick_Lower.paa"};
		linkedItems[] = {JA_104th_Quick_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		// all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Quick_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Doc : lsd_gar_phase2_base
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
		linkedItems[] = {JA_104th_Doc_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		  // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Doc_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Tinkle : ls_gar_marshalCommander_base
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
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Armours\data\Textures\104th_P2_Tinkle_Upper.paa", "Jangos_Infantry_Armours\data\Textures\104th_P2_Tinkle_Lower.paa","Jangos_Infantry_Armours\data\Textures\104th_P2_Tinkle_Upper.paa"};
		linkedItems[] = {JA_104th_Tinkle_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		 // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Tinkle_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Knightfall : lsd_gar_phase2_base
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
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Armours\data\Textures\104th_P2_Knightfall_Upper.paa", "Jangos_Infantry_Armours\data\Textures\104th_P2_Knightfall_Lower.paa"};
		linkedItems[] = {JA_104th_Tanner_Helmet, JA_104thKnightfallVest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		  // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Tanner_Helmet, JA_104thKnightfallVest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Knockout : lsd_gar_phase2_base
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
		linkedItems[] = {JA_104th_Knockout_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		   // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Knockout_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Talisman : lsd_gar_phase2_base
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
	class JA_104th_Tusk : lsd_gar_phase2_base
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
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Armours\data\Textures\104th_P2_Tusk_Upper.paa", "Jangos_Infantry_Armours\data\Textures\104th_P2_Tusk_Lower.paa"};
		linkedItems[] = {JA_104th_Tusk_Helmet, JA_104thTuskVest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		  // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Tusk_Helmet, JA_104thTuskVest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Test : lsd_gar_phase2_base
	{
		author = "Fish";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_Test_Uniform";
		displayName = "104th Test";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		hiddenSelections[] = {"camo1", "camo2", "undersuit"};
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Armours\data\Textures\104th_P2_Test_Upper.paa", "Jangos_Infantry_Armours\data\Textures\104th_P2_Test_Lower.paa", "Jangos_Infantry_Armours\data\Textures\104th_P2_Test_Suit.paa"};
		hiddenSelectionsMaterials[] =
			{
				"Jangos_Infantry_Armours\data\Textures\JA_camo1.rvmat",
				"Jangos_Infantry_Armours\data\Textures\JA_camo2.rvmat",
				"Jangos_Infantry_Armours\data\Textures\JA_undersuit.rvmat"};
		linkedItems[] = {JA_104th_Test_Helmet, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		// all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Test_Helmet, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Kyo : lsd_gar_phase2_base
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
	class JA_104th_Skav : lsd_gar_phase2_base
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
	class JA_104th_Scurvy : lsd_gar_phase2_base
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
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Armours\data\Textures\104th_p2_scurvy_upper.paa", "Jangos_Infantry_Armours\data\Textures\104th_p2_scurvy_lower.paa"};
		linkedItems[] = {JA_104th_Scurvy_Uniform, JA_104th_Scurvy_Vest, JA_104th_Scurvy_NVG_Rangefinder, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		  // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Scurvy_Uniform, JA_104th_Scurvy_Vest, JA_104th_Scurvy_NVG_Rangefinder, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Spirit : lsd_gar_phase2_base
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
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"Jangos_Infantry_Armours\data\Textures\104th_P2_Spirit_Upper.paa", "Jangos_Infantry_Armours\data\Textures\104th_P2_Spirit_Lower.paa"};
		linkedItems[] = {JA_104th_Spirit_Uniform, JA_104thScurvyVest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		   // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Spirit_Uniform, JA_104thScurvyVest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Mad : lsd_gar_phase2_base
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
		linkedItems[] = {JA_104th_Mad_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		  // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Mad_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Pacify : lsd_gar_phase2_base
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
		linkedItems[] = {JA_104th_Pacify_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		 // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Pacify_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
};