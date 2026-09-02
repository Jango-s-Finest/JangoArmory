class CfgPatches
{
	class Jangos_Armory_Grenades
	{
		units[] = {};
		weapons[] = {
		};
		ammo[] = {
			"JA_104th_Thermal_Detonator_Ammo",
			"JA_104th_White_Smoke_Ammo"
		};
		magazines[] = {
			"JA_104th_Thermal_Detonator_Mag",
			"JA_104th_White_Smoke_Mag"
		};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F"};
	};
};

class JA_104th_particle_effect_SmokeShellWhite
{
	class SmokeShell
	{
		intensity = 20;
		interval = 10;
		position[] = {0,0,0};
		simulation = "particles";
		type = "JA_104th_cloudlet_smokeshell_White";
	};
	class SmokeShell2: SmokeShell
	{
		type = "JA_104th_cloudlet_smokeshell_White2";
	};
	class SmokeShell2UW: SmokeShell
	{
		type = "JA_104th_cloudlet_SmokeShellWhite2UW";
	};
	class SmokeShellUW: SmokeShell
	{
		type = "JA_104th_cloudlet_SmokeShellWhiteUW";
	};
};
class JA_104th_particle_effect_SmokeShellWhiteWater
{
	colorCoef[] = {0,0,0,1};
	interval = 0.25;
};
class JA_104th_particle_effect_SmokeBlue: JA_104th_particle_effect_SmokeShellWhite
{
	class SmokeShell: SmokeShell
	{
		type = "JA_104th_cloudlet_smokeshell_Blue";
	};
	class SmokeShell2: SmokeShell2
	{
		type = "JA_104th_cloudlet_smokeshell_Blue2";
	};
	class SmokeShell2UW: SmokeShell2UW
	{
		type = "JA_104th_cloudlet_SmokeShellBlue2UW";
	};
	class SmokeShellUW: SmokeShellUW
	{
		type = "JA_104th_cloudlet_SmokeShellBlueUW";
	};
};
class JA_104th_particle_effect_SmokeGreen: JA_104th_particle_effect_SmokeShellWhite
{
	class SmokeShell: SmokeShell
	{
		type = "JA_104th_cloudlet_smokeshell_Green";
	};
	class SmokeShell2: SmokeShell2
	{
		type = "JA_104th_cloudlet_smokeshell_Green2";
	};
	class SmokeShell2UW: SmokeShell2UW
	{
		type = "JA_104th_cloudlet_SmokeShellGreen2UW";
	};
	class SmokeShellUW: SmokeShellUW
	{
		type = "JA_104th_cloudlet_SmokeShellGreenUW";
	};
};
class JA_104th_particle_effect_SmokePurple: JA_104th_particle_effect_SmokeShellWhite
{
	class SmokeShell: SmokeShell
	{
		type = "JA_104th_cloudlet_smokeshell_Purple";
	};
	class SmokeShell2: SmokeShell2
	{
		type = "JA_104th_cloudlet_smokeshell_Purple2";
	};
	class SmokeShell2UW: SmokeShell2UW
	{
		type = "JA_104th_cloudlet_SmokeShellPurple2UW";
	};
	class SmokeShellUW: SmokeShellUW
	{
		type = "JA_104th_cloudlet_SmokeShellPurpleUW";
	};
};
class JA_104th_particle_effect_SmokeRed: JA_104th_particle_effect_SmokeShellWhite
{
	class SmokeShell: SmokeShell
	{
		type = "JA_104th_cloudlet_smokeshell_Red";
	};
	class SmokeShell2: SmokeShell2
	{
		type = "JA_104th_cloudlet_smokeshell_Red2";
	};
	class SmokeShell2UW: SmokeShell2UW
	{
		type = "JA_104th_cloudlet_SmokeShellRed2UW";
	};
	class SmokeShellUW: SmokeShellUW
	{
		type = "JA_104th_cloudlet_SmokeShellRedUW";
	};
};
class JA_104th_particle_effect_SmokeYellow: JA_104th_particle_effect_SmokeShellWhite
{
	class SmokeShell: SmokeShell
	{
		type = "JA_104th_cloudlet_smokeshell_Yellow";
	};
	class SmokeShell2: SmokeShell2
	{
		type = "JA_104th_cloudlet_smokeshell_Yellow2";
	};
	class SmokeShell2UW: SmokeShell2UW
	{
		type = "JA_104th_cloudlet_SmokeShellYellow2UW";
	};
	class SmokeShellUW: SmokeShellUW
	{
		type = "JA_104th_cloudlet_SmokeShellYellowUW";
	};
};
class JA_104th_particle_effect_SmokeOrange: JA_104th_particle_effect_SmokeShellWhite
{
	class SmokeShell: SmokeShell
	{
		type = "JA_104th_cloudlet_smokeshell_Orange";
	};
	class SmokeShell2: SmokeShell2
	{
		type = "JA_104th_cloudlet_smokeshell_Orange2";
	};
	class SmokeShell2UW: SmokeShell2UW
	{
		type = "JA_104th_cloudlet_SmokeShellOrange2UW";
	};
	class SmokeShellUW: SmokeShellUW
	{
		type = "JA_104th_cloudlet_SmokeShellOrangeUW";
	};
};
class JA_104th_particle_effect_SmokeBlack: JA_104th_particle_effect_SmokeShellWhite
{
	class SmokeShell: SmokeShell
	{
		type = "JA_104th_cloudlet_smokeshell_Black";
	};
	class SmokeShell2: SmokeShell2
	{
		type = "JA_104th_cloudlet_smokeshell_Black2";
	};
	class SmokeShell2UW: SmokeShell2UW
	{
		type = "JA_104th_cloudlet_SmokeShellBlack2UW";
	};
	class SmokeShellUW: SmokeShellUW
	{
		type = "JA_104th_cloudlet_SmokeShellBlackUW";
	};
};

