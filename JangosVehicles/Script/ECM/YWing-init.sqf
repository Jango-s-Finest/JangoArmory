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


_plane setVariable ["ECMJAMMER","yes",true];

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
				private _sound = "104th_EmptySoundPad" createVehicle _r; 
				_sound attachTo [(_targetvehicle),[0,0,0]]; 


				_damage = 0;
				_damagedone = 0;
				if (_isDirect) then {_damage = (_ammo select 0)} else {_damage = ((_ammo select 1) / 4)};



				if (_damage > 0) then {_damagedone = (_damage / 2)};
				if (_damage > 29) then {_damagedone = _damage};
				if (_damage > 99) then {_damagedone = (_damage / 2)};
				if (_damage > 299) then {_damagedone = _damage};
				
				_lsaatcheck = _ammo;
				_lsaatchecking = "ls_120mm_red_ap";
				if (_isDirect) then {
					if ( _lsaatcheck isEqualTo _lsaatchecking ) then {_damagedone = 850};
				};
				_shieldadjust = _targetvehicle getVariable "104thVicShieldStrength";
				_shieldadjust = (_shieldadjust - _damagedone);
				_targetvehicle setVariable ["104thVicShieldStrength", _shieldadjust, true];

				_shieldhealth = (_shieldadjust / 5);
				if (_damagedone > 0) then { [_targetvehicle, ("Shield Health " + str(_shieldhealth) + "%")] remoteExec ["vehiclechat"]; };
				
				private _vehicletospawn = "ywingshieldfb";
				if (_shieldadjust < 330) then { _vehicletospawn = "ywingshieldhb"; };
				if (_shieldadjust < 115) then { _vehicletospawn = "ywingshieldred"; };

				private _hitflash = _vehicletospawn createVehicle [0,0,0];

				_hitflash attachTo [(_targetvehicle),[0,-3.5,-0.35]]; 
				_hitflash setDir 0; 
				sleep 0.1; 
				deleteVehicle _hitflash;
				
				};
				
				}; 
}];

[_vic] execVM "\JangosVehicles\Script\Shield\YWingShieldAction.sqf";

[_vic] execVM "\JangosVehicles\Script\Shield\PlaneShieldRegen.sqf";