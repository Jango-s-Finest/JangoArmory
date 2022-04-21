params ["_vic"];

_vic setVariable ["104thDroidekaShieldStrength", 300];

[_vic] execVM "\JangosVehicles\Script\Shield\DroidekaShieldAction.sqf";

[_vic] execVM "\JangosVehicles\Script\Shield\DroidekaShieldRegen.sqf";