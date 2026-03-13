if(isServer)then{
	private["_console","_vehicle","_dir","_veh","_time"];
	_console = _this select 0;
	_vehicle = _this select 1;
	_time = _this select 2;
	while {alive _console} do {
		_dir = getDir _console;         
		_veh = createVehicle [_vehicle,_console modelToWorldWorld [0,0,15],[],0,"FLY"];
		createVehicleCrew _veh;   
		_veh setDir _dir; 
		sleep _time;
	};
};