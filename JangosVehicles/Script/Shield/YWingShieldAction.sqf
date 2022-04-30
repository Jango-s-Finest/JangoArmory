params ["_vic"];
waitUntil { sleep 1; _shieldcheck = _vic getVariable "104thVicShieldStrength"; _shieldcheck > 0 };
_vic addAction [
        "Enable Shield",
        {
			params ["_target", "_caller", "_actionId", "_arguments"];
			
			[_target, ["shield_bootup", 300, 1, 1]] remoteExec ["say3D"];
            (_target) removeAction (_actionId);
			
            private _shield = "ywingshieldvo" createVehicle [0,0,0];
            _shield attachTo [_target,[0,-3.5,-0.35]];
            _shield setDir 0;
			
			for "_i" from 0 to 5 do {
            private _flash = "ywingshieldred" createVehicle [0,0,0];
            _flash attachTo [_target,[0,-3.5,-0.35]];
            _flash setDir 0;
            sleep 0.1;
            deleteVehicle _flash;
            sleep 0.1;
            };
			
            
            _target setVariable ["EHID", 0, true];
            
            _target allowDamage false;
            
            [_target, ["HitPart", { 
				_handle = _this spawn { 
				(_this select 0) params ["_targetvehicle", "_shooter", "_projectile", "_position", "_velocity", "_selection", "_ammo", "_vector", "_radius", "_surfaceType", "_isDirect"]; 
				_targetvehicle setVariable ["EHID", _thisEventHandler, true];
				private _r = getPosASL (_targetvehicle); 
				private _sound = "104th_EmptySoundPad" createVehicle _r; 
				_sound attachTo [(_targetvehicle),[0,0,0]]; 


				_damage = 0;
				_damagedone = 0;
				if (_isDirect) then {_damage = (_ammo select 0)} else {_damage = ((_ammo select 1) / 4)};



				if (_damage > 0) then {_damagedone = (_damage / 2)};
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

				_shieldhealth = (_shieldadjust / 5);
				if (_damagedone > 0) then { [_targetvehicle, ("Shield Health " + str(_shieldhealth) + "%")] remoteExec ["vehiclechat"]; };
				
				private _vehicletospawn = "ywingshieldfb";
				if (_shieldadjust < 330) then { _vehicletospawn = "ywingshieldhb"; };
				if (_shieldadjust < 115) then { _vehicletospawn = "ywingshieldred"; };
				
				private _hitflash = _vehicletospawn createVehicle [0,0,0];
				
				_hitflash attachTo [(_targetvehicle),[0,-3.5,-0.35]]; 
				_hitflash setDir 0; 
				sleep 0.1; 
				deleteVehicle _hitflash;
				}; 
			}]] remoteExec ["addEventHandler"];
            
			
            waitUntil { sleep 1; _shieldcheck = _target getVariable "104thVicShieldStrength"; _shieldcheck <= 0 };
			deleteVehicle _shield;
            [_target, ["shield_broken", 300, 1, 1]] remoteExec ["say3D"];
            
            _target allowDamage true;
            
			_index getVariable "EHID";
            [_target, ["HitPart", _index]] remoteExec ["removeEventHandler"];
            
            for "_i" from 0 to 5 do {
            private _flash = "ywingshieldred" createVehicle [0,0,0];
            _flash attachTo [_target,[0,-3.5,-0.35]];
            _flash setDir 0;
            sleep 0.1;
            deleteVehicle _flash;
            sleep 0.1;
            };
            
            sleep 60;
            [_target] execVM "\JangosVehicles\Script\Shield\YWingShieldAction.sqf";
        },
        nil, 1e-2, false, true, "", "_this in _target", -1, false
];
