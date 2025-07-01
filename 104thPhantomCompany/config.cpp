#include "basicDefines_A3.hpp"
class DefaultEventhandlers;
class UniformSlotInfo;
class CfgPatches
{
	class Jangos_Armory_Phantom
	{
		author = "Jango's Finest";
		units[] = {
			"JA_104th_P2_1C_01_CT",
			"JA_104th_P2_1C_02_CT",
			"JA_104th_P2_1C_Medic",
			"JA_104th_P2_1C_Engineer",
			"JA_104th_P2_1C_JTAC"};
		weapons[] = {
			"JA_104th_P2_1C_01_CT_Helmet",
			"JA_104th_P2_1C_02_CT_Helmet",
			"JA_104th_P2_1C_03_CT_Helmet",
			"JA_104th_P2_1C_04_CT_Helmet",
			"JA_104th_P2_1C_05_CT_Helmet",
			"JA_104th_P2_1C_06_CT_Helmet",
			"JA_104th_P2_1C_07_CT_Helmet",
			"JA_104th_P2_1C_08_CT_Helmet",
			"JA_104th_P2_1C_Medic_Helmet",
			"JA_104th_Engineer_1C_Base_Helmet",
			"JA_104th_JTAC_1C_Helmet",
			"JA_104th_Desert_1C_Medic_Helmet",
			"JA_104th_Desert_1C_Medic_NCO_Helmet",
			"JA_104th_Desert_1C_NCO_Helmet",
			"JA_104th_Desert_1C_Officer_Helmet",
			"JA_104th_Desert_1C_Base_Helmet",

			"JA_104th_P2_1C_01_CT_Uniform",
			"JA_104th_P2_1C_02_CT_Uniform",
			"JA_104th_P2_1C_Medic_Uniform",
			"JA_104th_P2_1C_JTAC_Uniform",
			"JA_104th_P2_1C_Engineer_Uniform",
			"JA_104th_ARC_P2_Vest",
			"JA_104th_Vest_P2",
			"JA_104th_P2_Vest",
			"JA_104th_P2_PSGT_Base_Kama",
			"JA_104th_P2_PSGT_Alt1_Kama",
			"JA_104th_P2_PSGT_Alt2_Kama",
			"JA_104th_P2_Medic_Vest",
			"JA_104th_P2_officer_Vest",
			"JA_104th_P2_NCO_Vest",
			"JA_104th_P2_NCO_Medic_Vest",
			"JA_104th_P2_Recon_Vest",
			"JA_104th_P2_Recon_Vest2",
			"JA_104th_P2_Grenadier_Vest",
			"JA_104th_P2_basic_Vest",
			"JA_104th_P2_Heavy_Vest",
			"JA_104th_Base_Commander_Vest_P2",
			"JA_104th_AB_P2_NCO_Base_Trooper_Armor",
			"JA_104th_AB_P2_NCO_Alt1_Trooper_Armor",
			"JA_104th_AB_P2_NCO_Alt2_Trooper_Armor",
			"JA_104th_AB_P2_NCO_Medic_Trooper_Armor",
			"JA_104th_AB_P2_Base_Trooper_Armor",
			"JA_104th_AB_P2_Medic_Trooper_Armor",
			"JA_104th_AB_P2_Officer_Trooper_Armor"};
	};
};

class CfgFactionClasses
{
	class CfgFactionClasses
	{
		class 104th_Guys
		{
			displayname = "Jango's Finest";
			priority = 1; // Position in list.
			side = 1;	  // Opfor = 0, Blufor = 1, Indep = 2.
			icon = "";
		};
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
	class ls_gar_phase2Pilot_helmet;
	class ls_gar_phase2_uniform;
	class ls_gar_marshalCommander_uniform;
	class ls_gar_commander_vest;
	class ls_gar_barc_helmet;
	class ls_gar_airborne_helmet;
	class ls_gar_phase1Arf_helmet;
	class ls_gar_desert_helmet;
	class ls_gar_engineer_helmet;
	class ls_gar_arc_helmet;
	class ls_gar_phase1_helmet;
	class ls_gar_rex_helmet;
	class ls_gar_phase2_helmet;
	class ls_sob_phase2SpecOp_helmet;
	class lsd_gar_standart_nvg;
	class lsd_gar_rangefinder_nvg;
	class lsd_gar_p2MarshalCommander_nvg;
	class ls_gar_airborneNCO_vest;
	class ls_gar_rebreather_vest;
	class ls_gar_clone_vest;
	class JA_104th_Clone_Base_armor;
	class ls_cloneVest_base;
	class ls_gar_airborne_vest;
	class UniformItem;
	class VestItem;
	class Bag_Base;
	class JA_104th_Base_CT_Uniform : ls_gar_phase2_uniform
	{
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Base_CT";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
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

	// Inheritance for vests
	// Makes making each vest a rebreather easier
	// Inheritance for vests
	// Makes making each vest a rebreather easier
	class ItemInfo;
	class ls_gar_airborneOfficer_vest : ls_cloneVest_base
	{
		class ItemInfo;
	};
	class ls_gar_forceReconLieutenant_vest : ls_gar_clone_vest
	{
		class ItemInfo;
	};
	class ls_gar_officer_vest : ls_gar_clone_vest
	{
		class ItemInfo;
	};
	class ls_gar_arc_vest : ls_gar_officer_vest
	{
		class ItemInfo;
	};
	class ls_gar_kama_vest : JA_104th_Clone_Base_armor
	{
		class ItemInfo;
	};
	class ls_gar_medic_vest : ls_gar_clone_vest
	{
		class ItemInfo;
	};
	class ls_gar_forceReconNCO_vest : ls_gar_airborne_vest
	{
		class ItemInfo;
	};
	class ls_gar_forceRecon_vest : ls_gar_airborne_vest
	{
		class ItemInfo;
	};
	class ls_gar_heavy_vest : ls_gar_airborne_vest
	{
		class ItemInfo;
	};
	class ls_gar_grenadier_vest : ls_gar_clone_vest
	{
		class ItemInfo;
	};

