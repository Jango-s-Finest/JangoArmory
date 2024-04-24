params ["_vic"];
_plane = [_vic,0,objnull] call BIS_fnc_param;


//old I-TGT set-up

_plane setVariable ["ITGT_GRIDTYPE","8D",true];
_plane setVariable ["ITGT_C_DATA",[]];

_plane setVariable ["ITGT_DATA_1",[]];
_plane setVariable ["ITGT_DATA_2",[]];
_plane setVariable ["ITGT_DATA_3",[]];
_plane setVariable ["ITGT_DATA_4",[]];
_plane setVariable ["ITGT_DATA_5",[]];

_plane setVariable ["ITGT_NEW","no"];
_plane setVariable ["ITGT_TYPE","GPS",true];
_plane setVariable ["ITGT_LSR","none"];

_plane setVariable ["ITGT_LSR_SET","no"];
_plane setVariable ["ITGT_TGT_SET","no"];

_plane setVariable ["ITGT_C_MARKER","none"];
_plane setVariable ["ITGT_MARKER_1","none"];
_plane setVariable ["ITGT_MARKER_2","none"];
_plane setVariable ["ITGT_MARKER_3","none"];
_plane setVariable ["ITGT_MARKER_4","none"];
_plane setVariable ["ITGT_MARKER_5","none"];

_plane setVariable ["ITGT_MARKER_1_SET","no"];
_plane setVariable ["ITGT_MARKER_2_SET","no"];
_plane setVariable ["ITGT_MARKER_3_SET","no"];
_plane setVariable ["ITGT_MARKER_4_SET","no"];
_plane setVariable ["ITGT_MARKER_5_SET","no"];

_plane setvariable ["Loadout_Status","no",true];

_plane setVariable ["ITGT_VT","no",true];


_plane setVariable ["AWS_MAP_STATUS","no",true];
_plane setVariable ["AWS_MAP_ZOOM_STATUS",0,true];
_plane setVariable ["AWS_MAP_TEXTURE_STATUS","map",true];
_plane setVariable ["AWS_TGP_ZOOM_Switch","1",true];
_plane setVariable ["AWS_TGP_MODE_Switch","1",true];
_plane setVariable ["AWS_TGP_CAM","",true];


_plane setVariable ["ECMJAMMER","no",true];

//New I-TGT set-up

// tgt list element [id, [tgt_location_data],"marker_name",assginedHP,isGlobal]
// hp list element [hardpoint index,"mag name", count]
_plane setVariable ["ITGT_TGT_LIST",[],true];
_plane setVariable ["ITGT_HP_LIST",[],true];


if (isServer) then {
_vic setVariable ["104thVicShieldStrength", 500, true];

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
					_damage = 500;
					[_targetvehicle, ("Impact Detected - " + str(_hitby) + " hit, shields overloaded!")] remoteExec ["vehiclechat"];
				};
				_shieldadjust = _targetvehicle getVariable "104thVicShieldStrength";
				_shieldadjust = (_shieldadjust - _damage);
				_targetvehicle setVariable ["104thVicShieldStrength", _shieldadjust, true];

				_shieldhealth = (_shieldadjust / 5);
				if (_damage > 0) then { [_targetvehicle, ("Shield Health " + str(_shieldhealth) + "%")] remoteExec ["vehiclechat"]; };
				
				private _vehicletospawn = "z95shieldfb";
				if (_shieldadjust < 330) then { _vehicletospawn = "z95shieldhb"; };
				if (_shieldadjust < 115) then { _vehicletospawn = "z95shieldred"; };

				private _hitflash = _vehicletospawn createVehicle [0,0,0];

				_hitflash attachTo [(_targetvehicle),[0,-0.7,-0.3]]; 
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

[_vic] execVM "\JangosVehicles\Script\Shield\Z95ShieldAction.sqf";

[_vic] execVM "\JangosVehicles\Script\Shield\PlaneShieldRegen.sqf";