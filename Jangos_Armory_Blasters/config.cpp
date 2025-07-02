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

            "JA_104th_DC15A",
            "JA_104th_DC15A_UGL",

            "JA_104th_DC15C",
            "JA_104th_DC15C_UGL",

            "JA_104th_DC15L",

            "JA_104th_DC15S",
            "JA_104th_DC15S_UGL",

            "JA_104th_DC15X",

            "JA_104th_FP773",

            "JA_104th_DC17M",

            "JA_104th_DP23",

            "JA_104th_WestarM4",
            "JA_104th_WestarM5",

            "JA_104th_Westar35S",

            //"JA_104th_Valken38Y",

            "JA_104th_Z6",

            "JA_104th_DC17SA",

            "JA_104th_DC15SA",

            "JA_104th_DC15ARC",

            "JA_104th_DC17SA_Dual",
            "JA_104th_DC17SA_Dual_LeftDummy",

            "JA_104th_Westar35SA",

            //"JA_104th_EPL2",

            "JA_104th_RPS6",

            "JA_104th_RPS6_H",

            "JA_104th_RPS6_D",

            // "JA_104th_PLX1",

            "JA_104th_Z7_mk2",

            // "JA_104th_ShoulderCannon_mk2",

            "JA_104th_muzzle_flash",

            "JA_104th_muzzle_suppressor",

            "JA_104th_cows_rco",
            "JA_104th_cows_rco_2",
            "JA_104th_cows_rco_3",

            "JA_104th_cows_mrco",
            "JA_104th_cows_mrco_2",
            "JA_104th_cows_mrco_3",

            "JA_104th_cows_Holosight",
            "JA_104th_cows_Holosight_2",
            "JA_104th_cows_Holosight_3",

            "JA_104th_cows_HoloScope",
            "JA_104th_cows_HoloScope_2",
            "JA_104th_cows_HoloScope_3",

            "JA_104th_cows_DMS",
            "JA_104th_cows_DMS_2",
            "JA_104th_cows_DMS_3",
            "JA_104th_cows_DMS_4",

            "JA_104th_cows_Holoscope_LR",
            "JA_104th_cows_Holoscope_LR_2",
            "JA_104th_cows_Holoscope_LR_3",
            "JA_104th_cows_Holoscope_LR_4",

            "JA_104th_cows_pistol",
            "JA_104th_cows_pistol_2",

            "JA_104th_cows_LRPS",

            "JA_104th_cows_LEScope_DC15A",

            "JA_104th_cows_reflex_optic"

        };
        ammo[] = {

            "JA_104th_Weapons_Ammo_base_blue",

            "JA_104th_Weapons_Ammo_5mw",
            "JA_104th_Weapons_Ammo_10mw",
            "JA_104th_Weapons_Ammo_10mwSC",
            "JA_104th_Weapons_Ammo_20mw",
            "JA_104th_Weapons_Ammo_30mw",
            "JA_104th_Weapons_Ammo_40mw",
            "JA_104th_Weapons_Ammo_50mw",

            "JA_104th_Weapons_Ammo_100mw",
            "JA_104th_Weapons_Ammo_17MAT",

            "JA_104th_Weapons_Ammo_EMP",

            "JA_104th_Weapons_Ammo_GL_HE",
            "JA_104th_Weapons_Ammo_GL_AP",

            "JA_104th_Weapons_Ammo_GL_smoke_white",
            "JA_104th_Weapons_Ammo_GL_smoke_purple",
            "JA_104th_Weapons_Ammo_GL_smoke_yellow",
            "JA_104th_Weapons_Ammo_GL_smoke_red",
            "JA_104th_Weapons_Ammo_GL_smoke_green",
            "JA_104th_Weapons_Ammo_GL_smoke_blue",
            "JA_104th_Weapons_Ammo_GL_smoke_orange",

            "JA_104th_Weapons_Ammo_flare_white",
            "JA_104th_Weapons_Ammo_flare_green",
            "JA_104th_Weapons_Ammo_flare_red",
            "JA_104th_Weapons_Ammo_flare_yellow",
            "JA_104th_Weapons_Ammo_flare_ir",
            "JA_104th_Weapons_Ammo_flare_blue",
            "JA_104th_Weapons_Ammo_flare_cyan",
            "JA_104th_Weapons_Ammo_flare_purple",

        };

        magazines[] = {

            "JA_104th_Weapons_Mags_10mw500",
            "JA_104th_Weapons_Mags_10mw40",
            "JA_104th_Weapons_Mags_10mw50",
            "JA_104th_Weapons_Mags_10mw80",

            "JA_104th_Weapons_Mags_20mw70",
            "JA_104th_Weapons_Mags_20mw200",
            "JA_104th_Weapons_Mags_20mw300",

            "JA_104th_Weapons_Mags_30mw50",
            "JA_104th_Weapons_Mags_30mw12",

            "JA_104th_Weapons_Mags_40mw40",
            "JA_104th_Weapons_Mags_40mw10",

            "JA_104th_Weapons_Mags_50mw5",

            "JA_104th_Weapons_Mags_10mw20SC",
            "JA_104th_Weapons_Mags_20mw16SC_Slug",

            "JA_104th_Weapons_Mags_100Mw1",
            "JA_104th_Weapons_Mags_EMPMw2",

            "JA_104th_Weapons_Mags_LaserCannon2",

            "JA_104th_Weapons_Mags_100mw_AT",

            "JA_104th_Weapons_Mags_10mw4SC",

            "JA_104th_Weapons_Mags_GL_HE2",
            "JA_104th_Weapons_Mags_GL_HE3",
            "JA_104th_Weapons_Mags_GL_AP2",

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
            "JA_104th_Weapons_Mags_GL_flare_Purple3"};
    };
};

class CfgEditorCategories
{
    class JA_104_EdCat_Objects
    {
        displayName = "[104th] Objects";
    }
};

class cfgEditorSubcategories
{
    class 104th_Categ_Clones_Boxes
    {
        displayname = "104th - Boxes";
    };
};

class CfgRecoil
{
    class recoil_default;

    class JA_104th_Z7_recoil : recoil_default
    {
        kickBack[] = {0.045, 0.08};
        muzzleOuter[] = {0.3, 0.3, 0.3, 0.2};
        permanent = 0.03;
        temporary = 0.02;
    };

    class JA_104th_ShoulderCannon_recoil : recoil_default
    {
        kickBack[] = {0.045, 0.08};
        muzzleOuter[] = {0.3, 0.3, 0.3, 0.2};
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
    class BaseSoundModeType;

    class Weapon_Base_F;
    class Rifle_Base_F;
    class Pistol_Base_F;
    class Launcher;
    class UGL_F;

    class JLTS_stun_muzzle;
    class LFP_dc17arc_Dual;
    class ls_weapon_dualDC17_secondary;
    class ls_weapon_dualDC17Left_dummy;
    class ls_weapon_rps6;
    class ls_weapon_rps6_disposable;
    class ls_weapon_at_plx1;
    class SWLW_Z7;
    class SDT_IonDisruptor;
    class 3AS_RPS6_HP;
    class 3AS_RPS6_F;

    class arifle_MX_Base_F : Rifle_Base_F
    {
        class WeaponSlotsInfo;
    };

    class hgun_P07_F : Pistol_Base_F
    {
        class WeaponSlotsInfo;
    };

    class 3AS_pistol_DC15SA_Base_F : Pistol_Base_F
    {
        class WeaponSlotsInfo;
    };

    class Launcher_Base_F : Launcher
    {
        class GunParticles;
        class WeaponSlotsInfo;
    };
    class launch_Titan_base;
    class launch_Titan_short_base : launch_Titan_base
    {
        class WeaponSlotsInfo;
    };
    class optic_DMS : ItemCore
    {
        class ItemInfo;
    };
    class optic_Hamr : ItemCore
    {
        class ItemInfo;
    };
    class optic_MRCO : ItemCore
    {
        class ItemInfo;
    };
    class optic_Holosight : ItemCore
    {
        class ItemInfo;
    };
    class optic_MRD : ItemCore
    {
        class ItemInfo;
    };
    class OPTRE_SRM_Sight : ItemCore
    {
        class ItemInfo;
    };

    class muzzle_snds_338_black;

    class JA_104th_muzzle_flash : ItemCore
    {
        scope = 2;
        scopeInArsenal = 2;
        author = "Jango's Armory Aux Team";
        displayName = "Flash Hider Chip";
        model = "";
        picture = "\Jangos_Armory_Blasters\data\accessories\icon_flashhider_ca.paa";
        class ItemInfo : InventoryMuzzleItem_Base_F
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

    class JA_104th_muzzle_suppressor : muzzle_snds_338_black
    {
        scope = 2;
        displayName = "Suppressor Chip";
        author = "Jango's Armory Aux Team";
        picture = "\Jangos_Armory_Blasters\data\accessories\icon_gray_chip_64_ca.paa";
        model = "";
        class ItemInfo : InventoryMuzzleItem_Base_F
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

    class JA_104th_cows_rco : optic_Hamr
    {
        author = "Jango's Armory Aux Team";
        scope = 2;
        displayName = "Short Range Scope A";
        picture = "\Jangos_Armory_Blasters\data\accessories\JA_104th_ico_sr_01_ca.paa";
        model = "\Jangos_Armory_Blasters\data\accessories\JA_104th_hamr_1.p3d";
        descriptionShort = "HAMR SR 2-4x Scope";
        weaponInfoType = "RscOptics_sos";
        class ItemInfo : ItemInfo
        {
            mass = 8;
            opticType = 1;
            optics = 1;
            modelOptics = "\Jangos_Armory_Blasters\data\accessories\JA_104th_hamr_scope_1";
            class OpticsModes
            {
                class Hamr2Collimator
                {
                    opticsID = 1;
                    useModelOptics = 0;
                    opticsPPEffects[] = {"Default"};
                    opticsFlare = 0;
                    opticsDisablePeripherialVision = 0;
                    opticsZoomMin = 0.25;
                    opticsZoomMax = 1.25;
                    opticsZoomInit = 0.75;
                    memoryPointCamera = "eye";
                    visionMode[] = {};
                    distanceZoomMin = 200;
                    distanceZoomMax = 200;
                };
                class Hamr2Scope
                {
                    opticsID = 2;
                    useModelOptics = 0;
                    opticsPPEffects[] = {"OpticsCHAbera5", "OpticsBlur5"};
                    opticsFlare = 1;
                    opticsDisablePeripherialVision = 1;
                    opticsZoomMin = "0.25/2";
                    opticsZoomMax = "0.25/4";
                    opticsZoomInit = "0.25/2";
                    discreteinitIndex = 0;
                    discretefov[] = {"0.25/2", "0.25/4"};
                    discreteDistanceInitIndex = 1;
                    memoryPointCamera = "opticView";
                    visionMode[] = {};
                    distanceZoomMin = 300;
                    distanceZoomMax = 300;
                };
            };
        };
        inertia = 0.1;
    };
    class JA_104th_cows_rco_2 : JA_104th_cows_rco
    {
        picture = "\Jangos_Armory_Blasters\data\accessories\JA_104th_ico_sr_02_ca.paa";
        model = "\Jangos_Armory_Blasters\data\accessories\JA_104th_hamr_2.p3d";
        displayName = "Short Range Scope B";
        class ItemInfo : ItemInfo
        {
            modelOptics = "\Jangos_Armory_Blasters\data\accessories\JA_104th_hamr_scope_2";
        };
    };
    class JA_104th_cows_rco_3 : JA_104th_cows_rco
    {
        picture = "\Jangos_Armory_Blasters\data\accessories\JA_104th_ico_sr_03_ca.paa";
        model = "\Jangos_Armory_Blasters\data\accessories\JA_104th_hamr_3.p3d";
        displayName = "Short Range Scope C";
        class ItemInfo : ItemInfo
        {
            modelOptics = "\Jangos_Armory_Blasters\data\accessories\JA_104th_hamr_scope_3";
        };
    };

    class JA_104th_cows_mrco : optic_mrco
    {
        author = "Jango's Armory Aux Team";
        scope = 2;
        displayName = "Medium Range Scope A";
        picture = "\Jangos_Armory_Blasters\data\accessories\JA_104th_ico_mr_01_ca.paa";
        model = "\Jangos_Armory_Blasters\data\accessories\JA_104th_mrco_1.p3d";
        descriptionShort = "MRCO MR 2-6x Scope";
        weaponInfoType = "RscOptics_sos";
        class ItemInfo : ItemInfo
        {
            mass = 8;
            opticType = 1;
            optics = 1;
            modelOptics = "\Jangos_Armory_Blasters\data\accessories\JA_104th_mrco_scope_1.p3d";
            class OpticsModes
            {
                class MRCOcq
                {
                    opticsID = 1;
                    useModelOptics = 0;
                    opticsPPEffects[] = {"Default"};
                    opticsFlare = 0;
                    opticsDisablePeripherialVision = 0;
                    opticsZoomMin = 0.25;
                    opticsZoomMax = 1.25;
                    opticsZoomInit = 0.75;
                    memoryPointCamera = "eye";
                    visionMode[] = {};
                    distanceZoomMin = 300;
                    distanceZoomMax = 300;
                };
                class MRCOscope
                {
                    opticsID = 2;
                    useModelOptics = 0;
                    opticsPPEffects[] = {"OpticsCHAbera5", "OpticsBlur5"};
                    opticsFlare = 1;
                    opticsDisablePeripherialVision = 1;
                    opticsZoomMin = "0.25/6";
                    opticsZoomMax = "0.25/2";
                    opticsZoomInit = "0.25/2";
                    discreteinitIndex = 0;
                    discretefov[] = {"0.25/2", "0.25/6"};
                    discreteDistanceInitIndex = 1;
                    memoryPointCamera = "opticView";
                    visionMode[] = {};
                    distanceZoomMin = 300;
                    distanceZoomMax = 300;
                };
            };
        };
        inertia = 0.1;
    };
    class JA_104th_cows_mrco_2 : JA_104th_cows_mrco
    {
        picture = "\Jangos_Armory_Blasters\data\accessories\JA_104th_ico_mr_02_ca.paa";
        model = "\Jangos_Armory_Blasters\data\accessories\JA_104th_mrco_2.p3d";
        displayName = "Medium Range Scope B";
        class ItemInfo : ItemInfo
        {
            modelOptics = "\Jangos_Armory_Blasters\data\accessories\JA_104th_MRCO_scope_2";
        };
    };
    class JA_104th_cows_mrco_3 : JA_104th_cows_mrco
    {
        picture = "\Jangos_Armory_Blasters\data\accessories\JA_104th_ico_mr_03_ca.paa";
        model = "\Jangos_Armory_Blasters\data\accessories\JA_104th_mrco_3.p3d";
        displayName = "Medium Range Scope C";
        class ItemInfo : ItemInfo
        {
            modelOptics = "\Jangos_Armory_Blasters\data\accessories\JA_104th_MRCO_scope_3";
        };
    };

    class JA_104th_cows_Holosight : optic_Holosight
    {
        author = "Jango's Armory Aux Team";
        scope = 2;
        displayName = "Holo Sight A";
        picture = "\Jangos_Armory_Blasters\data\accessories\JA_104th_ico_holo_01_ca.paa";
        model = "\Jangos_Armory_Blasters\data\accessories\JA_104th_holo_1.p3d";
        descriptionShort = "Holo 1x Scope";
        weaponInfoType = "RscWeaponZeroing";
        class ItemInfo : ItemInfo
        {
            mass = 6;
            modelOptics = "\A3\Weapons_F\empty";
            optics = 1;
            class OpticsModes
            {
                class aco
                {
                    opticsID = 1;
                    useModelOptics = 0;
                    opticsZoomMin = 0.25;
                    opticsZoomMax = 1.25;
                    opticsZoomInit = 0.75;
                    memoryPointCamera = "eye";
                    opticsFlare = 0;
                    opticsDisablePeripherialVision = 0;
                    distanceZoomMin = 200;
                    distanceZoomMax = 200;
                    cameraDir = "";
                    visionMode[] = {};
                    opticsPPEffects[] = {"OpticsBlur1"};
                };
            };
        };
        inertia = 0;
    };
    class JA_104th_cows_Holosight_2 : JA_104th_cows_Holosight
    {
        picture = "\Jangos_Armory_Blasters\data\accessories\JA_104th_ico_holo_02_ca.paa";
        model = "\Jangos_Armory_Blasters\data\accessories\JA_104th_holo_2.p3d";
        displayName = "Holo Sight B";
    };
    class JA_104th_cows_Holosight_3 : JA_104th_cows_Holosight
    {
        picture = "\Jangos_Armory_Blasters\data\accessories\JA_104th_ico_holo_03_ca.paa";
        model = "\Jangos_Armory_Blasters\data\accessories\JA_104th_holo_3.p3d";
        displayName = "Holo Sight C";
    };

    class JA_104th_cows_HoloScope : JA_104th_cows_Holosight
    {
        author = "Jango's Armory Aux Team";
        scope = 2;
        displayName = "Holo Scope A";
        picture = "\Jangos_Armory_Blasters\data\accessories\JA_104th_ico_holo_01_ca.paa";
        model = "\Jangos_Armory_Blasters\data\accessories\JA_104th_holo_1.p3d";
        descriptionShort = "Holo 1x Scope";
        weaponInfoType = "RscWeaponZeroing";
        class ItemInfo : ItemInfo
        {
            mass = 6;
            modelOptics = "\3AS\3AS_Weapons\Data\3AS_2D_Optic.p3d";
            optics = 1;
            class OpticsModes
            {
                class aco
                {
                    opticsID = 1;
                    useModelOptics = 0;
                    opticsZoomMin = 0.25;
                    opticsZoomMax = 1.25;
                    opticsZoomInit = 0.75;
                    memoryPointCamera = "eye";
                    opticsFlare = 0;
                    opticsDisablePeripherialVision = 0;
                    distanceZoomMin = 200;
                    distanceZoomMax = 200;
                    cameraDir = "";
                    visionMode[] = {};
                    opticsPPEffects[] = {"OpticsBlur1"};
                };
                class Scope : aco
                {
                    opticsID = 2;
                    useModelOptics = 1;
                    opticsPPEffects[] = {"OpticsCHAbera5", "OpticsBlur5"};
                    opticsDisablePeripherialVision = 0.67;
                    opticsZoomMin = 0.125;
                    opticsZoomMax = 0.125;
                    opticsZoomInit = 0.125;
                    memoryPointCamera = "opticView";
                    visionMode[] = {"Normal", "NVG"};
                    opticsFlare = "true";
                    distanceZoomMin = 100;
                    distanceZoomMax = 100;
                    cameraDir = "";
                };
            };
            inertia = 0;
        };
    };
    class JA_104th_cows_HoloScope_2 : JA_104th_cows_HoloScope
    {
        picture = "\Jangos_Armory_Blasters\data\accessories\JA_104th_ico_holo_02_ca.paa";
        model = "\Jangos_Armory_Blasters\data\accessories\JA_104th_holo_2.p3d";
        displayName = "Holo Scope B";
    };
    class JA_104th_cows_HoloScope_3 : JA_104th_cows_HoloScope
    {
        picture = "\Jangos_Armory_Blasters\data\accessories\JA_104th_ico_holo_03_ca.paa";
        model = "\Jangos_Armory_Blasters\data\accessories\JA_104th_holo_3.p3d";
        displayName = "Holo Scope C";
    };

