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
	class Grenade;

	class JA_104th_Thermal_Detonator_Ammo: Grenade{
		hit = 18;
		indirectHit = 14;
		indirectHitRange = 8;
		ace_grenades_pullPinSound[] = {"\ls\core\addons\sounds\weapons\grenade\pin.wss",3,1,10};
		model = "jangos_Armory_Grenades\data\models\thermal_det.p3d"; 
		explosionEffectsRadius = 1.5;
		suppressionRadiusHit = 24;
		typicalspeed = 18;
		visibleFire = 0.5;
		audibleFire = 0.05;
		visibleFireTime = 1;
		fuseDistance = 0;
		soundFly[] = {"\ls\core\addons\sounds\weapons\grenade\thermalDetClassC_fuse.wss",20,1,200};
		SoundSetExplosion[] = {"Aux501_soundset_rep_thermal_detonator_exp","GrenadeHe_Tail_SoundSet","Explosion_Debris_SoundSet"};
		class CamShakeExplode
		{
			distance = 99.8178;
			duration = 1;
			frequency = 20;
			power = 6;
		};
		class NVGMarkers
		{
			class Blinking1
			{
				name = "blinkpos1";
				color[] = {0.01,0.01,0.01,1};
				ambient[] = {0.005,0.005,0.005,1};
				blinking = 1;
				brightness = 0.002;
				onlyInNvg = 1;
			};
			class Blinking2
			{
				color[] = {0.9,0.1,0.1};
				ambient[] = {0.1,0.1,0.1};
				name = "blinkpos2";
				blinking = 1;
				blinkingStartsOn = 1;
				blinkingPattern[] = {0.1,0.9};
				blinkingPatternGuarantee = 1;
				drawLightSize = 0.35;
				drawLightCenterSize = 0.05;
				brightness = 0.002;
				dayLight = 1;
				onlyInNvg = 0;
				intensity = 75;
				drawLight = 1;
				activeLight = 0;
				useFlare = 0;
			};
		};
	};
	
};

class CfgMagazines{
	class HandGrenade;

	class JA_104th_Thermal_Detonator_Mag: HandGrenade
	{
		author = "Knockout";
		scope = 2;
		scopearsenal = 2;
		displayName = "[104th] 104th Thermal Dethonator";
		displayNameShort = "Thermal Detonator";
		descriptionShort = "Clone Frag Grenade";
		type = 256;
		value = 1;
		count = 1;
		initSpeed = 18;
		mass = 4;
		nameSound = "handgrenade";
		maxLeadSpeed = 7;
		ammo = "JA_104th_Thermal_Detonator_Ammo";
		model = "\kobra\442_weapons\explosive\thermal_det.p3d";
		picture = "\Aux501\Weapons\Grenades\data\UI\Aux501_icon_mag_rep_nade_thermal_det_ui_ca.paa";
	};

};
