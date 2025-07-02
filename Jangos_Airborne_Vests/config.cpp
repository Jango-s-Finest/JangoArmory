#include "basicDefines_A3.hpp"
class DefaultEventhandlers;
class UniformSlotInfo;
class CfgPatches
{
    class Jangos_Armory_Airborne_Vests
    {
        author = "Jango's Finest";
        requiredVersion = 0.1;
        requiredAddons[] = {};
        units[] = {};
        weapons[] = {
            "JA_104th_AB_Base_Trooper_Armor",
            "JA_104th_AB_Officer_Trooper_Armor_Fixed",
            "JA_104th_AB_ME_Officer_Trooper_Armor",
            "JA_104th_AB_ME_NCO_Trooper_Armor",
            "JA_104th_AB_ME_Base_Trooper_Armor",
            "JA_104th_AB_Officer_Vest_Axel",
            "JA_104th_AB_Officer_Vest_Dak",
            "JA_104th_Carmine_Vest",
            "JA_104th_Osiris_Vest",
            "JA_104th_Kage_Vest",
            "JA_104th_Magnum_Vest",
            "JA_104th_Clutch_Vest"};
    };
};

class CfgFactionClasses
{
    class 104th_Guys
    {
        displayname = "Jango's Finest";
        priority = 1; // Position in list.scope = 2;
        side = 1;
        icon = "";
    };
};
class cfgEditorSubcategories
{
    class 104th_Categ_Clones
    {
        displayname = "104th - Customs";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        side = 1;
    };
    class 104th_Categ_Basic
    {
        displayname = "104th - Base";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        side = 1;
    };
    class 104th_Categ_Special
    {
        displayname = "104th - Special";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        side = 1;
    };
};

class CfgWeapons
{
    class InventoryItem_Base_F;
    class ItemCore;
    class ls_gar_phase2Pilot_helmet;
    class ls_gar_phase2_uniform;
    class ls_gar_marshalCommander_uniform;
    class ls_gar_barc_helmet;
    class ls_gar_airborne_helmet;
    class ls_gar_phase1Arf_helmet;
    class ls_gar_arc_helmet;
    class ls_gar_phase1_helmet;
    class ls_gar_rex_helmet;
    class ls_gar_phase2_helmet;
    class lsd_gar_standart_nvg;
    class lsd_gar_rangefinder_nvg;
    class lsd_gar_p2MarshalCommander_nvg;
    class ls_gar_kama_vest;
    class ls_gar_engineer_helmet;
    class ls_sob_phase2SpecOp_helmet;
    class UniformItem;
    class VestItem;

    // Inheritance for vests
    // Makes making each vest a rebreather easier
    class ls_gar_clone_vest;
    class ls_gar_airborne_vest : ls_gar_clone_vest
    {
        class ItemInfo;
    };
    class ls_gar_airborneNCO_vest : ls_gar_airborne_vest
    {
        class ItemInfo;
    };
    class ls_gar_airborneOfficer_vest : ls_gar_airborne_vest
    {
        class ItemInfo;
    };
    class ls_gar_forceReconNCO_vest : ls_gar_airborne_vest
    {
        class ItemInfo;
    };
    class ls_gar_forceReconLieutenant_vest : ls_gar_clone_vest
    {
        class ItemInfo;
    };
    class ls_cloneVest_base;
    class ls_gar_airborneOfficer_vest : ls_cloneVest_base
    {
        class ItemInfo;
    };

    class ls_gar_officer_vest : ls_gar_clone_vest
    {
        class ItemInfo;
    };
    class ls_gar_commander_vest : ls_gar_officer_vest
    {
        class ItemInfo;
    };
    class ls_gar_arc_vest : ls_gar_officer_vest
    {
        class ItemInfo;
    };

