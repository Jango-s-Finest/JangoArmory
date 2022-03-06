/* ECM ON System By Firewill

new ECM System
each aircraft has own ECM capability. default value is 50
ECM POD gives more ECM values.

 */

private _plane = _this select 0;
private _planetype = typeOf _plane;
private _ecm = "";
private _ecm_type = "internal";
private _jammer_c = 0;
private _ex_time = 120;
private _ex_cool = 60;
private _ex_value = 0;
private _ex_ecm_stat = 0;
private _ex_ecm_stat_stack = 0;
private _stat = getNumber (configFile >> "CfgVehicles" >> _planetype >> "AWS_ECM_STAT");

if(_stat == 0) then
{
	_stat = 50;
};

_plane setVariable ["ECMJAMMER","no",true];

_pylon = GetPylonMagazines _plane;
_pylon_count = count _pylon;

	for "_i" from 0 to _pylon_count-1 do
	{
	_mag = _pylon select _i;
	_ecm = getNumber (configFile >> "CfgMagazines" >> _mag >> "AWS_ECMJAMMER");

		if (_ecm == 1) then
		{
			_ecm_type = "external";
			_jammer_c = _jammer_c + 1;
			_ex_ecm_stat = getNumber (configFile >> "CfgMagazines" >> _mag >> "AWS_ECM_STAT");
			_ex_ecm_stat_stack = _ex_ecm_stat_stack + _ex_ecm_stat;
		};
	}; 
	
private _ecm_vehicle_type = getText (configFile >> "CfgVehicles" >> _planetype >> "FIR_AWS_ECM");	

if (_ecm_vehicle_type == "External") then
{
		_ecm_type = "external";
		private _ecm_vehicle_count = getNumber (configFile >> "CfgVehicles" >> _planetype >> "FIR_AWS_ECM_Count");		
		private _ecm_vehicle_stat = getNumber (configFile >> "CfgVehicles" >> _planetype >> "FIR_AWS_ECM_STAT");		
		_jammer_c = _ecm_vehicle_count;
		_ex_ecm_stat_stack = _ex_ecm_stat_stack + (_ecm_vehicle_stat * _ecm_vehicle_count);		
};

_stat = _stat*(1+_ex_ecm_stat_stack);	

if (_stat > 90) then 
{
	_stat = 90;
};
_plane setVariable ["AWS_ECM_STAT",_stat,true];	
_plane vehiclechat "SYSTEM : ECM JAMMER ON";

_ecmhandle = _plane addEventHandler ["incomingMissile", {[_this] execVM "\JangosVehicles\script\ECM\ECM.sqf"}];

if (_ecm_type == "external") then
{
	_plane vehiclechat "SYSTEM : EXTERNAL ECM SYSTEM";
	_ex_time = _ex_time + (10 *_jammer_c);
	sleep _ex_time;
}
else
{	
	_plane vehiclechat "SYSTEM : INTERNAL ECM SYSTEM";
	sleep 60;
};

_plane removeEventHandler ["incomingMissile", _ecmhandle];

if (_ecm_type == "external") then
{
	_ex_cool = _ex_cool - (7 * _jammer_c);
	_plane vehiclechat  format ["SYSTEM : ECM IS OFF. STANDBY FOR RECHARGING in %1SEC",_ex_cool];
	sleep _ex_cool;
}
else
{	
	_plane vehiclechat "SYSTEM : ECM IS OFF. STANDBY FOR RECHARGING in 40SEC";
	sleep 40;
};

_plane setVariable ["ECMJAMMER","yes",true];
_plane vehiclechat "SYSTEM : ECM IS STANDBY.";
