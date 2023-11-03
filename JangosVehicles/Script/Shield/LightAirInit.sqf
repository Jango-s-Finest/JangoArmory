params ["_vic"];

if (isServer) then {
_vic setVariable ["104thVicShieldStrength", 500, true];

_vic setVariable ["104thVicShieldOn", 0, true];
};

_vic addEventHandler ["HitPart", { 
				_handle = _this spawn { 
				(_this select 0) params ["_targetvehicle", "_shooter", "_projectile", "_position", "_velocity", "_selection", "_ammo", "_vector", "_radius", "_surfaceType", "_isDirect"]; 
				
				_shieldoncheck = _targetvehicle getVariable "104thVicShieldOn";
				if (_shieldoncheck > 0) then {
				
				private _r = getPosASL (_targetvehicle); 
				
				if (isServer) then {
				private _sound = "104th_EmptySoundPad" createVehicle _r; 
				_sound attachTo [(_targetvehicle),[0,0,0]]; 
				};


				_damage = 0;
				_damagedone = 0;
				if (_isDirect) then {_damage = (_ammo select 0)} else {_damage = ((_ammo select 1) / 4)};



				if (_damage > 0) then {_damagedone = (_damage / 2)};
				if (_damage > 29) then {_damagedone = _damage};
				
				_lsaatcheck = _ammo;
				_lsaatchecking = "ls_120mm_red_ap";
				if (_isDirect) then {
					if ( _lsaatcheck isEqualTo _lsaatchecking ) then {_damagedone = 850};
				};
				_shieldadjust = _targetvehicle getVariable "104thVicShieldStrength";
				_shieldadjust = (_shieldadjust - _damagedone);
				_targetvehicle setVariable ["104thVicShieldStrength", _shieldadjust, true];

				_shieldhealth = (_shieldadjust / 5);
				if (_damagedone > 0) then { [_targetvehicle, ("Shield Health " + str(_shieldhealth) + "%")] remoteExec ["vehiclechat"]; };
				
				};
				
				}; 
}];

/* After the ACE Update of 2023 October, explosive weapons would injure/kill crew even if they do not pass through the shield. */

_vic addEventHandler ["GetIn", {
	params ["_vehicle", "_role", "_unit", "_turret"];
	_unit allowDamage false;
}];

_vic addEventHandler ["GetOut", {
	params ["_vehicle", "_role", "_unit", "_turret"];
	_unit allowDamage true;
}];

[_vic] execVM "\JangosVehicles\Script\Shield\LightAirAction.sqf";

[_vic] execVM "\JangosVehicles\Script\Shield\PlaneShieldRegen.sqf";