class CfgCloudlets{
	class SmokeShellWhite;
	class SmokeShellWhiteUW;
	class SmokeShellWhite2UW;

	class JA_104th_cloudlet_smokeshell_White: SmokeShellWhite
	{
		colorCoef[] = {"colorR","colorG","colorB","colorA"};
		blockAIVisibility = 1;
		color[] = {[0.6,0.6,0.6,0.2],[0.6,0.6,0.6,0.05],[0.6,0.6,0.6,0]};
		moveVelocity[] = {0.2,0.5,0.1};
		size[] = {0.46,4.5,18};
		MoveVelocityVar[] = {0.7,0.4,0.7};
	};
	class JA_104th_cloudlet_smokeshell_White2: JA_104th_cloudlet_smokeshell_White
	{
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 4;
		particleFSLoop = 0;
		color[] = {[0.6,0.6,0.6,1],[0.6,0.6,0.6,0.5],[0.6,0.6,0.6,0]};
	};
	class JA_104th_cloudlet_SmokeShellWhiteUW: SmokeShellWhiteUW
	{
		color[] = {[1,1,1,1]};
		randomDirectionIntensity = 0.2;
		MoveVelocityVar[] = {0.5,0.5,0.5};
	};
	class JA_104th_cloudlet_SmokeShellWhite2UW: SmokeShellWhite2UW
	{
		postEffects = "JA_104th_particle_effect_SmokeShellWhiteWater";
	};

	class JA_104th_cloudlet_smokeshell_Blue: JA_104th_cloudlet_smokeshell_White
	{
		color[] = {[0.1183,0.1867,1,0.2],[0.1183,0.1867,1,0.05],[0.1183,0.1867,1,0]};
	};
	class JA_104th_cloudlet_smokeshell_Blue2: JA_104th_cloudlet_smokeshell_White2
	{
		color[] = {[0.1183,0.1867,1,0.2],[0.1183,0.1867,1,0.05],[0.1183,0.1867,1,0]};
	};
	class JA_104th_cloudlet_SmokeShellBlueUW: JA_104th_cloudlet_SmokeShellWhiteUW
	{
		color[] = {[0.1183,0.1867,1,1]};
	};
	class JA_104th_cloudlet_SmokeShellBlue2UW: JA_104th_cloudlet_SmokeShellWhite2UW
	{
		postEffects = "JA_104th_particle_effect_SmokeShellWhiteWater";
	};

