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
            "CUP_Weapons_LoadOrder"
        };
        VERSION_CONFIG;
    };
};

#include "CfgFSMs.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"