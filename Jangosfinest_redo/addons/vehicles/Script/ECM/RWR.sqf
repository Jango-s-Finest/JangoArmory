/* RWR Info System By Firewill */


private _planearray = _this select 0;
private _plane = _planearray select 0;
_enemyweapon = _planearray select 1;
private _enemy = _planearray select 2;
_pilot = driver _plane;
_enemyvehicle = typeOf _enemy;
_vehiclename = getText (configFile >> "CfgVehicles" >> _enemyvehicle >> "displayName");

if (not alive _plane) exitWith {};

private _e_dir = [_plane, _enemy] call BIS_fnc_dirTo;
private _distance = _plane distance2D _enemy;

_plane vehicleChat format ["SYSTEM-ENEMY:%1 / WEAPON:%2 / DIR:%3 / DISTANCE:%4",_vehiclename,_enemyweapon,_e_dir,_distance];



