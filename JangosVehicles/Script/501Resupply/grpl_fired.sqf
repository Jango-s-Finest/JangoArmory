params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];

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
	_pos = getPos _projectile;
	false;
};

if (_magazine == "JA_104th_Guided_Resupply_Magazine") then {
	[_pos, 'JA_104th_Box_Resupply', 'SmokeShellYellow'] remoteExecCall ['JA_104th_fnc_GURE_spawnResupply', 2];
} else {
	diag_log text (["[RD501]", "[Guided Resupply]", "WARN:", "Unknown magazine type fired."] joinString " ");
};