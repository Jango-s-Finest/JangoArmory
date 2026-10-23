class CfgPatches
{
    class Jangos_Main
    {
        author = "Jango's Finest";
        requiredVersion = 0.1;
        requiredAddons[] = {};
        units[] = {};
        weapons[] = {};
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