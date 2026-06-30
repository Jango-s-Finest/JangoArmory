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
			"JA_CIS_BX_Assassin_UnderWater",
			"JA_CIS_BX_Commando_UnderWater",
			"JA_CIS_B1_Marksman_UnderWater",
			"JA_CIS_B1_AA_UnderWater",
			"JA_CIS_B1_Heavy_UnderWater",
			"JA_CIS_B1_Base_UnderWater",
			"JA_CIS_B2_Base_UnderWater",
			"JA_CIS_BX_Assassin",
			"JA_CIS_BX_Commando",
			"JA_CIS_B1_Marksman",
			"JA_CIS_B1_AA",
			"JA_CIS_B1_AT",
			"JA_CIS_BX_Magna",
			"JA_CIS_B1_Heavy",
			"JA_CIS_B1_Base",
			"JA_CIS_B2_Base",
			"JA_CIS_Advanced_DSD",
			"JA_CIS_GAT_Light",
			"JA_CIS_Heavy_AAT_Defoliator_F",
			"JA_CIS_HAGM_CIS",
			"JA_CIS_AAT",
			"JA_CIS_Hailfire_AT",
			"JA_CIS_Hailfire_SAM",
			"JA_CIS_Hailfire_ARTY",
			"JA_CIS_MTT",
			"JA_CIS_Octuptarra_Combat_F",
			"JA_CIS_Octuptarra_Magna_F",
			"JA_CIS_Octuptarra_Torpedo_F",
			"JA_CIS_Combat_Speeder_F",
			"JA_CIS_Fliknot_F",
			"JA_CIS_PAC_F",
			"JA_CIS_SAC_F",
			"JA_CIS_SAC_Repair_F",
			"JA_CIS_Heavy_AAT_Flamer_F",
			"JA_CIS_GAT",
			"JA_CIS_vehicle_agtRaptor",
			"JA_CIS_HMP_Transport",
			"JA_CIS_HMP_Gunship",
			"JA_CIS_Vulture_AA_F",
			"JA_CIS_Vulture_F",
			"JA_CIS_Vulture_CAS_F",
			"JA_CIS_vehicle_cisDropship",
			"JA_CIS_FlakCannon",
			"JA_CIS_Mortar",
			"JA_CIS_droid_droideka",
			"JA_CIS_Deka_Static",
			"JA_CIS_Deka_Static_Sniper",
			"JA_CIS_J1_Proton_Cannon",
			"JA_CIS_J1_Proton_Legged",
			"JA_CIS_J10s_F",
			"JA_CIS_OG9Turret",
			"JA_CIS_ParticleCannon",
			"JA_CIS_FieldCannon",
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
		displayname = "CIS - INF - UnderWater";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
	};
	class 104th_Categ_CIS
	{
		displayname = "CIS - INF - Normal";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
	};
	class 104th_Categ_CIS_Vehicle_Ground
	{
		displayname = "CIS - Vehicle - Ground";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
	};
	class 104th_Categ_CIS_Vehicle_Air
	{
		displayname = "CIS - Vehicle - Air";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
	};
	class 104th_Categ_CIS_Vehicle_Turrets
	{
		displayname = "CIS - Vehicle - Turrets";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
	};
	class 104th_Categ_CIS_Man
	{
		displayname = "CIS - Human - INF";
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
			uniformClass = "JA_CIS_B1_Base_UnderWater";
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
	class WBK_LS_B2;
	class ls_droid_b1;
	class ls_droid_b1_heavy;
	class ls_droid_b1_heavyAA;
	class ls_droid_b1_at;
	class ls_droid_b1_marksman;
	class WBK_LS_BX_Command;
	class WBK_LS_BX_Sniper;
	class O_Survivor_F;
	class 3AS_HMP_Transport;
	class 3AS_HMP_Gunship;
	class 3AS_CIS_Vulture_AA_F;
	class 3AS_CIS_Vulture_F;
	class 3AS_CIS_Vulture_CAS_F;
	class ls_vehicle_cisDropship;
	class 3as_FlakCannon;
	class 3as_CIS_Mortar;
	class ls_droid_droideka;
	class 3AS_Deka_Static;
	class 3AS_Deka_Static_Sniper;
	class 3AS_J1_Proton_Cannon;
	class 3AS_J1_Proton_Legged;
	class 3AS_J10s_F;
	class 3AS_OG9Turret;
	class 3as_ParticleCannon;
	class 3AS_FieldCannon;
	class 3AS_Advanced_DSD;
	class 3AS_GAT_Light;
	class 3AS_Heavy_AAT_Defoliator_F;
	class 3AS_HAGM_CIS;
	class 3AS_AAT;
	class 3AS_Hailfire_AT;
	class 3AS_Hailfire_SAM;
	class Aux501_Vehicles_Artillery_IG227_Hailfire;
	class 3as_MTT;
	class 3AS_Octuptarra_Combat_F;
	class 3AS_Octuptarra_Magna_F;
	class 3AS_Octuptarra_Torpedo_F;
	class 3AS_Combat_Speeder_F;
	class 3AS_Fliknot_F;
	class 3AS_PAC_F;
	class 3AS_SAC_F;
	class 3AS_SAC_Repair_F;
	class 3AS_Heavy_AAT_Flamer_F;
	class 3AS_GAT;
	class ls_vehicle_agtRaptor;
// 104th_Categ_CIS_UW
	class JA_CIS_BX_Assassin_UnderWater : WBK_LS_BX_Command
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_CIS_UW";
	};
	class JA_CIS_BX_Commando_UnderWater : WBK_LS_BX_Sniper
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
	class JA_CIS_B1_Marksman_UnderWater : ls_droid_b1_marksman
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
	class JA_CIS_B1_AA_UnderWater : ls_droid_b1_heavyAA
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_CIS_UW";
	};
	class JA_CIS_B1_Heavy_UnderWater : ls_droid_b1_heavy
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
	class JA_CIS_B1_Base_UnderWater : ls_droid_b1
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
	class JA_CIS_B2_Base_UnderWater : WBK_LS_B2
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
// 104th_Categ_CIS
	class JA_CIS_BX_Assassin : WBK_LS_BX_Command
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_CIS";
	};
	class JA_CIS_BX_Magna : WBK_LS_BX_Command
	{
		displayName = "BX Commando Magna";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_CIS";
		weapons[] = {"ls_weapon_e5","ls_weapon_electrostaff_black","Throw","Put"};
	};
	class JA_CIS_BX_Commando : WBK_LS_BX_Sniper
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_CIS";
	};
	class JA_CIS_B1_Marksman : ls_droid_b1_marksman
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_CIS";
	};
	class JA_CIS_B1_AA : ls_droid_b1_heavyAA
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_CIS";
	};
	class JA_CIS_B1_AT : ls_droid_b1_at
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_CIS";
	};
	class JA_CIS_B1_Heavy : ls_droid_b1_heavy
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_CIS";
	};
	class JA_CIS_B1_Base : ls_droid_b1
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_CIS";
	};
	class JA_CIS_B2_Base : WBK_LS_B2
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_CIS";
	};