	class JA_104th_P2_1C_01_CT_Helmet : ls_gar_phase2_helmet
	{
		author = "Bulky & Cyan";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";

		displayname = "Clone Trooper P2 Helmet (104th [1C] 01 CT)";										 // the name it will be in game
		hiddenSelectionsTextures[] = {"104thPhantomCompany\data\Textures\104th_P2_1C_01_CT_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_P2_1C_02_CT_Helmet : ls_gar_phase2_helmet
	{
		author = "Bulky & Cyan";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";

		displayname = "Clone Trooper P2 Helmet (104th [1C] 02 CT)";										 // the name it will be in game
		hiddenSelectionsTextures[] = {"104thPhantomCompany\data\Textures\104th_P2_1C_02_CT_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_P2_1C_03_CT_Helmet : ls_gar_phase2_helmet
	{
		author = "Bulky & Cyan";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";

		displayname = "Clone Trooper P2 Helmet (104th [1C] 03 CT)";										 // the name it will be in game
		hiddenSelectionsTextures[] = {"104thPhantomCompany\data\Textures\104th_P2_1C_03_CT_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_P2_1C_04_CT_Helmet : ls_gar_phase2_helmet
	{
		author = "Bulky & Cyan";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";

		displayname = "Clone Trooper P2 Helmet (104th [1C] 04 CT)";										 // the name it will be in game
		hiddenSelectionsTextures[] = {"104thPhantomCompany\data\Textures\104th_P2_1C_04_CT_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_P2_1C_05_CT_Helmet : ls_gar_phase2_helmet
	{
		author = "Bulky & Cyan";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";

		displayname = "Clone Trooper P2 Helmet (104th [1C] 05 CT)";										 // the name it will be in game
		hiddenSelectionsTextures[] = {"104thPhantomCompany\data\Textures\104th_P2_1C_05_CT_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_P2_1C_06_CT_Helmet : ls_gar_phase2_helmet
	{
		author = "Bulky & Cyan";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";

		displayname = "Clone Trooper P2 Helmet (104th [1C] 06 CT)";										 // the name it will be in game
		hiddenSelectionsTextures[] = {"104thPhantomCompany\data\Textures\104th_P2_1C_06_CT_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_P2_1C_07_CT_Helmet : ls_gar_phase2_helmet
	{
		author = "Bulky & Cyan";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";

		displayname = "Clone Trooper P2 Helmet (104th [1C] 07 CT)";										 // the name it will be in game
		hiddenSelectionsTextures[] = {"104thPhantomCompany\data\Textures\104th_P2_1C_07_CT_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_P2_1C_08_CT_Helmet : ls_gar_phase2_helmet
	{
		author = "Bulky & Cyan";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";

		displayname = "Clone Trooper P2 Helmet (104th [1C] 08 CT)";										 // the name it will be in game
		hiddenSelectionsTextures[] = {"104thPhantomCompany\data\Textures\104th_P2_1C_08_CT_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_P2_1C_V8_CT_Helmet : ls_gar_phase2_helmet
	{
		author = "Bulky & Cyan";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";

		displayname = "Clone Trooper P2 Helmet (104th [1C] V8 CT)";										 // the name it will be in game
		hiddenSelectionsTextures[] = {"104thPhantomCompany\data\Textures\104th_PC_P2_CT_V8_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_Engineer_1C_Base_Helmet : ls_gar_engineer_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";
		hiddenSelections[] =
			{
				"camo1",
				"illum",
				"visor"};
		displayname = "Clone Trooper Engineer Helmet (104th [1C] Base)"; // the name it will be in game

		hiddenSelectionsTextures[] = {
			"104thPhantomCompany\data\Textures\104th_Engineer_1C_Base_Helmet.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\engineer\data\light_co.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\engineer\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_P2_1C_Medic_Helmet : ls_gar_phase2_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";

		displayname = "Clone Trooper P2 Helmet (104th [1C] Medic)";										 // the name it will be in game
		hiddenSelectionsTextures[] = {"104thPhantomCompany\data\Textures\104th_P2_1C_Medic_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_JTAC_1C_Helmet : ls_sob_phase2SpecOp_helmet
	{
		author = "Ice";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";
		// don't change this
		displayname = "Clone Trooper P2 Special Activities Helmet (104th [1C] JTAC)";				   // the name it will be in game
		hiddenSelectionsTextures[] = {"104thPhantomCompany\data\Textures\104th_JTAC_Base_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2SpecOp\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_Desert_1C_Medic_Helmet : ls_gar_desert_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";
		hiddenSelections[] = {"Camo1", "Visor"};																													 // don't change this
		displayname = "Clone Trooper Desert Helmet (104th [1C] Medic)";																								 // the name it will be in game
		hiddenSelectionsTextures[] = {"104thPhantomCompany\data\Textures\104th_Desert_Base_Medic_Helmet.paa", "104thPhantomCompany\data\Textures\Visor_Desert.paa"}; // the file path to the texture
	};

	class JA_104th_Desert_1C_Medic_NCO_Helmet : ls_gar_desert_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";
		hiddenSelections[] = {"Camo1", "Visor"};																														 // don't change this
		displayname = "Clone Trooper Desert Helmet (104th [1C] Medic NCO)";																								 // the name it will be in game
		hiddenSelectionsTextures[] = {"104thPhantomCompany\data\Textures\104th_Desert_Base_Medic_NCO_Helmet.paa", "104thPhantomCompany\data\Textures\Visor_Desert.paa"}; // the file path to the texture
	};

	class JA_104th_Desert_1C_NCO_Helmet : ls_gar_desert_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";
		hiddenSelections[] = {"Camo1", "Visor"};																												   // don't change this
		displayname = "Clone Trooper Desert Helmet (104th [1C] NCO)";																							   // the name it will be in game
		hiddenSelectionsTextures[] = {"104thPhantomCompany\data\Textures\104th_Desert_Base_NCO_Helmet.paa", "104thPhantomCompany\data\Textures\Visor_Desert.paa"}; // the file path to the texture
	};

	class JA_104th_Desert_1C_Officer_Helmet : ls_gar_desert_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";
		hiddenSelections[] = {"Camo1", "Visor"};																												   // don't change this
		displayname = "Clone Trooper Desert Helmet (104th [1C] Officer)";																						   // the name it will be in game
		hiddenSelectionsTextures[] = {"104thPhantomCompany\data\Textures\104th_Desert_Base_Officer_Helmet", "104thPhantomCompany\data\Textures\Visor_Desert.paa"}; // the file path to the texture
	};
	class JA_104th_Desert_1C_Base_Helmet : ls_gar_desert_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = "true";
		hiddenSelections[] = {"Camo1", "Visor"};																													   // don't change this
		displayname = "Clone Trooper Desert Helmet (104th [1C] Base)";																								   // the name it will be in game
		hiddenSelectionsTextures[] = {"104thPhantomCompany\data\Textures\104th_Desert_Base_Trooper_Helmet.paa", "104thPhantomCompany\data\Textures\Visor_Desert.paa"}; // the file path to the texture
	};

	class JA_104th_AB_1C_01_CT_Helmet : ls_gar_airborne_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		// don't change this
		displayname = "Clone Trooper Airborne Helmet (104th [1C] 01 CT)"; // the name it will be in game
		visionMode[] = {"Normal"};
		hiddenSelectionsTextures[] = {"104thPhantomCompany\data\Textures\104th_P2_AB_1C_01_CT_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\airborne\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_AB_1C_02_CT_Helmet : ls_gar_airborne_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		// don't change this
		displayname = "Clone Trooper Airborne Helmet (104th [1C] 02 CT)"; // the name it will be in game
		visionMode[] = {"Normal"};
		hiddenSelectionsTextures[] = {"104thPhantomCompany\data\Textures\104th_P2_AB_1C_02_CT_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\airborne\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_AB_1C_03_CT_Helmet : ls_gar_airborne_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		// don't change this
		displayname = "Clone Trooper Airborne Helmet (104th [1C] 03 CT)"; // the name it will be in game
		visionMode[] = {"Normal"};
		hiddenSelectionsTextures[] = {"104thPhantomCompany\data\Textures\104th_P2_AB_1C_03_CT_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\airborne\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_AB_1C_04_CT_Helmet : ls_gar_airborne_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		// don't change this
		displayname = "Clone Trooper Airborne Helmet (104th [1C] 04 CT)"; // the name it will be in game
		visionMode[] = {"Normal"};
		hiddenSelectionsTextures[] = {"104thPhantomCompany\data\Textures\104th_P2_AB_1C_04_CT_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\airborne\data\visor_co.paa"}; // the file path to the texture
	};
	class JA_104th_AB_1C_Medic_Helmet : ls_gar_airborne_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		// don't change this
		displayname = "Clone Trooper Airborne Helmet (104th [1C] Medic)"; // the name it will be in game
		visionMode[] = {"Normal"};
		hiddenSelectionsTextures[] = {"104thPhantomCompany\data\Textures\104th_P2_AB_1C_Medic_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\airborne\data\visor_co.paa"}; // the file path to the texture
	};

	class JA_104th_P2_1C_01_CT_Uniform : JA_104th_Base_CT_Uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper P2 Armor (104th [1C] Cerberus trooper)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"104thPhantomCompany\data\Textures\104th_P2_1C_01_CT_Upper.paa",
				"104thPhantomCompany\data\Textures\104th_P2_1C_01_CT_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_P2_1C_01_CT";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_P2_1C_02_CT_Uniform : JA_104th_Base_CT_Uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper P2 Armor (104th [1C] Warhawk trooper)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"104thPhantomCompany\data\Textures\104th_P2_1C_02_CT_Upper.paa",
				"104thPhantomCompany\data\Textures\104th_P2_1C_02_CT_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_P2_1C_02_CT";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_P2_1C_Engineer_Uniform : JA_104th_Base_CT_Uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper P2 armor (104th [1C] Cerberus Engineer)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"104thPhantomCompany\data\Textures\104th_P2_1C_Engineer_Upper.paa",
				"104thPhantomCompany\data\Textures\104th_P2_1C_Engineer_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_P2_1C_Engineer";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_P2_1C_Medic_Uniform : JA_104th_Base_CT_Uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper P2 armor (104th [1C] Cerberus Medic)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"104thPhantomCompany\data\Textures\104th_P2_1C_Infantry_Medic_Upper.paa",
				"104thPhantomCompany\data\Textures\104th_P2_1C_Infantry_Medic_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_P2_1C_Medic";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_AB_1C_Medic_Uniform : JA_104th_Base_CT_Uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper P2 armor (104th [1C] Warhawk Medic)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"104thPhantomCompany\data\Textures\104th_P2_AB_1C_Medic_Upper.paa",
				"104thPhantomCompany\data\Textures\104th_P2_AB_1C_Medic_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_AB_1C_Medic";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_104th_P2_1C_JTAC_Uniform : ls_gar_marshalCommander_uniform
	{
		author = "Ice";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper P2 armor (104th [1C] JTAC)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2",
				"biceps",
				"rank"};
		hiddenSelectionsTextures[] =
			{
				"104thPhantomCompany\data\Textures\104th_JTAC_Base_Upper.paa",
				"104thPhantomCompany\data\Textures\104th_JTAC_Base_Lower.paa",
				"104thPhantomCompany\data\Textures\104th_JTAC_Base_Upper.paa",
				""};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_P2_1C_JTAC";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	// [1C] Base Vests
	class JA_104th_ARC_P2_Vest : ls_gar_arc_vest
	{
		author = "DAK";
		displayName = "Clone ARC Trooper Vest (104th [1C])";
		picture = "\ls\core\addons\characters_clone_legacy\_ui\icon_cloneVest_commander_ca.paa";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"

			};
		hiddenSelectionsTextures[] =
			{
				"104thPhantomCompany\data\textures\Accessories_ARC.paa",
				"104thPhantomCompany\data\Textures\104th_Officer_Accessories_P2_ARC_Base.paa"};
		class ItemInfo : ItemInfo
		{
			vestType = "Rebreather";
			uniformModel = "\ls\core\addons\characters_clone_legacy\vests\arc\ls_gar_arc_vest.p3d";
			containerClass = "Supply100";
			hiddenSelections[] = {"camo1", "camo2"};
			mass = 100;
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 8;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 8;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 15;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 10;
					passThrough = 0.3;
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
					armor = 4;
					passThrough = 0.3;
				};
			};
		};
	};
	class JA_104th_Vest_P2 : ls_gar_forceReconLieutenant_vest
	{
		author = "Dak";
		displayName = "Clone Trooper Captain Vest (104th [1C])";
		model = "\ls\core\addons\characters_clone_legacy\vests\forceRecon\ls_gar_forceReconLieutenant_vest.p3d";
		uniformModel = "\ls\core\addons\characters_clone_legacy\vests\forceRecon\ls_gar_forceReconLieutenant_vest.p3d";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"104thPhantomCompany\data\Textures\104th_Officer_Accessories_P2_Company_Base.paa",
				"104thPhantomCompany\data\Textures\104th_Heavy_Accessories_Trooper_Grey.paa"};
		class ItemInfo : Vestitem
		{
			uniformModel = "\ls\core\addons\characters_clone_legacy\vests\forceRecon\ls_gar_forceReconLieutenant_vest.p3d";
			containerClass = "Supply80";
			hiddenSelections[] = {"camo1", "camo2"};
			mass = 80;
			vestType = "Rebreather";

			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 8;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 8;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 15;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 10;
					passThrough = 0.3;
				};
			};
		};
	};
	class JA_104th_Base_Commander_Vest_P2 : ls_gar_commander_vest
	{
		author = "Dak";
		displayName = "Clone Trooper Commander Vest (104th [1C])";
		hiddenSelections[] =
			{
				"camo1"};
		hiddenSelectionsTextures[] =
			{
				"104thPhantomCompany\data\Textures\104th_Officer_Accessories_P2_Company_Base.paa"};
		class ItemInfo : ItemInfo
		{
			containerClass = "Supply80";
			vestType = "Rebreather";

			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 8;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 8;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 15;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 10;
					passThrough = 0.3;
				};
			};
		};
	};
	class JA_104th_P2_PSGT_Base_Kama : ls_gar_kama_vest
	{
		author = "Tundra";
		displayName = "Clone Trooper Kama (104th [1C])";
		hiddenSelections[] =
			{
				"camo1"};
		hiddenSelectionsTextures[] =
			{
				"104thPhantomCompany\data\Textures\104th_Officer_Accessories_P2_INF_Base.paa"};
		class ItemInfo : ItemInfo
		{
			containerClass = "Supply80";
			vestType = "Rebreather";

			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 8;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 8;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 15;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 10;
					passThrough = 0.3;
				};
			};
		};
	};
	class JA_104th_P2_PSGT_Alt1_Kama : ls_gar_kama_vest
	{
		author = "Tundra";
		displayName = "Clone Trooper Kama (104th [1C] 01)";
		hiddenSelections[] =
			{
				"camo1"

			};
		hiddenSelectionsTextures[] =
			{
				"104thPhantomCompany\data\Textures\104th_Officer_Accessories_P2_INF_Alt_1.paa"};
		class ItemInfo : ItemInfo
		{
			containerClass = "Supply80";
			vestType = "Rebreather";

			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 8;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 8;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 15;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 10;
					passThrough = 0.3;
				};
			};
		};
	};
	class JA_104th_P2_PSGT_Alt2_Kama : ls_gar_kama_vest
	{
		author = "Tundra";
		displayName = "Clone Trooper Kama (104th [1C] 02)";
		hiddenSelections[] =
			{
				"camo1"

			};
		hiddenSelectionsTextures[] =
			{
				"104thPhantomCompany\data\Textures\104th_Officer_Accessories_P2_INF_Alt_2.paa"};
		class ItemInfo : ItemInfo
		{
			containerClass = "Supply80";
			vestType = "Rebreather";

			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 8;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 8;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 15;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 10;
					passThrough = 0.3;
				};
			};
		};
	};
	class JA_104th_P2_Medic_Vest : ls_gar_medic_vest
	{
		author = "Dak";
		displayName = "Clone Trooper Medic Vest (104th [1C])";
		hiddenSelections[] =
			{
				"camo1"};
		hiddenSelectionsTextures[] =
			{
				"104thPhantomCompany\data\Textures\104th_Heavy_Accessories_Medic_Grey.paa"};
		class ItemInfo : ItemInfo
		{
			containerClass = "Supply80";
			vestType = "Rebreather";

			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 8;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 8;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 15;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 10;
					passThrough = 0.3;
				};
			};
		};
	};
	class JA_104th_P2_officer_Vest : ls_gar_officer_vest
	{
		author = "Dak";
		displayName = "Clone Trooper Officer Vest (104th [1C])";
		hiddenSelections[] =
			{
				"camo1"};
		hiddenSelectionsTextures[] =
			{
				"104thPhantomCompany\data\Textures\104th_Officer_Accessories_P2_INF_Base.paa"};
		class ItemInfo : ItemInfo
		{
			containerClass = "Supply80";
			vestType = "Rebreather";

			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 8;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 8;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 15;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 10;
					passThrough = 0.3;
				};
			};
		};
	};
	class JA_104th_P2_NCO_Vest : ls_gar_forceReconNCO_vest
	{
		author = "Fish";
		scope = 2;
		displayName = "Clone Trooper SNCO Vest (104th [1C])";
		hiddenSelections[] = {"camo1", "camo2", "camo3", "pauldron"};
		hiddenSelectionsTextures[] =
			{
				"104thPhantomCompany\data\Textures\104th_Accessories_Light_P2_Base.paa", // Heavy
				"104thPhantomCompany\data\Textures\104th_Officer_Accessories_P2_INF_Base.paa",
				"104thPhantomCompany\data\Textures\104th_Accessories_Light_P2_Base.paa",	 // Heavy
				"104thPhantomCompany\data\Textures\104th_Heavy_Accessories_Trooper_Grey.paa" // Heavy
			};
		class ItemInfo : ItemInfo
		{
			containerClass = "Supply80";
			vestType = "Rebreather";
			uniformModel = "\ls\core\addons\characters_clone_legacy\vests\forceRecon\ls_gar_forceRecon_vest.p3d";
			hiddenSelections[] = {"camo1", "camo2", "camo3", "pauldron"};