    class JA_104th_cows_DMS : optic_DMS
    {
        author = "Jango's Armory Aux Team";
        scope = 2;
        displayName = "DMS LR 4-8x Scope A";
        picture = "\Jangos_Armory_Blasters\data\accessories\JA_104th_ico_lr_01_ca.paa";
        model = "\Jangos_Armory_Blasters\data\accessories\JA_104th_dms.p3d";
        descriptionShort = "Long Range Scope";
        class ItemInfo : ItemInfo
        {
            mass = 12;
            opticType = 2;
            optics = 1;
            modelOptics = "Jangos_Armory_Blasters\data\accessories\JA_104th_scope_DMS";
            class OpticsModes
            {
                class Snip
                {
                    opticsID = 1;
                    useModelOptics = 1;
                    opticsPPEffects[] = {"OpticsCHAbera2", "OpticsBlur3"};
                    opticsZoomMin = "0.25/4";
                    opticsZoomMax = "0.25/8";
                    opticsZoomInit = "0.25/4";
                    discreteinitIndex = 0;
                    discretefov[] = {"0.25/4", "0.25/6"};
                    discreteDistanceInitIndex = 1;
                    distanceZoomMin = 300;
                    distanceZoomMax = 1200;
                    memoryPointCamera = "opticView";
                    visionMode[] = {"Normal", "NVG"};
                    thermalMode[] = {5, 6};
                    opticsFlare = 1;
                    opticsDisablePeripherialVision = 0;
                    cameraDir = "";
                };
                class Iron : Snip
                {
                    opticsID = 2;
                    useModelOptics = 0;
                    opticsPPEffects[] = {"", ""};
                    opticsFlare = 0;
                    opticsDisablePeripherialVision = 0;
                    opticsZoomMin = 0.25;
                    opticsZoomMax = 1.25;
                    opticsZoomInit = 0.75;
                    memoryPointCamera = "opticView";
                    visionMode[] = {};
                    discretefov[] = {};
                    distanceZoomMin = 200;
                    distanceZoomMax = 200;
                    discreteDistance[] = {200};
                    discreteDistanceInitIndex = 0;
                };
            };
        };
        inertia = 0.2;
    };
    class JA_104th_cows_DMS_2 : JA_104th_cows_DMS
    {
        picture = "\Jangos_Armory_Blasters\data\accessories\JA_104th_ico_lr_02_ca.paa";
        model = "\Jangos_Armory_Blasters\data\accessories\JA_104th_dms_2.p3d";
        displayName = "DMS LR 4-8x Scope B";
        class ItemInfo : ItemInfo
        {
            modelOptics = "Jangos_Armory_Blasters\data\accessories\JA_104th_scope2_DMS";
        };
    };
    class JA_104th_cows_DMS_3 : JA_104th_cows_DMS
    {
        picture = "\Jangos_Armory_Blasters\data\accessories\JA_104th_ico_lr_03_ca.paa";
        model = "\Jangos_Armory_Blasters\data\accessories\JA_104th_dms_3.p3d";
        displayName = "DMS LR 4-8x Scope C";
        class ItemInfo : ItemInfo
        {
            modelOptics = "Jangos_Armory_Blasters\data\accessories\JA_104th_scope3_DMS";
        };
    };
    class JA_104th_cows_DMS_4 : JA_104th_cows_DMS
    {
        picture = "\Jangos_Armory_Blasters\data\accessories\JA_104th_ico_lr_03_ca.paa";
        model = "\Jangos_Armory_Blasters\data\accessories\JA_104th_dms_4.p3d";
        displayName = "DMS LR 4-8x Scope D";
        class ItemInfo : ItemInfo
        {
            modelOptics = "Jangos_Armory_Blasters\data\accessories\JA_104th_scope4_DMS";
        };
    };

    class JA_104th_cows_pistol : optic_MRD
    {
        author = "Jango's Armory Aux Team";
        scope = 2;
        displayName = "Pistol Holo A";
        picture = "\Jangos_Armory_Blasters\data\accessories\JA_104th_ico_pistol_01_ca.paa";
        model = "\Jangos_Armory_Blasters\data\accessories\JA_104th_pistol_1.p3d";
        descriptionShort = "Pistol Scope";
        class ItemInfo : ItemInfo
        {
            mass = 2;
            modelOptics = "\A3\Weapons_F\empty";
            optics = 1;
            class OpticsModes
            {
                class aco
                {
                    opticsID = 1;
                    useModelOptics = 0;
                    opticsZoomMin = 0.25;
                    opticsZoomMax = 1.25;
                    opticsZoomInit = 0.75;
                    memoryPointCamera = "eye";
                    opticsFlare = 0;
                    opticsDisablePeripherialVision = 0;
                    distanceZoomMin = 50;
                    distanceZoomMax = 50;
                    cameraDir = "";
                    visionMode[] = {};
                    opticsPPEffects[] = {"Default"};
                };
            };
        };
        inertia = 0;
    };
    class JA_104th_cows_pistol_2 : JA_104th_cows_pistol
    {
        picture = "\Jangos_Armory_Blasters\data\accessories\JA_104th_ico_pistol_03_ca.paa";
        model = "\Jangos_Armory_Blasters\data\accessories\JA_104th_pistol_3.p3d";
        displayName = "Pistol Holo B";
    };

    class JA_104th_cows_LRPS : optic_DMS
    {
        author = "Jango's Armory Aux Team";
        scope = 2;
        displayName = "LRPS LR 12-20x Scope";
        class ItemInfo : ItemInfo
        {
            mass = 16;
            opticType = 2;
            weaponInfoType = "RscWeaponRangeZeroingFOV";
            optics = 1;
            modelOptics = "\A3\Weapons_F\acc\reticle_sniper_F";
            class OpticsModes
            {
                class Snip
                {
                    opticsID = 1;
                    opticsDisplayName = "WFOV";
                    useModelOptics = 1;
                    opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
                    opticsZoomMin = 0.01;
                    opticsZoomMax = 0.042;
                    opticsZoomInit = 0.042;
                    discreteDistance[] = {300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000, 2100, 2200, 2300, 2400};
                    discreteDistanceInitIndex = 2;
                    distanceZoomMin = 300;
                    distanceZoomMax = 2400;
                    discretefov[] = {0.042, 0.01};
                    discreteInitIndex = 0;
                    memoryPointCamera = "opticView";
                    modelOptics[] = {"\A3\Weapons_F\acc\reticle_lrps_F", "\A3\Weapons_F\acc\reticle_lrps_z_F"};
                    visionMode[] = {"Normal", "NVG", "Ti"};
                    thermalMode[] = {0};
                    opticsFlare = 1;
                    opticsDisablePeripherialVision = 1;
                    cameraDir = "";
                };
                class Iron : Snip
                {
                    opticsID = 2;
                    useModelOptics = 0;
                    opticsPPEffects[] = {"", ""};
                    opticsFlare = 0;
                    opticsDisablePeripherialVision = 0;
                    opticsZoomMin = 0.25;
                    opticsZoomMax = 1.25;
                    opticsZoomInit = 0.75;
                    memoryPointCamera = "eye";
                    visionMode[] = {};
                    discretefov[] = {};
                    distanceZoomMin = 200;
                    distanceZoomMax = 200;
                    discreteDistance[] = {200};
                    discreteDistanceInitIndex = 0;
                };
            };
        };
    };

    class JA_104th_cows_LEScope_DC15A : optic_DMS
    {
        author = "Jango's Armory Aux Team";
        scope = 2;
        picture = "\MRC\JLTS\weapons\DC15X\data\ui\DC15X_scope_ui_ca.paa";
        displayName = "DC-15LE Scope";
        model = "\3AS\3AS_Weapons\DC15A\3AS_DC15A_LE_Scope.p3d";
        class ItemInfo : ItemInfo
        {
            mass = 16;
            opticType = 2;
            weaponInfoType = "RscWeaponRangeZeroingFOV";
            optics = 1;
            modelOptics = "\3AS\3AS_Weapons\Data\3AS_2D_Optic.p3d";
            class OpticsModes
            {
                class IronSights
                {
                    opticsID = 1;
                    useModelOptics = 0;
                    opticsFlare = "true";
                    opticsPPEffects[] = {"OpticsCHAbera5", "OpticsBlur5"};
                    opticsDisablePeripherialVision = 0.67;
                    opticsZoomMin = 0.375;
                    opticsZoomMax = 1.1;
                    opticsZoomInit = 0.75;
                    memoryPointCamera = "eye";
                    visionMode[] = {};
                    distanceZoomMin = 100;
                    distanceZoomMax = 100;
                };
                class Scope : Ironsights
                {
                    opticsID = 2;
                    useModelOptics = 1;
                    opticsPPEffects[] = {"OpticsCHAbera5", "OpticsBlur5"};
                    opticsDisablePeripherialVision = 0.67;
                    opticsZoomMin = 0.03125;
                    opticsZoomMax = 0.0625;
                    opticsZoomInit = 0.0625;
                    memoryPointCamera = "opticView";
                    visionMode[] = {"Normal", "NVG"};
                    opticsFlare = "true";
                    distanceZoomMin = 100;
                    distanceZoomMax = 100;
                    cameraDir = "";
                };
            };
        };
    };

    class JA_104th_cows_reflex_optic : ItemCore
    {
        scope = 2;
        author = "Jango's Armory Aux Team";
        displayName = "Reflex Optic";
        picture = "\A3\Weapons_F_EPA\Acc\data\UI\gear_acco_yorris_CA.paa";
        model = "\3AS\3AS_Weapons\DC15C\3AS_DC15C_Reflex_f.p3d";
        weaponInfoType = "RscWeaponZeroing";
        class ItemInfo : InventoryOpticsItem_Base_F
        {
            mass = 6;
            modelOptics = "\3AS\3AS_Weapons\Data\3AS_2D_Optic.p3d";
            optics = 1;
            class OpticsModes
            {
                class aco
                {
                    opticsID = 1;
                    useModelOptics = 0;
                    opticsZoomMin = 0.25;
                    opticsZoomMax = 1.25;
                    opticsZoomInit = 0.75;
                    memoryPointCamera = "eye";
                    opticsFlare = 0;
                    opticsDisablePeripherialVision = 0;
                    distanceZoomMin = 200;
                    distanceZoomMax = 200;
                    cameraDir = "";
                    visionMode[] = {};
                    opticsPPEffects[] = {"OpticsBlur1"};
                };
                class Scope : aco
                {
                    opticsID = 2;
                    useModelOptics = 1;
                    opticsPPEffects[] = {"OpticsCHAbera5", "OpticsBlur5"};
                    opticsDisablePeripherialVision = 0.67;
                    opticsZoomMin = 0.125;
                    opticsZoomMax = 0.125;
                    opticsZoomInit = 0.125;
                    memoryPointCamera = "opticView";
                    visionMode[] = {"Normal", "NVG"};
                    opticsFlare = "true";
                    distanceZoomMin = 100;
                    distanceZoomMax = 100;
                    cameraDir = "";
                };
            };
        };
    };

    class JA_104th_stun_muzzle : JLTS_stun_muzzle
    {
        ACE_barrelTwist = 0;
        ACE_barrelLength = 0;
        aiDispersionCoefX = 2;
        aiDispersionCoefY = 2;
        autoFire = 0;
        ballisticsComputer = 0;
        discreteDistance[] = {50};
        discreteDistanceInitIndex = 0;
        displayName = "[104th] High Energy Stun Mode";
        drySound[] = {"MRC\JLTS\weapons\Core\sounds\weapon_dry.wss", 5, 1, 10};
        fireSpreadAngle = 0.95;
        magazines[] = {"JLTS_stun_mag_short", "JLTS_stun_mag_long"};
        magazineWell[] = {};
        maxZeroing = 50;
        reloadAction = "GestureReloadMX";
        reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mx\Reload_Mx", 1, 1, 10};
        modes[] = {"Single"};
        class Single : Mode_SemiAuto
        {

            class BaseSoundModeType
            {
                weaponSoundEffect = "";
                closure1[] = {};
                closure2[] = {};
                soundClosure[] = {};
            };
            sounds[] = {"StandardSound"};
            class StandardSound : BaseSoundModeType
            {
                weaponSoundEffect = "";
                begin1[] = {"MRC\JLTS\weapons\Core\sounds\stun", 5, 1.5, 1800};
                soundBegin[] = {"begin1", 1};
            };
            recoil = "recoil_pistol_light";
            recoilProne = "recoil_prone_pistol_light";
            reloadTime = 0.5;
            dispersion = 0.0029;
            minRange = 5;
            minRangeProbab = 0.3;
            midRange = 25;
            midRangeProbab = 0.6;
            maxRange = 50;
            maxRangeProbab = 0.1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 25;
        };
    };

    class JA_104th_rifle_base : arifle_MX_Base_F
    {
        author = "Jango's Armory Aux Team";
        ACE_Overheating_mrbs = 0;
        canShootInWater = 1;
        fireLightDuration = 0.05;
        fireLightIntensity = 0.2;
        fireLightDiffuse[] = {0, 0, 1};
        fireLightAmbient[] = {0, 0, 1};
        JLTS_hasElectronics = 0;
        JLTS_hasEMPProtection = 0;
        magazines[] = {};
        magazineWell[] = {};
        modes[] = {"Single", "Burst", "FullAuto"};
        drySound[] = {"swlw_rework\sounds\dc\DC_noAmmo.wss", 5, 1, 20};
        muzzles[] =
            {
                "this",
                "Stun"};
        class Stun : JA_104th_stun_muzzle
        {
            displayName = "High Energy Stun Mode";
            magazines[] =
                {
                    "JA_104th_Weapons_Mags_stun10"};
        };
        class Single : Mode_SemiAuto
        {
            reloadTime = 0.096;
            recoil = "recoil_single_mx";
            recoilProne = "recoil_single_prone_mx";
            dispersion = 0.00073;
        };
        class Burst : Mode_Burst
        {
            reloadTime = 0.1;
            dispersion = 0.00066;
            soundContinuous = 0;
            soundBurst = 0;
        };
        class FullAuto : Mode_FullAuto
        {
            reloadTime = 0.125;
            recoil = "recoil_auto_mx";
            recoilProne = "recoil_auto_prone_mx";
            dispersion = 0.00073;
        };
        class fullauto_medium : FullAuto
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
        class single_medium : Single
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
        class single_far : single_medium
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
            class CowsSlot : CowsSlot
            {
                displayName = "Optics Slot";
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
                iconPinpoint = "Bottom";
                iconPosition[] = {0.5, 0.35};
                iconScale = 0.2;
                linkProxy = "\a3\data_f\proxies\weapon_slots\TOP";
                scope = 0;
                compatibleItems[] = {};
            };
            class MuzzleSlot : MuzzleSlot
            {
                compatibleItems[] = {};
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                displayName = "$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
                iconPinpoint = "Center";
                iconPosition[] = {0.24, 0.35};
                iconScale = 0.2;
            };
            class PointerSlot : PointerSlot
            {
                linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
                displayName = "Pointer Slot";
                compatibleItems[] = {};
            };
            class UnderBarrelSlot : UnderBarrelSlot
            {
                iconPicture = "\A3\Weapons_F_Mark\Data\UI\attachment_under.paa";
                iconPinpoint = "Bottom";
                linkProxy = "\A3\Data_F_Mark\Proxies\Weapon_Slots\UNDERBARREL";
                compatibleItems[] = {};
            };
        };
    };

    class JA_104th_rifle_base_stunless : JA_104th_rifle_base
    {
        muzzles[] = {"this"};
    };

    class JA_104th_pistol_base : hgun_P07_F
    {
        author = "Jango's Armory Aux Team";
        ACE_Overheating_mrbs = 0;
        canShootInWater = 1;
        fireLightDuration = 0.05;
        fireLightIntensity = 0.2;
        fireLightDiffuse[] = {0, 0, 1};
        fireLightAmbient[] = {0, 0, 1};
        JLTS_hasElectronics = 0;
        JLTS_hasEMPProtection = 0;
        magazines[] = {};
        magazineWell[] = {};
        modes[] = {"Single"};
        drySound[] = {"MRC\JLTS\weapons\Core\sounds\weapon_dry.wss", 5, 1, 10};
        muzzles[] =
            {
                "this"};
        class Single : Mode_SemiAuto
        {
            recoil = "recoil_pistol_light";
            recoilProne = "recoil_prone_pistol_light";
            reloadTime = 0.12;
            dispersion = 0.0029;
            minRange = 1;
            minRangeProbab = 0.3;
            midRange = 25;
            midRangeProbab = 0.6;
            maxRange = 50;
            maxRangeProbab = 0.1;
            aiRateOfFire = 0;
            aiRateOfFireDistance = 25;
        };
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 30;
            class CowsSlot : CowsSlot
            {
                displayName = "Optics Slot";
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
                iconPinpoint = "Bottom";
                iconPosition[] = {0.5, 0.35};
                iconScale = 0.2;
                linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
                scope = 0;
                compatibleItems[] = {};
            };
            class MuzzleSlot : MuzzleSlot
            {
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                displayName = "$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
                iconPinpoint = "Center";
                compatibleItems[] = {};
            };
            class PointerSlot : PointerSlot
            {
                compatibleItems[] =
                    {
                        "jlts_dc17sa_flashlight"};
            };
            class UnderBarrelSlot : UnderBarrelSlot
            {
                compatibleItems[] = {};
            };
        };
    };

