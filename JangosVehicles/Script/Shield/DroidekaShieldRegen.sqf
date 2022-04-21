params ["_vic"];

while { alive _vic } do {
	
	_shieldregen = _vic getVariable "104thDroidekaShieldStrength";
	
	if ( _shieldregen < 300 ) then { 
		_shieldregen = _shieldregen + 30;
		if ( _shieldregen > 300 ) then { _shieldregen = 300; };
		_vic setVariable ["104thVicShieldStrength", _shieldregen];
		_shieldhealth = ( _shieldregen / 3 );
		_vic vehiclechat ("Shield Health raised to " + str(_shieldhealth) + "%");
	};
	
	sleep 30;
	
};