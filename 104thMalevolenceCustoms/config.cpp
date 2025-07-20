#include "basicDefines_A3.hpp"
class DefaultEventhandlers;
class UniformSlotInfo;
class CfgPatches
{
    class Jangos_Armory_Malevolence_Customs
    {
        author = "Jango's Finest";
        units[] = {
            "",
        };
        weapons[] = {

            "JA_104th_Bulky_Helmet_ME",
            "JA_104th_Carmine_Helmet_ME",
            "JA_104th_Cyan_Helmet_ME",
            "JA_104th_Drifter_Helmet_ME",
            "JA_104th_Gravity_Helmet_ME",
            "JA_104th_Irish_Helmet_ME",
            "JA_104th_Kage_Helmet_ME",
            "JA_104th_Knockout_Helmet_ME",
            "JA_104th_Kyo_Helmet_ME",
            "JA_104th_Pulse_Helmet_ME",
            "JA_104th_Ratchet_Helmet_ME",
            "JA_104th_Spectre_Helmet_ME",
            "JA_104th_Spirit_Helmet_ME",
            "JA_104th_Talisman_Helmet_ME",
            "JA_104th_Tinkle_Helmet_ME",
            "JA_104th_Galahad_Helmet_ME",
            "JA_104th_Magnum_Helmet_ME",
            "JA_104th_Frosty_Helmet_ME",
            "JA_104th_Sigil_Helmet_ME",
            "JA_104th_Vision_Helmet_ME",
            "JA_104th_Scurvy_Helmet_ME"

        };
    };
};

class CfgFactionClasses
{
    class CfgFactionClasses
    {
        class 104th_Guys
        {
            displayname = "Jango's Finest";
            priority = 1; // Position in list.
            side = 1;     // Opfor = 0, Blufor = 1, Indep = 2.
            icon = "";
        };
    };
};
class cfgEditorSubcategories
{
    class 104th_Categ_Clones_Malevolence
    {
        displayname = "104th - Malevolence";
    };
};

class CfgWeapons
{
    class InventoryItem_Base_F;
    class ItemCore;
    class ls_gar_phase2Pilot_helmet;
    class ls_gar_phase2_uniform;
    class ls_gar_marshalCommander_uniform;
    class ls_gar_commander_vest;
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
    class ls_gar_airborneNCO_vest;
    class ls_gar_rebreather_vest;
    class ls_gar_forceReconLieutenant_vest;
    class ls_gar_airborne_vest;
    class JA_104th_Clone_Base_armor;
    class ls_gar_airborneOfficer_vest;
    class ls_gar_clone_vest;
    class ls_gar_kama_vest : JA_104th_Clone_Base_armor
    {
        class ItemInfo;
    };
    class ls_gar_medic_vest : ls_gar_clone_vest
    {
        class ItemInfo;
    };
    class ls_gar_officer_vest : ls_gar_clone_vest
    {
        class ItemInfo;
    };
    class ls_gar_forceReconNCO_vest : ls_gar_airborne_vest
    {
        class ItemInfo;
    };
    class ls_gar_forceRecon_vest : ls_gar_airborne_vest
    {
        class ItemInfo;
    };
    class ls_gar_heavy_vest : ls_gar_airborne_vest
    {
        class ItemInfo;
    };
    class ls_gar_grenadier_vest : ls_gar_clone_vest
    {
        class ItemInfo;
    };
    class ls_gar_medic_vest;
    class ls_gar_forceRecon_vest;
    class UniformItem;
    class VestItem;
    class Bag_Base;

    // Malevolence Customs Helmets

