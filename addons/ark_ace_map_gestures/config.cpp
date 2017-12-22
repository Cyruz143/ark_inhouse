#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        author = "ARK";
        authors[] = {"ARK"};
        url = "http://www.ark-group.org";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ark_main", "ace_map_gestures"};
        VERSION_CONFIG;
    };
};

class Extended_PostInit_EventHandlers {
    class ark_ace_mapgestures {
        clientInit = "[] call compile preProcessFileLineNumbers 'x\ark\addons\ark_ace_map_gestures\mapgestures_postinit.sqf';";
    };
};