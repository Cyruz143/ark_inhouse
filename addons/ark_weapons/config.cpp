#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        author = "ARK";
        authors[] = {"ARK"};
        url = "http://www.ark-group.org";
        units[] = {};
        weapons[] = {
            "ARK_launch_RPG22"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ark_main",
            "CUP_Weapons_Ammunition",
            "CUP_Weapons_M136",
            "CUP_Weapons_PK",
            "CUP_Weapons_RPG18",
            "CUP_Weapons_RPG7",
            "hlcweapons_core",
            "hlcweapons_aks",
            "skn_nbc_units"
        };
        VERSION_CONFIG;
    };
};

#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"