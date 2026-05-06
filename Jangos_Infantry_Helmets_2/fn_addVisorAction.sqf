// 1. Criar a categoria principal (Pasta pai)
_mainAction = [
    "Visor_Style_Changer",
    "Visor Glow",
    "", 
    {}, 
    {headgear _player == "JA_104th_Spectre_Helmet"} // Só aparece se estiver com o capacete
] call ace_interact_menu_fnc_createAction;

[player, 1, ["ACE_SelfActions", "ACE_Equipment"], _mainAction] call ace_interact_menu_fnc_addActionToObject;

// 2. Ação de LIGAR
_visorOn = [
    "visor_on",
    "On",
    "",
    {
        // Código para aplicar a textura/material
        // Como o capacete é um item, precisamos agir no objeto visual do jogador
        [player, [1, "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"]] remoteExec ["setObjectMaterialGlobal", 0];
        player setVariable ["isOn", true, true];
    },
    {!(player getVariable ["isOn", false])}
] call ace_interact_menu_fnc_createAction;

[player, 1, ["ACE_SelfActions", "ACE_Equipment", "Visor_Style_Changer"], _visorOn] call ace_interact_menu_fnc_addActionToObject;

// 3. Ação de DESLIGAR
_visorOff = [
    "visor_off",
    "Off",
    "",
    {
        [player, [1, ""]] remoteExec ["setObjectMaterialGlobal", 0];
        player setVariable ["isOn", false, true];
    },
    {player getVariable ["isOn", false]}
] call ace_interact_menu_fnc_createAction;

[player, 1, ["ACE_SelfActions", "ACE_Equipment", "Visor_Style_Changer"], _visorOff] call ace_interact_menu_fnc_addActionToObject;