    class JA_104th_launcher_base : Launcher_Base_F
    {
        author = "Jango's Armory Aux Team";
        _generalMacro = "launch_RPG32_F";
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 132;
        };
        opticsZoomMin = 0.1083;
        opticsZoomMax = 0.1083;
        opticsZoomInit = 0.1083;
        cameraDir = "look";
        ace_overpressure_angle = 60;
        ace_overpressure_damage = 0.7;
        ace_overpressure_priority = 1;
        ace_overpressure_range = 15;
        ace_reloadlaunchers_enabled = 1;
        magazines[] = {};
        magazineWell[] = {};
        modes[] = {"Single"};
        reloadAction = "ReloadRPG";
        recoil = "";
        class Single : Mode_SemiAuto
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType
            {
            };
            class StandardSound : BaseSoundModeType
            {
                begin1[] = {"swlw_rework\sounds\launcher\PLX_shot.wss", 10, 1, 2000};
                soundBegin[] = {"begin1", 1};
            };
            recoil = "recoil_single_law";
            aiRateOfFire = 5;
            aiRateOfFireDistance = 500;
            aiRateOfFireDispersion = 2;
            minRange = 10;
            minRangeProbab = 0.3;
            midRange = 40;
            midRangeProbab = 0.85;
            maxRange = 600;
            maxRangeProbab = 0.85;
        };
        drySound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\Dry_RPG32", 0.4466836, 1, 20};
        reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\reload_RPG32", 0.25118864, 1, 10};
        canLock = 0;
        weaponLockDelay = 3;
        lockAcquire = 0;
        inertia = 0.9;
        aimTransitionSpeed = 0.5;
        dexterity = 1.1;
        initspeed = 30;
        class GunParticles
        {
            class effect1
            {
                positionName = "konec hlavne";
                directionName = "usti hlavne";
                effectName = "RocketBackEffectsRPGNT";
            };
        };
    };
    class JA_104th_guided_launcher_base : launch_Titan_short_base
    {
        author = "Jango's Armory Aux Team";
        modelSpecial = "";
        magazines[] = {};
        magazineWell[] = {};
        ace_overpressure_angle = 0;
        ace_overpressure_damage = 0;
        ace_overpresssure_priority = 0;
        ace_overpressure_range = 0;
        ace_reloadlaunchers_enabled = 1;
        ace_javelin_enabled = 1;
        mass = 220;
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
        };
    };
    // Primaries

    // DC15A
    class JA_104th_DC15A : JA_104th_rifle_base
    {
        ACE_barrelTwist = 279;
        ACE_barrelLength = 508;
        ACE_twistDirection = 1;
        scope = 2;
        displayName = "[104th] DC-15A";
        baseWeapon = "JA_104th_DC15A";
        picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_plastic_ui_ca.paa";
        model = "\3AS\3AS_Weapons\Republic\DC15A\3AS_DC15A_F.p3d";
        mass = 97;
        handAnim[] = {"OFP2_ManSkeleton", "3as\3AS_Weapons\Republic\DC15A\Data\Anim\New_DC15a_Handanim.rtm"};
        reloadAction = "GestureReload_JLTS_DC15A";
        reloadTime = 0.1;
        recoil = "recoil_mx";
        magazines[] =
            {
                "JA_104th_Weapons_Mags_20mw40",
                "JA_104th_Weapons_Mags_30mw30"};
        modelOptics = "3AS\3AS_Weapons\Data\3AS_2D_Optic.p3d";
        class stun : JA_104th_stun_muzzle
        {
        };
        class OpticsModes
        {
            class Ironsights
            {
                opticsID = 1;
                useModelOptics = 0;
                opticsFlare = "true";
                opticsPPEffects[] = {"OpticsCHAbera5", "OpticsBlur5"};
                opticsDisablePeripherialVision = 0.67;
                opticsZoomMin = 0.25;
                opticsZoomMax = 1.1;
                opticsZoomInit = 0.75;
                memoryPointCamera = "eye";
                visionMode[] = {};
                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
            class Scope : Ironsights
            {
                opticsID = 2;
                useModelOptics = 1;
                opticsPPEffects[] = {"OpticsCHAbera5", "OpticsBlur5"};
                opticsDisablePeripherialVision = 0.67;
                opticsZoomMin = 0.125;
                opticsZoomMax = 0.125;
                opticsZoomInit = 0.125;
                memoryPointCamera = "opticView";
                visionMode[] = {"Normal", "NVG"};
                opticsFlare = "true";
                distanceZoomMin = 100;
                distanceZoomMax = 100;
                cameraDir = "";
            };
        };
        modes[] = {"Single", "FullAuto"};
        class Single : Single
        {
            reloadTime = 0.18;
            dispersion = 0.00028;
            sounds[] = {"StandardSound"};
            class StandardSound : BaseSoundModeType
            {
                weaponSoundEffect = "";
                begin1[] = {"Jangos_Armory_Blasters\data\sounds\DC15A_shot1.wss", +3db, 1, 2200};
                begin2[] = {"Jangos_Armory_Blasters\data\sounds\DC15A_shot1.wss", +3db, 1, 2200};
                begin3[] = {"Jangos_Armory_Blasters\data\sounds\DC15A_shot1.wss", +3db, 1, 2200};
                soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.33};
            };
        };
        class FullAuto : FullAuto
        {
            reloadTime = 0.18;
            dispersion = 0.0005;
            sounds[] = {"StandardSound"};
            class StandardSound : BaseSoundModeType
            {
                weaponSoundEffect = "";
                begin1[] = {"Jangos_Armory_Blasters\data\sounds\DC15A_shot1.wss", +3db, 1, 2200};
                begin2[] = {"Jangos_Armory_Blasters\data\sounds\DC15A_shot1.wss", +3db, 1, 2200};
                begin3[] = {"Jangos_Armory_Blasters\data\sounds\DC15A_shot1.wss", +3db, 1, 2200};
                soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.33};
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CowsSlot : CowsSlot
            {
                displayName = "Optics Slot";
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
                iconPinpoint = "Bottom";
                iconPosition[] = {0.5, 0.35};
                iconScale = 0.2;
                linkProxy = "\a3\data_f\proxies\weapon_slots\TOP";
                compatibleItems[] =
                    {
                        "3AS_optic_DC15LE_F",
                        "3AS_optic_DC15C_F"};
            };
            class MuzzleSlot : MuzzleSlot
            {
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                displayName = "$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
                compatibleItems[] =
                    {
                        "JA_104th_muzzle_flash",
                        "3AS_muzzle_DC15LE_F"};
            };
            class PointerSlot : PointerSlot
            {
                linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
                displayName = "Pointer Slot";
                compatibleItems[] =
                    {
                        "acc_flashlight",
                        "acc_pointer_IR"};
            };
            class UnderBarrelSlot : UnderBarrelSlot
            {
                iconPicture = "\A3\Weapons_F_Mark\Data\UI\attachment_under.paa";
                iconPinpoint = "Bottom";
                linkProxy = "\A3\Data_F_Mark\Proxies\Weapon_Slots\UNDERBARREL";
                compatibleItems[] =
                    {
                        "bipod_01_f_blk",
                        "3AS_Bipod_DC15L_f"};
            };
        };
    };
    class JA_104th_DC15A_UGL : JA_104th_DC15A
    {
        displayName = "[104th] DC-15A UGL";
        baseWeapon = "JA_104th_DC15A_UGL";
        mass = 110;
        model = "\3AS\3AS_Weapons\Republic\DC15A\3AS_DC15A_GL.p3d";
        handAnim[] = {"OFP2_ManSkeleton", "3as\3AS_Weapons\Republic\DC15A\Data\Anim\New_DC15aGL_Handanim.rtm"};
        reloadAction = "3AS_GestureReloadDC15A";
        muzzles[] =
            {
                "this",
                "Stun",
                "DC15A_UGL"};
        class DC15A_UGL : UGL_F
        {
            cursorAim = "gl";
            displayName = "[104th] Over-Under Grenade Launcher";
            descriptionShort = "Underbarrel GL Module for DC15A";
            distanceZoomMax = 400;
            distanceZoomMin = 400;
            useModelOptics = 0;
            useExternalOptic = 0;
            cameraDir = "OP_look";
            discreteDistance[] = {100, 200, 300, 400};
            discreteDistanceCameraPoint[] = {"OP_eye", "OP_eye2", "OP_eye3", "OP_eye4"};
            discreteDistanceInitIndex = 0;
            memoryPointCamera = "UGL eye";
            modelOptics = "-";
            optics = 1;
            magazines[] =
                {
                    "ACE_HuntIR_M203",
                    "JA_104th_Weapons_Mags_GL_HE3",
                    "JA_104th_Weapons_Mags_GL_AP2",
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
                    "JA_104th_Weapons_Mags_GL_flare_Purple3"};
            magazineWell[] = {"UGL_40x36", "CBA_40mm_M203", "CBA_40mm_EGLM"};
            maxRange = 400;
            midRange = 200;
            minRange = 30;
            reloadAction = "GestureReloadMXUGL";
            reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_UGL_reload", 1, 1, 10};
            class Single : Mode_SemiAuto
            {
                sounds[] = {"StandardSound"};
                class StandardSound : BaseSoundModeType
                {
                    weaponSoundEffect = "";
                    begin1[] = {"SWLW_clones\rifles\gl\sounds\gl", 1, 1, 1800};
                    begin2[] = {"SWLW_clones\rifles\gl\sounds\gl", 1, 1, 1800};
                    begin3[] = {"SWLW_clones\rifles\gl\sounds\gl", 1, 1, 1800};
                    soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.33};
                };
            };
        };
    };

    // DC15C
    class JA_104th_DC15C : JA_104th_rifle_base
    {
        ACE_barrelTwist = 178;
        ACE_barrelLength = 264;
        ACE_twistDirection = 1;
        scope = 2;
        displayName = "[104th] DC-15C";
        baseWeapon = "JA_104th_DC15C";
        mass = 68;
        picture = "\Jangos_Armory_Blasters\data\textures\dc15c_ui_ca.paa";
        model = "\3AS\3AS_Weapons\Republic\DC15C\3AS_DC15C_F.p3d";
        handAnim[] = {"OFP2_ManSkeleton", "3as\3AS_Weapons\Republic\DC15C\Data\Anim\New_DC15C_Handanim.rtm"};
        reloadAction = "GestureReloadMX";
        reloadTime = 0.1;
        recoil = "recoil_mx";
        magazines[] =
            {
                "JA_104th_Weapons_Mags_10mw50",
                "JA_104th_Weapons_Mags_20mw40"};
        modelOptics = "3AS\3AS_Weapons\Data\3AS_2D_Optic.p3d";
        class stun : JA_104th_stun_muzzle
        {
        };
        class OpticsModes
        {
            class Ironsights
            {
                opticsID = 1;
                useModelOptics = 0;
                opticsFlare = "true";
                opticsPPEffects[] = {"OpticsCHAbera5", "OpticsBlur5"};
                opticsDisablePeripherialVision = 0.67;
                opticsZoomMin = 0.25;
                opticsZoomMax = 1.1;
                opticsZoomInit = 0.75;
                memoryPointCamera = "eye";
                visionMode[] = {};
                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
            class Scope : Ironsights
            {
                opticsID = 2;
                useModelOptics = 1;
                opticsPPEffects[] = {"OpticsCHAbera5", "OpticsBlur5"};
                opticsDisablePeripherialVision = 0.67;
                opticsZoomMin = 0.125;
                opticsZoomMax = 0.125;
                opticsZoomInit = 0.125;
                memoryPointCamera = "opticView";
                visionMode[] = {"Normal", "NVG"};
                opticsFlare = "true";
                distanceZoomMin = 100;
                distanceZoomMax = 100;
                cameraDir = "";
            };
        };
        modes[] = {"Single", "Burst", "FullAuto"};
        class Single : Single
        {
            reloadTime = 0.14;
            dispersion = 0.00025;
            sounds[] = {"StandardSound", "SilencedSound"};
            class StandardSound : BaseSoundModeType
            {
                weaponSoundEffect = "";
                begin1[] = {"Jangos_Armory_Blasters\data\sounds\DC15A_shot6.wss", +1db, 1, 2200};
                begin2[] = {"Jangos_Armory_Blasters\data\sounds\DC15A_shot6.wss", +1db, 1, 2200};
                begin3[] = {"Jangos_Armory_Blasters\data\sounds\DC15A_shot6.wss", +1db, 1, 2200};
                soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.33};
            };
            class SilencedSound : BaseSoundModeType
            {
                begin1[] = {"Jangos_Armory_Blasters\data\sounds\Suppressed_Rifle_shot.wss", +0.3db, 1, 2200};
                begin2[] = {"Jangos_Armory_Blasters\data\sounds\Suppressed_Rifle_shot.wss", +0.3db, 1, 2200};
                begin3[] = {"Jangos_Armory_Blasters\data\sounds\Suppressed_Rifle_shot.wss", +0.3db, 1, 2200};
                closure1[] = {};
                closure2[] = {};
                soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.33};
                soundClosure[] = {};
                weaponSoundEffect = "";
            };
        };
        class Burst : Burst
        {
            reloadTime = 0.075;
            dispersion = 0.0004;
            sounds[] = {"StandardSound", "SilencedSound"};
            class StandardSound : BaseSoundModeType
            {
                weaponSoundEffect = "";
                begin1[] = {"Jangos_Armory_Blasters\data\sounds\DC15A_shot6.wss", +1db, 1, 2200};
                begin2[] = {"Jangos_Armory_Blasters\data\sounds\DC15A_shot6.wss", +1db, 1, 2200};
                begin3[] = {"Jangos_Armory_Blasters\data\sounds\DC15A_shot6.wss", +1db, 1, 2200};
                soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.33};
            };
            class SilencedSound : BaseSoundModeType
            {
                begin1[] = {"Jangos_Armory_Blasters\data\sounds\Suppressed_Rifle_shot.wss", +0.3db, 1, 2200};
                begin2[] = {"Jangos_Armory_Blasters\data\sounds\Suppressed_Rifle_shot.wss", +0.3db, 1, 2200};
                begin3[] = {"Jangos_Armory_Blasters\data\sounds\Suppressed_Rifle_shot.wss", +0.3db, 1, 2200};
                closure1[] = {};
                closure2[] = {};
                soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.33};
                soundClosure[] = {};
                weaponSoundEffect = "";
            };
        };
        class FullAuto : FullAuto
        {
            reloadTime = 0.14;
            dispersion = 0.0005;
            sounds[] = {"StandardSound", "SilencedSound"};
            class StandardSound : BaseSoundModeType
            {
                weaponSoundEffect = "";
                begin1[] = {"Jangos_Armory_Blasters\data\sounds\DC15A_shot6.wss", +1db, 1, 2200};
                begin2[] = {"Jangos_Armory_Blasters\data\sounds\DC15A_shot6.wss", +1db, 1, 2200};
                begin3[] = {"Jangos_Armory_Blasters\data\sounds\DC15A_shot6.wss", +1db, 1, 2200};
                soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.33};
            };
            class SilencedSound : BaseSoundModeType
            {
                begin1[] = {"Jangos_Armory_Blasters\data\sounds\Suppressed_Rifle_shot.wss", +0.3db, 1, 2200};
                begin2[] = {"Jangos_Armory_Blasters\data\sounds\Suppressed_Rifle_shot.wss", +0.3db, 1, 2200};
                begin3[] = {"Jangos_Armory_Blasters\data\sounds\Suppressed_Rifle_shot.wss", +0.3db, 1, 2200};
                closure1[] = {};
                closure2[] = {};
                soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.33};
                soundClosure[] = {};
                weaponSoundEffect = "";
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CowsSlot : CowsSlot
            {
                displayName = "Optics Slot";
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
                iconPinpoint = "Bottom";
                iconPosition[] = {0.5, 0.35};
                iconScale = 0.2;
                linkProxy = "\a3\data_f\proxies\weapon_slots\TOP";
                compatibleItems[] =
                    {
                        "3AS_optic_DC15C_F",
                        "3AS_Optic_Scope_WestarM5"};
            };
            class MuzzleSlot : MuzzleSlot
            {
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                displayName = "$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
                compatibleItems[] =
                    {
                        "JA_104th_muzzle_flash",
                        "muzzle_snds_H"};
            };
            class PointerSlot : PointerSlot
            {
                compatibleItems[] = {"acc_flashlight", "acc_pointer_IR"};
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
                iconPinpoint = "Center";
                linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
                displayName = "Pointer Slot";
            };
        };
    };
    class JA_104th_DC15C_UGL : JA_104th_DC15C
    {
        displayName = "[104th] DC-15C UGL";
        baseWeapon = "JA_104th_DC15C_UGL";
        mass = 95;
        picture = "\Jangos_Armory_Blasters\data\textures\dc15cugl_ui_ca.paa";
        model = "\3AS\3AS_Weapons\Republic\DC15C\3AS_DC15C_GL.p3d";
        handAnim[] =
            {
                "OFP2_ManSkeleton",
                "3as\3AS_Weapons\Republic\DC15C\Data\Anim\New_DC15CGL_Handanim.rtm"};
        reloadAction = "GestureReloadMX";
        muzzles[] =
            {
                "this",
                "Stun",
                "DC15C_UGL"};
        class DC15C_UGL : UGL_F
        {
            displayName = "[104th] Over-Under Grenade Launcher";
            descriptionShort = "Underbarrel GL Module for DC15A";
            useModelOptics = 0;
            useExternalOptic = 0;
            cameraDir = "OP_look";
            discreteDistance[] = {75, 100, 150, 200, 250, 300, 350, 400};
            discreteDistanceCameraPoint[] = {"OP_eye_75", "OP_eye_100", "OP_eye_150", "OP_eye_200", "OP_eye_250", "OP_eye_300", "OP_eye_350", "OP_eye_400"};
            discreteDistanceInitIndex = 0;
            magazines[] =
                {
                    "ACE_HuntIR_M203",
                    "JA_104th_Weapons_Mags_GL_HE2",
                    "JA_104th_Weapons_Mags_GL_AP2",

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
                    "JA_104th_Weapons_Mags_GL_flare_Purple3"};
            magazineWell[] = {"UGL_40x36", "CBA_40mm_M203", "CBA_40mm_EGLM"};
            reloadAction = "GestureReloadMXUGL";
            reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_UGL_reload", 1, 1, 10};
            class Single : Mode_SemiAuto
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
                    begin1[] = {"SWLW_clones\rifles\gl\sounds\gl", 1, 1, 1800};
                    begin2[] = {"SWLW_clones\rifles\gl\sounds\gl", 1, 1, 1800};
                    begin3[] = {"SWLW_clones\rifles\gl\sounds\gl", 1, 1, 1800};
                    soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.33};
                };
            };
        };
    };

    // DC15L
    class JA_104th_DC15L : JA_104th_rifle_base_stunless
    {
        ACE_barrelTwist = 178;
        ACE_barrelLength = 414;
        ACE_twistDirection = 1;
        scope = 2;
        displayName = "[104th] DC-15L";
        baseWeapon = "JA_104th_DC15L";
        mass = 154;
        picture = "\Jangos_Armory_Blasters\data\textures\dc15l_ui_ca.paa";
        model = "\3AS\3AS_Weapons\Republic\DC15L\3AS_DC15L_F.p3d";
        handAnim[] = {"OFP2_ManSkeleton", "3as\3AS_Weapons\Republic\DC15L\Data\Anims\New_DC15L_Handanim.rtm"};
        recoil = "recoil_SMG_03";
        magazines[] =
            {
                "JA_104th_Weapons_Mags_20mw240"};
        modes[] = {"FullAuto", "FullerAuto", "FullestAuto"};

        class FullAuto : FullAuto
        {
            reloadTime = 0.1;
            dispersion = 0.0065;
            sounds[] = {"StandardSound"};
            textureType = "burst";
            class BaseSoundModeType
            {
                begin1[] = {"Jangos_Armory_Blasters\data\sounds\DC15L_shot1.wss", +3db, 1, 2200};
                begin2[] = {"Jangos_Armory_Blasters\data\sounds\DC15L_shot1.wss", +3db, 1, 2200};
                begin3[] = {"Jangos_Armory_Blasters\data\sounds\DC15L_shot1.wss", +3db, 1, 2200};
                soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.33};
            };
            class StandardSound : BaseSoundModeType
            {
                begin1[] = {"Jangos_Armory_Blasters\data\sounds\DC15L_shot1.wss", +3db, 1, 2200};
                begin2[] = {"Jangos_Armory_Blasters\data\sounds\DC15L_shot1.wss", +3db, 1, 2200};
                begin3[] = {"Jangos_Armory_Blasters\data\sounds\DC15L_shot1.wss", +3db, 1, 2200};
                soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.33};
            };
        };
        class FullerAuto : FullAuto
        {
            reloadTime = 0.06;
            dispersion = 0.0074;
            textureType = "fullAuto";
            sounds[] = {"StandardSound"};
            class BaseSoundModeType
            {
                begin1[] = {"Jangos_Armory_Blasters\data\sounds\DC15L_shot1.wss", +3db, 1, 2200};
                begin2[] = {"Jangos_Armory_Blasters\data\sounds\DC15L_shot1.wss", +3db, 1, 2200};
                begin3[] = {"Jangos_Armory_Blasters\data\sounds\DC15L_shot1.wss", +3db, 1, 2200};
                soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.33};
            };
            class StandardSound : BaseSoundModeType
            {
                begin1[] = {"Jangos_Armory_Blasters\data\sounds\DC15L_shot1.wss", +3db, 1, 2200};
                begin2[] = {"Jangos_Armory_Blasters\data\sounds\DC15L_shot1.wss", +3db, 1, 2200};
                begin3[] = {"Jangos_Armory_Blasters\data\sounds\DC15L_shot1.wss", +3db, 1, 2200};
                soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.33};
            };
        };
        class FullestAuto : FullAuto
        {
            reloadTime = 0.05;
            dispersion = 0.0081;
            displayName = "Overcharge";
            textureType = "fastAuto";
            sounds[] = {"StandardSound"};
            class BaseSoundModeType
            {
                begin1[] = {"Jangos_Armory_Blasters\data\sounds\DC15L_shot1.wss", +3db, 1, 2200};
                begin2[] = {"Jangos_Armory_Blasters\data\sounds\DC15L_shot1.wss", +3db, 1, 2200};
                begin3[] = {"Jangos_Armory_Blasters\data\sounds\DC15L_shot1.wss", +3db, 1, 2200};
                soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.33};
            };
            class StandardSound : BaseSoundModeType
            {
                begin1[] = {"Jangos_Armory_Blasters\data\sounds\DC15L_shot1.wss", +3db, 1, 2200};
                begin2[] = {"Jangos_Armory_Blasters\data\sounds\DC15L_shot1.wss", +3db, 1, 2200};
                begin3[] = {"Jangos_Armory_Blasters\data\sounds\DC15L_shot1.wss", +3db, 1, 2200};
                soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.33};
            };
        };
        class OpticsModes
        {
            class Ironsights
            {
                opticsID = 1;
                useModelOptics = 0;
                opticsFlare = "true";
                opticsPPEffects[] = {"OpticsCHAbera5", "OpticsBlur5"};
                opticsDisablePeripherialVision = 0.67;
                opticsZoomMin = 0.375;
                opticsZoomMax = 1.1;
                opticsZoomInit = 0.75;
                memoryPointCamera = "eye";
                visionMode[] = {};
                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CowsSlot : CowsSlot
            {
                displayName = "Optics Slot";
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
                iconPinpoint = "Bottom";
                iconPosition[] = {0.5, 0.35};
                iconScale = 0.2;
                linkProxy = "\a3\data_f\proxies\weapon_slots\TOP";
                scope = 0;
                compatibleItems[] =
                    {
                        "3AS_optic_DC15L_F"};
            };
            class MuzzleSlot : MuzzleSlot
            {
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                displayName = "$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
                iconPinpoint = "Center";
                iconPosition[] = {0.24, 0.35};
                iconScale = 0.2;
                compatibleItems[] =
                    {
                        "JA_104th_muzzle_flash"};
            };
            class PointerSlot : PointerSlot
            {
                linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
                displayName = "Pointer Slot";
                compatibleItems[] =
                    {
                        "acc_flashlight",
                        "acc_pointer_IR"};
            };
            class UnderBarrelSlot : UnderBarrelSlot
            {
                iconPicture = "\A3\Weapons_F_Mark\Data\UI\attachment_under.paa";
                iconPinpoint = "Bottom";
                linkProxy = "\A3\Data_F_Mark\Proxies\Weapon_Slots\UNDERBARREL";
                compatibleItems[] =
                    {
                        "bipod_01_f_blk",
                        "3AS_Bipod_DC15L_f"};
            };
        };
    };

    // DC15S
    class JA_104th_DC15S : JA_104th_rifle_base
    {
        ACE_barrelTwist = 254;
        ACE_barrelLength = 115;
        ACE_twistDirection = 1;
        scope = 2;
        displayName = "[104th] DC-15S";
        baseWeapon = "JA_104th_DC15S";
        mass = 62;
        picture = "\MRC\JLTS\weapons\DC15S\data\ui\DC15S_ui_ca.paa";
        JLTS_canHaveShield = 0; // Finish Later
        JLTS_shieldedWeapon = "";
        model = "\3AS\3AS_Weapons\Republic\DC15S\3AS_DC15S_F.p3d";
        handAnim[] =
            {
                "OFP2_ManSkeleton",
                "3as\3AS_Weapons\Republic\DC15S\Data\Anim\New_DC15S_Handanim.rtm"};

        reloadAction = "GestureReload_JLTS_DC15S";
        reloadMagazineSound[] = {"\3AS\3AS_Main\Sounds\DC15A\DC15aReload", 1, 1, 30};
        recoil = "recoil_SMG_03";
        magazines[] =
            {
                "JA_104th_Weapons_Mags_10mw50",
                "JA_104th_Weapons_Mags_20mw40"};
        class stun : JA_104th_stun_muzzle
        {
        };
        modes[] = {"FullAuto", "Single"};
        class FullAuto : FullAuto
        {
            sounds[] = {"StandardSound", "SilencedSound"};

            class StandardSound : BaseSoundModeType
            {
                weaponSoundEffect = "";
                begin1[] = {"Jangos_Armory_Blasters\data\sounds\DC15S_shot1.wss", +2db, 1, 2200};
                begin2[] = {"Jangos_Armory_Blasters\data\sounds\DC15S_shot1.wss", +2db, 1, 2200};
                begin3[] = {"Jangos_Armory_Blasters\data\sounds\DC15S_shot1.wss", +2db, 1, 2200};
                soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.33};
            };
            reloadTime = 0.08;
            dispersion = 0.0006;
            class SilencedSound : BaseSoundModeType
            {
                begin1[] = {"Jangos_Armory_Blasters\data\sounds\Suppressed_Rifle_shot.wss", +0.3db, 1, 2200};
                begin2[] = {"Jangos_Armory_Blasters\data\sounds\Suppressed_Rifle_shot.wss", +0.3db, 1, 2200};
                begin3[] = {"Jangos_Armory_Blasters\data\sounds\Suppressed_Rifle_shot.wss", +0.3db, 1, 2200};
                closure1[] = {};
                closure2[] = {};
                soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.33};
                soundClosure[] = {};
                weaponSoundEffect = "";
            };
        };
        class Single : Single
        {

            sounds[] = {"StandardSound", "SilencedSound"};
            class StandardSound : BaseSoundModeType
            {
                weaponSoundEffect = "";
                begin1[] = {"Jangos_Armory_Blasters\data\sounds\DC15S_shot1.wss", +2db, 1, 2200};
                begin2[] = {"Jangos_Armory_Blasters\data\sounds\DC15S_shot1.wss", +2db, 1, 2200};
                begin3[] = {"Jangos_Armory_Blasters\data\sounds\DC15S_shot1.wss", +2db, 1, 2200};
                soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.33};
            };
            reloadTime = 0.08;
            dispersion = 0.0006;
            class SilencedSound : BaseSoundModeType
            {
                begin1[] = {"Jangos_Armory_Blasters\data\sounds\Suppressed_Rifle_shot.wss", +0.3db, 1, 2200};
                begin2[] = {"Jangos_Armory_Blasters\data\sounds\Suppressed_Rifle_shot.wss", +0.3db, 1, 2200};
                begin3[] = {"Jangos_Armory_Blasters\data\sounds\Suppressed_Rifle_shot.wss", +0.3db, 1, 2200};
                closure1[] = {};
                closure2[] = {};
                soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.33};
                soundClosure[] = {};
                weaponSoundEffect = "";
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CowsSlot : CowsSlot
            {
                displayName = "Optics Slot";
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
                iconPinpoint = "Bottom";
                iconPosition[] = {0.5, 0.35};
                iconScale = 0.2;
                linkProxy = "\a3\data_f\proxies\weapon_slots\TOP";
                compatibleItems[] =
                    {
                        "3AS_optic_DC15C_F",
                        "3AS_Imp_Optic_1",
                        "3AS_Imp_Optic_2",
                        "3AS_Imp_Optic_3",
                        "3AS_Imp_Optic_4"};
            };
            class MuzzleSlot : MuzzleSlot
            {
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                displayName = "$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
                iconPinpoint = "Center";
                compatibleItems[] =
                    {
                        "JA_104th_muzzle_flash",
                        "muzzle_snds_H"};
            };
            class PointerSlot : PointerSlot
            {
                compatibleItems[] = {"acc_flashlight", "acc_pointer_IR"};
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
                iconPinpoint = "Center";
                linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
                displayName = "Pointer Slot";
            };
        };
    };

    // DC15S UGL
    class JA_104th_DC15S_UGL : JA_104th_DC15S
    {
        displayName = "[104th] DC-15S UGL";
        baseWeapon = "JA_104th_DC15S_UGL";
        mass = 75;
        picture = "\3AS\3AS_Weapons\Republic\DC15S\Data\UI\3as_dc15s.paa";
        model = "\3AS\3AS_Weapons\Republic\DC15S\3AS_DC15S_GL.p3d";
        handAnim[] =
            {
                "OFP2_ManSkeleton",
                "3as\3AS_Weapons\Republic\DC15S\Data\Anim\New_DC15SGL_Handanim.rtm"};
        reloadAction = "GestureReloadMX";
        muzzles[] =
            {
                "this",
                "Stun",
                "DC15S_UGL"};
        class DC15S_UGL : UGL_F
        {
            displayName = "[104th] Over-Under Grenade Launcher";
            descriptionShort = "Underbarrel GL Module for DC15A";
            useModelOptics = 0;
            useExternalOptic = 0;
            cameraDir = "OP_look";
            discreteDistance[] = {75, 100, 150, 200, 250, 300, 350, 400};
            discreteDistanceCameraPoint[] = {"OP_eye_75", "OP_eye_100", "OP_eye_150", "OP_eye_200", "OP_eye_250", "OP_eye_300", "OP_eye_350", "OP_eye_400"};
            discreteDistanceInitIndex = 0;
            magazines[] =
                {
                    "ACE_HuntIR_M203",
                    "JA_104th_Weapons_Mags_GL_HE2",
                    "JA_104th_Weapons_Mags_GL_AP2",

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
                    "JA_104th_Weapons_Mags_GL_flare_Purple3"};
            magazineWell[] = {"UGL_40x36", "CBA_40mm_M203", "CBA_40mm_EGLM"};
            reloadAction = "GestureReloadMXUGL";
            reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_UGL_reload", 1, 1, 10};
            class Single : Mode_SemiAuto
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
                    begin1[] = {"SWLW_clones\rifles\gl\sounds\gl", 1, 1, 1800};
                    begin2[] = {"SWLW_clones\rifles\gl\sounds\gl", 1, 1, 1800};
                    begin3[] = {"SWLW_clones\rifles\gl\sounds\gl", 1, 1, 1800};
                    soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.33};
                };
            };
        };
    };
    // DC15X
    class JA_104th_DC15X : JA_104th_rifle_base_stunless
    {
        ACE_barrelTwist = 330;
        ACE_barrelLength = 737;
        ACE_twistDirection = 1;
        scope = 2;
        displayName = "[104th] DC-15X";
        baseWeapon = "JA_104th_DC15X";
        mass = 92;
        picture = "\MRC\JLTS\weapons\DC15X\data\ui\DC15X_ui_ca.paa";
        model = "\3AS\3AS_Weapons\Republic\DC15X\3AS_DC15X_F.p3d";
        handAnim[] = {"OFP2_ManSkeleton", "3as\3AS_Weapons\Republic\DC15X\Data\Anim\New_DC15X_handanim.rtm"};
        recoil = "recoil_dmr_01";
        recoilProne = "recoil_single_prone_mx";
        magazines[] =
            {
                "JA_104th_Weapons_Mags_40mw20"};
        modelOptics = "\A3\Weapons_F\acc\reticle_sniper_F";
        modes[] = {"Single"};
        class Single : Single
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
                soundSetShot[] = {"3AS_DLT19X_Shot_SoundSet"};
            };
            reloadTime = 1.35;
            dispersion = 0.0001;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 250;
            midRangeProbab = 0.7;
            maxRange = 450;
            maxRangeProbab = 0.3;
        };
        class OpticsModes
        {
            class Ironsights
            {
                opticsID = 1;
                useModelOptics = 0;
                opticsFlare = "true";
                opticsPPEffects[] = {"OpticsCHAbera5", "OpticsBlur5"};
                opticsDisablePeripherialVision = 0.67;
                opticsZoomMin = 0.25;
                opticsZoomMax = 1.1;
                opticsZoomInit = 0.75;
                memoryPointCamera = "eye";
                visionMode[] = {};
                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CowsSlot : CowsSlot
            {
                displayName = "Optics Slot";
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
                iconPinpoint = "Bottom";
                iconPosition[] = {0.5, 0.35};
                iconScale = 0.2;
                linkProxy = "\a3\data_f\proxies\weapon_slots\TOP";
                compatibleItems[] =
                    {
                        "JA_104th_cows_LRPS",
                        "3AS_optic_DC15X_F"};
            };
            class MuzzleSlot : MuzzleSlot
            {
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                displayName = "$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
                compatibleItems[] =
                    {
                        "JA_104th_muzzle_flash"};
            };
            class UnderBarrelSlot : UnderBarrelSlot
            {
                iconPicture = "\A3\Weapons_F_Mark\Data\UI\attachment_under.paa";
                iconPinpoint = "Bottom";
                linkProxy = "\A3\Data_F_Mark\Proxies\Weapon_Slots\UNDERBARREL";
                compatibleItems[] =
                    {
                        "bipod_01_F_blk"};
            };
        };
    };

    // Firepuncher 773
    class JA_104th_FP773 : JA_104th_rifle_base_stunless
    {
        ACE_barrelTwist = 330;
        ACE_barrelLength = 737;
        ACE_twistDirection = 1;
        scope = 2;
        displayName = "[104th] FP-773";
        baseWeapon = "JA_104th_FP773";
        mass = 120;
        picture = "\MRC\JLTS\weapons\DC15X\data\ui\DC15X_ui_ca.paa";
        model = "kobra\442_weapons\weapons\773\k_773_rifle.p3d";
        handAnim[] = {"OFP2_ManSkeleton", "kobra\442_animations\weapons\k_773_hold.rtm"};
        reloadAction = "ReloadOverheat_DLT";
        reloadMagazineSound[] = {"WarMantle\WM_Imperial_Weapons\data\sfx\overheat", 5, 1, 30};
        recoil = "recoil_dmr_01";
        recoilProne = "recoil_single_prone_mx";
        initSpeed = 2000;
        magazines[] =
            {
                "JA_104th_Weapons_Mags_40mw20",
                "JA_104th_Weapons_Mags_50mw5",
                "JA_104th_Weapons_Mags_100mw1",
                "JA_104th_Weapons_Mags_EMPMw2"};
        modelOptics = "\A3\Weapons_F\acc\reticle_sniper_F";
        modes[] = {"Single"};
        class Single : Single
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
                begin1[] = {"Jangos_Armory_Blasters\data\sounds\FP773_shot1", +3db, 1, 2200};
                begin2[] = {"Jangos_Armory_Blasters\data\sounds\FP773_shot1", +3db, 1, 2200};
                begin3[] = {"Jangos_Armory_Blasters\data\sounds\FP773_shot1", +3db, 1, 2200};
                soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.33};
            };
            reloadTime = 1.25;
            dispersion = 0.00008;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 250;
            midRangeProbab = 0.7;
            maxRange = 450;
            maxRangeProbab = 0.3;
        };
        class OpticsModes
        {
            class Ironsights
            {
                opticsID = 1;
                useModelOptics = 0;
                opticsFlare = "true";
                opticsPPEffects[] = {"OpticsCHAbera5", "OpticsBlur5"};
                opticsDisablePeripherialVision = 0.67;
                opticsZoomMin = 0.25;
                opticsZoomMax = 1.1;
                opticsZoomInit = 0.75;
                memoryPointCamera = "eye";
                visionMode[] = {};
                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CowsSlot : CowsSlot
            {
                displayName = "Optics Slot";
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
                iconPinpoint = "Bottom";
                iconPosition[] = {0.5, 0.35};
                iconScale = 0.2;
                linkProxy = "\a3\data_f\proxies\weapon_slots\TOP";
                compatibleItems[] =
                    {
                        "3AS_Imp_Optic_1",
                        "3AS_optic_DC15X_F",
                        "JA_104th_cows_LRPS",
                        "OPTRE_SRM_Sight",
                        "k_773_scope1",
                        "k_773_scope2"};
            };
            class MuzzleSlot : MuzzleSlot
            {
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                displayName = "$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
                compatibleItems[] =
                    {
                        "k_773_snds",
                        "OPTRE_SRS99D_Suppressor"};
            };
            class PointerSlot : PointerSlot
            {
                compatibleItems[] = {
                    "acc_flashlight",
                    "acc_pointer_IR",
                    "ACE_acc_pointer_green"};
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
                iconPinpoint = "Center";
                linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
                displayName = "Pointer Slot";
            };
            class UnderBarrelSlot : UnderBarrelSlot
            {
                iconPicture = "\A3\Weapons_F_Mark\Data\UI\attachment_under.paa";
                iconPinpoint = "Bottom";
                linkProxy = "\A3\Data_F_Mark\Proxies\Weapon_Slots\UNDERBARREL";
                compatibleItems[] =
                    {
                        "bipod_01_F_blk",
                        "3AS_bipod_DC15X_F"};
            };
        };
    };

    // DC17M
    class JA_104th_DC17M : JA_104th_rifle_base
    {
        ACE_barrelTwist = 178;
        ACE_barrelLength = 264;
        ACE_twistDirection = 1;
        BNA_KC_weapons_attachmentSwapEnabled = 1; // Enables attachment swapping
        BNA_KC_weapons_attachments[] = 
                { // List of a property in the magazine class, and what attachment to apply
            // Property can be whatever, but should have a TAG
            {"JA_104th_isBlasterMag", "ls_muzzle_dc17m_blaster"},
            {"JA_104th_isATMag", "ls_muzzle_dc17m_antiArmor"},
            {"JA_104th_isSniperMag", "ls_muzzle_dc17m_sniper"}
                };
        scope = 2;
        displayName = "[104th] DC-17M";
        baseWeapon = "JA_104th_DC17M";
        mass = 60;
        picture = "\ls\core\addons\weapons_dcSeries\data\ui\dc17m_ui_ca.paa";
        model = "\ls\core\addons\weapons_dcSeries\dc17m\ls_weapon_dc17m.p3d";
        handAnim[] = {"OFP2_ManSkeleton","\ls\core\addons\weapons_dcSeries\dc17m\anims\dc17m_handanim.rtm"};
        reloadAction = "GestureReload_JLTS_DC15A";
        reloadTime = 0.1;
        recoil = "recoil_mx";
        magazines[] =
            {
                "JA_104th_Weapons_Mags_20mw70",
                "JA_104th_Weapons_Mags_50mw5",
                "JA_104th_Weapons_Mags_100mw_AT"};
        modelOptics = "3AS\3AS_Weapons\Data\3AS_2D_Optic.p3d";
        class stun : JA_104th_stun_muzzle
        {
        };
        muzzles[] =
            {
                "this",
                "Stun"};
        class OpticsModes
        {
            class Ironsights
            {
                opticsID = 1;
                useModelOptics = 0;
                opticsFlare = "true";
                opticsPPEffects[] = {"OpticsCHAbera5", "OpticsBlur5"};
                opticsDisablePeripherialVision = 0.67;
                opticsZoomMin = 0.25;
                opticsZoomMax = 1.1;
                opticsZoomInit = 0.75;
                memoryPointCamera = "eye";
                visionMode[] = {};
                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
            class Scope : Ironsights
            {
                opticsID = 2;
                useModelOptics = 1;
                opticsPPEffects[] = {"OpticsCHAbera5", "OpticsBlur5"};
                opticsDisablePeripherialVision = 0.67;
                opticsZoomMin = 0.125;
                opticsZoomMax = 0.125;
                opticsZoomInit = 0.125;
                memoryPointCamera = "opticView";
                visionMode[] = {"Normal", "NVG", "Ti"};
                thermalMode[] = {0, 1};
                opticsFlare = "true";
                distanceZoomMin = 100;
                distanceZoomMax = 100;
                cameraDir = "";
            };
        };
        modes[] = {"Single","FullAuto"};
        class Single: Single
        {
            reloadTime=0.1;     
            dispersion=0.0005;
            sounds[] = {"StandardSound"};
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"ls_dc17m_sniper_Shot_SoundSet"};
            };
        };
        class FullAuto: FullAuto
        {
            reloadTime = 0.1;
            dispersion = 0.0005;
            sounds[] = {"StandardSound"};
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"ls_dc17m_Shot_SoundSet"};
            };
        };
        class FullAuto : FullAuto
        {
            reloadTime = 0.1;
            dispersion = 0.0005;
            sounds[] = {"StandardSound"};
            class BaseSoundModeType
            {
                weaponSoundEffect = "";
                begin1[] = {"\swlw_rework\sounds\dc\17\DC17_shot.wss", 1, 1, 1800};
                closure1[] = {};
                closure2[] = {};
                soundClosure[] = {};
            };
            class StandardSound : BaseSoundModeType
            {
                weaponSoundEffect = "";
                begin1[] = {"\swlw_rework\sounds\dc\17\DC17_shot.wss", 1, 1, 1800};
                soundBegin[] = {"begin1", 1};
                closure1[] = {};
                closure2[] = {};
                soundClosure[] = {};
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CowsSlot : CowsSlot
            {
                displayName = "Optics Slot";
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
                iconPinpoint = "Bottom";
                iconPosition[] = {0.5, 0.35};
                iconScale = 0.2;
                linkProxy = "\a3\data_f\proxies\weapon_slots\TOP";
                compatibleItems[] = 
                {
                    "SWLW_attachment_scope_DC17M_sniper",
                    "JA_104th_cows_rco",
                    "JA_104th_cows_rco_2",
                    "JA_104th_cows_rco_3",

                    "JA_104th_cows_mrco",
                    "JA_104th_cows_mrco_2",
                    "JA_104th_cows_mrco_3",

                    "JA_104th_cows_Holosight",
                    "JA_104th_cows_Holosight_2",
                    "JA_104th_cows_Holosight_3",

                    "JA_104th_cows_HoloScope",
                    "JA_104th_cows_HoloScope_2",
                    "JA_104th_cows_HoloScope_3",

                    "JA_104th_cows_DMS",
                    "JA_104th_cows_DMS_2",
                    "JA_104th_cows_DMS_3",
                    "JA_104th_cows_DMS_4",

                    "JA_104th_cows_Holoscope_LR",
                    "JA_104th_cows_Holoscope_LR_2",
                    "JA_104th_cows_Holoscope_LR_3",
                    "JA_104th_cows_Holoscope_LR_4"
                    
                };
            };
            class MuzzleSlot : MuzzleSlot
            {
                linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
                displayName="$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
                compatibleItems[]=
                {
                    "ls_muzzle_dc17m_blaster",
                    "ls_muzzle_dc17m_antiArmor",
                    "ls_muzzle_dc17m_sniper"
                };
            };
            class PointerSlot : PointerSlot
            {
                compatibleItems[] = {"acc_flashlight", "acc_pointer_IR"};
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
                iconPinpoint = "Center";
                linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
                displayName = "Pointer Slot";
            };
        };
    };
    // DP23
    class JA_104th_DP23 : JA_104th_rifle_base_stunless
    {
        ACE_barrelTwist = 178;
        ACE_barrelLength = 506;
        ACE_twistDirection = 0;
        scope = 2;
        displayName = "[104th] DP-23";
        baseWeapon = "JA_104th_DP23";
        mass = 85;
        picture = "\MRC\JLTS\weapons\DP23\data\ui\DP23_ui_ca.paa";
        JLTS_canHaveShield = 0; // Shield Fix
        JLTS_shieldedWeapon = "";
        model = "\3AS\3AS_Weapons\Republic\DP23\3AS_DP23_F.p3d";
        handAnim[] = {"OFP2_ManSkeleton", "3as\3AS_Weapons\Republic\DP23\Data\Anim\New_DP23_handanim.rtm"};
        reloadMagazineSound[] = {"swlw_rework\sounds\dc\15\DC15A_reload.wss", 3, 1, 30};
        recoil = "JLTS_recoil_DP23";
        magazines[] =
            {
                "3AS_10Rnd_EC30_Pellets",
                "3AS_10Rnd_ESlug_Mag",
                "3AS_1Rnd_EC80_Flechette"};
        modes[] = {"Single"};
        class Single : Single
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
                begin1[] = {"swlw_rework\sounds\shotgun\DP23_shot.wss", +3db, 1, 2200};
                begin2[] = {"swlw_rework\sounds\shotgun\DP23_shot.wss", +3db, 1, 2200};
                begin3[] = {"swlw_rework\sounds\shotgun\DP23_shot.wss", +3db, 1, 2200};
                soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.34};
            };
            reloadTime = 0.28;
            dispersion = 0.00035;
            minRange = 1;
            minRangeProbab = 0.5;
            midRange = 45;
            midRangeProbab = 0.7;
            maxRange = 80;
            maxRangeProbab = 0.3;
        };
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CowsSlot : CowsSlot
            {
                displayName = "Optics Slot";
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
                iconPinpoint = "Bottom";
                iconPosition[] = {0.5, 0.35};
                iconScale = 0.2;
                linkProxy = "\a3\data_f\proxies\weapon_slots\TOP";
                compatibleItems[] =
                    {

                    };
            };
            class PointerSlot : PointerSlot
            {
                compatibleItems[] = {"acc_flashlight", "acc_pointer_IR"};
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
                iconPinpoint = "Center";
                linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
                displayName = "Pointer Slot";
            };
        };
    };
    // Westar M5
    class JA_104th_WestarM4 : JA_104th_rifle_base
    {
        ACE_barrelTwist = 406;
        ACE_barrelLength = 200;
        ACE_twistDirection = 1;
        scope = 2;
        displayName = "[104th] Westar M4";
        baseWeapon = "JA_104th_WestarM4";
        mass = 74;
        picture = "\SWLW_clones\smgs\westar_m5\data\ui\WestarM5_ui.paa";
        model = "3AS\3AS_Weapons\WestarM5\3AS_Westar_M5_F.p3d";
        handAnim[] =
            {
                "OFP2_ManSkeleton",
                "\3AS\3AS_Weapons\WestarM5\Data\Anim\WestarM5_handanim.rtm"};
        recoil = "recoil_SMG_03";
        muzzles[] =
            {
                "this",
                "Stun",
            };
        magazines[] =
            {
                "JA_104th_Weapons_Mags_20mw40",
                "JA_104th_Weapons_Mags_20mw70"};
        class stun : JA_104th_stun_muzzle
        {
        };
        modes[] = {"FullAuto", "Single"};
        class FullAuto : FullAuto
        {
            class BaseSoundModeType;
            class StandardSound : BaseSoundModeType
            {
                soundSetShot[] = {"3AS_Westar_Shot_SoundSet"};
            };
            class SilencedSound
            {
                begin1[] = {"Jangos_Armory_Blasters\data\sounds\Suppressed_Rifle_shot.wss", +0.3db, 1, 2200};
                begin2[] = {"Jangos_Armory_Blasters\data\sounds\Suppressed_Rifle_shot.wss", +0.3db, 1, 2200};
                begin3[] = {"Jangos_Armory_Blasters\data\sounds\Suppressed_Rifle_shot.wss", +0.3db, 1, 2200};
                closure1[] = {};
                closure2[] = {};
                soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.33};
                soundClosure[] = {};
                weaponSoundEffect = "";
            };
            reloadTime = 0.0775;
            dispersion = 0.0004;
            minRange = 0;
            minRangeProbab = 1;
            midRange = 10;
            midRangeProbab = 1;
            maxRange = 20;
            maxRangeProbab = 1;
            aiRateOfFire = 0;
            aiRateOfFireDistance = 600;
        };
        class Single : Single
        {
            dispersion = 0.0003;
            reloadTime = 0.08;
            class BaseSoundModeType;
            class StandardSound : BaseSoundModeType
            {
                soundSetShot[] = {"3AS_Westar_Shot_SoundSet"};
            };
            class SilencedSound
            {
                begin1[] = {"Jangos_Armory_Blasters\data\sounds\Suppressed_Rifle_shot.wss", +0.3db, 1, 2200};
                begin2[] = {"Jangos_Armory_Blasters\data\sounds\Suppressed_Rifle_shot.wss", +0.3db, 1, 2200};
                begin3[] = {"Jangos_Armory_Blasters\data\sounds\Suppressed_Rifle_shot.wss", +0.3db, 1, 2200};
                closure1[] = {};
                closure2[] = {};
                soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.33};
                soundClosure[] = {};
                weaponSoundEffect = "";
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CowsSlot : CowsSlot
            {
                displayName = "Optics Slot";
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
                iconPinpoint = "Bottom";
                iconPosition[] = {0.5, 0.35};
                iconScale = 0.2;
                linkProxy = "\a3\data_f\proxies\weapon_slots\TOP";
                compatibleItems[] =
                    {
                        "3AS_Optic_Scope_WestarM5",
                        "3AS_Imp_Optic_1",
                        "3AS_Imp_Optic_2",
                        "3AS_Imp_Optic_3",
                        "3AS_Imp_Optic_4"};
            };
            class MuzzleSlot : MuzzleSlot
            {
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                displayName = "$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
                iconPinpoint = "Center";
                compatibleItems[] =
                    {
                        "JA_104th_muzzle_flash",
                        "JA_104th_muzzle_suppressor"};
            };
            class PointerSlot : PointerSlot
            {
                compatibleItems[] = {"acc_flashlight", "acc_pointer_IR"};
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
                iconPinpoint = "Center";
                linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
                displayName = "Pointer Slot";
            };
        };
    };

    // Westar M5
    class JA_104th_WestarM5 : JA_104th_rifle_base
    {
        ACE_barrelTwist = 406;
        ACE_barrelLength = 200;
        ACE_twistDirection = 1;
        scope = 2;
        displayName = "[104th] Westar M5";
        baseWeapon = "JA_104th_WestarM5";
        mass = 74;
        picture = "\SWLW_clones\smgs\westar_m5\data\ui\WestarM5_ui.paa";
        model = "3AS\3AS_Weapons\WestarM5\3AS_Westar_M5_GL.p3d";
        handAnim[] =
            {
                "OFP2_ManSkeleton",
                "\3AS\3AS_Weapons\WestarM5\Data\Anim\WestarM5_handanim.rtm"};
        recoil = "recoil_SMG_03";
        muzzles[] =
            {
                "this",
                "Stun",
                "JA_104th_WestarM5_UGL_F"};
        magazines[] =
            {
                "JA_104th_Weapons_Mags_20mw40"};
        class stun : JA_104th_stun_muzzle
        {
        };
        modes[] = {"FullAuto", "Single"};
        class FullAuto : FullAuto
        {
            class BaseSoundModeType;
            class StandardSound : BaseSoundModeType
            {
                soundSetShot[] = {"3AS_Westar_Shot_SoundSet"};
            };
            class SilencedSound
            {
                begin1[] = {"Jangos_Armory_Blasters\data\sounds\Suppressed_Rifle_shot.wss", +0.3db, 1, 2200};
                begin2[] = {"Jangos_Armory_Blasters\data\sounds\Suppressed_Rifle_shot.wss", +0.3db, 1, 2200};
                begin3[] = {"Jangos_Armory_Blasters\data\sounds\Suppressed_Rifle_shot.wss", +0.3db, 1, 2200};
                closure1[] = {};
                closure2[] = {};
                soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.33};
                soundClosure[] = {};
                weaponSoundEffect = "";
            };
            reloadTime = 0.125;
            dispersion = 0.000325;
            minRange = 0;
            minRangeProbab = 1;
            midRange = 10;
            midRangeProbab = 1;
            maxRange = 20;
            maxRangeProbab = 1;
            aiRateOfFire = 0;
            aiRateOfFireDistance = 600;
        };
        class Single : Single
        {
            dispersion = 0.0003;
            reloadTime = 0.125;
            class BaseSoundModeType;
            class StandardSound : BaseSoundModeType
            {
                soundSetShot[] = {"3AS_Westar_Shot_SoundSet"};
            };
            class SilencedSound
            {
                begin1[] = {"Jangos_Armory_Blasters\data\sounds\Suppressed_Rifle_shot.wss", +0.3db, 1, 2200};
                begin2[] = {"Jangos_Armory_Blasters\data\sounds\Suppressed_Rifle_shot.wss", +0.3db, 1, 2200};
                begin3[] = {"Jangos_Armory_Blasters\data\sounds\Suppressed_Rifle_shot.wss", +0.3db, 1, 2200};
                closure1[] = {};
                closure2[] = {};
                soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.33};
                soundClosure[] = {};
                weaponSoundEffect = "";
            };
        };
        class JA_104th_WestarM5_UGL_F : UGL_F
        {
            displayName = "[104th] Underbarrel Grenade Launcher";
            descriptionShort = "Underbarrel GL Module for the Westar M5";
            useModelOptics = 0;
            useExternalOptic = 0;
            magazines[] =
                {
                    "ACE_HuntIR_M203",
                    "JA_104th_Weapons_Mags_GL_HE3",
                    "JA_104th_Weapons_Mags_GL_AP2",

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
                    "JA_104th_Weapons_Mags_GL_flare_Purple3"};
            magazineWell[] = {};
            cameraDir = "OP_look";
            discreteDistance[] = {75, 100, 150, 200, 250, 300, 350, 400};
            discreteDistanceCameraPoint[] = {"OP_eye_75", "OP_eye_100", "OP_eye_150", "OP_eye_200", "OP_eye_250", "OP_eye_300", "OP_eye_350", "OP_eye_400"};
            discreteDistanceInitIndex = 1;
            reloadAction = "GestureReloadMXUGL";
            reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_UGL_reload", 1, 1, 10};
            class Single : Mode_SemiAuto
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
                    begin1[] = {"SWLW_clones\rifles\gl\sounds\gl", 1, 1, 1800};
                    begin2[] = {"SWLW_clones\rifles\gl\sounds\gl", 1, 1, 1800};
                    begin3[] = {"SWLW_clones\rifles\gl\sounds\gl", 1, 1, 1800};
                    soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.33};
                };
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CowsSlot : CowsSlot
            {
                displayName = "Optics Slot";
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
                iconPinpoint = "Bottom";
                iconPosition[] = {0.5, 0.35};
                iconScale = 0.2;
                linkProxy = "\a3\data_f\proxies\weapon_slots\TOP";
                compatibleItems[] =
                    {
                        "3AS_Optic_Scope_WestarM5",
                        "3AS_Imp_Optic_1",
                        "3AS_Imp_Optic_2",
                        "3AS_Imp_Optic_3",
                        "3AS_Imp_Optic_4"};
            };
            class MuzzleSlot : MuzzleSlot
            {
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                displayName = "$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
                iconPinpoint = "Center";
                compatibleItems[] =
                    {
                        "JA_104th_muzzle_flash",
                        "JA_104th_muzzle_suppressor"};
            };
            class PointerSlot : PointerSlot
            {
                compatibleItems[] = {"acc_flashlight", "acc_pointer_IR"};
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
                iconPinpoint = "Center";
                linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
                displayName = "Pointer Slot";
            };
        };
    };

    // Westar 35S
    class JA_104th_Westar35S : JA_104th_rifle_base
    {
        ACE_barrelTwist = 240;
        ACE_barrelLength = 415;
        ACE_twistDirection = 1;
        scope = 2;
        displayName = "[104th] Westar 35S";
        baseWeapon = "JA_104th_Westar35S";
        mass = 74;
        picture = "\SWLW_merc_mando\rifles\westar35s\data\ui\SWLW_westar35s_ui.paa";
        model = "SWLW_merc_mando\rifles\westar35s\westar35s.p3d";
        handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F_epa\LongRangeRifles\DMR_01\Data\Anim\dmr_01.rtm"};
        fireLightDiffuse[] = {0.5, 0.5, 0.25};
        fireLightAmbient[] = {0.5, 0.5, 0.25};
        magazines[] =
            {
                "JA_104th_Weapons_Mags_20mw40",
                "JA_104th_Weapons_Mags_20mw70"};
        muzzles[] =
            {
                "this",
                "Scatter"};
        modes[] = {"FullAuto", "Single"};
        class FullAuto : FullAuto
        {
            minRange = 30;
            reloadTime = 0.096;
            dispersion = 0.002;
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
                begin1[] = {"SWLW_merc_mando\rifles\westar35s\sounds\westar35s", +3db, 1, 2200};
                begin2[] = {"SWLW_merc_mando\rifles\westar35s\sounds\westar35s", +3db, 1, 2200};
                begin3[] = {"SWLW_merc_mando\rifles\westar35s\sounds\westar35s", +3db, 1, 2200};
                soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.33};
            };
        };
        class Single : Single
        {
            minRange = 30;
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
                begin1[] = {"SWLW_merc_mando\rifles\westar35s\sounds\westar35s", +3db, 1, 2200};
                begin2[] = {"SWLW_merc_mando\rifles\westar35s\sounds\westar35s", +3db, 1, 2200};
                begin3[] = {"SWLW_merc_mando\rifles\westar35s\sounds\westar35s", +3db, 1, 2200};
                soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.33};
            };
        };
        class Scatter : UGL_F
        {
            displayName = "[104th] Underbarrel Shotgun";
            descriptionShort = "Underbarrel Shotgun Module for the 35s";
            cursor = "";
            useModelOptics = 0;
            useExternalOptic = 1;
            magazineWell[] = {};
            cameraDir = "eye";
            memoryPointCamera = "";
            discreteDistance[] = {100};
            discreteDistanceCameraPoint[] = {"eye"};
            discreteDistanceInitIndex = 0;
            initSpeed = -1;
            muzzleEnd = "shotgun pos";
            muzzlePos = "shotgun dir";
            reloadMagazineSound[] = {"\SWLW_main\sounds\scatter_reload", 0.56234133, 1, 30};
            magazines[] = {"JA_104th_Weapons_Mags_10mw20SC"};
            class Single : Mode_SemiAuto
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
                    begin1[] = {"\MRC\JLTS\weapons\SBB3\sounds\SBB3_fire.wss", +3db, 1, 2200};
                    soundBegin[] = {"begin1", 1};
                };
                reloadTime = 0.5;
                dispersion = 0.00073;
                minRange = 0;
                minRangeProbab = 0.5;
                midRange = 30;
                midRangeProbab = 0.7;
                maxRange = 60;
                maxRangeProbab = 0.3;
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CowsSlot : CowsSlot
            {
                displayName = "Optics Slot";
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
                iconPinpoint = "Bottom";
                iconPosition[] = {0.5, 0.35};
                iconScale = 0.2;
                linkProxy = "\a3\data_f\proxies\weapon_slots\TOP";
                compatibleItems[] =
                    {
                        "SWLW_Westar35S_scope",
                        "3AS_Imp_Optic_1",
                        "3AS_Imp_Optic_2",
                        "3AS_Imp_Optic_3",
                        "3AS_Imp_Optic_4"};
            };
                        class MuzzleSlot: MuzzleSlot
            {
                linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
                displayName="$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
                iconPicture="\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
                iconPinpoint="Center";
                compatibleItems[]=
                {
                    "ls_muzzle_westar35s_suppressor"
                };
            };
        };
    };

    // Valken 38Y - Deprecated, functionality moved to 15A

    // Z6
    class JA_104th_Z6 : JA_104th_rifle_base_stunless
    {
        ACE_barrelTwist = 279;
        ACE_barrelLength = 381;
        ACE_twistDirection = 1;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[104th] Z-6 Rotary Blaster Cannon";
        baseWeapon = "JA_104th_Z6";
        mass = 264;
        picture = "\MRC\JLTS\weapons\Z6\data\ui\Z6_ui_ca.paa";
        model = "\MRC\JLTS\weapons\Z6\Z6.p3d";
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {"\MRC\JLTS\weapons\Z6\data\Z6_1_co.paa", "\MRC\JLTS\weapons\Z6\data\Z6_2_co.paa"};
        handAnim[] = {"OFP2_ManSkeleton", "\MRC\JLTS\weapons\Z6\anims\Z6_handanim.rtm"};
        recoil = "recoil_lim";
        reloadAction = "ReloadMagazine";
        reloadMagazineSound[] = {"swlw_rework\sounds\z-series\z6\Z6_reload.wss", 3, 1, 30};
        magazines[] =
            {
                "JA_104th_Weapons_Mags_10mw500",
            };
        modes[] = {"manual", "Overcharge"};
        muzzles[] =
            {
                "this"};
        class manual : Mode_FullAuto
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
            dispersion = 0.0138;
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
        class Overcharge : manual
        {
            dispersion = "0.013*4";
            displayName = "Overcharge";
            reloadTime = "0.015";
            burst = 25;
            textureType = "fastAuto";
        };
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class MuzzleSlot : MuzzleSlot
            {
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                displayName = "$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
                iconPinpoint = "Center";
                iconPosition[] = {0.24, 0.35};
                iconScale = 0.2;
                compatibleItems[] =
                    {
                        "JA_104th_muzzle_flash"};
            };
        };
    };

    // Secondaries

    // DC17SA
    class JA_104th_DC17SA : JA_104th_pistol_base
    {
        ACE_barrelTwist = 254;
        ACE_barrelLength = 104;
        ACE_twistDirection = 1;
        displayName = "[104th] DC-17SA";
        baseWeapon = "JA_104th_DC17SA";
        mass = 20;
        picture = "\MRC\JLTS\weapons\DC17SA\data\ui\DC17SA_ui_ca.paa";
        model = "\3AS\3AS_Weapons\Republic\DC17S\3AS_DC17S_F.p3d";
        reloadAction = "3AS_Vent_Reload_Pistol";
        reloadMagazineSound[] = {"3as\3AS_Main\Sounds\Reload\Venting_Sound.ogg", 2, 1, 30};
        magazines[] =
            {
                "JA_104th_Weapons_Mags_10mw30"};
        modes[] = {"FullAuto", "Single"};
        class FullAuto : Single
        {
            autoFire = 1;
            reloadTime = 0.1;
            displayName = "$STR_DN_MODE_FULLAUTO";
            textureType = "fullAuto";
            aiDispersionCoefY = 3;
            aiDispersionCoefX = 2;
            soundBurst = 0;
            sounds[] = {"StandardSound", "SilencedSound"};
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
                begin1[] = {"Jangos_Armory_Blasters\data\sounds\DC17SA_shot1.wss", +3db, 1, 2200};
                begin2[] = {"Jangos_Armory_Blasters\data\sounds\DC17SA_shot1.wss", +3db, 1, 2200};
                begin3[] = {"Jangos_Armory_Blasters\data\sounds\DC17SA_shot1.wss", +3db, 1, 2200};
                soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.33};
            };
            class SilencedSound : BaseSoundModeType
            {
                begin1[] = {"Jangos_Armory_Blasters\data\sounds\Suppressed_pistol_shot.wss", +0.1db, 1, 2200};
                begin2[] = {"Jangos_Armory_Blasters\data\sounds\Suppressed_pistol_shot.wss", +0.1db, 1, 2200};
                begin3[] = {"Jangos_Armory_Blasters\data\sounds\Suppressed_pistol_shot.wss", +0.1db, 1, 2200};
                closure1[] = {};
                closure2[] = {};
                soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.33};
                soundClosure[] = {};
                weaponSoundEffect = "";
            };
        };
        class Single : Single
        {
            autoFire = 0;
            reloadTime = 0.1;
            aiDispersionCoefY = 3;
            aiDispersionCoefX = 2;
            soundBurst = 0;
            sounds[] = {"StandardSound", "SilencedSound"};
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
                begin1[] = {"Jangos_Armory_Blasters\data\sounds\DC17SA_shot1.wss", +3db, 1, 2200};
                begin2[] = {"Jangos_Armory_Blasters\data\sounds\DC17SA_shot1.wss", +3db, 1, 2200};
                begin3[] = {"Jangos_Armory_Blasters\data\sounds\DC17SA_shot1.wss", +3db, 1, 2200};
                soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.33};
            };
            class SilencedSound
            {
                begin1[] = {"Jangos_Armory_Blasters\data\sounds\Suppressed_pistol_shot.wss", +0.3db, 1, 2200};
                begin2[] = {"Jangos_Armory_Blasters\data\sounds\Suppressed_pistol_shot.wss", +0.3db, 1, 2200};
                begin3[] = {"Jangos_Armory_Blasters\data\sounds\Suppressed_pistol_shot.wss", +0.3db, 1, 2200};
                closure1[] = {};
                closure2[] = {};
                soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.33};
                soundClosure[] = {};
                weaponSoundEffect = "";
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CowsSlot : CowsSlot
            {
                displayName = "Optics Slot";
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
                iconPinpoint = "Bottom";
                iconPosition[] = {0.5, 0.35};
                iconScale = 0.2;
                linkProxy = "\a3\data_f\proxies\weapon_slots\TOP";
                compatibleItems[] =
                    {
                        "JA_104th_cows_pistol",
                        "JA_104th_cows_pistol_2"};
            };
            class MuzzleSlot : MuzzleSlot
            {
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                displayName = "$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
                compatibleItems[] =
                    {
                        "muzzle_snds_L",
                        "3AS_muzzle_DC17S_F"};
            };
        };
    };

   // Dual DC17SA ARC LFP model
   class JA_104th_DC15ARC: LFP_dc17arc_Dual
   {
       ACE_barrelTwist = 254;
       ACE_barrelLength = 104;
       ACE_twistDirection = 1;
       displayName = "[104th] Dual DC-15ARCs";
       baseWeapon = "JA_104th_DC15ARC";
       mass = 40;
       picture = "\3AS\3AS_Weapons\DC15SA\data\UI\3as_dc15sa.paa";
       reloadAction = "3AS_GestureReloadDualDC17S";
       reloadMagazineSound[] = {"3as\3AS_Main\Sounds\Reload\Venting_Sound.ogg",2,1,30};
       magazines[] = {"BNA_KC_Mag_60Rnd_DC17_dualHP"};
   };

    // Dual DC17SA 3AS model LS class for Tusk
    class JA_104th_DC17SA_Dual : ls_weapon_dualDC17_secondary
    {
        displayName = "[104th] Dual DC-17SAs";
        picture = "\MRC\JLTS\weapons\DC17SA\data\ui\DC17SA_ui_ca.paa";
        baseWeapon = "JA_104th_DC17SA_Dual";
        mass = 40;
    };
    class JA_104th_DC17SA_Dual_LeftDummy : ls_weapon_dualDC17Left_dummy
    {
    };

    // DC15SA
    class JA_104th_DC15SA : JA_104th_pistol_base
    {
        ACE_barrelTwist = 254;
        ACE_barrelLength = 104;
        ACE_twistDirection = 1;
        displayName = "[104th] DC-15SA";
        baseWeapon = "JA_104th_DC15SA";
        mass = 20;
        picture = "\3AS\3AS_Weapons\DC15SA\data\UI\3as_dc15sa.paa";
        model = "3AS\3AS_Weapons\DC15SA\3AS_DC15SA_F.p3d";
        magazines[] =
            {
                "JA_104th_Weapons_Mags_10mw40"};
        modes[] = {"Single"};
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};
        recoil = "recoil_SMG_03";
        reloadAction = "3AS_Vent_Reload_Pistol";
        reloadMagazineSound[] = {"3as\3AS_Main\Sounds\Reload\Venting_Sound.ogg", 2, 1, 30};
        class Single : Single
        {
            autoFire = 0;
            reloadTime = 0.12;
            aiDispersionCoefY = 3;
            aiDispersionCoefX = 2;
            soundBurst = 0;
            sounds[] = {"StandardSound", "SilencedSound"};
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
                begin1[] = {"Jangos_Armory_Blasters\data\sounds\DC15SA_shot1.wss", +2db, 1, 2200};
                begin2[] = {"Jangos_Armory_Blasters\data\sounds\DC15SA_shot1.wss", +2db, 1, 2200};
                begin3[] = {"Jangos_Armory_Blasters\data\sounds\DC15SA_shot1.wss", +2db, 1, 2200};
                soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.33};
            };
            class SilencedSound
            {
                begin1[] = {"Jangos_Armory_Blasters\data\sounds\Suppressed_pistol_shot.wss", +0.3db, 1, 2200};
                begin2[] = {"Jangos_Armory_Blasters\data\sounds\Suppressed_pistol_shot.wss", +0.3db, 1, 2200};
                begin3[] = {"Jangos_Armory_Blasters\data\sounds\Suppressed_pistol_shot.wss", +0.3db, 1, 2200};
                closure1[] = {};
                closure2[] = {};
                soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.33};
                soundClosure[] = {};
                weaponSoundEffect = "";
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class MuzzleSlot : MuzzleSlot
            {
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                displayName = "$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
                compatibleItems[] =
                    {
                        "muzzle_snds_L",
                        "3AS_muzzle_DC17S_F"};
            };
        };
    };

    // Westar 35SA
    class JA_104th_Westar35SA : JA_104th_pistol_base
    {
        ACE_barrelTwist = 254;
        ACE_barrelLength = 104;
        ACE_twistDirection = 1;
        scope = 2;
        displayName = "[104th] Westar 35SA";
        baseWeapon = "JA_104th_Westar35SA";
        mass = 24;
        picture = "\SWLW_merc_mando\pistols\westar35sa\data\ui\SWLW_westar35sa_ui.paa";
        model = "SWLW_merc_mando\pistols\westar35sa\westar35sa.p3d";
        reloadAction = "3AS_Vent_Reload_Pistol";
        reloadMagazineSound[] = {"3as\3AS_Main\Sounds\Reload\Venting_Sound.ogg", 2, 1, 30};
        magazines[] =
            {
                "JA_104th_Weapons_Mags_10mw40"};
        muzzles[] = {"this"};
        fireLightDiffuse[] = {0.5, 0.5, 0.25};
        fireLightAmbient[] = {0.5, 0.5, 0.25};
        class Single : Single
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
                begin1[] = {"SWLW_merc_mando\rifles\westar35s\sounds\westar35s", +3db, 1, 2200};
                begin2[] = {"SWLW_merc_mando\rifles\westar35s\sounds\westar35s", +3db, 1, 2200};
                begin3[] = {"SWLW_merc_mando\rifles\westar35s\sounds\westar35s", +3db, 1, 2200};
                soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.33};
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CowsSlot : CowsSlot
            {
                displayName = "Optics Slot";
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
                iconPinpoint = "Bottom";
                iconPosition[] = {0.5, 0.35};
                iconScale = 0.2;
                linkProxy = "\a3\data_f\proxies\weapon_slots\TOP";
                compatibleItems[] = {};
            };
        };
    };

    // Clone Knife

    // Tertiaries

    // RPS
    class JA_104th_RPS6 : ls_weapon_rps6
    {
        scope = 2;
        displayName = "[104th] RPS-6 Rocket Launcher";
        baseWeapon = "JA_104th_RPS6";
        model = "\ls_weapons\tertiary\rps6\ls_weapon_rps6";
        magazines[] =
            {
                "ls_mag_rpg_1rnd"};
    };
    class JA_104th_RPS6_H : 3AS_RPS6_HP
    {
        scope = 2;
        displayName = "[104th] RPS-6 Heavy Projectile Rocket Launcher";
        model = "\3AS\3AS_Weapons\RPS6HP\3AS_RPS6_HP.p3d";
        handAnim[] = {"OFP2_ManSkeleton", "3as\3as_weapons\data\anim\RPS6_HP_Temp.rtm"};
    };

    // Z7 Chaingun
    class JA_104th_Z7_mk2 : SWLW_Z7
    {
        author = "SW Legion Studios + Echo";
        baseWeapon = "JA_104th_Z7";
        scope = 2;
        displayName = "[104th] Z7 Rotary Shoulder Gun";
        magazines[] = {"ls_mag_flak_800rnd"};
    };

    // class JA_104th_ShoulderCannon_mk2
};

