private["_console","_vehicle","_dir","_veh","_time","_spawned"];
_console = _this select 0;
_vehicle = _this select 1;
_time = _this select 2;
_spawned = [];
if(isServer)then{
	while {alive _console} do {
		if (count _spawned < 5) then {
			_dir = getDir _console;         
			_veh = createVehicle [_vehicle,_console modelToWorldWorld [0,0,15],[],0,"FLY"];
			createVehicleCrew _veh;   
			_veh setDir _dir; 
			_spawned pushBack _veh;
		};
		{
			if (!alive _x) then {
				_spawned deleteAt (_spawned find _x);
			};
		} forEach _spawned;
		sleep _time;
	};
};