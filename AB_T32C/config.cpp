#include "basicDefines_A3.hpp"
class DefaultEventhandlers;
class UniformSlotInfo;
class CfgPatches
{
	class Jangos_Armory_Blasters
	{
		author = "Jango's Finest";
		requiredVersion = 0.1;
		requiredAddons[] = {};
		units[] = {
			"JA_104th_Box_Ammo_mk2",
			};
			// Add Shield variants to 1 handed guns (15S, DP23, 17A/H)
		weapons[] = {

			"JA_AB_T32C"
		};
		ammo[] = {

			"JA_104th_Weapons_Ammo_base_blue"
		};

		magazines[] = {


			"JA_104th_Weapons_Mags_5mw70"
		};	
	};
};

class CfgRecoil
{
    class recoil_default;

    class JA_104th_Z7_recoil: recoil_default
    {
        kickBack[] = {0.045,0.08};
        muzzleOuter[] = {0.3,0.3,0.3,0.2};
        permanent = 0.03;
        temporary = 0.02;
    };
};

class CowsSlot;
class MuzzleSlot;
class PointerSlot;
class UnderBarrelSlot;

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;


class CfgWeapons
{
	class InventoryItem_Base_F;
	class InventoryMuzzleItem_Base_F;
    class InventoryOpticsItem_Base_F;
	class ItemCore;

	class Weapon_Base_F;
    class Rifle_Base_F;
    class UGL_F;

    class arifle_MX_Base_F: Rifle_Base_F
    {
        class WeaponSlotsInfo;
    };

   class JA_104th_muzzle_flash: ItemCore
    {
        scope = 2;
        scopeInArsenal = 2;
        author = "Jango's Armory Aux Team";
        displayName = "Flash Hider Chip";
        model = "";
        picture = "\Jangos_Armory_Blasters\data\accessories\icon_flashhider_ca.paa";
        class ItemInfo: InventoryMuzzleItem_Base_F
        {
            mass = 10;
            class MagazineCoef
            {
                initSpeed = 1.0;
            };
            class AmmoCoef
            {
                hit = 1;
                typicalSpeed = 1;
                airFriction = 1;
                visibleFire = 1;
                audibleFire = 1;
                visibleFireTime = 1;
                audibleFireTime = 1;
                cost = 1.0;
            };
            soundTypeIndex = 0;
            muzzleEnd = "zaslehPoint";
            alternativeFire = "Zasleh2";
            class MuzzleCoef
            {
                dispersionCoef = 1.0;
                artilleryDispersionCoef = 1.0;
                fireLightCoef = 0.1;
                recoilCoef = 1.0;
                recoilProneCoef = 1.0;
                minRangeCoef = 1.0;
                minRangeProbabCoef = 1.0;
                midRangeCoef = 1.0;
                midRangeProbabCoef = 1.0;
                maxRangeCoef = 1.0;
                maxRangeProbabCoef = 1.0;
            };
        };
        inertia = 0.1;
    };

    class JA_104th_muzzle_suppressor: muzzle_snds_338_black
    {
        scope = 2;
        displayName = "Suppressor Chip";
        author = "Jango's Armory Aux Team";
        picture = "\Jangos_Armory_Blasters\data\accessories\icon_gray_chip_64_ca.paa";
        model = "";
        class ItemInfo: InventoryMuzzleItem_Base_F
        {
            soundTypeIndex = 1;
            class MagazineCoef
            {
                initSpeed = 0.67;
            };
            class AmmoCoef
            {
                hit = 1;
                visibleFire = 0.1;
                audibleFire = 0.1;
                visibleFireTime = 1;
                audibleFireTime = 1;
                cost = 1;
                typicalSpeed = 1;
                airFriction = 1;
            };
            muzzleEnd = "zaslehPoint";
            alternativeFire = "Zasleh2";
            class MuzzleCoef
            {
                dispersionCoef = "1.0f";
                artilleryDispersionCoef = "1.0f";
                fireLightCoef = "0.1f";
                recoilCoef = "1.0f";
                recoilProneCoef = "1.0f";
                minRangeCoef = "1.0f";
                minRangeProbabCoef = "1.0f";
                midRangeCoef = "1.0f";
                midRangeProbabCoef = "1.0f";
                maxRangeCoef = "1.0f";
                maxRangeProbabCoef = "1.0f";
            };
        };
    };
    
