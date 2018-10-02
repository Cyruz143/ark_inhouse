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
            "cup_weapons_sa61",
            "cup_weapons_m1014",
            "cup_weapons_m136",
            "cup_weapons_makarov",
            "cup_weapons_pk",
            "cup_Weapons_rpg18",
            "cup_weapons_rpg7",
            "cup_weapons_ammunition",
            "CUP_Creatures_People_Civil_Chernarus",
            "CUP_Creatures_Military_ACR",
            "CUP_Creatures_Military_BAF",
            "CUP_Creatures_Military_Chedaki",
            "CUP_Creatures_Military_Germany",
            "CUP_Creatures_Military_NAPA",
            "CUP_Creatures_Military_PMC",
            "CUP_Creatures_Military_RACS",
            "CUP_Creatures_Military_Russia",
            "CUP_Creatures_Military_SLA",
            "CUP_Creatures_Military_Taki",
            "CUP_Creatures_Military_TakiInsurgents",
            "CUP_Creatures_Military_USArmy",
            "CUP_Creatures_Military_USMC",
            "hlcweapons_core",
            "hlcweapons_aks",
            "skn_nbc_units"
        };
        VERSION_CONFIG;
    };
};

#include "CfgEditorSubcategories.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgVehicles.hpp"