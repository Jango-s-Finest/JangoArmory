private["_turret","_range","_incoming","_target","_shooter"];
_turret = _this select 0;
_range = _this select 1;
_turret setAnimSpeedCoef 2;
while{alive _turret}do{
	_incoming = _turret nearObjects["RocketBase",_range];
	_incoming = _incoming + (_turret nearObjects["MissileBase",_range]);
	_incoming = _incoming + (_turret nearObjects["ShellBase",_range]);
	for [{_i = 0}, {_i < (count _incoming)}, {_i = _i + 1}] do {
		_target = _incoming select _i;
		_shooter = ((getShotParents _target) select 0);
		if(side _turret != side _shooter)then{
			_fromTarget = _target getDir _turret;
			_dirTarget = direction _target;
			_targetBoom = getText (configFile >> "CfgAmmo" >> typeOf _target >> "explosionEffects"); 
			_shooter = ((getShotParents _target) select 0);
			while {(alive _target)} do {
				_turret doWatch _target;
				_turret fireAtTarget[_target,(currentWeapon _turret)];
				sleep 0.2;
				if ((_target distance _turret < _range) && (_target distance _turret > 100) && (!lineIntersects [getPos _turret,getPos _target]) && (random 100 < 10)) then{
					_targetBoom createVehicle (getPos _target);
					"HelicopterExploBig" createVehicle (getPos _target);
					if(isServer)then{
						deleteVehicle _target;
					};
					sleep 0.2;
				};
			};
			_i = count _incoming+1;
		};
	};
	sleep 1;
};