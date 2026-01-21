#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        author = "ARK";
        authors[] = {"ARK"};
        url = "http://www.ark-group.org";
        units[] = {
            "ARK_NVA_Pilot_F",
            "ARK_NVA_Crew_F",
            "ARK_NVA_Soldier_F_SKS",
            "ARK_NVA_Soldier_F",
            "ARK_NVA_Soldier_MG_F",
            "ARK_NVA_Soldier_AR_F",
            "ARK_NVA_Soldier_TL_F",
            "ARK_NVA_Soldier_LAT_F",
            "ARK_RU_CBRN_Pilot_F",
            "ARK_RU_CBRN_Crew_F",
            "ARK_RU_CBRN_Soldier_F",
            "ARK_RU_CBRN_Soldier_MG_F",
            "ARK_RU_CBRN_Soldier_AR_F",
            "ARK_RU_CBRN_Soldier_TL_F",
            "ARK_RU_CBRN_Soldier_LAT_F"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ark_main",
            "CUP_Weapons_LoadOrder",
            "CUP_Creatures_People_LoadOrder",
            "Characters_f_lxWS"
        };
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

#include "CfgEditorSubcategories.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgWeapons.hpp"

class CfgVehicles {
    #include "config\VanillaUnits.hpp"
    #include "config\WSUnits.hpp"
    #include "config\CBRNUnits.hpp"
    #include "config\NVAUnits.hpp"
    #include "config\GendUnits.hpp"
    #include "config\CUPUnits.hpp"
};
