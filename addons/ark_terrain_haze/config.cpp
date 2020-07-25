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
            "CUP_Afghan_Config",
            "CUP_Bohemia_Config",
            "CUP_Bootcamp_acr_Config",
            "CUP_Chernarus_Config",
            "CUP_Desert2_Config",
            "CUP_Desert_Config",
            "CUP_Desert_e_Config",
            "CUP_Provinggrounds_pmc_Config",
            "CUP_Sara_Config",
            "CUP_Sara_dbe1_Config",
            "CUP_Saralite_Config",
            "CUP_Shapur_baf_Config",
            "CUP_Takistan_Config",
            "CUP_Utes_Config",
            "CUP_Zargabad_Config",
            "CUP_Terrains_Abel",
            "CUP_Terrains_Cain",
            "CUP_Terrains_Eden",
            "CUP_Intro_Config",
            "CUP_Terrains_Noe"
        };
        VERSION_CONFIG;
    };
};

#include "CfgWorlds.hpp"