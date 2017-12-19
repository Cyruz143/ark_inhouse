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
    class ark_ace_mapgestures {
        clientInit = "[] call compile preProcessFileLineNumbers 'x\ark\addons\ark_ace_map_gestures\mapgestures_postinit.sqf';";
    };
};