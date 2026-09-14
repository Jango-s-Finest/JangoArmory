private["_dir","_veh"];

private _console = _this select 0;
private _vehicle = _this select 1;
private _time = _this select 2;

private _spawned = [];
private _maxSpawned = 5;
private _cleanupEvery = 10;
private _cleanupCounter = 0;

if (isServer && {!isNull _console} && {_vehicle != ""}) then {
    while {alive _console} do {
        if (_cleanupCounter >= _cleanupEvery) then {
            _cleanupCounter = 0;
            _spawned = _spawned select {alive _x};
        };

        if (count _spawned <= _maxSpawned) then {
            _dir = getDir _console;
            _veh = createVehicle [_vehicle, _console modelToWorld [0,0,15], [], 0, "FLY"];

            if (!isNull _veh) then {
                createVehicleCrew _veh;
                _veh setDir _dir;
                _spawned pushBack _veh;
            };
        };

        _cleanupCounter = _cleanupCounter + 1;
        sleep _time;
    };
};
