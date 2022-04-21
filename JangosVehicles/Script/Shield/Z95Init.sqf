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

_vic setVariable ["104thVicShieldStrength", 500];

[_vic] execVM "\JangosVehicles\Script\Shield\Z95ShieldAction.sqf";

[_vic] execVM "\JangosVehicles\Script\Shield\PlaneShieldRegen.sqf";