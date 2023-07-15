private ["_vehicle", "_ammo", "_magazine", "_projectile", "_blastPos", "_yield", "_valid", "_mode", "_dud"];


_ammo = param [0, "any"];
_magazine = param [1, "any"];
_projectile = param [2];
_vehicle = param[3];
_mode = param[4];

if ((_ammo != "FSN_B61_Nuclear") && (_ammo != "FSN_Nuclear_Missile") && (_ammo != "FSN_Nuclear_Cruise_Missile") && (_ammo != "FSN_B83_Nuclear") && (_ammo != "FSN_Diamondback_Missile")) exitWith{};

_yield = switch (_mode) do
		{
			case "A": {0.3};
			case "B": {1.5};
			case "C": {10};
			case "D": {50};
			case "E": {1};
			case "F": {5};
			case "G": {15};
			case "H": {25};
			case "Cruise" : {100};
			case "U" : {50};
			case "V" : {150};
			case "W" : {350};
			case "X" : {1200};
			case "LoalDistance" : {0.75};
			default {1};
		};


_valid = switch (_magazine) do
		{
			case "FSN_B61_Nuclear_M": {true};
			case "FSN_B83_Nuclear_M": {true};
			case "FSN_Nuclear_Missile_M": {true};
			case "FSN_Nuclear_Cruise_Missile_M": {true};
			case "FSN_Diamondback_Missile_M" : {true};
			default {false};
		};
		

if ((_yield > 0) and _valid and (alive _projectile))
then 
{
	_vehicle vehicleChat format ["Payload away! Yield %1 kT", _yield];
	//_vehicle vehicleChat format ["Mode: %1", _mode];
	
	0 = [_vehicle, _projectile] spawn 
	{
		while {alive (_this select 1)} do 
		{	
			private _d = (_this select 1) distance (_this select 0);
			(_this select 0) vehicleChat format ["Distance to payload: %1 m", _d];
			sleep 1;
		};
	};
	_dud = getPos _projectile;
	while {alive _projectile} do 
	{
		_blastPos = _dud;
		_dud = getPos _projectile;
		//_vehicle vehicleChat format ["%1", _blastPos];	
	};
	[_blastPos, _yield, false, true, 2] execVM "FSN\freestyleNuke\iniNuke.sqf";
	
	
	private _loc = nearestLocations [_blastPos, ["NameCity", "NameVillage", "NameCityCapital", "Name"], 2500];
	
	if((count _loc) == 0) then 
	{
		_vehicle vehicleChat format ["Detonation at %1", _blastPos];
	}
	else
	{
		_loc = _loc # 0;
		private _dir = (locationPosition _loc) getDir _blastPos;
		private _compass = switch ((floor((_dir + 23.5) / 45)) mod 8) do
							{
								case 0: {"north"};
								case 1: {"north-east"};
								case 2: {"east"};
								case 3: {"south-east"};
								case 4: {"south"};
								case 5: {"south-west"};
								case 6: {"west"};
								case 7: {"north-west"};
								default {"TEST"};
							};
		_vehicle vehicleChat format ["Detonation %1 of %2", _compass, text _loc];
	};
	
};
