if(isServer)then{
	private["_droid","_range","_vehicles","_target"];
	private _droid = _this select 0;
	private _range = _this select 1;
	while{alive _droid}do{
		_vehicles = _droid nearEntities [["Air", "LandVehicle"],_range];
		for [{_i = 0}, {_i < (count _vehicles)}, {_i = _i + 1}] do {
			_target = _vehicles select _i;
			while {((damage _target) >= 0.01)} do {
				if ((_target distance _droid < _range) && (!lineIntersects [getPos _droid,getPos _target])) then{
					[_target, (damage _target)-0.01] remoteExec ["setDamage"];
					sleep 0.5;
				};
			};
			while {((fuel _target) <= 0.99)} do {
				if ((_target distance _droid < _range) && (!lineIntersects [getPos _droid,getPos _target])) then{
					[_target, (fuel _target)+0.01] remoteExec ["setFuel"];
					sleep 0.5;
				};
			};
			_i = count _vehicles+1;
		};
		sleep 0.5;
	};
};