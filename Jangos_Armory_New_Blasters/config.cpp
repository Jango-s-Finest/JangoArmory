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
            "arifle_SPAR_03_blk_F",
            "JA_104th_MTR_4",
            "JA_104th_T32C"
        };
        ammo[] = {};

        magazines[] = {};
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

class CowsSlot;
class MuzzleSlot;
class PointerSlot;
class UnderBarrelSlot;

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class CfgWeapons
{
    class Rifle;
    class JA_104th_DC15A;
    class BaseSoundModeType;

    class arifle_SPAR_03_blk_F : Rifle
    {
        class WeaponSlotsInfo;
        class GunParticles;
    };

    class JA_104th_MTR_4 : arifle_SPAR_03_blk_F
    {
        ACE_barrelTwist = 330;
        ACE_barrelLength = 737;
        ACE_twistDirection = 1;
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
                "JA_104th_Weapons_Mags_50mw24"};
        magazineWell[] = {};
        modes[] = {"Single", "Burst"};

        class Single : Mode_SemiAuto
        {
            reloadTime = 0.2667;
            dispersion = 0;
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
};
