[
    "FSN_Debug", // variable name for setting
    "CHECKBOX", // setting type
    "Show Debug Information", // displayed name
    ["Freestyle's Nukes","Development"], // category
    [false], // data for setting type
    1 // "_isGlobal" flag
] call CBA_fnc_addSetting;


[
    "FSN_Fallout", // variable name for setting
    "CHECKBOX", // setting type
    "Enable Fallout", // displayed name
    ["Freestyle's Nukes","Nuke Effects"], // category
    [true], // data for setting type
    1 // "_isGlobal" flag
] call CBA_fnc_addSetting;


[
    "FSN_Auto_Nuking", // variable name for setting
    "CHECKBOX", // setting type
    "Enable AI nuke usage", // displayed name
    ["Freestyle's Nukes","AI Nuke Usage"], // category
    [false], // data for setting type
    1, // "_isGlobal" flag
	{},
	true
] call CBA_fnc_addSetting;


[
    "FSN_AI_Nuke_Bias", // variable name for setting
    "LIST", // setting type
    "AI Nuke Usage Template", // displayed name
    ["Freestyle's Nukes","AI Nuke Usage"], // category
    [["STANDARD", "AGGRESSIVE", "DESTRUCTIVE", "RECKLESS", "SACRIFICIAL", "COLLETERAL", "NOCASUALTIES", "CALCULATED", "TRIGGERHAPPY", "OVERKILL", "CUSTOM"], ["Standard", "Aggresive Use", "Destruction", "Reckless", "Sacrifice", "Acceptable Casualties", "No Casualties", "An Eye for an Eye", "Triggerhappy", "Overkill", "Custom"], 0], // data for setting type
    0 // "_isGlobal" flag
] call CBA_fnc_addSetting;



[
    "FSN_AI_Nuke_minEnemy", // variable name for setting
    "SLIDER", // setting type
    "Minimum Enemy in area", // displayed name
    ["Freestyle's Nukes","AI Nuke Usage Custom Settings"], // category
    [1, 500, 10, 0], // data for setting type
    0 // "_isGlobal" flag
] call CBA_fnc_addSetting;


[
    "FSN_AI_Nuke_maxFriendly", // variable name for setting
    "SLIDER", // setting type
    "Maximum Friendly units in area", // displayed name
    ["Freestyle's Nukes","AI Nuke Usage Custom Settings"], // category
    [0, 500, 10, 0], // data for setting type
    0 // "_isGlobal" flag
] call CBA_fnc_addSetting;


[
    "FSN_AI_Nuke_maxColleteral", // variable name for setting
    "SLIDER", // setting type
    "Maximum Civilians in area", // displayed name
    ["Freestyle's Nukes","AI Nuke Usage Custom Settings"], // category
    [0, 500, 10, 0], // data for setting type
    0 // "_isGlobal" flag
] call CBA_fnc_addSetting;


[
    "FSN_AI_Nuke_maxRatioFriendlyEnemy", // variable name for setting
    "SLIDER", // setting type
    "Maximum Frienlies per Enemy in area", // displayed name
    ["Freestyle's Nukes","AI Nuke Usage Custom Settings"], // category
    [0, 50, 1, 2], // data for setting type
    0 // "_isGlobal" flag
] call CBA_fnc_addSetting;

[
    "FSN_AI_Nuke_maxRatioColleteralEnemy", // variable name for setting
    "SLIDER", // setting type
    "Maximum Civilians per Enemy in area", // displayed name
    ["Freestyle's Nukes","AI Nuke Usage Custom Settings"], // category
    [0, 50, 1, 2], // data for setting type
    0 // "_isGlobal" flag
] call CBA_fnc_addSetting;

[
    "FSN_AI_Nuke_NonEnemyEnemy", // variable name for setting
    "SLIDER", // setting type
    "Maximum Civilians and Frienlies per Enemy in area", // displayed name
    ["Freestyle's Nukes","AI Nuke Usage Custom Settings"], // category
    [0, 100, 1, 2], // data for setting type
    0 // "_isGlobal" flag
] call CBA_fnc_addSetting;

[
    "FSN_AI_Nuke_order", // variable name for setting
    "LIST", // setting type
    "Try yields order", // displayed name
    ["Freestyle's Nukes","AI Nuke Usage Custom Settings"], // category
    [[0, 1], ["Small to Large", "Large to Small"], 0], // data for setting type
    0 // "_isGlobal" flag
] call CBA_fnc_addSetting;