// 104th_Categ_CIS_Vehicle_Ground
	class JA_CIS_Advanced_DSD : 3AS_Advanced_DSD
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_CIS_Vehicle_Ground";
	};
	class JA_CIS_GAT_Light : 3AS_GAT_Light
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_CIS_Vehicle_Ground";
	};
	class JA_CIS_Heavy_AAT_Defoliator_F : 3AS_Heavy_AAT_Defoliator_F
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_CIS_Vehicle_Ground";
	};
	class JA_CIS_HAGM_CIS : 3AS_HAGM_CIS
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_CIS_Vehicle_Ground";
	};
	class JA_CIS_AAT : 3AS_AAT
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_CIS_Vehicle_Ground";
	};
	class JA_CIS_Hailfire_AT : 3AS_Hailfire_AT
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_CIS_Vehicle_Ground";
	};
	class JA_CIS_Hailfire_SAM : 3AS_Hailfire_SAM
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_CIS_Vehicle_Ground";
	};
	class JA_CIS_Hailfire_ARTY : Aux501_Vehicles_Artillery_IG227_Hailfire
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_CIS_Vehicle_Ground";
	};
	class JA_CIS_MTT : 3as_MTT
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_CIS_Vehicle_Ground";
	};
	class JA_CIS_Octuptarra_Combat_F : 3AS_Octuptarra_Combat_F
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_CIS_Vehicle_Ground";
	};
	class JA_CIS_Octuptarra_Magna_F : 3AS_Octuptarra_Magna_F
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_CIS_Vehicle_Ground";
	};
	class JA_CIS_Octuptarra_Torpedo_F : 3AS_Octuptarra_Torpedo_F
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_CIS_Vehicle_Ground";
	};
	class JA_CIS_Combat_Speeder_F : 3AS_Combat_Speeder_F
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_CIS_Vehicle_Ground";
	};
	class JA_CIS_Fliknot_F : 3AS_Fliknot_F
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_CIS_Vehicle_Ground";
	};
	class JA_CIS_PAC_F : 3AS_PAC_F
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_CIS_Vehicle_Ground";
	};
	class JA_CIS_SAC_F : 3AS_SAC_F
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_CIS_Vehicle_Ground";
	};
	class JA_CIS_SAC_Repair_F : 3AS_SAC_Repair_F
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_CIS_Vehicle_Ground";
	};
	class JA_CIS_Heavy_AAT_Flamer_F : 3AS_Heavy_AAT_Flamer_F
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_CIS_Vehicle_Ground";
	};
	class JA_CIS_GAT : 3AS_GAT
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_CIS_Vehicle_Ground";
	};
	class JA_CIS_vehicle_agtRaptor : ls_vehicle_agtRaptor
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_CIS_Vehicle_Ground";
	};
