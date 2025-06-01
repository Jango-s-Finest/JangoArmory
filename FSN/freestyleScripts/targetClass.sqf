params["_unit", ["_bias", [10,100,500,0.5,10,10, 1],[]]];

scopeName "main";

//_unit setVariable ["FSN_AutoTarget_Nuking", true];
private _loaded = weapons _unit;

if(!FSN_Auto_Nuking) then {breakOut "main"};

if (!("FSN_B61_Nuclear_W" in _loaded) || (_unit getVariable "FSN_No_Auto_Nuking") || (isPlayer _unit)) then
{
	sleep 60;
	private _null = [_unit] execVM "FSN\freestyleFSN\freestyleScripts\targetClass.sqf";
};

_unit = driver _unit;



/*private _temp = switch (FSN_AI_Nuke_order) do
	{
case : {1};
case "Small to Large": {0};
default {0};
	};*/

_bias = switch (FSN_AI_Nuke_Bias) do
	{
case "CUSTOM": {[FSN_AI_Nuke_minEnemy, FSN_AI_Nuke_maxFriendly, FSN_AI_Nuke_maxColleteral, FSN_AI_Nuke_maxRatioFriendlyEnemy, FSN_AI_Nuke_maxRatioColleteralEnemy, FSN_AI_Nuke_NonEnemyEnemy, FSN_AI_Nuke_order]};
case "STANDARD": {[25, 10, 10, 0.1, 0.15, 0.3, 0]};
case "AGGRESSIVE": {[20, 30, 50, 0.5, 1, 2, 0]};
case "DESTRUCTIVE": {[20, 40, 100, 1, 2, 5, 1]};
case "RECKLESS": {[10, 1000, 1000, 50, 50, 100, 1]};
case "SACRIFICIAL": {[25, 150, 10, 5, 2, 10, 0]};
case "COLLETERAL": {[25, 10, 500, 0.1, 10, 15, 0]};
case "NOCASUALTIES": {[25, 0, 0, 0, 0, 0, 0]};
case "CALCULATED": {[25, 1000, 1000, 1, 1, 2, 0]};
case "TRIGGERHAPPY": {[10, 20, 50, 0.5, 1, 5, 0]};
case "OVERKILL": {[10, 20, 50, 0.5, 1, 5, 1]};
default {_bias};
	};



private _refTarget = objNull;

private _minEnemy = _bias # 0;	//enemies inside kill zone needed for launch to be authorized
private _maxFriendly = _bias # 1;//max number of friendlies allowed inside kill zone
private _maxColleteral = _bias # 2;//max number of civilians allowed inside kill zone
private _maxRatioFriendlyEnemy = _bias # 3;//max ratio of friendlies / enemies allowed
private _maxRatioColleteralEnemy = _bias # 4;	//max ratio of civilians / enemies allowed
private _maxRatioNonEnemyEnemy = _bias # 5;//max ratio of (friendlies + civilians) / enemies allowed
private _order = _bias # 6;//check from small to large yield (0) or from large to small yield (1)

while{isNull _refTarget} do
{
	_refTarget = _unit findNearestEnemy (position _unit);
};
//hint str(_refTarget);

private _knownTargets = _unit targets [false, 1000, [], 0, position _refTarget];

if(FSN_Debug) then
{
	private _marker = [];

	private _t = createMarker ["Reference Target", position _refTarget];
	_t setMarkerType "hd_destroy";
	_t setMarkerColor "ColorRed";

	_marker append [_t];

	{
if ((_x isKindOf "Man" || _x isKindOf "Tank" || _x isKindOf "Car") && alive _x) then
{
	_t = createMarker [str(position _x), position _x];
	_t setMarkerType "hd_dot";
	
	
	private _c = switch (side _x) do
{
	case BLUFOR: {"ColorWEST"};
	case OPFOR: {"ColorEAST"};
	case Independent: {"ColorGUER"};
	case Civilian: {"ColorCIV"};
	default {"ColorBlack"};
};
	
	_t setMarkerColor _c; 
	
	_marker append [_t];
};
	}forEach _knownTargets;
};

private _killRadius = [[310, "A"], [520, "B"], [990, "C"], [1690, "D"]];

if(_order == 1) then {reverse _killRadius};

{
	scopeName "loop";
	private _radius = _x # 0;

	private _friendly = 0;
	private _colleteral = 0;
	private _enemy = 0.001;


	{
if ((_x isKindOf "Man" || _x isKindOf "Tank" || _x isKindOf "Car") && alive _x && (_x distance _refTarget) <= _radius) then
{
	if (side _x == civilian) then
	{
_colleteral = _colleteral + 1;
	} 
	else 
	{
if (((side _x) getFriend (side _unit)) >= 0.6) then
{
	_friendly = _friendly + 1;
}
else
{
	_enemy = _enemy + 1;
};
	};
};
	}forEach _knownTargets;


	//hint formatText ["Enemies: %1 %2 Friendlies: %3 %2 Colleteral: %4 %2", _enemy, lineBreak, _friendly, _colleteral];


	if(_enemy >= _minEnemy && _friendly <= _maxFriendly && _colleteral <= _maxColleteral && (_friendly / _enemy) <= _maxFriendly && (_colleteral / _enemy) <= _maxRatioColleteralEnemy && ((_colleteral + _friendly) / _enemy) <= _maxRatioNonEnemyEnemy) then
	{
//hint formatText ["Target Authorised! Killradius: %1", _radius];


private _loc = nearestLocations [position _refTarget, ["NameCity", "NameVillage", "NameCityCapital", "Name"], 2500];
private _yield = switch (_x # 1) do
{
	case "A": {0.3};
	case "B": {1.5};
	case "C": {10};
	case "D": {50};
	default {1};
};
	
if((count _loc) == 0) then 
{
	[side _unit, "HQ"] sideChat format ["Target at %1 authorised for nuclear attack, yield %2 kT.%3 Strike aircraft on the way! (Callsign: %4)", position _refTarget, _yield, lineBreak, group _unit];
}
else
{
	_loc = _loc # 0;
	private _dir = (locationPosition _loc) getDir (position _refTarget);
	private _compass = switch ((floor((_dir + 23.5) / 45)) mod 8) do
{
	case 0: {"north"};
	case 1: {"north-east"};
	case 2: {"east"};
	case 3: {"south-east"};
	case 4: {"south"};
	case 5: {"south-west"};
	case 6: {"west"};
	case 7: {"north-west"};
	default {"TEST"};
};
	[side _unit, "HQ"] sideChat format ["Target %1 of %2 authorised for nuclear attack, yield %3 kT.%4 Strike aircraft on the way! (Callsign: %5)", _compass, text _loc, _yield, lineBreak, group _unit];
};



private _null = [_unit, position _refTarget, _x # 1] execVM "FSN\freestyleScripts\dropNuke.sqf";
breakOut "loop";
	}
	else
	{
//hint formatText ["Target not Authorised!"];
sleep 60;
private _null = [_unit] execVM "FSN\freestyleScripts\targetClass.sqf"
	};

}forEach _killRadius;





