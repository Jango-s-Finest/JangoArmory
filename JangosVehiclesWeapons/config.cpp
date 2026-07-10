class CfgPatches
{
	class Jangos_Armory_Vehicles_Weapons
	{
		units[] = {};
		weapons[] = {
			"JA_104th_AA_Lazer",
			"JA_104th_AP_Lazer",
			"JA_104th_HE_Lazer",
			"JA_104th_HE_Lazer_Ulik",
			"JA_104th_APHE_Lazer",
			"JA_104th_AIM9X",
			"JA_LAAT_AIM9X_BULLDOG",
			"JA_104th_AIM120",
			"JA_ATTE_Maingun_Cannon",
			"JA_104th_Heavy_Assault_Ship_2500",
			"JA_104th_Heavy_Assault_AA_Ship_2500",
			"JA_104th_Heavy_Assault_Ship_400",
			"JA_104th_Heavy_Assault_Ship_RailGun_75",
			"JA_104th_Heavy_Assault_Ship_Siegecannon_10",
			"JA_104th_Drexl",
			"JA_104th_Brimstone",
		};
		ammo[] = {
			"JA_104th_AA_Lazer_Ammo",
			"JA_104th_AP_Lazer_Ammo",
			"JA_104th_HE_Lazer_Ammo",
			"JA_104th_APHE_Lazer_Ammo",
			"JA_LAAT_Drexl_Ammo",
			"JA_LAAT_Brimstone_Ammo",
			"JA_LAAT_AIM120_Ammo",
			"JA_LAAT_AIM9X_Ammo",
			"JA_LAAT_AIM9X_BULLDOG_Ammo",
			"JA_ATTE_Maingun_Normal_Ammo",
			"JA_ATTE_Maingun_HE_Ammo",
			"JA_104th_Heavy_Assault_Ship_RailGun_AMMO",
			"JA_104th_Heavy_Assault_Ship_Siegecannon_AMMO",
		};
		magazines[] = {
			"JA_104th_AA_Lazer_MAG_500",
			"JA_104th_AP_Lazer_MAG_250",
			"JA_104th_HE_Lazer_MAG_250",
			"JA_104th_APHE_Lazer_MAG_100",
			"JA_LAAT_AIM9X",
			"JA_LAAT_AIM9X_BULLDOG_Mag",
			"JA_LAAT_AIM120",
			"JA_ATTE_Maingun_Normal_Mag",
			"JA_ATTE_Maingun_HE_Mag",
			"JA_104th_Heavy_Assault_Ship_MAG_2500",
			"JA_104th_Heavy_Assault_AA_Ship_MAG_2500",
			"JA_104th_Heavy_Assault_Ship_MAG_400",
			"JA_104th_Heavy_Assault_Ship_RailGun_MAG_75",
			"JA_104th_Heavy_Assault_Ship_Siegecannon_MAG_10",
			"JA_104th_LAAT_Fueltank_P",
			"JA_LAAT_Drexl",
			"JA_LAAT_Brimstone",
		};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};

class CfgAmmo
{
	class RD501_Republic_Aircraft_Laser_Repeater_Ammo;
	class 212th_Drexl_A2A_Missile;
	class FIR_Brimstone_dm;
	class FIR_AIM120;
	class FIR_AIM9X;
	class 3AS_Mass_Driver_Shell;
	class TKE_Ext_Bullet_Railgun;
	class 3AS_SIEGE_Cannon_HHE_Shell;
	class FIR_AGM88;

	class JA_104th_AA_Lazer_Ammo: RD501_Republic_Aircraft_Laser_Repeater_Ammo{
		caliber = 7;
		indirectHit = 50;
		indirectHitRange = 3;
		hit = 130;
	};
	class JA_104th_AP_Lazer_Ammo: JA_104th_AA_Lazer_Ammo{
		caliber = 10;
		indirectHit = 0;
		indirectHitRange = 0;
		hit = 200;
		explosionType = "";
		explosive = 0;
	};
	class JA_104th_HE_Lazer_Ammo: JA_104th_AA_Lazer_Ammo{
		caliber = 7;
		indirectHit = 60;
		indirectHitRange = 6;
		hit = 100;
		explosive = 0.9;
	};
	class JA_104th_APHE_Lazer_Ammo: JA_104th_AA_Lazer_Ammo{
		caliber = 10;
		indirectHit = 60;
		indirectHitRange = 6;
		hit = 100;
		explosive = 0.5;
	};
	
	class JA_LAAT_Drexl_Ammo: 212th_Drexl_A2A_Missile{
		model = "3as\3AS_VehicleWeapons\model\3AS_Proton_Torpedo.p3d";
		proxyShape = "3as\3AS_VehicleWeapons\model\3AS_Proton_Torpedo.p3d";
	};

	class JA_LAAT_Brimstone_Ammo: FIR_Brimstone_dm{
		model = "3as\3AS_VehicleWeapons\model\3AS_High_Energy_Missile.p3d";
		proxyShape = "3as\3AS_VehicleWeapons\model\3AS_High_Energy_Missile.p3d";
		effectFly = "3AS_Rocket_effect_Yellow_fly";
		effectsMissile = "3AS_Rocket_effect_Yellow_fly";
		effectsMissileInit = "PylonBackEffects";
	};

	class JA_LAAT_AIM120_Ammo: FIR_AIM120{
		model = "3as\3AS_VehicleWeapons\model\3AS_Discord_Missile.p3d";
		proxyShape = "3as\3AS_VehicleWeapons\model\3AS_Discord_Missile.p3d";
		effectFly = "3AS_Rocket_effect_Purple_fly";
		effectsMissile = "3AS_Rocket_effect_Purple_fly";
		effectsMissileInit = "PylonBackEffects";
	};
	
	class JA_LAAT_AIM9X_Ammo: FIR_AIM9X{
		model = "3as\3AS_VehicleWeapons\model\3AS_Concussion_Missile.p3d";
		proxyShape = "3as\3AS_VehicleWeapons\model\3AS_Concussion_Missile.p3d";
		effectFly = "3AS_Rocket_effect_Blue_fly";
		effectsMissile = "3AS_Rocket_effect_Blue_fly";
		effectsMissileInit = "PylonBackEffects";
	};
	class JA_LAAT_AIM9X_BULLDOG_Ammo: FIR_AIM9X{
		autoSeekTarget = 1;
		lockSeekRadius = 500;
		missileManualControlCone = 180;
		missileKeepLockedCone = 180;
		missileLockCone = 180;
		weaponLockSystem = "2 + 16";
		flightProfiles[] = {"LoalDistance"};
		model = "3as\3AS_VehicleWeapons\model\3AS_Concussion_Missile.p3d";
		proxyShape = "3as\3AS_VehicleWeapons\model\3AS_Concussion_Missile.p3d";
		effectFly = "3AS_Rocket_effect_Purple_fly";
		effectsMissile = "3AS_Rocket_effect_Purple_fly";
		effectsMissileInit = "PylonBackEffects";
		lockSeekDistanceFromParent = 100;
		class LoalDistance {
			lockSeekDistanceFromParent = 100;
		};
		// class ace_missileguidance {
		// 	attackProfiles[] = {"DIR"};
		// 	canVanillaLock = 0;
		// 	defaultAttackProfile = "DIR";
		// 	lockableTypes[] = {"Air"};
		// 	defaultNavigationType = "AugmentedProportionalNavigation";
		// 	defaultSeekerLockMode = "LOAL";
		// 	defaultSeekerType = "IR";
		// 	enabled = 1;
		// 	navigationTypes[] = {"AugmentedProportionalNavigation"};
		// 	pitchRate = 60;
		// 	yawRate = 60;
		// 	seekLastTargetPos = 0;
		// 	seekerAccuracy = 1;
		// 	seekerAngle = 45;
		// 	seekerLockModes[] = {"LOAL",};
		// 	seekerMaxRange = 2500;
		// 	seekerMinRange = 1;
		// 	seekerTypes[] = {"IR"};
		// };
		class Direct{};
	};
	
	class JA_ATTE_Maingun_Normal_Ammo: 3AS_Mass_Driver_Shell{
		caliber = 14;
		hit = 900;
		indirectHit = 70;
		explosive = 0.25;

	};
	class JA_ATTE_Maingun_HE_Ammo: 3AS_Mass_Driver_Shell{
		caliber = 14;
		hit = 450;
		indirectHit = 250;
		explosive = 0.9;
	};
	class JA_104th_Heavy_Assault_Ship_RailGun_AMMO : TKE_Ext_Bullet_Railgun{
		hit = 1500;
	};
	class JA_104th_Heavy_Assault_Ship_Siegecannon_AMMO : 3AS_SIEGE_Cannon_HHE_Shell{
		indirectHit = 200;
		indirectHitRange = 20;
	};
	class JA_104th_AP_Lazer_Oryx_Ammo: JA_104th_AA_Lazer_Ammo{
		caliber = 10;
		indirectHit = 10;
		indirectHitRange = 1;
		hit = 250;
		explosionType = "";
		explosive = 0.1;
	};
	class JA_104th_HE_Lazer_Oryx_Ammo: JA_104th_AA_Lazer_Ammo{
		caliber = 7;
		indirectHit = 60;
		indirectHitRange = 6;
		hit = 100;
		explosive = 0.9;
	};
	class JA_104th_AGM_88_M : FIR_AGM88{
		model = "3as\3AS_VehicleWeapons\model\3AS_High_Energy_Missile.p3d";
		proxyShape = "3as\3AS_VehicleWeapons\model\3AS_High_Energy_Missile.p3d";
		effectFly = "3AS_Rocket_effect_Yellow_fly";
		effectsMissile = "3AS_Rocket_effect_Yellow_fly";
		effectsMissileInit = "PylonBackEffects";
		class LoalDistance{
			lockSeekDistanceFromParent = 10;
		};
	}
};

class CfgMagazines
{
	class RD501_Republic_Aircraft_Laser_AA_Mag_600;
	class FIR_AIM9X_P_2rnd_M;
	class FIR_AIM120_LAU115_P_2rnd_M;
	class 3AS_30Rnd_Mass_Driver_shells;
	class TKE_Ext_1250Rnd_30mm;
	class TKE_Ext_200Rnd_105mm;
	class TKE_Ext_75mm_60Rnd;
	class 3AS_10Rnd_Siege_Cannon_HHE_shells;
	class FIR_F15C_Fueltank_P_1rnd_M;
	class 212th_Drexl_4Rnd_A2A_mag;
	class FIR_Brimstone_DM_std_P_3rnd_M;
	class FIR_AGM88_P_1rnd_M;

	class JA_104th_AA_Lazer_MAG_500: RD501_Republic_Aircraft_Laser_AA_Mag_600
    {
        ammo = "JA_104th_AA_Lazer_Ammo";
		descriptionShort = "High speed Weapon";
        // model = "\FIR_AirWeaponSystem_US\data\proxies\pod_GEPOD30.p3d";
		model = "\FIR_AirWeaponSystem_US\data\proxies\pod_SUU23.p3d";
        scope = 2;
        displayName = "[104th] 104th AA cannon";
		displayNameShort = "Laser AA";
        count = 500;
		hardpoints[] = {"B_AMRAAM_D"};
        pylonWeapon = "JA_104th_AA_Lazer";
    };
	class JA_104th_AP_Lazer_MAG_250: JA_104th_AA_Lazer_MAG_500
    {
        ammo = "JA_104th_AP_Lazer_Ammo";
		descriptionShort = "High speed Weapon";
        // model = "\FIR_AirWeaponSystem_US\data\proxies\pod_GEPOD30.p3d";
		model = "\FIR_AirWeaponSystem_US\data\proxies\pod_SUU23.p3d";
        scope = 2;
        displayName = "[104th] 104th AP cannon";
		displayNameShort = "Laser AP";
        count = 250;
		hardpoints[] = {"B_AMRAAM_D"};
        pylonWeapon = "JA_104th_AP_Lazer";
    };
	class JA_104th_HE_Lazer_MAG_250: JA_104th_AA_Lazer_MAG_500
    {
        ammo = "JA_104th_HE_Lazer_Ammo";
		descriptionShort = "High speed Weapon";
        // model = "\FIR_AirWeaponSystem_US\data\proxies\pod_GEPOD30.p3d";
		model = "\FIR_AirWeaponSystem_US\data\proxies\pod_SUU23.p3d";
        scope = 2;
        displayName = "[104th] 104th HE cannon";
		displayNameShort = "Laser HE";
        count = 250;
		hardpoints[] = {"B_AMRAAM_D"};
        pylonWeapon = "JA_104th_HE_Lazer";
    };
	class JA_104th_APHE_Lazer_MAG_100: JA_104th_AA_Lazer_MAG_500
    {
        ammo = "JA_104th_APHE_Lazer_Ammo";
		descriptionShort = "High speed Weapon";
        // model = "\FIR_AirWeaponSystem_US\data\proxies\pod_GEPOD30.p3d";
		model = "\FIR_AirWeaponSystem_US\data\proxies\pod_SUU23.p3d";
        scope = 2;
        displayName = "[104th] 104th APHE cannon";
		displayNameShort = "Laser APHE";
        count = 100;
		hardpoints[] = {"B_AMRAAM_D"};
        pylonWeapon = "JA_104th_APHE_Lazer";
    };
	
	class JA_LAAT_AIM9X: FIR_AIM9X_P_2rnd_M
    {
        model = "\FIR_AirWeaponSystem_US\data\proxies\pod_4x_agm114.p3d";
        ammo = "JA_LAAT_AIM9X_Ammo";
        scope = 2;
        displayName = "[104th] AIM-9X Sidewinder x4";
        count = 4;
        pylonWeapon = "JA_104th_AIM9X";
    };
	class JA_LAAT_AIM9X_BULLDOG_Mag: FIR_AIM9X_P_2rnd_M
    {
        model = "\FIR_AirWeaponSystem_US\data\proxies\pod_4x_agm114.p3d";
        ammo = "JA_LAAT_AIM9X_BULLDOG_Ammo";
        scope = 2;
        displayName = "[104th] AIM-9X Bulldog x4";
        count = 4;
        pylonWeapon = "JA_LAAT_AIM9X_BULLDOG";
    };
	class JA_LAAT_AIM120: FIR_AIM120_LAU115_P_2rnd_M
    {
        model = "\FIR_AirWeaponSystem_US\data\proxies\pod_4x_agm114.p3d";
        ammo = "JA_LAAT_AIM120_Ammo";
        scope = 2;
        displayName = "[104th] AIM-120C Sidewinder x4";
        count = 4;
        pylonWeapon = "JA_104th_AIM120";
    };

	class JA_ATTE_Maingun_Normal_Mag: 3AS_30Rnd_Mass_Driver_shells{
		ammo = "JA_ATTE_Maingun_Normal_Ammo";
		displayNameShort = "Mass Driver AP";

	};
	class JA_ATTE_Maingun_HE_Mag: 3AS_30Rnd_Mass_Driver_shells{
		ammo = "JA_ATTE_Maingun_HE_Ammo";
		displayNameShort = "Mass Driver HE";

	};

	class JA_104th_Heavy_Assault_Ship_MAG_2500: TKE_Ext_1250Rnd_30mm{
		displayName = "104th HE cannon";
		displayNameShort = "Laser HE";
		ammo = "3AS_ATTE_30mm_MP";
        count = 2500;
		pylonWeapon = "JA_104th_Heavy_Assault_Ship_2500";
	};
	class JA_104th_Heavy_Assault_AA_Ship_MAG_2500: TKE_Ext_1250Rnd_30mm{
		displayName = "104th AA cannon";
		displayNameShort = "Laser AA";
		ammo = "JA_104th_AA_Lazer_Ammo";
        count = 2500;
		pylonWeapon = "JA_104th_Heavy_Assault_AA_Ship_2500";
	};
	class JA_104th_Heavy_Assault_Ship_MAG_400: TKE_Ext_200Rnd_105mm{
		ammo = "JA_ATTE_Maingun_HE_Ammo";
        count = 400;
		pylonWeapon = "JA_104th_Heavy_Assault_Ship_400";
	};
	class JA_104th_Heavy_Assault_Ship_RailGun_MAG_75 : TKE_Ext_75mm_60Rnd{
		ammo = "JA_104th_Heavy_Assault_Ship_RailGun_AMMO";
        count = 75;
		pylonWeapon = "JA_104th_Heavy_Assault_Ship_RailGun_75";
	}
	class JA_104th_Heavy_Assault_Ship_Siegecannon_MAG_10 : 3AS_10Rnd_Siege_Cannon_HHE_shells{
		ammo = "JA_104th_Heavy_Assault_Ship_Siegecannon_AMMO";
		pylonWeapon = "JA_104th_Heavy_Assault_Ship_Siegecannon_10";
	};

	class JA_104th_LAAT_Fueltank_P: FIR_F15C_Fueltank_P_1rnd_M{
		hardpoints[] = {"B_AMRAAM_D"};
		displayName = "[104th] 104th Laat Fuel Pod";
		displayNameShort = "Fuel Pod";
		descriptionShort = "Fuel Pod";

	};

	class JA_LAAT_Drexl : 212th_Drexl_4Rnd_A2A_mag{
		ammo = "JA_LAAT_Drexl_Ammo";
		displayName = "[104th] Drexl AA Missile";
		hardpoints[] = {"B_MISSILE_PYLON","FIR_A10C_AA_HP","FIR_BLUFOR_AA_HP","FIR_BLUFOR_Combined_HP","FIR_MQ81_WEP_HP","B_MISSILE_PYLON"};
        pylonWeapon = "JA_104th_Drexl";
        model = "\FIR_AirWeaponSystem_US\data\proxies\pod_4x_agm114.p3d";
	};
	
	class JA_LAAT_Brimstone: FIR_Brimstone_DM_std_P_3rnd_M{
        displayName = "[104th] Brimstone Dual-mode x3";
        ammo = "JA_LAAT_Brimstone_Ammo";
        pylonWeapon = "JA_104th_Brimstone";
        scope = 2;
    };
	class JA_104th_AP_Lazer_Oryx_MAG_250: JA_104th_AA_Lazer_MAG_500
    {
        ammo = "JA_104th_AP_Lazer_Oryx_Ammo";
		descriptionShort = "High speed Weapon";
        // model = "\FIR_AirWeaponSystem_US\data\proxies\pod_GEPOD30.p3d";
		model = "\FIR_AirWeaponSystem_US\data\proxies\pod_SUU23.p3d";
        scope = 2;
        displayName = "[104th] 104th AP cannon";
		displayNameShort = "Laser AP";
        count = 250;
		hardpoints[] = {"B_AMRAAM_D"};
        pylonWeapon = "JA_104th_AP_Lazer";
    };
	class JA_104th_HE_Lazer_Oryx_MAG_250: JA_104th_AA_Lazer_MAG_500
    {
        ammo = "JA_104th_HE_Lazer_Oryx_Ammo";
		descriptionShort = "High speed Weapon";
        // model = "\FIR_AirWeaponSystem_US\data\proxies\pod_GEPOD30.p3d";
		model = "\FIR_AirWeaponSystem_US\data\proxies\pod_SUU23.p3d";
        scope = 2;
        displayName = "[104th] 104th HE cannon";
		displayNameShort = "Laser HE";
        count = 250;
		hardpoints[] = {"B_AMRAAM_D"};
        pylonWeapon = "JA_104th_HE_Lazer";
    };
	class JA_104th_AGM_88_2rnd_M : FIR_AGM88_P_1rnd_M{
		ammo = "JA_104th_AGM_88_M";
		model = "\FIR_AirWeaponSystem_US\data\proxies\pod_4x_agm114.p3d";
        scope = 2;
        displayName = "[104th] AGM-88 HARM x4";
        count = 4;
        pylonWeapon = "JA_104th_AGM_88";
	};
};

class CfgWeapons
{
	class RD501_Republic_Aircraft_Laser_AA{
		class medium;
		class manual;
		class close;
		class LowROF;
	};
	class FIR_AIM120;
	class FIR_AIM9X;
	class 3AS_Mass_Driver_Cannon;
	class TKE_Ext_PDC_30mm{
		class LowROF;
	};
	class TKE_Ext_TwinCannon{
		class player;
	};
	class TKE_Ext_Cannon_Railgun_Light;
	class 3AS_ATAP_Siege_Cannon;
	class 212th_A2A_MissileSystem;
	class FIR_Brimstone;
	class JA_104th_Z6;
	class manual;

	class JA_104th_AA_Lazer : RD501_Republic_Aircraft_Laser_AA{
		displayName = "Air Superiority laser";
		magazines[] = {"JA_104th_AA_Lazer_MAG_500"};
		modes[] = {"manual"};
		class manual: manual{
			burst = 1;
			reloadtime = 0.08;
		};
	};
	class JA_104th_AP_Lazer : RD501_Republic_Aircraft_Laser_AA{
		displayName = "AP laser";
		magazines[] = {"JA_104th_AP_Lazer_MAG_250"};
		modes[] = {"manual"};
		class manual: manual{
			burst = 1;
			reloadtime = 0.2;
		};
	};
	class JA_104th_HE_Lazer : RD501_Republic_Aircraft_Laser_AA{
		displayName = "HE laser";
		magazines[] = {"JA_104th_HE_Lazer_MAG_250"};
		modes[] = {"manual"};
		class manual: manual{
			burst = 1;
			reloadtime = 0.2;
		};
	};
	class JA_104th_AP_Lazer_Oryx  : RD501_Republic_Aircraft_Laser_AA{
		displayName = "AP laser";
		ballisticsComputer = "2 + 8 + 16";
		magazines[] = {"JA_104th_AP_Lazer_Oryx_MAG_250"};
		muzzleEnd = "konec hlavne";
		muzzlePos = "usti hlavne";
		modes[] = {"manual"};
		class manual: manual{
			muzzleEnd = "konec hlavne";
			muzzlePos = "usti hlavne";
			burst = 1;
			reloadtime = 0.5;
			maxRange = 1500;
		};
	};
	class JA_104th_HE_Lazer_Oryx : RD501_Republic_Aircraft_Laser_AA{
		displayName = "HE laser";
		ballisticsComputer = "2 + 8 + 16";
		magazines[] = {"JA_104th_HE_Lazer_Oryx_MAG_250"};
		muzzleEnd = "konec hlavne";
		muzzlePos = "usti hlavne";
		modes[] = {"manual"};
		class manual: manual{
			muzzleEnd = "konec hlavne";
			muzzlePos = "usti hlavne";
			burst = 1;
			reloadtime = 0.5;
			maxRange = 1500;
		};
	};
	class JA_104th_APHE_Lazer : RD501_Republic_Aircraft_Laser_AA{
		displayName = "APHE laser";
		magazines[] = {"JA_104th_APHE_Lazer_MAG_100"};
		modes[] = {"manual"};
		class manual: manual{
			burst = 1;
			reloadtime = 0.4;
		};
	};
	
	class JA_104th_AIM9X : FIR_AIM9X{
		magazines[] = {"JA_LAAT_AIM9X"};
	};
	class JA_LAAT_AIM9X_BULLDOG : FIR_AIM9X{
		displayName = "AIM-9X Bulldog";
		magazines[] = {"JA_LAAT_AIM9X_BULLDOG_Mag"};
	};
	class JA_104th_AIM120 : FIR_AIM120{
		magazines[] = {"JA_LAAT_AIM120"};
	};

	class JA_ATTE_Maingun_Cannon: 3AS_Mass_Driver_Cannon{
		magazines[] = {"JA_ATTE_Maingun_Normal_Mag","JA_ATTE_Maingun_HE_Mag"};
	};

	class JA_104th_Heavy_Assault_Ship_2500 : TKE_Ext_PDC_30mm{
		displayName = "HE laser";
		magazines[] = {"JA_104th_Heavy_Assault_Ship_MAG_2500"};
		ballisticsComputer = "1 + 2 + 8 + 16";
		modes[] = {"LowROF"};
		class LowROF: LowROF{
			burst = 1;
			reloadtime = 0.2;
			sounds[] = {"StandardSound"};
			class StandardSound{
				soundSetShot[] = {"3AS_HeavyBlaster_SoundSet"};
			}
		};
	};
	class JA_104th_Heavy_Assault_AA_Ship_2500 : TKE_Ext_PDC_30mm{
		displayName = "Air Superiority laser";
		magazines[] = {"JA_104th_Heavy_Assault_AA_Ship_MAG_2500"};
		ballisticsComputer = "1 + 2 + 8 + 16";
		modes[] = {"LowROF"};
		class LowROF: LowROF{
			burst = 1;
			reloadtime = 0.08;
			sounds[] = {"StandardSound"};
			class StandardSound{
				soundSetShot[] = {"3AS_HeavyBlaster_SoundSet"};
			}
		};
	};
	class JA_104th_Heavy_Assault_Ship_400 : TKE_Ext_TwinCannon{
		magazines[] = {"JA_104th_Heavy_Assault_Ship_MAG_400"};
		ballisticsComputer = "1 + 2 + 8 + 16";
		modes[] = {"player"};
		class player: player{
			sounds[] = {"StandardSound"};
			class StandardSound{
				soundSetShot[] = {"3AS_Maincanon_Shot_SoundSet"};
			}
		};
	};
	class JA_104th_Heavy_Assault_Ship_RailGun_75 : TKE_Ext_Cannon_Railgun_Light{
		magazines[] = {"JA_104th_Heavy_Assault_Ship_RailGun_MAG_75"};
		ballisticsComputer = "1 + 2 + 8 + 16";
	}
	class JA_104th_Heavy_Assault_Ship_Siegecannon_10 : 3AS_ATAP_Siege_Cannon{
		magazines[] = {"JA_104th_Heavy_Assault_Ship_Siegecannon_MAG_10"};
		ballisticsComputer = "1 + 2 + 8 + 16";
	};
	class JA_104th_Drexl : 212th_A2A_MissileSystem{
		magazines[] = {"JA_LAAT_Drexl"};
	};
	class JA_104th_Brimstone : FIR_Brimstone{
		magazines[] = {"JA_LAAT_Brimstone"};
	};

	class JA_104th_Z6_weaker : JA_104th_Z6{
		modes[] = {"manual"};
		scopeArsenal = 0;
		class manual : manual
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType
            {
                weaponSoundEffect = "";
                closure1[] = {};
                closure2[] = {};
                soundClosure[] = {};
            };
            class StandardSound : BaseSoundModeType
            {
                weaponSoundEffect = "";
                begin1[] = {"3AS\3AS_Main\Sounds\Z6\Z61.ogg", +3db, 1, 2200};
                soundBegin[] = {"begin1", 1};
            };
            reloadTime = 0.065;
            dispersion = 0.001;
            soundContinuous = 0;
            soundBurst = 0;
            minRange = 0;
            minRangeProbab = 0.3;
            midRange = 5;
            midRangeProbab = 0.7;
            maxRange = 10;
            maxRangeProbab = 0.04;
            showToPlayer = 1;
        };
	};

	class FIR_AGM88;
	class JA_104th_AGM_88 : FIR_AGM88{
		initspeed = 30;
		magazines[] = {"JA_104th_AGM_88_2rnd_M"};
	}
};