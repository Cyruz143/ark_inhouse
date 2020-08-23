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
            "cup_creatures_people_core",
            "cup_creatures_people_military_dummyinfantryset",
            "cup_creatures_military_germany",
            "cup_creatures_military_hil",
            "cup_creatures_military_napa",
            "cup_creatures_military_pmc",
            "cup_creatures_military_racs",
            "cup_creatures_military_russia",
            "cup_creatures_military_sla",
            "cup_creatures_military_taki",
            "cup_creatures_military_takiinsurgents",
            "cup_creatures_military_usarmy",
            "cup_creatures_military_usmc",
            "cup_creatures_staticweapons",
            "cup_creatures_people_civil_chernarus",
            "cup_creatures_people_civil_russia",
            "cup_creatures_military_acr",
            "cup_creatures_military_baf",
            "cup_creatures_military_cdf",
            "cup_creatures_military_chedaki"
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