class CfgAmmo
{
    class JLTS_bullet_stun;
    class JLTS_bullet_carbine_blue;
    class JLTS_bullet_pistol_blue;
    class JLTS_bullet_scatter_blue;

    class JLTS_bullet_carbine_red;
    class JLTS_bullet_carbine_yellow;
    class JLTS_bullet_carbine_green;

    class JLTS_ammo_Grenade_EMP;

    class BNA_KC_Bullet_Plasma40MM_AT;
    class JA_104th_Weapons_Ammo_17MAT : BNA_KC_Bullet_Plasma40MM_AT
    {
    };

    class B_12Gauge_Pellets;
    class B_12Gauge_Slug;
    class B_19mm_HE;
    class G_40mm_HE;
    class G_40mm_smoke;
    class SmokeShell;
    class F_40mm_White;
    class B_40mm_APFSDS;
    class RocketBase;

    class JA_104th_Weapons_Ammo_EMP : JLTS_ammo_Grenade_EMP
    {
    };

    class JA_104th_Weapons_Ammo_base_blue : JLTS_bullet_carbine_blue
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

    class JA_104th_Weapons_Ammo_5mw : JA_104th_Weapons_Ammo_base_blue // Very Low Output
    {
        hit = 15;
        typicalSpeed = 1000;
        caliber = 2;
        waterFriction = -0.009;
        thrust = 800;
        thrustTime = 1.5;
    };
    class JA_104th_Weapons_Ammo_10mw : JA_104th_Weapons_Ammo_base_blue // Low Output
    {
        hit = 25;
        typicalSpeed = 1200;
        caliber = 2.4;
        waterFriction = -0.009;
        thrust = 1000;
        thrustTime = 1.5;
    };
    class JA_104th_Weapons_Ammo_20mw : JA_104th_Weapons_Ammo_base_blue // Medium Output
    {
        hit = 40;
        typicalSpeed = 1500;
        caliber = 2.8;
        waterFriction = -0.009;
        thrust = 2000;
        thrustTime = 1.6;
    };
    class JA_104th_Weapons_Ammo_30mw : JA_104th_Weapons_Ammo_base_blue // High Output
    {
        hit = 60;
        typicalSpeed = 3500;
        caliber = 3.6;
        airFriction = 0;
        waterFriction = -0.009;
        thrust = 3500;
        thrustTime = 1.8;
    };
    class JA_104th_Weapons_Ammo_40mw : JA_104th_Weapons_Ammo_base_blue // Very High Output
    {
        hit = 75;
        typicalSpeed = 7000;
        caliber = 4;
        airFriction = 0;
        waterFriction = -0.009;
        thrust = 6000;
        thrustTime = 2;
    };
    class JA_104th_Weapons_Ammo_50mw : JA_104th_Weapons_Ammo_base_blue // Extreme Output
    {
        hit = 95;
        typicalSpeed = 10000;
        caliber = 10;
        airFriction = 0;
        waterFriction = -0.009;
        thrust = 7730;
        thrustTime = 2;
    };
    class JA_104th_Weapons_Ammo_10mwSC : JLTS_bullet_scatter_blue // Shotgun Rounds
    {
        hit = 25;
        typicalSpeed = 750;
        caliber = 4;
        airFriction = 0;
        waterFriction = -0.009;
        thrust = 450;
        thrustTime = 1.4;
        model = "Jangos_Armory_Blasters\data\JA_104th_Weapons_Ammo_Tracers_Medium_Blue.p3d";
    };
    class JA_104th_Weapons_Ammo_20mwSC_Slug : B_12Gauge_Slug // Shotgun Slug Rounds
    {
        hit = 50;
        typicalSpeed = 900;
        caliber = 4;
        airFriction = 0;
        waterFriction = -0.009;
        thrust = 450;
        thrustTime = 1.4;
        model = "Jangos_Armory_Blasters\data\JA_104th_Weapons_Ammo_Tracers_Medium_Blue.p3d";
    };
    class JA_104th_Weapons_Ammo_20mwSC_HE : B_19mm_HE // Shotgun HE Rounds
    {
        hit = 25;
        typicalSpeed = 750;
        caliber = 4;
        airFriction = 0;
        waterFriction = -0.009;
        thrust = 325;
        thrustTime = 1.4;
        model = "Jangos_Armory_Blasters\data\JA_104th_Weapons_Ammo_Tracers_Medium_Blue.p3d";
    };
    class JA_104th_Weapons_Ammo_100mw : B_40mm_APFSDS // Test Railgun Rounds
    {
        hit = 95;
        typicalSpeed = 1200;
        caliber = 25;
        airFriction = 0;
        craterEffects = "ImpactEffectsMedium";
        waterFriction = -0.009;
        explosionAngle = 60;
        ExplosionEffects = "HEShellExplosion";
        explosionType = "explosive";
        indirectHit = 27;
        indirectHitRange = 0.5;
        suppressionRadiusBulletClose = 10;
        suppressionRadiusHit = 14;
        tracerColor[] = {0.7, 0.7, 0.5, 0.04};
        tracerColorR[] = {0.7, 0.7, 0.5, 0.04};
        thrust = 600;
        thrustTime = 2;
        warheadName = "AP";
        weaponType = "default";
    };

