params ["_vic"];

while { alive _vic } do {
	
	_shieldregen = _vic getVariable "104thVicShieldStrength";
	
	if ( _shieldregen < 500 ) then { 
		_shieldregen = _shieldregen + 100;
		if ( _shieldregen > 1000 ) then { _shieldregen = 500; };
		_vic setVariable ["104thVicShieldStrength", _shieldregen];
		_shieldhealth = ( _shieldregen / 5 );
		_vic vehiclechat ("Shield Health raised to " + str(_shieldhealth) + "%");
	};
	
	sleep 30;
	
};