			class HitpointsProtectionInfo
			{
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 6;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 8;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 8;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 15;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 10;
					passThrough = 0.3;
				};
			};
		};
	};
	class JA_104th_P2_NCO_Medic_Vest : ls_gar_airborneNCO_vest
	{
		author = "Fish";
		scope = 2;
		displayName = "Clone Trooper NCO Medic Vest (104th [1C])";
		hiddenSelections[] = {"ammo","camo1","camo2","pauldron"};
		hiddenSelectionsTextures[] =
			{
				"104thPhantomCompany\data\Textures\104th_Heavy_Accessories_Medic_Grey.paa", // Heavy
				"104thPhantomCompany\data\Textures\104th_Heavy_Accessories_Medic_Grey.paa", // Heavy
				"104thPhantomCompany\data\Textures\104th_Officer_Accessories_P2_INF_Medic.paa",
				"104thPhantomCompany\data\Textures\104th_Heavy_Accessories_Medic_Grey.paa"	// Heavy
			};
		class ItemInfo : ItemInfo
		{
			containerClass = "Supply80";
			vestType = "Rebreather";

			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 8;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 8;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 15;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 10;
					passThrough = 0.3;
				};
			};
		};
	};
	class JA_104th_P2_Recon_Vest : ls_gar_forceRecon_vest // missing straps
	{
		author = "Emmet";
		scope = 2;
		displayName = "Clone Force Recon Vest (104th [1C])";
		hiddenSelections[] = {"camo1","camo2","camo3","pauldron"};
		hiddenSelectionsTextures[] =
			{
				"104thPhantomCompany\data\Textures\104th_Accessories_Light_P2_Base.paa",
				"", // Heavy
				"104thPhantomCompany\data\Textures\104th_Heavy_Accessories_Trooper_Grey.paa", // Heavy
				"104thPhantomCompany\data\Textures\104th_Heavy_Accessories_Trooper_Grey.paa", // Heavy
			};
		model = "\ls\core\addons\characters_clone_legacy\vests\forceRecon\ls_gar_forceRecon_vest.p3d";
		uniformModel = "\ls\core\addons\characters_clone_legacy\vests\forceRecon\ls_gar_forceRecon_vest.p3d";
		class ItemInfo : ItemInfo
		{
			containerClass = "Supply80";
			vestType = "Rebreather";
			hiddenSelections[] = {"camo1","camo2","camo3","pauldron"};
			uniformModel = "\ls\core\addons\characters_clone_legacy\vests\forceRecon\ls_gar_forceRecon_vest.p3d";

			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 8;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 8;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 15;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 10;
					passThrough = 0.3;
				};
			};
		};
	};
	class JA_104th_P2_Grenadier_Vest : ls_gar_grenadier_vest
	{
		author = "Emmet";
		scope = 2;
		displayName = "Clone Trooper Grenadier Vest (104th [1C])";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] = {
			"104thPhantomCompany\data\Textures\104th_Accessories_Light_P2_Base.paa",
			"104thPhantomCompany\data\Textures\104th_Heavy_Accessories_Trooper_Grey.paa"};

		class ItemInfo : ItemInfo
		{
			containerClass = "Supply80";
			vestType = "Rebreather";
			hiddenSelections[] = {"camo1", "camo2"};
			uniformModel = "\ls\core\addons\characters_clone_legacy\vests\grenadier\ls_gar_grenadier_vest.p3d";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 8;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 8;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 15;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 10;
					passThrough = 0.3;
				};
			};
		};
	};
	class JA_104th_P2_Heavy_Vest : ls_gar_heavy_vest
	{
		author = "Emmet";
		scope = 2;
		displayName = "Clone Trooper Heavy Vest (104th [1C])";
		hiddenSelections[] = {"ammo", "camo1", "camo2", "camo3", "pauldron"};
		hiddenSelectionsTextures[] = {
			"104thPhantomCompany\data\Textures\104th_Heavy_Accessories_Trooper_Grey.paa",
			"104thPhantomCompany\data\Textures\104th_Heavy_Accessories_Trooper_Grey.paa",
			"104thPhantomCompany\data\Textures\104th_Heavy_Accessories_Trooper_Grey.paa",
			"104thPhantomCompany\data\Textures\104th_Accessories_Light_P2_Base.paa",
			"104thPhantomCompany\data\Textures\104th_Heavy_Accessories_Trooper_Grey.paa"};

		class ItemInfo : ItemInfo
		{
			containerClass = "Supply80";
			vestType = "Rebreather";
			hiddenSelections[] = {"ammo", "camo1", "camo2", "camo3", "pauldron"};
			uniformModel = "\ls\core\addons\characters_clone_legacy\vests\heavy\ls_gar_heavy_vest.p3d";

			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 8;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 8;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 15;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 10;
					passThrough = 0.3;
				};
			};
		};
	};
	// Raider Accessories Officer
	class JA_104th_AB_P2_NCO_Base_Trooper_Armor : ls_gar_airborneNCO_vest
	{
		author = "Dak";
		displayName = "Clone Airborne NCO Vest (104th [1C])";
		hiddenSelections[] = {"ammo","camo1","camo2","pauldron"};
		hiddenSelectionsTextures[] =
			{
				"104thPhantomCompany\data\Textures\104th_Heavy_Accessories_Trooper_Grey.paa", // Heavy
				"104thPhantomCompany\data\Textures\104th_Heavy_Accessories_Trooper_Grey.paa", // Heavy
				"104thPhantomCompany\data\Textures\104th_Officer_Accessories_P2_AB_Base.paa",
				"104thPhantomCompany\data\Textures\104th_Heavy_Accessories_Trooper_Grey.paa"  // Heavy
			};
		class ItemInfo : ItemInfo
		{
			containerClass = "Supply80";
			vestType = "Rebreather";

			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 8;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 8;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 15;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 10;
					passThrough = 0.3;
				};
			};
		};
	};
	class JA_104th_AB_P2_NCO_Alt1_Trooper_Armor : ls_gar_airborneNCO_vest
	{
		author = "Dak";
		displayName = "Clone Airborne NCO Vest (104th [1C] 01)";
		hiddenSelections[] = {"ammo","camo1","camo2","pauldron"};
		hiddenSelectionsTextures[] =
			{
				"104thPhantomCompany\data\Textures\104th_Heavy_Accessories_Trooper_Grey.paa", // Heavy
				"104thPhantomCompany\data\Textures\104th_Heavy_Accessories_Trooper_Grey.paa", // Heavy
				"104thPhantomCompany\data\Textures\104th_Officer_Accessories_P2_AB_Alt_1.paa",
				"104thPhantomCompany\data\Textures\104th_Heavy_Accessories_Trooper_Grey.paa"  // Heavy
			};
		class ItemInfo : ItemInfo
		{
			containerClass = "Supply80";
			vestType = "Rebreather";

			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 8;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 8;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 15;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 10;
					passThrough = 0.3;
				};
			};
		};
	};
	class JA_104th_AB_P2_NCO_Alt2_Trooper_Armor : ls_gar_airborneNCO_vest
	{
		author = "Dak";
		displayName = "Clone Airborne NCO Vest (104th [1C] 02)";
		hiddenSelections[] = {"ammo","camo1","camo2","pauldron"};
		hiddenSelectionsTextures[] =
			{
				"104thPhantomCompany\data\Textures\104th_Heavy_Accessories_Trooper_Grey.paa", // Heavy
				"104thPhantomCompany\data\Textures\104th_Heavy_Accessories_Trooper_Grey.paa", // Heavy
				"104thPhantomCompany\data\Textures\104th_Officer_Accessories_P2_AB_Alt_2.paa",
				"104thPhantomCompany\data\Textures\104th_Heavy_Accessories_Trooper_Grey.paa"  // Heavy
			};
		class ItemInfo : ItemInfo
		{
			containerClass = "Supply80";
			vestType = "Rebreather";

			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 8;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 8;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 15;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 10;
					passThrough = 0.3;
				};
			};
		};
	};
	class JA_104th_AB_P2_NCO_Medic_Trooper_Armor : ls_gar_airborneNCO_vest
	{
		author = "Dak";
		displayName = "Clone Airborne NCO Medic Vest (104th [1C])";
		hiddenSelections[] = {"ammo","camo1","camo2","pauldron"};
		hiddenSelectionsTextures[] =
			{
				"104thPhantomCompany\data\Textures\104th_Heavy_Accessories_Medic_Grey.paa", // Heavy
				"104thPhantomCompany\data\Textures\104th_Heavy_Accessories_Medic_Grey.paa", // Heavy
				"104thPhantomCompany\data\Textures\104th_Officer_Accessories_P2_AB_Medic.paa",
				"104thPhantomCompany\data\Textures\104th_Heavy_Accessories_Medic_Grey.paa"	// Heavy
			};
		class ItemInfo : ItemInfo
		{
			containerClass = "Supply80";
			vestType = "Rebreather";

			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 8;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 8;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 15;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 10;
					passThrough = 0.3;
				};
			};
		};
	};
	class JA_104th_AB_P2_Base_Trooper_Armor : ls_gar_airborne_vest
	{
		author = "Dak";
		displayName = "Clone Airborne Trooper Vest (104th [1C])";
		hiddenSelections[] = {
			"ammo", 
			"camo1", 
			"camo2", 
			"pauldron",
		};
		hiddenSelectionsTextures[] =
			{
				"104thPhantomCompany\data\Textures\104th_Heavy_Accessories_Trooper_Grey.paa", // Heavy
				"104thPhantomCompany\data\Textures\104th_Heavy_Accessories_Trooper_Grey.paa", // Heavy
				"104thPhantomCompany\data\Textures\104th_Officer_Accessories_P2_AB_Trooper.paa",
			};
		class ItemInfo : ItemInfo
		{
			containerClass = "Supply80";
			vestType = "Rebreather";

			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 8;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 8;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 15;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 10;
					passThrough = 0.3;
				};
			};
		};
	};
	class JA_104th_AB_P2_Medic_Trooper_Armor : ls_gar_airborne_vest
	{
		author = "Dak";
		displayName = "Clone Airborne Medic Vest (104th [1C])";
		hiddenSelections[] = {
			"ammo", 
			"camo1", 
			"camo2", 
			"pauldron",
		};
		hiddenSelectionsTextures[] =
			{
				"104thPhantomCompany\data\Textures\104th_Heavy_Accessories_Medic_Grey.paa", // Heavy
				"104thPhantomCompany\data\Textures\104th_Heavy_Accessories_Medic_Grey.paa", // Heavy
				"104thPhantomCompany\data\Textures\104th_Officer_Accessories_P2_AB_Medic.paa",
			};
		class ItemInfo : ItemInfo
		{
			containerClass = "Supply80";
			vestType = "Rebreather";

			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 8;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 8;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 15;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 10;
					passThrough = 0.3;
				};
			};
		};
	};
	class JA_104th_AB_P2_Officer_Trooper_Armor : ls_gar_forceReconLieutenant_vest // Fixes the white pauldron issue
	{
		author = "Dak";
		displayName = "Clone Airborne Officer Vest (104th [1C])";
		model = "\ls\core\addons\characters_clone_legacy\vests\forceRecon\ls_gar_forceReconLieutenant_vest.p3d";
		uniformModel = "\ls\core\addons\characters_clone_legacy\vests\forceRecon\ls_gar_forceReconLieutenant_vest.p3d";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"104thPhantomCompany\data\Textures\104th_Officer_Accessories_P2_AB_Base.paa",
				"104thPhantomCompany\data\Textures\104th_Heavy_Accessories_Trooper_Grey.paa"};
		class ItemInfo : Vestitem
		{
			uniformModel = "\ls\core\addons\characters_clone_legacy\vests\forceRecon\ls_gar_forceReconLieutenant_vest.p3d";
			containerClass = "Supply80";
			hiddenSelections[] = {"camo1", "camo2"};
			mass = 80;
			vestType = "Rebreather";

			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 8;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 8;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 15;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 10;
					passThrough = 0.3;
				};
			};
		};
	};
	// Aviation Accessories
	class JA_104th_P2_Pilot_officer_Vest : ls_gar_officer_vest
	{
		author = "Dak";
		displayName = "Clone Pilot Officer Vest (104th [1C])";
		hiddenSelections[] =
			{
				"camo1"};
		hiddenSelectionsTextures[] =
			{
				"104thPhantomCompany\data\Textures\104th_Officer_Accessories_P2_Aviation.paa"};
		class ItemInfo : ItemInfo
		{
			containerClass = "Supply80";
			vestType = "Rebreather";

			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 8;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 8;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 15;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 10;
					passThrough = 0.3;
				};
			};
		};
	};
};

