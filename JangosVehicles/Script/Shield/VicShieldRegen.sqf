params ["_vic"];

if (isServer) then {
while { alive _vic } do {
	
	_shieldregen = _vic getVariable "104thVicShieldStrength";
	
	if ( _shieldregen < 1000 ) then { 
		_shieldregen = _shieldregen + 100;
		if ( _shieldregen > 1000 ) then { _shieldregen = 1000; };
		_vic setVariable ["104thVicShieldStrength", _shieldregen, true];
		_shieldhealth = ( _shieldregen / 10 );
		[_vic, ("Shield Health raised to " + str(_shieldhealth) + "%")] remoteExec ["vehiclechat"];
	};
	
	sleep 30;
	
};
};