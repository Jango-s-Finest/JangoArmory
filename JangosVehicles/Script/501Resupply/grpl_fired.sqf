params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];
if (!isserver) exitWith{};
diag_log text (["[RD501]", "[Guided Resupply]", "TRACE:", "Fired GRPL Event Dump:", 
	"Unit:", _unit, 
	"Weapon:", _weapon, 
	"Muzzle:", _muzzle,
	"Mode:", _mode,
	"Ammo:", _ammo,
	"Magazine:", _magazine,
	"Projectile:", _projectile,
	"Gunner:", _gunner] joinString " ");

private _pos = [0, 0, 0];
waitUntil {
	if (isNull _projectile) exitWith { true };
	_pos = getPosASL _projectile;
	false;
};

private _box = "JA_104th_Box_Resupply" createVehicle _pos; 
private _smoke = "SmokeShellYellow" createVehicle _pos; 
_smoke attachTo [(_box),[0,0,0]]; 