class CfgVehicles
{
	class lsd_gar_phase2_base;
	class lsd_gar_phase2_base;
	class ls_gar_marshalCommander_base;
	class ls_gar_standard_backpack;
	class ls_gar_rto_mini_backpack;
	class ls_gar_heavy_backpack;
	class ls_gar_medic_backpack;
	class ls_gar_Radio_backpack;
	class EG_InvisBagMain;

	class JA_104th_Base_CT : lsd_gar_phase2_base
	{
		author = "Ice";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_Base_CT_Uniform";
		displayName = "104th CT";
		faction = "104th_Guys";
		editorSubcategory = "104th_categ_clones";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"104thPhantomCompany\data\Textures\104th_P2_1C_Infantry_Upper.paa", "104thPhantomCompany\data\Textures\104th_P2_1C_Infantry_Lower.paa"};
		linkedItems[] = {JA_104th_Angel_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		// all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Angel_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_P2_1C_01_CT : lsd_gar_phase2_base
	{
		author = "Bulky & Cyan";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_P2_1C_01_CT_Uniform";
		displayName = "P2 1C Cerberus trooper";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Basic";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] =
			{
				"104thPhantomCompany\data\Textures\104th_P2_1C_01_CT_Upper.paa",
				"104thPhantomCompany\data\Textures\104th_P2_1C_01_CT_Lower.paa"};
		linkedItems[] = {JA_104th_P2_1C_CT_V1_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		  // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_P2_1C_CT_V1_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_P2_1C_02_CT : lsd_gar_phase2_base
	{
		author = "Bulky & Cyan";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_P2_1C_02_CT_Uniform";
		displayName = "P2 1C Warhawk trooper";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Basic";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] =
			{
				"104thPhantomCompany\data\Textures\104th_P2_1C_02_CT_Upper.paa",
				"104thPhantomCompany\data\Textures\104th_P2_1C_02_CT_Lower.paa"};
		linkedItems[] = {JA_104th_P2_1C_CT_V1_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		  // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_P2_1C_CT_V1_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_P2_1C_Engineer : lsd_gar_phase2_base
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_P2_1C_Engineer_Uniform";
		displayName = "104th 1C Engineer";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Basic";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] =
			{
				"104thPhantomCompany\data\Textures\104th_P2_1C_Engineer_Upper.paa",
				"104thPhantomCompany\data\Textures\104th_P2_1C_Engineer_Lower.paa"};
		linkedItems[] = {JA_104th_Engineer_1C_Base_Helmet, ls_gar_engineerNCO_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		 // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_Engineer_1C_Base_Helmet, ls_gar_engineerNCO_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_P2_1C_Medic : lsd_gar_phase2_base
	{
		author = "Dak";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 1;
		displayName = "104th P2 1C Medic";
		uniformClass = "JA_104th_P2_1C_Medic_Uniform";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Basic";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] =
			{
				"104thPhantomCompany\data\Textures\104th_P2_1C_Infantry_Medic_Upper.paa",
				"104thPhantomCompany\data\Textures\104th_P2_1C_Infantry_Medic_Lower.paa"};
		linkedItems[] = {JA_104th_P2_1C_Medic_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		  // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_P2_1C_Medic_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_AB_1C_Medic : lsd_gar_phase2_base
	{
		author = "Dak";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 1;
		displayName = "104th AB 1C Medic";
		uniformClass = "JA_104th_AB_1C_Medic_Uniform";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Basic";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] =
			{
				"104thPhantomCompany\data\Textures\104th_P2_AB_1C_Medic_Upper.paa",
				"104thPhantomCompany\data\Textures\104th_P2_AB_1C_Medic_Lower.paa"};
		linkedItems[] = {JA_104th_P2_1C_Medic_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		  // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_P2_1C_Medic_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_P2_1C_JTAC : ls_gar_marshalCommander_base
	{
		author = "Ice";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_104th_P2_1C_JTAC_Uniform";
		displayName = "104th 1C JTAC";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Basic";
		hiddenSelections[] = {"camo1", "camo2", "biceps", "rank"};
		hiddenSelectionsTextures[] = {"104thPhantomCompany\data\Textures\104th_JTAC_Base_Upper.paa", "104thPhantomCompany\data\Textures\104th_JTAC_Base_Lower.paa", "104thPhantomCompany\data\Textures\104th_JTAC_Base_Upper.paa", ""};
		linkedItems[] = {JA_104th_JTAC_1C_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		  // all items that will be on unit
		respawnLinkedItems[] = {JA_104th_JTAC_1C_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
};

class CfgGroups
{
};
class CfgGlasses
{
	class JA_104th_P2_Magnum_Headware
	{
		author = "Dak";
		displayName = "Clone Airborne Satchel (104th Magnum)";
		descriptionUse = "give sachel";
		scope = 2;
		identityTypes[] = {};
		hiddenSelections[] = {"camo1", "camo2", "ammo", "pauldron"};
		hiddenSelectionsTextures[] =
			{
				"104thPhantomCompany\data\Textures\104th_AB_Magnum_Accesories_Heavy.paa", // Heavy
				"",
				"104thPhantomCompany\data\Textures\104th_AB_Magnum_Accesories_Heavy.paa" // Heavy
		};
		// model = "\ls\core\addons\characters_clone_legacy\vests\heavy\ls_gar_heavyAlt_vest.p3d";
		model = "\ls\core\addons\characters_clone_legacy\vests\airborne\ls_gar_airborne_vest.p3d";
	};
	// class JA_104th_ARC_Spectre_Headware
	// {
	// 	author = "Dak";
	// 	displayName = "Clone Trooper Officer Vest Reverse (104th Spectre)";
	//     descriptionUse = "Clone Trooper Officer Vest Reverse";
	//     scope = 2;
	//     identityTypes[] = {};
	//
	// 	hiddenSelectionsTextures[] = {"MRC\JLTS\characters\CloneArmor\data\Clone_vest_officer_co.paa"};
	//     model = "\MRC\JLTS\characters\CloneArmor\CloneVestOfficer2.p3d";
	// 	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestPauldron_ui_ca.paa";
	// };
}