    // Test Rocket Rounds
    class JA_104th_Weapons_Ammo_LC : RocketBase
    {
        hit = 200;
        typicalSpeed = 1200;
        caliber = 150;
        airFriction = 0;
        waterFriction = -0.009;
        explosionAngle = 60;
        ExplosionEffects = "HEShellExplosion";
        explosionType = "explosive";
        model = "Jangos_Armory_Blasters\data\JA_104th_Weapons_Ammo_Tracers_Medium_Blue.p3d";
        indirectHit = 75;
        indirectHitRange = 1;
        submunitionAmmo = "ammo_Penetrator_Titan_AT";
        suppressionRadiusBulletClose = 10;
        suppressionRadiusHit = 14;
        thrust = 250;
        tracerColor[] = {0.7, 0.7, 0.5, 0.04};
        tracerColorR[] = {0.7, 0.7, 0.5, 0.04};
        warheadName = "AP";
        weaponType = "cannon";
    };

    // GL Ammo
    class JA_104th_Weapons_Ammo_GL_HE : G_40mm_HE
    {
        hit = 60;
        indirectHit = 50;
        indirectHitRange = 5;
        timeToLive = 30;
        fuseDistance = 3;
        model = "\MRC\JLTS\weapons\Core\effects\laser_green.p3d";
    };
    class JA_104th_Weapons_Ammo_GL_AP : JA_104th_Weapons_Ammo_GL_HE
    {
        hit = 350;
        indirectHit = 0;
        indirectHitRange = 0.1;
        model = "\MRC\JLTS\weapons\Core\effects\laser_yellow.p3d";
        explosive = 0.0001;
        deflecting = 5;
        caliber = 5;
        ace_frag_enabled = 0;
        ace_frag_force = 0;
        ace_frag_classes[] = {""};
        ace_frag_metal = 0;
        ace_frag_charge = 0;
        ace_frag_gurney_c = 0;
        ace_frag_gurney_k = "0";
        ace_rearm_caliber = 0;
    };

