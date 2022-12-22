params ["_pos", "_default_object", "_default_smoke"];
// _event = params ["_object1", "_object2", "_selection1", "_selection2", "_force"];
if (isServer) then {
diag_log text (["[RD501]", "[Guided Resupply]", "TRACE:", "Starting spawn resupply event:", _this] joinString " ");

// Get the impact position.
// private _pos = getPos (_event select 0);

// See if there was any customization to the
// resupply box to spawn
private _box = _default_object;

// Spawn our resupply box.
createVehicle [_box, _pos];

// See if we have a smoke
private _smoke = _default_smoke;
if(not (isNil '_box')) then {
	_smvic = createVehicle [_smoke, _pos];
};

diag_log text (["[RD501]", "[Guided Resupply]", "DEBUG:", "Spawned resupply box of type", _box, "at", _pos] joinString " ");
};