    class JA_104th_Bulky_Helmet_ME : ls_gar_phase1_helmet
    {
        author = "Dak";
        scopeArsenal = 2;
        side = 1;
        grad_slingHelmet_allow = "true";
        displayname = "Clone Trooper P1 Helmet (104th Bulky)";                                            // the name it will be in game
        hiddenSelectionsTextures[] = {"104thMalevolenceCustoms\data\Textures\104th_P1_Bulky_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\illum_co.paa"}; // the file path to the texture
    };
    class JA_104th_Ceasar_Helmet_ME : ls_gar_phase1_helmet
    {
        author = "Dak";
        scopeArsenal = 2;
        side = 1;
        grad_slingHelmet_allow = "true";
        displayname = "Clone Trooper P1 Helmet (104th Ceasar)";                                            // the name it will be in game
        hiddenSelectionsTextures[] = {"104thMalevolenceCustoms\data\Textures\104th_P1_Ceasar_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\illum_co.paa"}; // the file path to the texture
    };
    class JA_104th_Carmine_Helmet_ME : ls_gar_phase1_helmet
    {
        author = "Dak";
        scopeArsenal = 2;
        side = 1;
        grad_slingHelmet_allow = "true";
        displayname = "Clone Trooper P1 Helmet (104th Carmine)";                                            // the name it will be in game
        hiddenSelectionsTextures[] = {"104thMalevolenceCustoms\data\Textures\104th_P1_Carmine_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\illum_co.paa"}; // the file path to the texture
    };
    class JA_104th_Cyan_Helmet_ME : ls_gar_phase1_helmet
    {
        author = "Cyan";
        scopeArsenal = 2;
        side = 1;
        grad_slingHelmet_allow = "true";
        displayname = "Clone Trooper P1 Helmet (104th Cyan)";                                            // the name it will be in game
        hiddenSelectionsTextures[] = {"104thMalevolenceCustoms\data\Textures\104th_P1_Cyan_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\illum_co.paa"}; // the file path to the texture
    };
    class JA_104th_Drifter_Helmet_ME : ls_gar_phase1_helmet
    {
        author = "Dak";
        scopeArsenal = 2;
        side = 1;
        grad_slingHelmet_allow = "true";
        displayname = "Clone Trooper P1 Helmet (104th Drifter)";                                            // the name it will be in game
        hiddenSelectionsTextures[] = {"104thMalevolenceCustoms\data\Textures\104th_P1_Drifter_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\illum_co.paa"}; // the file path to the texture
    };
    class JA_104th_Gravity_Helmet_ME : ls_gar_phase1_helmet
    {
        author = "Dak";
        scopeArsenal = 2;
        side = 1;
        grad_slingHelmet_allow = "true";
        displayname = "Clone Trooper P1 Helmet (104th Gravity)";                                            // the name it will be in game
        hiddenSelectionsTextures[] = {"104thMalevolenceCustoms\data\Textures\104th_P1_Gravity_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\illum_co.paa"}; // the file path to the texture
    };
    class JA_104th_Irish_Helmet_ME : ls_gar_phase1_helmet
    {
        author = "Dak";
        scopeArsenal = 2;
        side = 1;
        grad_slingHelmet_allow = "true";
        displayname = "Clone Trooper P1 Helmet (104th Irish)";                                            // the name it will be in game
        hiddenSelectionsTextures[] = {"104thMalevolenceCustoms\data\Textures\104th_P1_Irish_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\illum_co.paa"}; // the file path to the texture
    };
    class JA_104th_Kage_Helmet_ME : ls_gar_phase1_helmet
    {
        author = "Dak";
        scopeArsenal = 2;
        side = 1;
        grad_slingHelmet_allow = "true";
        displayname = "Clone Trooper P1 Helmet (104th Kage)";                                            // the name it will be in game
        hiddenSelectionsTextures[] = {"104thMalevolenceCustoms\data\Textures\104th_P1_Kage_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\illum_co.paa"}; // the file path to the texture
    };
    class JA_104th_Knockout_Helmet_ME : ls_gar_phase1_helmet
    {
        author = "Dak";
        scopeArsenal = 2;
        side = 1;
        grad_slingHelmet_allow = "true";
        displayname = "Clone Trooper P1 Helmet (104th Knockout)";                                            // the name it will be in game
        hiddenSelectionsTextures[] = {"104thMalevolenceCustoms\data\Textures\104th_P1_Knockout_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\illum_co.paa"}; // the file path to the texture
    };
    class JA_104th_Kyo_Helmet_ME : ls_gar_phase1_helmet
    {
        author = "Dak";
        scopeArsenal = 2;
        side = 1;
        grad_slingHelmet_allow = "true";
        displayname = "Clone Trooper P1 Helmet (104th Kyo)";                                            // the name it will be in game
        hiddenSelectionsTextures[] = {"104thMalevolenceCustoms\data\Textures\104th_P1_Kyo_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\illum_co.paa"}; // the file path to the texture
    };
    class JA_104th_Pulse_Helmet_ME : ls_gar_phase1_helmet
    {
        author = "Dak";
        scopeArsenal = 2;
        side = 1;
        grad_slingHelmet_allow = "true";
        displayname = "Clone Trooper P1 Helmet (104th Pulse)";                                            // the name it will be in game
        hiddenSelectionsTextures[] = {"104thMalevolenceCustoms\data\Textures\104th_P1_Pulse_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\illum_co.paa"}; // the file path to the texture
    };
    class JA_104th_Ratchet_Helmet_ME : ls_gar_phase1_helmet
    {
        author = "Dak";
        scopeArsenal = 2;
        side = 1;
        grad_slingHelmet_allow = "true";
        displayname = "Clone Trooper P1 Helmet (104th Ratchet)";                                            // the name it will be in game
        hiddenSelectionsTextures[] = {"104thMalevolenceCustoms\data\Textures\104th_P1_Ratchet_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\illum_co.paa"}; // the file path to the texture
    };
    class JA_104th_Spectre_Helmet_ME : ls_gar_phase1_helmet
    {
        author = "Dak";
        scopeArsenal = 2;
        side = 1;
        grad_slingHelmet_allow = "true";
        displayname = "Clone Trooper P1 Helmet (104th Spectre)";                                            // the name it will be in game
        hiddenSelectionsTextures[] = {"104thMalevolenceCustoms\data\Textures\104th_P1_Spectre_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\illum_co.paa"}; // the file path to the texture
    };
    class JA_104th_Spirit_Helmet_ME : ls_gar_phase1_helmet
    {
        author = "Dak";
        scopeArsenal = 2;
        side = 1;
        grad_slingHelmet_allow = "true";
        displayname = "Clone Trooper P1 Helmet (104th Spirit)";                                            // the name it will be in game
        hiddenSelectionsTextures[] = {"104thMalevolenceCustoms\data\Textures\104th_P1_Spirit_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\illum_co.paa"}; // the file path to the texture
    };
    class JA_104th_Talisman_Helmet_ME : ls_gar_phase1_helmet
    {
        author = "Dak";
        scopeArsenal = 2;
        side = 1;
        grad_slingHelmet_allow = "true";
        displayname = "Clone Trooper P1 Helmet (104th Talisman)";                                            // the name it will be in game
        hiddenSelectionsTextures[] = {"104thMalevolenceCustoms\data\Textures\104th_P1_Talisman_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\illum_co.paa"}; // the file path to the texture
    };
    class JA_104th_Tinkle_Helmet_ME : ls_gar_phase1_helmet
    {
        author = "Dak";
        scopeArsenal = 2;
        side = 1;
        grad_slingHelmet_allow = "true";
        displayname = "Clone Trooper P1 Helmet (104th Tinkle)";                                            // the name it will be in game
        hiddenSelectionsTextures[] = {"104thMalevolenceCustoms\data\Textures\104th_P1_Tinkle_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\illum_co.paa"}; // the file path to the texture
    };
    class JA_104th_Galahad_Helmet_ME : ls_gar_phase1_helmet
    {
        author = "Dak";
        scopeArsenal = 2;
        side = 1;
        grad_slingHelmet_allow = "true";
        displayname = "Clone Trooper P1 Helmet (104th Galahad)";                                            // the name it will be in game
        hiddenSelectionsTextures[] = {"104thMalevolenceCustoms\data\Textures\104th_P1_Galahad_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\illum_co.paa"}; // the file path to the texture
    };
    class JA_104th_Magnum_Helmet_ME : ls_gar_phase1_helmet
    {
        author = "Dak";
        scopeArsenal = 2;
        side = 1;
        grad_slingHelmet_allow = "true";
        displayname = "Clone Trooper P1 Helmet (104th Magnum)";                                            // the name it will be in game
        hiddenSelectionsTextures[] = {"104thMalevolenceCustoms\data\Textures\104th_P1_Magnum_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\illum_co.paa"}; // the file path to the texture
    };
    class JA_104th_Frosty_Helmet_ME : ls_gar_phase1_helmet
    {
        author = "Dak";
        scopeArsenal = 2;
        side = 1;
        grad_slingHelmet_allow = "true";
        displayname = "Clone Trooper P1 Helmet (104th Frosty)";                                            // the name it will be in game
        hiddenSelectionsTextures[] = {"104thMalevolenceCustoms\data\Textures\104th_P1_Frosty_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\illum_co.paa"}; // the file path to the texture
    };
    class JA_104th_Sigil_Helmet_ME : ls_gar_phase1_helmet
    {
        author = "Dak";
        scopeArsenal = 2;
        side = 1;
        grad_slingHelmet_allow = "true";
        displayname = "Clone Trooper P1 Helmet (104th Sigil)";                                            // the name it will be in game
        hiddenSelectionsTextures[] = {"104thMalevolenceCustoms\data\Textures\104th_P1_Sigil_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\illum_co.paa"}; // the file path to the texture
    };
    class JA_104th_Vision_Helmet_ME : ls_gar_phase1_helmet
    {
        author = "Dak";
        scopeArsenal = 2;
        side = 1;
        grad_slingHelmet_allow = "true";
        displayname = "Clone Trooper P1 Helmet (104th Vision)";                                            // the name it will be in game
        hiddenSelectionsTextures[] = {"104thMalevolenceCustoms\data\Textures\104th_P1_Vision_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\illum_co.paa"}; // the file path to the texture
    };
    class JA_104th_Scurvy_Helmet_ME : ls_gar_phase1_helmet
    {
        author = "Dak";
        scopeArsenal = 2;
        side = 1;
        grad_slingHelmet_allow = "true";
        displayname = "Clone Trooper P1 Helmet (104th Scurvy)";                                            // the name it will be in game
        hiddenSelectionsTextures[] = {"104thMalevolenceCustoms\data\Textures\104th_P1_Scurvy_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\illum_co.paa"}; // the file path to the texture
    };
    class JA_104th_Kaleck_Helmet_ME : ls_gar_phase1_helmet
    {
        author = "Dak";
        scopeArsenal = 2;
        side = 1;
        grad_slingHelmet_allow = "true";
        displayname = "Clone Trooper P1 Helmet (104th Kaleck)";                                            // the name it will be in game
        hiddenSelectionsTextures[] = {"104thMalevolenceCustoms\data\Textures\104th_P1_Kaleck_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\illum_co.paa"}; // the file path to the texture
    };
};