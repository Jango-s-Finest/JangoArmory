#include "basicDefines_A3.hpp"
class DefaultEventhandlers;
class UniformSlotInfo;
class CfgPatches
{
	class Jangos_CIS
	{
		author = "Jango's Finest";
		requiredVersion = 0.1;
		requiredAddons[] = {"ls_Core"};
		units[] = {
			"JA_CIS_BX_Assassin",
			"JA_CIS_BX_Commando",
			"JA_CIS_B1_Marksman",
			"JA_CIS_B1_AA",
			"JA_CIS_B1_Heavy",
			"JA_CIS_B1_Base",
			"JA_CIS_B2_Base",
			"JA_CIS_Man_Black_01",
			"JA_CIS_Man_Black_02",
			"JA_CIS_Man_Black_03",
			"JA_CIS_Man_Black_04",
			"JA_CIS_Man_Black_05",
			"JA_CIS_Man_Woods_01",
			"JA_CIS_Man_Woods_02",
			"JA_CIS_Man_Woods_03",
			"JA_CIS_Man_Woods_04",
			"JA_CIS_Man_Woods_05"};
		weapons[] = {
			"U_O_R_Gorka_01_black_F",
			"U_O_R_Gorka_01_black_F",
			"JA_CIS_B1_Uniform",
			"JA_CIS_B2_Uniform"};
	};
};

class CfgFactionClasses
{
	class 104th_Guys_CIS
	{
		displayname = "Jango's Finest";
		priority = 1; // Position in list.scope = 2;
		side = 0;
		icon = "";
	};
};
class cfgEditorSubcategories
{
	class 104th_Categ_CIS_UW
	{
		displayname = "CIS - INF - under water";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
	};
	class 104th_Categ_Man_CIS
	{
		displayname = "CIS Human - INF";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
	};
};

class CfgWeapons
{
	class ls_droidHelmet_b1;
	class JA_CIS_B1_Helmet : ls_droidHelmet_b1{
		hiddenSelectionsTextures[] = {"\JangosArmory_CIS\data\textures\104th_B1_Aquatic_Upper.paa"};
	};

	class ItemInfo;
	class ls_droidUniform_b1;
	class ls_cis_b2Droid_uniform;
	class JA_CIS_B1_Uniform : ls_droidUniform_b1
	{
		author = "Dak";
		scope = 2;
		displayName = "Droid B1";
		hiddenSelectionsTextures[] = {"\JangosArmory_CIS\data\textures\104th_B1_Aquatic_Upper.paa","\JangosArmory_CIS\data\textures\104th_B1_Aquatic_Lower.paa"};
		class ItemInfo : ItemInfo{
			uniformClass = "JA_CIS_B1_Base";
		}
	};
	class JA_CIS_B2_Uniform : ls_cis_b2Droid_uniform
	{
		author = "Dak";
		scope = 2;
		displayName = "Droid B2";
		hiddenSelectionsTextures[] = {"\JangosArmory_CIS\data\textures\104th_B2_Aquatic_Arms.paa","\JangosArmory_CIS\data\textures\104th_B2_Aquatic_Legs.paa","\JangosArmory_CIS\data\textures\104th_B2_Aquatic_Torso.paa"};
	};

	class ls_weapon_e5;
	class ls_weapon_e5c;
	class ls_weapon_mercenarySniper_scoped;
	class BNA_KC_AquaB2Blaster;
	class JA_CIS_Weapon_E5 : ls_weapon_e5{
		magazines[] = {"JA_CIS_Weapon_E5_Mag"};
		canShootInWater = 1;
	};
	class JA_CIS_Weapon_E5C : ls_weapon_e5c{
		magazines[] = {"JA_CIS_Weapon_E5C_Mag"};
		canShootInWater = 1;
	};
	class JA_CIS_Weapon_mercenarySniper : ls_weapon_mercenarySniper_scoped{
		magazines[] = {"JA_CIS_Weapon_mercenarySniper_Mag"};
		canShootInWater = 1;
	};
	class JA_CIS_Weapon_B2_Blaster : BNA_KC_AquaB2Blaster{
		magazines[] = {"JA_CIS_Weapon_B2_Blaster_Mag"};
		canShootInWater = 1;
	};

};
class CfgMagazines{
	class ls_magazine_e5;
	class JA_CIS_Weapon_E5_Mag : ls_magazine_e5{
		ammo = "JA_CIS_Weapon_E5_Ammo";
	};
	class ls_magazine_mercenarySniper;
	class JA_CIS_Weapon_mercenarySniper_Mag : ls_magazine_mercenarySniper{
		ammo = "JA_CIS_Weapon_mercenarySniper_Ammo";
	};
	class ls_magazine_e5c;
	class JA_CIS_Weapon_E5C_Mag : ls_magazine_e5c{
		ammo = "JA_CIS_Weapon_E5C_Ammo";
	};
	class BNA_KC_Mag_60rnd_B2Blaster;
	class JA_CIS_Weapon_B2_Blaster_Mag : BNA_KC_Mag_60rnd_B2Blaster{
		ammo = "JA_CIS_Weapon_B2_Blaster_Ammo";
	};
};
class CfgAmmo{
	class ls_bullet_9mw_red;
	class JA_CIS_Weapon_E5_Ammo : ls_bullet_9mw_red{
		waterEffectOffset = 0.8;
		waterFriction = -0.009;
	};
	class ls_bullet_22mw_yellow;
	class JA_CIS_Weapon_mercenarySniper_Ammo : ls_bullet_22mw_yellow{
		waterEffectOffset = 0.8;
		waterFriction = -0.009;
	};
	class ls_bullet_192mw_red;
	class JA_CIS_Weapon_E5C_Ammo : ls_bullet_192mw_red{
		waterEffectOffset = 0.8;
		waterFriction = -0.009;
	};
	class BNA_KC_Bullet_PlasmaRifle_Red;
	class JA_CIS_Weapon_B2_Blaster_Ammo : BNA_KC_Bullet_PlasmaRifle_Red{
		waterEffectOffset = 0.8;
		waterFriction = -0.009;
	};
};