// 104th_Categ_CIS_Vehicle_Air
	class JA_CIS_HMP_Transport : 3AS_HMP_Transport
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_CIS_Vehicle_Air";
	};
	class JA_CIS_HMP_Gunship : 3AS_HMP_Gunship
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_CIS_Vehicle_Air";
	};
	class JA_CIS_Vulture_AA_F : 3AS_CIS_Vulture_AA_F
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_CIS_Vehicle_Air";
	};
	class JA_CIS_Vulture_F : 3AS_CIS_Vulture_F
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_CIS_Vehicle_Air";
	};
	class JA_CIS_Vulture_CAS_F : 3AS_CIS_Vulture_CAS_F
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_CIS_Vehicle_Air";
	};
	class JA_CIS_vehicle_cisDropship : ls_vehicle_cisDropship
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_CIS_Vehicle_Air";
	};
// 104th_Categ_CIS_Vehicle_Turrets
	class JA_CIS_FlakCannon : 3as_FlakCannon
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_CIS_Vehicle_Turrets";
	};
	class JA_CIS_Mortar : 3as_CIS_Mortar
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_CIS_Vehicle_Turrets";
	};
	class JA_CIS_droid_droideka : ls_droid_droideka
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_CIS_Vehicle_Turrets";
	};
	class JA_CIS_Deka_Static : 3AS_Deka_Static
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_CIS_Vehicle_Turrets";
	};
	class JA_CIS_Deka_Static_Sniper : 3AS_Deka_Static_Sniper
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_CIS_Vehicle_Turrets";
	};
	class JA_CIS_J1_Proton_Cannon : 3AS_J1_Proton_Cannon
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_CIS_Vehicle_Turrets";
	};
	class JA_CIS_J1_Proton_Legged : 3AS_J1_Proton_Legged
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_CIS_Vehicle_Turrets";
	};
	class JA_CIS_J10s_F : 3AS_J10s_F
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_CIS_Vehicle_Turrets";
	};
	class JA_CIS_OG9Turret : 3AS_OG9Turret
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_CIS_Vehicle_Turrets";
	};
	class JA_CIS_ParticleCannon : 3as_ParticleCannon
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_CIS_Vehicle_Turrets";
	};
	class JA_CIS_FieldCannon : 3AS_FieldCannon
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_CIS_Vehicle_Turrets";
	};
