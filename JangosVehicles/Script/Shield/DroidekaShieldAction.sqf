params ["_vic"];
waitUntil { sleep 1; _shieldcheck = _vic getVariable "104thDroidekaShieldStrength"; _shieldcheck > 0 };
[_vic, ["shield_bootup", 200, 1, 1]] remoteExec ["say3D"];

private _shield = "droidekashieldvo" createVehicle [0,0,0];
_shield attachTo [_vic,[0,0.1,1]];
_shield setDir 0;

private _flash = "droidekashieldred" createVehicle [0,0,0];
_flash attachTo [_vic,[0,0.1,1]];
_flash setDir 0;
_flash hideObjectGlobal true;

for "_i" from 0 to 5 do {
    _flash hideObjectGlobal false;
    sleep 0.1;
    _flash hideObjectGlobal true;
    sleep 0.1;
};


_vic allowDamage false;

_index = _vic addEventHandler ["HitPart", { 
	_handle = _this spawn { 
	(_this select 0) params ["_targetvehicle", "_shooter", "_projectile", "_position", "_velocity", "_selection", "_ammo", "_vector", "_radius", "_surfaceType", "_isDirect"]; 
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

	private _vehicletospawn = "droidekashieldfb";
	if (_shieldadjust < 210) then { _vehicletospawn = "droidekashieldhb"; };
	if (_shieldadjust < 110) then { _vehicletospawn = "droidekashieldred"; };

	private _hitflash = _vehicletospawn createVehicle [0,0,0];

	_hitflash attachTo [(_targetvehicle),[0,0.1,1]]; 
	_hitflash setDir 0; 
	sleep 0.1; 
	deleteVehicle _hitflash;
	
	if (_damagedone > 299) then {
		_targetvehicle allowDamage true;
		_targetvehicle setDamage 1;
		
	};
	

	}; 
}];


waitUntil { sleep 1; _shieldcheck = _vic getVariable "104thDroidekaShieldStrength"; _shieldcheck <= 0 };
deleteVehicle _shield;
[_vic, ["shield_broken", 200, 1, 1]] remoteExec ["say3D"];

_vic allowDamage true;

_vic removeEventHandler ["HitPart", _index];

for "_i" from 0 to 5 do {
_flash hideObjectGlobal false;
sleep 0.1;
_flash hideObjectGlobal true;
sleep 0.1;
};

deleteVehicle _flash;

sleep 30;
[_vic] execVM "\JangosVehicles\Script\Shield\DroidekaShieldAction.sqf";