class CfgVehicles
{
	class ls_droid_b2;
	class ls_droid_b1;
	class ls_droid_b1_heavy;
	class SWLB_b1_AA_base;
	class ls_droid_b1_marksman;
	class SWLB_BX_Assassin;
	class ls_droid_bx;
	class O_Survivor_F;
	class JA_CIS_BX_Assassin : SWLB_BX_Assassin
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_CIS_UW";
	};
	class JA_CIS_BX_Commando : ls_droid_bx
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_CIS_UW";
		respawnMagazines[] = {"JA_CIS_Weapon_E5_Mag","JA_CIS_Weapon_E5_Mag","JA_CIS_Weapon_E5_Mag","JA_CIS_Weapon_E5_Mag","JA_CIS_Weapon_E5_Mag","JA_CIS_Weapon_E5_Mag","JA_CIS_Weapon_E5_Mag","JA_CIS_Weapon_E5_Mag","JA_CIS_Weapon_E5_Mag","JA_CIS_Weapon_E5_Mag","JA_CIS_Weapon_E5_Mag","JA_CIS_Weapon_E5_Mag","SmokeShell","SmokeShell","Aux501_Weapons_Mags_Thermal_Detonator","Aux501_Weapons_Mags_Thermal_Detonator"};
		respawnWeapons[] = {"JA_CIS_Weapon_E5","Throw","Put"};
		magazines[] = {"JA_CIS_Weapon_E5_Mag","JA_CIS_Weapon_E5_Mag","JA_CIS_Weapon_E5_Mag","JA_CIS_Weapon_E5_Mag","JA_CIS_Weapon_E5_Mag","JA_CIS_Weapon_E5_Mag","JA_CIS_Weapon_E5_Mag","JA_CIS_Weapon_E5_Mag","JA_CIS_Weapon_E5_Mag","JA_CIS_Weapon_E5_Mag","JA_CIS_Weapon_E5_Mag","JA_CIS_Weapon_E5_Mag","SmokeShell","SmokeShell","Aux501_Weapons_Mags_Thermal_Detonator","Aux501_Weapons_Mags_Thermal_Detonator"};
		weapons[] = {"JA_CIS_Weapon_E5","Throw","Put"};
	};
	class JA_CIS_B1_Marksman : ls_droid_b1_marksman
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_CIS_UW";
		respawnLinkedItems[] = {"JA_CIS_B1_Helmet","JA_104th_Invisible_Base_Rebreather_Uniform","ItemMap","ItemCompass","ItemGPS","ItemWatch","ls_radios_dcs"};
		linkedItems[] = {"JA_CIS_B1_Helmet","JA_104th_Invisible_Base_Rebreather_Uniform","ItemMap","ItemCompass","ItemGPS","ItemWatch","ls_radios_dcs"};
		respawnMagazines[] = {"JA_CIS_Weapon_mercenarySniper_Mag","JA_CIS_Weapon_mercenarySniper_Mag","JA_CIS_Weapon_mercenarySniper_Mag","JA_CIS_Weapon_mercenarySniper_Mag","JA_CIS_Weapon_mercenarySniper_Mag","JA_CIS_Weapon_mercenarySniper_Mag","JA_CIS_Weapon_mercenarySniper_Mag","JA_CIS_Weapon_mercenarySniper_Mag","JA_CIS_Weapon_mercenarySniper_Mag","SmokeShell","SmokeShell","Aux501_Weapons_Mags_Thermal_Detonator","Aux501_Weapons_Mags_Thermal_Detonator"};
		respawnweapons[] = {"JA_CIS_Weapon_mercenarySniper","Throw","Put"};
		magazines[] = {"JA_CIS_Weapon_mercenarySniper_Mag","JA_CIS_Weapon_mercenarySniper_Mag","JA_CIS_Weapon_mercenarySniper_Mag","JA_CIS_Weapon_mercenarySniper_Mag","JA_CIS_Weapon_mercenarySniper_Mag","JA_CIS_Weapon_mercenarySniper_Mag","JA_CIS_Weapon_mercenarySniper_Mag","JA_CIS_Weapon_mercenarySniper_Mag","JA_CIS_Weapon_mercenarySniper_Mag","SmokeShell","SmokeShell","Aux501_Weapons_Mags_Thermal_Detonator","Aux501_Weapons_Mags_Thermal_Detonator"};
		weapons[] = {"JA_CIS_Weapon_mercenarySniper","Throw","Put"};
		hiddenSelectionsTextures[] = {"\JangosArmory_CIS\data\textures\104th_B1_Aquatic_Upper.paa","\JangosArmory_CIS\data\textures\104th_B1_Aquatic_Lower.paa"};
		uniformClass = "JA_CIS_B1_Uniform";
	};
	class JA_CIS_B1_AA : SWLB_b1_AA_base
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_CIS_UW";
	};
	class JA_CIS_B1_Heavy : ls_droid_b1_heavy
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_CIS_UW";
		respawnLinkedItems[] = {"JA_CIS_B1_Helmet","JA_104th_Invisible_Base_Rebreather_Uniform","ItemMap","ItemCompass","ItemGPS","ItemWatch","ls_radios_dcs"};
		linkedItems[] = {"JA_CIS_B1_Helmet","JA_104th_Invisible_Base_Rebreather_Uniform","ItemMap","ItemCompass","ItemGPS","ItemWatch","ls_radios_dcs"};
		respawnMagazines[] = {"JA_CIS_Weapon_E5C_Mag","JA_CIS_Weapon_E5C_Mag","JA_CIS_Weapon_E5C_Mag","JA_CIS_Weapon_E5C_Mag","JA_CIS_Weapon_E5C_Mag","JA_CIS_Weapon_E5C_Mag","JA_CIS_Weapon_E5C_Mag","JA_CIS_Weapon_E5C_Mag","JA_CIS_Weapon_E5C_Mag","JA_CIS_Weapon_E5C_Mag","JA_CIS_Weapon_E5C_Mag","JA_CIS_Weapon_E5C_Mag","SmokeShell","SmokeShell","Aux501_Weapons_Mags_Thermal_Detonator","Aux501_Weapons_Mags_Thermal_Detonator"};
		respawnWeapons[] = {"JA_CIS_Weapon_E5C","Throw","Put"};
		magazines[] = {"JA_CIS_Weapon_E5C_Mag","JA_CIS_Weapon_E5C_Mag","JA_CIS_Weapon_E5C_Mag","JA_CIS_Weapon_E5C_Mag","JA_CIS_Weapon_E5C_Mag","JA_CIS_Weapon_E5C_Mag","JA_CIS_Weapon_E5C_Mag","JA_CIS_Weapon_E5C_Mag","JA_CIS_Weapon_E5C_Mag","JA_CIS_Weapon_E5C_Mag","JA_CIS_Weapon_E5C_Mag","JA_CIS_Weapon_E5C_Mag","SmokeShell","SmokeShell","Aux501_Weapons_Mags_Thermal_Detonator","Aux501_Weapons_Mags_Thermal_Detonator"};
		weapons[] = {"JA_CIS_Weapon_E5C","Throw","Put"};
		hiddenSelectionsTextures[] = {"\JangosArmory_CIS\data\textures\104th_B1_Aquatic_Upper.paa","\JangosArmory_CIS\data\textures\104th_B1_Aquatic_Lower.paa"};
		uniformClass = "JA_CIS_B1_Uniform";
	};
	class JA_CIS_B1_Base : ls_droid_b1
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_CIS_UW";
		respawnLinkedItems[] = {"JA_CIS_B1_Helmet","JA_104th_Invisible_Base_Rebreather_Uniform","ItemMap","ItemCompass","ItemGPS","ItemWatch","ls_radios_dcs"};
		linkedItems[] = {"JA_CIS_B1_Helmet","JA_104th_Invisible_Base_Rebreather_Uniform","ItemMap","ItemCompass","ItemGPS","ItemWatch","ls_radios_dcs"};
		respawnMagazines[] = {"JA_CIS_Weapon_E5_Mag","JA_CIS_Weapon_E5_Mag","JA_CIS_Weapon_E5_Mag","JA_CIS_Weapon_E5_Mag","JA_CIS_Weapon_E5_Mag","JA_CIS_Weapon_E5_Mag","JA_CIS_Weapon_E5_Mag","JA_CIS_Weapon_E5_Mag","JA_CIS_Weapon_E5_Mag","JA_CIS_Weapon_E5_Mag","JA_CIS_Weapon_E5_Mag","JA_CIS_Weapon_E5_Mag","SmokeShell","SmokeShell","Aux501_Weapons_Mags_Thermal_Detonator","Aux501_Weapons_Mags_Thermal_Detonator"};
		respawnWeapons[] = {"JA_CIS_Weapon_E5","Throw","Put"};
		magazines[] = {"JA_CIS_Weapon_E5_Mag","JA_CIS_Weapon_E5_Mag","JA_CIS_Weapon_E5_Mag","JA_CIS_Weapon_E5_Mag","JA_CIS_Weapon_E5_Mag","JA_CIS_Weapon_E5_Mag","JA_CIS_Weapon_E5_Mag","JA_CIS_Weapon_E5_Mag","JA_CIS_Weapon_E5_Mag","JA_CIS_Weapon_E5_Mag","JA_CIS_Weapon_E5_Mag","JA_CIS_Weapon_E5_Mag","SmokeShell","SmokeShell","Aux501_Weapons_Mags_Thermal_Detonator","Aux501_Weapons_Mags_Thermal_Detonator"};
		weapons[] = {"JA_CIS_Weapon_E5","Throw","Put"};
		hiddenSelectionsTextures[] = {"\JangosArmory_CIS\data\textures\104th_B1_Aquatic_Upper.paa","\JangosArmory_CIS\data\textures\104th_B1_Aquatic_Lower.paa"};
		uniformClass = "JA_CIS_B1_Uniform";
	};
	class JA_CIS_B2_Base : ls_droid_b2
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_CIS_UW";
		respawnLinkedItems[] = {"JA_104th_Invisible_Base_Rebreather_Uniform","ItemMap","ItemCompass","ItemGPS","ItemWatch","ls_radios_dcs"};
		linkedItems[] = {"JA_104th_Invisible_Base_Rebreather_Uniform","ItemMap","ItemCompass","ItemGPS","ItemWatch","ls_radios_dcs"};
		respawnMagazines[] = {"JA_CIS_Weapon_B2_Blaster_Mag","JA_CIS_Weapon_B2_Blaster_Mag","JA_CIS_Weapon_B2_Blaster_Mag","JA_CIS_Weapon_B2_Blaster_Mag","JA_CIS_Weapon_B2_Blaster_Mag","JA_CIS_Weapon_B2_Blaster_Mag","JA_CIS_Weapon_B2_Blaster_Mag","JA_CIS_Weapon_B2_Blaster_Mag","SmokeShell","SmokeShell","Aux501_Weapons_Mags_Thermal_Detonator","Aux501_Weapons_Mags_Thermal_Detonator"};
		respawnWeapons[] = {"JA_CIS_Weapon_B2_Blaster","Throw","Put"};
		magazines[] = {"JA_CIS_Weapon_B2_Blaster_Mag","JA_CIS_Weapon_B2_Blaster_Mag","JA_CIS_Weapon_B2_Blaster_Mag","JA_CIS_Weapon_B2_Blaster_Mag","JA_CIS_Weapon_B2_Blaster_Mag","JA_CIS_Weapon_B2_Blaster_Mag","JA_CIS_Weapon_B2_Blaster_Mag","JA_CIS_Weapon_B2_Blaster_Mag","SmokeShell","SmokeShell","Aux501_Weapons_Mags_Thermal_Detonator","Aux501_Weapons_Mags_Thermal_Detonator"};
		weapons[] = {"JA_CIS_Weapon_B2_Blaster","Throw","Put"};
		hiddenSelectionsTextures[] = {"\JangosArmory_CIS\data\textures\104th_B2_Aquatic_Arms.paa","\JangosArmory_CIS\data\textures\104th_B2_Aquatic_Legs.paa","\JangosArmory_CIS\data\textures\104th_B2_Aquatic_Torso.paa"};
		uniformClass = "JA_CIS_B2_Uniform";
	};
	class JA_CIS_Man_Black_01 : O_Survivor_F
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_Man_CIS";
		displayName = "CIS Base Man Westar";
		backpack = "B_ViperHarness_blk_F";
		uniformClass = "U_O_R_Gorka_01_black_F";
		items[] = {
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			3AS_BaridumCore,
			3AS_BaridumCore,
			3AS_BaridumCore,
			3AS_BaridumCore,
			3AS_BaridumCore,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			JLTS_credits_50,
			JLTS_credits_50,
			JLTS_credits_10,
			JLTS_credits_10,
			ACE_tourniquet,
			ACE_tourniquet,
			ACE_tourniquet,
			ACE_tourniquet,
			212th_ACE_Painkiller,
			212th_ACE_Painkiller,
			212th_ACE_Painkiller,
			212th_ACE_Painkiller,
			212th_ACE_Painkiller,
			Laserbatteries,
		};
		linkeditems[] = {
			SWLW_Westar35S_scope,
			OPTRE_UNSC_CH252D_Helmet,
			G_AirPurifyingRespirator_02_black_F,
			ItemMap,
			ItemCompass,
			ItemWatch,
			JLTS_droid_comlink,
			ItemGPS,
			JLTS_NVG_droid_chip_2,
			JLTS_DroidBinocular,
			lsd_orsf_trooperAlt_vest,
		};
		magazines[] = {
			SWLW_Westar35S_Mag,
			SWLW_Westar35S_Mag,
			SWLW_Westar35S_Mag,
			SWLW_Westar35S_Mag,
			SWLW_Westar35S_Mag,
			SWLW_Westar35S_Mag,
			SWLW_Westar35S_Mag,
			SWLW_Westar35S_Mag,
			SWLW_Westar35S_Mag,
			SWLW_Westar35S_Mag,
			SWLW_Westar35S_Mag,
			SWLW_Westar35S_scatter_Mag,
			SWLW_Westar35S_scatter_Mag,
		};
		weapons[] = {ls_weapon_westar35s_primary, "Throw", "Put"};
	};
	class JA_CIS_Man_Black_02 : O_Survivor_F
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_Man_CIS";
		displayName = "CIS Base Man E5C";
		backpack = "B_ViperHarness_blk_F";
		uniformClass = "U_O_R_Gorka_01_black_F";
		items[] = {
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			3AS_BaridumCore,
			3AS_BaridumCore,
			3AS_BaridumCore,
			3AS_BaridumCore,
			3AS_BaridumCore,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			JLTS_credits_50,
			JLTS_credits_50,
			JLTS_credits_10,
			JLTS_credits_10,
			ACE_tourniquet,
			ACE_tourniquet,
			ACE_tourniquet,
			ACE_tourniquet,
			212th_ACE_Painkiller,
			212th_ACE_Painkiller,
			212th_ACE_Painkiller,
			212th_ACE_Painkiller,
			212th_ACE_Painkiller,
			Laserbatteries,
		};
		linkeditems[] = {
			G_AirPurifyingRespirator_02_black_F, ItemMap, ItemCompass, ItemWatch, JLTS_droid_comlink, ItemGPS, JLTS_NVG_droid_chip_2,
			JLTS_DroidBinocular,
			lsd_orsf_trooperAlt_vest, // vest
			OPTRE_UNSC_CH252D_Helmet  // helmet
		};
		magazines[] = {
			JLTS_E5C_mag,
			JLTS_E5C_mag,
			JLTS_E5C_mag,
			JLTS_E5C_mag,
			JLTS_E5C_mag,
			JLTS_E5C_mag,
			JLTS_E5C_mag,
			JLTS_E5C_mag,
			JLTS_E5C_mag,
			JLTS_E5C_mag,
			JLTS_E5C_mag,
		};
		weapons[] = {JLTS_E5C_stock, "Throw", "Put"};
	};
	class JA_CIS_Man_Black_03 : O_Survivor_F
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_Man_CIS";
		displayName = "CIS Base Man Westar Barret";
		backpack = "B_ViperHarness_blk_F";
		uniformClass = "U_O_R_Gorka_01_black_F";
		items[] = {
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			3AS_BaridumCore,
			3AS_BaridumCore,
			3AS_BaridumCore,
			3AS_BaridumCore,
			3AS_BaridumCore,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			JLTS_credits_50,
			JLTS_credits_50,
			JLTS_credits_10,
			JLTS_credits_10,
			ACE_tourniquet,
			ACE_tourniquet,
			ACE_tourniquet,
			ACE_tourniquet,
			212th_ACE_Painkiller,
			212th_ACE_Painkiller,
			212th_ACE_Painkiller,
			212th_ACE_Painkiller,
			212th_ACE_Painkiller,
			Laserbatteries,
		};
		linkeditems[] = {
			SWLW_Westar35S_scope,
			H_Beret_gen_F,
			G_AirPurifyingRespirator_02_black_F,
			ItemMap,
			ItemCompass,
			ItemWatch,
			JLTS_droid_comlink,
			ItemGPS,
			JLTS_NVG_droid_chip_2,
			JLTS_DroidBinocular,
			lsd_orsf_trooperAlt_vest,
		};
		magazines[] = {
			SWLW_Westar35S_Mag,
			SWLW_Westar35S_Mag,
			SWLW_Westar35S_Mag,
			SWLW_Westar35S_Mag,
			SWLW_Westar35S_Mag,
			SWLW_Westar35S_Mag,
			SWLW_Westar35S_Mag,
			SWLW_Westar35S_Mag,
			SWLW_Westar35S_Mag,
			SWLW_Westar35S_Mag,
			SWLW_Westar35S_Mag,
			SWLW_Westar35S_scatter_Mag,
			SWLW_Westar35S_scatter_Mag,
		};
		weapons[] = {ls_weapon_westar35s_primary, "Throw", "Put"};
	};
	class JA_CIS_Man_Black_04 : O_Survivor_F
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_Man_CIS";
		displayName = "CIS Base Man E5C RP6";
		backpack = "B_ViperHarness_blk_F";
		uniformClass = "U_O_R_Gorka_01_black_F";
		items[] = {
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			3AS_BaridumCore,
			3AS_BaridumCore,
			3AS_BaridumCore,
			3AS_BaridumCore,
			3AS_BaridumCore,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			JLTS_credits_50,
			JLTS_credits_50,
			JLTS_credits_10,
			JLTS_credits_10,
			ACE_tourniquet,
			ACE_tourniquet,
			ACE_tourniquet,
			ACE_tourniquet,
			212th_ACE_Painkiller,
			212th_ACE_Painkiller,
			212th_ACE_Painkiller,
			212th_ACE_Painkiller,
			212th_ACE_Painkiller,
			Laserbatteries,
		};
		linkeditems[] = {
			G_AirPurifyingRespirator_02_black_F, ItemMap, ItemCompass, ItemWatch, JLTS_droid_comlink, ItemGPS, JLTS_NVG_droid_chip_2,
			JLTS_DroidBinocular,
			lsd_orsf_trooperAlt_vest, // vest
			OPTRE_UNSC_CH252D_Helmet  // helmet
		};
		magazines[] = {
			JLTS_RPS6_mag,
			JLTS_RPS6_mag,
			JLTS_RPS6_HE_mag,
			JLTS_E5C_mag,
			JLTS_E5C_mag,
			JLTS_E5C_mag,
			JLTS_E5C_mag,
			JLTS_E5C_mag,
			JLTS_E5C_mag,
			JLTS_E5C_mag,
			JLTS_E5C_mag,
			JLTS_E5C_mag,
			JLTS_E5C_mag,
			JLTS_E5C_mag,
		};
		weapons[] = {JLTS_E5C_stock, JLTS_RPS6, "Throw", "Put"};
	};
	class JA_CIS_Man_Black_05 : O_Survivor_F
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_Man_CIS";
		displayName = "CIS Base Man DW32S";
		backpack = "B_ViperHarness_blk_F";
		uniformClass = "U_O_R_Gorka_01_black_F";
		items[] = {
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			3AS_BaridumCore,
			3AS_BaridumCore,
			3AS_BaridumCore,
			3AS_BaridumCore,
			3AS_BaridumCore,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			JLTS_credits_50,
			JLTS_credits_50,
			JLTS_credits_10,
			JLTS_credits_10,
			ACE_tourniquet,
			ACE_tourniquet,
			ACE_tourniquet,
			ACE_tourniquet,
			212th_ACE_Painkiller,
			212th_ACE_Painkiller,
			212th_ACE_Painkiller,
			212th_ACE_Painkiller,
			212th_ACE_Painkiller,
			Laserbatteries,
		};
		linkeditems[] = {
			SWLW_Westar35S_scope,
			OPTRE_UNSC_CH252D_Helmet,
			G_AirPurifyingRespirator_02_black_F,
			ItemMap,
			ItemCompass,
			ItemWatch,
			JLTS_droid_comlink,
			ItemGPS,
			JLTS_NVG_droid_chip_2,
			JLTS_DroidBinocular,
			lsd_orsf_trooperAlt_vest,
		};
		magazines[] = {
			JLTS_DW32S_mag,
			JLTS_DW32S_mag,
			JLTS_DW32S_mag,
			JLTS_DW32S_mag,
			JLTS_DW32S_mag,
			JLTS_DW32S_mag,
			JLTS_DW32S_mag,
			JLTS_DW32S_mag,
			JLTS_DW32S_mag,
			JLTS_DW32S_mag,
			JLTS_DW32S_mag,
			JLTS_stun_mag_short,
			JLTS_stun_mag_short,
		};
		weapons[] = {JLTS_DW32S, "Throw", "Put"};
	} class JA_CIS_Man_Woods_01 : O_Survivor_F
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_Man_CIS";
		displayName = "CIS Wood Man E5C";
		backpack = "B_Kitbag_rgr";
		uniformClass = "U_O_FullGhillie_lsh";
		items[] = {
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			3AS_BaridumCore,
			3AS_BaridumCore,
			3AS_BaridumCore,
			3AS_BaridumCore,
			3AS_BaridumCore,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			JLTS_credits_50,
			JLTS_credits_50,
			JLTS_credits_10,
			JLTS_credits_10,
			ACE_tourniquet,
			ACE_tourniquet,
			ACE_tourniquet,
			ACE_tourniquet,
			212th_ACE_Painkiller,
			212th_ACE_Painkiller,
			212th_ACE_Painkiller,
			212th_ACE_Painkiller,
			212th_ACE_Painkiller,
			Laserbatteries,
		};
		linkeditems[] = {
			SWLW_Westar35S_scope,
			H_HelmetB_light_grass,
			G_AirPurifyingRespirator_02_black_F,
			ItemMap,
			ItemCompass,
			ItemWatch,
			JLTS_droid_comlink,
			ItemGPS,
			JLTS_NVG_droid_chip_2,
			JLTS_DroidBinocular,
			lsd_orsf_trooperAlt_vest,
		};
		magazines[] = {
			JLTS_E5C_mag,
			JLTS_E5C_mag,
			JLTS_E5C_mag,
			JLTS_E5C_mag,
			JLTS_E5C_mag,
			JLTS_E5C_mag,
			JLTS_E5C_mag,
			JLTS_E5C_mag,
			JLTS_E5C_mag,
			JLTS_E5C_mag,
			JLTS_E5C_mag,
		};
		weapons[] = {JLTS_E5C_stock, "Throw", "Put"};
	};
	class JA_CIS_Man_Woods_02 : O_Survivor_F
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_Man_CIS";
		displayName = "CIS Wood Man E5";
		backpack = "B_ViperHarness_blk_F";
		uniformClass = "U_O_T_FullGhillie_tna_F";
		items[] = {
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			3AS_BaridumCore,
			3AS_BaridumCore,
			3AS_BaridumCore,
			3AS_BaridumCore,
			3AS_BaridumCore,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			JLTS_credits_50,
			JLTS_credits_50,
			JLTS_credits_10,
			JLTS_credits_10,
			ACE_tourniquet,
			ACE_tourniquet,
			ACE_tourniquet,
			ACE_tourniquet,
			212th_ACE_Painkiller,
			212th_ACE_Painkiller,
			212th_ACE_Painkiller,
			212th_ACE_Painkiller,
			212th_ACE_Painkiller,
			Laserbatteries,
		};
		linkeditems[] = {
			G_AirPurifyingRespirator_02_black_F, ItemMap, ItemCompass, ItemWatch, JLTS_droid_comlink, ItemGPS, JLTS_NVG_droid_chip_2,
			JLTS_DroidBinocular,
			lsd_orsf_trooperAlt_vest, // vest
			H_HelmetSpecB_blk		  // helmet
		};
		magazines[] = {
			JLTS_E5_mag,
			JLTS_E5_mag,
			JLTS_E5_mag,
			JLTS_E5_mag,
			JLTS_E5_mag,
			JLTS_E5_mag,
			JLTS_E5_mag,
			JLTS_E5_mag,
			JLTS_E5_mag,
			JLTS_E5_mag,
			JLTS_E5_mag,
		};
		weapons[] = {JLTS_E5, WBK_brush_axe, "Throw", "Put"};
	};
	class JA_CIS_Man_Woods_03 : O_Survivor_F
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_Man_CIS";
		displayName = "CIS Wood Man Westar C";
		backpack = "B_Kitbag_rgr";
		uniformClass = "U_BG_Guerrilla_6_1";
		items[] = {
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			3AS_BaridumCore,
			3AS_BaridumCore,
			3AS_BaridumCore,
			3AS_BaridumCore,
			3AS_BaridumCore,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			JLTS_credits_50,
			JLTS_credits_50,
			JLTS_credits_10,
			JLTS_credits_10,
			ACE_tourniquet,
			ACE_tourniquet,
			ACE_tourniquet,
			ACE_tourniquet,
			212th_ACE_Painkiller,
			212th_ACE_Painkiller,
			212th_ACE_Painkiller,
			212th_ACE_Painkiller,
			212th_ACE_Painkiller,
			Laserbatteries,
		};
		linkeditems[] = {
			SWLW_Westar35S_scope,
			H_Bandanna_camo,
			G_Bandanna_aviator,
			ItemMap,
			ItemCompass,
			ItemWatch,
			JLTS_droid_comlink,
			ItemGPS,
			JLTS_NVG_droid_chip_2,
			JLTS_DroidBinocular,
			lsd_orsf_trooperAlt_vest,
		};
		magazines[] = {
			SWLW_westar35c_Mag,
			SWLW_westar35c_Mag,
			SWLW_westar35c_Mag,
			SWLW_westar35c_Mag,
			SWLW_westar35c_Mag,
			SWLW_westar35c_Mag,
			SWLW_westar35c_Mag,
			SWLW_westar35c_Mag,
			SWLW_westar35c_Mag,
			SWLW_westar35c_Mag,
			SWLW_westar35c_Mag,
		};
		weapons[] = {ls_weapon_westar35c_primary, "Throw", "Put"};
	};
	class JA_CIS_Man_Woods_04 : O_Survivor_F
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_Man_CIS";
		displayName = "CIS Wood Man Westar S";
		backpack = "B_ViperHarness_blk_F";
		uniformClass = "U_BG_leader";
		items[] = {
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			3AS_BaridumCore,
			3AS_BaridumCore,
			3AS_BaridumCore,
			3AS_BaridumCore,
			3AS_BaridumCore,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			JLTS_credits_50,
			JLTS_credits_50,
			JLTS_credits_10,
			JLTS_credits_10,
			ACE_tourniquet,
			ACE_tourniquet,
			ACE_tourniquet,
			ACE_tourniquet,
			212th_ACE_Painkiller,
			212th_ACE_Painkiller,
			212th_ACE_Painkiller,
			212th_ACE_Painkiller,
			212th_ACE_Painkiller,
			Laserbatteries,
		};
		linkeditems[] = {
			G_RegulatorMask_F, ItemMap, ItemCompass, ItemWatch, JLTS_droid_comlink, ItemGPS, JLTS_NVG_droid_chip_2,
			JLTS_DroidBinocular,
			lsd_orsf_trooperAlt_vest, // vest
			H_HelmetB_light_black	  // helmet
		};
		magazines[] = {
			SWLW_Westar35S_Mag,
			SWLW_Westar35S_Mag,
			SWLW_Westar35S_Mag,
			SWLW_Westar35S_Mag,
			SWLW_Westar35S_Mag,
			SWLW_Westar35S_Mag,
			SWLW_Westar35S_Mag,
			SWLW_Westar35S_Mag,
			SWLW_Westar35S_Mag,
			SWLW_Westar35S_Mag,
			SWLW_Westar35S_Mag,
			SWLW_Westar35S_scatter_Mag,
			SWLW_Westar35S_scatter_Mag,
			SWLW_Westar35S_scatter_Mag,
		};
		weapons[] = {SWLW_Westar35S, "Throw", "Put"};
	};
	class JA_CIS_Man_Woods_05 : O_Survivor_F
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_Man_CIS";
		displayName = "CIS Wood Man DC15X";
		backpack = "B_ViperHarness_blk_F";
		uniformClass = "U_O_T_FullGhillie_tna_F";
		items[] = {
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			OPTRE_M2_Smoke,
			3AS_BaridumCore,
			3AS_BaridumCore,
			3AS_BaridumCore,
			3AS_BaridumCore,
			3AS_BaridumCore,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_fieldDressing,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			ACE_packingBandage,
			JLTS_credits_50,
			JLTS_credits_50,
			JLTS_credits_10,
			JLTS_credits_10,
			ACE_tourniquet,
			ACE_tourniquet,
			ACE_tourniquet,
			ACE_tourniquet,
			212th_ACE_Painkiller,
			212th_ACE_Painkiller,
			212th_ACE_Painkiller,
			212th_ACE_Painkiller,
			212th_ACE_Painkiller,
			Laserbatteries,
		};
		linkeditems[] = {
			JLTS_DC15X_scope,
			OPTRE_UNSC_CH252D_Helmet,
			G_AirPurifyingRespirator_02_black_F,
			ItemMap,
			ItemCompass,
			ItemWatch,
			JLTS_droid_comlink,
			ItemGPS,
			JLTS_NVG_droid_chip_2,
			JLTS_DroidBinocular,
			lsd_orsf_trooperAlt_vest,
		};
		magazines[] = {
			JLTS_DC15X_mag,
			JLTS_DC15X_mag,
			JLTS_DC15X_mag,
			JLTS_DC15X_mag,
			JLTS_DC15X_mag,
			JLTS_DC15X_mag,
			JLTS_DC15X_mag,
			JLTS_DC15X_mag,
			JLTS_DC15X_mag,
			JLTS_DC15X_mag,
			JLTS_DC15X_mag,
		};
		weapons[] = {JLTS_DC15X, "Throw", "Put"};
	}
};

