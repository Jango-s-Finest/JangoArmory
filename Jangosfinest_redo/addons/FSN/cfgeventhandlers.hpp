class Extended_FiredBIS_Eventhandlers
{
    class Plane
    {
		fired = "[_this select 4, _this select 5, _this select 6, _this select 0, _this select 3] execVM '\JA\jangos_Armory\addons\FSN\freestyleNuke\freestyleNukeLaunched.sqf'";
    };
	
	class Helicopter
    {
		fired = "[_this select 4, _this select 5, _this select 6, _this select 0, _this select 3] execVM '\JA\jangos_Armory\addons\FSN\freestyleNuke\freestyleNukeLaunched.sqf'";
    };
};

class Extended_Init_Eventhandlers
{
	class Plane
	{
		init = "[_this select 0] execVM '\JA\jangos_Armory\addons\FSN\freestyleScripts\targetClass.sqf'";
	};
	
	class Helicopter
	{
		init = "[_this select 0] execVM '\JA\jangos_Armory\addons\FSN\freestyleScripts\targetClass.sqf'";
	};
};

class Extended_PreInit_EventHandlers {
    class FSN_ininitalize_settings {
        init = "call compile preprocessFileLineNumbers '\JA\jangos_Armory\addons\FSN\freestyleScripts\FSN_settings.sqf'";
    };
};
