params ["_vic"];

_vic setVariable ["104thVicShieldStrength", 1000, true];

[_vic] execVM "\JangosVehicles\Script\Shield\TX130ShieldAction.sqf";

[_vic] execVM "\JangosVehicles\Script\Shield\VicShieldRegen.sqf";