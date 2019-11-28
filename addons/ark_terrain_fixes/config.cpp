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
            "clafghan",
            "takistan",
            "CUP_Worlds",
            "fallujah_hou"
        };
        VERSION_CONFIG;
    };
};

#include "CfgWorlds.hpp"
#include "CfgVehicles.hpp"