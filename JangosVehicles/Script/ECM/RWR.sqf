/* RWR Info System By Firewill */

Private ["_planearray","_plane","_enemy","_e_dir","_distance"];

_planearray = _this select 0;
_plane = _planearray select 0;
_enemyweapon = _planearray select 1;
_enemy = _planearray select 2;
_pilot = driver _plane;
_enemyvehicle = typeOf _enemy;
_vehiclename = getText (configFile >> "CfgVehicles" >> _enemyvehicle >> "displayName");

if (not alive _plane) exitWith {};

_e_dir = [_plane, _enemy] call BIS_fnc_dirTo;
_distance = _plane distance2D _enemy;

_plane vehiclechat format ["SYSTEM-ENEMY:%1 / WEAPON:%2 / DIR:%3 / DISTANCE:%4",_vehiclename,_enemyweapon,_e_dir,_distance];



