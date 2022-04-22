params ["_this"];
_this addEventHandler ["hit",
{
	_handle = _this spawn {
		params ["_unit","_source","_damage","_instigator"];
		private _shieldhitsound =  selectRandom ["ShieldHit0","ShieldHit1","ShieldHit2","ShieldHit3","ShieldHit4"];
		private _y = getPosASL _unit;
		private _sound = "104th_EmptySoundPad" createVehicle _y;
		private _flash = "oryxshieldred" createVehicle _y;
		_flash attachTo [(_this select 0),[0,0,0]];
		_flash setDir 0;
		sleep 0.2;
		deleteVehicle _flash;
	};
}];