  class Blaster_base: arifle_MX_Base_F
    {
        author = "Fish";
        ACE_Overheating_mrbs = 0;
        canShootInWater = 1;
        fireLightDuration = 0.05;
        fireLightIntensity = 0.2;
        fireLightDiffuse[] = {0,0,1};
        fireLightAmbient[] = {0,0,1};
        JLTS_hasElectronics = 0;
        JLTS_hasEMPProtection = 0;
        magazines[] = {};
        magazineWell[] = {};
        modes[] = {"Single","Burst","FullAuto"};
        drySound[] = {"swlw_rework\sounds\dc\DC_noAmmo.wss",5,1,20};
        muzzles[] =
        {
            "this",
            "Stun"
        };
        class Stun: JA_104th_stun_muzzle
        {
            displayName = "High Energy Stun Mode";
            magazines[] =
            {
                "JA_104th_Weapons_Mags_stun10"
            };
        };
        class Single: Mode_SemiAuto
        {
            reloadTime = 0.096;
            recoil = "recoil_single_mx";
            recoilProne = "recoil_single_prone_mx";
            dispersion = 0.00073;
        };
        class Burst: Mode_Burst
        {
            reloadTime = 0.1;
            dispersion = 0.00066;
            soundContinuous = 0;
            soundBurst = 0;
        };
        class FullAuto: Mode_FullAuto
        {
            reloadTime = 0.125;
            recoil = "recoil_auto_mx";
            recoilProne = "recoil_auto_prone_mx";
            dispersion = 0.00073;
        };
        class fullauto_medium: FullAuto
        {
            dispersion = 0.00073;
            showToPlayer = 0;
            burst = 3;
            aiBurstTerminable = 1;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 0.125;
            aiRateOfFireDistance = 200;
        };
        class single_medium: Single
        {
            showToPlayer = 0;
            dispersion = 0.00073;
            requiredOpticType = 1;
            minRange = 2;
            minRangeProbab = 0.2;
            midRange = 450;
            midRangeProbab = 0.7;
            maxRange = 650;
            maxRangeProbab = 0.2;
            aiRateOfFire = 0.096;
            aiRateOfFireDistance = 600;
        };
        class single_far: single_medium
        {
            dispersion = 0.00073;
            requiredOpticType = 2;
            minRange = 100;
            minRangeProbab = 0.2;
            midRange = 550;
            midRangeProbab = 0.7;
            maxRange = 800;
            maxRangeProbab = 0.05;
            aiRateOfFire = 0.096;
            aiRateOfFireDistance = 800;
        };
        class WeaponSlotsInfo
        {
            mass = 30;
            class CowsSlot: CowsSlot
            {
                displayName = "Optics Slot";
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
                iconPinpoint = "Bottom";
                iconPosition[] = {0.5,0.35};
                iconScale = 0.2;
                linkProxy = "\a3\data_f\proxies\weapon_slots\TOP";
                scope = 0;
                compatibleItems[] = {};
            };
            class MuzzleSlot: MuzzleSlot
            {
                compatibleItems[] = {};
                linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
                displayName="$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
                iconPicture="\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
                iconPinpoint="Center";
                iconPosition[] = {0.24,0.35};
                iconScale = 0.2;
            };
            class PointerSlot: PointerSlot
            {
                linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
                displayName = "Pointer Slot";
                compatibleItems[] = {}; 
            };
            class UnderBarrelSlot: UnderBarrelSlot
            {
                iconPicture="\A3\Weapons_F_Mark\Data\UI\attachment_under.paa";
                iconPinpoint="Bottom";
                linkProxy="\A3\Data_F_Mark\Proxies\Weapon_Slots\UNDERBARREL";
                compatibleItems[] = {};
            };
        };
    };

