#define _ARMA_
class CfgPatches
{
	class A3_Weapons_F_Jets
	{
		author = "$STR_A3_Bohemia_Interactive";
		name = "Arma 3 Jets - Weapons and Accessories";
		url = "https://www.arma3.com";
		requiredAddons[] = {"A3_Data_F_Jets"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"weapon_AGM_65Launcher","weapon_AGM_KH25Launcher","weapon_AMRAAMLauncher","weapon_BIM9xLauncher","weapon_Cannon_Phalanx","weapon_Fighter_Gun20mm_AA","weapon_Fighter_Gun_30mm","weapon_GBU12Launcher","weapon_KAB250Launcher","weapon_R73Launcher","weapon_R77Launcher","weapon_rim116Launcher","weapon_rim162Launcher"};
	};
};
class SensorTemplateLaser;
class CfgSounds
{
    sounds[] = {"FC_Release_crate", "FC_Hit_Echo", "FC_Hit_Ground","FC_Hit_Thud","FC_Locator_fly","FC_Crate_Fly","FC_Sputter_T"};
    
    class FC_Release_crate
    {
        name = "FC_Release_crate";
        sound[] = {"Dropcrate_FC\Sounds\CrateRelease.ogg", db+0, 1.0};
        titles[] = {};
    };
    class FC_Hit_Echo
    {
        name = "FC_Hit_Echo";
        sound[] = {"Dropcrate_FC\Sounds\HitEcho.ogg", db+0, 1.0};
        titles[] = {};
    };
    class FC_Hit_Ground
    {
        name = "FC_Hit_Ground";
        sound[] = {"Dropcrate_FC\Sounds\HitGround.ogg", db+0, 1.0};
        titles[] = {};
    };
    class FC_Hit_Thud
    {
        name = "FC_Hit_Thud";
        sound[] = {"Dropcrate_FC\Sounds\HitThud.ogg", db+0, 1.0};
        titles[] = {};
    };
    class FC_Locator_fly
    {
        name = "FC_Locator_fly";
        sound[] = {"Dropcrate_FC\Sounds\Locator.ogg", db+0, 1.0};
        titles[] = {};
    };
    class FC_Crate_Fly
    {
        name = "FC_Crate_Fly";
        sound[] = {"Dropcrate_FC\Sounds\ThrustersFly.ogg", db+0, 1.0};
        titles[] = {};
    };
    class FC_Sputter_T
    {
        name = "FC_Sputter_T";
        sound[] = {"Dropcrate_FC\Sounds\ThrusterSputter.ogg", db+0, 1.0};
        titles[] = {};
    };
};
class CfgVehicles
{
	class ReammoBox;
	class FC_Dropcrate_104th: ReammoBox
	{
		author = "Fishinchips";
		mapSize = 1.58;
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\IG_supplyCrate_F.jpg";
		_generalMacro = "FC_Dropcrate_104th";
		scope = 2;					/// 3 stands for civilians, 0 is OPFOR, 1 is BLUFOR, 2 means guerrillas
		displayName = "Fishinchips_CfgVehicles_FC_Dropcrate_104th";
		model = "Dropcrate_FC\dropcrate_DP.p3d";
		maximumLoad = 4000;
		transportMaxWeapons = 12;
		transportMaxMagazines = 96;
		supplyRadius = -1;
		memoryPointSupply = "doplnovani";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Dropcrate_FC\Data\crate_co.paa"};
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
        class TransportWeapons
        {
            class _xx_ls_weapon_rps6{
                count = 1;
                weapon = "ls_weapon_rps6";
            };
            class _xx_501_weapon_DC15S{
                count = 2;
                weapon = "AUX501_Weaps_DC15S";
            };
        };
        class TransportMagazines
        {
            class _xx_501_DC15X_mag{
                count = 5;
                magazine = "AUX501_Weapons_Mags_40mw5";
            };
            class _xx_501_DC15L_mag{
                count = 10;
                magazine = "AUX501_Weapons_Mags_20mw240";
            };
            class _xx_501_DC15C_mag{
                count = 10;
                magazine = "AUX501_Weapons_Mags_20mw40";
            };
            class _xx_501_DC15ADP_mag{
                count = 5;
                magazine = "AUX501_Weapons_Mags_20mwdp30";
            };
            class _xx_501_DC15AUP_mag{
                count = 5;
                magazine = "AUX501_Weapons_Mags_20mwup30";
            };
            class _xx_501_DC15S_mag{
                count = 5;
                magazine = "AUX501_Weapons_Mags_10mw50";
            };
            class _xx_501_Stun_mag{
                count = 2;
                magazine = "AUX501_Weapons_Mags_Stun5";
            };
            class _xx_501_Z6_mag{
                count = 5;
                magazine = "AUX501_Weapons_Mags_10mw400";
            };
            class _xx_501_DC17DP_mag{
                count = 5;
                magazine = "AUX501_Weapons_Mags_20mwdp20";
            };
            class _xx_JLTS_DC15A_mag{
                count = 5;
                magazine = "JLTS_DC15A_mag";
            };
            class _xx_UGL_HE{
                count = 2;
                magazine = "AUX501_Weapons_Mags_GL_HE3";
            };
            class _xx_UGL_Smoke_White{
                count = 2;
                magazine = "AUX501_Weapons_Mags_GL_smoke_white6";
            };
            class _xx_UGL_Smoke_Blue{
                count = 2;
                magazine = "AUX501_Weapons_Mags_GL_smoke_blue3";
            };
            class _xx_UGL_Smoke_Green{
                count = 1;
                magazine = "AUX501_Weapons_Mags_GL_smoke_green3";
            };
            class _xx_UGL_Smoke_Orange{
                count = 1;
                magazine = "AUX501_Weapons_Mags_GL_smoke_orange3";
            };
            class _xx_UGL_Smoke_Purple{
                count = 1;
                magazine = "AUX501_Weapons_Mags_GL_smoke_purple3";
            };
            class _xx_UGL_Smoke_Red{
                count = 2;
                magazine = "AUX501_Weapons_Mags_GL_smoke_red3";
            };
            class _xx_UGL_Smoke_Yellow{
                count = 1;
                magazine = "AUX501_Weapons_Mags_GL_smoke_yellow3";
            };
            class _xx_ls_mag_at_plx{
                count = 1;
                magazine = "ls_mag_at_plx";
            };
            class _xx_ls_mag_rpg_1rnd{
                count = 3;
                magazine = "ls_mag_rpg_1rnd";
            };
            class _xx_JA104_mag_T9_1rnd{
                count = 5;
                magazine = "JA_104th_LaserCannon_mag";
            };
            class _xx_501_ThermalDet{
                count = 8;
                magazine = "AUX501_Weapons_Mags_Thermal_Detonator";
            };
            class _xx_3AS_ThermalDet{
                count = 8;
                magazine = "3AS_ThermalDetonator";
            };
            class _xx_LS_ThermalDet{
                count = 8;
                magazine = "LS_mag_classC_thermalDet";
            };
            class _xx_BI_SmokeGrenade{
                count = 8;
                magazine = "SmokeShell";
            };
        };
         class TransportItems
        {
            class _xx_ACE_elasticBandage{
                count = 50;
                name = "ACE_elasticBandage";
            };
            class _xx_ACE_epinephrine{
                count = 20;
                name = "ACE_epinephrine";
            };
            class _xx_ACE_morphine{
                count = 20;
                name = "ACE_morphine";
            };
            class _xx_ACE_packingBandage{
                count = 30;
                name = "ACE_packingBandage";
            };
            class _xx_ACE_quikclot{
                count = 30;
                name = "ACE_quikclot";
            };
            class _xx_ACE_salineIV{
                count = 5;
                name = "ACE_salineIV";
            };
            class _xx_ACE_salineIV_500{
                count = 5;
                name = "ACE_salineIV_500";
            };
            class _xx_ACE_tourniquet{
                count = 8;
                name = "ACE_tourniquet";
            };
        };
        //class Eventhandlers
        //{
            //Init = "[_this select 0] execVM 'Dropcrate_FC\Scripts\Spawn_menu.sqf';";
        //};
	};
};
class CfgAmmo
{
	class Bo_GBU12_LGB;
    class FC_Dropcrate_A: Bo_GBU12_LGB
    {
        model = "Dropcrate_FC\Falling_Dropcrate.p3d";
        proxyshape = "Dropcrate_FC\Dropcrate_closed.p3d";
        hit = 0;
        indirectHit = 0;
        explosive = 0;
        whistleOnFire = 1;
        sideAirFriction = 1;
        laserLock = 1;
        trackOversteer = 1;
        trackLead = 0.95;
        maneuvrability = 30;
        maxSpeed = 600;
        initSpeed = 30
        multiSoundFly[] = {"soundFly1",0.2,"soundFly2",0.2};
        soundFly1[] = {"FC_Locator_fly",db+0, 1};
        soundFly2[] = {"FC_Crate_Fly",db+0, 1};
        multiSoundHit[] = {"soundHit1",0.2,"soundHit2",0.2,"soundHit3",0.2,"soundHit4",0.2};
        soundHit1[] = {"FC_Hit_Ground",db+0, 1};
        soundHit2[] = {"FC_Hit_Thud",db+0, 1};
        soundHit3[] = {"FC_Hit_Echo",db+0, 1};
        soundHit4[] = {"FC_Sputter_T",db+0, 1};
        whistleDist = 24;
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"Dropcrate_FC\Data\crate_clean_co.paa"};
        class Eventhandlers
        {
            Init = "[_this select 0] execVM 'Dropcrate_FC\Scripts\grpl_fired.sqf';";
        };
        class Components
        {
                class SensorsManagerComponent
                {
                    class Components
                    {
                        class LaserSensorComponent: SensorTemplateLaser {
                            class AirTarget {
                                minRange = 30000;
                                maxRange = 30000;
                                objectDistanceLimitCoef = -1;
                                viewDistanceLimitCoef = -1;
                            };
                            class GroundTarget {
                                minRange = 30000;
                                maxRange = 30000;
                                objectDistanceLimitCoef = -1;
                                viewDistanceLimitCoef = -1;
                            };
                            maxTrackableSpeed = 55;
                            angleRangeHorizontal = 90;
                            angleRangeVertical = 70;
                            componentType = "LaserSensorComponent";
                            typeRecognitionDistance = 0;
                            color[] = {1, 1, 1, 0};
                            allowsMarking = 1;
                            groundNoiseDistanceCoef = -1;
                            maxGroundNoiseDistance = -1;
                            minSpeedThreshold = 0;
                            maxSpeedThreshold = 0;
                            animDirection = "";
                            aimDown = 0;
                            minTrackableSpeed = -1e+010;
                            minTrackableATL = -1e+010;
                            maxTrackableATL = 1e+010;
                        };
                    };
                };
            };
    	};
};
class BaseSoundModeType;
class CfgMagazines
{
	class VehicleMagazine;
    class AnimationSources;
	class Pylon_FC_Dropcrate_P_1rnd : VehicleMagazine
	{
		scope = 2;
		model = "Dropcrate_FC\crate_proxy.p3d";
		hardpoints[] = {"B_BOMB_PYLON","B_MISSILE_PYLON","O_BOMB_PYLON","O_MISSILE_PYLON"};
		pylonWeapon = "FC_Dropcrate_PW1";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"Dropcrate_FC\Data\crate_clean_co.paa"};
        class AnimationSources: AnimationSources    /// custom made animation sources
        {
            class Missiles_revolving
            {
                source = "revolving";
                weapon = "FC_Dropcrate_PW1";
            };                  
        };  
		displayName = "104th_Dropcrate_x1";
		displayNameShort = "Laser Guided";
		descriptionShort = "FC_Dropcrate";					
		ammo = "FC_Dropcrate_A";
		initSpeed = 0;
		count = 1;
		maxLeadSpeed = 40;
		mass = 200;

	};
};
class CfgNonAIVehicles
{
    class ProxyWeapon;
    class ProxyPylon_FC_Dropcrate_Proxy: ProxyWeapon
    {
        model = "Dropcrate_FC\Dropcrate_closed.p3d";
        simulation = "maverickweapon";
    };
};
class CfgWeapons
{
	class RocketPods;
	class weapon_LGBLauncherBase: RocketPods
	{
		class LoalAltitude;
	};
	class FC_Dropcrate_PW1: weapon_LGBLauncherBase
	{
		scope = 2;
		displayName = "Resupply Dropcrate 104TH";
		displayNameMagazine = "104DC";
		shortNameMagazine = "104DC";
		cursoraim = "bomb";
		cursor = "EmptyCursor";
		sounds[] = { "StandardSound" };
		class StandardSound
		{
			begin1[] = { "FC_Release_crate", 1.5848932, 1.1, 2100 };
			soundBegin[] = { "begin1", 1 };
			weaponSoundEffect = "DefaultRifle";
		};
		magazines[] = { "Pylon_FC_Dropcrate_P_1rnd" };		
		salvo = 1;
		modes[] = {"LoalAltitude"};
		class EventHandlers
        {
            //fired = "hint 'Fired eventhandler called'";
            fired = "_this spawn FC_Dropcrate_A";
        };
	};
};