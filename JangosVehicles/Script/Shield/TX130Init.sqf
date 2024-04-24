params ["_vic"];

if (isServer) then {
_vic setVariable ["104thVicShieldStrength", 1000, true];

_vic setVariable ["104thVicShieldOn", 0, true];
};

_vic addEventHandler ["HitPart", { 
				_handle = _this spawn { 
				(_this select 0) params ["_targetvehicle", "_shooter", "_projectile", "_position", "_velocity", "_selection", "_ammo", "_vector", "_radius", "_surfaceType", "_isDirect"]; 
				
				_shieldoncheck = _targetvehicle getVariable "104thVicShieldOn";
				if (_shieldoncheck > 0) then {
				
				private _r = getPosASL (_targetvehicle); 
				if (isServer) then {
				private _sound = "104th_EmptySoundPad" createVehicle _r; 
				_sound attachTo [(_targetvehicle),[0,0,0]]; 
				};


				_damage = 0;
				_hitby = _ammo select 4;
				_mdwhit = 0;
				if (_isDirect) then {_damage = (_ammo select 0)} else {_damage = ((_ammo select 1) / 4)};
				
				switch _hitby do
				{
					case "ls_120mm_red_ap";
					case "ls_120mm_red_he";
					case "3AS_ATT_redPlasma_AT";
					case "RD501_aat_mbt_ammo";
					case "E60R_AA";
					case "PLX_AA";
					case "3AS_GAT_redPlasma_AT";
					case "3AS_Vulture_Missile_AA";
					case "ammo_Penetrator_RPG32V";
					case "ammo_Missile_AMRAAM_C";
					case "ammo_Missile_AMRAAM_D";
					case "3AS_ammo_AMRAAM";
					case "ammo_Missile_BIM9X";
					case "FIR_AIM120";
					case "FIR_AIM120A";
					case "FIR_AIM120B";
					case "FIR_AIM132";
					case "FIR_AIM54";
					case "FIR_AIM54A";
					case "FIR_AIM7";
					case "FIR_AIM7_2";
					case "FIR_AIM7E";
					case "FIR_AIM7E_2";
					case "FIR_AIM7F";
					case "FIR_AIM7F_2";
					case "FIR_AIM9H";
					case "FIR_AIM9L";
					case "FIR_AIM9M";
					case "FIR_AIM9P";
					case "FIR_AIM9X";
					case "M_Titan_AA_long";
					case "M_Zephyr";
					case "M_Zephyr_air";
					case "NCA_Tyrant_Ammo": { _mdwhit = 1};
				};
				
				if (_mdwhit > 0) then {
					_damage = 1000;
					[_targetvehicle, ("Impact Detected - " + str(_hitby) + " hit, shields overloaded!")] remoteExec ["vehiclechat"];
				};
				_shieldadjust = _targetvehicle getVariable "104thVicShieldStrength";
				_shieldadjust = (_shieldadjust - _damage);
				_targetvehicle setVariable ["104thVicShieldStrength", _shieldadjust, true];

				_shieldhealth = (_shieldadjust / 10);
				if (_damage > 0) then { [_targetvehicle, ("Shield Health " + str(_shieldhealth) + "%")] remoteExec ["vehiclechat"]; };
				
				private _vehicletospawn = "TX130shieldfb";
				if (_shieldadjust < 660) then { _vehicletospawn = "TX130shieldhb"; };
				if (_shieldadjust < 330) then { _vehicletospawn = "TX130shieldred"; };

				private _hitflash = _vehicletospawn createVehicle [0,0,0];

				_hitflash attachTo [(_targetvehicle),[0,0,-2.5]];
				_hitflash setDir 0; 
				sleep 0.1; 
				deleteVehicle _hitflash;
				
				};
				
				}; 
}];

/* After the ACE Update of 2023 October, explosive weapons would injure/kill crew even if they do not pass through the shield. */

_vic addEventHandler ["GetIn", {
	params ["_vehicle", "_role", "_unit", "_turret"];
	_unit allowDamage false;
}];

_vic addEventHandler ["GetOut", {
	params ["_vehicle", "_role", "_unit", "_turret"];
	_unit allowDamage true;
}];

[_vic] execVM "\JangosVehicles\Script\Shield\TX130ShieldAction.sqf";

[_vic] execVM "\JangosVehicles\Script\Shield\VicShieldRegen.sqf";