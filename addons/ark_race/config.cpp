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
        requiredAddons[] = {
            "ark_main",
            "ace_common"

        };
        VERSION_CONFIG;
    };
};

class Extended_PostInit_EventHandlers {
    class ADDON {
        clientinit = "call compile preProcessFileLineNumbers 'x\ark\addons\ark_race\client_postinit.sqf';";
        serverinit = "call compile preProcessFileLineNumbers 'x\ark\addons\ark_race\server_postinit.sqf';";
    };
};