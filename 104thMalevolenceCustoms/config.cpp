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
        side = 1; // Opfor = 0, Blufor = 1, Indep = 2. 
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
	class SWLB_Clone_Pilot_P2_Helmet;
	class SWLB_clone_uniform;
	class SWLB_clone_mc_uniform;
	class SWLB_clone_commander_armor;
	class SWLB_clone_BARC_helmet;
	class SWLB_clone_AB_helmet;
	class SWLB_clone_ARF_P1_Helmet;
	class SWLB_clone_P15_Helmet;
	class SWLB_clone_P1_helmet;
	class SWLB_clone_P1_2_helmet;
	class SWLB_clone_P2_Helmet;
	class lsd_gar_standart_nvg;
	class lsd_gar_rangefinder_nvg;
	class lsd_gar_p2MarshalCommander_nvg;
	class SWLB_clone_airborne_nco_armor;
	class SWLB_CEE_Lightweight_Rebreather;
	class SWLB_CEE_Recon_Lieutenant;
	class SWLB_clone_airborne_armor;
    class JA_104th_Clone_Base_armor;
	class ls_gar_airborneOfficer_vest;
    class SWLB_clone_basic_armor;
	class SWLB_clone_kama_armor: JA_104th_Clone_Base_armor
    {
        class ItemInfo;
    };
    class SWLB_clone_medic_armor: SWLB_clone_basic_armor
    {
        class ItemInfo;
    };
    class SWLB_clone_officer_armor : SWLB_clone_basic_armor
    {
        class ItemInfo;
    };
    class SWLB_CEE_Force_Recon_NCO : SWLB_clone_airborne_armor
    {
        class ItemInfo;
    };
    class SWLB_CEE_Force_Recon : SWLB_clone_airborne_armor
    {
        class ItemInfo;
    };
    class SWLB_CEE_Heavy_Vest : SWLB_clone_airborne_armor
    {
        class ItemInfo;
    };
	class SWLB_clone_grenadier_armor : SWLB_clone_basic_armor
    {
        class ItemInfo;
    };
	class SWLB_clone_medic_armor;
	class SWLB_CEE_Force_Recon;
	class UniformItem;
	class VestItem;
	class Bag_Base;


    // Malevolence Customs Helmets

    class JA_104th_Bulky_Helmet_ME : SWLB_clone_P1_Helmet
    {
        author = "Dak";
        scopeArsenal = 2;
        side = 1;
        grad_slingHelmet_allow = "true";
        hiddenSelections[] = {"camo1"};                                                        // don't change this
        displayname = "Clone Trooper P1 Helmet (104th Bulky)";                                 // the name it will be in game
        hiddenSelectionsTextures[] = {"104thMalevolenceCustoms\data\Textures\104th_P1_Bulky_Helmet.paa"}; // the file path to the texture
    };
    class JA_104th_Carmine_Helmet_ME : SWLB_clone_P1_Helmet
    {
        author = "Dak";
        scopeArsenal = 2;
        side = 1;
        grad_slingHelmet_allow = "true";
        hiddenSelections[] = {"camo1"};                                                        // don't change this
        displayname = "Clone Trooper P1 Helmet (104th Carmine)";                                   // the name it will be in game
        hiddenSelectionsTextures[] = {"104thMalevolenceCustoms\data\Textures\104th_P1_Carmine_Helmet.paa"}; // the file path to the texture
    };
    class JA_104th_Cyan_Helmet_ME : SWLB_clone_P1_Helmet
    {
        author = "Cyan";
        scopeArsenal = 2;
        side = 1;
        grad_slingHelmet_allow = "true";
        hiddenSelections[] = {"camo1"};                                                        // don't change this
        displayname = "Clone Trooper P1 Helmet (104th Cyan)";                                  // the name it will be in game
        hiddenSelectionsTextures[] = {"104thMalevolenceCustoms\data\Textures\104th_P1_Cyan_Helmet.paa"}; // the file path to the texture
    };
    class JA_104th_Drifter_Helmet_ME : SWLB_clone_P1_Helmet
    {
        author = "Dak";
        scopeArsenal = 2;
        side = 1;
        grad_slingHelmet_allow = "true";
        hiddenSelections[] = {"camo1"};                                                        // don't change this
        displayname = "Clone Trooper P1 Helmet (104th Drifter)";                                   // the name it will be in game
        hiddenSelectionsTextures[] = {"104thMalevolenceCustoms\data\Textures\104th_P1_Drifter_Helmet.paa"}; // the file path to the texture
    };
    class JA_104th_Gravity_Helmet_ME : SWLB_clone_P1_Helmet
    {
        author = "Dak";
        scopeArsenal = 2;
        side = 1;
        grad_slingHelmet_allow = "true";
        hiddenSelections[] = {"camo1"};                                                        // don't change this
        displayname = "Clone Trooper P1 Helmet (104th Gravity)";                                   // the name it will be in game
        hiddenSelectionsTextures[] = {"104thMalevolenceCustoms\data\Textures\104th_P1_Gravity_Helmet.paa"}; // the file path to the texture
    };
    class JA_104th_Irish_Helmet_ME : SWLB_clone_P1_Helmet
    {
        author = "Dak";
        scopeArsenal = 2;
        side = 1;
        grad_slingHelmet_allow = "true";
        hiddenSelections[] = {"camo1"};                                                        // don't change this
        displayname = "Clone Trooper P1 Helmet (104th Irish)";                                 // the name it will be in game
        hiddenSelectionsTextures[] = {"104thMalevolenceCustoms\data\Textures\104th_P1_Irish_Helmet.paa"}; // the file path to the texture
    };
    class JA_104th_Kage_Helmet_ME : SWLB_clone_P1_Helmet
    {
        author = "Dak";
        scopeArsenal = 2;
        side = 1;
        grad_slingHelmet_allow = "true";
        hiddenSelections[] = {"camo1"};                                                        // don't change this
        displayname = "Clone Trooper P1 Helmet (104th Kage)";                                  // the name it will be in game
        hiddenSelectionsTextures[] = {"104thMalevolenceCustoms\data\Textures\104th_P1_Kage_Helmet.paa"}; // the file path to the texture
    };
    class JA_104th_Knockout_Helmet_ME : SWLB_clone_P1_Helmet
    {
        author = "Dak";
        scopeArsenal = 2;
        side = 1;
        grad_slingHelmet_allow = "true";
        hiddenSelections[] = {"camo1"};                                                        // don't change this
        displayname = "Clone Trooper P1 Helmet (104th Knockout)";                                  // the name it will be in game
        hiddenSelectionsTextures[] = {"104thMalevolenceCustoms\data\Textures\104th_P1_Knockout_Helmet.paa"}; // the file path to the texture
    };
    class JA_104th_Kyo_Helmet_ME : SWLB_clone_P1_Helmet
    {
        author = "Dak";
        scopeArsenal = 2;
        side = 1;
        grad_slingHelmet_allow = "true";
        hiddenSelections[] = {"camo1"};                                                        // don't change this
        displayname = "Clone Trooper P1 Helmet (104th Kyo)";                                   // the name it will be in game
        hiddenSelectionsTextures[] = {"104thMalevolenceCustoms\data\Textures\104th_P1_Kyo_Helmet.paa"}; // the file path to the texture
    };
    class JA_104th_Pulse_Helmet_ME : SWLB_clone_P1_Helmet
    {
        author = "Dak";
        scopeArsenal = 2;
        side = 1;
        grad_slingHelmet_allow = "true";
        hiddenSelections[] = {"camo1"};                                                        // don't change this
        displayname = "Clone Trooper P1 Helmet (104th Pulse)";                                 // the name it will be in game
        hiddenSelectionsTextures[] = {"104thMalevolenceCustoms\data\Textures\104th_P1_Pulse_Helmet.paa"}; // the file path to the texture
    };
    class JA_104th_Ratchet_Helmet_ME : SWLB_clone_P1_Helmet
    {
        author = "Dak";
        scopeArsenal = 2;
        side = 1;
        grad_slingHelmet_allow = "true";
        hiddenSelections[] = {"camo1"};                                                        // don't change this
        displayname = "Clone Trooper P1 Helmet (104th Ratchet)";                                // the name it will be in game
        hiddenSelectionsTextures[] = {"104thMalevolenceCustoms\data\Textures\104th_P1_Ratchet_Helmet.paa"}; // the file path to the texture
    };
    class JA_104th_Spectre_Helmet_ME : SWLB_clone_P1_Helmet
    {
        author = "Dak";
        scopeArsenal = 2;
        side = 1;
        grad_slingHelmet_allow = "true";
        hiddenSelections[] = {"camo1"};                                                        // don't change this
        displayname = "Clone Trooper P1 Helmet (104th Spectre)";                                   // the name it will be in game
        hiddenSelectionsTextures[] = {"104thMalevolenceCustoms\data\Textures\104th_P1_Spectre_Helmet.paa"}; // the file path to the texture
    };
    class JA_104th_Spirit_Helmet_ME : SWLB_clone_P1_Helmet
    {
        author = "Dak";
        scopeArsenal = 2;
        side = 1;
        grad_slingHelmet_allow = "true";
        hiddenSelections[] = {"camo1"};                                                        // don't change this
        displayname = "Clone Trooper P1 Helmet (104th Spirit)";                                // the name it will be in game
        hiddenSelectionsTextures[] = {"104thMalevolenceCustoms\data\Textures\104th_P1_Spirit_Helmet.paa"}; // the file path to the texture
    };
    class JA_104th_Talisman_Helmet_ME : SWLB_clone_P1_Helmet
    {
        author = "Dak";
        scopeArsenal = 2;
        side = 1;
        grad_slingHelmet_allow = "true";
        hiddenSelections[] = {"camo1"};                                                        // don't change this
        displayname = "Clone Trooper P1 Helmet (104th Talisman)";                                  // the name it will be in game
        hiddenSelectionsTextures[] = {"104thMalevolenceCustoms\data\Textures\104th_P1_Talisman_Helmet.paa"}; // the file path to the texture
    };
    class JA_104th_Tinkle_Helmet_ME : SWLB_clone_P1_Helmet
    {
        author = "Dak";
        scopeArsenal = 2;
        side = 1;
        grad_slingHelmet_allow = "true";
        hiddenSelections[] = {"camo1"};                                                        // don't change this
        displayname = "Clone Trooper P1 Helmet (104th Tinkle)";                                // the name it will be in game
        hiddenSelectionsTextures[] = {"104thMalevolenceCustoms\data\Textures\104th_P1_Tinkle_Helmet.paa"}; // the file path to the texture
    };
    class JA_104th_Galahad_Helmet_ME : SWLB_clone_P1_Helmet
    {
        author = "Dak";
        scopeArsenal = 2;
        side = 1;
        grad_slingHelmet_allow = "true";
        hiddenSelections[] = {"camo1"};                                                        // don't change this
        displayname = "Clone Trooper P1 Helmet (104th Galahad)";                                   // the name it will be in game
        hiddenSelectionsTextures[] = {"104thMalevolenceCustoms\data\Textures\104th_P1_Galahad_Helmet.paa"}; // the file path to the texture
    };
    class JA_104th_Magnum_Helmet_ME : SWLB_clone_P1_Helmet
    {
        author = "Dak";
        scopeArsenal = 2;
        side = 1;
        grad_slingHelmet_allow = "true";
        hiddenSelections[] = {"camo1"};                                                        // don't change this
        displayname = "Clone Trooper P1 Helmet (104th Magnum)";                                // the name it will be in game
        hiddenSelectionsTextures[] = {"104thMalevolenceCustoms\data\Textures\104th_P1_Magnum_Helmet.paa"}; // the file path to the texture
    };
    class JA_104th_Frosty_Helmet_ME : SWLB_clone_P1_Helmet
    {
        author = "Dak";
        scopeArsenal = 2;
        side = 1;
        grad_slingHelmet_allow = "true";
        hiddenSelections[] = {"camo1"};                                                        // don't change this
        displayname = "Clone Trooper P1 Helmet (104th Frosty)";                                // the name it will be in game
        hiddenSelectionsTextures[] = {"104thMalevolenceCustoms\data\Textures\104th_P1_Frosty_Helmet.paa"}; // the file path to the texture
    };
    class JA_104th_Sigil_Helmet_ME : SWLB_clone_P1_Helmet
    {
        author = "Dak";
        scopeArsenal = 2;
        side = 1;
        grad_slingHelmet_allow = "true";
        hiddenSelections[] = {"camo1"};                                                        // don't change this
        displayname = "Clone Trooper P1 Helmet (104th Sigil)";                                 // the name it will be in game
        hiddenSelectionsTextures[] = {"104thMalevolenceCustoms\data\Textures\104th_P1_Sigil_Helmet.paa"}; // the file path to the texture
    };
    class JA_104th_Vision_Helmet_ME : SWLB_clone_P1_Helmet
    {
        author = "Dak";
        scopeArsenal = 2;
        side = 1;
        grad_slingHelmet_allow = "true";
        hiddenSelections[] = {"camo1"};                                                        // don't change this
        displayname = "Clone Trooper P1 Helmet (104th Vision)";                                // the name it will be in game
        hiddenSelectionsTextures[] = {"104thMalevolenceCustoms\data\Textures\104th_P1_Vision_Helmet.paa"}; // the file path to the texture
    };
    class JA_104th_Scurvy_Helmet_ME : SWLB_clone_P1_Helmet
    {
        author = "Dak";
        scopeArsenal = 2;
        side = 1;
        grad_slingHelmet_allow = "true";
        hiddenSelections[] = {"camo1"};                                                        // don't change this
        displayname = "Clone Trooper P1 Helmet (104th Scurvy)";                                // the name it will be in game
        hiddenSelectionsTextures[] = {"104thMalevolenceCustoms\data\Textures\104th_P1_Scurvy_Helmet.paa"}; // the file path to the texture
    };
};