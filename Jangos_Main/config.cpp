class CfgPatches
{
    class Jangos_Main
    {
        author = "Jango's Finest";
        requiredVersion = 0.1;
        requiredAddons[] = {'BNA_KC_Brandings'};
        units[] = {};
        weapons[] = {};
    };
};
class RscPicture {};
class RscStandardDisplay {};
class RscButton {};
class RscDisplayMain: RscStandardDisplay {
    enableDisplay = 0;
    class Controls {

        class JA_Logo: RscPicture {
            idc = -1;
            x = 0.375;    // centered (0.5 - 0.25/2)
            y = 0.850;     // near bottom, above menu bar
            w = 0.25;
            h = 0.35;
            text = "\Jangos_Main\assets\images\104thlogo.paa";
            color[] = {0.9,0.9,0.9,1};
            colorActive[] = {1,1,1,1};
            onSetFocus = "(_this select 0) ctrlsettextcolor [1,1,1,1];";
            onKillFocus = "(_this select 0) ctrlsettextcolor [0.9,0.9,0.9,1];";
            shadow = 1;
            onButtonClick = "";
            soundClick[] = {"\STOP_Client\sounds\beep8.ogg",1,1};
            soundEnter[] = {"\STOP_Client\sounds\beep6.ogg",1,1};
            tooltip = "";
            onLoad = "";
            colorBackground[] = {0,0,0,0};
            colorText[] = {1,1,1,1};
            deletable = 0;
            fade = 0;
            tooltipColorText[] = {1,1,1,1};
            tooltipColorBox[] = {1,1,1,1};
            tooltipColorShade[] = {0,0,0,0.65};
            access = 0;
            type = 0;
            style = 48;
            font = "TahomaB";
            sizeEx = 0;
            lineSpacing = 0;
            fixedWidth = 0;
        };

        class JA_LogoButton: RscButton {
            idc = -1;
            x = 0.375;
            y = 0.850;
            w = 0.125;
            h = 0.35;
            text = "";
            colorBackground[] = {0, 0, 0, 0};
            colorBackgroundActive[] = {1, 1, 1, 0.1};
            colorBorder[] = {0, 0, 0, 0};
            tooltip = "Join 104th Wolfpack Battalion Campaign Server";
            action = "connectToServer ['40.160.20.17', 2302, ''];";
        };
        class JA_LogoButton2: RscButton {
            idc = -1;
            x = 0.500;
            y = 0.850;
            w = 0.125;
            h = 0.35;
            text = "";
            colorBackground[] = {0, 0, 0, 0};
            colorBackgroundActive[] = {1, 1, 1, 0.1};
            colorBorder[] = {0, 0, 0, 0};
            tooltip = "Join 104th Wolfpack Battalion Training Server";
            action = "connectToServer ['40.160.20.17', 2314, ''];";
        };
    };
};

class Extended_PostInit_EventHandlers
{
    class Jangos_Main
    {
        init = "call compileScript ['\Jangos_Main\blacklist.sqf'];";
    };
};
class CfgDebriefing
{
    class blacklistedmod
    {
        title = "Blacklisted Mods";
        subtitle = "One or more mods from the description are not allowed";
        description = "\
                    Personal Arsenal\
                    ";
        pictureBackground = "";
        picture = "b_inf";
        pictureColor[] = {0.0, 0.3, 0.6, 1};
    };
};