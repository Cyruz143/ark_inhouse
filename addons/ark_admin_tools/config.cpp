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
            "Hull3"
        };
        VERSION_CONFIG;
    };
};

class Extended_PreInit_EventHandlers {
    class ADDON {
        clientInit = "call compile preProcessFileLineNumbers 'x\ark\addons\ark_admin_tools\client_preinit.sqf';";
    };
};

class Extended_PostInit_EventHandlers {
    class ADDON {
        clientInit = "call compile preProcessFileLineNumbers 'x\ark\addons\ark_admin_tools\client_postinit.sqf';";
        init = "call compile preProcessFileLineNumbers 'x\ark\addons\ark_admin_tools\global_postinit.sqf';";
    };
};

#include "CfgVehicles.hpp"
