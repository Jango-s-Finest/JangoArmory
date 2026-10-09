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
            "arifle_MX_Base_F",
            "arifle_SPAR_03_blk_F",
            "hgun_P07_F",
            "3AS_pistol_DC15SA_Base_F",
            "Launcher_Base_F",
            "launch_Titan_short_base",
            "optic_DMS",
            "optic_Hamr",
            "optic_MRCO",
            "optic_Holosight",
            "optic_MRD",
            "OPTRE_SRM_Sight",
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
            "JA_104th_cows_pistol",
            "JA_104th_cows_pistol_2",
            "JA_104th_cows_LRPS",
            "JA_104th_cows_LEScope_DC15A",
            "JA_104th_cows_reflex_optic",
            "JA_104th_stun_muzzle",
            "JA_104th_rifle_base",
            "JA_104th_rifle_base_stunless",
            "JA_104th_pistol_base",
            "JA_104th_launcher_base",
            "JA_104th_guided_launcher_base",
            "JA_104th_DC15A",
            "JA_104th_DC15A_UGL",
            "JA_104th_DC15LE",
            "JA_104th_T32C",
            "JA_104th_DC15C",
            "JA_104th_DC15C_UGL",
            "JA_104th_DC15L",
            "JA_104th_DC15S",
            "JA_104th_DC15S_UGL",
            "JA_104th_DC15X",
            "JA_104th_FP773",
            "JA_104th_DC17M",
            "JA_104th_DP23",
            "JA_104th_MTR_4",
            "JA_104th_WestarM4",
            "JA_104th_WestarM5",
            "JA_104th_Westar35S",
            "JA_104th_Z6",
            "JA_104th_DC17SA",
            "JA_104th_DC15ARC",
            "JA_104th_DC17SA_Dual",
            "JA_104th_DC17SA_Dual_LeftDummy",
            "JA_104th_DC15SA",
            "JA_104th_Westar35SA",
            "JA_104th_RPS6",
            "JA_104th_RPS6_H",
            "JA_104th_Z7_mk2",
            "JA_104th_BPX14"
        };
        ammo[] = {
            "JA_104th_Weapons_Ammo_17MAT",
            "JA_104th_Weapons_Ammo_EMP",
            "JA_104th_Weapons_Ammo_base_blue",
            "JA_104th_Weapons_Ammo_5mw",
            "JA_104th_Weapons_Ammo_10mw",
            "JA_104th_Weapons_Ammo_20mw",
            "JA_104th_Weapons_Ammo_30mw",
            "JA_104th_Weapons_Ammo_40mw",
            "JA_104th_Weapons_Ammo_50mw",
            "JA_104th_Weapons_Ammo_100mw",
            "JA_104th_Weapons_Ammo_10mwSC",
            "JA_104th_Weapons_Ammo_20mwSC_Slug",
            "JA_104th_Weapons_Ammo_20mwSC_HE",
            "JA_104th_Weapons_Ammo_BPX14",
            "JA_104th_Weapons_Ammo_Z7",
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
            "JA_104_Personal_Shield_Ammo",
            "JA_104_Personal_Shield_Body_Ammo"
        };

        magazines[] = {
            "JA_104th_Weapons_Mags_stun10",
            "JA_104th_Weapons_Mags_10mw50",
            "JA_104th_Weapons_Mags_20mw40",
            "JA_104th_Weapons_Mags_20mw70",
            "JA_104th_Weapons_Mags_20mw240",
            "JA_104th_Weapons_Mags_10mw500",
            "JA_104th_Weapons_Mags_30mw30",
            "JA_104th_Weapons_Mags_40mw20",
            "JA_104th_Weapons_Mags_30mw36",
            "JA_104th_Weapons_Mags_30mw70",
            "JA_104th_Weapons_Mags_17M_AT",
            "JA_104th_Weapons_Mags_50mw7",
            "JA_104th_Weapons_Mags_50mw24",
            "JA_104th_Weapons_Mags_100Mw1",
            "JA_104th_Weapons_Mags_EMPMw2",
            "JA_104th_Weapons_Mags_10mw20SC",
            "JA_104th_Weapons_Mags_20mw16SC_Slug",
            "JA_104th_Weapons_Mags_20mw6SC_HE",
            "JA_104th_Weapons_Mags_10mw30",
            "JA_104th_Weapons_Mags_10mw40",
            "JA_104th_Weapons_Mags_10mw80",
            "JA_104th_Weapons_Mags_BPX14",
            "JA_104th_Weapons_Mags_80mw500",
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
            "JA_104th_Weapons_Mags_GL_flare_Purple3",
            "JA_104th_Weapons_Mags_RPS6H_6rnd",
            "JA_104_Personal_Shield",
            "JA_104_Personal_Shield_Body"
        };
    };
};

class CfgSoundShaders
{
    class JA_MTR_4_Shot_SoundShader
    {
        samples[] = { {"Jangos_Armory_New_Blasters\data\sounds\mtr4_shotsound.ogg", 1} };
        volume = 1.0; // Adjust loudness here
        range = 1800; // How far the sound can be heard in meters
    };
    // Suppressed Audio
    class JA_MTR_4_Supressed_Shot_SoundShader
    {
        samples[] = { {"Jangos_Armory_New_Blasters\data\sounds\mtr4_shotsound_supressed.ogg", 1} };
        volume = 0.6; // Lower base volume for the engine
        range = 150;  // Considerably smaller sound travel range
    };
};

class CfgSoundSets
{
    class JA_MTR_4_Shot_SoundSet
    {
        soundShaders[] = { "JA_MTR_4_Shot_SoundShader" };
        volumeFactor = 1;
        spatial = 1;
        loop = 0;
    };
    // Suppressed Set
    class JA_MTR_4_Supressed_Shot_SoundSet
    {
        soundShaders[] = { "JA_MTR_4_Supressed_Shot_SoundShader" };
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
        class Mode_Single;
        class Mode_Burst;
        class Single;
        class Burst;
        class FullAuto;
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
        mass = 100;
        model = "Jangos_Armory_New_Blasters\data\models\mtr_4.p3d";
        picture = "Jangos_Armory_New_Blasters\data\pictures\MTR_transparent.paa";
        
        hiddenSelections[] =
        {
            "camo",
            "magazine"
        };
		hiddenSelectionsTextures[] =
        {
            "Jangos_Armory_New_Blasters\data\textures\mtr_4_co.paa",
            "Jangos_Armory_New_Blasters\data\textures\mtr_4_co.paa"
        };
        magazines[] =
        {
            "JA_104th_Weapons_Mags_30mw36",
            "JA_104th_Weapons_Mags_50mw24"
        };
        modes[] = {"Mode_Single", "Mode_Burst"};
        
        class Mode_Single : Mode_Single
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
        class Mode_Burst : Mode_Burst
        {
            displayname= "Burst";
            burst = 3;
            reloadTime = 0.1818;
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
                    "optic_DMS"
                };
            };
            class MuzzleSlot : MuzzleSlot
            {
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                displayName = "$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
                compatibleItems[] =
                {
                    "JA_104th_muzzle_suppressor",
                    "JA_104th_muzzle_flash"
                };
            };
            class PointerSlot : PointerSlot
            {
                linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
                displayName = "Pointer Slot";
                compatibleItems[] =
                {
                     "acc_flashlight",
                     "acc_pointer_IR" 
                };
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
            "weapon"
        };
		hiddenSelectionsTextures[] =
        {
            "Jangos_Armory_new_Blasters\data\textures\Base_co.paa"
        };
    };
};