    // UGL Smoke - Remove RD501 FX dependencies, switch to JLTS?
    class JA_104th_Weapons_Ammo_GL_smoke_white : SmokeShell
    {
        smokeColor[] = {1, 1, 1, 1};
        effectsSmoke = "SmokeShellWhiteSmall";
        model = "\A3\Weapons_F\Ammo\UGL_Flare";
    };
    class JA_104th_Weapons_Ammo_GL_smoke_purple : JA_104th_Weapons_Ammo_GL_smoke_white
    {
        smokeColor[] = {0.4341, 0.1388, 0.41439998, 1};
        effectsSmoke = "SmokeShellPurpleEffect";
    };
    class JA_104th_Weapons_Ammo_GL_smoke_yellow : JA_104th_Weapons_Ammo_GL_smoke_white
    {
        smokeColor[] = {0.9883, 0.8606, 0.0719, 1};
        effectsSmoke = "SmokeShellYellowEffect";
    };
    class JA_104th_Weapons_Ammo_GL_smoke_red : JA_104th_Weapons_Ammo_GL_smoke_white
    {
        smokeColor[] = {0.8438, 0.1383, 0.1353, 1};
        effectsSmoke = "SmokeShellRedEffect";
    };
    class JA_104th_Weapons_Ammo_GL_smoke_green : JA_104th_Weapons_Ammo_GL_smoke_white
    {
        smokeColor[] = {0.1383, 0.8438, 0.1353, 1};
        effectsSmoke = "SmokeShellGreenEffect";
    };
    class JA_104th_Weapons_Ammo_GL_smoke_blue : JA_104th_Weapons_Ammo_GL_smoke_white
    {
        smokeColor[] = {0.1183, 0.1867, 1, 1};
        effectsSmoke = "SmokeShellBlueEffect";
    };
    class JA_104th_Weapons_Ammo_GL_smoke_orange : JA_104th_Weapons_Ammo_GL_smoke_white
    {
        smokeColor[] = {0.6697, 0.2275, 0.10053, 1};
        effectsSmoke = "SmokeShellOrangeEffect";
    };

