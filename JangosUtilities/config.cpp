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
            "JA_104th_OpFor_Thropie_System_LR",
            "JA_104th_Civilian_Escape_Pods",
            "JA_104th_BlueFor_Escape_Pods",
            "JA_104th_OpFor_Escape_Pods",
            "JA_104th_OpFor_Hyena_bomber",
            "JA_104th_OpFor_Spawner_3AS_CIS_Vulture_AA_F",
            "JA_104th_OpFor_Spawner_3AS_CIS_Vulture_F",
            "JA_104th_OpFor_Spawner_SFA_Vengeance_F",
            "JA_104th_OpFor_Spawner_JA_104th_OpFor_Hyena_bomber",
            "JA_104th_OpFor_Spawner_SFA_Dragonfly",
            "JA_104th_OpFor_Spawner_ls_vehicle_hmp",
            "JA_104th_OpFor_Spawner_3AS_MAF_Gunship_F",
        }; // All the new vehicles/units you've created in cfgVehicles
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
    class 3AS_CIS_Naval_Gun;
    class OPTRE_EscapePod;
    class JA_104th_Civilian_Thropie_System_SR : 3AS_CIS_Naval_Gun
    {
        displayName = "CIV Iron Dome 1500M";
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
            Init = "[_this select 0, 1500] execVM '\JangosUtilities\Scripts\DefenceSystem.sqf';";
        };
    };
    class JA_104th_Civilian_Thropie_System_LR : 3AS_CIS_Naval_Gun
    {
        displayName = "CIV Iron Dome 3000M";
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
            Init = "[_this select 0, 3000] execVM '\JangosUtilities\Scripts\DefenceSystem.sqf';";
        };
    };
    class JA_104th_BlueFor_Thropie_System_SR : 3AS_CIS_Naval_Gun
    {
        displayName = "104th Iron Dome 1500M";
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
            Init = "[_this select 0, 1500] execVM '\JangosUtilities\Scripts\DefenceSystem.sqf';";
        };
    };
    class JA_104th_BlueFor_Thropie_System_LR : 3AS_CIS_Naval_Gun
    {
        displayName = "104th Iron Dome 3000M";
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
            Init = "[_this select 0, 3000] execVM '\JangosUtilities\Scripts\DefenceSystem.sqf';";
        };
    };
    class JA_104th_OpFor_Thropie_System_SR : 3AS_CIS_Naval_Gun
    {
        displayName = "CIS Iron Dome 1500M";
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
            Init = "[_this select 0, 1500] execVM '\JangosUtilities\Scripts\DefenceSystem.sqf';";
        };
    };
    class JA_104th_OpFor_Thropie_System_LR : 3AS_CIS_Naval_Gun
    {
        displayName = "CIS Iron Dome 3000M";
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
            Init = "[_this select 0, 3000] execVM '\JangosUtilities\Scripts\DefenceSystem.sqf';";
        };
    };
    class JA_104th_Civilian_Escape_Pods : OPTRE_EscapePod
    {
        displayName = "CIV Escape Pods";
        side = 3;
        faction = "104th_Guys_Civs";
        editorSubcategory = "104th_Categ_Utilities_CIV";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        class UserActions
		{
			// Choppers
			class Eject
			{
				displayName = "Eject";
				position = "pos cano";
				radius = 15;
				condition = "true";
				statement = "[this] execVM '\JangosUtilities\Scripts\EscapePods.sqf';";
				onlyforplayer = "false";
				hideOnUse = 1;
			};
        };
    };
    class JA_104th_BlueFor_Escape_Pods : OPTRE_EscapePod
    {
        displayName = "104th Escape Pods";
        side = 1;
        faction = "104th_Guys";
        editorSubcategory = "104th_Categ_Utilities";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        class UserActions
		{
			// Choppers
			class Eject
			{
				displayName = "Eject";
				position = "pos cano";
				radius = 15;
                condition = "player in this";
				statement = "[this] execVM '\JangosUtilities\Scripts\EscapePods.sqf';";
				onlyforplayer = "false";
				hideOnUse = 1;
			};
        };
    };
    class JA_104th_OpFor_Escape_Pods : OPTRE_EscapePod
    {
        displayName = "CIS Escape Pods";
        side = 0;
        faction = "104th_Guys_CIS";
        editorSubcategory = "104th_Categ_Utilities_CIS";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        class UserActions
		{
			// Choppers
			class Eject
			{
				displayName = "Eject";
				position = "pos cano";
				radius = 15;
				condition = "true";
				statement = "[this] execVM '\JangosUtilities\Scripts\EscapePods.sqf';";
				onlyforplayer = "false";
				hideOnUse = 1;
			};
        };
    };
    class SDT_Hyena_bomber;
    class JA_104th_OpFor_Hyena_bomber: SDT_Hyena_bomber
    {
        crew = "B_UAV_AI";
        displayName = "Hyena bomber";
        side = 0;
        faction = "104th_Guys_CIS";
        editorSubcategory = "104th_Categ_Utilities_CIS";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
    };
    class 3AS_Droid_Dispenser_F;
    class JA_104th_OpFor_Spawner_3AS_CIS_Vulture_AA_F : 3AS_Droid_Dispenser_F
    {
        displayName = "Droid Dispenser Vulture AA";
        side = 0;
        faction = "104th_Guys_CIS";
        editorSubcategory = "104th_Categ_Utilities_CIS";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        class EventHandlers : DefaultEventhandlers
        {
            Init = "[_this select 0, '3AS_CIS_Vulture_AA_F', 10] execVM 'JangosUtilities\Scripts\spawner.sqf';";
        };
    };
    class JA_104th_OpFor_Spawner_3AS_CIS_Vulture_F : 3AS_Droid_Dispenser_F
    {
        displayName = "Droid Dispenser Vulture";
        side = 0;
        faction = "104th_Guys_CIS";
        editorSubcategory = "104th_Categ_Utilities_CIS";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        class EventHandlers : DefaultEventhandlers
        {
            Init = "[_this select 0, '3AS_CIS_Vulture_F', 10] execVM 'JangosUtilities\Scripts\spawner.sqf';";
        };
    };
    class JA_104th_OpFor_Spawner_SFA_Vengeance_F : 3AS_Droid_Dispenser_F
    {
        displayName = "Droid Dispenser Vengeance Fighter";
        side = 0;
        faction = "104th_Guys_CIS";
        editorSubcategory = "104th_Categ_Utilities_CIS";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        class EventHandlers : DefaultEventhandlers
        {
            Init = "[_this select 0, 'SFA_Vengeance_F', 10] execVM 'JangosUtilities\Scripts\spawner.sqf';";
        };
    };
    class JA_104th_OpFor_Spawner_JA_104th_OpFor_Hyena_bomber : 3AS_Droid_Dispenser_F
    {
        displayName = "Droid Dispenser Hyena bomber";
        side = 0;
        faction = "104th_Guys_CIS";
        editorSubcategory = "104th_Categ_Utilities_CIS";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        class EventHandlers : DefaultEventhandlers
        {
            Init = "[_this select 0, 'JA_104th_OpFor_Hyena_bomber', 20] execVM 'JangosUtilities\Scripts\spawner.sqf';";
        };
    };
    class JA_104th_OpFor_Spawner_SFA_Dragonfly : 3AS_Droid_Dispenser_F
    {
        displayName = "Droid Dispenser Dragonfly";
        side = 0;
        faction = "104th_Guys_CIS";
        editorSubcategory = "104th_Categ_Utilities_CIS";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        class EventHandlers : DefaultEventhandlers
        {
            Init = "[_this select 0, 'SFA_Dragonfly', 10] execVM 'JangosUtilities\Scripts\spawner.sqf';";
        };
    };
    class JA_104th_OpFor_Spawner_ls_vehicle_hmp : 3AS_Droid_Dispenser_F
    {
        displayName = "Droid Dispenser HMP";
        side = 0;
        faction = "104th_Guys_CIS";
        editorSubcategory = "104th_Categ_Utilities_CIS";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        class EventHandlers : DefaultEventhandlers
        {
            Init = "[_this select 0, 'ls_vehicle_hmp', 10] execVM 'JangosUtilities\Scripts\spawner.sqf';";
        };
    };
    class JA_104th_OpFor_Spawner_3AS_MAF_Gunship_F : 3AS_Droid_Dispenser_F
    {
        displayName = "Droid Dispenser MAF";
        side = 0;
        faction = "104th_Guys_CIS";
        editorSubcategory = "104th_Categ_Utilities_CIS";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        class EventHandlers : DefaultEventhandlers
        {
            Init = "[_this select 0, '3AS_MAF_Gunship_F', 20] execVM 'JangosUtilities\Scripts\spawner.sqf';";
        };
    };
};