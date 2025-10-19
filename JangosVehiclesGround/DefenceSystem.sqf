if(isServer)then{
	private["_turret","_range","_incoming","_target","_shooter"];
	private _turret = _this select 0;
	private _range = _this select 1;
	_turret setAnimSpeedCoef 2;
	while{alive _turret}do{
		_incoming = _turret nearObjects["RocketBase",_range];
		_incoming = _incoming + (_turret nearObjects["MissileBase",_range]);
		_incoming = _incoming + (_turret nearObjects["ShellBase",_range]);
		for [{_i = 0}, {_i < (count _incoming)}, {_i = _i + 1}] do {
			_target = _incoming select _i;
			_shooter = ((getShotParents _target) select 0);
			if(side _turret != side _shooter)then{
				_targetBoom = getText (configFile >> "CfgAmmo" >> typeOf _target >> "explosionEffects"); 
				while {(alive _target)} do {
					if ((_target distance _turret < _range) && (!lineIntersects [getPos _turret,getPos _target]) && (random 100 < 85)) then{
						[_targetBoom,(getPos _target)] remoteExec ["createVehicle"];
						"HelicopterExploBig" createVehicle (getPos _target);
						[_target] remoteExec ["deleteVehicle"];
						sleep 15;
					};
					sleep 0.1;
				};
				_i = count _incoming+1;
			};
		};
		sleep 0.5;
	};
};