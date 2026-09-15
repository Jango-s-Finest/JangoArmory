//Changed in 0.7.0
//Changed in 0.2.0


private ["_mark500rem", "_h"];


private _blastPos = _this select 0;
private _radius500rem = _this select 1;
private _ace = param[2, false];



_damageScript = "JA\jangos_Armory\addons\FSN\freestyleNuke\crater.sqf";
if(_ace) then {_damageScript = "JA\jangos_Armory\addons\FSN\freestyleNuke\aceDamage.sqf"};



if (_radius500rem == -1) exitWith{};

/*
//Debug Only
_mark500rem = createMarker ["500 rem Radiation", _blastPos];
_mark500rem setMarkerColor "ColorGreen";
_mark500rem setMarkerShape "ELLIPSE";
_mark500rem setMarkerSize [_radius500rem, _radius500rem];
_mark500rem setMarkerText "500 rem Radiation";

*/





private _allUnits = _blastPos nearObjects ["Man", _radius500rem];


{ 
_h = [objNull, "GEOM"] checkVisibility [_blastPos, getPosASL _x];
if ((_h >= 0.1) && isDamageAllowed _x) then 
{
	if (_ace) then 
	{
		[_x, _h + 0.3, "ropeburn"] execVM _damageScript;
	}
	else 
	{
		_x setDamage[_h + damage _x + 0.3, true];
	};	
	
};

} forEach _allUnits;




