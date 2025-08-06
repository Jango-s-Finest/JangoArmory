class CfgPatches
{
	class Jangos_Armory_Vehicles_Weapons
	{
		units[] = {};
		weapons[] = {
			"JA_104th_AA_Lazer"
		};
		ammo[] = {
			"JA_104th_AA_Lazer_Ammo"
		};
		magazines[] = {
			"JA_104th_AA_Lazer_MAG_500"
		};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};

class CfgAmmo
{
	class RD501_Republic_Aircraft_Laser_Repeater_Ammo;
	class JA_104th_AA_Lazer_Ammo: RD501_Republic_Aircraft_Laser_Repeater_Ammo{
		caliber = 1;
		indirectHit = 10;
		indirectHitRange = 3;
	};
};

class CfgMagazines
{
	class RD501_Republic_Aircraft_Laser_AA_Mag_600;
	class JA_104th_AA_Lazer_MAG_500: RD501_Republic_Aircraft_Laser_AA_Mag_600
    {
        ammo = "JA_104th_AA_Lazer_Ammo";
		descriptionShort = "High speed Weapon";
        // model = "\FIR_AirWeaponSystem_US\data\proxies\pod_GEPOD30.p3d";
		model = "\FIR_AirWeaponSystem_US\data\proxies\pod_SUU23.p3d";
        scope = 2;
        displayName = "test - 104th AA cannon";
        count = 500;
		hardpoints[] = {"B_AMRAAM_D"};
        pylonWeapon = "JA_104th_AA_Lazer";
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
	class JA_104th_AA_Lazer : RD501_Republic_Aircraft_Laser_AA{
		magazines[] = {"JA_104th_AA_Lazer_MAG_500"};
		class medium: medium{
			reloadtime = 0.1;
		};
		class manual: manual{
			reloadtime = 0.1;
		};
		class close: close{
			reloadtime = 0.1;
		};
		class LowROF: LowROF{
			reloadtime = 0.1;
		};
	};

};