    class JA_104th_DC15A: Blaster_base
    {
    	ACE_barrelTwist = 279;
    	ACE_barrelLength = 508;
    	ACE_twistDirection = 1;
        scope = 2;
        displayName = "[104th] DC-15A";
        baseWeapon = "JA_104th_DC15A";
        picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_plastic_ui_ca.paa";
        model = "\MRC\JLTS\weapons\DC15A\DC15A_plastic.p3d";
        mass = 97;
        handAnim[] = {"OFP2_ManSkeleton","\MRC\JLTS\weapons\DC15A\anims\DC15A_handanim.rtm"};
        reloadAction = "GestureReload_JLTS_DC15A";
        reloadTime = 0.1;
        recoil = "recoil_mx";
        magazines[]=
        {
        	"JA_104th_Weapons_Mags_10mw50",
            "JA_104th_Weapons_Mags_20mw40",
            "JA_104th_Weapons_Mags_30mw20"
        };
        modelOptics = "3AS\3AS_Weapons\Data\3AS_2D_Optic.p3d";
        class stun: JA_104th_stun_muzzle{};
        class OpticsModes
        {
            class Ironsights
            {
                opticsID = 1;
                useModelOptics = 0;
                opticsFlare = "true";
                opticsPPEffects[] = {"OpticsCHAbera5","OpticsBlur5"};
                opticsDisablePeripherialVision = 0.67;
                opticsZoomMin = 0.25;
                opticsZoomMax = 1.1;
                opticsZoomInit = 0.75;
                memoryPointCamera = "eye";
                visionMode[] = {};
                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
            class Scope: Ironsights
            {
                opticsID = 2;
                useModelOptics = 1;
                opticsPPEffects[] = {"OpticsCHAbera5","OpticsBlur5"};
                opticsDisablePeripherialVision = 0.67;
                opticsZoomMin = 0.125;
                opticsZoomMax = 0.125;
                opticsZoomInit = 0.125;
                memoryPointCamera = "opticView";
                visionMode[] = {"Normal","NVG"};
                opticsFlare = "true";
                distanceZoomMin = 100;
                distanceZoomMax = 100;
                cameraDir = "";
            };
        };
        modes[] = {"Single","Burst","FullAuto"};
        class Single: Single
        {
            reloadTime=0.08;		
            dispersion=0.0006;
            sounds[] = {"StandardSound"};
            class BaseSoundModeType
            {
                weaponSoundEffect = "";
                begin1[] = {"\Jangos_Armory_Blasters\data\sounds\dc15a_shot.wss",+3db,1,2200};
                closure1[] = {};
                closure2[] = {};
                soundClosure[] = {};
            };
            class StandardSound: BaseSoundModeType
            {
                weaponSoundEffect = "";
                begin1[] = {"\Jangos_Armory_Blasters\data\sounds\dc15a_shot.wss",+3db,1,2200};
                soundBegin[] = {"begin1",1};
                closure1[] = {};
                closure2[] = {};
                soundClosure[] = {};
            };
        };
        class Burst: Burst
        {
            reloadTime=0.055;
            dispersion=0.00035;
            sounds[] = {"StandardSound"};
            class BaseSoundModeType
            {
                weaponSoundEffect = "";
                begin1[] = {"\Jangos_Armory_Blasters\data\sounds\dc15a_shot.wss",+3db,1,2200};
                closure1[] = {};
                closure2[] = {};
                soundClosure[] = {};
            };
            class StandardSound: BaseSoundModeType
            {
                weaponSoundEffect = "";
                begin1[] = {"\Jangos_Armory_Blasters\data\sounds\dc15a_shot.wss",+3db,1,2200};
                soundBegin[] = {"begin1",1};
                closure1[] = {};
                closure2[] = {};
                soundClosure[] = {};
            };
        };
        class FullAuto: FullAuto
        {
            reloadTime = 0.12;
            dispersion = 0.0006;
            sounds[] = {"StandardSound"};
            class BaseSoundModeType
            {
                weaponSoundEffect = "";
                begin1[] = {"\Jangos_Armory_Blasters\data\sounds\dc15a_shot.wss",+3db,1,2200};
                closure1[] = {};
                closure2[] = {};
                soundClosure[] = {};
            };
            class StandardSound: BaseSoundModeType
            {
                weaponSoundEffect = "";
                begin1[] = {"\Jangos_Armory_Blasters\data\sounds\dc15a_shot.wss",+3db,1,2200};
                soundBegin[] = {"begin1",1};
                closure1[] = {};
                closure2[] = {};
                soundClosure[] = {};
            };
        };
		class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class CowsSlot: CowsSlot
            {
                displayName = "Optics Slot";
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
                iconPinpoint = "Bottom";
                iconPosition[] = {0.5,0.35};
                iconScale = 0.2;
                linkProxy = "\a3\data_f\proxies\weapon_slots\TOP";
                compatibleItems[] = 
                {
                    "JA_104th_cows_RCO",
                    "JA_104th_cows_RCO_2",
                    "JA_104th_cows_RCO_3",
                    "JA_104th_cows_Holosight",
                    "JA_104th_cows_Holosight_2",
                    "JA_104th_cows_Holosight_3",
                    "JA_104th_cows_MRCO",
                    "JA_104th_cows_MRCO_2",
                    "JA_104th_cows_MRCO_3",
                    "JA_104th_cows_DMS",
                    "JA_104th_cows_DMS_2",
                    "JA_104th_cows_DMS_3",
                    "JA_104th_cows_DMS_4",
                    "JA_104th_cows_LEScope_DC15A"
                };
            };
            class MuzzleSlot: MuzzleSlot
            {
                linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
                displayName="$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
                compatibleItems[]=
                {
                	"3AS_Muzzle_LE_DC15A",
                    "JA_104th_muzzle_flash"
                };
            };
            class PointerSlot: PointerSlot
            {
                compatibleItems[] = {"acc_flashlight","acc_pointer_IR"};
                iconPicture="\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
                iconPinpoint="Center";
                linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
                displayName = "Pointer Slot"; 
            };
        };
    };
   class JA_AB_T_32C_UGL: JA_104th_DC15A
    {
        displayName="[104th AB] T_32C UGL";
        baseWeapon="JA_AB_T_32C_UGL";
        mass = 110;
        model = "\MRC\JLTS\weapons\DC15A\DC15A_ugl_plastic.p3d";
        handAnim[] = {"OFP2_ManSkeleton","\MRC\JLTS\weapons\DC15A\anims\DC15A_handanim.rtm"};
        reloadAction = "3AS_GestureReloadDC15A";
        muzzles[]=
        {
            "this",
            "Stun",
            "DC15A_UGL"
        };
        class T_32C_UGL: UGL_F
        {
            cursorAim = "gl";
            displayName = "[104th] Over-Under Grenade Launcher";
            descriptionShort = "Underbarrel GL Module for DC15A";
            distanceZoomMax = 400;
            distanceZoomMin = 400;
            useModelOptics = 0;
            useExternalOptic = 0;
            cameraDir = "OP_look";
            discreteDistance[] = {100,200,300,400};
            discreteDistanceCameraPoint[] = {"OP_eye","OP_eye2","OP_eye3","OP_eye4"};
            discreteDistanceInitIndex = 0;
            memoryPointCamera = "UGL eye";
            modelOptics = "-";
            optics = 1;
            magazines[] = 
            {
                "JA_104th_Weapons_Mags_GL_HE2",
                "JA_104th_Weapons_Mags_10mw4SC",

            	"JA_104th_Weapons_Mags_GL_smoke_white6",
            	"JA_104th_Weapons_Mags_GL_smoke_purple3",
            	"JA_104th_Weapons_Mags_GL_smoke_yellow3",
            	"JA_104th_Weapons_Mags_GL_smoke_red3",
            	"JA_104th_Weapons_Mags_GL_smoke_green3",
            	"JA_104th_Weapons_Mags_GL_smoke_blue3",
            	"JA_104th_Weapons_Mags_GL_smoke_orange3",

            	"JA_104th_Weapons_Mags_GL_flare_White3",
            	"JA_104th_Weapons_Mags_GL_flare_IR3",
            	"JA_104th_Weapons_Mags_GL_flare_Green3",
            	"JA_104th_Weapons_Mags_GL_flare_Red3",
            	"JA_104th_Weapons_Mags_GL_flare_Yellow3",
            	"JA_104th_Weapons_Mags_GL_flare_Blue3",
            	"JA_104th_Weapons_Mags_GL_flare_Cyan3",
            	"JA_104th_Weapons_Mags_GL_flare_Purple3"
            };
            magazineWell[] = {"UGL_40x36","CBA_40mm_M203","CBA_40mm_EGLM"};
            maxRange = 400;
            midRange = 200;
            minRange = 30;
            reloadAction = "GestureReloadMXUGL";
            reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_UGL_reload",1,1,10};
            class Single: Mode_SemiAuto
            {
                sounds[] = {"StandardSound"};
                class BaseSoundModeType
                {
                    weaponSoundEffect = "";
                    closure1[] = {};
                    closure2[] = {};
                    soundClosure[] = {};
                };
                class StandardSound: BaseSoundModeType
                {
                    weaponSoundEffect = "";
                    begin1[] = {"SWLW_clones\rifles\gl\sounds\gl",1,1,1800};
                    begin2[] = {"SWLW_clones\rifles\gl\sounds\gl",1,1,1800};
                    begin3[] = {"SWLW_clones\rifles\gl\sounds\gl",1,1,1800};
                    soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
                };
            };
        };
    };
};

