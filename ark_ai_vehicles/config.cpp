class CfgPatches {
    class ark_ai_vehicles {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.66;
        requiredAddons[] = {"CBA_MAIN"};
        author = "ARK";
        authorUrl = "http://www.ark-group.org";
    };
};

class Extended_PostInit_EventHandlers {
    class ark_ai_vehicles {
        serverInit = "[] call compile preProcessFileLineNumbers 'x\ark\addons\ark_ai_vehicles\veh_postinit.sqf';";
    };
};