params ["_vic"];

private _p = getPosASL (_vic);
private _spawn = "BaseShield500m" createVehicle [0,0,0];
_spawn setPosASL _p;
sleep 1;
deleteVehicle _vic;