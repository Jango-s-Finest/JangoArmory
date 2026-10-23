#include "basicDefines_A3.hpp"
class DefaultEventhandlers;
class UniformSlotInfo;
class CfgPatches
{
    class Jangos_Armory_New_Blasters
    {
        author = "Jango's Finest";
        requiredVersion = 0.1;
        requiredAddons[] = {};
        units[] = {};
        // Add Shield variants to 1 handed guns (15S, DP23, 17A/H)
        weapons[] = {
            "3AS_DC15L_Base_F",
            "arifle_SPAR_03_blk_F",
            "JA_104th_MTR_4",
            "JA_104th_T32C",
            "HTL_CiP_Quad_Cannon",
            "HTL_CiP_Quad_Cannon_Deploying"
        };
        ammo[] = {
            "HTL_CiP_Bolt_LE",
            "HTL_CiP_Bolt_ME",
            "HTL_CiP_Bolt_HE",
            "HTL_CiP_Bolt_HEX"
        };

        magazines[] = {
            "HTL_LE_1600",
            "HTL_ME_800",
            "HTL_HE_400",
            "HTL_HE_120"
        };
    };
    class htl_cip_quad_cannon 
    {
        name = "CiP Quad Cannon";
        author = "Hataaylir";
        units[] = {"HTL_CiP_Quad_Cannon_Pack", "HTL_CiP_Quad_Cannon_Pack_Deployed", "HTL_CiP_Quad_Cannon_Pack_Swing"};
        weapons[] = {"HTL_CiP_Quad_Cannon", "HTL_CiP_Quad_Cannon_Deploying"};
        version = 0.012;
        versionStr = "0.0.12";
        versionAr[] = {0, 0, 12};
        requiredVersion = 2.0;
        magazines[] = {"HTL_LE_1600", "HTL_ME_800", "HTL_HE_400", "HTL_HE_120"};
        ammo[] = {"HTL_CiP_Bolt_LE", "HTL_CiP_Bolt_ME", "HTL_CiP_Bolt_HE", "HTL_CiP_Bolt_HEX"};
        requiredAddons[] = {"A3_Data_F_Decade_Loadorder", "3AS_Weapons", "3AS_Weapons_Republic_DC15L", "3as_Jug_Weapons"};
    };
};

class CfgSoundShaders
{
    class JA_MTR_4_Shot_SoundShader
    {
        samples[] = {{"Jangos_Armory_New_Blasters\data\sounds\mtr4_shotsound.ogg", 1}};
        volume = 1.0; // Adjust loudness here
        range = 1800; // How far the sound can be heard in meters
    };
    // Suppressed Audio
    class JA_MTR_4_Supressed_Shot_SoundShader
    {
        samples[] = {{"Jangos_Armory_New_Blasters\data\sounds\mtr4_shotsound_supressed.ogg", 1}};
        volume = 0.6; // Lower base volume for the engine
        range = 150;  // Considerably smaller sound travel range
    };
};

class CfgSoundSets
{
    class JA_MTR_4_Shot_SoundSet
    {
        soundShaders[] = {"JA_MTR_4_Shot_SoundShader"};
        volumeFactor = 1;
        spatial = 1;
        loop = 0;
    };
    // Suppressed Set
    class JA_MTR_4_Supressed_Shot_SoundSet
    {
        soundShaders[] = {"JA_MTR_4_Supressed_Shot_SoundShader"};
        volumeFactor = 1;
        spatial = 1;
        loop = 0;
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

class CfgRecoils
{
    class JA_NoRecoil
    {
        muzzleOuter[] = {0, 0, 0, 0};
        muzzleInner[] = {0, 0, 0, 0};
        kickBack[]    = {0, 0};
        permanent     = 0;
        temporary     = 0;
    };

    class JA_LightRecoil
    {
        muzzleOuter[] = {0.05, 0.15, 0.05, 0.1};
        muzzleInner[] = {0, 0, 0.02, 0.02};
        kickBack[]    = {0.01, 0.02};
        permanent     = 0.03;
        temporary     = 0.005;
    };
    
    class JA_MediumRecoil
    {
        muzzleOuter[] = {0.1, 0.3, 0.1, 0.2};
        muzzleInner[] = {0, 0, 0.05, 0.05};
        kickBack[]    = {0.03, 0.05};
        permanent     = 0.08;
        temporary     = 0.01;
    };

    class JA_DMRRecoil
    {
        muzzleOuter[] = {0.15, 0.5, 0.15, 0.3};
        muzzleInner[] = {0, 0, 0.08, 0.08};
        kickBack[]    = {0.05, 0.08};
        permanent     = 0.15;
        temporary     = 0.02;
    };

