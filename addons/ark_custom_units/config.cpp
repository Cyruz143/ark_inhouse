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
            "ark_backpacks",
            "CUP_Weapons_LoadOrder",
            "CUP_Creatures_People_LoadOrder"
        };
        VERSION_CONFIG;
    };
};

#include "CfgEditorSubcategories.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgWeapons.hpp"

class CfgVehicles {
    #include "config\VanillaUnits.hpp"
    #include "config\CBRNUnits.hpp"
    #include "config\NVAUnits.hpp"
    #include "config\GendUnits.hpp"
    #include "config\CUPUnits.hpp"
};