    // UGL Flare
    class JA_104th_Weapons_Ammo_flare_white : F_40mm_White
    {
        lightColor[] = {1, 1, 1, 1};
        useFlare = 1;
        deflecting = 30;
        smokeColor[] = {1, 1, 1, 1};
        brightness = 1200;
        triggerTime = 3;
        triggerSpeedCoef = 1;
        audibleFire = 20;
        intensity = 1000000;
        timeToLive = 120;
        flareMaxDistance = 300;
    };
    class JA_104th_Weapons_Ammo_flare_green : JA_104th_Weapons_Ammo_flare_white
    {
        lightColor[] = {0, 1, 0, 0};
    };
    class JA_104th_Weapons_Ammo_flare_red : JA_104th_Weapons_Ammo_flare_white
    {
        lightColor[] = {1, 0, 0, 0};
    };
    class JA_104th_Weapons_Ammo_flare_yellow : JA_104th_Weapons_Ammo_flare_white
    {
        lightColor[] = {1, 1, 0, 0};
    };
    class JA_104th_Weapons_Ammo_flare_ir : JA_104th_Weapons_Ammo_flare_white
    {
        lightColor[] = {0.5, 0.5, 0.25, 0};
    };
    class JA_104th_Weapons_Ammo_flare_blue : JA_104th_Weapons_Ammo_flare_white
    {
        lightColor[] = {0, 0, 1, 0};
    };
    class JA_104th_Weapons_Ammo_flare_cyan : JA_104th_Weapons_Ammo_flare_white
    {
        lightColor[] = {0, 1, 1, 0};
    };
    class JA_104th_Weapons_Ammo_flare_purple : JA_104th_Weapons_Ammo_flare_white
    {
        lightColor[] = {.7, 0, 1, 0};
    };
};

class CfgMagazines
{
    class 30Rnd_65x39_caseless_mag;
    class 3Rnd_HE_Grenade_shell;
    class 3Rnd_Smoke_Grenade_shell;
    class UGL_FlareWhite_F;
    class SWLW_Z7_mag;
    class ls_mag_rpg_1rnd;

    // Universal

    class JA_104th_Weapons_Mags_stun10 : 30Rnd_65x39_caseless_mag
    {
        author = "Jango's Armory Aux Team";
        displayName = "[104th] 10Rnd Stun Cell";
        displayNameShort = "10rnd Stun";
        descriptionShort = "Stun Rounds to stop muhfuckas from running";
        picture = "\MRC\JLTS\weapons\Core\data\ui\stun_mag_ui_ca";
        model = "\MRC\JLTS\weapons\Core\stun_mag.p3d";
        modelSpecial = "";
        modelSpecialIsProxy = 0;
        count = 10;
        mass = 6;
        ammo = "JA_104th_Weapons_Ammo_Stun";
        initSpeed = 50;
        JLTS_stunDuration = 60;
    };

    // Primary Mags

    // DC-series Rifle Mag
    class JA_104th_Weapons_Mags_10mw50 : 30Rnd_65x39_caseless_mag
    {
        displayName = "[104th] Low Power Energy Cell";
        displayNameShort = "50Rnd 10MW";
        author = "Jango's Armory Aux Team";
        picture = "\MRC\JLTS\weapons\DC15S\data\ui\DC15S_mag_ui_ca.paa";
        count = 50;
        ammo = "JA_104th_Weapons_Ammo_20mw";
        initSpeed = 600;
        descriptionShort = "DC Series standard magazine";
        mass = 10;
        modelSpecial = "";
        modelSpecialIsProxy = 0;
        model = "\MRC\JLTS\weapons\DC15S\DC15S_mag.p3d";
        tracersEvery = 1;
        typicalSpeed = 600;
    };
    // DC-series Rifle Mag
    class JA_104th_Weapons_Mags_20mw40 : 30Rnd_65x39_caseless_mag
    {
        displayName = "[104th] Standard Energy Cell";
        displayNameShort = "40Rnd 20MW";
        author = "Jango's Armory Aux Team";
        picture = "\MRC\JLTS\weapons\DC15S\data\ui\DC15S_mag_ui_ca.paa";
        count = 40;
        ammo = "JA_104th_Weapons_Ammo_20mw";
        initSpeed = 800;
        descriptionShort = "DC Series standard magazine";
        mass = 10;
        modelSpecial = "";
        modelSpecialIsProxy = 0;
        model = "\MRC\JLTS\weapons\DC15S\DC15S_mag.p3d";
        tracersEvery = 1;
        typicalSpeed = 800;
    };

    // Med-High Capacity
    class JA_104th_Weapons_Mags_20mw240 : 30Rnd_65x39_caseless_mag
    {
        displayName = "[104th] High Capacity Energy Cell";
        displayNameShort = "240Rnd 20MW";
        author = "Jango's Armory Aux Team";
        picture = "\MRC\JLTS\weapons\DC17SA\data\ui\DC17SA_mag_ui_ca.paa";
        count = 240;
        ammo = "JA_104th_Weapons_Ammo_20mw";
        initSpeed = 600;
        descriptionShort = "High capacity magazine";
        mass = 12.5;
        modelSpecial = "";
        modelSpecialIsProxy = 0;
        model = "\MRC\JLTS\weapons\DC17SA\DC17SA_mag.p3d";
        tracersEvery = 1;
        typicalSpeed = 600;
    };

    // Z-6 Heavy-High
    class JA_104th_Weapons_Mags_10mw500 : 30Rnd_65x39_caseless_mag
    {
        displayName = "[104th] Z-6 Standard Energy Cell";
        displayNameShort = "500Rnd 10MW";
        author = "Jango's Armory Aux Team";
        picture = "\MRC\JLTS\weapons\z6\data\ui\z6_mag_ui_ca.paa";
        count = 500;
        ammo = "JA_104th_Weapons_Ammo_10mw";
        initSpeed = 800;
        descriptionShort = "Z-6 Specialized Low Power magazine";
        mass = 15;
        modelSpecial = "";
        modelSpecialIsProxy = 0;
        model = "\MRC\JLTS\weapons\z6\z6_mag.p3d";
        tracersEvery = 1;
        typicalSpeed = 800;
    };

    // DMR Intermediate round
    class JA_104th_Weapons_Mags_30mw30 : 30Rnd_65x39_caseless_mag
    {
        displayName = "[104th] High Power Energy Cell";
        displayNameShort = "30Rnd 30MW";
        author = "Jango's Armory Aux Team";
        picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
        count = 30;
        ammo = "JA_104th_Weapons_Ammo_30mw";
        initSpeed = 1000;
        descriptionShort = "DC15 Series High Power magazine";
        mass = 10;
        modelSpecial = "";
        modelSpecialIsProxy = 0;
        model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
        tracersEvery = 1;
        typicalSpeed = 1000;
    };

    // 15X / FP773 sniper mag
    class JA_104th_Weapons_Mags_40mw20 : 30Rnd_65x39_caseless_mag
    {
        displayName = "[104th] Sniper Energy Cell";
        displayNameShort = "20Rnd 40MW";
        author = "Jango's Armory Aux Team";
        picture = "\MRC\JLTS\weapons\DC15x\data\ui\DC15X_mag_ui_ca.paa";
        count = 20;
        ammo = "JA_104th_Weapons_Ammo_40mw";
        initSpeed = 1100;
        descriptionShort = "DC15X Specialized High Power magazine";
        mass = 10;
        modelSpecial = "";
        modelSpecialIsProxy = 0;
        model = "\MRC\JLTS\weapons\DC15x\DC15x_mag.p3d";
        tracersEvery = 1;
        typicalSpeed = 1100;
    };
    // DC17M Blaster Mag
    class JA_104th_Weapons_Mags_20mw70 : 30Rnd_65x39_caseless_mag
    {
        JA_104th_isBlasterMag = 1;
        displayName = "[104th] Extended Capacity Energy Cell";
        displayNameShort = "70Rnd 20MW";
        author = "Jango's Armory Aux Team";
        picture = "\MRC\JLTS\weapons\E5S\data\ui\E5S_mag_ui_ca.paa";
        count = 70;
        ammo = "JA_104th_Weapons_Ammo_20mw";
        initSpeed = 700;
        descriptionShort = "DC17M Blaster magazine";
        mass = 7.5;
        modelSpecial = "";
        modelSpecialIsProxy = 0;
        model = "\MRC\JLTS\weapons\E5S\E5S_mag.p3d";
        tracersEvery = 1;
        typicalSpeed = 700;
    };
    // DC17M AT Mag
    class JA_104th_Weapons_Mags_100mw_AT : 30Rnd_65x39_caseless_mag
    {
        JA_104th_isATMag = 1;
        author = "Jango's Armory Aux Team";
        displayName = "[104th] Unguided Explosive Missile";
        ammo = "JA_104th_Weapons_Ammo_17MAT";
        picture = "\MRC\JLTS\weapons\DP23\data\ui\DP23_mag_ui_ca.paa";
        model = "\MRC\JLTS\weapons\DC15x\DC15x_mag.p3d";
        count = 1;
        mass = 20;
        modelSpecial = "";
        initSpeed = 1500;
        modelSpecialIsProxy = 0;
        tracersEvery = 1;
        typicalSpeed = 1500;
    };

    // FP773 HP + 17M sniper
    class JA_104th_Weapons_Mags_50mw5 : 30Rnd_65x39_caseless_mag
    {
        JA_104th_isSniperMag = 1 displayName = "[104th] High Power Sniper Energy Cell";
        displayNameShort = "5Rnd 50MW";
        author = "Jango's Armory Aux Team";
        picture = "\MRC\JLTS\weapons\DC15x\data\ui\DC15X_mag_ui_ca.paa";
        count = 5;
        ammo = "JA_104th_Weapons_Ammo_50mw";
        initSpeed = 2000;
        descriptionShort = "SF Specialized Overcharged magazine";
        mass = 5;
        modelSpecial = "";
        modelSpecialIsProxy = 0;
        model = "\MRC\JLTS\weapons\DC15X\DC15X_mag.p3d";
        tracersEvery = 1;
        typicalSpeed = 2000;
    };
    // SF Sniper HVAP Mag
    class JA_104th_Weapons_Mags_100Mw1 : 30Rnd_65x39_caseless_mag
    {
        author = "Jango's Armory Aux Team";
        displayName = "[104th] Explosive High Power Energy Cell";
        ammo = "JA_104th_Weapons_Ammo_100mw";
        picture = "\MRC\JLTS\weapons\DP23\data\ui\DP23_mag_ui_ca.paa";
        model = "\MRC\JLTS\weapons\DC15x\DC15x_mag.p3d";
        initSpeed = 867;
        modelSpecial = "";
        modelSpecialIsProxy = 0;
        tracersEvery = 1;
        count = 1;
        mass = 15;
        typicalSpeed = 867;
    };
    class JA_104th_Weapons_Mags_EMPMw2 : 30Rnd_65x39_caseless_mag
    {
        author = "Jango's Armory Aux Team";
        displayName = "[104th] EMP Energy Cell";
        ammo = "JLTS_ammo_Grenade_EMP";
        picture = "\MRC\JLTS\weapons\DP23\data\ui\DP23_mag_ui_ca.paa";
        model = "\MRC\JLTS\weapons\DC15x\DC15x_mag.p3d";
        initSpeed = 867;
        modelSpecial = "";
        modelSpecialIsProxy = 0;
        tracersEvery = 1;
        count = 2;
        mass = 15;
        typicalSpeed = 867;
    };

    // 12g x 20 rnds equivalent - For DP23
    class JA_104th_Weapons_Mags_10mw20SC : 30Rnd_65x39_caseless_mag
    {
        displayName = "[104th] Scatter Wide Spread";
        displayNameShort = "20Rnd 10MW SC";
        author = "Jango's Armory Aux Team";
        picture = "\MRC\JLTS\weapons\DP23\data\ui\DP23_mag_ui_ca.paa";
        count = 20;
        ammo = "JA_104th_Weapons_Ammo_10mwSC";
        initSpeed = 600;
        descriptionShort = "DP23 Low Power scatter magazine";
        mass = 7.5;
        modelSpecial = "";
        modelSpecialIsProxy = 0;
        model = "\MRC\JLTS\weapons\DP23\DP23_mag.p3d";
        tracersEvery = 1;
        typicalSpeed = 600;
    };
    // DP-23 slug rounds
    class JA_104th_Weapons_Mags_20mw16SC_Slug : 30Rnd_65x39_caseless_mag
    {
        displayName = "[104th] Slug Rounds";
        displayNameShort = "16Rnd 20MW SC Slug";
        author = "Jango's Armory Aux Team";
        picture = "\MRC\JLTS\weapons\DP23\data\ui\DP23_mag_ui_ca.paa";
        count = 16;
        ammo = "JA_104th_Weapons_Ammo_20mwSC_Slug";
        initSpeed = 600;
        descriptionShort = "DP23 slug round magazine";
        mass = 7.5;
        modelSpecial = "";
        modelSpecialIsProxy = 0;
        model = "\MRC\JLTS\weapons\DP23\DP23_mag.p3d";
        tracersEvery = 1;
        typicalSpeed = 600;
    };

