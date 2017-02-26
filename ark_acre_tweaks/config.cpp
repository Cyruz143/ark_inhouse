class CfgPatches
{
    class ark_acre_tweaks
    {
        name = "ACRE SQF Signal Calc Override";
        author = "Snippers";
        url = "http://www.teamonetactical.com";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.66;
        requiredAddons[] = {"cba_main","acre_main"};
    };
};

class Extended_PostInit_EventHandlers {
    class ark_acre_tweaks {
        init = "call compile preProcessFileLineNumbers 'x\ark\addons\ark_acre_tweaks\acre_postInit.sqf';";
    };
};