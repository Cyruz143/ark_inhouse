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
        requiredAddons[] = {"ark_main", "CUP_Weapons_Ammunition", "CUP_Weapons_RPG18", "hlcweapons_mp5"};
        VERSION_CONFIG;
    };
};

#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"