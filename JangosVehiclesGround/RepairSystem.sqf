if(isServer)then{
	private["_droid","_range","_vehicles","_target"];
	private _droid = _this select 0;
	private _range = _this select 1;
	_health = 0;
	_fuel = 1;
	[_droid, 120000] call ace_rearm_fnc_makeSource;
	[_droid, 120000] call ace_rearm_fnc_setSupplyCount;
	while{alive _droid}do{
		_vehicles = _droid nearEntities [["Air", "LandVehicle"],_range];
		for [{_i = 0}, {_i < (count _vehicles)}, {_i = _i + 1}] do {
			_target = _vehicles select _i;
			_health = damage _target;
			while {(_health >= 0.00) &&(_target distance _droid < _range)} do {
				if ((_target distance _droid < _range) && (!lineIntersects [getPos _droid,getPos _target])) then{
					if(_health <= damage _target) then {
						_health = damage _target;
					};
					_health = _health - 0.01;
					[_target, (_health)] call ace_repair_fnc_setDamage;
					sleep 0.5;
				};
			};
			[_target, 0] remoteExec ["setDamage",0];
			_fuel = fuel _target;
			while {(_fuel <= 1)&&(_target distance _droid < _range)} do {
				if ((_target distance _droid < _range) && (!lineIntersects [getPos _droid,getPos _target])) then{
					if(_fuel >= fuel _target) then {
						_fuel = fuel _target;
					};
					_fuel = _fuel + 0.01;
					[_target, _fuel] remoteExec ["setFuel"];
					sleep 0.5;
				};
			};
			[_target, 1] remoteExec ["setFuel",0];

		};
		sleep 0.5;
	};
};