// 104th_Categ_CIS_Man
	class JA_CIS_Man_Black_01 : O_Survivor_F
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_CIS_Man";
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
		editorSubcategory = "104th_Categ_CIS_Man";
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
		editorSubcategory = "104th_Categ_CIS_Man";
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
		editorSubcategory = "104th_Categ_CIS_Man";
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
		editorSubcategory = "104th_Categ_CIS_Man";
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
	};
	class JA_CIS_Man_Woods_01 : O_Survivor_F
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_CIS_Man";
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
		editorSubcategory = "104th_Categ_CIS_Man";
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
		editorSubcategory = "104th_Categ_CIS_Man";
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
		editorSubcategory = "104th_Categ_CIS_Man";
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
		editorSubcategory = "104th_Categ_CIS_Man";
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
			class JA_Opfor_Droid_Groups_UnderWater
			{
				name = "CIS - INF - UnderWater";
				class JA_Group_B2_Team
				{
					name = "B2 - Team";
					side = 0;
					class Unit0
					{
						vehicle = "JA_CIS_B2_Base_UnderWater";
						rank = "CORPORAL";
						position[] = {0, 0, 0};
						side = 0;
					};
					class Unit1
					{
						vehicle = "JA_CIS_B2_Base_UnderWater";
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
						vehicle = "JA_CIS_BX_Commando_UnderWater";
						rank = "CORPORAL";
						position[] = {0, 0, 0};
						side = 0;
					};
					class Unit1
					{
						vehicle = "JA_CIS_BX_Commando_UnderWater";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
						side = 0;
					};
					class Unit2
					{
						vehicle = "JA_CIS_BX_Assassin_UnderWater";
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
						vehicle = "JA_CIS_BX_Commando_UnderWater";
						rank = "CORPORAL";
						position[] = {0, 0, 0};
						side = 0;
					};
					class Unit1
					{
						vehicle = "JA_CIS_BX_Commando_UnderWater";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
						side = 0;
					};
					class Unit2
					{
						vehicle = "JA_CIS_BX_Assassin_UnderWater";
						rank = "PRIVATE";
						position[] = {5, -5, 0};
						side = 0;
					};
					class Unit3
					{
						vehicle = "JA_CIS_BX_Commando_UnderWater";
						rank = "PRIVATE";
						position[] = {2, 2, 0};
						side = 0;
					};
					class Unit4
					{
						vehicle = "JA_CIS_BX_Commando_UnderWater";
						rank = "PRIVATE";
						position[] = {-2, -2, 0};
						side = 0;
					};
					class Unit5
					{
						vehicle = "JA_CIS_BX_Assassin_UnderWater";
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
						vehicle = "JA_CIS_B1_Base_UnderWater";
						rank = "CORPORAL";
						position[] = {0, 0, 0};
						side = 0;
					};
					class Unit1
					{
						vehicle = "JA_CIS_B1_Base_UnderWater";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
						side = 0;
					};
					class Unit2
					{
						vehicle = "JA_CIS_B1_Heavy_UnderWater";
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
						vehicle = "JA_CIS_B1_Base_UnderWater";
						rank = "CORPORAL";
						position[] = {0, 0, 0};
						side = 0;
					};
					class Unit1
					{
						vehicle = "JA_CIS_B1_Base_UnderWater";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
						side = 0;
					};
					class Unit2
					{
						vehicle = "JA_CIS_B1_Heavy_UnderWater";
						rank = "PRIVATE";
						position[] = {5, -5, 0};
						side = 0;
					};
					class Unit3
					{
						vehicle = "JA_CIS_B1_Marksman_UnderWater";
						rank = "PRIVATE";
						position[] = {2, 2, 0};
						side = 0;
					};
					class Unit4
					{
						vehicle = "JA_CIS_B1_Base_UnderWater";
						rank = "PRIVATE";
						position[] = {-2, -2, 0};
						side = 0;
					};
					class Unit5
					{
						vehicle = "JA_CIS_B1_Heavy_UnderWater";
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
						vehicle = "JA_CIS_B1_Base_UnderWater";
						rank = "CORPORAL";
						position[] = {0, 0, 0};
						side = 0;
					};
					class Unit1
					{
						vehicle = "JA_CIS_B1_Base_UnderWater";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
						side = 0;
					};
					class Unit2
					{
						vehicle = "JA_CIS_B1_Base_UnderWater";
						rank = "PRIVATE";
						position[] = {5, -5, 0};
						side = 0;
					};
					class Unit3
					{
						vehicle = "JA_CIS_B1_Base_UnderWater";
						rank = "PRIVATE";
						position[] = {2, 2, 0};
						side = 0;
					};
					class Unit4
					{
						vehicle = "JA_CIS_B1_Base_UnderWater";
						rank = "PRIVATE";
						position[] = {-2, -2, 0};
						side = 0;
					};
					class Unit5
					{
						vehicle = "JA_CIS_B1_Base_UnderWater";
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
						vehicle = "JA_CIS_B1_Base_UnderWater";
						rank = "CORPORAL";
						position[] = {0, 0, 0};
						side = 0;
					};
					class Unit1
					{
						vehicle = "JA_CIS_B2_Base_UnderWater";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
						side = 0;
					};
					class Unit2
					{
						vehicle = "JA_CIS_B1_Heavy_UnderWater";
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
						vehicle = "JA_CIS_B1_Base_UnderWater";
						rank = "CORPORAL";
						position[] = {0, 0, 0};
						side = 0;
					};
					class Unit1
					{
						vehicle = "JA_CIS_B1_Base_UnderWater";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
						side = 0;
					};
					class Unit2
					{
						vehicle = "JA_CIS_B1_Heavy_UnderWater";
						rank = "PRIVATE";
						position[] = {5, -5, 0};
						side = 0;
					};
					class Unit3
					{
						vehicle = "JA_CIS_B1_Marksman_UnderWater";
						rank = "PRIVATE";
						position[] = {2, 2, 0};
						side = 0;
					};
					class Unit4
					{
						vehicle = "JA_CIS_B2_Base_UnderWater";
						rank = "PRIVATE";
						position[] = {-2, -2, 0};
						side = 0;
					};
					class Unit5
					{
						vehicle = "JA_CIS_B1_Heavy_UnderWater";
						rank = "PRIVATE";
						position[] = {2, -2, 0};
						side = 0;
					};
				};
			};
			class JA_Opfor_Droid_Groups_Normal
			{
				name = "CIS - INF - Normal";
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
				class JA_Group_BX_Magna_Team
				{
					name = "BX Magna - Team";
					side = 0;
					class Unit0
					{
						vehicle = "JA_CIS_BX_Magna";
						rank = "CORPORAL";
						position[] = {0, 0, 0};
						side = 0;
					};
					class Unit1
					{
						vehicle = "JA_CIS_BX_Magna";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
						side = 0;
					};
					class Unit2
					{
						vehicle = "JA_CIS_BX_Magna";
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
						vehicle = "JA_CIS_B1_AT";
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
						vehicle = "JA_CIS_B1_AT";
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
		};
	};
};
