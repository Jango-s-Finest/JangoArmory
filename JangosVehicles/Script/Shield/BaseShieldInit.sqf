params ["_baseshield"];

_baseshield setVariable ["104thBaseShieldStrength", 100000];

[_baseshield, ["shield_bootup", 2000, 1, 1]] remoteExec ["say3D"];

private _flash = "BaseShield100mRed" createVehicle [0,0,0];
_flash attachTo [_baseshield,[0,0,0]];
_flash setDir 0;
_flash hideObjectGlobal true;

for "_i" from 0 to 5 do {
    _flash hideObjectGlobal false;
    sleep 0.1;
    _flash hideObjectGlobal true;
    sleep 0.1;
};


_baseshield allowDamage false;

_index = _baseshield addEventHandler ["HitPart", { 
	_handle = _this spawn { 
	(_this select 0) params ["_targetvehicle", "_shooter", "_projectile", "_position", "_velocity", "_selection", "_ammo", "_vector", "_radius", "_surfaceType", "_isDirect"]; 
	private _r = getPosASL (_targetvehicle); 
	private _sound = "104th_EmptySoundPad" createVehicle _r; 
	_sound attachTo [(_targetvehicle),[0,0,0]]; 

	_damage = 0;
	_damagedone = 0;
	if (_isDirect) then {_damage = (_ammo select 0)} else {_damage = ((_ammo select 1) / 4)};

	
	if (_damage > 99) then {_damagedone = _damage};
	systemChat ("damage " + str(_damagedone));

	_shieldadjust = _targetvehicle getVariable "104thBaseShieldStrength";
	_shieldadjust = (_shieldadjust - _damagedone);
	_targetvehicle setVariable ["104thBaseShieldStrength", _shieldadjust];
	
	
	if (_damagedone < 1) then {
		private _r = getPosASL (_targetvehicle); 
		private _sound = "104th_EmptySoundPad" createVehicle _r; 
		_sound attachTo [(_targetvehicle),[0,0,0]]; 
	};
	
	
    if (_damagedone > 0) then {
		private _r = getPosASL (_targetvehicle); 
		private _sound = "104th_GiantEmptySoundPad" createVehicle _r; 
		_sound attachTo [(_targetvehicle),[0,0,0]];
		private _vehicletospawn = "BaseShield100mFB";
		if (_shieldadjust < 66000) then { _vehicletospawn = "BaseShield100mHB"; };
		if (_shieldadjust < 33000) then { _vehicletospawn = "BaseShield100mRed"; };

		private _hitflash = _vehicletospawn createVehicle [0,0,0];

		_hitflash attachTo [(_targetvehicle),[0,0.1,1]]; 
		_hitflash setDir 0; 
		sleep 0.1; 
		deleteVehicle _hitflash;
	
	};
	

	}; 
}];


waitUntil { sleep 1; _shieldcheck = _baseshield getVariable "104thBaseShieldStrength"; _shieldcheck <= 0 };

[_baseshield, ["IonCannon1", 4000, 1, 1]] remoteExec ["say3D"];

_baseshield allowDamage true;

_baseshield removeEventHandler ["HitPart", _index];

for "_i" from 0 to 5 do {
_flash hideObjectGlobal false;
sleep 0.1;
_flash hideObjectGlobal true;
sleep 0.1;
};

_flash hideObjectGlobal false;

deleteVehicle _baseshield;

deleteVehicle _flash;