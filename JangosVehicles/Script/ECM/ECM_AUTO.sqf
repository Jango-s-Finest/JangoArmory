/*Simple ECM System by Firewill */

private _planearray = _this select 0;
private _plane = _planearray select 0;
private _enemyweapon = _planearray select 1;
private _enemy = _planearray select 2;

if (not alive _plane) exitWith {};
/*
new ECM system based on SensorsManagerComponent

if enemy missile has Active/PassiveRadarComponent, Missile will be jammed. if not, missile will be not jammed and warn to player for drop the flares.

*/

private _r = floor random 100;

private _stat = getNumber (configFile >> "CfgVehicles" >> typeof _plane >> "AWS_ECM_STAT");	

private _missile_sensor_list = (configProperties [configFile >> "cfgammo" >> _enemyweapon >> "Components" >> "SensorsManagerComponent" >> "Components", "isClass _x"]) apply {gettext (_x >> "componentType")};
private _missile_sensor_act = _missile_sensor_list find "ActiveRadarSensorComponent";
private _missile_sensor_pas = _missile_sensor_list find "PassiveRadarSensorComponent";
if (_missile_sensor_act >= 0 or _missile_sensor_pas >= 0) then
{
	if (_r > _stat) exitWith {_plane vehiclechat "SYSTEM: JAMMING FAILED - DROP COUNTERMEASURE NOW";};
	_mssl = nearestobject [_enemy, _enemyweapon];

	waitUntil {_mssl distance _plane < 1500};

	_ewdir = getdir _mssl;
	_ewdir = _ewdir - 180;
	_mssl setdir _ewdir;
	sleep 1;
	_plane vehiclechat "SYSTEM: ENEMY MISSILE JAMMED";
	deletevehicle _mssl;
}
else
{
	_plane vehiclechat "SYSTEM: IR MSSL DETECTED - DROP COUNTERMEASURE NOW";
};
