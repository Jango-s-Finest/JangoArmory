if(isServer)then{
	private["_escap_1"];
	_escap_1 = _this select 0;
	_escap_1 addAction ["Eject", { 
		_escap_1 setVelocityModelSpace [ 0,100,0 ];
		removeAllActions _escap_1 ;
	}];
};