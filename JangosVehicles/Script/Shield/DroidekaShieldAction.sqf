params ["_vic"];
waitUntil { sleep 1; _shieldcheck = _vic getVariable "104thDroidekaShieldStrength"; _shieldcheck > 0 };
if (isServer) then {
[_vic, ["shield_bootup", 200, 1, 1]] remoteExec ["say3D"];

private _shield = "droidekashieldvo" createVehicle [0,0,0];
_shield attachTo [_vic,[0,0.1,1]];
_shield setDir 0;

for "_i" from 0 to 5 do {
    private _flash = "droidekashieldred" createVehicle [0,0,0];
	_flash attachTo [_vic,[0,0.1,1]];
	_flash setDir 0;
	sleep 0.1;
	deleteVehicle _flash;
	sleep 0.1;
};
};

_vic setVariable ["EHID", 0, true];

_vic allowDamage false;

[_vic, ["HitPart", { 
	_handle = _this spawn { 
	(_this select 0) params ["_targetvehicle", "_shooter", "_projectile", "_position", "_velocity", "_selection", "_ammo", "_vector", "_radius", "_surfaceType", "_isDirect"]; 
	_targetvehicle setVariable ["EHID", _thisEventHandler];
	private _r = getPosASL (_targetvehicle); 
	private _sound = "104th_EmptySoundPad" createVehicle _r; 
	_sound attachTo [(_targetvehicle),[0,0,0]]; 


	_damage = 0;
	_damagedone = 3;
	if (_isDirect) then {_damage = (_ammo select 0)} else {_damage = ((_ammo select 1) / 4)};

	if (_damage < 40) then {_damagedone = (_damage / 3)};
	if (_damage > 39) then {_damagedone = _damage};


	_shieldadjust = _targetvehicle getVariable "104thDroidekaShieldStrength";
	_shieldadjust = (_shieldadjust - _damagedone);
	_targetvehicle setVariable ["104thDroidekaShieldStrength", _shieldadjust];

	_shieldhealth = (_shieldadjust / 3);
	if (_damagedone > 0) then { _targetvehicle vehiclechat ("Shield Health " + str(_shieldhealth) + "%"); };
	
	if (_damagedone > 299) then {
		_targetvehicle allowDamage true;
		_targetvehicle setDamage 1;
		
	};
	}; 
}]] remoteExec ["addEventHandler"];


waitUntil { sleep 1; _shieldcheck = _vic getVariable "104thDroidekaShieldStrength"; _shieldcheck <= 0 };
deleteVehicle _shield;
[_vic, ["shield_broken", 200, 1, 1]] remoteExec ["say3D"];

_vic allowDamage true;

_index getVariable "EHID";
_vic removeEventHandler ["HitPart", _index];
[_vic, ["HitPart", _index]] remoteExec [removeEventHandler];

if (isServer) then {
for "_i" from 0 to 5 do {
    private _flash = "droidekashieldred" createVehicle [0,0,0];
	_flash attachTo [_vic,[0,0.1,1]];
	_flash setDir 0;
	sleep 0.1;
	deleteVehicle _flash;
	sleep 0.1;
};
};

sleep 30;
[_vic] execVM "\JangosVehicles\Script\Shield\DroidekaShieldAction.sqf";