class CfgAmmo
{
    class JLTS_bullet_carbine_blue;

    class JA_T32C_Ammo_base_blue: JLTS_bullet_carbine_blue
    {
        ACE_ammoTempMuzzleVelocityShifts = [ -26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19 ];
        ACE_ballisticCoefficients = [0.322];
        ACE_barrelLengths = [ 508, 660.4, 711.2 ];
        ACE_bulletLength = 39.573;
        ACE_bulletMass = 16.2;
        ACE_caliber = 8.585;
        ACE_damageType = "bullet";
        ACE_dragModel = 7;
        ACE_muzzleVelocities = [ 880, 915, 925 ];
        ACE_muzzleVelocityVariationSD = 0.3;
        ACE_standardAtmosphere = "ICAO";
        ace_vehicle_damage_incendiary = 0.1;
        ACE_velocityBoundaries = [];
        aiAmmoUsageFlags = "64 + 128 + 256";
        airfriction = 0;
        airlock = 1;
        animated = 0;
        artilleryCharge = 1;
        artilleryDispersion = 1;
        artilleryLock = 0;
        audibleFire = 80;
        autoSeekTarget = 0;
        caliber = 2;
        cartridge = "";
        cmImmunity = 1;
        coefgravity = 0;
        cost = 6;
        dangerRadiusBulletClose = 10;
        dangerRadiusHit = 14;
        deflecting = 0;
        deflectionSlowDown = 0.8;
        explosive = 0;
        fuseDistance = 0;
        hit = 16;
        icon = "";
        indirectHit = 0;
        indirectHitRange = 0;
        initTime = 0;
        irLock = 0;
        irtarget = 1;
        laserLock = 0;
        lockSeekRadius = 100;
        lockType = 0;
        maneuvrability = 1;
        manualControl = 0;
        maverickweaponIndexOffset = 0;
        maxControlRange = 350;
        maxSpeed = 0;
        minDamageForCamShakeHit = 0.55;
        mineBoundingDist = 3;
        mineBoundingTime = 3;
        mineDiveSpeed = 1;
        mineFloating = -1;
        mineInconspicuousness = 10;
        minePlaceDist = 0.5;
        mineTrigger = "RangeTrigger";
        minimumSafeZone = 0.1;
        minTimeToLive = 0;
        missileLockCone = 0;
        model = "Jangos_Armory_Blasters\data\JA_104th_Weapons_Ammo_Tracers_Medium_Blue.p3d";
        nvLock = 0;
        nvgonly = 0;
        shootDistraction = -1;
        sideAirFriction = 1;
        simulation = "shotBullet";
        simulationStep = 0.05;
        submunitionAmmo = "";
        suppressionRadiusBulletClose = 8;
        suppressionRadiusHit = 10;
        thrust = 210;
        thrustTime = 1.5;
        timeToLive = 4;
        tracerscale = 1.5;
        tracerstarttime = 0;
        tracerendtime = 10;
        trackLead = 1;
        trackOversteer = 1;
        typicalSpeed = 890;
        underwaterHitRangeCoef = 1;
        visibleFire = 3;
        visibleFireTime = 3;
        waterEffectOffset = 0.8;
        weaponLockSystem = 0;
        weaponType = "Default";
        whistleDist = 0;
        whistleOnFire = 0;
    };
    class JA_T32C_Ammo_40mw: JA_T32C_Ammo_base_blue // High Output 
    {
        hit = 60;
        typicalSpeed = 5000;
        caliber = 3.6;
        airFriction = 0.05;
        waterFriction = -0.009;
    };
    class JA_T32C_Ammo_30mw: JA_T32C_Ammo_base_blue // High Capacity 
    {
        hit = 30;
        typicalSpeed = 3500;
        caliber = 2.6;
        airFriction = 0.1;
        waterFriction = -0.009;
    };
};

