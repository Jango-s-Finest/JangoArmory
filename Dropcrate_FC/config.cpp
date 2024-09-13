#define _ARMA_
class CfgPatches
{
	class FC_Dropcrate
	{
		author = "Fishinchips";
		name = "LAAT_Dropcrate";
        requiredAddons[] = {};
        requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
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
        ace_dragging_canDrag = 1;  // Can be dragged (0-no, 1-yes)
        ace_dragging_dragPosition[] = {0, 1.2, 0};  // Offset of the model from the body while dragging (same as attachTo) (default: [0, 1.5, 0])
        ace_dragging_dragDirection = 0;  // Model direction while dragging (same as setDir after attachTo) (default: 0)
        ace_dragging_ignoreWeight = 1; // Ignore weight limitation for dragging (0-no, 1-yes)
        ace_dragging_canCarry = 1;  // Can be carried (0-no, 1-yes)
        ace_dragging_carryPosition[] = {0, 1.2, 0};  // Offset of the model from the body while dragging (same as attachTo) (default: [0, 1, 1])
        ace_dragging_carryDirection = 0;  // Model direction while dragging (same as setDir after attachTo) (default: 0)
        ace_dragging_ignoreWeightCarry = 1; // Ignore weight limitation for carrying (0-no, 1-yes)
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
            class _xx_104_weapon_DC15S{
                count = 2;
                weapon = "JA_104th_DC15S";
            };
            class _xx_104_weapon_DC17SA{
                count = 2;
                weapon = "JA_104th_DC17SA";
            };
        };
        class TransportMagazines
        {
            class _xx_JLTS_stun_mag_long{
                count = 10;
                magazine = "JLTS_stun_mag_long";
            };
            class _xx_JLTS_stun_mag_short{
                count = 10;
                magazine = "JLTS_stun_mag_short";
            };
            class _xx_JA_104th_Weapons_Mags_5mw70{
                count = 20;
                magazine = "JA_104th_Weapons_Mags_5mw70";
            };
            class _xx_JA_104th_Weapons_Mags_10mw20SC{
                count = 20;
                magazine = "JA_104th_Weapons_Mags_10mw20SC";
            };
            class _xx_JA_104th_Weapons_Mags_10mw4SC{
                count = 10;
                magazine = "JA_104th_Weapons_Mags_10mw4SC";
            };
            class _xx_JA_104th_Weapons_Mags_10mw30{
                count = 40;
                magazine = "JA_104th_Weapons_Mags_10mw30";
            };
            class _xx_JA_104th_Weapons_Mags_10mw50{
                count = 20;
                magazine = "JA_104th_Weapons_Mags_10mw50";
            };
            class _xx_JA_104th_Weapons_Mags_10mw500{
                count = 10;
                magazine = "JA_104th_Weapons_Mags_10mw500";
            };
            class _xx_JA_104th_Weapons_Mags_20mw40{
                count = 20;
                magazine = "JA_104th_Weapons_Mags_20mw40";
            };
            class _xx_JA_104th_Weapons_Mags_20mw240{
                count = 20;
                magazine = "JA_104th_Weapons_Mags_20mw240";
            };
            class _xx_JA_104th_Weapons_Mags_30mw20{
                count = 20;
                magazine = "JA_104th_Weapons_Mags_30mw20";
            };
            class _xx_JA_104th_Weapons_Mags_30mw12{
                count = 20;
                magazine = "JA_104th_Weapons_Mags_30mw12";
            };
            class _xx_JA_104th_Weapons_Mags_40mw10{
                count = 20;
                magazine = "JA_104th_Weapons_Mags_40mw10";
            };
            class _xx_JA_104th_Weapons_Mags_50mw5{
                count = 20;
                magazine = "JA_104th_Weapons_Mags_50mw5";
            };
            class _xx_JA_104th_Weapons_Mags_100Mw1{
                count = 10;
                magazine = "JA_104th_Weapons_Mags_100Mw1";
            };
            class _xx_JA_104th_Weapons_Mags_LC{
                count = 10;
                magazine = "JJA_104th_Weapons_Mags_LC";
            };
            class _xx_JA_104th_Weapons_Mags_RPS{
                count = 10;
                magazine = "ls_mag_rpg_1rnd";
            };
            class _xx_JA_104th_Weapons_Mags_GL_smoke_white6{
                count = 10;
                magazine = "JA_104th_Weapons_Mags_GL_smoke_white6";
            };
            class _xx_JA_104th_Weapons_Mags_GL_smoke_red3{
                count = 10;
                magazine = "JA_104th_Weapons_Mags_GL_smoke_red3";
            };
            class _xx_JA_104th_Weapons_Mags_GL_HE3{
                count = 10;
                magazine = "JA_104th_Weapons_Mags_GL_HE3";
            };
            class _xx_JA_104th_Weapons_Mags_GL_HE2{
                count = 10;
                magazine = "JA_104th_Weapons_Mags_GL_HE2";
            };
            class _xx_JA_Aux501_Weapons_Mags_mar1_csw{
                count = 5;
                magazine = "Aux501_Weapons_Mags_mar1_csw";
            };
        };
         class TransportItems
        {
            class _xx_ACE_elasticBandage{
                count = 100;
                name = "ACE_elasticBandage";
            };
            class _xx_ACE_epinephrine{
                count = 40;
                name = "ACE_epinephrine";
            };
            class _xx_ACE_morphine{
                count = 40;
                name = "ACE_morphine";
            };
            class _xx_ACE_packingBandage{
                count = 60;
                name = "ACE_packingBandage";
            };
            class _xx_ACE_quikclot{
                count = 60;
                name = "ACE_quikclot";
            };
            class _xx_ACE_salineIV{
                count = 10;
                name = "ACE_salineIV";
            };
            class _xx_ACE_salineIV_500{
                count = 10;
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
        sideAirFriction = .1;
        laserLock = 1;
        missileLockCone = 180;
        missileKeepLockedCone = 90;
        autoSeekTarget = 0;
        artilleryLock = 0;
        trackOversteer = 1;
        trackLead = 0.95;
        maneuvrability = 16;
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
                            class GroundTarget {
                                minRange = 30000;
                                maxRange = 30000;
                                objectDistanceLimitCoef = -1;
                                viewDistanceLimitCoef = -1;
                            };
                            maxTrackableSpeed = 300;
                            angleRangeHorizontal = 180;
                            angleRangeVertical = 180;
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
        canLock = 2;
		modes[] = {"LoalAltitude"};
		class EventHandlers
        {
            //fired = "hint 'Fired eventhandler called'";
            fired = "_this spawn FC_Dropcrate_A";
        };
	};
};