	class JA_104th_cloudlet_smokeshell_Green: JA_104th_cloudlet_smokeshell_White
	{
		color[] = {[0.2125,0.8438,0.2125,0.2],[0.2125,0.8438,0.2125,0.05],[0.2125,0.8438,0.2125,0]};
	};
	class JA_104th_cloudlet_smokeshell_Green2: JA_104th_cloudlet_smokeshell_White2
	{
		color[] = {[0.2125,0.8438,0.2125,0.2],[0.2125,0.8438,0.2125,0.05],[0.2125,0.8438,0.2125,0]};
	};
	class JA_104th_cloudlet_SmokeShellGreenUW: JA_104th_cloudlet_SmokeShellWhiteUW
	{
		color[] = {[0.2125,0.8438,0.2125,1]};
	};
	class JA_104th_cloudlet_SmokeShellGreen2UW: JA_104th_cloudlet_SmokeShellWhite2UW
	{
		postEffects = "JA_104th_particle_effect_SmokeShellWhiteWater";
	};

	class JA_104th_cloudlet_smokeshell_Purple: JA_104th_cloudlet_smokeshell_White
	{
		color[] = {[0.4341,0.1388,0.4144,0.2],[0.4341,0.1388,0.4144,0.05],[0.4341,0.1388,0.4144,0]};
	};
	class JA_104th_cloudlet_smokeshell_Purple2: JA_104th_cloudlet_smokeshell_White2
	{
		color[] = {[0.4341,0.1388,0.4144,0.2],[0.4341,0.1388,0.4144,0.05],[0.4341,0.1388,0.4144,0]};
	};
	class JA_104th_cloudlet_SmokeShellPurpleUW: JA_104th_cloudlet_SmokeShellWhiteUW
	{
		color[] = {[0.4341,0.1388,0.4144,1]};
	};
	class JA_104th_cloudlet_SmokeShellPurple2UW: JA_104th_cloudlet_SmokeShellWhite2UW
	{
		postEffects = "JA_104th_particle_effect_SmokeShellWhiteWater";
	};

	class JA_104th_cloudlet_smokeshell_Red: JA_104th_cloudlet_smokeshell_White
	{
		color[] = {[0.8438,0.1383,0.1353,0.2],[0.8438,0.1383,0.1353,0.05],[0.8438,0.1383,0.1353,0]};
	};
	class JA_104th_cloudlet_smokeshell_Red2: JA_104th_cloudlet_smokeshell_White2
	{
		color[] = {[0.8438,0.1383,0.1353,0.2],[0.8438,0.1383,0.1353,0.05],[0.8438,0.1383,0.1353,0]};
	};
	class JA_104th_cloudlet_SmokeShellRedUW: JA_104th_cloudlet_SmokeShellWhiteUW
	{
		color[] = {[0.8438,0.1383,0.1353,1]};
	};
	class JA_104th_cloudlet_SmokeShellRed2UW: JA_104th_cloudlet_SmokeShellWhite2UW
	{
		postEffects = "JA_104th_particle_effect_SmokeShellWhiteWater";
	};

	class JA_104th_cloudlet_smokeshell_Yellow: JA_104th_cloudlet_smokeshell_White
	{
		color[] = {[0.9883,0.8606,0.0719,0.2],[0.9883,0.8606,0.0719,0.05],[0.9883,0.8606,0.0719,0]};
	};
	class JA_104th_cloudlet_smokeshell_Yellow2: JA_104th_cloudlet_smokeshell_White2
	{
		color[] = {[0.9883,0.8606,0.0719,0.2],[0.9883,0.8606,0.0719,0.05],[0.9883,0.8606,0.0719,0]};
	};
	class JA_104th_cloudlet_SmokeShellYellowUW: JA_104th_cloudlet_SmokeShellWhiteUW
	{
		color[] = {[0.9883,0.8606,0.0719,1]};
	};
	class JA_104th_cloudlet_SmokeShellYellow2UW: JA_104th_cloudlet_SmokeShellWhite2UW
	{
		postEffects = "JA_104th_particle_effect_SmokeShellWhiteWater";
	};

