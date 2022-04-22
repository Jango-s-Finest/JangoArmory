params ["_this"];
hint "Entered OryxInit"
Sleep 10
"\JangosVehicles\Script\OryxCrew\OryxCrew.sqf"  call BIS_fnc_execVM;
hint "Called OryxCrewScript"
Sleep 10
"\JangosVehicles\Script\Shield\Shield.sqf" call BIS_fnc_execVM;