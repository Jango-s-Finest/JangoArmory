class CfgPatches
{
	class Jangos_Armory_Vehicles_Weapons
	{
		units[] = {};
		weapons[] = {
			"JA_104th_AA_Lazer",
			"JA_104th_AP_Lazer",
			"JA_104th_HE_Lazer",
			"JA_104th_APHE_Lazer",
			"JA_104th_AIM9X",
			"JA_104th_AIM120",
		};
		ammo[] = {
			"JA_104th_AA_Lazer_Ammo",
			"JA_104th_AP_Lazer_Ammo",
			"JA_104th_HE_Lazer_Ammo",
			"JA_104th_APHE_Lazer_Ammo",
		};
		magazines[] = {
			"JA_104th_AA_Lazer_MAG_500",
			"JA_104th_AP_Lazer_MAG_250",
			"JA_104th_HE_Lazer_MAG_250",
			"JA_104th_APHE_Lazer_MAG_100",
			"JA_LAAT_AIM9X",
			"JA_LAAT_AIM120",
		};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};

class CfgAmmo
{
	class RD501_Republic_Aircraft_Laser_Repeater_Ammo;
	class JA_104th_AA_Lazer_Ammo: RD501_Republic_Aircraft_Laser_Repeater_Ammo{
		caliber = 7;
		indirectHit = 10;
		indirectHitRange = 3;
		hit = 200;
	};
	class JA_104th_AP_Lazer_Ammo: JA_104th_AA_Lazer_Ammo{
		caliber = 14;
		indirectHit = 0;
		indirectHitRange = 0;
		hit = 200;
		explosionType = "";
		explosive = 0;
	};
	class JA_104th_HE_Lazer_Ammo: JA_104th_AA_Lazer_Ammo{
		caliber = 7;
		indirectHit = 100;
		indirectHitRange = 6;
		hit = 200;
		explosive = 0.9;
	};
	class JA_104th_APHE_Lazer_Ammo: JA_104th_AA_Lazer_Ammo{
		caliber = 14;
		indirectHit = 100;
		indirectHitRange = 6;
		hit = 200;
		explosive = 0.5;
	};
};

class CfgMagazines
{
	class RD501_Republic_Aircraft_Laser_AA_Mag_600;
	class FIR_AIM9X_P_2rnd_M;
	class FIR_AIM120_LAU115_P_2rnd_M;

	class JA_104th_AA_Lazer_MAG_500: RD501_Republic_Aircraft_Laser_AA_Mag_600
    {
        ammo = "JA_104th_AA_Lazer_Ammo";
		descriptionShort = "High speed Weapon";
        // model = "\FIR_AirWeaponSystem_US\data\proxies\pod_GEPOD30.p3d";
		model = "\FIR_AirWeaponSystem_US\data\proxies\pod_SUU23.p3d";
        scope = 2;
        displayName = "test - 104th AA cannon";
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
        displayName = "test - 104th AP cannon";
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
        displayName = "test - 104th HE cannon";
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
        displayName = "test - 104th APHE cannon";
		displayNameShort = "Laser APHE";
        count = 100;
		hardpoints[] = {"B_AMRAAM_D"};
        pylonWeapon = "JA_104th_APHE_Lazer";
    };
	
	class JA_LAAT_AIM9X: FIR_AIM9X_P_2rnd_M
    {
        model = "\FIR_AirWeaponSystem_US\data\proxies\pod_4x_agm114.p3d";
        ammo = "FIR_AIM9X";
        scope = 2;
        displayName = "AIM-9X Sidewinder x4";
        count = 4;
        pylonWeapon = "JA_104th_AIM9X";
    };
	class JA_LAAT_AIM120: FIR_AIM120_LAU115_P_2rnd_M
    {
        model = "\FIR_AirWeaponSystem_US\data\proxies\pod_4x_agm114.p3d";
        ammo = "FIR_AIM120";
        scope = 2;
        displayName = "AIM-120C Sidewinder x4";
        count = 4;
        pylonWeapon = "JA_104th_AIM120";
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
	
	class JA_104th_AA_Lazer : RD501_Republic_Aircraft_Laser_AA{
		displayName = "Air Superiority laser";
		magazines[] = {"JA_104th_AA_Lazer_MAG_500"};
		modes[] = {"manual"};
		class manual: manual{
			burst = 1;
			reloadtime = 0.1;
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
	class JA_104th_AIM120 : FIR_AIM120{
		magazines[] = {"JA_LAAT_AIM120"};
	};
};