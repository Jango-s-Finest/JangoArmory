if (hasInterface) then{
	["CBA_settingsInitialized", {
		[{
            !isNull (call BIS_fnc_displayMission)
        }, {
            if (
                serverName != "104th Wolfpack Battalion Campaign Server" &&
                serverName != "104th Wolfpack Battalion Training Server"
            ) exitWith {};
			if (
                isClass(configFile >> 'CfgPatches' >> 'PA_arsenal')
			)then{
				endMission 'blacklistedmod';
			};
        }] call CBA_fnc_waitUntilAndExecute;
	}] call CBA_fnc_addEventHandler;
};