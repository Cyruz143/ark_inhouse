#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {"ark_main"};
        author = "ARK";
        authorUrl = "http://www.ark-group.org";
        requiredVersion = REQUIRED_VERSION;
        VERSION_CONFIG;
    };
};

class Extended_PostInit_EventHandlers {
    class ark_ai_vehicles {
        serverInit = "[] call compile preProcessFileLineNumbers 'x\ark\addons\ark_ai_vehicles\veh_postinit.sqf';";
    };
};