class CfgGroups
{
	class East
	{
		class JA_Opfor
		{
			name = "Jango's Finest";
			class JA_Opfor_Droid_Groups
			{
				name = "Droid infantry";
				class JA_Group_B2_Team
				{
					name = "B2 - Team";
					side = 0;
					class Unit0
					{
						vehicle = "JA_CIS_B2_Base";
						rank = "CORPORAL";
						position[] = {0, 0, 0};
						side = 0;
					};
					class Unit1
					{
						vehicle = "JA_CIS_B2_Base";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
						side = 0;
					};
				};
				class JA_Group_BX_Team
				{
					name = "BX - Team";
					side = 0;
					class Unit0
					{
						vehicle = "JA_CIS_BX_Commando";
						rank = "CORPORAL";
						position[] = {0, 0, 0};
						side = 0;
					};
					class Unit1
					{
						vehicle = "JA_CIS_BX_Commando";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
						side = 0;
					};
					class Unit2
					{
						vehicle = "JA_CIS_BX_Assassin";
						rank = "PRIVATE";
						position[] = {5, -5, 0};
						side = 0;
					};
				};
				class JA_Group_BX_Group
				{
					name = "BX - Group";
					side = 0;
					class Unit0
					{
						vehicle = "JA_CIS_BX_Commando";
						rank = "CORPORAL";
						position[] = {0, 0, 0};
						side = 0;
					};
					class Unit1
					{
						vehicle = "JA_CIS_BX_Commando";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
						side = 0;
					};
					class Unit2
					{
						vehicle = "JA_CIS_BX_Assassin";
						rank = "PRIVATE";
						position[] = {5, -5, 0};
						side = 0;
					};
					class Unit3
					{
						vehicle = "JA_CIS_BX_Commando";
						rank = "PRIVATE";
						position[] = {2, 2, 0};
						side = 0;
					};
					class Unit4
					{
						vehicle = "JA_CIS_BX_Commando";
						rank = "PRIVATE";
						position[] = {-2, -2, 0};
						side = 0;
					};
					class Unit5
					{
						vehicle = "JA_CIS_BX_Assassin";
						rank = "PRIVATE";
						position[] = {2, -2, 0};
						side = 0;
					};
				};
				class JA_Group_B1_Team
				{
					name = "B1 - Team";
					side = 0;
					class Unit0
					{
						vehicle = "JA_CIS_B1_Base";
						rank = "CORPORAL";
						position[] = {0, 0, 0};
						side = 0;
					};
					class Unit1
					{
						vehicle = "JA_CIS_B1_Base";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
						side = 0;
					};
					class Unit2
					{
						vehicle = "JA_CIS_B1_Heavy";
						rank = "PRIVATE";
						position[] = {5, -5, 0};
						side = 0;
					};
				};
				class JA_Group_B1_Group
				{
					name = "B1 - Group";
					side = 0;
					class Unit0
					{
						vehicle = "JA_CIS_B1_Base";
						rank = "CORPORAL";
						position[] = {0, 0, 0};
						side = 0;
					};
					class Unit1
					{
						vehicle = "JA_CIS_B1_Base";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
						side = 0;
					};
					class Unit2
					{
						vehicle = "JA_CIS_B1_Heavy";
						rank = "PRIVATE";
						position[] = {5, -5, 0};
						side = 0;
					};
					class Unit3
					{
						vehicle = "JA_CIS_B1_Marksman";
						rank = "PRIVATE";
						position[] = {2, 2, 0};
						side = 0;
					};
					class Unit4
					{
						vehicle = "JA_CIS_B1_Base";
						rank = "PRIVATE";
						position[] = {-2, -2, 0};
						side = 0;
					};
					class Unit5
					{
						vehicle = "JA_CIS_B1_Heavy";
						rank = "PRIVATE";
						position[] = {2, -2, 0};
						side = 0;
					};
				};
				class JA_Group_B1_Group_Basic
				{
					name = "B1 - Group Basic";
					side = 0;
					class Unit0
					{
						vehicle = "JA_CIS_B1_Base";
						rank = "CORPORAL";
						position[] = {0, 0, 0};
						side = 0;
					};
					class Unit1
					{
						vehicle = "JA_CIS_B1_Base";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
						side = 0;
					};
					class Unit2
					{
						vehicle = "JA_CIS_B1_Base";
						rank = "PRIVATE";
						position[] = {5, -5, 0};
						side = 0;
					};
					class Unit3
					{
						vehicle = "JA_CIS_B1_Base";
						rank = "PRIVATE";
						position[] = {2, 2, 0};
						side = 0;
					};
					class Unit4
					{
						vehicle = "JA_CIS_B1_Base";
						rank = "PRIVATE";
						position[] = {-2, -2, 0};
						side = 0;
					};
					class Unit5
					{
						vehicle = "JA_CIS_B1_Base";
						rank = "PRIVATE";
						position[] = {2, -2, 0};
						side = 0;
					};
				};
				class JA_Group_B2_B1_Team
				{
					name = "B1/B2 - Team";
					side = 0;
					class Unit0
					{
						vehicle = "JA_CIS_B1_Base";
						rank = "CORPORAL";
						position[] = {0, 0, 0};
						side = 0;
					};
					class Unit1
					{
						vehicle = "JA_CIS_B2_Base";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
						side = 0;
					};
					class Unit2
					{
						vehicle = "JA_CIS_B1_Heavy";
						rank = "PRIVATE";
						position[] = {5, -5, 0};
						side = 0;
					};
				};
				class JA_Group_B2_B1_Group
				{
					name = "B1/B2 - Group";
					side = 0;
					class Unit0
					{
						vehicle = "JA_CIS_B1_Base";
						rank = "CORPORAL";
						position[] = {0, 0, 0};
						side = 0;
					};
					class Unit1
					{
						vehicle = "JA_CIS_B1_Base";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
						side = 0;
					};
					class Unit2
					{
						vehicle = "JA_CIS_B1_Heavy";
						rank = "PRIVATE";
						position[] = {5, -5, 0};
						side = 0;
					};
					class Unit3
					{
						vehicle = "JA_CIS_B1_Marksman";
						rank = "PRIVATE";
						position[] = {2, 2, 0};
						side = 0;
					};
					class Unit4
					{
						vehicle = "JA_CIS_B2_Base";
						rank = "PRIVATE";
						position[] = {-2, -2, 0};
						side = 0;
					};
					class Unit5
					{
						vehicle = "JA_CIS_B1_Heavy";
						rank = "PRIVATE";
						position[] = {2, -2, 0};
						side = 0;
					};
				};
			};
			class JA_Opfor_Air_Groups
			{
				name = "Droid Aviation";
				class JA_Group_Vulture_Group
				{
					name = "Vulture - Group";
					side = 0;
					class Unit0
					{
						vehicle = "swop_vulture";
						rank = "CORPORAL";
						position[] = {0, 0, 0};
						side = 0;
					};
					class Unit1
					{
						vehicle = "swop_vulture";
						rank = "PRIVATE";
						position[] = {-15, -15, 0};
						side = 0;
					};
					class Unit2
					{
						vehicle = "swop_vulture";
						rank = "PRIVATE";
						position[] = {15, -15, 0};
						side = 0;
					};
					class Unit3
					{
						vehicle = "swop_vulture";
						rank = "PRIVATE";
						position[] = {30, 30, 0};
						side = 0;
					};
					class Unit4
					{
						vehicle = "swop_vulture";
						rank = "PRIVATE";
						position[] = {-30, -30, 0};
						side = 0;
					};
					class Unit5
					{
						vehicle = "swop_vulture";
						rank = "PRIVATE";
						position[] = {30, -30, 0};
						side = 0;
					};
				};
				class JA_Group_Hyena_Group
				{
					name = "Hyena - Group";
					side = 0;
					class Unit0
					{
						vehicle = "swop_hbomber";
						rank = "CORPORAL";
						position[] = {0, 0, 0};
						side = 0;
					};
					class Unit1
					{
						vehicle = "swop_hbomber";
						rank = "PRIVATE";
						position[] = {-15, -15, 0};
						side = 0;
					};
					class Unit2
					{
						vehicle = "swop_hbomber";
						rank = "PRIVATE";
						position[] = {15, -15, 0};
						side = 0;
					};
					class Unit3
					{
						vehicle = "swop_hbomber";
						rank = "PRIVATE";
						position[] = {30, 30, 0};
						side = 0;
					};
					class Unit4
					{
						vehicle = "swop_hbomber";
						rank = "PRIVATE";
						position[] = {-30, -30, 0};
						side = 0;
					};
					class Unit5
					{
						vehicle = "swop_hbomber";
						rank = "PRIVATE";
						position[] = {30, -30, 0};
						side = 0;
					};
				};
				class JA_Group_Gunship_Group
				{
					name = "Gunship - Group";
					side = 0;
					class Unit0
					{
						vehicle = "ls_cis_hmp";
						rank = "CORPORAL";
						position[] = {0, 0, 0};
						side = 0;
					};
					class Unit1
					{
						vehicle = "ls_cis_hmp";
						rank = "PRIVATE";
						position[] = {-15, -15, 0};
						side = 0;
					};
					class Unit2
					{
						vehicle = "ls_cis_hmp";
						rank = "PRIVATE";
						position[] = {15, -15, 0};
						side = 0;
					};
					class Unit3
					{
						vehicle = "ls_cis_hmp";
						rank = "PRIVATE";
						position[] = {30, 30, 0};
						side = 0;
					};
					class Unit4
					{
						vehicle = "ls_cis_hmp";
						rank = "PRIVATE";
						position[] = {-30, -30, 0};
						side = 0;
					};
					class Unit5
					{
						vehicle = "ls_cis_hmp";
						rank = "PRIVATE";
						position[] = {30, -30, 0};
						side = 0;
					};
				};
				class JA_Group_Mix_Air_Group
				{
					name = "Mix Air - Group";
					side = 0;
					class Unit0
					{
						vehicle = "ls_cis_hmp";
						rank = "CORPORAL";
						position[] = {0, 0, 0};
						side = 0;
					};
					class Unit1
					{
						vehicle = "ls_cis_hmp";
						rank = "PRIVATE";
						position[] = {-15, -15, 0};
						side = 0;
					};
					class Unit2
					{
						vehicle = "swop_vulture";
						rank = "PRIVATE";
						position[] = {15, -15, 0};
						side = 0;
					};
					class Unit3
					{
						vehicle = "swop_vulture";
						rank = "PRIVATE";
						position[] = {30, 30, 0};
						side = 0;
					};
					class Unit4
					{
						vehicle = "swop_hbomber";
						rank = "PRIVATE";
						position[] = {-30, -30, 0};
						side = 0;
					};
					class Unit5
					{
						vehicle = "swop_hbomber";
						rank = "PRIVATE";
						position[] = {30, -30, 0};
						side = 0;
					};
				};
			};
		};
	};
};
