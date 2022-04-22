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

_vic setVariable ["104thVicShieldStrength", 1000];

[_vic] execVM "\JangosVehicles\Script\Shield\OryxShieldAction.sqf";

[_vic] execVM "\JangosVehicles\Script\Shield\VicShieldRegen.sqf";