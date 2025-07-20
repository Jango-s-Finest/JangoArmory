params["_unit", "_pos", "_mode"];

(vehicle _unit) flyInHeight 1000;

_veh setVariable ["FSN_TARGET_POS", _pos];
_unit setVariable ["FSN_TARGET_POS", _pos];
//hint str(_unit getVariable "FSN_TARGET_POS");

private _combat = combatMode (group _unit);

private _wpFly = (group _unit) addWaypoint [_pos vectorAdd ([(vectorDir _unit) # 0, (vectorDir _unit) # 1, 0] vectorMultiply ((speed _unit) * 10)), 0, 0];
private _wpAppr = group _unit addWaypoint [_pos, 0, 1];

(group _unit) setCurrentWaypoint _wpFly;

_wpAppr setWaypointSpeed "FULL";
_wpFly setWaypointSpeed "FULL";

_wpAppr  setWaypointCombatMode "BLUE";
_wpFly setWaypointCombatMode "BLUE";

_wpAppr setWaypointType "MOVE";
_wpFly setWaypointType "MOVE";
_unit flyInHeight 1000;

while {currentWaypoint (group _unit) == 0} do {sleep 0.1;};

//hint "Terminal Approach";

_unit sideChat "Approaching target.";

while {(_unit distance2D _pos) > 20 * ((speed _unit) / 3.6)} do {sleep 0.01;};

private _veh = vehicle _unit;

private _event = _veh addEventHandler ["Fired", {
	params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];
	_unit = _gunner;
	private _p = (_unit getVariable "FSN_TARGET_POS");
	_p = [_p # 0, _p # 1, (getTerrainHeightASL _p)];
	
	_null = [_projectile, _p, speed _unit] spawn
	{
private _prj = _this select 0;
private _p = _this select 1;
private _s = _this select 2;

private _t1 = time;
private _t2 = time + 4 * (_prj distance [_p # 0, _p # 1, 0]) / _s;
//hint str(_t2 - _t1);
private _pp = getPosASL _prj;
while {alive _prj } do {

	_prj setVelocityTransformation 
	[
_pp,
_p,
[0,0,0],
[0,0,0],
vectorDir _prj,
vectorDir _prj,
[0,0,1],
[0,0,1],
linearConversion [_t1, _t2, time, 0, 1]
	];
};
	};

	if(FSN_Debug) then 
	{
private _tp = _unit getVariable "FSN_TARGET_POS";
private _t = createMarker ["Reference Target 2", _tp];
_t setMarkerType "hd_destroy";
_t setMarkerColor "ColorBlue";
	};
}];

//hint "Engaging";
_unit forceWeaponFire ["FSN_B61_Nuclear_W", _mode];
_unit sideChat "Payload delivered. Brace for impact!";


private _t = ((vectorDir _unit) vectorCrossProduct [0,0,1]);

_wpFly = (group _unit) addWaypoint [_pos vectorAdd ([_t # 0, _t # 1, 0] vectorMultiply ((speed _unit) * 10)), 0, 2];
_wpFly setWaypointSpeed "FULL";
(group _unit) setCurrentWaypoint _wpFly;
_wpFly setWaypointType "MOVE";

sleep 10;
_veh removeEventHandler ["Fired", _event];

(group _unit) setCombatMode _combat;


sleep 60;

private _null = [_unit] execVM "FSN\freestyleScripts\targetClass.sqf"