#include "script_component.hpp"

class CfgPatches
{
    class Jangos_Armory
    {
        name = COMPONENT_NAME;
        units[] += {};
        weapons[] += {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = { };             // Addon dependencies
        authors[] = {                       // Authors
            "Dak",
        };
        author = AUTHOR;                   // MACRO
        VERSION_CONFIG;
    };

    class XADDON: Jangos_Armory { // just in-case anything requires "acex_main"
        units[] += {};
        weapons[] += {};
    };
};

class CfgMods {
    class PREFIX {
        dir = "@MOD_Name";
        name = "jango's Finest";
        picture = "jfalogo.paa"; // 256x256            // Picture displayed in expansions menu.
        hidePicture = "false";               // Hide the picture in the expansions menu.
        hideName = "true";                  // Hide the name in the expansions menu.
        actionName = "Website";             // Text displayed in the action button in the main menu.
        action = "https://104thwolfpack.org";              // Website URL, that is opened when the action button is clicked.
        //description = "";                 // Short description, that is displayed in the main menu.
    };
};