    // Unused HE rounds
    class JA_104th_Weapons_Mags_20mw6SC_HE : 30Rnd_65x39_caseless_mag
    {
        displayName = "[104th] 6Rnd 20MW HE Cell";
        displayNameShort = "6Rnd 20MW SC HE";
        author = "Jango's Armory Aux Team";
        picture = "\MRC\JLTS\weapons\DP23\data\ui\DP23_mag_ui_ca.paa";
        count = 6;
        ammo = "JA_104th_Weapons_Ammo_20mwSC_HE";
        initSpeed = 600;
        descriptionShort = "DP23 Low Power scatter magazine";
        mass = 8;
        modelSpecial = "";
        modelSpecialIsProxy = 0;
        model = "\MRC\JLTS\weapons\DP23\DP23_mag.p3d";
        tracersEvery = 1;
        typicalSpeed = 600;
    };

    // Secondary Mags

    // DC15SA Standard mag
    class JA_104th_Weapons_Mags_10mw30 : 30Rnd_65x39_caseless_mag
    {
        displayName = "[104th] Standard Secondary Energy Cell";
        displayNameShort = "30Rnd 10MW";
        author = "Jango's Armory Aux Team";
        picture = "\MRC\JLTS\weapons\DC17SA\data\ui\DC17SA_mag_ui_ca.paa";
        count = 30;
        ammo = "JA_104th_Weapons_Ammo_30mw";
        initSpeed = 1100;
        descriptionShort = "DC15SA Standard magazine";
        mass = 4;
        modelSpecial = "";
        modelSpecialIsProxy = 0;
        model = "\MRC\JLTS\weapons\DC17SA\DC17SA_mag.p3d";
        tracersEvery = 1;
        typicalSpeed = 1100;
    };
    // SF High Cap secondary mags
    class JA_104th_Weapons_Mags_10mw40 : 30Rnd_65x39_caseless_mag
    {
        displayName = "[104th] Extended Capacity Energy Cell";
        displayNameShort = "40Rnd 10MW";
        author = "Jango's Armory Aux Team";
        picture = "\MRC\JLTS\weapons\DC17SA\data\ui\DC17SA_mag_ui_ca.paa";
        count = 40;
        ammo = "JA_104th_Weapons_Ammo_10mw";
        initSpeed = 600;
        descriptionShort = "DC17SA High capacity magazine";
        mass = 5;
        modelSpecial = "";
        modelSpecialIsProxy = 0;
        model = "\MRC\JLTS\weapons\DC17SA\DC17SA_mag.p3d";
        tracersEvery = 1;
        typicalSpeed = 600;
    };
    // SF High Cap secondary mags
    class JA_104th_Weapons_Mags_10mw80 : 30Rnd_65x39_caseless_mag
    {
        displayName = "[104th] Dual Extended Capacity Energy Cell";
        displayNameShort = "2x40Rnd 10MW";
        author = "Jango's Armory Aux Team";
        picture = "\MRC\JLTS\weapons\DC17SA\data\ui\DC17SA_mag_ui_ca.paa";
        count = 80;
        ammo = "JA_104th_Weapons_Ammo_10mw";
        initSpeed = 600;
        descriptionShort = "DC17SA High capacity magazine";
        mass = 15;
        modelSpecial = "";
        modelSpecialIsProxy = 0;
        model = "\MRC\JLTS\weapons\DC17SA\DC17SA_mag.p3d";
        tracersEvery = 1;
        typicalSpeed = 600;
    };

    // Tertiaries
    class JA_104th_Weapons_Mags_LC : SWLW_Z7_mag
    {
        author = "Jango's Armory Aux Team";
        displayName = "[104th] 1rnd LC 100Mw APFSDS";
        ammo = "JA_104th_Weapons_ammo_LC";
        // ammo = "ls_50mm_laat_apfsds";
        count = 1;
        mass = 12;
        tracersEvery = 1;
    };

    // UGL Rnds

    // UGL scatter rounds
    class JA_104th_Weapons_Mags_10mw4SC : 30Rnd_65x39_caseless_mag
    {
        displayName = "[104th] 4Rnd 10MW Scatter Cell";
        displayNameShort = "4Rnd 10MW SC";
        author = "Jango's Armory Aux Team";
        picture = "\MRC\JLTS\weapons\DP23\data\ui\DP23_mag_ui_ca.paa";
        count = 4;
        ammo = "JA_104th_Weapons_Ammo_10mwSC";
        initSpeed = 600;
        descriptionShort = "UGL Fired Low Power scatter magazine";
        mass = 6;
        modelSpecial = "";
        modelSpecialIsProxy = 0;
        model = "\MRC\JLTS\weapons\DP23\DP23_mag.p3d";
        tracersEvery = 1;
        typicalSpeed = 600;
    };
    class JA_104th_Weapons_Mags_GL_HE2 : 3Rnd_HE_Grenade_shell
    {
        displayName = "[104th] 2Rnd High Explosive";
        displayNameShort = "2Rnd HE";
        descriptionShort = "UGL 2Rnd High-Explosive";
        picture = "\A3\Weapons_f\Data\ui\gear_UGL_slug_CA.paa";
        count = 2;
        ammo = "JA_104th_Weapons_Ammo_GL_HE";
    };
    class JA_104th_Weapons_Mags_GL_HE3 : 3Rnd_HE_Grenade_shell
    {
        displayName = "[104th] 3Rnd High Explosive";
        displayNameShort = "3Rnd HE";
        descriptionShort = "UGL 3Rnd High-Explosive";
        picture = "\A3\Weapons_f\Data\ui\gear_UGL_slug_CA.paa";
        count = 3;
        ammo = "JA_104th_Weapons_Ammo_GL_HE";
    };
    class JA_104th_Weapons_Mags_GL_AP2 : 3Rnd_HE_Grenade_shell
    {
        displayName = "[104th] 2Rnd Anti Personnel";
        displayNameShort = "2Rnd AP";
        descriptionShort = "UGL 2Rnd Anti-Personnel";
        picture = "\A3\Weapons_f\Data\ui\gear_UGL_slug_CA.paa";
        count = 2;
        ammo = "JA_104th_Weapons_Ammo_GL_AP";
    };
    class JA_104th_Weapons_Mags_GL_smoke_white6 : 3Rnd_Smoke_Grenade_shell
    {
        author = "Jango's Armory Aux Team";
        scope = 2;
        displayName = "[104th] 6Rnd Smoke (White)";
        displayNameShort = "6Rnd White";
        descriptionShort = "UGL White Smoke Grenade";
        picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_white_CA.paa";
        count = 6;
        ammo = "JA_104th_Weapons_Ammo_GL_smoke_white";
        model = "kobra\442_weapons\explosive\basic_smoke.p3d";
    };
    class JA_104th_Weapons_Mags_GL_smoke_purple3 : JA_104th_Weapons_Mags_GL_smoke_white6
    {
        displayName = "[104th] 3Rnd Smoke (Purple)";
        displayNameShort = "3Rnd Purple";
        descriptionShort = "UGL Purple Smoke Grenade";
        picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_purple_CA.paa";
        count = 3;
        ammo = "JA_104th_Weapons_Ammo_GL_smoke_purple";
    };
    class JA_104th_Weapons_Mags_GL_smoke_yellow3 : JA_104th_Weapons_Mags_GL_smoke_purple3
    {
        displayName = "[104th] 3Rnd Smoke (Yellow)";
        displayNameShort = "3Rnd Yellow";
        descriptionShort = "UGL Yellow Smoke Grenade";
        picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_yellow_CA.paa";
        ammo = "JA_104th_Weapons_Ammo_GL_smoke_yellow";
    };
    class JA_104th_Weapons_Mags_GL_smoke_red3 : JA_104th_Weapons_Mags_GL_smoke_purple3
    {
        displayName = "[104th] 3Rnd Smoke (Red)";
        displayNameShort = "3Rnd Red";
        descriptionShort = "UGL Red Smoke Grenade";
        picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_red_CA.paa";
        ammo = "JA_104th_Weapons_Ammo_GL_smoke_red";
    };
    class JA_104th_Weapons_Mags_GL_smoke_green3 : JA_104th_Weapons_Mags_GL_smoke_purple3
    {
        displayName = "[104th] 3Rnd Smoke (Green)";
        displayNameShort = "3Rnd Green";
        descriptionShort = "UGL Green Smoke Grenade";
        picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_green_CA.paa";
        ammo = "JA_104th_Weapons_Ammo_GL_smoke_green";
    };
    class JA_104th_Weapons_Mags_GL_smoke_blue3 : JA_104th_Weapons_Mags_GL_smoke_purple3
    {
        displayName = "[104th] 3Rnd Smoke (Blue)";
        displayNameShort = "3Rnd Blue";
        descriptionShort = "UGL Blue Smoke Grenade";
        picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_blue_CA.paa";
        ammo = "JA_104th_Weapons_Ammo_GL_smoke_blue";
    };
    class JA_104th_Weapons_Mags_GL_smoke_orange3 : JA_104th_Weapons_Mags_GL_smoke_purple3
    {
        displayName = "[104th] 3Rnd Smoke (Orange)";
        displayNameShort = "3Rnd Orange";
        descriptionShort = "UGL Orange Smoke Grenade";
        picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_orange_CA.paa";
        ammo = "JA_104th_Weapons_Ammo_GL_smoke_orange";
    };

    // UGL Flares
    class JA_104th_Weapons_Mags_GL_flare_White3 : UGL_FlareWhite_F
    {
        author = "Jango's Armory Aux Team";
        scope = 2;
        type = 16;
        displayName = "[104th] 3Rnd Flare (White)";
        displayNameShort = "White Flares";
        descriptionShort = "UGL White Flares";
        picture = "\A3\Weapons_F\Data\UI\gear_UGL_Flare_CA.paa";
        model = "\A3\Weapons_F\Ammo\UGL_Flare";
        ammo = "JA_104th_Weapons_Ammo_flare_white";
        initSpeed = 80;
        count = 3;
        nameSound = "";
        weaponPoolAvailable = 1;
        mass = 4;
    };
    class JA_104th_Weapons_Mags_GL_flare_IR3 : JA_104th_Weapons_Mags_GL_flare_white3
    {
        displayName = "[104th] 3Rnd Flare (IR)";
        displayNameShort = "IR Flares";
        descriptionShort = "UGL IR Flares";
        ammo = "JA_104th_Weapons_Ammo_flare_ir";
        picture = "A3\Weapons_F\Data\UI\gear_UGL_Flare_CA.paa";
    };
    class JA_104th_Weapons_Mags_GL_flare_Green3 : JA_104th_Weapons_Mags_GL_flare_white3
    {
        displayName = "[104th] 3Rnd Flare (Green)";
        displayNameShort = "Green Flares";
        descriptionShort = "UGL Green Flares";
        ammo = "JA_104th_Weapons_Ammo_flare_green";
        picture = "\A3\Weapons_F\Data\UI\gear_UGL_Flare_Green_CA.paa";
    };
    class JA_104th_Weapons_Mags_GL_flare_Red3 : JA_104th_Weapons_Mags_GL_flare_white3
    {
        displayName = "[104th] 3Rnd Flare (Red)";
        displayNameShort = "Red Flares";
        descriptionShort = "UGL Red Flares";
        ammo = "JA_104th_Weapons_Ammo_flare_red";
        picture = "\A3\Weapons_F\Data\UI\gear_UGL_Flare_Red_CA.paa";
    };
    class JA_104th_Weapons_Mags_GL_flare_Yellow3 : JA_104th_Weapons_Mags_GL_flare_white3
    {
        displayName = "[104th] 3Rnd Flare (Yellow)";
        displayNameShort = "Yellow Flares";
        descriptionShort = "UGL Yellow Flares";
        ammo = "JA_104th_Weapons_Ammo_flare_yellow";
        picture = "\A3\Weapons_F\Data\UI\gear_UGL_Flare_yelow_CA.paa";
    };
    class JA_104th_Weapons_Mags_GL_flare_Blue3 : JA_104th_Weapons_Mags_GL_flare_white3
    {
        displayName = "[104th] 3Rnd Flare (Blue)";
        displayNameShort = "Blue Flares";
        descriptionShort = "UGL Blue Flares";
        ammo = "JA_104th_Weapons_Ammo_flare_blue";
        picture = "A3\Weapons_F\Data\UI\gear_UGL_Flare_CA.paa";
    };
    class JA_104th_Weapons_Mags_GL_flare_Cyan3 : JA_104th_Weapons_Mags_GL_flare_white3
    {
        displayName = "[104th] 3Rnd Flare (Cyan)";
        displayNameShort = "Cyan Flares";
        descriptionShort = "UGL Cyan Flares";
        ammo = "JA_104th_Weapons_Ammo_flare_cyan";
        picture = "A3\Weapons_F\Data\UI\gear_UGL_Flare_CA.paa";
    };
    class JA_104th_Weapons_Mags_GL_flare_Purple3 : JA_104th_Weapons_Mags_GL_flare_white3
    {
        displayName = "[104th] 3Rnd Flare (Purple)";
        displayNameShort = "Purple Flares";
        descriptionShort = "UGL Purple Flares";
        ammo = "JA_104th_Weapons_Ammo_flare_Purple";
        picture = "\A3\Weapons_F\Data\UI\gear_UGL_Flare_Purple_CA.paa";
    };
    class JA_104th_Weapons_Mags_RPS6H_6rnd : ls_mag_rpg_1rnd
    {
        author = "Jango's Armory Aux Team";
        displayName = "[104th] 6rnd RPS-6H Magazine";
        count = 6;
        mass = 30;
    };
};

class CfgVehicles
{
    class ls_carrybox_base;
	class 3AS_Supply_Large_Ammo_Prop;


    class JA_104th_Box_Ammo_mk2 : 3AS_Supply_Large_Ammo_Prop
    {
        author = "Cyan";
        displayName = "Ammo Box - 104th";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        editorCategory = "JA_104_EdCat_Objects";
        editorSubcategory = "104th_Categ_Clones_Boxes";
        maximumLoad = 3000;
        class TransportWeapons
        {
            class _xx_ls_weapon_rps6
            {
                count = 3;
                weapon = "ls_weapon_rps6";
            };
            class _xx_104_weapon_DC15S
            {
                count = 4;
                weapon = "JA_104th_DC15S";
            };
            class _xx_104_weapon_DC17SA
            {
                count = 8;
                weapon = "JA_104th_DC17SA";
            };
        };
        class TransportMagazines
        {
            class _xx_JLTS_stun_mag_long
            {
                count = 10;
                magazine = "JLTS_stun_mag_long";
            };
            class _xx_JLTS_stun_mag_short
            {
                count = 10;
                magazine = "JLTS_stun_mag_short";
            };
            class _xx_JA_104th_Weapons_Mags_10mw30
            {
                count = 50;
                magazine = "JA_104th_Weapons_Mags_10mw30";
            };
            class _xx_JA_104th_Weapons_Mags_10mw40
            {
                count = 50;
                magazine = "JA_104th_Weapons_Mags_10mw40";
            };
            class _xx_JA_104th_Weapons_Mags_10mw50
            {
                count = 25;
                magazine = "JA_104th_Weapons_Mags_10mw50";
            };
            class _xx_JA_104th_Weapons_Mags_10mw500
            {
                count = 25;
                magazine = "JA_104th_Weapons_Mags_10mw500";
            };
            class _xx_JA_104th_Weapons_Mags_20mw40
            {
                count = 25;
                magazine = "JA_104th_Weapons_Mags_20mw40";
            };
            class _xx_JA_104th_Weapons_Mags_20mw70
            {
                count = 25;
                magazine = "JA_104th_Weapons_Mags_20mw70";
            };
            class _xx_JA_104th_Weapons_Mags_20mw240
            {
                count = 25;
                magazine = "JA_104th_Weapons_Mags_20mw240";
            };
            class _xx_JA_104th_Weapons_Mags_30mw30
            {
                count = 25;
                magazine = "JA_104th_Weapons_Mags_30mw30";
            };
            class _xx_JA_104th_Weapons_Mags_40mw20
            {
                count = 25;
                magazine = "JA_104th_Weapons_Mags_40mw20";
            };
            class _xx_JA_104th_Weapons_Mags_50mw5
            {
                count = 25;
                magazine = "JA_104th_Weapons_Mags_50mw5";
            };
            class _xx_JA_104th_Weapons_Mags_100Mw1
            {
                count = 10;
                magazine = "JA_104th_Weapons_Mags_100Mw1";
            };
            class _xx_3AS_10Rnd_EC30_Pellets
            {
                count = 25;
                magazine = "3AS_10Rnd_EC30_Pellets";
            };
            class _xx_3AS_10Rnd_ESlug_Mag
            {
                count = 25;
                magazine = "3AS_10Rnd_ESlug_Mag";
            };
            class _xx_3AS_1Rnd_EC80_Flechette
            {
                count = 25;
                magazine = "3AS_1Rnd_EC80_Flechette";
            };
            class _xx_JA_104th_Weapons_Mags_LC
            {
                count = 10;
                magazine = "JA_104th_Weapons_Mags_LC";
            };
            class _xx_JA_104th_Weapons_Mags_RPS
            {
                count = 20;
                magazine = "ls_mag_rpg_1rnd";
            };
        };
        class TransportItems
        {
            class _xx_ACE_elasticBandage
            {
                count = 50;
                name = "ACE_elasticBandage";
            };
            class _xx_ACE_epinephrine
            {
                count = 20;
                name = "ACE_epinephrine";
            };
            class _xx_ACE_morphine
            {
                count = 20;
                name = "ACE_morphine";
            };
            class _xx_ACE_packingBandage
            {
                count = 30;
                name = "ACE_packingBandage";
            };
            class _xx_ACE_quikclot
            {
                count = 30;
                name = "ACE_quikclot";
            };
            class _xx_ACE_salineIV
            {
                count = 5;
                name = "ACE_salineIV";
            };
            class _xx_ACE_salineIV_500
            {
                count = 5;
                name = "ACE_salineIV_500";
            };
            class _xx_ACE_tourniquet
            {
                count = 8;
                name = "ACE_tourniquet";
            };
        };
    };
};
