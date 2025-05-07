/*
 * Author: DartRuffian
 * Gets properties assigned in an object's config and creates an healing area around the given object.
 *
 * Arguments:
 * 0: Source for healing <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * _source call BNA_KC_medical_fnc_areaHealerInit;
 *
 * Public: Yes
 */

params [
    ["_object", objNull, [objNull]]
];
private ["_radius", "_rate", "_maxPatients"];
TRACE_1("BNA_104th_medical_fnc_areaHealerInit",_object);

if (isNull _object) exitWith {};

_radius = [
    configOf _object,
    BNA_104th_medical_areaHealRadius,
    -1
] call BIS_fnc_returnConfigEntry;

_rate = [
    configOf _object,
    BNA_104th_medical_areaHealRate,
    -1
] call BIS_fnc_returnConfigEntry;

_maxPatients = getNumber (configOf _object >> BNA_104th_medical_areaHealMaxPatients);

[_object, _radius, _rate, 0.25, 0.1, false, _maxPatients] call "BNA_104th_medical_fnc_areaSlowHeal";
nil;