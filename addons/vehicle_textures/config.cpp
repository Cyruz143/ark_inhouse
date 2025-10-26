#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        author = "ARK";
        authors[] = {"ARK"};
        url = "http://www.ark-group.org";
        units[] = {
            "ARK_MH60_AUS",
            "ARK_UH1Y_UNA_NOR",
            "ARK_UH1Y_GUN_NOR",
            "ARK_LAV25_AUS",
            "ARK_LAV25M240_AUS",
            "ARK_LAV25HQ_AUS",
            "ARK_LR_TRANS_AUS",
            "ark_demo_aus_mb_u1300l_cargo",
            "ARK_LR_M2_AUS",
            "ARK_M1A1_AUS",
            "ARK_M1A1_AUS_TUSK",
            "ARK_M113_AUS",
            "ARK_M113_CAN",
            "ARK_M113_NOR",
            "ARK_LEO2_CAN",
            "ARK_LEO2_NOR",
            "ARK_SCA_FUEL_NOR_WD",
            "ARK_SCA_FUEL_NOR_GN",
            "ARK_SCA_COV_NOR_WD",
            "ARK_SCA_TRAN_NOR_GN",
            "B_GEN_Offroad_01_armed_F",
            "B_GEN_LSV_01_armed_black_F",
            "B_GEN_MRAP_01_hmg_F",
            "B_GEN_APC_Wheeled_02_rcws_F",
            "ARK_MCV80_GB_WIN_SLAT",
            "ARK_MCV80_GB_WIN",
            "ARK_FV432_Bulldog_GB_WIN_RWS",
            "ARK_FV432_Bulldog_GB_WIN"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ark_main",
            "ark_custom_units",
            "CUP_Vehicles_LoadOrder",
            "gm_demo_mb_u1300l"
        };
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
