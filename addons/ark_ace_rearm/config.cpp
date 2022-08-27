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
            "ark_admin_tools",
            "ace_rearm"
        };
        VERSION_CONFIG;
    };
};

class Extended_PreInit_EventHandlers {
    class ADDON {
        serverinit = "call compileScript ['x\ark\addons\ark_ace_rearm\server_preinit.sqf'];";
    };
};

#include "CfgVehicles.hpp"