	class JA_104th_cloudlet_smokeshell_Orange: JA_104th_cloudlet_smokeshell_White
	{
		color[] = {[0.98,0.46,0,0.2],[0.98,0.46,0,0.05],[0.98,0.46,0,0]};
	};
	class JA_104th_cloudlet_smokeshell_Orange2: JA_104th_cloudlet_smokeshell_White2
	{
		color[] = {[0.98,0.46,0,0.2],[0.98,0.46,0,0.05],[0.98,0.46,0,0]};
	};
	class JA_104th_cloudlet_SmokeShellOrangeUW: JA_104th_cloudlet_SmokeShellWhiteUW
	{
		color[] = {[0.98,0.46,0,1]};
	};
	class JA_104th_cloudlet_SmokeShellOrange2UW: JA_104th_cloudlet_SmokeShellWhite2UW
	{
		postEffects = "JA_104th_particle_effect_SmokeShellWhiteWater";
	};

	class JA_104th_cloudlet_smokeshell_Black: JA_104th_cloudlet_smokeshell_White
	{
		color[] = {[0.0,0.0,0,0.2],[0.0,0.0,0,0.05],[0.0,0.0,0,0]};
	};
	class JA_104th_cloudlet_smokeshell_Black2: JA_104th_cloudlet_smokeshell_White2
	{
		color[] = {[0.0,0.0,0,0.2],[0.0,0.0,0,0.05],[0.0,0.0,0,0]};
	};
	class JA_104th_cloudlet_SmokeShellBlackUW: JA_104th_cloudlet_SmokeShellWhiteUW
	{
		color[] = {[0.0,0.0,0,1]};
	};
	class JA_104th_cloudlet_SmokeShellBlack2UW: JA_104th_cloudlet_SmokeShellWhite2UW
	{
		postEffects = "JA_104th_particle_effect_SmokeShellWhiteWater";
	};

};

class CfgAmmo{
	class Grenade;
	class SmokeShell;

	class JA_104th_Thermal_Detonator_Ammo: Grenade{
		hit = 18;
		indirectHit = 14;
		indirectHitRange = 8;
		ace_grenades_pullPinSound[] = {"\ls\core\addons\sounds\weapons\grenade\pin.wss",3,1,10};
		model = "\kobra\442_weapons\explosive\thermal_det.p3d"; 
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
	class JA_104th_White_Smoke_Ammo: SmokeShell
	{
		simulation = "shotSmokeX";
		smokeColor[] = {1,1,1,1};
		effectsSmoke = "JA_104th_particle_effect_SmokeShellWhite";
		model = "kobra\442_weapons\explosive\basic_smoke.p3d";
		SmokeShellSoundHit1[] = {"\Aux501\Weapons\Grenades\data\sounds\smoke_explode.wss","+10db",1,500};
		SmokeShellSoundLoop1[] = {"\Aux501\Weapons\Grenades\data\sounds\smoke_loop.wss","+3db",1,150};
		grenadeFireSound[] = {"SmokeShellSoundHit1",1};
		grenadeBurningSound[] = {"SmokeShellSoundLoop1",1};
	};
	class JA_104th_Blue_Smoke_Ammo: JA_104th_White_Smoke_Ammo
	{
		smokeColor[] = {0.1183,0.1867,1,1};
		effectsSmoke = "JA_104th_particle_effect_SmokeBlue";
	};
	class JA_104th_Green_Smoke_Ammo: JA_104th_White_Smoke_Ammo
	{
		smokeColor[] = {0.2125,0.8438,0.2125,1};
		effectsSmoke = "JA_104th_particle_effect_SmokeGreen";
	};
	class JA_104th_Purple_Smoke_Ammo: JA_104th_White_Smoke_Ammo
	{
		smokeColor[] = {0.4341,0.1388,0.4144,1};
		effectsSmoke = "JA_104th_particle_effect_SmokePurple";
	};
	class JA_104th_Red_Smoke_Ammo: JA_104th_White_Smoke_Ammo
	{
		smokeColor[] = {0.8438,0.1383,0.1353,1};
		effectsSmoke = "JA_104th_particle_effect_SmokeRed";
	};
	class JA_104th_Yellow_Smoke_Ammo: JA_104th_White_Smoke_Ammo
	{
		smokeColor[] = {0.9883,0.8606,0.0719,1};
		effectsSmoke = "JA_104th_particle_effect_SmokeYellow";
	};
	class JA_104th_Orange_Smoke_Ammo: JA_104th_White_Smoke_Ammo
	{
		smokeColor[] = {0.98,0.46,0,1};
		effectsSmoke = "JA_104th_particle_effect_SmokeOrange";
	};
	class JA_104th_Black_Smoke_Ammo: JA_104th_White_Smoke_Ammo
	{
		smokeColor[] = {0.0,0.0,0,1};
		effectsSmoke = "JA_104th_particle_effect_SmokeBlack";
	};
	
};

class CfgMagazines{
	class HandGrenade;
	class SmokeShell;

