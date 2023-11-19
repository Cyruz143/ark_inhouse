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
            "admiral",
            "Hull3",
            "ace_common"
        };
        VERSION_CONFIG;
    };
};

class Extended_PreInit_EventHandlers {
    class ADDON {
        serverInit = "call compileScript ['x\ark\addons\ark_admin_tools\server_preinit.sqf'];";
    };
};

class Extended_PostInit_EventHandlers {
    class ADDON {
        clientInit = "call compileScript ['x\ark\addons\ark_admin_tools\client_postinit.sqf'];";
    };
};

#include "CfgVehicles.hpp"