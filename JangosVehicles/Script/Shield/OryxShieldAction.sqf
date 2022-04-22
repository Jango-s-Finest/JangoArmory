params ["_vic"];
waitUntil { sleep 1; _shieldcheck = _vic getVariable "104thVicShieldStrength"; _shieldcheck > 0 };
_vic addAction [
        "Enable Shield",
        {
			params ["_target", "_caller", "_actionId", "_arguments"];
			
			[_target, ["shield_bootup", 300, 1, 1]] remoteExec ["say3D"];
            (_target) removeAction (_actionId);
			
            private _shield = "oryxshieldvo" createVehicle [0,0,0];
            _shield attachTo [_target,[0,0,-1]];
            _shield setDir 0;
			
			private _flash = "oryxshieldred" createVehicle [0,0,0];
            _flash attachTo [_target,[0,0,-1]];
            _flash setDir 0;
			_flash hideObjectGlobal true;
			
			for "_i" from 0 to 5 do {
            _flash hideObjectGlobal false;
            sleep 0.1;
            _flash hideObjectGlobal true;
            sleep 0.1;
            };
			
            
            
            
            _target allowDamage false;
            
            _index = _target addEventHandler ["HitPart", { 
				_handle = _this spawn { 
				(_this select 0) params ["_targetvehicle", "_shooter", "_projectile", "_position", "_velocity", "_selection", "_ammo", "_vector", "_radius", "_surfaceType", "_isDirect"]; 
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
				
				
				_shieldadjust = _targetvehicle getVariable "104thVicShieldStrength";
				_shieldadjust = (_shieldadjust - _damagedone);
				_targetvehicle setVariable ["104thVicShieldStrength", _shieldadjust];
				
				_shieldhealth = (_shieldadjust / 10);
				if (_damagedone > 0) then { _targetvehicle vehiclechat ("Shield Health " + str(_shieldhealth) + "%"); };
				
				private _vehicletospawn = "oryxshieldfb";
				if (_shieldadjust < 660) then { _vehicletospawn = "oryxshieldhb"; };
				if (_shieldadjust < 330) then { _vehicletospawn = "oryxshieldred"; };
				
				private _hitflash = _vehicletospawn createVehicle [0,0,0];
				
				_hitflash attachTo [(_targetvehicle),[0,0,-1]]; 
				_hitflash setDir 0; 
				sleep 0.1; 
				deleteVehicle _hitflash;
				
				
				}; 
			}];
            
			
            waitUntil { sleep 1; _shieldcheck = _target getVariable "104thVicShieldStrength"; _shieldcheck <= 0 };
			deleteVehicle _shield;
            [_target, ["shield_broken", 300, 1, 1]] remoteExec ["say3D"];
            
            _target allowDamage true;
            
            _target removeEventHandler ["HitPart", _index];
            
            
            for "_i" from 0 to 5 do {
            _flash hideObjectGlobal false;
            sleep 0.1;
            _flash hideObjectGlobal true;
            sleep 0.1;
            };
			
            deleteVehicle _flash;
            
            sleep 60;
            [_target] execVM "\JangosVehicles\Script\Shield\OryxShieldAction.sqf";
        },
        nil, 1e-2, false, true, "", "_this in _target", -1, false
];