	class JA_104th_Thermal_Detonator_Mag: HandGrenade
	{
		author = "Knockout";
		scope = 2;
		scopearsenal = 2;
		displayName = "[104th] Thermal Detonator";
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

	class JA_104th_White_Smoke_Mag: SmokeShell
	{
		scope = 2;
		author = "Knockout";
		displayName = "[104th] Smoke Grenade (White)";
		displayNameShort = "White Smoke";
		descriptionShort = "Clone White Smoke Grenade";
		ammo = "JA_104th_White_Smoke_Ammo";
		model = "\kobra\442_weapons\explosive\basic_smoke.p3d";
		picture = "\Aux501\Weapons\Grenades\data\UI\Aux501_icon_mag_rep_nade_smoke_white_ui_ca.paa";
		mass = 1;
	};
	class JA_104th_Blue_Smoke_Mag: JA_104th_White_Smoke_Mag
	{
		displayName = "[104th] Smoke Grenade (Blue)";
		displayNameShort = "Blue Smoke";
		descriptionShort = "Clone Blue Smoke Grenade";
		ammo = "JA_104th_Blue_Smoke_Ammo";
		picture = "\Aux501\Weapons\Grenades\data\UI\Aux501_icon_mag_rep_nade_smoke_blue_ui_ca.paa";
	};
	class JA_104th_Green_Smoke_Mag: JA_104th_White_Smoke_Mag
	{
		displayName = "[104th] Smoke Grenade (Green)";
		displayNameShort = "Green Smoke";
		descriptionShort = "Clone Green Smoke Grenade";
		ammo = "JA_104th_Green_Smoke_Ammo";
		picture = "\Aux501\Weapons\Grenades\data\UI\Aux501_icon_mag_rep_nade_smoke_Green_ui_ca.paa";
	};
	class JA_104th_Purple_Smoke_Mag: JA_104th_White_Smoke_Mag
	{
		displayName = "[104th] Smoke Grenade (Purple)";
		displayNameShort = "Purple Smoke";
		descriptionShort = "Clone Purple Smoke Grenade";
		ammo = "JA_104th_Purple_Smoke_Ammo";
		picture = "\Aux501\Weapons\Grenades\data\UI\Aux501_icon_mag_rep_nade_smoke_Purple_ui_ca.paa";
	};
	class JA_104th_Red_Smoke_Mag: JA_104th_White_Smoke_Mag
	{
		displayName = "[104th] Smoke Grenade (Red)";
		displayNameShort = "Red Smoke";
		descriptionShort = "Clone Red Smoke Grenade";
		ammo = "JA_104th_Red_Smoke_Ammo";
		picture = "\Aux501\Weapons\Grenades\data\UI\Aux501_icon_mag_rep_nade_smoke_Red_ui_ca.paa";
	};
	class JA_104th_Yellow_Smoke_Mag: JA_104th_White_Smoke_Mag
	{
		displayName = "[104th] Smoke Grenade (Yellow)";
		displayNameShort = "Yellow Smoke";
		descriptionShort = "Clone Yellow Smoke Grenade";
		ammo = "JA_104th_Yellow_Smoke_Ammo";
		picture = "\Aux501\Weapons\Grenades\data\UI\Aux501_icon_mag_rep_nade_smoke_Yellow_ui_ca.paa";
	};
	class JA_104th_Orange_Smoke_Mag: JA_104th_White_Smoke_Mag
	{
		displayName = "[104th] Smoke Grenade (Orange)";
		displayNameShort = "Orange Smoke";
		descriptionShort = "Clone Orange Smoke Grenade";
		ammo = "JA_104th_Orange_Smoke_Ammo";
		picture = "\Aux501\Weapons\Grenades\data\UI\Aux501_icon_mag_rep_nade_smoke_Orange_ui_ca.paa";
	};
	class JA_104th_Black_Smoke_Mag: JA_104th_White_Smoke_Mag
	{
		displayName = "[104th] Smoke Grenade (Black)";
		displayNameShort = "Black Smoke";
		descriptionShort = "Clone Black Smoke Grenade";
		ammo = "JA_104th_Black_Smoke_Ammo";
		picture = "\Aux501\Weapons\Grenades\data\UI\Aux501_icon_mag_rep_nade_smoke_Black_ui_ca.paa";
	};
	
};

class CfgWeapons
{
    class GrenadeLauncher;
    class Throw: GrenadeLauncher
    {
		class ThrowMuzzle;
        muzzles[] += {
			"JA_104th_Thermal_Detonator_ThrowMuzzle", 
			"JA_104th_White_Smoke_ThrowMuzzle",
			"JA_104th_Blue_Smoke_ThrowMuzzle",
			"JA_104th_Green_Smoke_ThrowMuzzle",
			"JA_104th_Purple_Smoke_ThrowMuzzle",
			"JA_104th_Red_Smoke_ThrowMuzzle",
			"JA_104th_Yellow_Smoke_ThrowMuzzle",
			"JA_104th_Orange_Smoke_ThrowMuzzle",
			"JA_104th_Black_Smoke_ThrowMuzzle",
		};
        class JA_104th_Thermal_Detonator_ThrowMuzzle: ThrowMuzzle
        {
            magazines[] = {"JA_104th_Thermal_Detonator_Mag"};
        };
		class JA_104th_White_Smoke_ThrowMuzzle: ThrowMuzzle
        {
            magazines[] = {"JA_104th_White_Smoke_Mag"};
        };
		class JA_104th_Blue_Smoke_ThrowMuzzle: ThrowMuzzle
        {
            magazines[] = {"JA_104th_Blue_Smoke_Mag"};
        };
		class JA_104th_Green_Smoke_ThrowMuzzle: ThrowMuzzle
        {
            magazines[] = {"JA_104th_Green_Smoke_Mag"};
        };
		class JA_104th_Purple_Smoke_ThrowMuzzle: ThrowMuzzle
        {
            magazines[] = {"JA_104th_Purple_Smoke_Mag"};
        };
		class JA_104th_Red_Smoke_ThrowMuzzle: ThrowMuzzle
        {
            magazines[] = {"JA_104th_Red_Smoke_Mag"};
        };
		class JA_104th_Yellow_Smoke_ThrowMuzzle: ThrowMuzzle
        {
            magazines[] = {"JA_104th_Yellow_Smoke_Mag"};
        };
		class JA_104th_Orange_Smoke_ThrowMuzzle: ThrowMuzzle
        {
            magazines[] = {"JA_104th_Orange_Smoke_Mag"};
        };
		class JA_104th_Black_Smoke_ThrowMuzzle: ThrowMuzzle
        {
            magazines[] = {"JA_104th_Black_Smoke_Mag"};
        };
		
    };
};