class CfgPatches
{
	class Jangos_Armory_Grenades
	{
		units[] = {};
		weapons[] = {
		};
		ammo[] = {
		};
		magazines[] = {
		};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};

class CfgAmmo{
	class 3AS_Vwing_Medium_Energy_Shells;

	class JA_104th_Thermal_Detonator_Ammo: 3AS_Vwing_Medium_Energy_Shells{
	};
	
};

class CfgMagazines{
	class 3AS_Vwing_700Rnd_Medium_Shells;

	class JA_104th_Thermal_Detonator_Mag: 3AS_Vwing_700Rnd_Medium_Shells
    {
        ammo = "JA_104th_Thermal_Detonator_Ammo";
		descriptionShort = "Thermal Dethonator";
		model = "\FIR_AirWeaponSystem_US\data\proxies\pod_SUU23.p3d";
        scope = 2;
        displayName = "[104th] 104th Thermal Dethonator";
		displayNameShort = "Thermal Dethonator";
        count = 1;
    };

};
