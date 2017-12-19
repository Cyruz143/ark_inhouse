#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {"ark_main","ace_movement"};
        author = "ARK";
        authorUrl = "http://www.ark-group.org";
        requiredVersion = REQUIRED_VERSION;
        VERSION_CONFIG;
    };
};

#include "CfgMovesFatigue.hpp"
#include "CfgInventoryGlobalVariable.hpp"