    class JA_HeavyRecoil
    {
        muzzleOuter[] = {0.2, 0.4, 0.2, 0.3};
        muzzleInner[] = {0, 0, 0.1, 0.1};
        kickBack[]    = {0.06, 0.1};
        permanent     = 0.12;
        temporary     = 0.03;
    };
};

class CfgFunctions {
    class HTL_CiP {
        tag = "HTL_CiP";
        class gunpack {
            file = "\htl_cip_quad_cannon\functions";
            class init { postInit = 1; };
            class addActions {};
            class addFiredEH {};
            class muzzle {};
            class placeFlash {};
            class launcher {};
            class deploy {};
            class stow {};
            class watchdog {};
            class deployedLoop {};
            class fired {};
        };
    };
};

class CowsSlot;
class MuzzleSlot;
class PointerSlot;
class UnderBarrelSlot;

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class CfgAmmo {
    class 3AS_EC40_BluePlasma;
    class 3AS_EC60_BluePlasma;
    class 3AS_EC100_BluePlasma;
    class 3as_Jug_AutoCannon_Ammo;
    class HTL_CiP_Bolt_LE: 3AS_EC40_BluePlasma { author = "Hataaylir"; };
    class HTL_CiP_Bolt_ME: 3AS_EC60_BluePlasma { author = "Hataaylir"; };
    class HTL_CiP_Bolt_HE: 3AS_EC100_BluePlasma { author = "Hataaylir"; };
    class HTL_CiP_Bolt_HEX: 3as_Jug_AutoCannon_Ammo {
        author = "Hataaylir";
        tracerStartTime = 0;
    };
};

class CfgMagazines {
    class 3AS_200Rnd_EC40_Mag;
    class HTL_LE_1600: 3AS_200Rnd_EC40_Mag {
        author = "Hataaylir";
        scope = 2;
        displayName = "1600rnd Low Energy Pack";
        displayNameShort = "Low Energy";
        descriptionShort = "CiP Quad Cannon energy pack<br/>Rounds: 1600<br/>Used in: CiP Quad Cannon<br/>EC40 plasma";
        ammo = "HTL_CiP_Bolt_LE";
        count = 1600;
        initSpeed = 417;
        tracersEvery = 1;
        lastRoundsTracer = 1600;
        mass = 80;
    };
    class HTL_ME_800: HTL_LE_1600 {
        displayName = "800rnd Medium Energy Pack";
        displayNameShort = "Medium Energy";
        descriptionShort = "CiP Quad Cannon energy pack<br/>Rounds: 800<br/>Used in: CiP Quad Cannon<br/>EC60 plasma";
        ammo = "HTL_CiP_Bolt_ME";
        count = 800;
        initSpeed = 528;
        lastRoundsTracer = 800;
    };
    class HTL_HE_400: HTL_LE_1600 {
        displayName = "400rnd High Energy Pack";
        displayNameShort = "High Energy";
        descriptionShort = "CiP Quad Cannon energy pack<br/>Rounds: 400<br/>Used in: CiP Quad Cannon<br/>EC100 plasma";
        ammo = "HTL_CiP_Bolt_HE";
        count = 400;
        initSpeed = 750;
        lastRoundsTracer = 400;
    };
    class HTL_HE_120: HTL_LE_1600 {
        displayName = "120rnd High Energy Explosive Pack";
        displayNameShort = "HE";
        descriptionShort = "CiP Quad Cannon energy pack<br/>Rounds: 120<br/>Used in: CiP Quad Cannon<br/>15 mm HE plasma";
        picture = "\htl_cip_quad_cannon\data\ui\icon_htl_he_120_ca.paa";
        ammo = "HTL_CiP_Bolt_HEX";
        count = 120;
        initSpeed = 1035;
        lastRoundsTracer = 120;
    };
};

class CfgWeapons
{
    class Rifle;
    class JA_104th_DC15A;
    class Rifle_Base_F;
    class 3AS_DC15L_Base_F: Rifle_Base_F 
    {
        class WeaponSlotsInfo;
        class FullAuto;
        class close;
        class short;
        class medium;
        class far_optic1;
        class far_optic2;
    };
    class BaseSoundModeType;

    class arifle_SPAR_03_blk_F : Rifle
    {
        class WeaponSlotsInfo;
        class GunParticles;
    };

    class JA_104th_MTR_4 : arifle_SPAR_03_blk_F
    {
        scope = 2;
        displayName = "[104th] MTR-4";
        baseWeapon = "JA_104th_MTR_4";
        descriptionShort = "Mirafi Tibanna Rifle MKIV";
        mass = 75;
        model = "Jangos_Armory_New_Blasters\data\models\mtr_4.p3d";
        picture = "Jangos_Armory_New_Blasters\data\pictures\MTR_transparent.paa";