    class JA_104th_AB_Officer_Vest_Axel : ls_gar_airborneOfficer_vest
    {
        author = "Fish";
        displayName = "Clone Airborne Officer Vest (104th Axel)";
        hiddenSelections[] = {"ammo","camo1","camo2","camo3"};
        hiddenSelectionsTextures[] =
            {
                // Jangos_Airborne_Vests\data\Textures\104th_Accessories_Heavy.paa doesn't exist
                "Jangos_Airborne_Vests\data\Textures\104th_Accessories_Heavy.paa", // Heavy
                "Jangos_Airborne_Vests\data\Textures\104th_Accessories_Heavy.paa", // Heavy
                "Jangos_Airborne_Vests\data\Textures\104_AB_Axel_Kama.paa",
                "Jangos_Airborne_Vests\data\Textures\104_AB_Axel_Kama.paa"};
        class ItemInfo : ItemInfo
        {
            containerClass = "Supply80";
            vestType = "Rebreather";

            class HitpointsProtectionInfo
            {
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 8;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    armor = 8;
                    passThrough = 0.3;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
    class JA_104th_AB_Officer_Vest_Dak : ls_gar_forceReconLieutenant_vest
    {
        author = "Emmet";
        scope = 2;
        displayName = "Clone Airborne Officer Vest (104th Dak)";
        model = "\ls\core\addons\characters_clone_legacy\vests\forceRecon\ls_gar_forceReconLieutenant_vest.p3d";
        uniformModel = "\ls\core\addons\characters_clone_legacy\vests\forceRecon\ls_gar_forceReconLieutenant_vest.p3d";
        hiddenSelections[] =
            {
                "camo1",
                "camo2"};
        hiddenSelectionsTextures[] =
            {
                "Jangos_Airborne_Vests\data\Textures\104th_AB_Dak_Kama.paa",
                "\ls\core\addons\characters_clone_legacy\vests\common\heavy\heavy_accessories_co.paa"};
        class ItemInfo : Vestitem
        {
            uniformModel = "\ls\core\addons\characters_clone_legacy\vests\forceRecon\ls_gar_forceReconLieutenant_vest.p3d";
            containerClass = "Supply80";
            hiddenSelections[] = {"camo1", "camo2"};
            mass = 80;
            vestType = "Rebreather";

            class HitpointsProtectionInfo
            {
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 8;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    armor = 8;
                    passThrough = 0.3;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
    class JA_104th_Carmine_Vest : ls_gar_airborneNCO_vest
    {
        author = "Emmet";
        scope = 2;
        displayName = "Clone Airborne NCO Vest (104th Carmine)";
        hiddenSelections[] = {"ammo","camo1","camo2","pauldron"};
        hiddenSelectionsTextures[] =
            {
                "Jangos_Airborne_Vests\data\Textures\104th_Accessories_Heavy.paa", // Heavy
                "Jangos_Airborne_Vests\data\Textures\104th_Accessories_Heavy.paa", // Heavy
                "Jangos_Airborne_Vests\data\Textures\104th_AB_Carmine_Kama.paa",
                "Jangos_Airborne_Vests\data\Textures\104th_Accessories_Heavy.paa"  // Heavy
            };
        class ItemInfo : ItemInfo
        {
            containerClass = "Supply80";
            vestType = "Rebreather";

            class HitpointsProtectionInfo
            {
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 8;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    armor = 8;
                    passThrough = 0.3;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
    class JA_104th_Osiris_Vest : ls_gar_airborneNCO_vest
    {
        author = "Emmet";
        scope = 2;
        displayName = "Clone Airborne NCO Vest (104th Osiris)";
        hiddenSelections[] = {"ammo","camo1","camo2","pauldron"};
        hiddenSelectionsTextures[] =
            {
                "Jangos_Airborne_Vests\data\Textures\104th_Accessories_Heavy.paa", // Heavy
                "Jangos_Airborne_Vests\data\Textures\104th_Accessories_Heavy.paa", // Heavy
                "Jangos_Airborne_Vests\data\Textures\104th_AB_Osiris_Kama.paa",
                "Jangos_Airborne_Vests\data\Textures\104th_Accessories_Heavy.paa"  // Heavy
            };
        class ItemInfo : ItemInfo
        {
            containerClass = "Supply80";
            vestType = "Rebreather";

