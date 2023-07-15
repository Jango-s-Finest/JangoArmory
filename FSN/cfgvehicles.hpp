class eventhandlers;
class CfgVehicles
{
	class Air;
	class Plane: Air
	{
		class EventHandlers
		{
			fired = "[_this select 4, _this select 5, _this select 6, _this select 0, _this select 3] execVM '\FSN\freestyleNuke\freestyleNukeLaunched.sqf'"; 
		};
	};
};