        hiddenSelections[] =
            {
                "camo",
                "magazine"};
        hiddenSelectionsTextures[] =
            {
                "Jangos_Armory_New_Blasters\data\textures\mtr_4_co.paa",
                "Jangos_Armory_New_Blasters\data\textures\mtr_4_co.paa"};
        magazines[] =
            {
                "JA_104th_Weapons_Mags_30mw36",
                "JA_104th_Weapons_Mags_50mw12"};
        magazineWell[] = {};
        recoil = "JA_MediumRecoil";
        recoilProne = "JA_LightRecoil";
        modes[] = {"Single", "Burst"};

        class Single : Mode_SemiAuto
        {
            reloadTime = 0.2667;
            dispersion = 0;
            recoil = "JA_MediumRecoil";
            recoilProne = "JA_LightRecoil";
            sounds[] = {"StandardSound", "SilencedSound"};
            class StandardSound : BaseSoundModeType
            {
                weaponSoundEffect = "";
                begin1[] = {"Jangos_Armory_New_Blasters\data\sounds\mtr4_shotsound.ogg", +3db, 1, 2200};
                begin2[] = {"Jangos_Armory_New_Blasters\data\sounds\mtr4_shotsound.ogg", +3db, 1, 2200};
                begin3[] = {"Jangos_Armory_New_Blasters\data\sounds\mtr4_shotsound.ogg", +3db, 1, 2200};
                soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.33};
            };
            class SilencedSound : BaseSoundModeType
            {
                begin1[] = {"Jangos_Armory_New_Blasters\data\sounds\mtr4_shotsound_supressed.wss", +0.3db, 1, 2200};
                begin2[] = {"Jangos_Armory_New_Blasters\data\sounds\mtr4_shotsound_supressed.wss", +0.3db, 1, 2200};
                begin3[] = {"Jangos_Armory_New_Blasters\data\sounds\mtr4_shotsound_supressed.wss", +0.3db, 1, 2200};
                closure1[] = {};
                closure2[] = {};
                soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.33};
                soundClosure[] = {};
                weaponSoundEffect = "";
            };
        };
        class Burst : Mode_Burst
        {
            displayname = "Burst";
            burst = 3;
            reloadTime = 0.1818;
            dispersion = 0;
            recoil = "JA_MediumRecoil";
            recoilProne = "JA_LightRecoil";
            textureType = "burst";
            sounds[] = {"StandardSound", "SilencedSound"};
            class StandardSound : BaseSoundModeType
            {
                weaponSoundEffect = "";
                begin1[] = {"Jangos_Armory_New_Blasters\data\sounds\mtr4_shotsound.ogg", +3db, 1, 2200};
                begin2[] = {"Jangos_Armory_New_Blasters\data\sounds\mtr4_shotsound.ogg", +3db, 1, 2200};
                begin3[] = {"Jangos_Armory_New_Blasters\data\sounds\mtr4_shotsound.ogg", +3db, 1, 2200};
                soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.33};
            };
            class SilencedSound : BaseSoundModeType
            {
                begin1[] = {"Jangos_Armory_New_Blasters\data\sounds\Suppressed_Rifle_shot.wss", +0.3db, 1, 2200};
                begin2[] = {"Jangos_Armory_New_Blasters\data\sounds\Suppressed_Rifle_shot.wss", +0.3db, 1, 2200};
                begin3[] = {"Jangos_Armory_New_Blasters\data\sounds\Suppressed_Rifle_shot.wss", +0.3db, 1, 2200};
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
                        "3AS_Imp_Optic_2",
                        "3AS_Imp_Optic_3",
                        "3AS_Imp_Optic_4",
                        "JA_104th_cows_LRPS",
                        "optic_DMS"};
            };
            class MuzzleSlot : MuzzleSlot
            {
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                displayName = "$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
                compatibleItems[] =
                    {
                        "JA_104th_muzzle_suppressor",
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

    class JA_104th_T32C : JA_104th_DC15A
    {
        model = "Jangos_Armory_New_Blasters\data\models\JA_T32C.p3d";
        displayName = "[104th] T-32C";
        baseWeapon = "JA_104th_T32C";
        hiddenSelections[] =
            {
                "weapon"};
        hiddenSelectionsTextures[] =
            {
                "Jangos_Armory_new_Blasters\data\textures\Base_co.paa"};
    };

    class HTL_CiP_Quad_Cannon: 3AS_DC15L_Base_F 
    {
        class FullAuto: FullAuto { reloadTime = HTL_CiP_CYCLE; };
        class close: close { reloadTime = HTL_CiP_CYCLE; };
        class short: short { reloadTime = HTL_CiP_CYCLE; };
        class medium: medium { reloadTime = HTL_CiP_CYCLE; };
        class far_optic1: far_optic1 { reloadTime = HTL_CiP_CYCLE; };
        class far_optic2: far_optic2 { reloadTime = HTL_CiP_CYCLE; };
        scope = 1;
        baseWeapon = "HTL_CiP_Quad_Cannon";
        displayName = "CiP Quad Cannon";
        author = "Hataaylir";
        model = "\htl_cip_quad_cannon\gunpack_weapon.p3d";
        selectionFireAnim = "zasleh";
        muzzlePos = "usti hlavne";
        muzzleEnd = "konec hlavne";
        handAnim[] = {"OFP2_ManSkeleton", "\htl_cip_quad_cannon\anim\hands_quadgun.rtm"};
        magazines[] = {"HTL_LE_1600", "HTL_ME_800", "HTL_HE_400", "HTL_HE_120"};
        magazineWell[] = {};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 10;
        };
    };
    class HTL_CiP_Quad_Cannon_Deploying: HTL_CiP_Quad_Cannon {
        displayName = "CiP Quad Cannon";
        model = "\A3\Weapons_F\empty.p3d";
        magazines[] = {};
    };
};

class CfgMovesBasic {
    class ManActions {
        HTL_CiP_HoldStand[] = {"HTL_CiP_HoldStand", "Gesture"};
        HTL_CiP_HoldCrouch[] = {"HTL_CiP_HoldCrouch", "Gesture"};
        HTL_CiP_HoldEnd[] = {"GestureEmpty", "Gesture"};
        HTL_CiP_DeployStand[] = {"HTL_CiP_DeployStand", "Gesture"};
        HTL_CiP_DeployCrouch[] = {"HTL_CiP_DeployCrouch", "Gesture"};
        HTL_CiP_StowStand[] = {"HTL_CiP_StowStand", "Gesture"};
        HTL_CiP_StowCrouch[] = {"HTL_CiP_StowCrouch", "Gesture"};
    };
};

class CfgGesturesMale {
    class Default;
    class BlendAnims {
        HTL_CiP_SwingMask[] = {
            "head", 1, "neck1", 1, "neck", 1, "weapon", 1, "launcher", 1,
            "Spine", 1, "Spine1", 1, "Spine2", 1, "Spine3", 1,
            "LeftShoulder", 1, "LeftArm", 1, "LeftArmRoll", 1, "LeftForeArm", 1, "LeftForeArmRoll", 1, "LeftHand", 1,
            "LeftHandRing", 1, "LeftHandPinky1", 1, "LeftHandPinky2", 1, "LeftHandPinky3", 1,
            "LeftHandRing1", 1, "LeftHandRing2", 1, "LeftHandRing3", 1,
            "LeftHandMiddle1", 1, "LeftHandMiddle2", 1, "LeftHandMiddle3", 1,
            "LeftHandIndex1", 1, "LeftHandIndex2", 1, "LeftHandIndex3", 1,
            "LeftHandThumb1", 1, "LeftHandThumb2", 1, "LeftHandThumb3", 1,
            "RightShoulder", 1, "RightArm", 1, "RightArmRoll", 1, "RightForeArm", 1, "RightForeArmRoll", 1, "RightHand", 1,
            "RightHandRing", 1, "RightHandPinky1", 1, "RightHandPinky2", 1, "RightHandPinky3", 1,
            "RightHandRing1", 1, "RightHandRing2", 1, "RightHandRing3", 1,
            "RightHandMiddle1", 1, "RightHandMiddle2", 1, "RightHandMiddle3", 1,
            "RightHandIndex1", 1, "RightHandIndex2", 1, "RightHandIndex3", 1,
            "RightHandThumb1", 1, "RightHandThumb2", 1, "RightHandThumb3", 1
        };
    };
    class States {
        #include "swing_gestures.hpp"
        class HTL_CiP_HoldStand: Default {
            file = "htl_cip_quad_cannon\anim\gesture_hold_stand.rtm";
            looped = 1;
            speed = 0.1;
            mask = "upperTorso";
            interpolationSpeed = 3;
            disableWeapons = 0;
            enableOptics = 1;
            canPullTrigger = 1;
            showWeaponAim = 1;
            leftHandIKCurve[] = {1};
            rightHandIKCurve[] = {1};
        };
        class HTL_CiP_HoldCrouch: HTL_CiP_HoldStand {
            file = "htl_cip_quad_cannon\anim\gesture_hold_crouch.rtm";
        };
    };
};