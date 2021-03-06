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
            "ace_common",
            "ace_medical_status",
            "ace_spectator",
            "Hull3"
        };
        VERSION_CONFIG;
    };
};

class Extended_PreInit_EventHandlers {
    class ADDON {
        clientInit = "call compileScript ['x\ark\addons\ark_ace_spectator\client_preinit.sqf'];";
    };
};

class Extended_PostInit_EventHandlers {
    class ADDON {
        serverInit = "call compileScript ['x\ark\addons\ark_ace_spectator\server_postinit.sqf'];";
    };
};