            class HitpointsProtectionInfo
            {
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 8;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    armor = 8;
                    passThrough = 0.3;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
    class JA_104th_Kage_Vest : ls_gar_airborneNCO_vest
    {
        author = "Emmet";
        scope = 2;
        displayName = "Clone Airborne NCO Vest (104th Kage)";
        hiddenSelections[] = {"ammo","camo1","camo2","pauldron"};
        hiddenSelectionsTextures[] =
            {
                "Jangos_Airborne_Vests\data\Textures\104th_AB_Kage_Chest.paa", // Heavy
                "Jangos_Airborne_Vests\data\Textures\104th_AB_Kage_Chest.paa", // Heavy
                "Jangos_Airborne_Vests\data\Textures\104th_AB_Kage_Kama.paa",
                "Jangos_Airborne_Vests\data\Textures\104th_AB_Kage_Chest.paa"  // Heavy
            };
        class ItemInfo : ItemInfo
        {
            containerClass = "Supply80";
            vestType = "Rebreather";

            class HitpointsProtectionInfo
            {
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 8;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    armor = 8;
                    passThrough = 0.3;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
    class JA_104th_Magnum_Vest : ls_gar_forceReconNCO_vest
    {
        author = "Emmet";
        scope = 2;
        displayName = "Clone Airborne NCO Vest (104th Magnum)";
        hiddenSelections[] = {"camo1", "camo2", "camo3", "pauldron"};
        hiddenSelectionsTextures[] =
            {
                "Jangos_Airborne_Vests\data\Textures\104th_AB_Magnum_Accessories_Light.paa", // Heavy
                "Jangos_Airborne_Vests\data\Textures\104th_AB_Magnum_Kama.paa",
                "\ls\core\addons\characters_clone_legacy\vests\common\light\light_accessories_co.paa", // Heavy
                "104thPhantomCompany\data\Textures\104th_AB_Magnum_Accesories_Heavy.paa"               // Heavy
            };
        class ItemInfo : ItemInfo
        {
            containerClass = "Supply80";
            vestType = "Rebreather";

            uniformModel = "\ls\core\addons\characters_clone_legacy\vests\forceRecon\ls_gar_forceRecon_vest.p3d";
            hiddenSelections[] = {"camo1", "camo2", "camo3", "pauldron"};

            class HitpointsProtectionInfo
            {
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 8;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    armor = 8;
                    passThrough = 0.3;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
    class JA_104th_Clutch_Vest : ls_gar_forceReconLieutenant_vest
    {
        author = "Emmet";
        scope = 2;
        displayName = "Clone Airborne NCO Vest (104th Clutch)";
        model = "\ls\core\addons\characters_clone_legacy\vests\forceRecon\ls_gar_forceReconLieutenant_vest.p3d";
        uniformModel = "\ls\core\addons\characters_clone_legacy\vests\forceRecon\ls_gar_forceReconLieutenant_vest.p3d";
        hiddenSelections[] =
            {
                "camo1",
                "camo2"};
        hiddenSelectionsTextures[] =
            {
                "Jangos_Airborne_Vests\data\Textures\104th_AB_Clutch_Kama.paa",
                "Jangos_Airborne_Vests\data\Textures\104th_AB_Clutch_Heavy.paa"};
        class ItemInfo : Vestitem
        {
            uniformModel = "\ls\core\addons\characters_clone_legacy\vests\forceRecon\ls_gar_forceReconLieutenant_vest.p3d";
            containerClass = "Supply80";
            hiddenSelections[] = {"camo1", "camo2"};
            mass = 80;
            vestType = "Rebreather";

            class HitpointsProtectionInfo
            {
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 8;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    armor = 8;
                    passThrough = 0.3;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
};