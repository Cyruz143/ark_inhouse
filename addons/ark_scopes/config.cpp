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
        requiredAddons[] = {"ark_main", "CUP_Weapons_West_Attachments"};
        VERSION_CONFIG;
    };
};

#include "CBA_JR.hpp"
#include "CfgWeapons.hpp"