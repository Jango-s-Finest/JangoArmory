private["_console","_vehicle","_dir","_veh","_time","_spawned","_maxSpawned","_cleanupEvery","_cleanupCounter"];

_console = _this select 0;
_vehicle = _this select 1;
_time = _this select 2;

_spawned = [];
_maxSpawned = 5;
_cleanupEvery = 10;
_cleanupCounter = 0;

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