class CfgMagazines
{
	class 30Rnd_65x39_caseless_mag;

        class JA_104th_Weapons_Mags_40mw30: 30Rnd_65x39_caseless_mag
    {
        displayName = "[104th AB] 30Rnd 40MW Cell";
        displayNameShort = "30Rnd 40MW";
        author = "Jango's Armory Aux Team";
        picture = "\MRC\JLTS\weapons\DC15x\data\ui\DC15X_mag_ui_ca.paa";
        count = 30;
        ammo = "JA_T32C_Ammo_40mw";
        initSpeed = 1100;
        descriptionShort = "T-32C High Power magazine";
        mass = 10;
        modelSpecial = "";
        modelSpecialIsProxy = 0;
        model = "";
        tracersEvery = 1;
    };
    class JA_104th_Weapons_Mags_30mw60: 30Rnd_65x39_caseless_mag
    {
        displayName = "[104th AB] 60Rnd 30MW Cell";
        displayNameShort = "60Rnd 30MW";
        author = "Jango's Armory Aux Team";
        picture = "\MRC\JLTS\weapons\DC15x\data\ui\DC15X_mag_ui_ca.paa";
        count = 60;
        ammo = "JA_T32C_Ammo_30mw";
        initSpeed = 1100;
        descriptionShort = "T-32C High Capacity magazine";
        mass = 10;
        modelSpecial = "";
        modelSpecialIsProxy = 0;
        model = "";
        tracersEvery = 1;
    };
};
