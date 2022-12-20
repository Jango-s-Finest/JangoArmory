params ["_vic"];
_vic addAction [
        "Add AI Crewmembers",
        {
            params ["_target", "_caller", "_actionID", "_arguments"];

            private _crew = _target getVariable "AIcrew";
            if !(isNil "_crew") exitWith {systemChat "Crew already created."};
            
            if (_caller isNotEqualTo gunner _target) then {
                _caller setPosASL [0,0,0];
                _caller moveInGunner _target;
            };

            private _crew = units (createVehicleCrew _target);
            _crew apply {
                if (_x isNotEqualTo driver _target) then {
                    _crew = _crew - [_x];
                    deleteVehicle _x
                };
            };
            _crew joinSilent group _caller;

            _target setVariable ["AIcrew", _crew, true];
        },
        nil, 1e-3, false, true, "", "_this in _target", -1, false
    ];
_vic addAction [
        "Remove AI Crewmembers",
        {
            params ["_target", "_caller", "_actionID", "_arguments"];

            private _crew = _target getVariable "AIcrew";
            if (isNil "_crew") exitWith {systemChat "No AI currently created for vehicle."};

            _crew apply {deleteVehicle _x};
            _target setVariable ["AIcrew", nil, true];
        },
        nil, 1e-4, false, true, "", "_this in _target", -1, false
    ];
	
_vic addEventHandler ["GetIn", {
	params ["_vehicle", "_role", "_unit", "_turret"];
	_unit allowDamage false;
}];
/* Oryx Hitboxes are so wanky, you can kill the entire crew without causing any damage to the vehicle itself. */

_vic addEventHandler ["GetOut", {
	params ["_vehicle", "_role", "_unit", "_turret"];
	sleep 1;
	_unit allowDamage true;
}];
/* Leaving the Commander seat spawns you above ground, causing you to fall. By having the Sleep timer, you reach the ground before you become mortal again. */


if (isServer) then {
_vic setVariable ["104thVicShieldStrength", 1000, true];

_vic setVariable ["104thVicShieldOn", 0, true];
};

[_vic, ["HitPart", { 
				_handle = _this spawn { 
				(_this select 0) params ["_targetvehicle", "_shooter", "_projectile", "_position", "_velocity", "_selection", "_ammo", "_vector", "_radius", "_surfaceType", "_isDirect"]; 
				
				_shieldoncheck = _targetvehicle getVariable "104thVicShieldOn";
				if (_shieldoncheck > 0) then {
				
				
				private _r = getPosASL (_targetvehicle); 
				private _sound = "104th_EmptySoundPad" createVehicle _r; 
				_sound attachTo [(_targetvehicle),[0,0,0]]; 


				_damage = 0;
				_damagedone = 0;
				if (_isDirect) then {_damage = (_ammo select 0)} else {_damage = ((_ammo select 1) / 4)};



				if (_damage > 10) then {_damagedone = (_damage / 2)};
				if (_damage > 29) then {_damagedone = _damage};
				if (_damage > 99) then {_damagedone = (_damage / 2)};
				if (_damage > 299) then {_damagedone = _damage};
				
				_lsaatcheck = _ammo;
				_lsaatchecking = "ls_120mm_red_ap";
				if (_isDirect) then {
					if ( _lsaatcheck isEqualTo _lsaatchecking ) then {_damagedone = 850};
				};
				_shieldadjust = _targetvehicle getVariable "104thVicShieldStrength";
				_shieldadjust = (_shieldadjust - _damagedone);
				_targetvehicle setVariable ["104thVicShieldStrength", _shieldadjust, true];

				_shieldhealth = (_shieldadjust / 10);
				if (_damagedone > 0) then { [_targetvehicle, ("Shield Health " + str(_shieldhealth) + "%")] remoteExec ["vehiclechat"]; };
				
				private _vehicletospawn = "oryxshieldfb";
				if (_shieldadjust < 660) then { _vehicletospawn = "oryxshieldhb"; };
				if (_shieldadjust < 330) then { _vehicletospawn = "oryxshieldred"; };

				private _hitflash = _vehicletospawn createVehicle [0,0,0];

				_hitflash attachTo [(_targetvehicle),[0,0,-1]]; 
				_hitflash setDir 0; 
				sleep 0.1; 
				deleteVehicle _hitflash;
				
				};
				
				}; 
			}]] remoteExec ["addEventHandler"];

[_vic] execVM "\JangosVehicles\Script\Shield\OryxShieldAction.sqf";

[_vic] execVM "\JangosVehicles\Script\Shield\VicShieldRegen.sqf";