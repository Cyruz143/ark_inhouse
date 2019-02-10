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
        requiredAddons[] = {"ark_main"};
        VERSION_CONFIG;
    };
};

class Extended_PostInit_EventHandlers {
    class ADDON {
        clientInit = "call compile preProcessFileLineNumbers 'x\ark\addons\ark_quiet_map\client_postinit.sqf';";
    };
};