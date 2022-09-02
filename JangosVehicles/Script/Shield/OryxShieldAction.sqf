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
			
			for "_i" from 0 to 5 do {
            private _flash = "oryxshieldred" createVehicle [0,0,0];
            _flash attachTo [_target,[0,0,-1]];
            _flash setDir 0;
            sleep 0.1;
            deleteVehicle _flash;
            sleep 0.1;
            };
			
            _target allowDamage false;
            
            _target setVariable ["104thVicShieldOn", 1, true];
            
			
            waitUntil { sleep 1; _shieldcheck = _target getVariable "104thVicShieldStrength"; _shieldcheck <= 0 };
			deleteVehicle _shield;
            [_target, ["shield_broken", 300, 1, 1]] remoteExec ["say3D"];
            
            _target allowDamage true;
            
			_target setVariable ["104thVicShieldOn", 0, true];
            
            for "_i" from 0 to 5 do {
            private _flash = "oryxshieldred" createVehicle [0,0,0];
            _flash attachTo [_target,[0,0,-1]];
            _flash setDir 0;
            sleep 0.1;
            deleteVehicle _flash;
            sleep 0.1;
            };
            
            sleep 60;
            [_target] execVM "\JangosVehicles\Script\Shield\OryxShieldAction.sqf";
        },
        nil, 1e-2, false, true, "", "_this in _target", -1, false
];