params ["_entity"];
hint "Entered OryxInit";
sleep 10;
"\JangosVehicles\Script\OryxCrew\OryxCrew.sqf"  call BIS_fnc_execVM;
hint "Called OryxCrewScript";
sleep 10;
"\JangosVehicles\Script\Shield\Shield.sqf" call BIS_fnc_execVM;
