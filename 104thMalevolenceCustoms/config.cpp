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
    class ls_sob_phase1SpecOp_helmet;
    class lsd_gar_standard_nvg;
    class ls_gar_phase1Pilot_helmet;
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
    class JA_104th_Cyan_ARF_Helmet_ME : ls_gar_phase1Arf_helmet
    {
        author = "Dak";
        scopeArsenal = 2;
        side = 1;
        grad_slingHelmet_allow = "true";
        displayname = "Clone Trooper ARF Helmet (104th Cyan MLV)";                                                  // the name it will be in game
        hiddenSelectionsTextures[] = {"104thMalevolenceCustoms\data\Textures\104th_ARF_Cyan_Helmet_MLV.paa","","\ls\core\addons\characters_clone_legacy\helmets\arf\data\helmet_co.paa"}; // the file path to the texture
    };
    class JA_104th_Welty_ARF_Helmet_ME : ls_gar_phase1Arf_helmet
    {
        author = "Dak";
        scopeArsenal = 2;
        side = 1;
        grad_slingHelmet_allow = "true";
        displayname = "Clone Trooper ARF Helmet (104th Welty MLV)";                                                  // the name it will be in game
        hiddenSelectionsTextures[] = {"104thMalevolenceCustoms\data\Textures\104th_ARF_Welty_Helmet_MLV.paa","","\ls\core\addons\characters_clone_legacy\helmets\arf\data\helmet_co.paa"}; // the file path to the texture
    };
    class JA_104th_Woods_ARF_Helmet_ME : ls_gar_phase1Arf_helmet
    {
        author = "Dak";
        scopeArsenal = 2;
        side = 1;
        grad_slingHelmet_allow = "true";
        displayname = "Clone Trooper ARF Helmet (104th Woods MLV)";                                                  // the name it will be in game
        hiddenSelectionsTextures[] = {"104thMalevolenceCustoms\data\Textures\104th_ARF_Woods_Helmet_MLV.paa","","\ls\core\addons\characters_clone_legacy\helmets\arf\data\helmet_co.paa"}; // the file path to the texture
    };
    class JA_104th_Scrub_Helmet_ME : ls_gar_phase1_helmet
    {
        author = "Dak";
        scopeArsenal = 2;
        side = 1;
        grad_slingHelmet_allow = true;
        displayname = "Clone Trooper P1 Helmet (104th Scrub MLV)";                                                  // the name it will be in game
        hiddenSelectionsTextures[] = {"104thMalevolenceCustoms\data\Textures\104th_AB_Scrub_Helmet_MLV.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\illum_co.paa"}; // the file path to the texture
    };
    class JA_104th_Castle_SpecOps_Helmet_ME : ls_sob_phase1SpecOp_helmet
    {
        author = "Dak";
        scopeArsenal = 2;
        side = 1;
        grad_slingHelmet_allow = true;
        displayname = "Clone Trooper P1 Special Activities Helmet (104th Castle MLV)"; // the name it will be in game
        hiddenSelections[] = {"Camo1", "Camo2"};
        hiddenSelectionsTextures[] = {"104thMalevolenceCustoms\data\Textures\104th_P1_Castle_SpecOps_P1_Helmet.paa", "\ls\core\addons\characters_clone_legacy\helmets\phase1SpecOp\data\visor_co.paa"}; // the file path to the texturehiddenSelectionsTextures[] = {"\ls\core\addons\characters_clone_legacy\helmets\phase1SpecOp\data\helmet_co.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1SpecOp\data\visor_co.paa"};
    };
    class JA_104th_Granite_SpecOps_Helmet_ME : ls_sob_phase1SpecOp_helmet
    {
        author = "Dak";
        scopeArsenal = 2;
        side = 1;
        grad_slingHelmet_allow = true;
        displayname = "Clone Trooper P1 Special Activities Helmet (104th Granite MLV)"; // the name it will be in game
        hiddenSelections[] = {"Camo1", "Camo2"};
        hiddenSelectionsTextures[] = {"104thMalevolenceCustoms\data\Textures\104th_P1_Granite_SpecOps_P1_Helmet.paa", "\ls\core\addons\characters_clone_legacy\helmets\phase1SpecOp\data\visor_co.paa"}; // the file path to the texturehiddenSelectionsTextures[] = {"\ls\core\addons\characters_clone_legacy\helmets\phase1SpecOp\data\helmet_co.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1SpecOp\data\visor_co.paa"};
    };
    class JA_104th_Osiris_Helmet_ME : ls_gar_phase1_helmet
    {
        author = "Dak";
        scopeArsenal = 2;
        side = 1;
        grad_slingHelmet_allow = true;
        displayname = "Clone Trooper P1 Helmet (104th Osiris MLV)";                                                  // the name it will be in game
        hiddenSelectionsTextures[] = {"104thMalevolenceCustoms\data\Textures\104th_P1_Osiris_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\illum_co.paa"}; // the file path to the texture
    };
    class JA_104th_Vegas_Helmet_ME : ls_gar_phase1_helmet
    {
        author = "Dak";
        scopeArsenal = 2;
        side = 1;
        grad_slingHelmet_allow = true;
        displayname = "Clone Trooper P1 Helmet (104th Vegas MLV)";                                                  // the name it will be in game
        hiddenSelectionsTextures[] = {"104thMalevolenceCustoms\data\Textures\104th_P1_Vegas_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\illum_co.paa"}; // the file path to the texture
    };
    class JA_104th_Lax_Helmet_ME : ls_gar_phase1_helmet
    {
        author = "Dak";
        scopeArsenal = 2;
        side = 1;
        grad_slingHelmet_allow = true;
        displayname = "Clone Trooper P1 Helmet (104th Lax MLV)";                                                  // the name it will be in game
        hiddenSelectionsTextures[] = {"104thMalevolenceCustoms\data\Textures\104th_P1_Lax_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\illum_co.paa"}; // the file path to the texture
    };
    class JA_104th_Poet_Helmet_ME : ls_gar_phase1_helmet
    {
        author = "Dak";
        scopeArsenal = 2;
        side = 1;
        grad_slingHelmet_allow = true;
        displayname = "Clone Trooper P1 Helmet (104th Poet MLV)";                                                  // the name it will be in game
        hiddenSelectionsTextures[] = {"104thMalevolenceCustoms\data\Textures\104th_P1_Poet_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\illum_co.paa"}; // the file path to the texture
    };
    class JA_104th_Tusk_Helmet_ME : ls_gar_phase1_helmet
    {
        author = "Dak";
        scopeArsenal = 2;
        side = 1;
        grad_slingHelmet_allow = true;
        displayname = "Clone Trooper P1 Helmet (104th Tusk MLV)";                                                  // the name it will be in game
        hiddenSelectionsTextures[] = {"104thMalevolenceCustoms\data\Textures\104th_P1_Tusk_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\illum_co.paa"}; // the file path to the texture
    };
    class JA_104th_Boris_Helmet_ME : ls_gar_phase1Pilot_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;
		displayname = "Clone Trooper Pilot P1 Helmet (104th Boris MLV)"; // the name it will be in game
		hiddenSelectionsTextures[] = {
			"104thMalevolenceCustoms\data\Textures\104th_Pilot_Boris_P1_Helmet.paa",
			"104thMalevolenceCustoms\data\Textures\104th_Pilot_Boris_MLV_Life_Support.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1Pilot\data\visor_co.paa"}; // the file path to the texture
	};
    class JA_104th_Irish_Uniform_ME : ls_gar_marshalCommander_uniform
    {
        author = "Dak";
        scope = 2;
        allowedSlots[] = {BACKPACK_SLOT};
        displayName = "Clone Trooper P1 armor (104th Irish MLV)";
		model = "\ls\core\addons\characters_clone_legacy\uniforms\phase2\ls_gar_phase2_uniform.p3d";
        hiddenSelections[] =
            {
                "camo1",
                "camo2"};
        hiddenSelectionsTextures[] =
            {
                "104thMalevolenceCustoms\data\Textures\104th_P1_Irish_Upper.paa",
                "104thMalevolenceCustoms\data\Textures\104th_P1_Irish_Lower.paa"};
        class ItemInfo : UniformItem
        {
            uniformModel = "-";
			scope = 2;
            uniformClass = "JA_104th_Irish_ME";
            containerClass = "Supply150";
            mass = 40;
            uniformType = "Neopren";
        };
    };
    class JA_104th_Tusk_Uniform_ME : ls_gar_marshalCommander_uniform
    {
        author = "Dak";
        scope = 2;
        allowedSlots[] = {BACKPACK_SLOT};
        displayName = "Clone Trooper P1 armor (104th Tusk MLV)";
		model = "\ls\core\addons\characters_clone_legacy\uniforms\phase2\ls_gar_phase2_uniform.p3d";
        hiddenSelections[] =
            {
                "camo1",
                "camo2"};
        hiddenSelectionsTextures[] =
            {
                "104thMalevolenceCustoms\data\Textures\104th_P1_Tusk_Upper.paa",
                "104thMalevolenceCustoms\data\Textures\104th_P1_Tusk_Lower.paa"};
        class ItemInfo : UniformItem
        {
            uniformModel = "-";
			scope = 2;
            uniformClass = "JA_104th_Tusk_ME";
            containerClass = "Supply150";
            mass = 40;
            uniformType = "Neopren";
        };
    };
    class JA_104th_Irish_officer_Vest_ME : ls_gar_officer_vest
    {
        author = "Dak";
        displayName = "Clone Trooper Officer Vest (104th Irish MLV)";
        hiddenSelections[] =
            {
                "camo1"};
        hiddenSelectionsTextures[] =
            {
                "104thMalevolenceCustoms\data\Textures\104th_P1_Irish_Accessories_Officer.paa"};
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
    class JA_104th_Tusk_P2_NVG_ME : lsd_gar_standard_nvg
    {
        author = "Tundra";
        displayName = "Clone P2 NVG Visor (104th Tusk MLV)";
        hiddenSelections[] =
            {
                "camo1",
            };
        hiddenSelectionsTextures[] = {"104thMalevolenceCustoms\data\Textures\104th_P1_Tusk_Macro_NVG.paa"}; // the file path to the texture
        visionMode[] = {"Normal", "NVG", "TI"};
        thermalMode[] = {0, 1};
    };
};
class CfgVehicles
{
    class lsd_gar_phase2_base;
    class lsd_gar_phase2_base;
    class ls_gar_marshalCommander_base;
    class ls_gar_standard_backpack;
    class ls_gar_rto_mini_backpack;
    class ls_gar_heavy_backpack;
    class ls_gar_medic_backpack;
    class ls_gar_Radio_backpack;
    class EG_InvisBagMain;
    class JA_104th_Irish_ME : lsd_gar_phase2_base
    {
        author = "Dak";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        side = 1;
        uniformClass = "JA_104th_Irish_Uniform_ME";
        displayName = "104th MLV - Irish";
        faction = "104th_Guys";
        editorSubcategory = "104th_Categ_Clones_malevolence";
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {"104thMalevolenceCustoms\data\Textures\104th_P1_Irish_Upper.paa", "104thMalevolenceCustoms\data\Textures\104th_P1_Irish_Lower.paa"};
        linkedItems[] = {JA_104th_Malevolence_Base_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};        // all items that will be on unit
        respawnLinkedItems[] = {JA_104th_Malevolence_Base_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
    };
    class JA_104th_Tusk_ME : lsd_gar_phase2_base
    {
        author = "Dak";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        side = 1;
        uniformClass = "JA_104th_Tusk_Uniform_ME";
        displayName = "104th MLV - Tusk";
        faction = "104th_Guys";
        editorSubcategory = "104th_Categ_Clones_malevolence";
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {"104thMalevolenceCustoms\data\Textures\104th_P1_Tusk_Upper.paa", "104thMalevolenceCustoms\data\Textures\104th_P1_Tusk_Lower.paa"};
        linkedItems[] = {JA_104th_Malevolence_Base_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};        // all items that will be on unit
        respawnLinkedItems[] = {JA_104th_Malevolence_Base_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
    };
    
};