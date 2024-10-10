class Faction {
    class Default {
        gear = "Default";
        uniform = "Default";
        name = "Default";
        description = "No gear and uniform.";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {};
        rolePrefix = "Default";
        vehicleClassnames[] = {
            {"CO", "C_Kart_01_F"},
            {"SL", "C_Kart_01_F"},
            {"FT", "C_Kart_01_F"},
            {"ATTCH", "C_Kart_01_F"},
            {"ENG", "C_Kart_01_F"},
            {"APC", "C_Kart_01_F"},
            {"IFV", "C_Kart_01_F"},
            {"SPAAG", "C_Kart_01_F"},
            {"TNK", "C_Kart_01_F"},
            {"TH", "C_Kart_01_F"},
            {"AH", "C_Kart_01_F"},
            {"CAS", "C_Kart_01_F"},
            {"Technical", "C_Kart_01_F"}
        };
    };

    class BLU_GEN_F_COP {
        gear = "MP5_GEND";
        uniform = "GEND_COP";
        name = "Gendarmes (Patrol)";
        description = "Patrol Police with MP5 series weapons";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {};
        rolePrefix = "Gendarmes";
        vehicleClassnames[] = {
            {"CO", "B_GEN_Offroad_01_gen_F"},
            {"SL", "B_GEN_Van_02_transport_F"},
            {"FT", "B_GEN_Offroad_01_gen_F"},
            {"ATTCH", "B_GEN_Offroad_01_gen_F"},
            {"ENG", "B_GEN_Van_02_vehicle_F"},
            {"APC", "B_GEN_APC_Wheeled_02_rcws_F"},
            {"IFV", "B_GEN_APC_Wheeled_02_rcws_F"},
            {"SPAAG", "CUP_O_ZSU23_SLA"},
            {"TNK", "B_GEN_APC_Wheeled_02_rcws_F"},
            {"TH", "O_Heli_Light_02_unarmed_F"},
            {"AH", "CUP_O_Ka60_GL_Blk_CSAT"},
            {"CAS", "CUP_O_Su25_SLA"},
            {"Technical", "B_G_Offroad_01_armed_F"}
        };
    };

    class BLU_GEN_F_SWAT {
        gear = "FAMAS_GEND";
        uniform = "GEND_SWAT";
        name = "Gendarmes (SWAT)";
        description = "SWAT Police with FAMAS F1 rifles";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {"woodland"};
        rolePrefix = "SWAT";
        vehicleClassnames[] = {
            {"CO", "B_GEN_Offroad_01_gen_F"},
            {"SL", "B_GEN_Van_02_transport_F"},
            {"FT", "B_GEN_Offroad_01_gen_F"},
            {"ATTCH", "B_GEN_Offroad_01_gen_F"},
            {"ENG", "B_GEN_Van_02_vehicle_F"},
            {"APC", "B_GEN_APC_Wheeled_02_rcws_F"},
            {"IFV", "B_GEN_APC_Wheeled_02_rcws_F"},
            {"SPAAG", "CUP_O_ZSU23_SLA"},
            {"TNK", "B_GEN_APC_Wheeled_02_rcws_F"},
            {"TH", "O_Heli_Light_02_unarmed_F"},
            {"AH", "CUP_O_Ka60_GL_Blk_CSAT"},
            {"CAS", "CUP_O_Su25_SLA"},
            {"Technical", "B_G_Offroad_01_armed_F"}
        };
    };

    class BLU_G_F {
        gear = "TRG_FIA";
        uniform = "FIA";
        name = "FIA";
        description = "FIA Rebels with TRG Series Weapons";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {"woodland"};
        rolePrefix = "FIA";
        vehicleClassnames[] = {
            {"CO", "B_G_Offroad_01_F"},
            {"SL", "B_G_Offroad_01_F"},
            {"FT", "B_G_Offroad_01_F"},
            {"ATTCH", "B_G_Offroad_01_F"},
            {"ENG", "B_G_Offroad_01_repair_F"},
            {"APC", "CUP_O_BRDM2_SLA"},
            {"IFV", "CUP_O_BMP2_SLA"},
            {"SPAAG", "CUP_O_ZSU23_SLA"},
            {"TNK", "CUP_O_T72_SLA"},
            {"TH", "CUP_C_Mi17_Civilian_RU"},
            {"AH", "CUP_O_Mi8_SLA_2"},
            {"CAS", "CUP_O_Su25_SLA"},
            {"Technical", "B_G_Offroad_01_armed_F"}
        };
    };

    class CUP_USMC_MTV_WD {
        gear = "M16A4_USMC";
        uniform = "CUP_USMC_MTV_WD";
        name = "USMC Woodland (CUP)";
        description = "Woodland MARPAT MTV vests with M16A4's (Circa 2000's)";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {"woodland"};
        rolePrefix = "USMC";
        vehicleClassnames[] = {
            {"CO", "CUP_B_HMMWV_Unarmed_USMC"},
            {"SL", "CUP_B_HMMWV_Unarmed_USMC"},
            {"FT", "CUP_B_HMMWV_Unarmed_USMC"},
            {"ATTCH", "CUP_B_HMMWV_Unarmed_USMC"},
            {"ENG", "CUP_B_MTVR_Repair_USMC"},
            {"APC", "CUP_B_AAV_USMC"},
            {"IFV", "CUP_B_LAV25M240_USMC"},
            {"SPAAG", "CUP_B_HMMWV_Avenger_USMC"},
            {"TNK", "CUP_B_M1A1FEP_Tusk_Woodland_USMC"},
            {"TH", "CUP_B_CH53E_USMC"},
            {"AH", "CUP_B_AH1Z_Dynamic_USMC"},
            {"CAS", "CUP_B_AV8B_DYN_USMC"},
            {"Technical", "CUP_B_HMMWV_M2_USMC"}
        };
    };

    class CUP_USMC_MTV_DE {
        gear = "M16A4_USMC";
        uniform = "CUP_USMC_MTV_DE";
        name = "USMC Desert (CUP)";
        description = "Desert MARPAT MTV vests with M16A4's (Circa 2000's)";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {"desert"};
        rolePrefix = "USMC";
        vehicleClassnames[] = {
            {"CO", "CUP_B_HMMWV_Unarmed_USA"},
            {"SL", "CUP_B_HMMWV_Unarmed_USA"},
            {"FT", "CUP_B_HMMWV_Unarmed_USA"},
            {"ATTCH", "CUP_B_HMMWV_Transport_USA"},
            {"ENG", "CUP_B_MTVR_Repair_USA"},
            {"APC", "CUP_B_AAV_USMC"},
            {"IFV", "CUP_B_LAV25M240_desert_USMC"},
            {"SPAAG", "CUP_B_HMMWV_Avenger_USA"},
            {"TNK", "CUP_B_M1A1FEP_TUSK_Desert_USMC"},
            {"TH", "CUP_B_CH53E_USMC"},
            {"AH", "CUP_B_AH1Z_Dynamic_USMC"},
            {"CAS", "CUP_B_AV8B_DYN_USMC"},
            {"Technical", "CUP_B_HMMWV_M2_USA"}
        };
    };

    class CUP_USMC_WD {
        gear = "M4A1_USMC";
        uniform = "CUP_USMC_WD";
        name = "USMC Woodland MARPAT";
        description = "Woodland MARPAT SPC vests with M4A1's (Late 2000's)";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {"woodland"};
        rolePrefix = "USMC";
        vehicleClassnames[] = {
            {"CO", "CUP_B_HMMWV_Unarmed_USMC"},
            {"SL", "CUP_B_HMMWV_Unarmed_USMC"},
            {"FT", "CUP_B_HMMWV_Unarmed_USMC"},
            {"ATTCH", "CUP_B_HMMWV_Unarmed_USMC"},
            {"ENG", "CUP_B_MTVR_Repair_USMC"},
            {"APC", "CUP_B_AAV_USMC"},
            {"IFV", "CUP_B_LAV25M240_USMC"},
            {"SPAAG", "CUP_B_HMMWV_Avenger_USMC"},
            {"TNK", "CUP_B_M1A1FEP_Tusk_Woodland_USMC"},
            {"TH", "CUP_B_CH53E_USMC"},
            {"AH", "CUP_B_AH1Z_Dynamic_USMC"},
            {"CAS", "CUP_B_AV8B_DYN_USMC"},
            {"Technical", "CUP_B_HMMWV_M2_USMC"}
        };
    };

    class CUP_USMC_FROG_DE {
        gear = "M4A1_USMC";
        uniform = "CUP_USMC_DE";
        name = "USMC Desert";
        description = "Desert MARPAT SPC vests with M4A1's (Late 2000's)";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {"desert"};
        rolePrefix = "USMC";
        vehicleClassnames[] = {
            {"CO", "CUP_B_HMMWV_Unarmed_USA"},
            {"SL", "CUP_B_HMMWV_Unarmed_USA"},
            {"FT", "CUP_B_HMMWV_Unarmed_USA"},
            {"ATTCH", "CUP_B_HMMWV_Transport_USA"},
            {"ENG", "CUP_B_MTVR_Repair_USA"},
            {"APC", "CUP_B_AAV_USMC"},
            {"IFV", "CUP_B_LAV25M240_desert_USMC"},
            {"SPAAG", "CUP_B_HMMWV_Avenger_USA"},
            {"TNK", "CUP_B_M1A1FEP_TUSK_Desert_USMC"},
            {"TH", "CUP_B_CH53E_USMC"},
            {"AH", "CUP_B_AH1Z_Dynamic_USMC"},
            {"CAS", "CUP_B_AV8B_DYN_USMC"},
            {"Technical", "CUP_B_HMMWV_M2_USA"}
        };
    };

    class MNP_USMC_SN {
        gear = "M4A1_USMC";
        uniform = "USMC_SN";
        name = "USMC Snow";
        description = "Snow Camo with M4A1's(Modern or Near Future)";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {"snow"};
        rolePrefix = "USMC";
        vehicleClassnames[] = {
            {"CO", "CUP_B_HMMWV_Unarmed_NATO_T"},
            {"SL", "CUP_B_HMMWV_Unarmed_NATO_T"},
            {"FT", "CUP_B_HMMWV_Unarmed_NATO_T"},
            {"ATTCH", "CUP_B_HMMWV_Unarmed_NATO_T"},
            {"ENG", "B_T_Truck_01_Repair_F"},
            {"APC", "CUP_B_AAV_USMC"},
            {"IFV", "CUP_B_LAV25M240_USMC"},
            {"SPAAG", "CUP_B_HMMWV_Avenger_NATO_T"},
            {"TNK", "CUP_B_M1A1FEP_Tusk_Woodland_USMC"},
            {"TH", "CUP_B_CH47F_USA"},
            {"AH", "CUP_B_AH1Z_Dynamic_USMC"},
            {"CAS", "CUP_B_AV8B_DYN_USMC"},
            {"Technical", "CUP_B_HMMWV_M2_NATO_T"}
        };
    };

    class CUP_HIL_CCE {
        gear = "FAMAS_HIL";
        uniform = "CUP_HIL_CCE";
        name = "Horizon Island Legion";
        description = "Tanoa defence force CCE uniforms with FAMAS";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {"woodland", "desert"};
        rolePrefix = "HIL";
        vehicleClassnames[] = {
            {"CO", "CUP_B_M151_HIL"},
            {"SL", "CUP_B_M151_HIL"},
            {"FT", "CUP_B_M151_HIL"},
            {"ATTCH", "CUP_B_M151_HIL"},
            {"ENG", "CUP_B_MTVR_HIL"},
            {"APC", "CUP_B_Boxer_HMG_HIL"},
            {"IFV", "CUP_B_Boxer_GMG_HIL"},
            {"SPAAG", "CUP_B_HMMWV_Avenger_NATO_T"},
            {"TNK", "CUP_B_Leopard2a6_HIL"},
            {"TH", "CUP_B_CH47F_HIL"},
            {"AH", "CUP_B_AW159_HIL"},
            {"CAS", "CUP_B_JAS39_HIL"},
            {"Technical", "CUP_B_M151_M2_HIL"}
        };
    };

    class CUP_HIL_TTS {
        gear = "SCAR_L_HIL";
        uniform = "CUP_HIL_TTS";
        name = "Horizon Island Legion SF";
        description = "Tanoa defence force SF with SCAR-L";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {"woodland"};
        rolePrefix = "HIL";
        vehicleClassnames[] = {
            {"CO", "CUP_B_M151_HIL"},
            {"SL", "CUP_B_M151_HIL"},
            {"FT", "CUP_B_M151_HIL"},
            {"ATTCH", "CUP_B_M151_HIL"},
            {"ENG", "CUP_B_MTVR_HIL"},
            {"APC", "CUP_B_Boxer_HMG_HIL"},
            {"IFV", "CUP_B_Boxer_GMG_HIL"},
            {"SPAAG", "CUP_B_HMMWV_Avenger_NATO_T"},
            {"TNK", "CUP_B_Leopard2a6_HIL"},
            {"TH", "CUP_B_CH47F_HIL"},
            {"AH", "CUP_B_AW159_HIL"},
            {"CAS", "CUP_B_JAS39_HIL"},
            {"Technical", "CUP_B_M151_M2_HIL"}
        };
    };

    class CUP_HIL_RES {
        gear = "FAMAS_HIL_RES";
        uniform = "CUP_HIL_RES";
        name = "Horizon Island Legion Reserve";
        description = "Tanoa defence force reservists OD uniforms with FAMAS";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {"woodland"};
        rolePrefix = "HIL";
        vehicleClassnames[] = {
            {"CO", "CUP_B_M151_HIL"},
            {"SL", "CUP_B_M151_HIL"},
            {"FT", "CUP_B_M151_HIL"},
            {"ATTCH", "CUP_B_M151_HIL"},
            {"ENG", "CUP_B_MTVR_HIL"},
            {"APC", "CUP_B_Boxer_HMG_HIL"},
            {"IFV", "CUP_B_Boxer_GMG_HIL"},
            {"SPAAG", "CUP_B_HMMWV_Avenger_NATO_T"},
            {"TNK", "CUP_B_Leopard2a6_HIL"},
            {"TH", "CUP_B_CH47F_HIL"},
            {"AH", "CUP_B_AW159_HIL"},
            {"CAS", "CUP_B_JAS39_HIL"},
            {"Technical", "CUP_B_M151_M2_HIL"}
        };
    };

    class CUP_USA_RAN_UCP {
        gear = "SCAR_L_US";
        uniform = "CUP_USA_RAN_UCP";
        name = "US Rangers (UCP)";
        description = "UCP ACU uniforms with SCAR-L";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {"desert"};
        rolePrefix = "US Rangers";
        vehicleClassnames[] = {
            {"CO", "CUP_B_HMMWV_Unarmed_USA"},
            {"SL", "CUP_B_HMMWV_Unarmed_USA"},
            {"FT", "CUP_B_HMMWV_Unarmed_USA"},
            {"ATTCH", "CUP_B_HMMWV_Transport_USA"},
            {"ENG", "CUP_B_MTVR_Repair_USA"},
            {"APC", "CUP_B_M1126_ICV_M2_Desert_Slat"},
            {"IFV", "CUP_B_M2A3Bradley_USA_D"},
            {"SPAAG", "CUP_B_M6LineBacker_USA_D"},
            {"TNK", "CUP_B_M1A2SEP_TUSK_Desert_US_Army"},
            {"TH", "CUP_B_UH60M_US"},
            {"AH", "CUP_B_AH64D_DL_USA"},
            {"CAS", "CUP_B_A10_DYN_USA"},
            {"Technical", "CUP_B_HMMWV_M2_USA"}
        };
    };

    class CUP_USA_UCP {
        gear = "M4_US";
        uniform = "CUP_USA_UCP";
        name = "US Army UCP";
        description = "UCP ACU uniforms with M4's";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {"desert"};
        rolePrefix = "US Army";
        vehicleClassnames[] = {
            {"CO", "CUP_B_HMMWV_Unarmed_USA"},
            {"SL", "CUP_B_HMMWV_Unarmed_USA"},
            {"FT", "CUP_B_HMMWV_Unarmed_USA"},
            {"ATTCH", "CUP_B_HMMWV_Transport_USA"},
            {"ENG", "CUP_B_MTVR_Repair_USA"},
            {"APC", "CUP_B_M1126_ICV_M2_Desert_Slat"},
            {"IFV", "CUP_B_M2A3Bradley_USA_D"},
            {"SPAAG", "CUP_B_M6LineBacker_USA_D"},
            {"TNK", "CUP_B_M1A2SEP_TUSK_Desert_US_Army"},
            {"TH", "CUP_B_UH60M_US"},
            {"AH", "CUP_B_AH64D_DL_USA"},
            {"CAS", "CUP_B_A10_DYN_USA"},
            {"Technical", "CUP_B_HMMWV_M2_USA"}
        };
    };

    class CUP_USA_RAN {
        gear = "SCAR_H_US";
        uniform = "CUP_USA_RAN";
        name = "US Rangers Multicam";
        description = "Multicam uniforms with SCAR-H";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {"woodland", "desert"};
        rolePrefix = "US Rangers";
        vehicleClassnames[] = {
            {"CO", "CUP_B_HMMWV_Unarmed_USA"},
            {"SL", "CUP_B_HMMWV_Unarmed_USA"},
            {"FT", "CUP_B_HMMWV_Unarmed_USA"},
            {"ATTCH", "CUP_B_HMMWV_Transport_USA"},
            {"ENG", "CUP_B_MTVR_Repair_USA"},
            {"APC", "CUP_B_M1126_ICV_M2_Desert_Slat"},
            {"IFV", "CUP_B_M2A3Bradley_USA_D"},
            {"SPAAG", "CUP_B_HMMWV_Avenger_USA"},
            {"TNK", "CUP_B_M1A2SEP_TUSK_Desert_US_Army"},
            {"TH", "CUP_B_UH60M_US"},
            {"AH", "CUP_B_AH64D_DL_USA"},
            {"CAS", "CUP_B_A10_DYN_USA"},
            {"Technical", "CUP_B_HMMWV_M2_USA"}
        };
    };

    class CUP_USA_OCP {
        gear = "M4A1_US";
        uniform = "CUP_USA_OCP";
        name = "US Army Multicam";
        description = "Multicam uniforms with M4A1's";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {"woodland", "desert"};
        rolePrefix = "US Army";
        vehicleClassnames[] = {
            {"CO", "CUP_B_HMMWV_Unarmed_USA"},
            {"SL", "CUP_B_HMMWV_Unarmed_USA"},
            {"FT", "CUP_B_HMMWV_Unarmed_USA"},
            {"ATTCH", "CUP_B_HMMWV_Transport_USA"},
            {"ENG", "CUP_B_MTVR_Repair_USA"},
            {"APC", "CUP_B_M1126_ICV_M2_Desert_Slat"},
            {"IFV", "CUP_B_M2A3Bradley_USA_D"},
            {"SPAAG", "CUP_B_M6LineBacker_USA_D"},
            {"TNK", "CUP_B_M1A2SEP_TUSK_Desert_US_Army"},
            {"TH", "CUP_B_UH60M_US"},
            {"AH", "CUP_B_AH64D_DL_USA"},
            {"CAS", "CUP_B_A10_DYN_USA"},
            {"Technical", "CUP_B_HMMWV_M2_USA"}
        };
    };

    class CUP_GER_WD {
        gear = "G36_GER";
        uniform = "CUP_GER_WD";
        name = "German Army Woodland";
        description = "Flecktarn uniforms with G36's";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {"woodland"};
        rolePrefix = "German Army";
        vehicleClassnames[] = {
            {"CO", "CUP_B_FENNEK_GER_Wdl"},
            {"SL", "CUP_B_FENNEK_GER_Wdl"},
            {"FT", "CUP_B_FENNEK_GER_Wdl"},
            {"ATTCH", "gm_demo_nato_mb_u1300l_cargo"},
            {"ENG", "B_Truck_01_Repair_F"},
            {"APC", "CUP_B_Boxer_HMG_GER_WDL"},
            {"IFV", "CUP_B_Boxer_GMG_GER_WDL"},
            {"SPAAG", "I_LT_01_AA_F"},
            {"TNK", "CUP_B_Leopard2A6_GER"},
            {"TH", "CUP_B_UH1D_slick_GER_KSK"},
            {"AH", "CUP_B_UH1D_gunship_GER_KSK"},
            {"CAS", "B_Plane_CAS_01_F"},
            {"Technical", "CUP_B_Dingo_GER_Wdl"}
        };
    };

    class CUP_GER_DE {
        gear = "G36_GER";
        uniform = "CUP_GER_DE";
        name = "German Army Desert";
        description = "Tropentarn uniforms with G36's";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {"desert"};
        rolePrefix = "German Army";
        vehicleClassnames[] = {
            {"CO", "CUP_B_FENNEK_GER_Des"},
            {"SL", "CUP_B_FENNEK_GER_Des"},
            {"FT", "CUP_B_FENNEK_GER_Des"},
            {"ATTCH", "gm_demo_nato_mb_u1300l_cargo"},
            {"ENG", "B_Truck_01_Repair_F"},
            {"APC", "CUP_B_Boxer_HMG_GER_DES"},
            {"IFV", "CUP_B_Boxer_GMG_GER_DES"},
            {"SPAAG", "I_LT_01_AA_F"},
            {"TNK", "CUP_B_Leopard2A6DST_GER"},
            {"TH", "CUP_B_UH1D_GER_KSK_Des"},
            {"AH", "CUP_B_UH1D_gunship_GER_KSK_Des"},
            {"CAS", "B_Plane_CAS_01_F"},
            {"Technical", "CUP_B_Dingo_GER_Des"}
        };
    };

    class CUP_KSK_WD {
        gear = "HK416_KSK";
        uniform = "CUP_KSK_WD";
        name = "German KSK Woodland";
        description = "Flecktarn SF with HK416's";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {"woodland"};
        rolePrefix = "German KSK";
        vehicleClassnames[] = {
            {"CO", "CUP_B_FENNEK_GER_Wdl"},
            {"SL", "CUP_B_FENNEK_GER_Wdl"},
            {"FT", "CUP_B_FENNEK_GER_Wdl"},
            {"ATTCH", "gm_demo_nato_mb_u1300l_cargo"},
            {"ENG", "B_Truck_01_Repair_F"},
            {"APC", "CUP_B_Boxer_HMG_GER_WDL"},
            {"IFV", "CUP_B_Boxer_GMG_GER_WDL"},
            {"SPAAG", "I_LT_01_AA_F"},
            {"TNK", "CUP_B_Leopard2A6_GER"},
            {"TH", "CUP_B_UH1D_slick_GER_KSK"},
            {"AH", "CUP_B_UH1D_gunship_GER_KSK"},
            {"CAS", "B_Plane_CAS_01_F"},
            {"Technical", "CUP_B_Dingo_GER_Wdl"}
        };
    };

    class CUP_KSK_DE {
        gear = "HK416_KSK";
        uniform = "CUP_KSK_DE";
        name = "German KSK Desert";
        description = "Tropentarn SF with HK416's";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {"desert"};
        rolePrefix = "German KSK";
        vehicleClassnames[] = {
            {"CO", "CUP_B_FENNEK_GER_Des"},
            {"SL", "CUP_B_FENNEK_GER_Des"},
            {"FT", "CUP_B_FENNEK_GER_Des"},
            {"ATTCH", "gm_demo_nato_mb_u1300l_cargo"},
            {"ENG", "B_Truck_01_Repair_F"},
            {"APC", "CUP_B_Boxer_HMG_GER_DES"},
            {"IFV", "CUP_B_Boxer_GMG_GER_DES"},
            {"SPAAG", "I_LT_01_AA_F"},
            {"TNK", "CUP_B_Leopard2A6DST_GER"},
            {"TH", "CUP_B_UH1D_GER_KSK_Des"},
            {"AH", "CUP_B_UH1D_gunship_GER_KSK_Des"},
            {"CAS", "B_Plane_CAS_01_F"},
            {"Technical", "CUP_B_Dingo_GER_Des"}
        };
    };

    class MNP_CA_WD {
        gear = "C7_CAN";
        uniform = "CAN_WD";
        name = "Canadian Army Woodland";
        description = "Woodland CADPAT uniforms with C7";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {"woodland"};
        rolePrefix = "Canadian Army";
        vehicleClassnames[] = {
            {"CO", "CUP_B_HMMWV_Unarmed_USMC"},
            {"SL", "CUP_B_HMMWV_Unarmed_USMC"},
            {"FT", "CUP_B_HMMWV_Unarmed_USMC"},
            {"ATTCH", "CUP_B_HMMWV_Unarmed_USMC"},
            {"ENG", "CUP_B_HMMWV_Unarmed_USMC"},
            {"APC", "ARK_M113_CAN"},
            {"IFV", "CUP_B_LAV25M240_USMC"},
            {"SPAAG", "CUP_B_M163_USA"},
            {"TNK", "ARK_LEO2_CAN"},
            {"TH", "CUP_B_UH1Y_UNA_USMC"},
            {"AH", "CUP_B_UH1D_gunship_GER_KSK_Des"},
            {"CAS", "CUP_B_AV8B_DYN_USMC"},
            {"Technical", "CUP_B_HMMWV_M2_USMC"}
        };
    };

    class MNP_CA_DE {
        gear = "C7_CAN";
        uniform = "CAN_DE";
        name = "Canadian Army Desert";
        description = "Desert CADPAT uniforms with C7";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {"desert"};
        rolePrefix = "Canadian Army";
        vehicleClassnames[] = {
            {"CO", "CUP_B_HMMWV_Unarmed_USA"},
            {"SL", "CUP_B_HMMWV_Unarmed_USA"},
            {"FT", "CUP_B_HMMWV_Unarmed_USA"},
            {"ATTCH", "CUP_B_HMMWV_Transport_USA"},
            {"ENG", "B_Truck_01_Repair_F"},
            {"APC", "ARK_M113_CAN"},
            {"IFV", "CUP_B_LAV25M240_USMC"},
            {"SPAAG", "CUP_B_M163_USA"},
            {"TNK", "ARK_LEO2_CAN"},
            {"TH", "CUP_B_UH1Y_UNA_USMC"},
            {"AH", "CUP_B_UH1D_gunship_GER_KSK_Des"},
            {"CAS", "CUP_B_AV8B_DYN_USMC"},
            {"Technical", "CUP_B_HMMWV_M2_USA"}
        };
    };

    class MNP_AUS {
        gear = "AUGA3_AUS";
        uniform = "AUS_WD";
        name = "Australian Army";
        description = "Auscam uniforms with AUG A3's";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {"woodland", "desert"};
        rolePrefix = "Australian Army";
        vehicleClassnames[] = {
            {"CO", "ARK_LR_TRANS_AUS"},
            {"SL", "ARK_LR_TRANS_AUS"},
            {"FT", "ARK_LR_TRANS_AUS"},
            {"ATTCH", "ark_demo_aus_mb_u13001_cargo"},
            {"ENG", "B_Truck_01_Repair_F"},
            {"APC", "ARK_M113_AUS"},
            {"IFV", "ARK_LAV25M240_AUS"},
            {"SPAAG", "CUP_B_M163_USA"},
            {"TNK", "ARK_M1A1_AUS"},
            {"TH", "ARK_MH60_AUS"},
            {"AH", "CUP_B_UH1D_gunship_GER_KSK_Des"},
            {"CAS", "CUP_B_AV8B_DYN_USMC"},
            {"Technical", "CUP_B_LR_Special_M2_GB_W"}
        };
    };

    class MNP_AUS_AMCU {
        gear = "AUGA3_AUS";
        uniform = "AUS_AMCU";
        name = "Australian Army AMCU";
        description = "AMCU uniforms with AUG A3's";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {"woodland", "desert"};
        rolePrefix = "Australian Army";
        vehicleClassnames[] = {
            {"CO", "ARK_LR_TRANS_AUS"},
            {"SL", "ARK_LR_TRANS_AUS"},
            {"FT", "ARK_LR_TRANS_AUS"},
            {"ATTCH", "ark_demo_aus_mb_u13001_cargo"},
            {"ENG", "B_Truck_01_Repair_F"},
            {"APC", "ARK_M113_AUS"},
            {"IFV", "ARK_LAV25M240_AUS"},
            {"SPAAG", "CUP_B_M163_USA"},
            {"TNK", "ARK_M1A1_AUS_TUSK"},
            {"TH", "ARK_MH60_AUS"},
            {"AH", "CUP_B_UH1D_gunship_GER_KSK_Des"},
            {"CAS", "CUP_B_AV8B_DYN_USMC"},
            {"Technical", "CUP_B_LR_Special_M2_GB_W"}
        };
    };

    class MNP_ROK {
        gear = "HK416_ROK";
        uniform = "ROK_WD";
        name = "Republic of Korea";
        description = "Digital Woodland uniforms with M16A4's";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {"woodland"};
        rolePrefix = "ROK Army";
        vehicleClassnames[] = {
            {"CO", "CUP_B_HMMWV_Unarmed_USMC"},
            {"SL", "CUP_B_HMMWV_Unarmed_USMC"},
            {"FT", "CUP_B_HMMWV_Unarmed_USMC"},
            {"ATTCH", "CUP_B_HMMWV_Unarmed_USMC"},
            {"ENG", "B_Truck_01_Repair_F"},
            {"APC", "CUP_B_M113_USA"},
            {"IFV", "CUP_B_M113_USA"},
            {"SPAAG", "CUP_B_M163_USA"},
            {"TNK", "CUP_B_M1A1_Woodland_US_Army"},
            {"TH", "CUP_B_UH60M_US"},
            {"AH", "CUP_B_AH1Z_Dynamic_USMC"},
            {"CAS", "CUP_B_AV8B_DYN_USMC"},
            {"Technical", "CUP_B_HMMWV_M2_USA"}
        };
    };

    class MNP_UKR_TTSKO {
        gear = "AK74_UKR";
        uniform = "UKR_TTSKO";
        name = "Ukranian Army";
        description = "Woodland TTSKO uniforms and AK-74's";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {"woodland"};
        rolePrefix = "Ukrainian Army";
        vehicleClassnames[] = {
            {"CO", "CUP_B_UAZ_Unarmed_CDF"},
            {"SL", "CUP_B_UAZ_Unarmed_CDF"},
            {"FT", "CUP_B_UAZ_Unarmed_CDF"},
            {"ATTCH", "CUP_B_UAZ_Unarmed_CDF"},
            {"ENG", "CUP_B_Ural_Repair_CDF"},
            {"APC", "CUP_B_MTLB_pk_CDF"},
            {"IFV", "CUP_B_BMP2_CDF"},
            {"SPAAG", "CUP_B_ZSU23_CDF"},
            {"TNK", "CUP_B_T72_CDF"},
            {"TH", "CUP_B_Mi17_CDF"},
            {"AH", "CUP_B_Mi24_D_Dynamic_CDF"},
            {"CAS", "CUP_B_Su25_Dyn_CDF"},
            {"Technical", "CUP_B_UAZ_MG_CDF"}
        };
    };

    class CUP_BAF_WD {
        gear = "L85_BAF";
        uniform = "CUP_BAF_WD";
        name = "British Armed Forces (Woodland DPM)";
        description = "Woodland DPM and L85's";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {"woodland"};
        rolePrefix = "BAF";
        vehicleClassnames[] = {
            {"CO", "CUP_B_LR_Transport_GB_W"},
            {"SL", "CUP_B_LR_Transport_GB_W"},
            {"FT", "CUP_B_LR_Transport_GB_W"},
            {"ATTCH", "gm_demo_nato_mb_u1300l_cargo"},
            {"ENG", "CUP_B_LR_Transport_GB_W"},
            {"APC", "CUP_B_FV432_Bulldog_GB_W_RWS"},
            {"IFV", "CUP_B_MCV80_GB_W"},
            {"SPAAG", "CUP_B_M163_USA"},
            {"TNK", "CUP_B_FV510_GB_W_SLAT"},
            {"TH", "CUP_B_SA330_Puma_HC2_BAF"},
            {"AH", "CUP_B_AH1_DL_BAF"},
            {"CAS", "CUP_B_GR9_DYN_GB"},
            {"Technical", "CUP_B_LR_Special_M2_GB_W"}
        };
    };

    class CUP_BAF_DE {
        gear = "L85_BAF";
        uniform = "CUP_BAF_DE";
        name = "British Armed Forces (Desert DPM)";
        description = "Desert DPM and L85's";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {"desert"};
        rolePrefix = "BAF";
        vehicleClassnames[] = {
            {"CO", "CUP_B_LR_Transport_GB_D"},
            {"SL", "CUP_B_LR_Transport_GB_D"},
            {"FT", "CUP_B_LR_Transport_GB_D"},
            {"ATTCH", "gm_demo_nato_mb_u1300l_cargo"},
            {"ENG", "CUP_B_LR_Transport_GB_D"},
            {"APC", "CUP_B_FV432_Bulldog_GB_D_RWS"},
            {"IFV", "CUP_B_MCV80_GB_D"},
            {"SPAAG", "CUP_B_M163_USA"},
            {"TNK", "CUP_B_FV510_GB_D_SLAT"},
            {"TH", "CUP_B_Merlin_HC3A_GB_Armed"},
            {"AH", "CUP_B_AH1_DL_BAF"},
            {"CAS", "CUP_B_GR9_DYN_GB"},
            {"Technical", "CUP_B_LR_Special_M2_GB_D"}
        };
    };

    class CUP_BAF_MTP {
        gear = "L85_BAF_RIS";
        uniform = "CUP_BAF_MTP";
        name = "British Armed Forces (MTP)";
        description = "Multicam DPM and L85's and NLAW AT";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {"desert"};
        rolePrefix = "BAF";
        vehicleClassnames[] = {
            {"CO", "CUP_B_LR_Transport_GB_D"},
            {"SL", "CUP_B_LR_Transport_GB_D"},
            {"FT", "CUP_B_LR_Transport_GB_D"},
            {"ATTCH", "gm_demo_nato_mb_u1300l_cargo"},
            {"ENG", "CUP_B_LR_Transport_GB_D"},
            {"APC", "CUP_B_FV432_Bulldog_GB_D_RWS"},
            {"IFV", "CUP_B_MCV80_GB_D"},
            {"SPAAG", "CUP_B_M163_USA"},
            {"TNK", "CUP_B_FV510_GB_D_SLAT"},
            {"TH", "CUP_B_Merlin_HC3A_GB_Armed"},
            {"AH", "CUP_B_AH1_DL_BAF"},
            {"CAS", "CUP_B_GR9_DYN_GB"},
            {"Technical", "CUP_B_LR_Special_M2_GB_D"}
        };
    };

    class BAF_CBRN {
        gear = "L85_BAF_RIS";
        uniform = "BAF_CBRN";
        name = "British Armed Forces (CBRN)";
        description = "Multicam CBRN and L85's and NLAW AT";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {};
        rolePrefix = "BAF";
        vehicleClassnames[] = {
            {"CO", "CUP_B_LR_Transport_GB_D"},
            {"SL", "CUP_B_LR_Transport_GB_D"},
            {"FT", "CUP_B_LR_Transport_GB_D"},
            {"ATTCH", "gm_demo_nato_mb_u1300l_cargo"},
            {"ENG", "CUP_B_LR_Transport_GB_D"},
            {"APC", "CUP_B_FV432_Bulldog_GB_D_RWS"},
            {"IFV", "CUP_B_MCV80_GB_D"},
            {"SPAAG", "CUP_B_M163_USA"},
            {"TNK", "CUP_B_FV510_GB_D_SLAT"},
            {"TH", "CUP_B_Merlin_HC3A_GB_Armed"},
            {"AH", "CUP_B_AH1_DL_BAF"},
            {"CAS", "CUP_B_GR9_DYN_GB"},
            {"Technical", "CUP_B_LR_Special_M2_GB_D"}
        };
    };

    class CUP_CDF_DES {
        gear = "DSA58_CDF";
        uniform = "CUP_CDF_DES";
        name = "CDF (Desert)";
        description = "Desert CDF with DSA-58";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {"desert"};
        rolePrefix = "CDF";
        vehicleClassnames[] = {
            {"CO", "CUP_B_UAZ_Unarmed_CDF"},
            {"SL", "CUP_B_UAZ_Unarmed_CDF"},
            {"FT", "CUP_B_Kamaz_CDF"},
            {"ATTCH", "CUP_B_Kamaz_CDF"},
            {"ENG", "CUP_B_Kamaz_Reammo_CDF"},
            {"APC", "CUP_B_BTR60_CDF"},
            {"IFV", "CUP_B_BMP2_CDF"},
            {"SPAAG", "CUP_B_ZSU23_CDF"},
            {"TNK", "CUP_B_T72_CDF"},
            {"TH", "CUP_B_Mi17_CDF"},
            {"AH", "CUP_B_Mi24_D_Dynamic_CDF"},
            {"CAS", "CUP_B_Su25_Dyn_CDF"},
            {"Technical", "CUP_B_UAZ_MG_CDF"}
        };
    };

    class CUP_CDF_FOR {
        gear = "DSA58_CDF";
        uniform = "CUP_CDF_FOR";
        name = "CDF (Forest)";
        description = "Forest CDF with DSA-58";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {"woodland"};
        rolePrefix = "CDF";
        vehicleClassnames[] = {
            {"CO", "CUP_B_UAZ_Unarmed_CDF"},
            {"SL", "CUP_B_UAZ_Unarmed_CDF"},
            {"FT", "CUP_B_Kamaz_CDF"},
            {"ATTCH", "CUP_B_Kamaz_CDF"},
            {"ENG", "CUP_B_Kamaz_Reammo_CDF"},
            {"APC", "CUP_B_BTR60_CDF"},
            {"IFV", "CUP_B_BMP2_CDF"},
            {"SPAAG", "CUP_B_ZSU23_CDF"},
            {"TNK", "CUP_B_T72_CDF"},
            {"TH", "CUP_B_Mi17_CDF"},
            {"AH", "CUP_B_Mi24_D_Dynamic_CDF"},
            {"CAS", "CUP_B_Su25_Dyn_CDF"},
            {"Technical", "CUP_B_UAZ_MG_CDF"}
        };
    };

    class CUP_CDF_MOU {
        gear = "DSA58_CDF";
        uniform = "CUP_CDF_MOU";
        name = "CDF (Mountain)";
        description = "Mountain CDF with DSA-58";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {"woodland"};
        rolePrefix = "CDF";
        vehicleClassnames[] = {
            {"CO", "CUP_B_UAZ_Unarmed_CDF"},
            {"SL", "CUP_B_UAZ_Unarmed_CDF"},
            {"FT", "CUP_B_Kamaz_CDF"},
            {"ATTCH", "CUP_B_Kamaz_CDF"},
            {"ENG", "CUP_B_Kamaz_Reammo_CDF"},
            {"APC", "CUP_B_BTR60_CDF"},
            {"IFV", "CUP_B_BMP2_CDF"},
            {"SPAAG", "CUP_B_ZSU23_CDF"},
            {"TNK", "CUP_B_T72_CDF"},
            {"TH", "CUP_B_Mi17_CDF"},
            {"AH", "CUP_B_Mi24_D_Dynamic_CDF"},
            {"CAS", "CUP_B_Su25_Dyn_CDF"},
            {"Technical", "CUP_B_UAZ_MG_CDF"}
        };
    };

    class CUP_CDF_SN {
        gear = "DSA58_CDF";
        uniform = "CUP_CDF_SN";
        name = "CDF (Winter)";
        description = "Winter CDF with DSA-58";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {"snow"};
        rolePrefix = "CDF";
        vehicleClassnames[] = {
            {"CO", "CUP_B_UAZ_Unarmed_CDF"},
            {"SL", "CUP_B_UAZ_Unarmed_CDF"},
            {"FT", "CUP_B_Kamaz_CDF"},
            {"ATTCH", "CUP_B_Kamaz_CDF"},
            {"ENG", "CUP_B_Kamaz_Reammo_CDF"},
            {"APC", "CUP_B_BTR60_CDF"},
            {"IFV", "CUP_B_BMP2_CDF"},
            {"SPAAG", "CUP_B_ZSU23_CDF"},
            {"TNK", "CUP_B_T72_CDF"},
            {"TH", "CUP_B_Mi17_CDF"},
            {"AH", "CUP_B_Mi24_D_Dynamic_CDF"},
            {"CAS", "CUP_B_Su25_Dyn_CDF"},
            {"Technical", "CUP_B_UAZ_MG_CDF"}
        };
    };

    class GMX_CDF_TTSKO {
        gear = "AK74_CDF";
        uniform = "GMX_CDF_TTSKO";
        name = "GMX CDF (TTSKO)";
        description = "CDF with assorted AK74 and AKS74";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {"woodland"};
        rolePrefix = "CDF";
        vehicleClassnames[] = {
            {"CO", "gmx_cdf_uaz469_cargo_wdl"},
            {"SL", "gmx_cdf_uaz469_cargo_wdl"},
            {"FT", "gmx_cdf_uaz469_cargo_wdl"},
            {"ATTCH", "gmx_cdf_ural4320_cargo_wdl"},
            {"ENG", "gmx_cdf_ural4320_reammo_wdl"},
            {"APC", "gmx_cdf_btr60pb_wdl"},
            {"IFV", "gmx_cdf_bmp1sp2_wdl"},
            {"SPAAG", "gmx_cdf_zsu234v1_wdl"},
            {"TNK", "gmx_cdf_t55am2b_wdl"},
            {"TH", "gmx_cdf_mi2t_wdl"},
            {"AH", "gmx_cdf_mi2urpg_wdl"},
            {"CAS", "CUP_B_Su25_Dyn_CDF"},
            {"Technical", "gmx_cdf_uaz469_dshkm_wdl"}
        };
    };

    class GMX_CDF_DIGITAL {
        gear = "AK105_CDF";
        uniform = "GMX_CDF_DIGITAL";
        name = "GMX CDF (Digital TTSKO)";
        description = "CDF with assorted AK105";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {"woodland"};
        rolePrefix = "CDF";
        vehicleClassnames[] = {
            {"CO", "gmx_cdf_uaz469_cargo_wdl"},
            {"SL", "gmx_cdf_uaz469_cargo_wdl"},
            {"FT", "gmx_cdf_uaz469_cargo_wdl"},
            {"ATTCH", "gmx_cdf_ural4320_cargo_wdl"},
            {"ENG", "gmx_cdf_ural4320_reammo_wdl"},
            {"APC", "gmx_cdf_btr60pb_wdl"},
            {"IFV", "gmx_cdf2022_marder1a2_wdl"},
            {"SPAAG", "gmx_cdf2022_gepard1a1_wdl"},
            {"TNK", "gmx_cdf2022_kpz1a5_wdl"},
            {"TH", "gmx_cdf_mi2t_wdl"},
            {"AH", "gmx_cdf_mi2urpg_wdl"},
            {"CAS", "CUP_B_Su25_Dyn_CDF"},
            {"Technical", "gmx_cdf_uaz469_dshkm_wdl"}
        };
    };

    class GMX_CDF_OREL {
        gear = "AKM_CDF";
        uniform = "GMX_CDF_OREL";
        name = "GMX CDF Police";
        description = "Chernarus OREL Police with assorted AKM";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {"woodland"};
        rolePrefix = "CDF OREL";
        vehicleClassnames[] = {
            {"CO", "gmx_cdf_uaz469_cargo_wdl"},
            {"SL", "gmx_cdf_uaz469_cargo_wdl"},
            {"FT", "gmx_cdf_uaz469_cargo_wdl"},
            {"ATTCH", "gmx_cdf_ural4320_cargo_wdl"},
            {"ENG", "gmx_cdf_ural4320_reammo_wdl"},
            {"APC", "gmx_cdf_btr60pb_wdl"},
            {"IFV", "gmx_cdf_bmp1sp2_wdl"},
            {"SPAAG", "gmx_cdf_zsu234v1_wdl"},
            {"TNK", "gmx_cdf_t55am2b_wdl"},
            {"TH", "gmx_cdf_mi2t_wdl"},
            {"AH", "gmx_cdf_mi2urpg_wdl"},
            {"CAS", "CUP_B_Su25_Dyn_CDF"},
            {"Technical", "gmx_cdf_uaz469_dshkm_wdl"}
        };
    };

    class GMX_CDF_NG {
        gear = "AK74_CDF_NG";
        uniform = "GMX_CDF_NG";
        name = "GMX CDF National Guard";
        description = "CDF National Guard with Cobra optic AK74";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {"woodland"};
        rolePrefix = "CDF National Guard";
        vehicleClassnames[] = {
            {"CO", "gmx_cdf_uaz469_cargo_wdl"},
            {"SL", "gmx_cdf_uaz469_cargo_wdl"},
            {"FT", "gmx_cdf_uaz469_cargo_wdl"},
            {"ATTCH", "gmx_cdf_ural4320_cargo_wdl"},
            {"ENG", "gmx_cdf_ural4320_reammo_wdl"},
            {"APC", "gmx_cdf_btr60pb_wdl"},
            {"IFV", "gmx_cdf_bmp1sp2_wdl"},
            {"SPAAG", "gmx_cdf_zsu234v1_wdl"},
            {"TNK", "gmx_cdf_t55am2b_wdl"},
            {"TH", "gmx_cdf_mi2t_wdl"},
            {"AH", "gmx_cdf_mi2urpg_wdl"},
            {"CAS", "CUP_B_Su25_Dyn_CDF"},
            {"Technical", "gmx_cdf_uaz469_dshkm_wdl"}
        };
    };

    class GMX_CDF_MC {
        gear = "BREN807_CDF";
        uniform = "GMX_CDF_MC";
        name = "GMX CDF (Multicam)";
        description = "CDF with Bren 807";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {"woodland", "desert"};
        rolePrefix = "CDF";
        vehicleClassnames[] = {
            {"CO", "gmx_cdf_uaz469_cargo_wdl"},
            {"SL", "gmx_cdf_uaz469_cargo_wdl"},
            {"FT", "gmx_cdf_uaz469_cargo_wdl"},
            {"ATTCH", "gmx_cdf_ural4320_cargo_wdl"},
            {"ENG", "gmx_cdf_ural4320_reammo_wdl"},
            {"APC", "gmx_cdf_btr60pb_wdl"},
            {"IFV", "gmx_cdf2022_marder1a2_wdl"},
            {"SPAAG", "gmx_cdf2022_gepard1a1_wdl"},
            {"TNK", "gmx_cdf2022_kpz1a5_wdl"},
            {"TH", "gmx_cdf_mi2t_wdl"},
            {"AH", "gmx_cdf_mi2urpg_wdl"},
            {"CAS", "CUP_B_Su25_Dyn_CDF"},
            {"Technical", "gmx_cdf_uaz469_dshkm_wdl"}
        };
    };

    class MNP_OPF_F_SN {
        gear = "Katiba_CSAT";
        uniform = "CSAT_SN";
        name = "CSAT Snow";
        description = "Snow CSAT Uniforms and Katiba";
        languages[] = {{"east", 100}};
        side = "east";
        camouflage[] = {"snow"};
        rolePrefix = "CSAT";
        vehicleClassnames[] = {
            {"CO", "CUP_O_UAZ_Unarmed_CSAT"},
            {"SL", "CUP_O_UAZ_Unarmed_CSAT"},
            {"FT", "CUP_O_UAZ_Unarmed_CSAT"},
            {"ATTCH", "CUP_O_UAZ_Unarmed_CSAT"},
            {"ENG", "O_Truck_03_repair_F"},
            {"APC", "O_APC_Wheeled_02_rcws_F"},
            {"IFV", "O_APC_Tracked_02_cannon_F"},
            {"SPAAG", "O_APC_Tracked_02_AA_F"},
            {"TNK", "O_MBT_02_cannon_F"},
            {"TH", "O_Heli_Light_02_F"},
            {"AH", "O_Heli_Attack_02_F"},
            {"CAS", "O_Plane_CAS_02_F"},
            {"Technical", "CUP_O_UAZ_MG_CSAT"}
        };
    };

    class MNP_CH_WD {
        gear = "CAR95_CN";
        uniform = "CN_WD";
        name = "PLA Universal";
        description = "Chinese Universal Uniforms and CAR-95's";
        languages[] = {{"east", 100}};
        side = "east";
        camouflage[] = {"woodland", "desert"};
        rolePrefix = "PLA Ground Forces";
        vehicleClassnames[] = {
            {"CO", "CUP_O_UAZ_Unarmed_SLA"},
            {"SL", "CUP_O_UAZ_Unarmed_SLA"},
            {"FT", "CUP_O_UAZ_Unarmed_SLA"},
            {"ATTCH", "gm_demo_nato_mb_u1300l_cargo"},
            {"ENG", "CUP_O_Ural_Repair_SLA"},
            {"APC", "CUP_O_BRDM2_SLA"},
            {"IFV", "CUP_I_BMP1_TK_GUE"},
            {"SPAAG", "CUP_O_ZSU23_SLA"},
            {"TNK", "CUP_O_T72_SLA"},
            {"TH", "CUP_O_Mi8_SLA_1"},
            {"AH", "O_Heli_Light_02_v2_F"},
            {"CAS", "CUP_O_Su25_Dyn_SLA"},
            {"Technical", "CUP_O_UAZ_MG_SLA"}
        };
    };

    class MNP_CH_WD2 {
        gear = "CAR95_CN";
        uniform = "CN_WD2";
        name = "PLA Woodland";
        description = "Chinese Woodland Uniforms and CAR-95's";
        languages[] = {{"east", 100}};
        side = "east";
        camouflage[] = {"woodland"};
        rolePrefix = "PLA Ground Forces";
        vehicleClassnames[] = {
            {"CO", "CUP_O_UAZ_Unarmed_SLA"},
            {"SL", "CUP_O_UAZ_Unarmed_SLA"},
            {"FT", "CUP_O_UAZ_Unarmed_SLA"},
            {"ATTCH", "gm_demo_nato_mb_u1300l_cargo"},
            {"ENG", "CUP_O_Ural_Repair_SLA"},
            {"APC", "CUP_O_BRDM2_SLA"},
            {"IFV", "CUP_I_BMP1_TK_GUE"},
            {"SPAAG", "CUP_O_ZSU23_SLA"},
            {"TNK", "CUP_O_T72_SLA"},
            {"TH", "CUP_O_Mi8_SLA_1"},
            {"AH", "O_Heli_Light_02_v2_F"},
            {"CAS", "CUP_O_Su25_Dyn_SLA"},
            {"Technical", "CUP_O_UAZ_MG_SLA"}
        };
    };

    class MNP_CH_DE {
        gear = "CAR95_CN";
        uniform = "CN_DE";
        name = "PLA Desert";
        description = "Chinese Desert Uniforms and CAR-95's";
        languages[] = {{"east", 100}};
        side = "east";
        camouflage[] = {"desert"};
        rolePrefix = "PLA Ground Forces";
        vehicleClassnames[] = {
            {"CO", "CUP_O_UAZ_Unarmed_SLA"},
            {"SL", "CUP_O_UAZ_Unarmed_SLA"},
            {"FT", "CUP_O_UAZ_Unarmed_SLA"},
            {"ATTCH", "gm_demo_nato_mb_u1300l_cargo"},
            {"ENG", "CUP_O_Ural_Repair_SLA"},
            {"APC", "CUP_O_BRDM2_SLA"},
            {"IFV", "CUP_I_BMP1_TK_GUE"},
            {"SPAAG", "CUP_O_ZSU23_SLA"},
            {"TNK", "CUP_O_T72_SLA"},
            {"TH", "CUP_O_Mi8_SLA_1"},
            {"AH", "O_Heli_Light_02_v2_F"},
            {"CAS", "CUP_O_Su25_Dyn_SLA"},
            {"Technical", "CUP_O_UAZ_MG_SLA"}
        };
    };

    class MNP_CH_MAR {
        gear = "CAR95_CN";
        uniform = "CN_MAR";
        name = "PLA Marine";
        description = "Chinese Marine Uniforms and CAR-95's";
        languages[] = {{"east", 100}};
        side = "east";
        camouflage[] = {"woodland", "desert"};
        rolePrefix = "PLAN Marines";
        vehicleClassnames[] = {
            {"CO", "CUP_O_UAZ_Unarmed_SLA"},
            {"SL", "CUP_O_UAZ_Unarmed_SLA"},
            {"FT", "CUP_O_UAZ_Unarmed_SLA"},
            {"ATTCH", "gm_demo_nato_mb_u1300l_cargo"},
            {"ENG", "CUP_O_Ural_Repair_SLA"},
            {"APC", "CUP_O_BRDM2_SLA"},
            {"IFV", "CUP_I_BMP1_TK_GUE"},
            {"SPAAG", "CUP_O_ZSU23_SLA"},
            {"TNK", "CUP_I_T55_TK_GUE"},
            {"TH", "CUP_O_Mi8_SLA_1"},
            {"AH", "O_Heli_Light_02_v2_F"},
            {"CAS", "CUP_O_Su25_Dyn_SLA"},
            {"Technical", "CUP_O_UAZ_MG_SLA"}
        };
    };

    class CUP_RU_MOD_DE {
        gear = "AK74MZ_RU";
        uniform = "CUP_RU_MOD_DE";
        name = "Russian Modern Desert";
        description = "Digital Desert Uniforms and Zenitco AK-74M's";
        languages[] = {{"east", 100}};
        side = "east";
        camouflage[] = {"desert"};
        rolePrefix = "Russian Army";
        vehicleClassnames[] = {
            {"CO", "CUP_O_UAZ_Unarmed_RU"},
            {"SL", "CUP_O_Kamaz_RU"},
            {"FT", "CUP_O_UAZ_Unarmed_RU"},
            {"ATTCH", "CUP_O_UAZ_Unarmed_RU"},
            {"ENG", "CUP_O_Kamaz_Reammo_RU"},
            {"APC", "CUP_O_BRDM2_RU"},
            {"IFV", "CUP_O_BMP2_RU"},
            {"SPAAG", "CUP_O_2S6_RU"},
            {"TNK", "CUP_O_T90_RU"},
            {"TH", "CUP_O_Mi8_RU"},
            {"AH", "CUP_O_Mi24_V_Dynamic_RU"},
            {"CAS", "CUP_O_Su25_Dyn_RU"},
            {"Technical", "CUP_O_UAZ_MG_RU"}
        };
    };

    class CUP_RU_MOD_PK {
        gear = "AK74MZ_RU";
        uniform = "CUP_RU_MOD_PK";
        name = "Russian Modern Pink Desert";
        description = "Pink Desert Uniforms and Zenitco AK-74M's";
        languages[] = {{"east", 100}};
        side = "east";
        camouflage[] = {"desert"};
        rolePrefix = "Russian Army";
        vehicleClassnames[] = {
            {"CO", "CUP_O_UAZ_Unarmed_RU"},
            {"SL", "CUP_O_Kamaz_RU"},
            {"FT", "CUP_O_UAZ_Unarmed_RU"},
            {"ATTCH", "CUP_O_UAZ_Unarmed_RU"},
            {"ENG", "CUP_O_Kamaz_Reammo_RU"},
            {"APC", "CUP_O_BRDM2_RU"},
            {"IFV", "CUP_O_BMP2_RU"},
            {"SPAAG", "CUP_O_2S6_RU"},
            {"TNK", "CUP_O_T90_RU"},
            {"TH", "CUP_O_Mi8_RU"},
            {"AH", "CUP_O_Mi24_V_Dynamic_RU"},
            {"CAS", "CUP_O_Su25_Dyn_RU"},
            {"Technical", "CUP_O_UAZ_MG_RU"}
        };
    };

    class CUP_RU_MOD_WD {
        gear = "AK74MZ_RU";
        uniform = "CUP_RU_MOD_WD";
        name = "Russian Modern Woodland";
        description = "Digital Woodland Uniforms and Zenitco AK-74M's";
        languages[] = {{"east", 100}};
        side = "east";
        camouflage[] = {"woodland"};
        rolePrefix = "Russian Army";
        vehicleClassnames[] = {
            {"CO", "CUP_O_UAZ_Unarmed_RU"},
            {"SL", "CUP_O_Kamaz_RU"},
            {"FT", "CUP_O_UAZ_Unarmed_RU"},
            {"ATTCH", "CUP_O_UAZ_Unarmed_RU"},
            {"ENG", "CUP_O_Kamaz_Reammo_RU"},
            {"APC", "CUP_O_BRDM2_RU"},
            {"IFV", "CUP_O_BMP2_RU"},
            {"SPAAG", "CUP_O_2S6_RU"},
            {"TNK", "CUP_O_T90_RU"},
            {"TH", "CUP_O_Mi8_RU"},
            {"AH", "CUP_O_Mi24_V_Dynamic_RU"},
            {"CAS", "CUP_O_Su25_Dyn_RU"},
            {"Technical", "CUP_O_UAZ_MG_RU"}
        };
    };

    class CUP_RU_MOD_SN {
        gear = "AK74MZ_RU";
        uniform = "CUP_RU_MOD_SN";
        name = "Russian Modern Snow";
        description = "Snow Uniforms and Zenitco AK-74M's";
        languages[] = {{"east", 100}};
        side = "east";
        camouflage[] = {"snow"};
        rolePrefix = "Russian Army";
        vehicleClassnames[] = {
            {"CO", "CUP_O_UAZ_Unarmed_RU"},
            {"SL", "CUP_O_Kamaz_RU"},
            {"FT", "CUP_O_UAZ_Unarmed_RU"},
            {"ATTCH", "CUP_O_UAZ_Unarmed_RU"},
            {"ENG", "CUP_O_Kamaz_Reammo_RU"},
            {"APC", "CUP_O_BRDM2_RU"},
            {"IFV", "CUP_O_BMP2_RU"},
            {"SPAAG", "CUP_O_2S6_RU"},
            {"TNK", "CUP_O_T90_RU"},
            {"TH", "CUP_O_Mi8_RU"},
            {"AH", "CUP_O_Mi24_V_Dynamic_RU"},
            {"CAS", "CUP_O_Su25_Dyn_RU"},
            {"Technical", "CUP_O_UAZ_MG_RU"}
        };
    };

    class MNP_RU_AIR {
        gear = "AKS74_RU";
        uniform = "RU_AB";
        name = "Soviet Airborne";
        description = "Afghan War era camo suits & AK-74's";
        languages[] = {{"east", 100}};
        side = "east";
        camouflage[] = {"woodland", "desert"};
        rolePrefix = "Soviet VDV";
        vehicleClassnames[] = {
            {"CO", "CUP_O_UAZ_Unarmed_RU"},
            {"SL", "CUP_O_UAZ_Unarmed_RU"},
            {"FT", "CUP_O_UAZ_Unarmed_RU"},
            {"ATTCH", "CUP_O_UAZ_Unarmed_RU"},
            {"ENG", "CUP_O_Ural_Repair_RU"},
            {"APC", "CUP_O_BRDM2_RU"},
            {"IFV", "CUP_O_BMP2_RU"},
            {"SPAAG", "CUP_O_Ural_ZU23_RU"},
            {"TNK", "CUP_O_T72_RU"},
            {"TH", "CUP_O_Mi8_RU"},
            {"AH", "CUP_O_Mi24_V_Dynamic_RU"},
            {"CAS", "CUP_O_Su25_Dyn_RU"},
            {"Technical", "CUP_O_UAZ_MG_RU"}
        };
    };

    class CUP_RU_90_WD {
        gear = "AK74_RU";
        uniform = "CUP_RU_90_WD";
        name = "Russian Army 1990s Woodland";
        description = "1990s Russians with AK-74's";
        languages[] = {{"east", 100}};
        side = "east";
        camouflage[] = {"woodland"};
        rolePrefix = "Russian Army";
        vehicleClassnames[] = {
            {"CO", "CUP_O_UAZ_Unarmed_RU"},
            {"SL", "CUP_O_UAZ_Unarmed_RU"},
            {"FT", "CUP_O_UAZ_Unarmed_RU"},
            {"ATTCH", "CUP_O_UAZ_Unarmed_RU"},
            {"ENG", "CUP_O_Ural_Repair_RU"},
            {"APC", "CUP_O_BRDM2_RU"},
            {"IFV", "CUP_O_BMP2_RU"},
            {"SPAAG", "CUP_O_Ural_ZU23_RU"},
            {"TNK", "CUP_O_T72_RU"},
            {"TH", "CUP_O_Mi8_RU"},
            {"AH", "CUP_O_Mi24_V_Dynamic_RU"},
            {"CAS", "CUP_O_Su25_Dyn_RU"},
            {"Technical", "CUP_O_UAZ_MG_RU"}
        };
    };

    class CUP_RU_90_DE {
        gear = "AK74_RU";
        uniform = "CUP_RU_90_DE";
        name = "Russian Army 1990s Desert";
        description = "1990s Russians with AK-74's";
        languages[] = {{"east", 100}};
        side = "east";
        camouflage[] = {"desert"};
        rolePrefix = "Russian Army";
        vehicleClassnames[] = {
            {"CO", "CUP_O_UAZ_Unarmed_RU"},
            {"SL", "CUP_O_UAZ_Unarmed_RU"},
            {"FT", "CUP_O_UAZ_Unarmed_RU"},
            {"ATTCH", "CUP_O_UAZ_Unarmed_RU"},
            {"ENG", "CUP_O_Ural_Repair_RU"},
            {"APC", "CUP_O_BRDM2_RU"},
            {"IFV", "CUP_O_BMP2_RU"},
            {"SPAAG", "CUP_O_Ural_ZU23_RU"},
            {"TNK", "CUP_O_T72_RU"},
            {"TH", "CUP_O_Mi8_RU"},
            {"AH", "CUP_O_Mi24_V_Dynamic_RU"},
            {"CAS", "CUP_O_Su25_Dyn_RU"},
            {"Technical", "CUP_O_UAZ_MG_RU"}
        };
    };

    class GM_GDR_BG {
        gear = "MPIKM_GDR";
        uniform = "GM_GDR_BG";
        name = "East German Border Guard";
        description = "East German Border Guards armed with MPi-KM & MPi-KMS-72";
        languages[] = {{"east", 100}};
        side = "east";
        camouflage[] = {"woodland"};
        rolePrefix = "GDR Border Guard";
        vehicleClassnames[] = {
            {"CO", "gm_gc_bgs_p601"},
            {"SL", "gm_gc_bgs_ural4320_cargo"},
            {"FT", "CUP_O_UAZ_Unarmed_RU"},
            {"ATTCH", "CUP_O_UAZ_Unarmed_RU"},
            {"ENG", "gm_gc_bgs_ural4320_reammo"},
            {"APC", "gm_gc_army_btr60pb"},
            {"IFV", "gm_gc_army_bmp1sp2"},
            {"SPAAG", "gm_gc_army_zsu264v1"},
            {"TNK", "gm_gc_army_t55"},
            {"TH", "gm_gc_bgs_mi2p"},
            {"AH", "gm_gc_bgs_mi2us"},
            {"CAS", "CUP_O_Su25_Dyn_RU"},
            {"Technical", "CUP_O_UAZ_MG_RU"}
        };
    };

    class GM_GDR_80_WD {
        gear = "MPIAK74_GDR";
        uniform = "GM_GDR_80_WD";
        name = "East German NVA";
        description = "East German Nationale Volksarmee armed with MPi-AK-74N";
        languages[] = {{"east", 100}};
        side = "east";
        camouflage[] = {"woodland"};
        rolePrefix = "GDR NVA";
        vehicleClassnames[] = {
            {"CO", "gm_gc_army_p601"},
            {"SL", "gm_gc_army_ural4320_cargo"},
            {"FT", "CUP_O_UAZ_Unarmed_RU"},
            {"ATTCH", "CUP_O_UAZ_Unarmed_RU"},
            {"ENG", "gm_gc_army_ural4320_reammo"},
            {"APC", "gm_gc_army_btr60pb"},
            {"IFV", "gm_gc_army_bmp1sp2"},
            {"SPAAG", "gm_gc_army_zsu264v1"},
            {"TNK", "gm_gc_army_t55am2b"},
            {"TH", "gm_gc_airforce_mi2t"},
            {"AH", "gm_gc_airforce_mi2urn"},
            {"CAS", "CUP_O_Su25_Dyn_RU"},
            {"Technical", "CUP_O_UAZ_MG_RU"}
        };
    };

    class GM_GDR_80_SN {
        gear = "MPIAK74_GDR";
        uniform = "GM_GDR_80_SN";
        name = "East German NVA (Winter)";
        description = "East German Nationale Volksarmee (winter uniforms) armed with MPi-AK-74N";
        languages[] = {{"east", 100}};
        side = "east";
        camouflage[] = {"snow"};
        rolePrefix = "GDR NVA";
        vehicleClassnames[] = {
            {"CO", "gm_gc_army_p601"},
            {"SL", "gm_gc_army_ural4320_cargo"},
            {"FT", "CUP_O_UAZ_Unarmed_RU"},
            {"ATTCH", "CUP_O_UAZ_Unarmed_RU"},
            {"ENG", "gm_gc_army_ural4320_reammo"},
            {"APC", "gm_gc_army_btr60pb"},
            {"IFV", "gm_gc_army_bmp1sp2"},
            {"SPAAG", "gm_gc_army_zsu264v1"},
            {"TNK", "gm_gc_army_t55am2b"},
            {"TH", "gm_gc_airforce_mi2t"},
            {"AH", "gm_gc_airforce_mi2urn"},
            {"CAS", "CUP_O_Su25_Dyn_RU"},
            {"Technical", "CUP_O_UAZ_MG_RU"}
        };
    };

    class GM_GDR_80_AIR {
        gear = "MPIAK74_GDR_AIR";
        uniform = "GM_GDR_80_AIR";
        name = "East German FJB";
        description = "East German Nationale Volksarmee Fallschirmjäger armed with MPi-AKS-74N";
        languages[] = {{"east", 100}};
        side = "east";
        camouflage[] = {"woodland"};
        rolePrefix = "GDR NVA FJB";
        vehicleClassnames[] = {
            {"CO", "gm_gc_army_p601"},
            {"SL", "gm_gc_army_ural4320_cargo"},
            {"FT", "CUP_O_UAZ_Unarmed_RU"},
            {"ATTCH", "CUP_O_UAZ_Unarmed_RU"},
            {"ENG", "gm_gc_army_ural4320_reammo"},
            {"APC", "gm_gc_army_btr60pb"},
            {"IFV", "gm_gc_army_bmp1sp2"},
            {"SPAAG", "gm_gc_army_zsu264v1"},
            {"TNK", "gm_gc_army_t55am2b"},
            {"TH", "gm_gc_airforce_mi2t"},
            {"AH", "gm_gc_airforce_mi2urn"},
            {"CAS", "CUP_O_Su25_Dyn_RU"},
            {"Technical", "CUP_O_UAZ_MG_RU"}
        };
    };

    class GM_PRL_80_WD {
        gear = "AKM_PRL";
        uniform = "GM_PRL_80_WD";
        name = "Polish Peoples Army";
        description = "Polish Peoples Army armed with AKM";
        languages[] = {{"east", 100}};
        side = "east";
        camouflage[] = {"woodland"};
        rolePrefix = "PRL LWP";
        vehicleClassnames[] = {
            {"CO", "CUP_O_UAZ_Unarmed_RU"},
            {"SL", "gm_pl_army_ural4320_cargo"},
            {"FT", "CUP_O_UAZ_Unarmed_RU"},
            {"ATTCH", "CUP_O_UAZ_Unarmed_RU"},
            {"ENG", "gm_pl_army_ural4320_reammo"},
            {"APC", "gm_pl_army_ot64a"},
            {"IFV", "gm_pl_army_bmp1sp2"},
            {"SPAAG", "gm_pl_army_zsu234v1"},
            {"TNK", "gm_pl_army_t55ak"},
            {"TH", "gm_pl_airforce_mi2t"},
            {"AH", "gm_pl_airforce_mi2urpg"},
            {"CAS", "CUP_O_Su25_Dyn_RU"},
            {"Technical", "CUP_O_UAZ_MG_RU"}
        };
    };

    class GM_PRL_80_SN {
        gear = "AKM_PRL";
        uniform = "GM_PRL_80_SN";
        name = "Polish Peoples Army (winter)";
        description = "Polish Peoples Army (winter uniforms) armed with AKM";
        languages[] = {{"east", 100}};
        side = "east";
        camouflage[] = {"snow"};
        rolePrefix = "PRL LWP";
        vehicleClassnames[] = {
            {"CO", "CUP_O_UAZ_Unarmed_RU"},
            {"SL", "gm_pl_army_ural4320_cargo"},
            {"FT", "CUP_O_UAZ_Unarmed_RU"},
            {"ATTCH", "CUP_O_UAZ_Unarmed_RU"},
            {"ENG", "gm_pl_army_ural4320_reammo"},
            {"APC", "gm_pl_army_ot64a"},
            {"IFV", "gm_pl_army_bmp1sp2"},
            {"SPAAG", "gm_pl_army_zsu234v1"},
            {"TNK", "gm_pl_army_t55ak"},
            {"TH", "gm_pl_airforce_mi2t"},
            {"AH", "gm_pl_airforce_mi2urpg"},
            {"CAS", "CUP_O_Su25_Dyn_RU"},
            {"Technical", "CUP_O_UAZ_MG_RU"}
        };
    };

    class GM_PRL_80_AIR {
        gear = "AKM_PRL_AIR";
        uniform = "GM_PRL_80_AIR";
        name = "Polish Peoples Army Airborne";
        description = "Polish Peoples Army Airborne armed with AKM & PM-63 RAK";
        languages[] = {{"east", 100}};
        side = "east";
        camouflage[] = {"woodland"};
        rolePrefix = "PRL LWP Airborne";
        vehicleClassnames[] = {
            {"CO", "CUP_O_UAZ_Unarmed_RU"},
            {"SL", "gm_pl_army_ural4320_cargo"},
            {"FT", "CUP_O_UAZ_Unarmed_RU"},
            {"ATTCH", "CUP_O_UAZ_Unarmed_RU"},
            {"ENG", "gm_pl_army_ural4320_reammo"},
            {"APC", "gm_pl_army_ot64a"},
            {"IFV", "gm_pl_army_bmp1sp2"},
            {"SPAAG", "gm_pl_army_zsu234v1"},
            {"TNK", "gm_pl_army_t55ak"},
            {"TH", "gm_pl_airforce_mi2t"},
            {"AH", "gm_pl_airforce_mi2urpg"},
            {"CAS", "CUP_O_Su25_Dyn_RU"},
            {"Technical", "CUP_O_UAZ_MG_RU"}
        };
    };

    class GM_FRG_80_WD {
        gear = "G3A3_FRG";
        uniform = "GM_FRG_80_WD";
        name = "West German Bundeswehr";
        description = "West German Army armed with G3A3";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {"woodland"};
        rolePrefix = "Heer";
        vehicleClassnames[] = {
            {"CO", "gm_ge_army_iltis_cargo"},
            {"SL", "gm_ge_army_u1300l_cargo"},
            {"FT", "gm_ge_army_iltis_cargo"},
            {"ATTCH", "gm_ge_army_iltis_cargo"},
            {"ENG", "gm_ge_army_fuchsa0_engineer"},
            {"APC", "gm_ge_army_m113a1g_apc"},
            {"IFV", "gm_ge_army_luchsa2"},
            {"SPAAG", "gm_ge_army_gepard1a1"},
            {"TNK", "gm_ge_army_Leopard1a5"},
            {"TH", "gm_ge_army_ch53g"},
            {"AH", "gm_ge_army_bo105p_pah1a1"},
            {"CAS", "CUP_B_A10_DYN_USA"},
            {"Technical", "gm_ge_army_iltis_mg3"}
        };
    };

    class GM_FRG_90_WD {
        gear = "G36A_GER";
        uniform = "GM_FRG_90_WD";
        name = "West German Bundeswehr";
        description = "West German Army armed with G36";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {"woodland"};
        rolePrefix = "Heer";
        vehicleClassnames[] = {
            {"CO", "gm_ge_army_iltis_cargo"},
            {"SL", "gm_ge_army_u1300l_cargo"},
            {"FT", "gm_ge_army_iltis_cargo"},
            {"ATTCH", "gm_ge_army_iltis_cargo"},
            {"ENG", "gm_ge_army_fuchsa0_engineer"},
            {"APC", "gm_ge_army_m113a1g_apc"},
            {"IFV", "gm_ge_army_marder1a2"},
            {"SPAAG", "gm_ge_army_gepard1a1"},
            {"TNK", "gm_ge_army_Leopard1a5"},
            {"TH", "gm_ge_army_ch53g"},
            {"AH", "gm_ge_army_bo105p_pah1a1"},
            {"CAS", "CUP_B_A10_DYN_USA"},
            {"Technical", "gm_ge_army_iltis_mg3"}
        };
    };

    class GM_FRG_90_DE {
        gear = "G36A_GER";
        uniform = "GM_FRG_90_SN";
        name = "West German Bundeswehr (Desert)";
        description = "West German Army (desert uniforms) armed with G36";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {"snow"};
        rolePrefix = "Heer";
        vehicleClassnames[] = {
            {"CO", "gm_ge_army_iltis_cargo_des"},
            {"SL", "gm_ge_army_u1300l_cargo_des"},
            {"FT", "gm_ge_army_iltis_cargo_des"},
            {"ATTCH", "gm_ge_army_iltis_cargo_des"},
            {"ENG", "gm_ge_army_fuchsa0_engineer_des"},
            {"APC", "gm_ge_army_m113a1g_apc_des"},
            {"IFV", "gm_ge_army_marder1a2_des"},
            {"SPAAG", "gm_ge_army_gepard1a1_des"},
            {"TNK", "gm_ge_army_Leopard1a5_des"},
            {"TH", "gm_ge_army_ch53g"},
            {"AH", "gm_ge_army_bo105p_pah1a1"},
            {"CAS", "CUP_B_A10_DYN_USA"},
            {"Technical", "gm_ge_army_iltis_mg3_des"}
        };
    };

    class GM_FRG_80_SN {
        gear = "G3A3_FRG";
        uniform = "GM_FRG_80_SN";
        name = "West German Bundeswehr (Winter)";
        description = "West German Army (winter uniforms) armed with G3A3";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {"snow"};
        rolePrefix = "Heer";
        vehicleClassnames[] = {
            {"CO", "gm_ge_army_iltis_cargo_win"},
            {"SL", "gm_ge_army_u1300l_cargo_win"},
            {"FT", "gm_ge_army_iltis_cargo_win"},
            {"ATTCH", "gm_ge_army_iltis_cargo_win"},
            {"ENG", "gm_ge_army_fuchsa0_engineer_win"},
            {"APC", "gm_ge_army_m113a1g_apc_win"},
            {"IFV", "gm_ge_army_marder1a2_win"},
            {"SPAAG", "gm_ge_army_gepard1a1_win"},
            {"TNK", "gm_ge_army_Leopard1a5_win"},
            {"TH", "gm_ge_army_ch53g"},
            {"AH", "gm_ge_army_bo105p_pah1a1"},
            {"CAS", "CUP_B_A10_DYN_USA"},
            {"Technical", "gm_ge_army_iltis_mg3_win"}
        };
    };

    class GM_FRG_90_SN {
        gear = "G36A_GER";
        uniform = "GM_FRG_90_SN";
        name = "West German Bundeswehr (winter)";
        description = "West German Army (winter uniforms) armed with G36";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {"snow"};
        rolePrefix = "Heer";
        vehicleClassnames[] = {
            {"CO", "gm_ge_army_iltis_cargo_win"},
            {"SL", "gm_ge_army_u1300l_cargo_win"},
            {"FT", "gm_ge_army_iltis_cargo_win"},
            {"ATTCH", "gm_ge_army_iltis_cargo_win"},
            {"ENG", "gm_ge_army_fuchsa0_engineer_win"},
            {"APC", "gm_ge_army_m113a1g_apc_win"},
            {"IFV", "gm_ge_army_luchsa2_win"},
            {"SPAAG", "gm_ge_army_gepard1a1_win"},
            {"TNK", "gm_ge_army_Leopard1a5_win"},
            {"TH", "gm_ge_army_ch53g"},
            {"AH", "gm_ge_army_bo105p_pah1a1"},
            {"CAS", "CUP_B_A10_DYN_USA"},
            {"Technical", "gm_ge_army_iltis_mg3_win"}
        };
    };

    class GM_FRG_80_AIR {
        gear = "G3A4_FRG";
        uniform = "GM_FRG_80_AIR";
        name = "West German Fallschirmjäger";
        description = "West German Airborne armed with G3A4 & Uzi";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {"woodland"};
        rolePrefix = "Fallschirmjäger";
        vehicleClassnames[] = {
            {"CO", "gm_ge_army_iltis_cargo"},
            {"SL", "gm_ge_army_u1300l_cargo"},
            {"FT", "gm_ge_army_iltis_cargo"},
            {"ATTCH", "gm_ge_army_iltis_cargo"},
            {"ENG", "gm_ge_army_fuchsa0_engineer"},
            {"APC", "gm_ge_army_m113a1g_apc"},
            {"IFV", "gm_ge_army_luchsa2"},
            {"SPAAG", "gm_ge_army_gepard1a1"},
            {"TNK", "gm_ge_army_Leopard1a5"},
            {"TH", "gm_ge_army_ch53g"},
            {"AH", "gm_ge_army_bo105p_pah1a1"},
            {"CAS", "CUP_B_A10_DYN_USA"},
            {"Technical", "gm_ge_army_iltis_mg3"}
        };
    };

    class GM_FRG_BG {
        gear = "G3A3_FRG";
        uniform = "GM_FRG_BG";
        name = "West German Bundesgrenzschutz";
        description = "West German Airborne armed with G1";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {"woodland"};
        rolePrefix = "BGS";
        vehicleClassnames[] = {
            {"CO", "gm_ge_army_iltis_cargo"},
            {"SL", "gm_ge_army_u1300l_cargo"},
            {"FT", "gm_ge_army_iltis_cargo"},
            {"ATTCH", "gm_ge_army_iltis_cargo"},
            {"ENG", "gm_ge_army_fuchsa0_engineer"},
            {"APC", "gm_ge_army_m113a1g_apc"},
            {"IFV", "gm_ge_army_luchsa2"},
            {"SPAAG", "gm_ge_army_gepard1a1"},
            {"TNK", "gm_ge_army_Leopard1a5"},
            {"TH", "gm_ge_army_ch53g"},
            {"AH", "gm_ge_army_bo105p_pah1a1"},
            {"CAS", "CUP_B_A10_DYN_USA"},
            {"Technical", "gm_ge_army_iltis_mg3"}
        };
    };

    class GM_DNK_80_WD {
        gear = "M75_DNK";
        uniform = "GM_DNK_80_WD";
        name = "Danish Army";
        description = "Danish Army armed with M75 (G3A3)";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {"woodland"};
        rolePrefix = "Danish Army";
        vehicleClassnames[] = {
            {"CO", "gm_dk_army_typ1200_cargo"},
            {"SL", "gm_dk_army_u1300l_container"},
            {"FT", "gm_dk_army_typ1200_cargo"},
            {"ATTCH", "gm_dk_army_typ1200_cargo"},
            {"ENG", "gm_dk_army_u1300l_container"},
            {"APC", "gm_dk_army_m113a1dk_apc"},
            {"IFV", "gm_ge_army_luchsa2"},
            {"SPAAG", "gm_ge_army_gepard1a1"},
            {"TNK", "gm_dk_army_Leopard1a3"},
            {"TH", "CUP_B_MH6J_USA"},
            {"AH", "CUP_B_AH6J_USA"},
            {"CAS", "CUP_B_A10_DYN_USA"},
            {"Technical", "gm_dk_army_u1300l_container"}
        };
    };

    class GM_DNK_80_SN {
        gear = "M75_DNK";
        uniform = "GM_DNK_80_SN";
        name = "Danish Army (winter)";
        description = "Danish Army (winter uniforms) armed with M75 (G3A3)";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {"snow"};
        rolePrefix = "Danish Army";
        vehicleClassnames[] = {
            {"CO", "gm_dk_army_typ1200_cargo_win"},
            {"SL", "gm_dk_army_u1300l_container_win"},
            {"FT", "gm_dk_army_typ1200_cargo_win"},
            {"ATTCH", "gm_dk_army_typ1200_cargo_win"},
            {"ENG", "gm_dk_army_u1300l_container_win"},
            {"APC", "gm_dk_army_m113a1dk_apc_win"},
            {"IFV", "gm_ge_army_luchsa2_win"},
            {"SPAAG", "gm_ge_army_gepard1a1_win"},
            {"TNK", "gm_dk_army_Leopard1a3_win"},
            {"TH", "CUP_B_MH6J_USA"},
            {"AH", "CUP_B_AH6J_USA"},
            {"CAS", "CUP_B_A10_DYN_USA"},
            {"Technical", "gm_dk_army_u1300l_container_win"}
        };
    };

    class GM_DNK_90_WD {
        gear = "C7_DNK";
        uniform = "GM_DNK_90_WD";
        name = "Danish Army";
        description = "Danish Army armed with C7";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {"woodland"};
        rolePrefix = "Danish Army";
        vehicleClassnames[] = {
            {"CO", "gm_dk_army_typ1200_cargo"},
            {"SL", "gm_dk_army_u1300l_container"},
            {"FT", "gm_dk_army_typ1200_cargo"},
            {"ATTCH", "gm_dk_army_typ1200_cargo"},
            {"ENG", "gm_dk_army_u1300l_container"},
            {"APC", "gm_dk_army_m113a1dk_apc"},
            {"IFV", "gm_ge_army_luchsa2"},
            {"SPAAG", "gm_ge_army_gepard1a1"},
            {"TNK", "gm_dk_army_Leopard1a3"},
            {"TH", "CUP_B_MH6J_USA"},
            {"AH", "CUP_B_AH6J_USA"},
            {"CAS", "CUP_B_A10_DYN_USA"},
            {"Technical", "gm_dk_army_u1300l_container"}
        };
    };

    class GM_DNK_90_SN {
        gear = "C7_DNK";
        uniform = "GM_DNK_90_SN";
        name = "Danish Army (winter)";
        description = "Danish Army (winter uniforms) armed with C7";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {"snow"};
        rolePrefix = "Danish Army";
        vehicleClassnames[] = {
            {"CO", "gm_dk_army_typ1200_cargo_win"},
            {"SL", "gm_dk_army_u1300l_container_win"},
            {"FT", "gm_dk_army_typ1200_cargo_win"},
            {"ATTCH", "gm_dk_army_typ1200_cargo_win"},
            {"ENG", "gm_dk_army_u1300l_container_win"},
            {"APC", "gm_dk_army_m113a1dk_apc_win"},
            {"IFV", "gm_ge_army_luchsa2_win"},
            {"SPAAG", "gm_ge_army_gepard1a1_win"},
            {"TNK", "gm_dk_army_Leopard1a3_win"},
            {"TH", "CUP_B_MH6J_USA"},
            {"AH", "CUP_B_AH6J_USA"},
            {"CAS", "CUP_B_A10_DYN_USA"},
            {"Technical", "gm_dk_army_u1300l_container_win"}
        };
    };

    class MNP_KOR_OD {
        gear = "AK47_NK";
        uniform = "NK_CON";
        name = "North Korean Conscripts";
        description = "Olive Drab Uniform and AK-47's";
        languages[] = {{"east", 100}};
        side = "east";
        camouflage[] = {"woodland"};
        rolePrefix = "KPA Conscripts";
        vehicleClassnames[] = {
            {"CO", "CUP_O_UAZ_Unarmed_SLA"},
            {"SL", "CUP_O_UAZ_Unarmed_SLA"},
            {"FT", "CUP_O_UAZ_Unarmed_SLA"},
            {"ATTCH", "CUP_O_UAZ_Unarmed_SLA"},
            {"ENG", "CUP_O_Ural_Repair_SLA"},
            {"APC", "CUP_O_MTLB_pk_SLA"},
            {"IFV", "CUP_I_BMP1_TK_GUE"},
            {"SPAAG", "CUP_O_Ural_ZU23_SLA"},
            {"TNK", "CUP_I_T55_TK_GUE"},
            {"TH", "CUP_O_Mi8_RU"},
            {"AH", "CUP_O_Mi24_V_Dynamic_RU"},
            {"CAS", "CUP_O_Su25_Dyn_RU"},
            {"Technical", "CUP_O_UAZ_MG_SLA"}
        };
    };

    class MNP_KOR_WD {
        gear = "AK74_NK";
        uniform = "NK_REG";
        name = "North Korean Regulars";
        description = "Woodland Uniform and AK-74's";
        languages[] = {{"east", 100}};
        side = "east";
        camouflage[] = {"woodland"};
        rolePrefix = "KPA Regulars";
        vehicleClassnames[] = {
            {"CO", "CUP_O_UAZ_Unarmed_SLA"},
            {"SL", "CUP_O_UAZ_Unarmed_SLA"},
            {"FT", "CUP_O_UAZ_Unarmed_SLA"},
            {"ATTCH", "CUP_O_UAZ_Unarmed_SLA"},
            {"ENG", "CUP_O_Ural_Repair_SLA"},
            {"APC", "CUP_O_MTLB_pk_SLA"},
            {"IFV", "CUP_I_BMP1_TK_GUE"},
            {"SPAAG", "CUP_O_ZSU23_SLA"},
            {"TNK", "CUP_O_T72_RU"},
            {"TH", "CUP_O_Mi8_RU"},
            {"AH", "CUP_O_Mi24_V_Dynamic_RU"},
            {"CAS", "CUP_O_Su25_Dyn_RU"},
            {"Technical", "CUP_O_UAZ_MG_SLA"}
        };
    };

    class MNP_IRN_ARMY {
        gear = "G3A3_IRN";
        uniform = "IRN_ARMY";
        name = "Iranian Army";
        description = "Iran Army armed with G3A3's";
        languages[] = {{"east", 100}};
        side = "east";
        camouflage[] = {"desert"};
        rolePrefix = "Iranian Army";
        vehicleClassnames[] = {
            {"CO", "CUP_O_UAZ_Unarmed_RU"},
            {"SL", "CUP_O_UAZ_Unarmed_RU"},
            {"FT", "CUP_O_UAZ_Unarmed_RU"},
            {"ATTCH", "CUP_O_UAZ_Unarmed_RU"},
            {"ENG", "CUP_O_Ural_Repair_SLA"},
            {"APC", "CUP_O_MTLB_pk_SLA"},
            {"IFV", "CUP_I_BMP1_TK_GUE"},
            {"SPAAG", "CUP_O_Ural_ZU23_SLA"},
            {"TNK", "CUP_I_T55_TK_GUE"},
            {"TH", "CUP_O_Mi8_RU"},
            {"AH", "CUP_O_Mi24_V_Dynamic_RU"},
            {"CAS", "CUP_O_Su25_Dyn_RU"},
            {"Technical", "CUP_O_UAZ_MG_SLA"}
        };
    };

    class MNP_IRN_RG {
        gear = "AKM_IRN";
        uniform = "IRN_RG";
        name = "Iranian Revolutionary Guard";
        description = "Iran Revolutionary Guard with AKM's";
        languages[] = {{"east", 100}};
        side = "east";
        camouflage[] = {"desert"};
        rolePrefix = "Iranian Revolutionary Guard";
        vehicleClassnames[] = {
            {"CO", "CUP_O_UAZ_Unarmed_RU"},
            {"SL", "CUP_O_UAZ_Unarmed_RU"},
            {"FT", "CUP_O_UAZ_Unarmed_RU"},
            {"ATTCH", "CUP_O_UAZ_Unarmed_RU"},
            {"ENG", "CUP_O_Ural_Repair_SLA"},
            {"APC", "CUP_O_MTLB_pk_SLA"},
            {"IFV", "CUP_I_BMP1_TK_GUE"},
            {"SPAAG", "CUP_O_ZSU23_SLA"},
            {"TNK", "CUP_O_T72_RU"},
            {"TH", "CUP_O_Mi8_RU"},
            {"AH", "CUP_O_Mi24_V_Dynamic_RU"},
            {"CAS", "CUP_O_Su25_Dyn_RU"},
            {"Technical", "CUP_O_UAZ_MG_SLA"}
        };
    };

    class MNP_DPR_SUM {
        gear = "AK74_DPR";
        uniform = "DPR_SUM";
        name = "Donetsk People's Republic (Summer)";
        description = "Summer Camo and AK-74's";
        languages[] = {{"east", 100}};
        side = "east";
        camouflage[] = {"woodland"};
        rolePrefix = "Donetsk People's Republic";
        vehicleClassnames[] = {
            {"CO", "CUP_O_UAZ_Unarmed_RU"},
            {"SL", "CUP_O_UAZ_Unarmed_RU"},
            {"FT", "CUP_O_UAZ_Unarmed_RU"},
            {"ATTCH", "CUP_O_UAZ_Unarmed_RU"},
            {"ENG", "CUP_O_Ural_Repair_RU"},
            {"APC", "CUP_O_MTLB_pk_ChDKZ"},
            {"IFV", "CUP_O_BMP2_CHDKZ"},
            {"SPAAG", "CUP_O_ZSU23_ChDKZ"},
            {"TNK", "CUP_O_T72_CHDKZ"},
            {"TH", "CUP_O_Mi8_RU"},
            {"AH", "CUP_O_Mi24_V_Dynamic_RU"},
            {"CAS", "CUP_O_Su25_Dyn_RU"},
            {"Technical", "CUP_O_UAZ_MG_RU"}
        };
    };

    class MNP_DPR_AUT {
        gear = "AK74_DPR";
        uniform = "DPR_AUT";
        name = "Donetsk People's Republic (Autumn)";
        description = "Autumn Camo and AK-74's";
        languages[] = {{"east", 100}};
        side = "east";
        camouflage[] = {"woodland"};
        rolePrefix = "Donetsk People's Republic";
        vehicleClassnames[] = {
            {"CO", "CUP_O_UAZ_Unarmed_RU"},
            {"SL", "CUP_O_UAZ_Unarmed_RU"},
            {"FT", "CUP_O_UAZ_Unarmed_RU"},
            {"ATTCH", "CUP_O_UAZ_Unarmed_RU"},
            {"ENG", "CUP_O_Ural_Repair_RU"},
            {"APC", "CUP_O_MTLB_pk_ChDKZ"},
            {"IFV", "CUP_O_BMP2_CHDKZ"},
            {"SPAAG", "CUP_O_ZSU23_ChDKZ"},
            {"TNK", "CUP_O_T72_CHDKZ"},
            {"TH", "CUP_O_Mi8_RU"},
            {"AH", "CUP_O_Mi24_V_Dynamic_RU"},
            {"CAS", "CUP_O_Su25_Dyn_RU"},
            {"Technical", "CUP_O_UAZ_MG_RU"}
        };
    };

    class CUP_TKA_OD {
        gear = "FAL_TKA";
        uniform = "CUP_TKA_OD";
        name = "Takistani Army (Olive Drab)";
        description = "Olive Drab and FAL's";
        languages[] = {{"east", 100}};
        side = "east";
        camouflage[] = {"desert"};
        rolePrefix = "TK Army";
        vehicleClassnames[] = {
            {"CO", "CUP_O_UAZ_Unarmed_TKA"},
            {"SL", "CUP_O_UAZ_Unarmed_TKA"},
            {"FT", "CUP_O_UAZ_Unarmed_TKA"},
            {"ATTCH", "CUP_O_UAZ_Unarmed_TKA"},
            {"ENG", "CUP_O_Ural_Repair_TKA"},
            {"APC", "CUP_O_BMP1P_TKA"},
            {"IFV", "CUP_O_BMP2_TKA"},
            {"SPAAG", "CUP_O_ZSU23_TK"},
            {"TNK", "CUP_O_T72_TKA"},
            {"TH", "CUP_O_Mi17_TK"},
            {"AH", "CUP_O_Mi24_D_Dynamic_TK"},
            {"CAS", "CUP_O_Su25_Dyn_TKA"},
            {"Technical", "CUP_O_UAZ_MG_TKA"}
        };
    };

    class CUP_TKA_MIX {
        gear = "AK74_TKA";
        uniform = "CUP_TKA_MIX";
        name = "Takistani Army (Mixed Camo)";
        description = "Mixed Camo and AK-74's";
        languages[] = {{"east", 100}};
        side = "east";
        camouflage[] = {"desert"};
        rolePrefix = "TK Army";
        vehicleClassnames[] = {
            {"CO", "CUP_O_UAZ_Unarmed_TKA"},
            {"SL", "CUP_O_UAZ_Unarmed_TKA"},
            {"FT", "CUP_O_UAZ_Unarmed_TKA"},
            {"ATTCH", "CUP_O_UAZ_Unarmed_TKA"},
            {"ENG", "CUP_O_Ural_Repair_TKA"},
            {"APC", "CUP_O_BMP1P_TKA"},
            {"IFV", "CUP_O_BMP2_TKA"},
            {"SPAAG", "CUP_O_ZSU23_TK"},
            {"TNK", "CUP_O_T72_TKA"},
            {"TH", "CUP_O_Mi17_TK"},
            {"AH", "CUP_O_Mi24_D_Dynamic_TK"},
            {"CAS", "CUP_O_Su25_Dyn_TKA"},
            {"Technical", "CUP_O_UAZ_MG_TKA"}
        };
    };

    class GMX_TKA {
        gear = "G3A3_TKA";
        uniform = "GMX_TKA_OD";
        name = "GMX Takistani Army";
        description = "OD Green Camo and G3A3";
        languages[] = {{"east", 100}};
        side = "east";
        camouflage[] = {"desert"};
        rolePrefix = "TK Army";
        vehicleClassnames[] = {
            {"CO", "gmx_tak_army_uaz469_cargo_des"},
            {"SL", "gmx_tak_army_uaz469_cargo_des"},
            {"FT", "gmx_tak_army_uaz469_cargo_des"},
            {"ATTCH", "gmx_tak_army_uaz469_cargo_des"},
            {"ENG", "gmx_tak_army_ural4320_reammo_des"},
            {"APC", "gmx_tak_army_m113a1g_apc_des"},
            {"IFV", "gmx_tak_army_bmp1sp2_des"},
            {"SPAAG", "gmx_tak_army_zsu234v1_des"},
            {"TNK", "gmx_tak_army_t55am2b_des"},
            {"TH", "gmx_tak_army_mi2t_des"},
            {"AH", "gmx_tak_army_mi2urpg_des"},
            {"CAS", "CUP_O_Su25_Dyn_TKA"},
            {"Technical", "gmx_tak_army_uaz469_dshdm_des"}
        };
    };

    class CUP_TK_INS {
        gear = "AKM_TKI";
        uniform = "CUP_TK_INS";
        name = "Takistani Militia (Mixed Camo)";
        description = "Civilian and Camo with AKM's";
        languages[] = {{"east", 100}};
        side = "east";
        camouflage[] = {"desert"};
        rolePrefix = "TK Militia";
        vehicleClassnames[] = {
            {"CO", "CUP_O_UAZ_Unarmed_TKA"},
            {"SL", "CUP_O_UAZ_Unarmed_TKA"},
            {"FT", "CUP_O_UAZ_Unarmed_TKA"},
            {"ATTCH", "CUP_O_UAZ_Unarmed_TKA"},
            {"ENG", "CUP_O_Ural_Repair_TKA"},
            {"APC", "CUP_O_BMP1P_TKA"},
            {"IFV", "CUP_O_BMP2_TKA"},
            {"SPAAG", "CUP_O_Ural_ZU23_TKM"},
            {"TNK", "CUP_O_T55_TK"},
            {"TH", "CUP_O_Mi17_TK"},
            {"AH", "CUP_O_Mi24_D_Dynamic_TK"},
            {"CAS", "CUP_O_Su25_Dyn_TKA"},
            {"Technical", "CUP_O_UAZ_MG_TKA"}
        };
    };

    class CUP_SLA_WD {
        gear = "AK74_SLA";
        uniform = "CUP_SLA_WD";
        name = "Sahrani Liberation Army (Woodland)";
        description = "Woodland Camo and AK-74's";
        languages[] = {{"east", 100}};
        side = "east";
        camouflage[] = {"woodland"};
        rolePrefix = "Sahrani Liberation Army";
        vehicleClassnames[] = {
            {"CO", "CUP_O_UAZ_Unarmed_SLA"},
            {"SL", "CUP_O_UAZ_Unarmed_SLA"},
            {"FT", "CUP_O_UAZ_Unarmed_SLA"},
            {"ATTCH", "CUP_O_UAZ_Unarmed_SLA"},
            {"ENG", "CUP_O_Ural_Repair_SLA"},
            {"APC", "CUP_O_MTLB_pk_SLA"},
            {"IFV", "CUP_O_BMP2_SLA"},
            {"SPAAG", "CUP_O_ZSU23_SLA"},
            {"TNK", "CUP_O_T72_SLA"},
            {"TH", "CUP_O_Mi8_SLA_1"},
            {"AH", "CUP_O_Mi24_D_Dynamic_SLA"},
            {"CAS", "CUP_O_Su25_Dyn_SLA"},
            {"Technical", "CUP_O_UAZ_MG_SLA"}
        };
    };

    class CUP_SLA_DE {
        gear = "AK74_SLA";
        uniform = "CUP_SLA_DE";
        name = "Sahrani Liberation Army (Desert)";
        description = "Desert Camo and AK-74's";
        languages[] = {{"east", 100}};
        side = "east";
        camouflage[] = {"desert"};
        rolePrefix = "Sahrani Liberation Army";
        vehicleClassnames[] = {
            {"CO", "CUP_O_UAZ_Unarmed_SLA"},
            {"SL", "CUP_O_UAZ_Unarmed_SLA"},
            {"FT", "CUP_O_UAZ_Unarmed_SLA"},
            {"ATTCH", "CUP_O_UAZ_Unarmed_SLA"},
            {"ENG", "CUP_O_Ural_Repair_SLA"},
            {"APC", "CUP_O_MTLB_pk_SLA"},
            {"IFV", "CUP_O_BMP2_SLA"},
            {"SPAAG", "CUP_O_ZSU23_SLA"},
            {"TNK", "CUP_O_T72_SLA"},
            {"TH", "CUP_O_Mi8_SLA_1"},
            {"AH", "CUP_O_Mi24_D_Dynamic_SLA"},
            {"CAS", "CUP_O_Su25_Dyn_SLA"},
            {"Technical", "CUP_O_UAZ_MG_SLA"}
        };
    };

    class CUP_SLA_URB {
        gear = "AK74_SLA";
        uniform = "CUP_SLA_URB";
        name = "Sahrani Liberation Army (Urban)";
        description = "Urban Camo and AK-74's";
        languages[] = {{"east", 100}};
        side = "east";
        camouflage[] = {"woodland", "desert"};
        rolePrefix = "Sahrani Liberation Army";
        vehicleClassnames[] = {
            {"CO", "CUP_O_UAZ_Unarmed_SLA"},
            {"SL", "CUP_O_UAZ_Unarmed_SLA"},
            {"FT", "CUP_O_UAZ_Unarmed_SLA"},
            {"ATTCH", "CUP_O_UAZ_Unarmed_SLA"},
            {"ENG", "CUP_O_Ural_Repair_SLA"},
            {"APC", "CUP_O_MTLB_pk_SLA"},
            {"IFV", "CUP_O_BMP2_SLA"},
            {"SPAAG", "CUP_O_ZSU23_SLA"},
            {"TNK", "CUP_O_T72_SLA"},
            {"TH", "CUP_O_Mi8_SLA_1"},
            {"AH", "CUP_O_Mi24_D_Dynamic_SLA"},
            {"CAS", "CUP_O_Su25_Dyn_SLA"},
            {"Technical", "CUP_O_UAZ_MG_SLA"}
        };
    };

    class CUP_SLA_MIL {
        gear = "AKM_SLA";
        uniform = "CUP_SLA_MIL";
        name = "Sahrani Liberation Army (Militia)";
        description = "Grey Uniforms and AKM's";
        languages[] = {{"east", 100}};
        side = "east";
        camouflage[] = {"woodland", "desert"};
        rolePrefix = "SLA Militia";
        vehicleClassnames[] = {
            {"CO", "CUP_O_UAZ_Militia_SLA"},
            {"SL", "CUP_O_UAZ_Militia_SLA"},
            {"FT", "CUP_O_UAZ_Militia_SLA"},
            {"ATTCH", "CUP_O_UAZ_Militia_SLA"},
            {"ENG", "CUP_O_Ural_Repair_SLA"},
            {"APC", "CUP_O_MTLB_pk_SLA"},
            {"IFV", "CUP_O_BMP2_SLA"},
            {"SPAAG", "CUP_O_ZSU23_SLA"},
            {"TNK", "CUP_O_T72_SLA"},
            {"TH", "CUP_O_Mi8_SLA_1"},
            {"AH", "CUP_O_Mi24_D_Dynamic_SLA"},
            {"CAS", "CUP_O_Su25_Dyn_SLA"},
            {"Technical", "CUP_O_UAZ_MG_SLA"}
        };
    };

    class CUP_SLA_PAR {
        gear = "AK74_SLA";
        uniform = "CUP_SLA_PAR";
        name = "Sahrani Liberation Army (Partisans)";
        description = "Woodland Partisans and AK-74's";
        languages[] = {{"east", 100}};
        side = "east";
        camouflage[] = {"woodland"};
        rolePrefix = "SLA Partisans";
        vehicleClassnames[] = {
            {"CO", "CUP_O_UAZ_Unarmed_SLA"},
            {"SL", "CUP_O_UAZ_Unarmed_SLA"},
            {"FT", "CUP_O_UAZ_Unarmed_SLA"},
            {"ATTCH", "CUP_O_UAZ_Unarmed_SLA"},
            {"ENG", "CUP_O_Ural_Repair_SLA"},
            {"APC", "CUP_O_MTLB_pk_SLA"},
            {"IFV", "CUP_O_BMP2_SLA"},
            {"SPAAG", "CUP_O_ZSU23_SLA"},
            {"TNK", "CUP_O_T72_SLA"},
            {"TH", "CUP_O_Mi8_SLA_1"},
            {"AH", "CUP_O_Mi24_D_Dynamic_SLA"},
            {"CAS", "CUP_O_Su25_Dyn_SLA"},
            {"Technical", "CUP_O_UAZ_MG_SLA"}
        };
    };

    class CUP_RU_WD {
        gear = "AK74M_RU";
        uniform = "CUP_RU_WD";
        name = "Russian Army Woodland";
        description = "Woodland Russian Army and AK-74M's";
        languages[] = {{"east", 100}};
        side = "east";
        camouflage[] = {"woodland"};
        rolePrefix = "Russian Army";
        vehicleClassnames[] = {
            {"CO", "CUP_O_UAZ_Unarmed_RU"},
            {"SL", "CUP_O_Kamaz_RU"},
            {"FT", "CUP_O_UAZ_Unarmed_RU"},
            {"ATTCH", "CUP_O_UAZ_Unarmed_RU"},
            {"ENG", "CUP_O_Kamaz_Reammo_RU"},
            {"APC", "CUP_O_MTLB_pk_WDL_RU"},
            {"IFV", "CUP_O_BMP2_RU"},
            {"SPAAG", "CUP_O_2S6_RU"},
            {"TNK", "CUP_O_T72_RU"},
            {"TH", "CUP_O_Mi8_RU"},
            {"AH", "CUP_O_Mi24_V_Dynamic_RU"},
            {"CAS", "CUP_O_Su25_Dyn_RU"},
            {"Technical", "CUP_O_UAZ_MG_RU"}
        };
    };

    class CUP_RU_DE {
        gear = "AK74M_RU";
        uniform = "CUP_RU_DE";
        name = "Russian Army Desert";
        description = "Desert Russian Army and AK-74M's";
        languages[] = {{"east", 100}};
        side = "east";
        camouflage[] = {"desert"};
        rolePrefix = "Russian Army";
        vehicleClassnames[] = {
            {"CO", "CUP_O_UAZ_Unarmed_RU"},
            {"SL", "CUP_O_Kamaz_RU"},
            {"FT", "CUP_O_UAZ_Unarmed_RU"},
            {"ATTCH", "CUP_O_UAZ_Unarmed_RU"},
            {"ENG", "CUP_O_Kamaz_Reammo_RU"},
            {"APC", "CUP_O_MTLB_pk_WDL_RU"},
            {"IFV", "CUP_O_BMP2_RU"},
            {"SPAAG", "CUP_O_2S6_RU"},
            {"TNK", "CUP_O_T72_RU"},
            {"TH", "CUP_O_Mi8_RU"},
            {"AH", "CUP_O_Mi24_V_Dynamic_RU"},
            {"CAS", "CUP_O_Su25_Dyn_RU"},
            {"Technical", "CUP_O_UAZ_MG_RU"}
        };
    };

    class RU_CBRN {
        gear = "AK74M_RU";
        uniform = "RU_CBRN";
        name = "Russian Army (CBRN)";
        description = "CBRN Russian Army and AK-74M's";
        languages[] = {{"east", 100}};
        side = "east";
        camouflage[] = {};
        rolePrefix = "Russian Army";
        vehicleClassnames[] = {
            {"CO", "CUP_O_UAZ_Unarmed_RU"},
            {"SL", "CUP_O_Kamaz_RU"},
            {"FT", "CUP_O_UAZ_Unarmed_RU"},
            {"ATTCH", "CUP_O_UAZ_Unarmed_RU"},
            {"ENG", "CUP_O_Kamaz_Reammo_RU"},
            {"APC", "CUP_O_MTLB_pk_WDL_RU"},
            {"IFV", "CUP_O_BMP2_RU"},
            {"SPAAG", "CUP_O_2S6_RU"},
            {"TNK", "CUP_O_T72_RU"},
            {"TH", "CUP_O_Mi8_RU"},
            {"AH", "CUP_O_Mi24_V_Dynamic_RU"},
            {"CAS", "CUP_O_Su25_Dyn_RU"},
            {"Technical", "CUP_O_UAZ_MG_RU"}
        };
    };

    class CUP_CHKDZ {
        gear = "AKM_CHKDZ";
        uniform = "CHKDZ";
        name = "Chedaki";
        description = "Mixed camo and AKM's";
        languages[] = {{"east", 100}};
        side = "east";
        camouflage[] = {"woodland"};
        rolePrefix = "Chedaki";
        vehicleClassnames[] = {
            {"CO", "CUP_O_UAZ_Unarmed_CHDKZ"},
            {"SL", "CUP_O_UAZ_Unarmed_CHDKZ"},
            {"FT", "CUP_O_UAZ_Unarmed_CHDKZ"},
            {"ATTCH", "CUP_O_UAZ_Unarmed_CHDKZ"},
            {"ENG", "CUP_O_Ural_Repair_CHDKZ"},
            {"APC", "CUP_O_MTLB_pk_ChDKZ"},
            {"IFV", "CUP_O_BMP2_CHDKZ"},
            {"SPAAG", "CUP_O_ZSU23_ChDKZ"},
            {"TNK", "CUP_O_T72_CHDKZ"},
            {"TH", "CUP_O_Mi8_CHDKZ"},
            {"AH", "CUP_O_Mi24_V_Dynamic_RU"},
            {"CAS", "CUP_O_Su25_Dyn_RU"},
            {"Technical", "CUP_O_UAZ_MG_CHDKZ"}
        };
    };

    class GMX_CHKDZ {
        gear = "AKM_CHKDZ";
        uniform = "GMX_CHDKZ";
        name = "GMX ChDKZ";
        description = "Mixed camo and AKM's";
        languages[] = {{"east", 100}};
        side = "east";
        camouflage[] = {"woodland"};
        rolePrefix = "Chedaki";
        vehicleClassnames[] = {
            {"CO", "gmx_chdkz_uaz469_cargo_wdr"},
            {"SL", "gmx_chdkz_uaz469_cargo_wdr"},
            {"FT", "gmx_chdkz_uaz469_cargo_wdr"},
            {"ATTCH", "gmx_chdkz_uaz469_cargo_wdr"},
            {"ENG", "gmx_chdkz_ural4320_reammo_wdr"},
            {"APC", "gmx_chdkz_btr60pb_wdr"},
            {"IFV", "gmx_chdkz_bmp1sp2_wdr"},
            {"SPAAG", "gmx_chdkz_zsu234v1_wdr"},
            {"TNK", "gmx_chdkz_t55am2b_wdr"},
            {"TH", "gmx_chdkz_mi2t_wdl"},
            {"AH", "gmx_chdkz_mi2urpg_wdl"},
            {"CAS", "CUP_O_Su25_Dyn_RU"},
            {"Technical", "gmx_chdkz_uaz469_dshkm_wdr"}
        };
    };

    class IND_F {
        gear = "Mk20_AAF_WD";
        uniform = "AAF_WD";
        name = "AAF Woodland";
        description = "Woodland Camo with Mk20's";
        languages[] = {{"resistance", 100}};
        side = "resistance";
        camouflage[] = {"woodland"};
        rolePrefix = "AAF";
        vehicleClassnames[] = {
            {"CO", "I_MRAP_03_F"},
            {"SL", "I_MRAP_03_F"},
            {"FT", "I_MRAP_03_F"},
            {"ATTCH", "gm_demo_aaf_mb_u1300l_cargo"},
            {"ENG", "I_Truck_02_box_F"},
            {"APC", "I_APC_Wheeled_03_cannon_F"},
            {"IFV", "I_APC_tracked_03_cannon_F"},
            {"SPAAG", "CUP_B_M163_USA"},
            {"TNK", "I_MBT_03_cannon_F"},
            {"TH", "I_Heli_Transport_02_F"},
            {"AH", "I_Heli_light_03_F"},
            {"CAS", "I_Plane_Fighter_03_CAS_F"},
            {"Technical", "CUP_I_LR_MG_AAF"}
        };
    };

    class LDF {
        gear = "PROMET_LDF";
        uniform = "LDF";
        name = "Livonia Defence Forces";
        description = "Woodland uniforms with carry handle Promets";
        languages[] = {{"resistance", 100}};
        side = "resistance";
        camouflage[] = {"woodland"};
        rolePrefix = "LDF";
        vehicleClassnames[] = {
            {"CO", "I_E_Offroad_01_comms_F"},
            {"SL", "CUP_I_T810_Unarmed_LDF"},
            {"FT", "I_E_Offroad_01_F"},
            {"ATTCH", "I_E_Offroad_01_covered_F"},
            {"ENG", "CUP_I_T810_Reammo_LDF"},
            {"APC", "I_E_APC_tracked_03_cannon_F"},
            {"IFV", "I_E_APC_tracked_03_cannon_F"},
            {"SPAAG", "I_E_APC_tracked_03_cannon_F"},
            {"TNK", "I_E_APC_tracked_03_cannon_F"},
            {"TH", "I_E_Heli_light_03_unarmed_F"},
            {"AH", "I_E_Heli_light_03_dynamicLoadout_F"},
            {"CAS", "I_Plane_Fighter_03_CAS_F"},
            {"Technical", "I_G_Offroad_01_armed_F"}
        };
    };

    class LDF_90_WD {
        gear = "FAL_LDF";
        uniform = "LDF_90_WD";
        name = "Livonia Defence Forces Woodland (1990s)";
        description = "Retro woodland uniforms with FAL";
        languages[] = {{"resistance", 100}};
        side = "resistance";
        camouflage[] = {"woodland"};
        rolePrefix = "LDF";
        vehicleClassnames[] = {
            {"CO", "I_E_Offroad_01_comms_F"},
            {"SL", "CUP_I_T810_Unarmed_LDF"},
            {"FT", "I_E_Offroad_01_F"},
            {"ATTCH", "I_E_Offroad_01_covered_F"},
            {"ENG", "CUP_I_T810_Reammo_LDF"},
            {"APC", "I_E_APC_tracked_03_cannon_F"},
            {"IFV", "I_E_APC_tracked_03_cannon_F"},
            {"SPAAG", "I_E_APC_tracked_03_cannon_F"},
            {"TNK", "I_E_APC_tracked_03_cannon_F"},
            {"TH", "I_E_Heli_light_03_unarmed_F"},
            {"AH", "I_E_Heli_light_03_dynamicLoadout_F"},
            {"CAS", "I_Plane_Fighter_03_CAS_F"},
            {"Technical", "I_G_Offroad_01_armed_F"}
        };
    };

    class LDF_90_SN {
        gear = "FAL_LDF";
        uniform = "LDF_90_SN";
        name = "Livonia Defence Forces Winter (1990s)";
        description = "Retro winter uniforms with FAL";
        languages[] = {{"resistance", 100}};
        side = "resistance";
        camouflage[] = {"snow"};
        rolePrefix = "LDF";
        vehicleClassnames[] = {
            {"CO", "I_E_Offroad_01_comms_F"},
            {"SL", "CUP_I_T810_Unarmed_LDF"},
            {"FT", "I_E_Offroad_01_F"},
            {"ATTCH", "I_E_Offroad_01_covered_F"},
            {"ENG", "CUP_I_T810_Reammo_LDF"},
            {"APC", "I_E_APC_tracked_03_cannon_F"},
            {"IFV", "I_E_APC_tracked_03_cannon_F"},
            {"SPAAG", "I_E_APC_tracked_03_cannon_F"},
            {"TNK", "I_E_APC_tracked_03_cannon_F"},
            {"TH", "I_E_Heli_light_03_unarmed_F"},
            {"AH", "I_E_Heli_light_03_dynamicLoadout_F"},
            {"CAS", "I_Plane_Fighter_03_CAS_F"},
            {"Technical", "I_G_Offroad_01_armed_F"}
        };
    };

    class IND_C_F_BANDIT {
        gear = "AKM_SYND";
        uniform = "SYND_BANDIT";
        name = "Syndikat Bandits";
        description = "Civilian clothing and AKM's";
        languages[] = {{"resistance", 100}};
        side = "resistance";
        camouflage[] = {"desert", "woodland"};
        rolePrefix = "Syndikat Bandits";
        vehicleClassnames[] = {
            {"CO", "CUP_O_UAZ_Unarmed_RU"},
            {"SL", "CUP_I_Datsun_PK"},
            {"FT", "CUP_C_LR_Transport_CTK"},
            {"ATTCH", "CUP_C_LR_Transport_CTK"},
            {"ENG", "CUP_O_Ural_Repair_SLA"},
            {"APC", "CUP_I_MTLB_pk_SYNDIKAT"},
            {"IFV", "CUP_O_BMP2_SLA"},
            {"SPAAG", "CUP_O_Ural_ZU23_SLA"},
            {"TNK", "CUP_I_T55_TK_GUE"},
            {"TH", "CUP_C_Mi17_Civilian_RU"},
            {"AH", "CUP_O_Mi8_SLA_2"},
            {"CAS", "CUP_O_Su25_Dyn_SLA"},
            {"Technical", "CUP_O_UAZ_MG_SLA"}
        };
    };

    class IND_C_F_REBEL {
        gear = "AKM_SYND";
        uniform = "SYND_REBEL";
        name = "Syndikat Rebels";
        description = "Paramilitary camo and AKM";
        languages[] = {{"resistance", 100}};
        side = "resistance";
        camouflage[] = {"woodland"};
        rolePrefix = "Syndikat Bandits";
        vehicleClassnames[] = {
            {"CO", "CUP_O_UAZ_Unarmed_RU"},
            {"SL", "CUP_I_Datsun_PK"},
            {"FT", "CUP_C_LR_Transport_CTK"},
            {"ATTCH", "CUP_C_LR_Transport_CTK"},
            {"ENG", "CUP_O_Ural_Repair_SLA"},
            {"APC", "CUP_I_MTLB_pk_SYNDIKAT"},
            {"IFV", "CUP_O_BMP2_SLA"},
            {"SPAAG", "CUP_O_Ural_ZU23_SLA"},
            {"TNK", "CUP_I_T55_TK_GUE"},
            {"TH", "CUP_C_Mi17_Civilian_RU"},
            {"AH", "CUP_O_Mi8_SLA_2"},
            {"CAS", "CUP_O_Su25_Dyn_SLA"},
            {"Technical", "CUP_O_UAZ_MG_SLA"}
        };
    };

    class MNP_MIL_WD {
        gear = "AKMS_LVM";
        uniform = "LVM_WD";
        name = "Local Militia (Woodland)";
        description = "Woodland Militia with AKMS";
        languages[] = {{"resistance", 100}};
        side = "resistance";
        camouflage[] = {"woodland"};
        rolePrefix = "Local Militia";
        vehicleClassnames[] = {
            {"CO", "CUP_O_UAZ_Unarmed_RU"},
            {"SL", "CUP_I_Datsun_PK"},
            {"FT", "CUP_C_LR_Transport_CTK"},
            {"ATTCH", "CUP_C_LR_Transport_CTK"},
            {"ENG", "CUP_O_Ural_Repair_SLA"},
            {"APC", "CUP_O_MTLB_pk_SLA"},
            {"IFV", "CUP_O_BMP2_SLA"},
            {"SPAAG", "CUP_O_Ural_ZU23_SLA"},
            {"TNK", "CUP_I_T55_TK_GUE"},
            {"TH", "CUP_C_Mi17_Civilian_RU"},
            {"AH", "CUP_O_Mi8_SLA_2"},
            {"CAS", "CUP_O_Su25_Dyn_SLA"},
            {"Technical", "CUP_O_UAZ_MG_SLA"}
        };
    };

    class MNP_MIL_DE {
        gear = "AKMS_LVM";
        uniform = "LVM_DE";
        name = "Local Militia (Desert)";
        description = "Desert Militia with AKMS";
        languages[] = {{"resistance", 100}};
        side = "resistance";
        camouflage[] = {"desert"};
        rolePrefix = "Local Militia";
        vehicleClassnames[] = {
            {"CO", "CUP_O_UAZ_Unarmed_RU"},
            {"SL", "CUP_I_Datsun_PK"},
            {"FT", "CUP_C_LR_Transport_CTK"},
            {"ATTCH", "CUP_C_LR_Transport_CTK"},
            {"ENG", "CUP_O_Ural_Repair_SLA"},
            {"APC", "CUP_O_MTLB_pk_TK_MILITIA"},
            {"IFV", "CUP_O_BMP2_SLA"},
            {"SPAAG", "CUP_O_Ural_ZU23_SLA"},
            {"TNK", "CUP_I_T55_TK_GUE"},
            {"TH", "CUP_C_Mi17_Civilian_RU"},
            {"AH", "CUP_O_Mi8_SLA_2"},
            {"CAS", "CUP_O_Su25_Dyn_SLA"},
            {"Technical", "CUP_O_UAZ_MG_SLA"}
        };
    };

    class MNP_IRE_WD {
        gear = "AUGA3_IRE";
        uniform = "IRE_WD";
        name = "Irish Army (Woodland)";
        description = "Woodland Uniforms and AUG A3's";
        languages[] = {{"resistance", 100}};
        side = "resistance";
        camouflage[] = {"woodland"};
        rolePrefix = "Irish Defence Forces";
        vehicleClassnames[] = {
            {"CO", "CUP_B_RG31_M2_OD_USMC"},
            {"SL", "CUP_B_RG31_M2_OD_USMC"},
            {"FT", "CUP_B_RG31E_M2_OD_USMC"},
            {"ATTCH", "gm_demo_nato_mb_u1300l_cargo"},
            {"ENG", "gm_demo_nato_mb_u1300l_cargo"},
            {"APC", "I_APC_Wheeled_03_cannon_F"},
            {"IFV", "I_APC_tracked_03_cannon_F"},
            {"SPAAG", "CUP_B_M163_USA"},
            {"TNK", "I_MBT_03_cannon_F"},
            {"TH", "CUP_B_UH1D_GER_KSK_Des"},
            {"AH", "CUP_B_UH1D_gunship_GER_KSK_Des"},
            {"CAS", "I_Plane_Fighter_03_CAS_F"},
            {"Technical", "CUP_B_LR_Special_M2_GB_W"}
        };
    };

    class MNP_IRE_DE {
        gear = "AUGA3_IRE";
        uniform = "IRE_DE";
        name = "Irish Army (Desert)";
        description = "Desert Uniforms and AUG A3's";
        languages[] = {{"resistance", 100}};
        side = "resistance";
        camouflage[] = {"desert"};
        rolePrefix = "Irish Defence Forces";
        vehicleClassnames[] = {
            {"CO", "CUP_B_RG31_M2_USMC"},
            {"SL", "CUP_B_RG31_M2_USMC"},
            {"FT", "CUP_B_RG31E_M2_USMC"},
            {"ATTCH", "gm_demo_nato_mb_u1300l_cargo"},
            {"ENG", "gm_demo_nato_mb_u1300l_cargo"},
            {"APC", "AAF_D_APC_Wheeled_03_cannon_F"},
            {"IFV", "AAF_D_APC_tracked_03_cannon_F"},
            {"SPAAG", "CUP_B_M163_USA"},
            {"TNK", "AAF_D_MBT_03_cannon_F"},
            {"TH", "CUP_B_UH1D_GER_KSK_Des"},
            {"AH", "CUP_B_UH1D_gunship_GER_KSK_Des"},
            {"CAS", "AAF_D_Plane_Fighter_03_CAS_F"},
            {"Technical", "CUP_B_LR_Special_M2_GB_D"}
        };
    };

    class MNP_NZ {
        gear = "AUGA3_NZ";
        uniform = "NZ";
        name = "New Zealand Army";
        description = "Universal Uniforms and AUG A3's";
        languages[] = {{"resistance", 100}};
        side = "resistance";
        camouflage[] = {"woodland", "desert"};
        rolePrefix = "NZDF";
        vehicleClassnames[] = {
            {"CO", "CUP_B_LR_Transport_GB_W"},
            {"SL", "CUP_B_LR_Transport_GB_W"},
            {"FT", "CUP_B_LR_Transport_GB_W"},
            {"ATTCH", "gm_demo_nato_mb_u1300l_cargo"},
            {"ENG", "B_Truck_01_Repair_F"},
            {"APC", "CUP_B_M113_USA"},
            {"IFV", "CUP_B_LAV25M240_USMC"},
            {"SPAAG", "CUP_B_M163_USA"},
            {"TNK", "CUP_B_M1A1_Woodland_US_Army"},
            {"TH", "CUP_B_UH1D_GER_KSK_Des"},
            {"AH", "CUP_B_UH1D_gunship_GER_KSK_Des"},
            {"CAS", "CUP_B_AV8B_DYN_USMC"},
            {"Technical", "CUP_B_LR_Special_M2_GB_W"}
        };
    };

    class MNP_FIN_WD {
        gear = "RK62_FIN";
        uniform = "FIN_WD";
        name = "Finnish Army (Woodland)";
        description = "Woodland Uniforms and RK62's";
        languages[] = {{"resistance", 100}};
        side = "resistance";
        camouflage[] = {"woodland"};
        rolePrefix = "Finnish Army";
        vehicleClassnames[] = {
            {"CO", "CUP_B_UAZ_Unarmed_CDF"},
            {"SL", "CUP_B_UAZ_Unarmed_CDF"},
            {"FT", "CUP_B_UAZ_Unarmed_CDF"},
            {"ATTCH", "gm_demo_nato_mb_u1300l_cargo"},
            {"ENG", "CUP_B_Ural_Repair_CDF"},
            {"APC", "CUP_B_BTR60_CDF"},
            {"IFV", "CUP_B_BMP2_CDF"},
            {"SPAAG", "CUP_B_ZSU23_CDF"},
            {"TNK", "CUP_B_T72_CDF"},
            {"TH", "CUP_B_Mi17_CDF"},
            {"AH", "CUP_B_Mi24_D_Dynamic_CDF"},
            {"CAS", "CUP_B_Su25_Dyn_CDF"},
            {"Technical", "CUP_B_UAZ_MG_CDF"}
        };
    };

    class MNP_FIN_SN {
        gear = "RK62_FIN";
        uniform = "FIN_SN";
        name = "Finnish Army (Snow)";
        description = "Snow Uniforms and RK62's";
        languages[] = {{"resistance", 100}};
        side = "resistance";
        camouflage[] = {"snow"};
        rolePrefix = "Finnish Army";
        vehicleClassnames[] = {
            {"CO", "CUP_B_UAZ_Unarmed_CDF"},
            {"SL", "CUP_B_UAZ_Unarmed_CDF"},
            {"FT", "CUP_B_UAZ_Unarmed_CDF"},
            {"ATTCH", "gm_demo_nato_mb_u1300l_cargo"},
            {"ENG", "CUP_B_Ural_Repair_CDF"},
            {"APC", "CUP_B_BTR60_CDF"},
            {"IFV", "CUP_B_BMP2_CDF"},
            {"SPAAG", "CUP_B_ZSU23_CDF"},
            {"TNK", "CUP_B_T72_CDF"},
            {"TH", "CUP_B_Mi17_CDF"},
            {"AH", "CUP_B_Mi24_D_Dynamic_CDF"},
            {"CAS", "CUP_B_Su25_Dyn_CDF"},
            {"Technical", "CUP_B_UAZ_MG_CDF"}
        };
    };

    class MNP_NOR_WD {
        gear = "HK416_NOR";
        uniform = "NOR_WD";
        name = "Norwegian Army (Woodland)";
        description = "Woodland Uniforms and HK416";
        languages[] = {{"resistance", 100}};
        side = "resistance";
        camouflage[] = {"woodland"};
        rolePrefix = "Norwegian Army";
        vehicleClassnames[] = {
            {"CO", "ARK_SCA_COV_NOR_WD"},
            {"SL", "ARK_SCA_COV_NOR_WD"},
            {"FT", "ARK_SCA_COV_NOR_WD"},
            {"ATTCH", "ARK_SCA_COV_NOR_WD"},
            {"ENG", "B_Truck_01_Repair_F"},
            {"APC", "ARK_M113_NOR"},
            {"IFV", "ARK_M113_NOR"},
            {"SPAAG", "CUP_B_M163_USA"},
            {"TNK", "ARK_LEO2_NOR"},
            {"TH", "ARK_UH1Y_UNA_NOR"},
            {"AH", "ARK_UH1Y_GUN_NOR"},
            {"CAS", "CUP_B_AV8B_DYN_USMC"},
            {"Technical", "CUP_B_LR_Special_M2_GB_W"}
        };
    };

    class MNP_NOR_DE {
        gear = "HK416_NOR";
        uniform = "NOR_DE";
        name = "Norwegian Army (Desert)";
        description = "Desert Uniforms and HK416";
        languages[] = {{"resistance", 100}};
        side = "resistance";
        camouflage[] = {"desert"};
        rolePrefix = "Norwegian Army";
        vehicleClassnames[] = {
            {"CO", "ARK_SCA_COV_NOR_GN"},
            {"SL", "ARK_SCA_COV_NOR_GN"},
            {"FT", "ARK_SCA_COV_NOR_GN"},
            {"ATTCH", "ARK_SCA_COV_NOR_GN"},
            {"ENG", "B_Truck_01_Repair_F"},
            {"APC", "ARK_M113_NOR"},
            {"IFV", "ARK_M113_NOR"},
            {"SPAAG", "CUP_B_M163_USA"},
            {"TNK", "ARK_LEO2_NOR"},
            {"TH", "ARK_UH1Y_UNA_NOR"},
            {"AH", "ARK_UH1Y_GUN_NOR"},
            {"CAS", "CUP_B_AV8B_DYN_USMC"},
            {"Technical", "CUP_B_LR_Special_M2_GB_W"}
        };
    };

    class CUP_RACS_DE {
        gear = "BREN2_RACS";
        uniform = "CUP_RACS_DE";
        name = "Royal Army Corps of Sahrani (Desert)";
        description = "Desert Uniforms and Bren 2";
        languages[] = {{"resistance", 100}};
        side = "resistance";
        camouflage[] = {"desert"};
        rolePrefix = "Royal Army Corps of Sahrani";
        vehicleClassnames[] = {
            {"CO", "CUP_I_LR_Transport_RACS"},
            {"SL", "CUP_I_LR_Transport_RACS"},
            {"FT", "CUP_I_LR_Transport_RACS"},
            {"ATTCH", "CUP_I_LR_Transport_RACS"},
            {"ENG", "B_Truck_01_Repair_F"},
            {"APC", "CUP_I_M113_RACS"},
            {"IFV", "CUP_I_AAV_RACS"},
            {"SPAAG", "CUP_I_M163_RACS"},
            {"TNK", "CUP_I_M60A3_RACS"},
            {"TH", "CUP_I_SA330_Puma_HC2_RACS"},
            {"AH", "CUP_B_AH1Z_Dynamic_USMC"},
            {"CAS", "CUP_I_JAS39_RACS"},
            {"Technical", "CUP_B_LR_Special_M2_GB_D"}
        };
    };

    class CUP_RACS_URB {
        gear = "BREN2_RACS";
        uniform = "CUP_RACS_URB";
        name = "Royal Army Corps of Sahrani (Urban)";
        description = "Urban (night) Uniforms and Bren 2";
        languages[] = {{"resistance", 100}};
        side = "resistance";
        camouflage[] = {"desert"};
        rolePrefix = "Royal Army Corps of Sahrani";
        vehicleClassnames[] = {
            {"CO", "CUP_I_LR_Transport_RACS"},
            {"SL", "CUP_I_LR_Transport_RACS"},
            {"FT", "CUP_I_LR_Transport_RACS"},
            {"ATTCH", "CUP_I_LR_Transport_RACS"},
            {"ENG", "B_Truck_01_Repair_F"},
            {"APC", "CUP_I_M113_RACS"},
            {"IFV", "CUP_I_AAV_RACS"},
            {"SPAAG", "CUP_I_M163_RACS"},
            {"TNK", "CUP_I_M60A3_RACS"},
            {"TH", "CUP_I_SA330_Puma_HC2_RACS"},
            {"AH", "CUP_B_AH1Z_Dynamic_USMC"},
            {"CAS", "CUP_I_JAS39_RACS"},
            {"Technical", "CUP_B_LR_Special_M2_GB_D"}
        };
    };

    class CUP_RACS_MECH {
        gear = "BREN2_RACS";
        uniform = "CUP_RACS_MECH";
        name = "Royal Army Corps of Sahrani (Mechanised)";
        description = "Tigerstripe Uniforms and Bren 2";
        languages[] = {{"resistance", 100}};
        side = "resistance";
        camouflage[] = {"woodland"};
        rolePrefix = "Royal Army Corps of Sahrani";
        vehicleClassnames[] = {
            {"CO", "CUP_I_LR_Transport_RACS"},
            {"SL", "CUP_I_LR_Transport_RACS"},
            {"FT", "CUP_I_LR_Transport_RACS"},
            {"ATTCH", "CUP_I_LR_Transport_RACS"},
            {"ENG", "B_Truck_01_Repair_F"},
            {"APC", "CUP_I_M113_RACS"},
            {"IFV", "CUP_I_AAV_RACS"},
            {"SPAAG", "CUP_I_M163_RACS"},
            {"TNK", "CUP_I_M60A3_RACS"},
            {"TH", "CUP_I_SA330_Puma_HC2_RACS"},
            {"AH", "CUP_B_AH1Z_Dynamic_USMC"},
            {"CAS", "CUP_I_JAS39_RACS"},
            {"Technical", "CUP_B_LR_Special_M2_GB_D"}
        };
    };

    class CUP_TK_LOC {
        gear = "AKM_TKL";
        uniform = "CUP_TK_LOC";
        name = "Takistani Locals (Civ Clothing)";
        description = "Civilian Clothes with AKM's";
        languages[] = {{"resistance", 100}};
        side = "resistance";
        camouflage[] = {"desert"};
        rolePrefix = "TK Militia";
        vehicleClassnames[] = {
            {"CO", "CUP_C_LR_Transport_CTK"},
            {"SL", "CUP_C_LR_Transport_CTK"},
            {"FT", "CUP_C_LR_Transport_CTK"},
            {"ATTCH", "CUP_C_LR_Transport_CTK"},
            {"ENG", "CUP_O_Ural_Repair_SLA"},
            {"APC", "CUP_O_MTLB_pk_TK_MILITIA"},
            {"IFV", "CUP_O_BMP2_SLA"},
            {"SPAAG", "CUP_O_ZSU23_SLA"},
            {"TNK", "CUP_I_T55_TK_GUE"},
            {"TH", "CUP_C_Mi17_Civilian_RU"},
            {"AH", "CUP_I_Mi24_D_ION"},
            {"CAS", "CUP_O_Su25_Dyn_TKA"},
            {"Technical", "CUP_O_UAZ_MG_SLA"}
        };
    };

    class CUP_NAPA_WD {
        gear = "AKM_NAPA";
        uniform = "CUP_NAPA_WD";
        name = "NAPA (Woodland)";
        description = "Woodland Guerillas with AKM's";
        languages[] = {{"resistance", 100}};
        side = "resistance";
        camouflage[] = {"woodland"};
        rolePrefix = "NAPA";
        vehicleClassnames[] = {
            {"CO", "CUP_O_UAZ_Unarmed_SLA"},
            {"SL", "CUP_O_UAZ_Unarmed_SLA"},
            {"FT", "CUP_B_LR_Transport_GB_W"},
            {"ATTCH", "CUP_B_LR_Transport_GB_W"},
            {"ENG", "CUP_O_Ural_Repair_SLA"},
            {"APC", "CUP_I_MTLB_pk_NAPA"},
            {"IFV", "CUP_O_BMP2_SLA"},
            {"SPAAG", "CUP_O_ZSU23_SLA"},
            {"TNK", "CUP_I_T72_NAPA"},
            {"TH", "CUP_C_Mi17_Civilian_RU"},
            {"AH", "CUP_I_Mi24_D_ION"},
            {"CAS", "CUP_O_Su25_Dyn_TKA"},
            {"Technical", "CUP_O_UAZ_MG_SLA"}
        };
    };

    class CUP_CDF_DES_UN {
        gear = "AKS74_CDF";
        uniform = "CUP_CDF_DES_UN";
        name = "CDF UN (Desert)";
        description = "Desert United Nations with AKS 74";
        languages[] = {{"resistance", 100}};
        side = "resistance";
        camouflage[] = {"desert"};
        rolePrefix = "CDF UN";
        vehicleClassnames[] = {
            {"CO", "CUP_I_UAZ_Unarmed_UN"},
            {"SL", "CUP_I_UAZ_Unarmed_UN"},
            {"FT", "CUP_I_Ural_UN"},
            {"ATTCH", "CUP_I_Ural_UN"},
            {"ENG", "CUP_I_Ural_Repair_UN"},
            {"APC", "CUP_I_MTLB_pk_UN"},
            {"IFV", "CUP_I_BMP2_UN"},
            {"SPAAG", "CUP_B_ZSU23_CDF"},
            {"TNK", "CUP_B_T72_CDF"},
            {"TH", "CUP_I_Mi17_UN"},
            {"AH", "CUP_I_Mi24_D_Dynamic_UN"},
            {"CAS", "CUP_B_Su25_Dyn_CDF"},
            {"Technical", "CUP_I_UAZ_MG_UN"}
        };
    };

    class CUP_CDF_FOR_UN {
        gear = "AKS74_CDF";
        uniform = "CUP_CDF_FOR_UN";
        name = "CDF UN (Forest)";
        description = "Forest United Nations with AKS 74";
        languages[] = {{"resistance", 100}};
        side = "resistance";
        camouflage[] = {"woodland"};
        rolePrefix = "CDF UN";
        vehicleClassnames[] = {
            {"CO", "CUP_I_UAZ_Unarmed_UN"},
            {"SL", "CUP_I_UAZ_Unarmed_UN"},
            {"FT", "CUP_I_Ural_UN"},
            {"ATTCH", "CUP_I_Ural_UN"},
            {"ENG", "CUP_I_Ural_Repair_UN"},
            {"APC", "CUP_I_M113_UN"},
            {"IFV", "CUP_I_BMP2_UN"},
            {"SPAAG", "CUP_B_ZSU23_CDF"},
            {"TNK", "CUP_B_T72_CDF"},
            {"TH", "CUP_I_Mi17_UN"},
            {"AH", "CUP_I_Mi24_D_Dynamic_UN"},
            {"CAS", "CUP_B_Su25_Dyn_CDF"},
            {"Technical", "CUP_I_UAZ_MG_UN"}
        };
    };

    class CUP_CDF_MOU_UN {
        gear = "AKS74_CDF";
        uniform = "CUP_CDF_MOU_UN";
        name = "CDF UN (Mountain)";
        description = "Mountain United Nations with AKS 74";
        languages[] = {{"resistance", 100}};
        side = "resistance";
        camouflage[] = {"woodland"};
        rolePrefix = "CDF UN";
        vehicleClassnames[] = {
            {"CO", "CUP_I_UAZ_Unarmed_UN"},
            {"SL", "CUP_I_UAZ_Unarmed_UN"},
            {"FT", "CUP_I_Ural_UN"},
            {"ATTCH", "CUP_I_Ural_UN"},
            {"ENG", "CUP_I_Ural_Repair_UN"},
            {"APC", "CUP_I_M113_UN"},
            {"IFV", "CUP_I_BMP2_UN"},
            {"SPAAG", "CUP_B_ZSU23_CDF"},
            {"TNK", "CUP_B_T72_CDF"},
            {"TH", "CUP_I_Mi17_UN"},
            {"AH", "CUP_I_Mi24_D_Dynamic_UN"},
            {"CAS", "CUP_B_Su25_Dyn_CDF"},
            {"Technical", "CUP_I_UAZ_MG_UN"}
        };
    };

    class CUP_CDF_SN_UN {
        gear = "AKS74_CDF";
        uniform = "CUP_CDF_SN_UN";
        name = "CDF UN (Winter)";
        description = "Winter United Nations with AKS 74";
        languages[] = {{"resistance", 100}};
        side = "resistance";
        camouflage[] = {"snow"};
        rolePrefix = "CDF UN";
        vehicleClassnames[] = {
            {"CO", "CUP_I_UAZ_Unarmed_UN"},
            {"SL", "CUP_I_UAZ_Unarmed_UN"},
            {"FT", "CUP_I_Ural_UN"},
            {"ATTCH", "CUP_I_Ural_UN"},
            {"ENG", "CUP_I_Ural_Repair_UN"},
            {"APC", "CUP_I_M113_UN"},
            {"IFV", "CUP_I_BMP2_UN"},
            {"SPAAG", "CUP_B_ZSU23_CDF"},
            {"TNK", "CUP_B_T72_CDF"},
            {"TH", "CUP_I_Mi17_UN"},
            {"AH", "CUP_I_Mi24_D_Dynamic_UN"},
            {"CAS", "CUP_B_Su25_Dyn_CDF"},
            {"Technical", "CUP_I_UAZ_MG_UN"}
        };
    };

    class CUP_ION_PMC {
        gear = "BREN807_PMC";
        uniform = "CUP_ION_PMC";
        name = "ION PMC";
        description = "ION PMC with Bren 807";
        languages[] = {{"resistance", 100}};
        side = "resistance";
        camouflage[] = {"desert", "woodland"};
        rolePrefix = "ION PMC";
        vehicleClassnames[] = {
            {"CO", "CUP_B_HMMWV_Transport_NATO_T"},
            {"SL", "CUP_B_HMMWV_Unarmed_NATO_T"},
            {"FT", "CUP_B_HMMWV_Unarmed_NATO_T"},
            {"ATTCH", "CUP_B_HMMWV_Unarmed_NATO_T"},
            {"ENG", "B_T_Truck_01_Repair_F"},
            {"APC", "CUP_B_M1126_ICV_M2_Woodland_Slat"},
            {"IFV", "CUP_B_M2Bradley_NATO_T"},
            {"SPAAG", "CUP_B_M6LineBacker_NATO_T"},
            {"TNK", "CUP_B_M1A2SEP_NATO"},
            {"TH", "CUP_I_Ka60_GL_Blk_ION"},
            {"AH", "CUP_I_Mi24_Mk4_AT_ION"},
            {"CAS", "CUP_B_F35B_CAS_USMC"},
            {"Technical", "CUP_B_HMMWV_M2_NATO_T"}
        };
    };

    class PMC_CBRN {
        gear = "BREN807_PMC";
        uniform = "PMC_CBRN";
        name = "ION PMC CBRN";
        description = "ION PMC CBRN with Bren 807";
        languages[] = {{"resistance", 100}};
        side = "resistance";
        camouflage[] = {};
        rolePrefix = "ION PMC";
        vehicleClassnames[] = {
            {"CO", "CUP_B_HMMWV_Transport_NATO_T"},
            {"SL", "CUP_B_HMMWV_Unarmed_NATO_T"},
            {"FT", "CUP_B_HMMWV_Unarmed_NATO_T"},
            {"ATTCH", "CUP_B_HMMWV_Unarmed_NATO_T"},
            {"ENG", "B_T_Truck_01_Repair_F"},
            {"APC", "CUP_B_M1126_ICV_M2_Woodland_Slat"},
            {"IFV", "CUP_B_M2Bradley_NATO_T"},
            {"SPAAG", "CUP_B_M6LineBacker_NATO_T"},
            {"TNK", "CUP_B_M1A2SEP_NATO"},
            {"TH", "CUP_I_Ka60_GL_Blk_ION"},
            {"AH", "CUP_I_Mi24_Mk4_AT_ION"},
            {"CAS", "CUP_B_F35B_CAS_USMC"},
            {"Technical", "CUP_B_HMMWV_M2_NATO_T"}
        };
    };

    class CUP_ION_PMC_SN {
        gear = "BREN807_PMC";
        uniform = "CUP_ION_PMC_SN";
        name = "ION PMC (Arctic)";
        description = "Arctic ION PMC with Bren 807";
        languages[] = {{"resistance", 100}};
        side = "resistance";
        camouflage[] = {"snow"};
        rolePrefix = "ION PMC";
        vehicleClassnames[] = {
            {"CO", "CUP_B_HMMWV_Transport_NATO_T"},
            {"SL", "CUP_B_HMMWV_Unarmed_NATO_T"},
            {"FT", "CUP_B_HMMWV_Unarmed_NATO_T"},
            {"ATTCH", "CUP_B_HMMWV_Unarmed_NATO_T"},
            {"ENG", "B_T_Truck_01_Repair_F"},
            {"APC", "CUP_B_M1126_ICV_M2_Woodland_Slat"},
            {"IFV", "CUP_B_M2Bradley_NATO_T"},
            {"SPAAG", "CUP_B_M6LineBacker_NATO_T"},
            {"TNK", "CUP_B_M1A2SEP_NATO"},
            {"TH", "CUP_I_Ka60_GL_Blk_ION"},
            {"AH", "CUP_I_Mi24_Mk4_AT_ION"},
            {"CAS", "CUP_B_F35B_CAS_USMC"},
            {"Technical", "CUP_B_HMMWV_M2_NATO_T"}
        };
    };

    class FOW_USMC {
        gear = "FOW_USMC_G";
        uniform = "FOW_USMC_U";
        name = "FOW USMC";
        description = "United States Marine Corps - Pacific Theatre";
        languages[] = {{"resistance", 100}};
        side = "resistance";
        camouflage[] = {};
        rolePrefix = "USMC";
        vehicleClassnames[] = {
            {"CO", "LIB_US_Willys_MB"},
            {"SL", "LIB_US_GMC_Open"},
            {"FT", "LIB_US_Willys_MB"},
            {"ATTCH", "LIB_US_Willys_MB"},
            {"ENG", "LIB_US_GMC_Ammo"},
            {"APC", "fow_v_lvta2_usmc"},
            {"IFV", "LIB_US_M3_Halftrack"},
            {"SPAAG", "LIB_M8_Greyhound"},
            {"TNK", "LIB_M4A3_75_Tubes"},
            {"TH", "LIB_C47_Skytrain"},
            {"AH", "LIB_P47"},
            {"CAS", "LIB_P47"},
            {"Technical", "LIB_US_Scout_M3_FFV"}
        };
    };

    class FOW_USA_PAC {
        gear = "FOW_USA_G";
        uniform = "FOW_USA_PAC_U";
        name = "FOW US Army Pacific";
        description = "United States Army - Pacific Theatre";
        languages[] = {{"resistance", 100}};
        side = "resistance";
        camouflage[] = {};
        rolePrefix = "US Army";
        vehicleClassnames[] = {
            {"CO", "LIB_US_Willys_MB"},
            {"SL", "LIB_US_GMC_Open"},
            {"FT", "LIB_US_Willys_MB"},
            {"ATTCH", "LIB_US_Willys_MB"},
            {"ENG", "LIB_US_GMC_Ammo"},
            {"APC", "fow_v_lvta2_usmc"},
            {"IFV", "LIB_US_M3_Halftrack"},
            {"SPAAG", "LIB_M8_Greyhound"},
            {"TNK", "LIB_M4A3_75_Tubes"},
            {"TH", "LIB_C47_Skytrain"},
            {"AH", "LIB_P47"},
            {"CAS", "LIB_P47"},
            {"Technical", "LIB_US_Scout_M3_FFV"}
        };
    };

    class FOW_USA {
        gear = "FOW_USA_G";
        uniform = "FOW_USA_U";
        name = "FOW US Army";
        description = "United States Army - European Theatre";
        languages[] = {{"resistance", 100}};
        side = "resistance";
        camouflage[] = {};
        rolePrefix = "US Army";
        vehicleClassnames[] = {
            {"CO", "LIB_US_Willys_MB"},
            {"SL", "LIB_US_GMC_Open"},
            {"FT", "LIB_US_Willys_MB"},
            {"ATTCH", "LIB_US_Willys_MB"},
            {"ENG", "LIB_US_GMC_Ammo"},
            {"APC", "LIB_US_M3_Halftrack"},
            {"IFV", "LIB_M8_Greyhound"},
            {"SPAAG", "LIB_M5A1_Stuart"},
            {"TNK", "LIB_M4A3_75"},
            {"TH", "LIB_C47_Skytrain"},
            {"AH", "LIB_P47"},
            {"CAS", "LIB_P47"},
            {"Technical", "LIB_US_Scout_M3_FFV"}
        };
    };

    class IF44_USA {
        gear = "IF44_USA_G";
        uniform = "IF44_USA_U";
        name = "IF44 US Army";
        description = "United States Army - European Theatre";
        languages[] = {{"resistance", 100}};
        side = "resistance";
        camouflage[] = {};
        rolePrefix = "US Army";
        vehicleClassnames[] = {
            {"CO", "LIB_US_Willys_MB"},
            {"SL", "LIB_US_GMC_Open"},
            {"FT", "LIB_US_Willys_MB"},
            {"ATTCH", "LIB_US_Willys_MB"},
            {"ENG", "LIB_US_GMC_Ammo"},
            {"APC", "LIB_US_M3_Halftrack"},
            {"IFV", "LIB_M8_Greyhound"},
            {"SPAAG", "LIB_M5A1_Stuart"},
            {"TNK", "LIB_M4A3_75"},
            {"TH", "LIB_C47_Skytrain"},
            {"AH", "LIB_P47"},
            {"CAS", "LIB_P47"},
            {"Technical", "LIB_US_Scout_M3_FFV"}
        };
    };

    class IF44_USA_SN {
        gear = "IF44_USA_G";
        uniform = "IF44_USA_SN_U";
        name = "IF44 US Army Snow";
        description = "United States Army Snow - European Theatre";
        languages[] = {{"resistance", 100}};
        side = "resistance";
        camouflage[] = {};
        rolePrefix = "US Army";
        vehicleClassnames[] = {
            {"CO", "LIB_US_Willys_MB"},
            {"SL", "LIB_US_GMC_Open"},
            {"FT", "LIB_US_Willys_MB"},
            {"ATTCH", "LIB_US_Willys_MB"},
            {"ENG", "LIB_US_GMC_Ammo"},
            {"APC", "LIB_US_M3_Halftrack"},
            {"IFV", "LIB_M8_Greyhound"},
            {"SPAAG", "LIB_M5A1_Stuart"},
            {"TNK", "LIB_M4A3_75_w"},
            {"TH", "LIB_C47_Skytrain"},
            {"AH", "LIB_P47"},
            {"CAS", "LIB_P47"},
            {"Technical", "LIB_US_Scout_M3_FFV"}
        };
    };

    class IF44_USA_NA {
        gear = "IF44_USA_G";
        uniform = "IF44_USA_NA_U";
        name = "IF44 US Army";
        description = "United States Army - North Africa";
        languages[] = {{"resistance", 100}};
        side = "resistance";
        camouflage[] = {};
        rolePrefix = "US Army";
        vehicleClassnames[] = {
            {"CO", "LIB_US_Willys_MB"},
            {"SL", "LIB_US_GMC_Open"},
            {"FT", "LIB_US_Willys_MB"},
            {"ATTCH", "LIB_US_Willys_MB"},
            {"ENG", "LIB_US_GMC_Ammo"},
            {"APC", "LIB_US_M3_Halftrack"},
            {"IFV", "LIB_M8_Greyhound"},
            {"SPAAG", "LIB_M5A1_Stuart"},
            {"TNK", "LIB_M4A3_75"},
            {"TH", "LIB_C47_Skytrain"},
            {"AH", "LIB_P47"},
            {"CAS", "LIB_P47"},
            {"Technical", "LIB_US_Scout_M3_FFV"}
        };
    };

    class FOW_USA_PARA {
        gear = "FOW_USA_G";
        uniform = "FOW_USA_PARA_U";
        name = "FOW US Army Airborne";
        description = "United States Army Airborne - European Theatre";
        languages[] = {{"resistance", 100}};
        side = "resistance";
        camouflage[] = {};
        rolePrefix = "US Army Airborne";
        vehicleClassnames[] = {
            {"CO", "LIB_US_Willys_MB"},
            {"SL", "LIB_US_GMC_Open"},
            {"FT", "LIB_US_Willys_MB"},
            {"ATTCH", "LIB_US_Willys_MB"},
            {"ENG", "LIB_US_GMC_Ammo"},
            {"APC", "LIB_US_M3_Halftrack"},
            {"IFV", "LIB_M8_Greyhound"},
            {"SPAAG", "LIB_M5A1_Stuart"},
            {"TNK", "LIB_M4A3_75"},
            {"TH", "LIB_C47_Skytrain"},
            {"AH", "LIB_P47"},
            {"CAS", "LIB_P47"},
            {"Technical", "LIB_US_Scout_M3_FFV"}
        };
    };

    class IF44_US_PARA {
        gear = "IF44_USA_PARA_G";
        uniform = "IF44_USA_PARA_U";
        name = "IF US Army Airborne";
        description = "United States Army Airborne - European Theatre";
        languages[] = {{"resistance", 100}};
        side = "resistance";
        camouflage[] = {};
        rolePrefix = "US Army Airborne";
        vehicleClassnames[] = {
            {"CO", "LIB_US_Willys_MB"},
            {"SL", "LIB_US_GMC_Open"},
            {"FT", "LIB_US_Willys_MB"},
            {"ATTCH", "LIB_US_Willys_MB"},
            {"ENG", "LIB_US_GMC_Ammo"},
            {"APC", "LIB_US_M3_Halftrack"},
            {"IFV", "LIB_M8_Greyhound"},
            {"SPAAG", "LIB_M5A1_Stuart"},
            {"TNK", "LIB_M4A3_75"},
            {"TH", "LIB_C47_Skytrain"},
            {"AH", "LIB_P47"},
            {"CAS", "LIB_P47"},
            {"Technical", "LIB_US_Scout_M3_FFV"}
        };
    };

    class IF44_US_PARA_SN {
        gear = "IF44_USA_PARA_G";
        uniform = "IF44_USA_PARA_SN_U";
        name = "IF US Army Airborne Snow";
        description = "United States Army Airborne Snow - European Theatre";
        languages[] = {{"resistance", 100}};
        side = "resistance";
        camouflage[] = {};
        rolePrefix = "US Army Airborne";
        vehicleClassnames[] = {
            {"CO", "LIB_US_Willys_MB"},
            {"SL", "LIB_US_GMC_Open"},
            {"FT", "LIB_US_Willys_MB"},
            {"ATTCH", "LIB_US_Willys_MB"},
            {"ENG", "LIB_US_GMC_Ammo"},
            {"APC", "LIB_US_M3_Halftrack"},
            {"IFV", "LIB_M8_Greyhound"},
            {"SPAAG", "LIB_M5A1_Stuart"},
            {"TNK", "LIB_M4A3_75"},
            {"TH", "LIB_C47_Skytrain"},
            {"AH", "LIB_P47"},
            {"CAS", "LIB_P47"},
            {"Technical", "LIB_US_Scout_M3_FFV"}
        };
    };

    class FOW_BAF {
        gear = "FOW_BAF_42_G";
        uniform = "FOW_BAF_U";
        name = "FOW British Army (1942)";
        description = "British Army 1942";
        languages[] = {{"resistance", 100}};
        side = "resistance";
        camouflage[] = {};
        rolePrefix = "British Army";
        vehicleClassnames[] = {
            {"CO", "LIB_US_Willys_MB"},
            {"SL", "LIB_US_GMC_Open"},
            {"FT", "LIB_US_Willys_MB"},
            {"ATTCH", "LIB_US_Willys_MB"},
            {"ENG", "LIB_US_GMC_Ammo"},
            {"APC", "fow_v_universalCarrier"},
            {"IFV", "fow_v_cromwell_uk"},
            {"SPAAG", "LIB_US_M3_Halftrack"},
            {"TNK", "LIB_M4A4_FIREFLY"},
            {"TH", "LIB_C47_Skytrain"},
            {"AH", "LIB_P47"},
            {"CAS", "LIB_P47"},
            {"Technical", "fow_v_universalCarrier"}
        };
    };

    class FOW_BAF_PARA {
        gear = "FOW_BAF_42_G";
        uniform = "FOW_BAF_U";
        name = "FOW British Army 2Para (1942)";
        description = "British Army 2Para 1942";
        languages[] = {{"resistance", 100}};
        side = "resistance";
        camouflage[] = {};
        rolePrefix = "British Army Airborne";
        vehicleClassnames[] = {
            {"CO", "LIB_US_Willys_MB"},
            {"SL", "LIB_US_GMC_Open"},
            {"FT", "LIB_US_Willys_MB"},
            {"ATTCH", "LIB_US_Willys_MB"},
            {"ENG", "LIB_US_GMC_Ammo"},
            {"APC", "fow_v_universalCarrier"},
            {"IFV", "fow_v_cromwell_uk"},
            {"SPAAG", "LIB_US_M3_Halftrack"},
            {"TNK", "LIB_M4A4_FIREFLY"},
            {"TH", "LIB_C47_Skytrain"},
            {"AH", "LIB_P47"},
            {"CAS", "LIB_P47"},
            {"Technical", "fow_v_universalCarrier"}
        };
    };

    class IF44_BAF_PARA {
        gear = "IF44_BAF_42_G";
        uniform = "IF44_BAF_PARA_U";
        name = "IF44 British Army 2Para (1942)";
        description = "British Army 2Para 1942";
        languages[] = {{"resistance", 100}};
        side = "resistance";
        camouflage[] = {};
        rolePrefix = "British Army Airborne";
        vehicleClassnames[] = {
            {"CO", "LIB_US_Willys_MB"},
            {"SL", "LIB_US_GMC_Open"},
            {"FT", "LIB_US_Willys_MB"},
            {"ATTCH", "LIB_US_Willys_MB"},
            {"ENG", "LIB_US_GMC_Ammo"},
            {"APC", "fow_v_universalCarrier"},
            {"IFV", "fow_v_cromwell_uk"},
            {"SPAAG", "LIB_US_M3_Halftrack"},
            {"TNK", "LIB_M4A4_FIREFLY"},
            {"TH", "LIB_C47_Skytrain"},
            {"AH", "LIB_P47"},
            {"CAS", "LIB_P47"},
            {"Technical", "fow_v_universalCarrier"}
        };
    };

    class IF44_BAF_PARA_SN {
        gear = "IF44_BAF_43_G";
        uniform = "IF44_BAF_PARA_SN_U";
        name = "IF44 British Army 2Para Winter (1943)";
        description = "British Army 2Para Winter 1943";
        languages[] = {{"resistance", 100}};
        side = "resistance";
        camouflage[] = {};
        rolePrefix = "British Army Airborne";
        vehicleClassnames[] = {
            {"CO", "LIB_US_Willys_MB"},
            {"SL", "LIB_US_GMC_Open"},
            {"FT", "LIB_US_Willys_MB"},
            {"ATTCH", "LIB_US_Willys_MB"},
            {"ENG", "LIB_US_GMC_Ammo"},
            {"APC", "fow_v_universalCarrier"},
            {"IFV", "fow_v_cromwell_uk"},
            {"SPAAG", "LIB_US_M3_Halftrack"},
            {"TNK", "LIB_M4A4_FIREFLY"},
            {"TH", "LIB_C47_Skytrain"},
            {"AH", "LIB_P47"},
            {"CAS", "LIB_P47"},
            {"Technical", "fow_v_universalCarrier"}
        };
    };

    class IF44_BAF_NA {
        gear = "IF44_BAF_42_G";
        uniform = "IF44_BAF_NA_U";
        name = "IF44 British Army North Africa (1942)";
        description = "British Army North Africa 1942";
        languages[] = {{"resistance", 100}};
        side = "resistance";
        camouflage[] = {};
        rolePrefix = "British Army";
        vehicleClassnames[] = {
            {"CO", "LIB_US_Willys_MB"},
            {"SL", "LIB_US_GMC_Open"},
            {"FT", "LIB_US_Willys_MB"},
            {"ATTCH", "LIB_US_Willys_MB"},
            {"ENG", "LIB_US_GMC_Ammo"},
            {"APC", "fow_v_universalCarrier"},
            {"IFV", "fow_v_cromwell_uk"},
            {"SPAAG", "LIB_US_M3_Halftrack"},
            {"TNK", "LIB_M4A4_FIREFLY"},
            {"TH", "LIB_C47_Skytrain"},
            {"AH", "LIB_P47"},
            {"CAS", "LIB_P47"},
            {"Technical", "fow_v_universalCarrier"}
        };
    };

    class IF44_BAF {
        gear = "IF44_BAF_42_G";
        uniform = "IF44_BAF_U";
        name = "IF44 British Army (1942)";
        description = "British Army 1942";
        languages[] = {{"resistance", 100}};
        side = "resistance";
        camouflage[] = {};
        rolePrefix = "British Army";
        vehicleClassnames[] = {
            {"CO", "LIB_US_Willys_MB"},
            {"SL", "LIB_US_GMC_Open"},
            {"FT", "LIB_US_Willys_MB"},
            {"ATTCH", "LIB_US_Willys_MB"},
            {"ENG", "LIB_US_GMC_Ammo"},
            {"APC", "fow_v_universalCarrier"},
            {"IFV", "fow_v_cromwell_uk"},
            {"SPAAG", "LIB_US_M3_Halftrack"},
            {"TNK", "LIB_M4A4_FIREFLY"},
            {"TH", "LIB_C47_Skytrain"},
            {"AH", "LIB_P47"},
            {"CAS", "LIB_P47"},
            {"Technical", "fow_v_universalCarrier"}
        };
    };

    class IF44_BAF_SN {
        gear = "IF44_BAF_43_G";
        uniform = "IF44_BAF_SN_U";
        name = "IF44 British Army Winter (1943)";
        description = "British Army Winter 1943";
        languages[] = {{"resistance", 100}};
        side = "resistance";
        camouflage[] = {};
        rolePrefix = "British Army";
        vehicleClassnames[] = {
            {"CO", "LIB_US_Willys_MB"},
            {"SL", "LIB_US_GMC_Open"},
            {"FT", "LIB_US_Willys_MB"},
            {"ATTCH", "LIB_US_Willys_MB"},
            {"ENG", "LIB_US_GMC_Ammo"},
            {"APC", "fow_v_universalCarrier"},
            {"IFV", "fow_v_cromwell_uk"},
            {"SPAAG", "LIB_US_M3_Halftrack"},
            {"TNK", "LIB_M4A4_FIREFLY"},
            {"TH", "LIB_C47_Skytrain"},
            {"AH", "LIB_P47"},
            {"CAS", "LIB_P47"},
            {"Technical", "fow_v_universalCarrier"}
        };
    };

    class FOW_BAF_PAC {
        gear = "FOW_BAF_PAC_G";
        uniform = "FOW_BAF_PAC_U";
        name = "FOW British Army Pacific";
        description = "British Army Pacific";
        languages[] = {{"resistance", 100}};
        side = "resistance";
        camouflage[] = {};
        rolePrefix = "British Army";
        vehicleClassnames[] = {
            {"CO", "LIB_US_Willys_MB"},
            {"SL", "LIB_US_GMC_Open"},
            {"FT", "LIB_US_Willys_MB"},
            {"ATTCH", "LIB_US_Willys_MB"},
            {"ENG", "LIB_US_GMC_Ammo"},
            {"APC", "fow_v_universalCarrier"},
            {"IFV", "fow_v_lvta2_usmc"},
            {"SPAAG", "LIB_US_M3_Halftrack"},
            {"TNK", "LIB_M4A3_75"},
            {"TH", "LIB_C47_Skytrain"},
            {"AH", "LIB_P47"},
            {"CAS", "LIB_P47"},
            {"Technical", "fow_v_universalCarrier"}
        };
    };

    class FOW_AUS {
        gear = "FOW_BAF_PAC_G";
        uniform = "FOW_AUS_U";
        name = "FOW Australian Army Pacific";
        description = "Australian Army Pacific";
        languages[] = {{"resistance", 100}};
        side = "resistance";
        camouflage[] = {};
        rolePrefix = "Australian Army";
        vehicleClassnames[] = {
            {"CO", "LIB_US_Willys_MB"},
            {"SL", "LIB_US_GMC_Open"},
            {"FT", "LIB_US_Willys_MB"},
            {"ATTCH", "LIB_US_Willys_MB"},
            {"ENG", "LIB_US_GMC_Ammo"},
            {"APC", "fow_v_universalCarrier"},
            {"IFV", "fow_v_lvta2_usmc"},
            {"SPAAG", "LIB_US_M3_Halftrack"},
            {"TNK", "LIB_M4A3_75"},
            {"TH", "LIB_C47_Skytrain"},
            {"AH", "LIB_P47"},
            {"CAS", "LIB_P47"},
            {"Technical", "fow_v_universalCarrier"}
        };
    };

    class FOW_CAN {
        gear = "FOW_BAF_44_G";
        uniform = "FOW_CAN_U";
        name = "FOW Canadian Army";
        description = "Royal Winnipeg Rifles";
        languages[] = {{"resistance", 100}};
        side = "resistance";
        camouflage[] = {};
        rolePrefix = "Royal Winnipeg Rifles";
        vehicleClassnames[] = {
            {"CO", "LIB_US_Willys_MB"},
            {"SL", "LIB_US_GMC_Open"},
            {"FT", "LIB_US_Willys_MB"},
            {"ATTCH", "LIB_US_Willys_MB"},
            {"ENG", "LIB_US_GMC_Ammo"},
            {"APC", "fow_v_universalCarrier"},
            {"IFV", "LIB_M4A4_FIREFLY"},
            {"SPAAG", "LIB_US_M3_Halftrack"},
            {"TNK", "LIB_M4A4_FIREFLY"},
            {"TH", "LIB_C47_Skytrain"},
            {"AH", "LIB_P47"},
            {"CAS", "LIB_P47"},
            {"Technical", "fow_v_universalCarrier"}
        };
    };

    class FOW_BAF_ESX {
        gear = "FOW_BAF_44_G";
        uniform = "FOW_BAF_ESX_U";
        name = "FOW British Army Essex Regiment (1944)";
        description = "Essex Regiment (1944)";
        languages[] = {{"resistance", 100}};
        side = "resistance";
        camouflage[] = {};
        rolePrefix = "British Army";
        vehicleClassnames[] = {
            {"CO", "LIB_US_Willys_MB"},
            {"SL", "LIB_US_GMC_Open"},
            {"FT", "LIB_US_Willys_MB"},
            {"ATTCH", "LIB_US_Willys_MB"},
            {"ENG", "LIB_US_GMC_Ammo"},
            {"APC", "fow_v_universalCarrier"},
            {"IFV", "fow_v_cromwell_uk"},
            {"SPAAG", "LIB_US_M3_Halftrack"},
            {"TNK", "LIB_M4A4_FIREFLY"},
            {"TH", "LIB_C47_Skytrain"},
            {"AH", "LIB_P47"},
            {"CAS", "LIB_P47"},
            {"Technical", "fow_v_universalCarrier"}
        };
    };

    class FOW_BAF_COM {
        gear = "FOW_BAF_42_G";
        uniform = "FOW_BAF_COM_U";
        name = "FOW British Army Commandos";
        description = "British Army Commandos";
        languages[] = {{"resistance", 100}};
        side = "resistance";
        camouflage[] = {};
        rolePrefix = "British Army Commando";
        vehicleClassnames[] = {
            {"CO", "LIB_US_Willys_MB"},
            {"SL", "LIB_US_GMC_Open"},
            {"FT", "LIB_US_Willys_MB"},
            {"ATTCH", "LIB_US_Willys_MB"},
            {"ENG", "LIB_US_GMC_Ammo"},
            {"APC", "fow_v_universalCarrier"},
            {"IFV", "fow_v_cromwell_uk"},
            {"SPAAG", "LIB_US_M3_Halftrack"},
            {"TNK", "LIB_M4A4_FIREFLY"},
            {"TH", "LIB_C47_Skytrain"},
            {"AH", "LIB_P47"},
            {"CAS", "LIB_P47"},
            {"Technical", "fow_v_universalCarrier"}
        };
    };

    class IF44_POL {
        gear = "FOW_GER_G";
        uniform = "IF44_POL_U";
        name = "IF44 Polish Home Army";
        description = "Polish Home Army";
        languages[] = {{"resistance", 100}};
        side = "resistance";
        camouflage[] = {};
        rolePrefix = "Polish Home Army";
        vehicleClassnames[] = {
            {"CO", "LIB_Kfz1"},
            {"SL", "LIB_OpelBlitz_Open_Y_Camo"},
            {"FT", "LIB_Kfz1"},
            {"ATTCH", "LIB_Kfz1"},
            {"ENG", "LIB_OpelBlitz_Ammo"},
            {"APC", "LIB_Sdkfz251"},
            {"IFV", "LIB_StuG_III_G"},
            {"SPAAG", "LIB_FlakPanzerIV_Wirbelwind"},
            {"TNK", "LIB_PzKpfwIV_H"},
            {"TH", "LIB_FW190F8"},
            {"AH", "LIB_FW190F8"},
            {"CAS", "LIB_FW190F8"},
            {"Technical", "LIB_Kfz1_MG42"}
        };
    };

    class IF44_GER_SN {
        gear = "FOW_GER_G";
        uniform = "IF44_GER_SN_U";
        name = "IF44 Heer Snow";
        description = "German Army Snow";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {};
        rolePrefix = "Heer";
        vehicleClassnames[] = {
            {"CO", "LIB_Kfz1_w"},
            {"SL", "LIB_OpelBlitz_Open_Y_Camo"},
            {"FT", "LIB_Kfz1_w"},
            {"ATTCH", "LIB_Kfz1_w"},
            {"ENG", "LIB_OpelBlitz_Ammo"},
            {"APC", "LIB_Sdkfz251_w"},
            {"IFV", "LIB_StuG_III_G_w"},
            {"SPAAG", "LIB_FlakPanzerIV_Wirbelwind_w"},
            {"TNK", "LIB_PzKpfwIV_H_w"},
            {"TH", "LIB_JU87_w"},
            {"AH", "LIB_JU87_w"},
            {"CAS", "LIB_JU87_w"},
            {"Technical", "LIB_Kfz1_MG42"}
        };
    };

    class FOW_GER {
        gear = "FOW_GER_G";
        uniform = "FOW_GER_U";
        name = "FOW German Army";
        description = "Heer";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {};
        rolePrefix = "Heer";
        vehicleClassnames[] = {
            {"CO", "LIB_Kfz1"},
            {"SL", "LIB_OpelBlitz_Open_Y_Camo"},
            {"FT", "LIB_Kfz1"},
            {"ATTCH", "LIB_Kfz1"},
            {"ENG", "LIB_OpelBlitz_Ammo"},
            {"APC", "LIB_Sdkfz251"},
            {"IFV", "LIB_StuG_III_G"},
            {"SPAAG", "LIB_FlakPanzerIV_Wirbelwind"},
            {"TNK", "LIB_PzKpfwIV_H"},
            {"TH", "LIB_FW190F8"},
            {"AH", "LIB_FW190F8"},
            {"CAS", "LIB_FW190F8"},
            {"Technical", "LIB_Kfz1_MG42"}
        };
    };

    class IF44_GER {
        gear = "IF44_GER_42_G";
        uniform = "IF44_GER_G";
        name = "IF44 German Army";
        description = "Heer";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {};
        rolePrefix = "Heer";
        vehicleClassnames[] = {
            {"CO", "LIB_Kfz1"},
            {"SL", "LIB_OpelBlitz_Open_Y_Camo"},
            {"FT", "LIB_Kfz1"},
            {"ATTCH", "LIB_Kfz1"},
            {"ENG", "LIB_OpelBlitz_Ammo"},
            {"APC", "LIB_Sdkfz251"},
            {"IFV", "LIB_StuG_III_G"},
            {"SPAAG", "LIB_FlakPanzerIV_Wirbelwind"},
            {"TNK", "LIB_PzKpfwIV_H"},
            {"TH", "LIB_FW190F8"},
            {"AH", "LIB_FW190F8"},
            {"CAS", "LIB_FW190F8"},
            {"Technical", "LIB_Kfz1_MG42"}
        };
    };

    class IF44_GER_NA {
        gear = "IF44_GER_42_G";
        uniform = "IF44_GER_NA_G";
        name = "IF44 German Army North Africa";
        description = "Heer";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {};
        rolePrefix = "Heer";
        vehicleClassnames[] = {
            {"CO", "LIB_Kfz1"},
            {"SL", "LIB_OpelBlitz_Open_Y_Camo"},
            {"FT", "LIB_Kfz1"},
            {"ATTCH", "LIB_Kfz1"},
            {"ENG", "LIB_OpelBlitz_Ammo"},
            {"APC", "LIB_Sdkfz251"},
            {"IFV", "LIB_StuG_III_G"},
            {"SPAAG", "LIB_FlakPanzerIV_Wirbelwind"},
            {"TNK", "LIB_PzKpfwIV_H"},
            {"TH", "LIB_FW190F8"},
            {"AH", "LIB_FW190F8"},
            {"CAS", "LIB_FW190F8"},
            {"Technical", "LIB_Kfz1_MG42"}
        };
    };

    class FOW_GER_PARA {
        gear = "FOW_GER_PARA_G";
        uniform = "FOW_GER_PARA_U";
        name = "FOW Fallschirmjager";
        description = "German Airborne";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {};
        rolePrefix = "Fallschirmjager";
        vehicleClassnames[] = {
            {"CO", "LIB_Kfz1"},
            {"SL", "LIB_OpelBlitz_Open_Y_Camo"},
            {"FT", "LIB_Kfz1"},
            {"ATTCH", "LIB_Kfz1"},
            {"ENG", "LIB_OpelBlitz_Ammo"},
            {"APC", "LIB_Sdkfz251"},
            {"IFV", "LIB_StuG_III_G"},
            {"SPAAG", "LIB_FlakPanzerIV_Wirbelwind"},
            {"TNK", "LIB_PzKpfwIV_H"},
            {"TH", "LIB_FW190F8"},
            {"AH", "LIB_FW190F8"},
            {"CAS", "LIB_FW190F8"},
            {"Technical", "LIB_Kfz1_MG42"}
        };
    };

    class IF44_GER_PARA {
        gear = "IF44_GER_PARA_G";
        uniform = "IF44_GER_PARA_U";
        name = "IF44 Fallschirmjager";
        description = "German Airborne";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {};
        rolePrefix = "Fallschirmjager";
        vehicleClassnames[] = {
            {"CO", "LIB_Kfz1"},
            {"SL", "LIB_OpelBlitz_Open_Y_Camo"},
            {"FT", "LIB_Kfz1"},
            {"ATTCH", "LIB_Kfz1"},
            {"ENG", "LIB_OpelBlitz_Ammo"},
            {"APC", "LIB_Sdkfz251"},
            {"IFV", "LIB_StuG_III_G"},
            {"SPAAG", "LIB_FlakPanzerIV_Wirbelwind"},
            {"TNK", "LIB_PzKpfwIV_H"},
            {"TH", "LIB_FW190F8"},
            {"AH", "LIB_FW190F8"},
            {"CAS", "LIB_FW190F8"},
            {"Technical", "LIB_Kfz1_MG42"}
        };
    };

    class FOW_GER_SS {
        gear = "FOW_GER_G";
        uniform = "FOW_GER_SS_U";
        name = "FOW German SS";
        description = "SS";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {};
        rolePrefix = "SS";
        vehicleClassnames[] = {
            {"CO", "LIB_Kfz1"},
            {"SL", "LIB_OpelBlitz_Open_Y_Camo"},
            {"FT", "LIB_Kfz1"},
            {"ATTCH", "LIB_Kfz1"},
            {"ENG", "LIB_OpelBlitz_Ammo"},
            {"APC", "LIB_Sdkfz251"},
            {"IFV", "LIB_StuG_III_G"},
            {"SPAAG", "LIB_FlakPanzerIV_Wirbelwind"},
            {"TNK", "LIB_PzKpfwIV_H"},
            {"TH", "LIB_FW190F8"},
            {"AH", "LIB_FW190F8"},
            {"CAS", "LIB_FW190F8"},
            {"Technical", "LIB_Kfz1_MG42"}
        };
    };

    class FOW_IJA {
        gear = "FOW_IJA_G";
        uniform = "FOW_IJA_U";
        name = "FOW Imperial Japan";
        description = "Imperial Japan";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {};
        rolePrefix = "IJA";
        vehicleClassnames[] = {
            {"CO", "fow_v_type97_truck_ija"},
            {"SL", "fow_v_type97_truck_open_ija"},
            {"FT", "fow_v_type97_truck_ija"},
            {"ATTCH", "fow_v_type97_truck_ija"},
            {"ENG", "fow_v_type97_truck_utility_ija"},
            {"APC", "fow_ija_type95_HaGo_1_ija"},
            {"IFV", "fow_ija_type95_HaGo_2_ija"},
            {"SPAAG", "fow_ija_type95_HaGo_3_ija"},
            {"TNK", "fow_ija_type95_HaGo_1_ija"},
            {"TH", "LIB_RBAF_Ju87"},
            {"AH", "LIB_RBAF_Ju87"},
            {"CAS", "LIB_RBAF_Ju87"},
            {"Technical", "LIB_Kfz1_MG42"}
        };
    };

    class FOW_IJA_SNLF {
        gear = "FOW_IJA_G";
        uniform = "FOW_IJA_SNLF_U";
        name = "FOW Imperial Japan SNLF";
        description = "Imperial Japan Naval Landing Force";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {};
        rolePrefix = "SNLF";
        vehicleClassnames[] = {
            {"CO", "fow_v_type97_truck_ija"},
            {"SL", "fow_v_type97_truck_open_ija"},
            {"FT", "fow_v_type97_truck_ija"},
            {"ATTCH", "fow_v_type97_truck_ija"},
            {"ENG", "fow_v_type97_truck_utility_ija"},
            {"APC", "fow_ija_type95_HaGo_1_ija"},
            {"IFV", "fow_ija_type95_HaGo_2_ija"},
            {"SPAAG", "fow_ija_type95_HaGo_3_ija"},
            {"TNK", "fow_ija_type95_HaGo_1_ija"},
            {"TH", "LIB_RBAF_Ju87"},
            {"AH", "LIB_RBAF_Ju87"},
            {"CAS", "LIB_RBAF_Ju87"},
            {"Technical", "LIB_Kfz1_MG42"}
        };
    };

    class IF44_USSR {
        gear = "IF44_USSR_G";
        uniform = "IF44_USSR_U";
        name = "IF44 Red Army";
        description = "Red Army";
        languages[] = {{"east", 100}};
        side = "east";
        camouflage[] = {};
        rolePrefix = "Red Army";
        vehicleClassnames[] = {
            {"CO", "LIB_Willys_MB"},
            {"SL", "LIB_Zis5v"},
            {"FT", "LIB_Willys_MB"},
            {"ATTCH", "LIB_Willys_MB"},
            {"ENG", "LIB_Zis6_Parm"},
            {"APC", "LIB_SOV_M3_Halftrack"},
            {"IFV", "LIB_SU85"},
            {"SPAAG", "LIB_Zis5v_61K"},
            {"TNK", "LIB_T34_85"},
            {"TH", "LIB_Li2"},
            {"AH", "LIB_RA_P39_3"},
            {"CAS", "LIB_RA_P39_3"},
            {"Technical", "LIB_Scout_M3_FFV"}
        };
    };

    class IF44_USSR_NKVD {
        gear = "IF44_USSR_G";
        uniform = "IF44_USSR_NKVD_U";
        name = "IF44 NKVD";
        description = "People's Commissariat for Internal Affairs";
        languages[] = {{"east", 100}};
        side = "east";
        camouflage[] = {};
        rolePrefix = "NKVD";
        vehicleClassnames[] = {
            {"CO", "LIB_Willys_MB"},
            {"SL", "LIB_Zis5v"},
            {"FT", "LIB_Willys_MB"},
            {"ATTCH", "LIB_Willys_MB"},
            {"ENG", "LIB_Zis6_Parm"},
            {"APC", "LIB_SOV_M3_Halftrack"},
            {"IFV", "LIB_SU85"},
            {"SPAAG", "LIB_Zis5v_61K"},
            {"TNK", "LIB_T34_85"},
            {"TH", "LIB_Li2"},
            {"AH", "LIB_RA_P39_3"},
            {"CAS", "LIB_RA_P39_3"},
            {"Technical", "LIB_Scout_M3_FFV"}
        };
    };

    class IF44_USSR_SN {
        gear = "IF44_USSR_G";
        uniform = "IF44_USSR_SN_U";
        name = "IF44 Red Army (Snow)";
        description = "Red Army Winter";
        languages[] = {{"east", 100}};
        side = "east";
        camouflage[] = {};
        rolePrefix = "Red Army";
        vehicleClassnames[] = {
            {"CO", "LIB_Willys_MB_w"},
            {"SL", "LIB_Zis5v_w"},
            {"FT", "LIB_Willys_MB_w"},
            {"ATTCH", "LIB_Willys_MB_w"},
            {"ENG", "LIB_Zis6_parm_w"},
            {"APC", "LIB_SOV_M3Halftrack_w"},
            {"IFV", "LIB_SU85_w"},
            {"SPAAG", "LIB_Zis5v_61K"},
            {"TNK", "LIB_T34_85_w"},
            {"TH", "LIB_Li2"},
            {"AH", "LIB_P39_w"},
            {"CAS", "LIB_P39_w"},
            {"Technical", "LIB_Scout_M3_FFV_w"}
        };
    };

    class USM_USA_80_WD {
        gear = "M16A2_US";
        uniform = "USM_USA_80_WD";
        name = "1980 US Army Woodland";
        description = "Woodland uniforms with M16A2";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {"woodland"};
        rolePrefix = "US Army";
        vehicleClassnames[] = {
            {"CO", "CUP_B_HMMWV_Unarmed_USMC"},
            {"SL", "CUP_B_HMMWV_Unarmed_USMC"},
            {"FT", "CUP_B_HMMWV_Unarmed_USMC"},
            {"ATTCH", "CUP_B_HMMWV_Unarmed_USMC"},
            {"ENG", "CUP_B_MTVR_Repair_USMC"},
            {"APC", "CUP_B_M113_USA"},
            {"IFV", "CUP_B_M2Bradley_USA_W"},
            {"SPAAG", "CUP_B_M6LineBacker_USA_W"},
            {"TNK", "CUP_B_M60A3_USMC"},
            {"TH", "CUP_B_UH60M_US"},
            {"AH", "CUP_B_AH64D_DL_USA"},
            {"CAS", "CUP_B_A10_DYN_USA"},
            {"Technical", "CUP_B_HMMWV_M2_USMC"}
        };
    };

    class USM_USMC_80_WD {
        gear = "M16A2_US";
        uniform = "USM_USMC_80_WD";
        name = "1980 US Marines Woodland";
        description = "Woodland uniforms with M16A2";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {"woodland"};
        rolePrefix = "USMC";
        vehicleClassnames[] = {
            {"CO", "CUP_B_HMMWV_Unarmed_USMC"},
            {"SL", "CUP_B_HMMWV_Unarmed_USMC"},
            {"FT", "CUP_B_HMMWV_Unarmed_USMC"},
            {"ATTCH", "CUP_B_HMMWV_Unarmed_USMC"},
            {"ENG", "CUP_B_MTVR_Repair_USMC"},
            {"APC", "CUP_B_AAV_USMC"},
            {"IFV", "CUP_B_LAV25M240_USMC"},
            {"SPAAG", "CUP_B_HMMWV_Avenger_USMC"},
            {"TNK", "CUP_B_M60A3_USMC"},
            {"TH", "CUP_B_UH60S_USN"},
            {"AH", "CUP_B_MH60L_DAP_4x_USN"},
            {"CAS", "CUP_B_AV8B_DYN_USMC"},
            {"Technical", "CUP_B_HMMWV_M2_USMC"}
        };
    };

    class USM_USA_90_WD {
        gear = "M4_US";
        uniform = "USM_USA_90_WD";
        name = "1990 US Army Woodland";
        description = "Woodland uniforms with M4 Carbines";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {"woodland"};
        rolePrefix = "US Army";
        vehicleClassnames[] = {
            {"CO", "CUP_B_HMMWV_Unarmed_USMC"},
            {"SL", "CUP_B_HMMWV_Unarmed_USMC"},
            {"FT", "CUP_B_HMMWV_Unarmed_USMC"},
            {"ATTCH", "CUP_B_HMMWV_Unarmed_USMC"},
            {"ENG", "CUP_B_MTVR_Repair_USMC"},
            {"APC", "CUP_B_M113_USA"},
            {"IFV", "CUP_B_M2Bradley_USA_W"},
            {"SPAAG", "CUP_B_M6LineBacker_USA_W"},
            {"TNK", "CUP_B_M1A1SA_Woodland_US_Army"},
            {"TH", "CUP_B_UH60M_US"},
            {"AH", "CUP_B_AH64D_DL_USA"},
            {"CAS", "CUP_B_A10_DYN_USA"},
            {"Technical", "CUP_B_HMMWV_M2_USMC"}
        };
    };

    class USM_USMC_90_WD {
        gear = "M16A4_USMC";
        uniform = "USM_USMC_90_WD";
        name = "1990 US Marines Woodland";
        description = "Woodland uniforms with M16A4s";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {"woodland"};
        rolePrefix = "USMC";
        vehicleClassnames[] = {
            {"CO", "CUP_B_HMMWV_Unarmed_USMC"},
            {"SL", "CUP_B_HMMWV_Unarmed_USMC"},
            {"FT", "CUP_B_HMMWV_Unarmed_USMC"},
            {"ATTCH", "CUP_B_HMMWV_Unarmed_USMC"},
            {"ENG", "CUP_B_MTVR_Repair_USMC"},
            {"APC", "CUP_B_AAV_USMC"},
            {"IFV", "CUP_B_LAV25M240_USMC"},
            {"SPAAG", "CUP_B_HMMWV_Avenger_USMC"},
            {"TNK", "CUP_B_M1A1FEP_Woodland_USMC"},
            {"TH", "CUP_B_UH60S_USN"},
            {"AH", "CUP_B_MH60L_DAP_4x_USN"},
            {"CAS", "CUP_B_A10_DYN_USA"},
            {"Technical", "CUP_B_HMMWV_M2_USMC"}
        };
    };

    class USM_RAN_90_WD {
        gear = "M4_US";
        uniform = "USM_RAN_90_WD";
        name = "1990 US Rangers Woodland";
        description = "Woodland uniforms with M4 Carbines";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {"woodland"};
        rolePrefix = "US Rangers";
        vehicleClassnames[] = {
            {"CO", "CUP_B_HMMWV_Unarmed_USMC"},
            {"SL", "CUP_B_HMMWV_Unarmed_USMC"},
            {"FT", "CUP_B_HMMWV_Unarmed_USMC"},
            {"ATTCH", "CUP_B_HMMWV_Unarmed_USMC"},
            {"ENG", "CUP_B_MTVR_Repair_USMC"},
            {"APC", "CUP_B_M113_USA"},
            {"IFV", "CUP_B_M2Bradley_USA_W"},
            {"SPAAG", "CUP_B_M6LineBacker_USA_W"},
            {"TNK", "CUP_B_M1A1SA_Woodland_US_Army"},
            {"TH", "CUP_B_UH60M_US"},
            {"AH", "CUP_B_AH64D_DL_USA"},
            {"CAS", "CUP_B_A10_DYN_USA"},
            {"Technical", "CUP_B_HMMWV_M2_USMC"}
        };
    };

    class USM_USA_70_OD {
        gear = "M14_US";
        uniform = "USM_USA_70_OD";
        name = "1970 US Army OD Green";
        description = "OD uniforms with M14 or M16A1";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {};
        rolePrefix = "US Army";
        vehicleClassnames[] = {
            {"CO", "CUP_I_M151_SYND"},
            {"SL", "CUP_I_M151_SYND"},
            {"FT", "CUP_I_M151_SYND"},
            {"ATTCH", "CUP_I_M151_SYND"},
            {"ENG", "CUP_B_MTVR_Repair_USMC"},
            {"APC", "CUP_B_M113_USA"},
            {"IFV", "CUP_B_M2Bradley_USA_W"},
            {"SPAAG", "CUP_B_M6LineBacker_USA_W"},
            {"TNK", "CUP_B_M60A3_USMC"},
            {"TH", "CUP_B_CH47F_USA"},
            {"AH", "CUP_B_UH1D_gunship_GER_KSK_Des"},
            {"CAS", "CUP_B_A10_DYN_USA"},
            {"Technical", "CUP_I_M151_M2_SYND"}
        };
    };

    class USM_USA_80_CC_DE {
        gear = "M16A2_US";
        uniform = "USM_USA_80_CC_DE";
        name = "1980s US Army 'Chocolate Chip' Desert";
        description = "Desert uniforms with M16A2";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {"desert"};
        rolePrefix = "US Army";
        vehicleClassnames[] = {
            {"CO", "CUP_B_HMMWV_Unarmed_USA"},
            {"SL", "CUP_B_HMMWV_Unarmed_USA"},
            {"FT", "CUP_B_HMMWV_Unarmed_USA"},
            {"ATTCH", "CUP_B_HMMWV_Transport_USA"},
            {"ENG", "CUP_B_MTVR_Repair_USA"},
            {"APC", "CUP_B_M113_desert_USA"},
            {"IFV", "CUP_B_M2Bradley_USA_D"},
            {"SPAAG", "CUP_B_M6LineBacker_USA_D"},
            {"TNK", "CUP_B_M1A1_DES_US_Army"},
            {"TH", "CUP_B_UH60M_US"},
            {"AH", "CUP_B_AH64D_DL_USA"},
            {"CAS", "CUP_B_A10_DYN_USA"},
            {"Technical", "CUP_B_HMMWV_M2_USA"}
        };
    };

    class USM_USMC_80_CC_DE {
        gear = "M16A2_US";
        uniform = "USM_USMC_80_CC_DE";
        name = "1980s US Marines 'Chocolate Chip' Desert";
        description = "Desert uniforms with M16A2";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {"desert"};
        rolePrefix = "USMC";
        vehicleClassnames[] = {
            {"CO", "CUP_B_HMMWV_Unarmed_USA"},
            {"SL", "CUP_B_HMMWV_Unarmed_USA"},
            {"FT", "CUP_B_HMMWV_Unarmed_USA"},
            {"ATTCH", "CUP_B_HMMWV_Transport_USA"},
            {"ENG", "CUP_B_MTVR_Repair_USA"},
            {"APC", "CUP_B_M113_desert_USA"},
            {"IFV", "CUP_B_LAV25M240_desert_USMC"},
            {"SPAAG", "CUP_B_HMMWV_Avenger_USA"},
            {"TNK", "CUP_B_M1A1FEP_Desert_USMC"},
            {"TH", "CUP_B_UH60S_USN"},
            {"AH", "CUP_B_MH60L_DAP_4x_USN"},
            {"CAS", "CUP_B_AV8B_DYN_USMC"},
            {"Technical", "CUP_B_HMMWV_M2_USA"}
        };
    };

    class USM_USA_90_DE {
        gear = "M4_US";
        uniform = "USM_USA_90_DE";
        name = "1990s US Army Desert";
        description = "Desert uniforms with M4 Carbines";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {"desert"};
        rolePrefix = "US Army";
        vehicleClassnames[] = {
            {"CO", "CUP_B_HMMWV_Unarmed_USA"},
            {"SL", "CUP_B_HMMWV_Unarmed_USA"},
            {"FT", "CUP_B_HMMWV_Unarmed_USA"},
            {"ATTCH", "CUP_B_HMMWV_Transport_USA"},
            {"ENG", "CUP_B_MTVR_Repair_USA"},
            {"APC", "CUP_B_M113_desert_USA"},
            {"IFV", "CUP_B_M2Bradley_USA_D"},
            {"SPAAG", "CUP_B_M6LineBacker_USA_D"},
            {"TNK", "CUP_B_M1A1SA_Desert_US_Army"},
            {"TH", "CUP_B_UH60M_US"},
            {"AH", "CUP_B_AH64D_DL_USA"},
            {"CAS", "CUP_B_A10_DYN_USA"},
            {"Technical", "CUP_B_HMMWV_M2_USA"}
        };
    };

    class USM_USMC_90_DE {
        gear = "M16A4_USMC";
        uniform = "USM_USMC_90_DE";
        name = "1990s US Marines Desert";
        description = "Desert uniforms with M16A4";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {"desert"};
        rolePrefix = "USMC";
        vehicleClassnames[] = {
            {"CO", "CUP_B_HMMWV_Unarmed_USA"},
            {"SL", "CUP_B_HMMWV_Unarmed_USA"},
            {"FT", "CUP_B_HMMWV_Unarmed_USA"},
            {"ATTCH", "CUP_B_HMMWV_Transport_USA"},
            {"ENG", "CUP_B_MTVR_Repair_USA"},
            {"APC", "CUP_B_M113_desert_USA"},
            {"IFV", "CUP_B_LAV25M240_desert_USMC"},
            {"SPAAG", "CUP_B_HMMWV_Avenger_USA"},
            {"TNK", "CUP_B_M1A1FEP_Desert_USMC"},
            {"TH", "CUP_B_UH60S_USN"},
            {"AH", "CUP_B_MH60L_DAP_4x_USN"},
            {"CAS", "CUP_B_AV8B_DYN_USMC"},
            {"Technical", "CUP_B_HMMWV_M2_USA"}
        };
    };

    class CUP_CZ_DE {
        gear = "BREN805_CZ";
        uniform = "CUP_CZ_DE";
        name = "Czech Army";
        description = "Desert uniforms with Bren 805";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {};
        rolePrefix = "Czech Army";
        vehicleClassnames[] = {
            {"CO", "CUP_B_UAZ_Unarmed_ACR"},
            {"SL", "CUP_B_LR_Transport_CZ_D"},
            {"FT", "CUP_B_UAZ_Unarmed_ACR"},
            {"ATTCH", "CUP_B_LR_Transport_CZ_D"},
            {"ENG", "CUP_B_T818_Reammo_CZ_DES"},
            {"APC", "CUP_B_BMP2_CZ_Des"},
            {"IFV", "CUP_B_BMP2_CZ_Des"},
            {"SPAAG", "CUP_B_BMP2_CZ_Des"},
            {"TNK", "CUP_B_T72_CZ"},
            {"TH", "CUP_B_Mi171Sh_Unarmed_ACR"},
            {"AH", "CUP_B_Mi35_Dynamic_CZ_Des"},
            {"CAS", "CUP_B_L39_CZ"},
            {"Technical", "CUP_B_UAZ_MG_ACR"}
        };
    };

    class CUP_CZ_WD {
        gear = "BREN805_CZ";
        uniform = "CUP_CZ_WD";
        name = "Czech Army";
        description = "Woodland uniforms with Bren 805";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {};
        rolePrefix = "Czech Army";
        vehicleClassnames[] = {
            {"CO", "CUP_B_UAZ_Unarmed_ACR"},
            {"SL", "CUP_B_LR_Transport_CZ_W"},
            {"FT", "CUP_B_UAZ_Unarmed_ACR"},
            {"ATTCH", "CUP_B_LR_Transport_CZ_W"},
            {"ENG", "CUP_B_T818_Reammo_CZ_WDL"},
            {"APC", "CUP_B_BMP2_CZ"},
            {"IFV", "CUP_B_BMP2_CZ"},
            {"SPAAG", "CUP_B_BMP2_CZ"},
            {"TNK", "CUP_B_T72_CZ"},
            {"TH", "CUP_B_Mi171Sh_Unarmed_ACR"},
            {"AH", "CUP_B_Mi35_Dynamic_CZ_Dark"},
            {"CAS", "CUP_B_L39_CZ_GREY"},
            {"Technical", "CUP_B_UAZ_MG_ACR"}
        };
    };

    class MNP_IDF_90 {
        gear = "M16A2_IDF";
        uniform = "IDF_90";
        name = "1990s Israeli Defence Forces";
        description = "IDF with M16A2 and M4";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {"woodland", "desert"};
        rolePrefix = "IDF";
        vehicleClassnames[] = {
            {"CO", "CUP_B_HMMWV_Transport_NATO_T"},
            {"SL", "B_Truck_01_covered_F"},
            {"FT", "CUP_B_HMMWV_Transport_NATO_T"},
            {"ATTCH", "CUP_B_HMMWV_Transport_NATO_T"},
            {"ENG", "B_Truck_01_ammo_F"},
            {"APC", "CUP_B_M113_desert_USA"},
            {"IFV", "B_MBT_01_cannon_F"},
            {"SPAAG", "CUP_B_M163_USA"},
            {"TNK", "B_MBT_01_cannon_F"},
            {"TH", "CUP_B_UH1D_GER_KSK_Des"},
            {"AH", "CUP_B_AH64_DL_USA"},
            {"CAS", "B_Plane_Fighter_01_F"},
            {"Technical", "CUP_B_HMMWV_M2_NATO_T"}
        };
    };

    class MNP_IDF_10 {
        gear = "TAVOR_IDF";
        uniform = "IDF_10";
        name = "2010s Israeli Defence Forces";
        description = "IDF with Tavors";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {"woodland", "desert"};
        rolePrefix = "IDF";
        vehicleClassnames[] = {
            {"CO", "CUP_B_HMMWV_Transport_NATO_T"},
            {"SL", "B_Truck_01_covered_F"},
            {"FT", "CUP_B_HMMWV_Transport_NATO_T"},
            {"ATTCH", "CUP_B_HMMWV_Transport_NATO_T"},
            {"ENG", "B_Truck_01_ammo_F"},
            {"APC", "CUP_B_BMP2_CZ"},
            {"IFV", "CUP_B_BMP2_CZ"},
            {"SPAAG", "CUP_B_M163_USA"},
            {"TNK", "B_MBT_01_TUSK_F"},
            {"TH", "CUP_B_Mi171Sh_Unarmed_ACR"},
            {"AH", "CUP_B_AH64D_DL_USA"},
            {"CAS", "CUP_B_F35B_CAS_USMC"},
            {"Technical", "CUP_B_HMMWV_M2_GPK_NATO_T"}
        };
    };

    class MNP_ROK_SEAL {
        gear = "HK416_ROK";
        uniform = "ROK_SEAL";
        name = "Republic of Korea Navy Seals";
        description = "Digital Tiger uniforms with HK416's";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {"woodland"};
        rolePrefix = "ROKN Seals";
        vehicleClassnames[] = {
            {"CO", "CUP_B_HMMWV_Unarmed_USMC"},
            {"SL", "CUP_B_HMMWV_Unarmed_USMC"},
            {"FT", "CUP_B_HMMWV_Unarmed_USMC"},
            {"ATTCH", "CUP_B_HMMWV_Unarmed_USMC"},
            {"ENG", "B_Truck_01_Repair_F"},
            {"APC", "CUP_B_M113_USA"},
            {"IFV", "CUP_B_M113_USA"},
            {"SPAAG", "CUP_B_M163_USA"},
            {"TNK", "CUP_B_M1A1_Woodland_US_Army"},
            {"TH", "CUP_B_UH60M_US"},
            {"AH", "CUP_B_AH1Z_Dynamic_USMC"},
            {"CAS", "CUP_B_AV8B_DYN_USMC"},
            {"Technical", "CUP_B_HMMWV_M2_USA"}
        };
    };

    class VN_AUS {
        gear = "VN_AUS_G";
        uniform = "VN_AUS_U";
        name = "Royal Australia Regiment";
        description = "Australia";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {""};
        rolePrefix = "RAR";
        vehicleClassnames[] = {
            {"CO", ""},
            {"SL", ""},
            {"FT", ""},
            {"ATTCH", ""},
            {"ENG", ""},
            {"APC", ""},
            {"IFV", ""},
            {"SPAAG", ""},
            {"TNK", ""},
            {"TH", ""},
            {"AH", ""},
            {"CAS", ""},
            {"Technical", ""}
        };
    };

    class VN_SAS {
        gear = "VN_SAS_G";
        uniform = "VN_SAS_U";
        name = "Australia & New Zealand SAS";
        description = "Vietnam SAS";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {""};
        rolePrefix = "SAS";
        vehicleClassnames[] = {
            {"CO", ""},
            {"SL", ""},
            {"FT", ""},
            {"ATTCH", ""},
            {"ENG", ""},
            {"APC", ""},
            {"IFV", ""},
            {"SPAAG", ""},
            {"TNK", ""},
            {"TH", ""},
            {"AH", ""},
            {"CAS", ""},
            {"Technical", ""}
        };
    };

    class VN_US_SEAL {
        gear = "VN_US_SEAL_G";
        uniform = "VN_US_SEAL_U";
        name = "US Navy Seals";
        description = "US Navy Seals Blue Jeans";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {""};
        rolePrefix = "US Navy SEAL";
        vehicleClassnames[] = {
            {"CO", ""},
            {"SL", ""},
            {"FT", ""},
            {"ATTCH", ""},
            {"ENG", ""},
            {"APC", ""},
            {"IFV", ""},
            {"SPAAG", ""},
            {"TNK", ""},
            {"TH", ""},
            {"AH", ""},
            {"CAS", ""},
            {"Technical", ""}
        };
    };

    class VN_US_CIDG {
        gear = "VN_US_CIDG_G";
        uniform = "VN_US_CIDG_U";
        name = "Civilian Irregular Defence Group";
        description = "US Backed Irregulars";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {""};
        rolePrefix = "CIDG";
        vehicleClassnames[] = {
            {"CO", ""},
            {"SL", ""},
            {"FT", ""},
            {"ATTCH", ""},
            {"ENG", ""},
            {"APC", ""},
            {"IFV", ""},
            {"SPAAG", ""},
            {"TNK", ""},
            {"TH", ""},
            {"AH", ""},
            {"CAS", ""},
            {"Technical", ""}
        };
    };

    class VN_US_LRRP {
        gear = "VN_US_LRRP_G";
        uniform = "VN_US_LRRP_U";
        name = "US Army LRRP";
        description = "US Army Long Range Recon Patrol";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {""};
        rolePrefix = "US Army LRRP";
        vehicleClassnames[] = {
            {"CO", ""},
            {"SL", ""},
            {"FT", ""},
            {"ATTCH", ""},
            {"ENG", ""},
            {"APC", ""},
            {"IFV", ""},
            {"SPAAG", ""},
            {"TNK", ""},
            {"TH", ""},
            {"AH", ""},
            {"CAS", ""},
            {"Technical", ""}
        };
    };

    class VN_US_SOG {
        gear = "VN_US_SOG_G";
        uniform = "VN_US_SOG_G_U";
        name = "US Army SOG";
        description = "US Army Special Operations";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {""};
        rolePrefix = "US SOG";
        vehicleClassnames[] = {
            {"CO", ""},
            {"SL", ""},
            {"FT", ""},
            {"ATTCH", ""},
            {"ENG", ""},
            {"APC", ""},
            {"IFV", ""},
            {"SPAAG", ""},
            {"TNK", ""},
            {"TH", ""},
            {"AH", ""},
            {"CAS", ""},
            {"Technical", ""}
        };
    };

    class VN_US_ARMY {
        gear = "VN_US_M16_G";
        uniform = "VN_US_U";
        name = "US Army";
        description = "US Army";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {""};
        rolePrefix = "US Army";
        vehicleClassnames[] = {
            {"CO", ""},
            {"SL", ""},
            {"FT", ""},
            {"ATTCH", ""},
            {"ENG", ""},
            {"APC", ""},
            {"IFV", ""},
            {"SPAAG", ""},
            {"TNK", ""},
            {"TH", ""},
            {"AH", ""},
            {"CAS", ""},
            {"Technical", ""}
        };
    };

    class VN_US_MARINES {
        gear = "VN_US_M14_G";
        uniform = "VN_US_U";
        name = "US Marines";
        description = "US Marines";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {""};
        rolePrefix = "USMC";
        vehicleClassnames[] = {
            {"CO", ""},
            {"SL", ""},
            {"FT", ""},
            {"ATTCH", ""},
            {"ENG", ""},
            {"APC", ""},
            {"IFV", ""},
            {"SPAAG", ""},
            {"TNK", ""},
            {"TH", ""},
            {"AH", ""},
            {"CAS", ""},
            {"Technical", ""}
        };
    };

    class VN_NZ {
        gear = "VN_NZ_G";
        uniform = "VN_NZ_U";
        name = "Royal New Zealand Infantry Regiment";
        description = "New Zealand";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {""};
        rolePrefix = "RNZIR";
        vehicleClassnames[] = {
            {"CO", ""},
            {"SL", ""},
            {"FT", ""},
            {"ATTCH", ""},
            {"ENG", ""},
            {"APC", ""},
            {"IFV", ""},
            {"SPAAG", ""},
            {"TNK", ""},
            {"TH", ""},
            {"AH", ""},
            {"CAS", ""},
            {"Technical", ""}
        };
    };

    class VN_ROK {
        gear = "VN_ROK_G";
        uniform = "VN_ROK_U";
        name = "South Korea";
        description = "South Korea";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {""};
        rolePrefix = "ROK";
        vehicleClassnames[] = {
            {"CO", ""},
            {"SL", ""},
            {"FT", ""},
            {"ATTCH", ""},
            {"ENG", ""},
            {"APC", ""},
            {"IFV", ""},
            {"SPAAG", ""},
            {"TNK", ""},
            {"TH", ""},
            {"AH", ""},
            {"CAS", ""},
            {"Technical", ""}
        };
    };

    class VN_RLA {
        gear = "VN_RLA_G";
        uniform = "VN_RLA_U";
        name = "Royal Laos Army";
        description = "Royal Laos Army";
        languages[] = {{"resistance", 100}};
        side = "resistance";
        camouflage[] = {""};
        rolePrefix = "RLA";
        vehicleClassnames[] = {
            {"CO", ""},
            {"SL", ""},
            {"FT", ""},
            {"ATTCH", ""},
            {"ENG", ""},
            {"APC", ""},
            {"IFV", ""},
            {"SPAAG", ""},
            {"TNK", ""},
            {"TH", ""},
            {"AH", ""},
            {"CAS", ""},
            {"Technical", ""}
        };
    };

    class VN_SV_ARVN {
        gear = "VN_SV_ARVN_G";
        uniform = "VN_SV_ARVN_U";
        name = "South Vietnam ARVN";
        description = "South Vietnam Army";
        languages[] = {{"resistance", 100}};
        side = "resistance";
        camouflage[] = {""};
        rolePrefix = "ARVN";
        vehicleClassnames[] = {
            {"CO", ""},
            {"SL", ""},
            {"FT", ""},
            {"ATTCH", ""},
            {"ENG", ""},
            {"APC", ""},
            {"IFV", ""},
            {"SPAAG", ""},
            {"TNK", ""},
            {"TH", ""},
            {"AH", ""},
            {"CAS", ""},
            {"Technical", ""}
        };
    };

    class VN_SV_RANGER {
        gear = "VN_SV_RANGER_G";
        uniform = "VN_SV_RANGER_U";
        name = "South Vietnam Rangers";
        description = "South Vietnam Army Rangers";
        languages[] = {{"resistance", 100}};
        side = "resistance";
        camouflage[] = {""};
        rolePrefix = "ARVN Rangers";
        vehicleClassnames[] = {
            {"CO", ""},
            {"SL", ""},
            {"FT", ""},
            {"ATTCH", ""},
            {"ENG", ""},
            {"APC", ""},
            {"IFV", ""},
            {"SPAAG", ""},
            {"TNK", ""},
            {"TH", ""},
            {"AH", ""},
            {"CAS", ""},
            {"Technical", ""}
        };
    };

    class VN_SV_TQLC {
        gear = "VN_SV_TQLC_G";
        uniform = "VN_SV_TQLC_U";
        name = "South Vietnam TQLC";
        description = "South Vietnam Marines";
        languages[] = {{"resistance", 100}};
        side = "resistance";
        camouflage[] = {""};
        rolePrefix = "TQLC";
        vehicleClassnames[] = {
            {"CO", ""},
            {"SL", ""},
            {"FT", ""},
            {"ATTCH", ""},
            {"ENG", ""},
            {"APC", ""},
            {"IFV", ""},
            {"SPAAG", ""},
            {"TNK", ""},
            {"TH", ""},
            {"AH", ""},
            {"CAS", ""},
            {"Technical", ""}
        };
    };

    class VN_PLA {
        gear = "VN_PLA_G";
        uniform = "VN_PLA_U";
        name = "People Laos Army";
        description = "Peoples Laos Army";
        languages[] = {{"east", 100}};
        side = "east";
        camouflage[] = {""};
        rolePrefix = "ARVN";
        vehicleClassnames[] = {
            {"CO", ""},
            {"SL", ""},
            {"FT", ""},
            {"ATTCH", ""},
            {"ENG", ""},
            {"APC", ""},
            {"IFV", ""},
            {"SPAAG", ""},
            {"TNK", ""},
            {"TH", ""},
            {"AH", ""},
            {"CAS", ""},
            {"Technical", ""}
        };
    };

    class VN_NV_NAV_E {
        gear = "VN_NV_NVA_E_G";
        uniform = "VN_NV_NVA_E_U";
        name = "North Vietnam NVA Early";
        description = "North Vietnam NVA Early";
        languages[] = {{"east", 100}};
        side = "east";
        camouflage[] = {""};
        rolePrefix = "NVA";
        vehicleClassnames[] = {
            {"CO", ""},
            {"SL", ""},
            {"FT", ""},
            {"ATTCH", ""},
            {"ENG", ""},
            {"APC", ""},
            {"IFV", ""},
            {"SPAAG", ""},
            {"TNK", ""},
            {"TH", ""},
            {"AH", ""},
            {"CAS", ""},
            {"Technical", ""}
        };
    };

    class VN_NV_NAV_L {
        gear = "VN_NV_NVA_L_G";
        uniform = "VN_NV_NVA_L_U";
        name = "North Vietnam NVA Late";
        description = "North Vietnam NVA Late";
        languages[] = {{"east", 100}};
        side = "east";
        camouflage[] = {""};
        rolePrefix = "NVA";
        vehicleClassnames[] = {
            {"CO", ""},
            {"SL", ""},
            {"FT", ""},
            {"ATTCH", ""},
            {"ENG", ""},
            {"APC", ""},
            {"IFV", ""},
            {"SPAAG", ""},
            {"TNK", ""},
            {"TH", ""},
            {"AH", ""},
            {"CAS", ""},
            {"Technical", ""}
        };
    };

    class VN_NV_VPNM {
        gear = "VN_NV_NVA_E_G";
        uniform = "VN_NV_VPNM_U";
        name = "North Vietnam Marines";
        description = "North Vietnam Marines";
        languages[] = {{"east", 100}};
        side = "east";
        camouflage[] = {""};
        rolePrefix = "VPNM";
        vehicleClassnames[] = {
            {"CO", ""},
            {"SL", ""},
            {"FT", ""},
            {"ATTCH", ""},
            {"ENG", ""},
            {"APC", ""},
            {"IFV", ""},
            {"SPAAG", ""},
            {"TNK", ""},
            {"TH", ""},
            {"AH", ""},
            {"CAS", ""},
            {"Technical", ""}
        };
    };

    class VN_NV_VC {
        gear = "VN_NV_VC_G";
        uniform = "VN_NV_VC_U";
        name = "North Vietnam Viet Cong";
        description = "North Vietnam Viet Cong";
        languages[] = {{"east", 100}};
        side = "east";
        camouflage[] = {""};
        rolePrefix = "VC";
        vehicleClassnames[] = {
            {"CO", ""},
            {"SL", ""},
            {"FT", ""},
            {"ATTCH", ""},
            {"ENG", ""},
            {"APC", ""},
            {"IFV", ""},
            {"SPAAG", ""},
            {"TNK", ""},
            {"TH", ""},
            {"AH", ""},
            {"CAS", ""},
            {"Technical", ""}
        };
    };

};
