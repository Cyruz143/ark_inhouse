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
            "CUP_Creatures_People_LoadOrder",
            "us_military_units",
            "mnp_main",
            "mnp_blufor",
            "mnp_indep",
            "mnp_opfor",
            "gm_core_characters",
            "acp_main",
            "Characters_f_lxWS"
        };
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
