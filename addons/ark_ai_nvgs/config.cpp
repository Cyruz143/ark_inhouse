#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        author = "ARK";
        authors[] = {"ARK"};
        url = "http://www.ark-group.org";
        units[] = {};
        weapons[] = {
            "NVGoggles_AI"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ark_main"};
        VERSION_CONFIG;
    };
};

class Extended_PostInit_EventHandlers {
    class ADDON {
        serverInit = "[] call compile preProcessFileLineNumbers 'x\ark\addons\ark_ai_nvgs\server_postinit.sqf';";
    };
};

#include "CfgWeapons.hpp"