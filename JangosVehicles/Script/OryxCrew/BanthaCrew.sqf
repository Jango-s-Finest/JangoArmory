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
	
_vic removeWeaponGlobal "212th_autocannon_Z20_HBB";
_vic addMagazineGlobal "3AS_300Rnd_SabreMG_Mag","3AS_300Rnd_SabreMG_Mag","3AS_300Rnd_SabreMG_Mag","3AS_300Rnd_SabreMG_Mag","3AS_300Rnd_SabreMG_Mag","3AS_300Rnd_SabreMG_Mag","3AS_300Rnd_SabreMG_Mag","3AS_300Rnd_SabreMG_Mag","3AS_300Rnd_SabreMG_Mag","3AS_300Rnd_SabreMG_Mag","3AS_300Rnd_SabreMG_Mag";
_vic addWeaponGlobal "3AS_Sabre_MG";