/*Simple ECM System by Firewill */

private _vehiclearray = _this select 0;
private _vehicle = _vehiclearray select 0;
private _enemyweapon = _vehiclearray select 1;
private _enemy = _vehiclearray select 2;

if (not alive _vehicle) exitWith {};

_mssl = nearestobject [_enemy, _enemyweapon];

waitUntil {_mssl distance _vehicle < 35};
private _x = getPosASL (_this select 0);
private _shield = "oryxshield" createVehicle _x;
_shield attachTo [_vehicle,[0,0,-1]];
_shield setDir 0;
sleep 10;
deleteVehicle _shield;
