#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {"ark_main","CUP_Weapons_Ammunition"};
        author = "ARK";
        authorUrl = "http://www.ark-group.org";
        requiredVersion = REQUIRED_VERSION;
        VERSION_CONFIG;
    };
};

#include "CfgAmmo.hpp"