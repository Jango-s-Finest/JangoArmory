#include "basicDefines_A3.hpp"
class DefaultEventhandlers;
class UniformSlotInfo;
class CfgPatches
{
    class Jangos_Utilities
    {
        author = "Jango's Finest";
        units[] = {
            "JA_104th_Civilian_Thropie_System_SR",
            "JA_104th_Civilian_Thropie_System_LR",
            "JA_104th_BlueFor_Thropie_System_SR",
            "JA_104th_BlueFor_Thropie_System_LR",
            "JA_104th_OpFor_Thropie_System_SR",
            "JA_104th_OpFor_Thropie_System_LR"}; // All the new vehicles/units you've created in cfgVehicles
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {};
    };
};

class CfgFactionClasses
{
    class 104th_Guys_Civs
    {
        displayname = "Jango's Finest";
        priority = 1; // Position in list.
        side = 3;     // Opfor = 0, Blufor = 1, Indep = 2.
        icon = "";
    };
    class 104th_Guys_CIS
    {
        displayname = "Jango's Finest";
        priority = 1; // Position in list.scope = 2;
        side = 0;
        icon = "";
    };
    class 104th_Guys
    {
        displayname = "Jango's Finest";
        priority = 1; // Position in list.
        side = 1;     // Opfor = 0, Blufor = 1, Indep = 2.
        icon = "";
    };
};
;
class cfgEditorSubcategories
{
    class 104th_Categ_Utilities_CIV
    {
        displayname = "CIV - Utilities";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        side = 3;
    };
    class 104th_Categ_Utilities_CIS
    {
        displayname = "CIS - Utilities";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        side = 0;
    };
    class 104th_Categ_Utilities
    {
        displayname = "104th - Utilities";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        side = 1;
    };
};

class cfgVehicles
{
    class OPTRE_Static_Gauss;
    class JA_104th_Civilian_Thropie_System_SR : OPTRE_Static_Gauss
    {
        displayName = "104th Defense System 1500M";
        crew = "B_UAV_AI";
        side = 3;
        faction = "104th_Guys_Civs";
        editorSubcategory = "104th_Categ_Utilities_CIV";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        getInRadius = 0;
        threat[] = {0, 0, 0};
        gunnerCanSee = "0";
        driverCanSee = "0";
        commanderCanSee = "0";
        armor = 200;
        class EventHandlers : DefaultEventhandlers
        {
            Init = "[_this select 0, 1500] execVM '\JangosUtilities\DefenceSystem.sqf';";
        };
    };
    class JA_104th_Civilian_Thropie_System_LR : OPTRE_Static_Gauss
    {
        displayName = "104th Defense System 3000M";
        crew = "B_UAV_AI";
        side = 3;
        faction = "104th_Guys_Civs";
        editorSubcategory = "104th_Categ_Utilities_CIV";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        getInRadius = 0;
        threat[] = {0, 0, 0};
        gunnerCanSee = "0";
        driverCanSee = "0";
        commanderCanSee = "0";
        armor = 200;
        class EventHandlers : DefaultEventhandlers
        {
            Init = "[_this select 0, 3000] execVM '\JangosUtilities\DefenceSystem.sqf';";
        };
    };
    class JA_104th_BlueFor_Thropie_System_SR : OPTRE_Static_Gauss
    {
        displayName = "104th Defense System 1500M";
        crew = "B_UAV_AI";
        side = 1;
        faction = "104th_Guys";
        editorSubcategory = "104th_Categ_Utilities";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        getInRadius = 0;
        threat[] = {0, 0, 0};
        gunnerCanSee = "0";
        driverCanSee = "0";
        commanderCanSee = "0";
        armor = 200;
        class EventHandlers : DefaultEventhandlers
        {
            Init = "[_this select 0, 1500] execVM '\JangosUtilities\DefenceSystem.sqf';";
        };
    };
    class JA_104th_BlueFor_Thropie_System_LR : OPTRE_Static_Gauss
    {
        displayName = "104th Defense System 3000M";
        crew = "B_UAV_AI";
        side = 1;
        faction = "104th_Guys";
        editorSubcategory = "104th_Categ_Utilities";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        getInRadius = 0;
        threat[] = {0, 0, 0};
        gunnerCanSee = "0";
        driverCanSee = "0";
        commanderCanSee = "0";
        armor = 200;
        class EventHandlers : DefaultEventhandlers
        {
            Init = "[_this select 0, 3000] execVM '\JangosUtilities\DefenceSystem.sqf';";
        };
    };
    class JA_104th_OpFor_Thropie_System_SR : OPTRE_Static_Gauss
    {
        displayName = "104th Defense System 1500M";
        crew = "B_UAV_AI";
        side = 0;
        faction = "104th_Guys_CIS";
        editorSubcategory = "104th_Categ_Utilities_CIS";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        getInRadius = 0;
        threat[] = {0, 0, 0};
        gunnerCanSee = "0";
        driverCanSee = "0";
        commanderCanSee = "0";
        armor = 200;
        class EventHandlers : DefaultEventhandlers
        {
            Init = "[_this select 0, 1500] execVM '\JangosUtilities\DefenceSystem.sqf';";
        };
    };
    class JA_104th_OpFor_Thropie_System_LR : OPTRE_Static_Gauss
    {
        displayName = "104th Defense System 3000M";
        crew = "B_UAV_AI";
        side = 0;
        faction = "104th_Guys_CIS";
        editorSubcategory = "104th_Categ_Utilities_CIS";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        getInRadius = 0;
        threat[] = {0, 0, 0};
        gunnerCanSee = "0";
        driverCanSee = "0";
        commanderCanSee = "0";
        armor = 200;
        class EventHandlers : DefaultEventhandlers
        {
            Init = "[_this select 0, 3000] execVM '\JangosUtilities\DefenceSystem.sqf';";
        };
    };
};