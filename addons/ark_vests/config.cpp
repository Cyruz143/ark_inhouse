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
            "cup_creatures_people_core",
            "cup_baseconfigs",
            "cup_basedata",
            "cup_creatures_people_military_dummyinfantryset",
            "cup_creatures_military_germany",
            "cup_creatures_military_napa",
            "cup_creatures_military_pmc",
            "cup_creatures_military_racs",
            "cup_creatures_military_russia",
            "cup_creatures_military_sla",
            "cup_creatures_military_taki",
            "cup_creatures_military_takiinsurgents",
            "cup_creatures_military_usarmy",
            "cup_creatures_military_usmc",
            "skn_nbc_units",
            "us_military_units"
        };
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"