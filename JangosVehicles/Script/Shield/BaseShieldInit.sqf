params ["_baseshield"];

_baseshield setVariable ["104thBaseShieldStrength", 1000000];

[_baseshield, ["shield_bootup", 2000, 1, 1]] remoteExec ["say3D"];

_baseshield allowDamage false;

_index = _baseshield addEventHandler ["HitPart", { 
	_handle = _this spawn { 
	(_this select 0) params ["_targetvehicle", "_shooter", "_projectile", "_position", "_velocity", "_selection", "_ammo", "_vector", "_radius", "_surfaceType", "_isDirect"]; 

	_damage = 0;
	_damagedone = 0;
	if (_isDirect) then {_damage = (_ammo select 0)} else {_damage = ((_ammo select 1) / 4)};

	if (_damage > 99) then {_damagedone = _damage};
	systemChat ("Damage " + str(_damagedone));

	_shieldadjust = _targetvehicle getVariable "104thBaseShieldStrength";
	_shieldadjust = (_shieldadjust - _damagedone);
	_targetvehicle setVariable ["104thBaseShieldStrength", _shieldadjust];
	
	systemChat ("Shield strength " + str(_shieldadjust));
	
	if (_damagedone < 1) then {
		private _r = getPosASL (_targetvehicle); 
		private _sound = "104th_EmptySoundPad" createVehicle _r; 
		_sound attachTo [(_targetvehicle),[0,0,0]]; 
		systemChat ("Small sound");
	};
	
	
    if (_damagedone > 0) then {
		private _r = getPosASL (_targetvehicle); 
		private _sound = "104th_GiantEmptySoundPad" createVehicle _r; 
		_sound attachTo [(_targetvehicle),[0,0,0]];
		systemChat ("Big sound");
	};
	
	}; 
}];


waitUntil { sleep 1; _shieldcheck = _baseshield getVariable "104thBaseShieldStrength"; _shieldcheck <= 0 };

[_baseshield, ["IonCannon1", 4000, 1, 1]] remoteExec ["say3D"];

_baseshield allowDamage true;

_baseshield removeEventHandler ["HitPart", _index];

deleteVehicle _baseshield;