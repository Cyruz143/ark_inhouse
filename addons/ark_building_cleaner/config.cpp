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
            "ark_admin_tools"
        };
        VERSION_CONFIG;
    };
};

class Extended_PostInit_EventHandlers {
    class ADDON {
        serverInit = "call compileScript ['x\ark\addons\ark_building_cleaner\server_postinit.sqf'];";
    };
};