class UnitTemplates {
    class Base {
        side = "civilian";
        camouflage[] = {"woodland", "desert", "snow"};
        infantry[] = {"Hen_random_F", "Cock_random_F", "Goat_random_F", "Sheep_random_F", "Salema_F", "Mackerel_F", "Fin_random_F", "Alsatian_Random_F", "C_Orestes", "C_Nikos"};
        crewmen[] = {"Hen_random_F", "Cock_random_F", "Goat_random_F", "Sheep_random_F", "Salema_F", "Mackerel_F", "Fin_random_F", "Alsatian_Random_F", "C_Orestes", "C_Nikos"};
        pilots[] = {};
        technicals[] = {"C_Van_01_box_F"};
        armour[] = {"C_Van_01_box_F"};
        th[] = {"C_Van_01_box_F"};
        ah[] = {"C_Van_01_box_F"};
    };

    class NATO_CBRN {
        side = "west";
        camouflage[] = {};
        infantry[] = {"skn_b_nbc_sl", "skn_b_nbc_sl", "skn_b_nbc_rf", "skn_b_nbc_rf", "skn_b_nbc_AT4", "skn_b_nbc_AR", "skn_b_nbc_AR", "skn_b_nbc_a"};
        crewmen[] = {"skn_b_nbc_crew"};
        pilots[] = {"skn_b_nbc_crew"};
        technicals[] = {"B_MRAP_01_hmg_F"};
        armour[] = {"B_APC_Wheeled_01_cannon_F", "B_MBT_01_TUSK_F", "B_APC_Tracked_01_rcws_F"};
        th[] = {"B_Heli_Transport_01_F"};
        ah[] = {"B_Heli_Attack_01_F"};
    };

    class CUP_HIL_CCE {
        side = "west";
        camouflage[] = {"woodland", "desert"};
        infantry[] = {"CUP_B_HIL_Officer", "CUP_B_HIL_Soldier", "CUP_B_HIL_Soldier", "CUP_B_HIL_Soldier", "CUP_B_HIL_MMG", "CUP_B_HIL_MMG", "CUP_B_HIL_Soldier_AT4", "CUP_B_HIL_Medic"};
        crewmen[] = {"CUP_B_HIL_Crew"};
        pilots[] = {"CUP_B_HIL_Pilot"};
        technicals[] = {"CUP_B_M151_M2_HIL"};
        armour[] = {"CUP_B_Boxer_GMG_HIL", "CUP_B_Boxer_HMG_HIL", "CUP_B_Leopard2A6_HIL"};
        th[] = {"CUP_B_CH47F_HIL"};
        ah[] = {"CUP_B_AW159_HIL"};
    };

    class CUP_HIL_RES {
        side = "west";
        camouflage[] = {"woodland"};
        infantry[] = {"CUP_B_HIL_SL_Res", "CUP_B_HIL_SL_Res", "CUP_B_HIL_Soldier_Res", "CUP_B_HIL_Soldier_Res", "CUP_B_HIL_MMG_Res", "CUP_B_HIL_MMG_Res", "CUP_B_HIL_Soldier_LAT_Res", "CUP_B_HIL_Medic_Res", "CUP_B_HIL_Officer_Res"};
        crewmen[] = {"CUP_B_HIL_Crew"};
        pilots[] = {"CUP_B_HIL_Pilot"};
        technicals[] = {"CUP_B_M151_M2_HIL"};
        armour[] = {"CUP_B_Boxer_GMG_HIL", "CUP_B_Boxer_HMG_HIL", "CUP_B_Leopard2A6_HIL"};
        th[] = {"CUP_B_CH47F_HIL"};
        ah[] = {"CUP_B_AW159_HIL"};
    };

    class MNP_USMC_SN {
        side = "west";
        camouflage[] = {"snow"};
        infantry[] = {"MNP_USMCA_Soldier_O", "MNP_USMCA_Soldier_O", "MNP_USMCA_Soldier_F", "MNP_USMCA_Soldier_F", "MNP_USMCA_Soldier_AT", "MNP_USMCA_Soldier_AR", "MNP_USMCA_Soldier_MG", "MNP_USMCA_Soldier_MD"};
        crewmen[] = {"MNP_USMCA_Soldier_F"};
        pilots[] = {"MNP_USMCA_Soldier_F"};
        technicals[] = {"CUP_B_nM1025_M2_NATO", "CUP_B_nM1025_Mk19_NATO", "CUP_B_nM1025_SOV_M2_NATO", "CUP_B_nM1025_SOV_Mk19_NATO"};
        armour[] = {"CUP_B_LAV25_USMC", "CUP_B_LAV25_USMC", "CUP_B_AAV_USMC", "CUP_B_M1A1FEP_Woodland_USMC", "CUP_B_M1A1EP_TUSK_Woodland_USMC"};
        th[] = {"CUP_B_UH60S_USN"};
        ah[] = {"CUP_B_AH1Z_Dynamic_USMC"};
    };

    class MNP_IDF {
        side = "west";
        camouflage[] = {"desert", "woodland"};
        infantry[] = {"MNP_ISR_O", "MNP_ISR_O", "MNP_ISR_A", "MNP_ISR_A", "MNP_ISR_AT", "MNP_ISR_AR", "MNP_ISR_MG", "MNP_ISR_MD"};
        crewmen[] = {"MNP_ISR_A"};
        pilots[] = {"MNP_ISR_A"};
        technicals[] = {"CUP_B_nM1025_M2_NATO", "CUP_B_nM1025_Mk19_NATO", "CUP_B_nM1025_SOV_M2_NATO", "CUP_B_nM1025_SOV_Mk19_NATO"};
        armour[] = {"B_MBT_01_cannon_F", "B_MBT_01_TUSK_F", "B_APC_Tracked_01_rcws_F", "B_APC_Tracked_01_rcws_F", "B_APC_Tracked_01_rcws_F"};
        th[] = {"CUP_B_CH53E_USMC"};
        ah[] = {"CUP_B_AH64D_DL_USA"};
    };

    class CUP_USA_UCP {
        side = "west";
        camouflage[] = {"woodland", "desert"};
        infantry[] = {"CUP_B_US_Soldier_GL_UCP", "CUP_B_US_Soldier_GL_UCP", "CUP_B_US_Soldier_UCP", "CUP_B_US_Soldier_UCP", "CUP_B_US_Soldier_LAT_UCP", "CUP_B_US_Soldier_AR_UCP", "CUP_B_US_Soldier_MG_UCP", "CUP_B_US_Medic_UCP"};
        crewmen[] = {"CUP_B_US_Crew_UCP"};
        pilots[] = {"CUP_B_US_Pilot"};
        technicals[] = {"CUP_B_nM1025_M2_USA_DES", "CUP_B_nM1025_M2_USA_DES", "CUP_B_nM1025_Mk19_USA_DES", "CUP_B_RG31E_M2_USMC", "CUP_B_RG31_M2_USMC", "CUP_B_RG31_Mk19_USMC"};
        armour[] = {"CUP_B_M1126_ICV_M2_Desert", "CUP_B_M1126_ICV_M2_Desert", "CUP_B_M1126_ICV_MK19_Desert", "CUP_B_M1128_MGS_Desert", "CUP_B_M2Bradley_USA_D", "CUP_B_M2Bradley_USA_D", "CUP_B_M1A2SEP_Desert_US_Army", "CUP_B_M1A2SEP_Tusk_Desert_US_Army", "CUP_B_M1A2SEP_TUSK_Desert_US_Army"};
        th[] = {"CUP_B_UH60M_US"};
        ah[] = {"CUP_B_AH64D_DL_USA"};
    };

    class CUP_USA_OCP {
        side = "west";
        camouflage[] = {"woodland", "desert"};
        infantry[] = {"CUP_B_US_Soldier_GL_OCP", "CUP_B_US_Soldier_GL_OCP", "CUP_B_US_Soldier_OCP", "CUP_B_US_Soldier_OCP", "CUP_B_US_Soldier_LAT_OCP", "CUP_B_US_Soldier_AR_OCP", "CUP_B_US_Soldier_MG_OCP", "CUP_B_US_Medic_OCP"};
        crewmen[] = {"CUP_B_US_Crew_OCP"};
        pilots[] = {"CUP_B_US_Pilot"};
        technicals[] = {"CUP_B_nM1025_M2_USA_DES", "CUP_B_nM1025_M2_USA_DES", "CUP_B_nM1025_SOV_M2_USA_DES", "CUP_B_RG31E_M2_USMC", "CUP_B_RG31_M2_USMC", "CUP_B_RG31_Mk19_USMC"};
        armour[] = {"CUP_B_M1126_ICV_M2_Desert_Slat", "CUP_B_M1126_ICV_M2_Desert_Slat", "CUP_B_M1126_ICV_MK19_Desert_Slat", "CUP_B_M1128_MGS_Desert_Slat", "CUP_B_M2A3Bradley_USA_D", "CUP_B_M2A3Bradley_USA_D", "CUP_B_M1A2SEP_Desert_US_Army", "CUP_B_M1A2SEP_Tusk_Desert_US_Army", "CUP_B_M1A2SEP_TUSK_Desert_US_Army"};
        th[] = {"CUP_B_UH60M_US"};
        ah[] = {"CUP_B_AH64D_DL_USA"};
    };

    class CUP_GER_WD {
        side = "west";
        camouflage[] = {"woodland"};
        infantry[] = {"CUP_B_GER_BW_Fleck_Soldier_GL", "CUP_B_GER_BW_Fleck_Soldier_GL", "CUP_B_GER_BW_Fleck_soldier_TL", "CUP_B_GER_BW_Fleck_Soldier", "CUP_B_GER_BW_Fleck_Soldier_AT", "CUP_B_GER_BW_Fleck_Soldier_MG", "CUP_B_GER_BW_Fleck_Soldier_MG3", "CUP_B_GER_BW_Fleck_Medic"};
        crewmen[] = {"CUP_B_GER_Fleck_Crew"};
        pilots[] = {"CUP_B_GER_Fleck_HPilot"};
        technicals[] = {"CUP_B_Dingo_GER_Wdl", "CUP_B_Dingo_GER_Wdl", "CUP_B_Dingo_GL_GER_Wdl"};
        armour[] = {"CUP_B_Leopard2A6_GER", "CUP_B_Boxer_HMG_GER_WDL", "CUP_B_Boxer_GMG_GER_WDL"};
        th[] = {"CUP_B_UH1D_slick_GER_KSK"};
        ah[] = {"CUP_B_UH1D_gunship_GER_KSK"};
    };

    class CUP_GER_DE {
        side = "west";
        camouflage[] = {"desert", "snow"};
        infantry[] = {"CUP_B_GER_BW_Soldier_GL", "CUP_B_GER_BW_Soldier_GL", "CUP_B_GER_Soldier_TL", "CUP_B_GER_Soldier", "CUP_B_GER_BW_Soldier_AT", "CUP_B_GER_BW_Soldier_MG", "CUP_B_GER_BW_Soldier_MG3", "CUP_B_GER_BW_Medic"};
        crewmen[] = {"CUP_B_GER_Crew"};
        pilots[] = {"CUP_B_GER_HPilot"};
        technicals[] = {"CUP_B_Dingo_GL_GER_Des", "CUP_B_Dingo_GER_Des", "CUP_B_Dingo_GER_Des"};
        armour[] = {"CUP_B_Leopard2A6DST_GER", "CUP_B_Boxer_GMG_GER_DES", "CUP_B_Boxer_HMG_GER_DES"};
        th[] = {"CUP_B_UH1D_slick_GER_KSK"};
        ah[] = {"CUP_B_UH1D_gunship_GER_KSK"};
    };

    class MNP_CA_WD {
        side = "west";
        camouflage[] = {"woodland"};
        infantry[] = {"MNP_Canada_Soldier_S", "MNP_Canada_Soldier_S", "MNP_Canada_Soldier_F", "MNP_Canada_Soldier_S", "MNP_Canada_Soldier_AT", "MNP_Canada_Soldier_AR", "MNP_Canada_Soldier_MG", "MNP_Canada_Soldier_M"};
        crewmen[] = {"MNP_Canada_Soldier_F"};
        pilots[] = {"MNP_Canada_Soldier_F"};
        technicals[] = {"CUP_B_RG31_M2_OD_USMC", "CUP_B_RG31_Mk19_OD_USMC"};
        armour[] = {"ARK_M113_CAN", "ARK_LEO2_CAN"};
        th[] = {"CUP_B_UH1D_slick_GER_KSK_Des"};
        ah[] = {"CUP_B_UH1D_gunship_GER_KSK_Des"};
    };

    class MNP_CA_DE {
        side = "west";
        camouflage[] = {"desert"};
        infantry[] = {"MNP_Canada_Soldier_DS", "MNP_Canada_Soldier_DS", "MNP_Canada_Soldier_DF", "MNP_Canada_Soldier_DF", "MNP_Canada_Soldier_DAT", "MNP_Canada_Soldier_DAR", "MNP_Canada_Soldier_DMG", "MNP_Canada_Soldier_DM"};
        crewmen[] = {"MNP_Canada_Soldier_DF"};
        pilots[] = {"MNP_Canada_Soldier_DF"};
        technicals[] = {"CUP_B_RG31_M2_OD_USMC", "CUP_B_RG31_Mk19_OD_USMC"};
        armour[] = {"ARK_M113_CAN", "ARK_LEO2_CAN"};
        th[] = {"CUP_B_UH1D_slick_GER_KSK_Des"};
        ah[] = {"CUP_B_UH1D_gunship_GER_KSK_Des"};
    };

    class MNP_AUS {
        side = "west";
        camouflage[] = {"woodland", "desert"};
        infantry[] = {"MNP_AUS_Soldier_S", "MNP_AUS_Soldier_S", "MNP_AUS_Soldier_F", "MNP_AUS_Soldier_F", "MNP_AUS_Soldier_AT", "MNP_AUS_Soldier_AR", "MNP_AUS_Soldier_MG", "MNP_AUS_Soldier_MD"};
        crewmen[] = {"MNP_AUS_Soldier_F"};
        pilots[] = {"MNP_AUS_Soldier_F"};
        technicals[] = {"ARK_LR_M2_AUS"};
        armour[] = {"ARK_M113_AUS", "ARK_LAV25M240_AUS", "ARK_M1A1_AUS"};
        th[] = {"ARK_MH60_AUS"};
        ah[] = {"CUP_B_UH1D_gunship_GER_KSK_Des"};
    };

    class MNP_AUS_AMCU {
        side = "west";
        camouflage[] = {"woodland", "desert"};
        infantry[] = {"MNP_AMCU_Soldier_O", "MNP_AMCU_Soldier_O", "MNP_AMCU_Soldier_F", "MNP_AMCU_Soldier_F", "MNP_AMCU_Soldier_AT", "MNP_AMCU_Soldier_AR", "MNP_AMCU_Soldier_MG", "MNP_AMCU_Soldier_MD"};
        crewmen[] = {"MNP_AMCU_Soldier_F"};
        pilots[] = {"MNP_AMCU_Soldier_F"};
        technicals[] = {"ARK_LR_M2_AUS"};
        armour[] = {"ARK_M113_AUS", "ARK_LAV25M240_AUS", "ARK_M1A1_AUS", "ARK_M1A1_AUS_TUSK"};
        th[] = {"ARK_MH60_AUS"};
        ah[] = {"CUP_B_UH1D_gunship_GER_KSK_Des"};
    };

    class MNP_ROK {
        side = "west";
        camouflage[] = {"woodland", "desert"};
        infantry[] = {"MNP_ROK_Soldier_O", "MNP_ROK_Soldier_O", "MNP_ROK_Soldier_O", "MNP_ROK_Soldier_F", "MNP_ROK_Soldier_AT", "MNP_ROK_Soldier_AR", "MNP_ROK_Soldier_MG", "MNP_ROK_Soldier_M"};
        crewmen[] = {"MNP_ROK_Soldier_O"};
        pilots[] = {"MNP_ROK_Soldier_O"};
        technicals[] = {"CUP_B_nM1025_M2_USA_DES", "CUP_B_nM1025_M2_USA_DES", "CUP_B_nM1025_M2_USA_DES", "CUP_B_nM1025_Mk19_USA_DES"};
        armour[] = {"CUP_B_M113A1_olive_USA", "CUP_B_M113A3_olive_USA"};
        th[] = {"CUP_B_UH60S_USN"};
        ah[] = {"CUP_B_AH1Z_Dynamic_USMC"};
    };

    class MNP_ROK_SEAL {
        side = "west";
        camouflage[] = {"woodland", "desert"};
        infantry[] = {"MNP_ROKMC_O", "MNP_ROKMC_O", "MNP_ROKMC_A", "MNP_ROKMC_A", "MNP_ROKMC_AT", "MNP_ROKMC_AR", "MNP_ROKMC_MG", "MNP_ROKMC_MD"};
        crewmen[] = {"MNP_ROKMC_A"};
        pilots[] = {"MNP_ROKMC_A"};
        technicals[] = {"CUP_B_nM1025_M2_USA_DES", "CUP_B_nM1025_M2_USA_DES", "CUP_B_nM1025_M2_USA_DES", "CUP_B_nM1025_Mk19_USA_DES"};
        armour[] = {"CUP_B_M113A1_olive_USA", "CUP_B_M113A3_olive_USA"};
        th[] = {"CUP_B_UH60S_USN"};
        ah[] = {"CUP_B_AH64D_DL_USA"};
    };

    class MNP_UKR {
        side = "west";
        camouflage[] = {"woodland"};
        infantry[] = {"MNP_UKR_O", "MNP_UKR_O", "MNP_UKR_A", "MNP_UKR_A", "MNP_UKR_AT", "MNP_UKR_AR", "MNP_UKR_MG", "MNP_UKR_MD"};
        crewmen[] = {"MNP_UKR_A"};
        pilots[] = {"MNP_UKR_A"};
        technicals[] = {"CUP_B_UAZ_MG_CDF", "CUP_B_UAZ_MG_CDF", "CUP_B_UAZ_AGS30_CDF", "CUP_B_UAZ_SPG9_CDF"};
        armour[] = {"CUP_B_BRDM2_CDF", "CUP_B_BMP2_CDF", "CUP_B_T72_CDF", "CUP_B_BTR60_CDF", "CUP_B_MTLB_pk_CDF"};
        th[] = {"CUP_B_Mi17_CDF"};
        ah[] = {"CUP_B_Mi24_D_CDF"};
    };

    class MNP_IRG_DE {
        side = "west";
        camouflage[] = {"desert"};
        infantry[] = {"MNP_US6co_Soldier_O", "MNP_US6co_Soldier_O", "MNP_US6co_Soldier_F", "MNP_US6co_Soldier_F", "MNP_US6co_Soldier_AT", "MNP_US6co_Soldier_AR", "MNP_US6co_Soldier_MG", "MNP_US6co_Soldier_MD"};
        crewmen[] = {"MNP_US6co_Soldier_F"};
        pilots[] = {"MNP_US6co_Soldier_F"};
        technicals[] = {"CUP_B_nM1025_M2_USA_DES", "CUP_B_nM1025_M2_USA_DES", "CUP_B_nM1025_Mk19_USA_DES", "CUP_B_nM1025_SOV_Mk19_USA_DES", "CUP_B_nM1025_SOV_M2_USA_DES"};
        armour[] = {"CUP_I_M60A3_RACS", "CUP_B_LAV25_desert_USMC", "CUP_I_AAV_RACS", "CUP_B_M113A1_desert_USA"};
        th[] = {"CUP_I_UH60L_RACS"};
        ah[] = {"CUP_I_AH6J_RACS"};
    };

    class MNP_IRG_WD {
        side = "west";
        camouflage[] = {};
        infantry[] = {"", "", "", "", "", "", "", ""};
        crewmen[] = {"", ""};
        pilots[] = {""};
        technicals[] = {"CUP_B_nM1025_M2_NATO", "CUP_B_nM1025_M2_NATO", "CUP_B_nM1025_Mk19_NATO", "CUP_B_nM1025_SOV_M2_NATO", "CUP_B_nM1025_SOV_M2_NATO", "CUP_B_nM1025_SOV_Mk19_NATO"};
        armour[] = {"CUP_B_M60A3_USMC", "CUP_B_LAV25M240_green", "CUP_B_AAV_USMC", "CUP_B_M113A1_olive_USA"};
        th[] = {"CUP_I_UH60L_RACS"};
        ah[] = {"CUP_I_AH6J_RACS"};
    };

    class CUP_USMC_WD {
        side = "west";
        camouflage[] = {"woodland"};
        infantry[] = {"CUP_B_USMC_Soldier_TL", "CUP_B_USMC_Soldier_TL", "CUP_B_USMC_Soldier", "CUP_B_USMC_Soldier", "CUP_B_USMC_Soldier_LAT", "CUP_B_USMC_Soldier_AR", "CUP_B_USMC_Soldier_MG", "CUP_B_USMC_Medic"};
        crewmen[] = {"CUP_B_USMC_Crew"};
        pilots[] = {"CUP_B_USMC_Pilot"};
        technicals[] = {"CUP_B_nM1025_M2_USA_WDL", "CUP_B_nM1025_M2_USA_WDL", "CUP_B_nM1025_M240_USA_WDL", "CUP_B_nM1025_Mk19_USA_WDL"};
        armour[] = {"CUP_B_LAV25M240_USMC", "CUP_B_AAV_USMC", "CUP_B_M1A1FEP_Woodland_USMC", "CUP_B_M1A1EP_TUSK_Woodland_USMC"};
        th[] = {"CUP_B_UH60S_USN"};
        ah[] = {"CUP_B_AH1Z_Dynamic_USMC"};
    };

    class CUP_KSK_WD {
        side = "west";
        camouflage[] = {"woodland"};
        infantry[] = {"CUP_B_GER_Fleck_Soldier_GL", "CUP_B_GER_Fleck_Soldier_GL", "CUP_B_GER_Fleck_Soldier_GL", "CUP_B_GER_Fleck_Soldier", "CUP_B_GER_Fleck_Soldier_AT", "CUP_B_GER_Fleck_Soldier_MG", "CUP_B_GER_Fleck_Soldier_MG3", "CUP_B_GER_Fleck_Medic"};
        crewmen[] = {"CUP_B_GER_Fleck_Crew"};
        pilots[] = {"CUP_B_GER_Fleck_HPilot"};
        technicals[] = {"CUP_B_Dingo_GER_Wdl", "CUP_B_Dingo_GER_Wdl", "CUP_B_Dingo_GL_GER_Wdl"};
        armour[] = {"CUP_B_Leopard2A6_GER", "CUP_B_Boxer_HMG_GER_WDL", "CUP_B_Boxer_GMG_GER_WDL"};
        th[] = {"CUP_B_UH1D_slick_GER_KSK"};
        ah[] = {"CUP_B_UH1D_gunship_GER_KSK"};
    };

    class CUP_KSK_DE {
        side = "west";
        camouflage[] = {"desert"};
        infantry[] = {"CUP_B_GER_Soldier_GL", "CUP_B_GER_Soldier_GL", "CUP_B_GER_Soldier", "CUP_B_GER_Soldier", "CUP_B_GER_Soldier_AT", "CUP_B_GER_Soldier_MG", "CUP_B_GER_Soldier_MG3", "CUP_B_GER_Medic"};
        crewmen[] = {"CUP_B_GER_Crew"};
        pilots[] = {"CUP_B_GER_HPilot"};
        technicals[] = {"CUP_B_Dingo_GL_GER_Des", "CUP_B_Dingo_GER_Des", "CUP_B_Dingo_GER_Des"};
        armour[] = {"CUP_B_Leopard2A6DST_GER", "CUP_B_Boxer_GMG_GER_DES", "CUP_B_Boxer_HMG_GER_DES"};
        th[] = {"CUP_B_UH1D_slick_GER_KSK"};
        ah[] = {"CUP_B_UH1D_gunship_GER_KSK"};
    };

    class CUP_BAF_WD {
        side = "west";
        camouflage[] = {"woodland"};
        infantry[] = {"CUP_B_BAF_Soldier_SquadLeader_DPM", "CUP_B_BAF_Soldier_SquadLeader_DPM", "CUP_B_BAF_Soldier_Rifleman_DPM", "CUP_B_BAF_Soldier_Rifleman_DPM", "CUP_B_BAF_Soldier_RiflemanLAT_DPM", "CUP_B_BAF_Soldier_AutoRifleman_DPM", "CUP_B_BAF_Soldier_HeavyGunner_DPM", "CUP_B_BAF_Soldier_Medic_DPM", "CUP_B_BAF_Soldier_Officer_DPM"};
        crewmen[] = {"CUP_B_BAF_Soldier_Crew_DPM"};
        pilots[] = {"CUP_B_BAF_Soldier_Pilot_DPM"};
        technicals[] = {"CUP_B_LR_Special_M2_GB_W", "CUP_B_LR_Special_GMG_GB_W", "CUP_B_Jackal2_GMG_GB_W", "CUP_B_Jackal2_L2A1_GB_W"};
        armour[] = {"CUP_B_FV432_Bulldog_GB_W_RWS", "CUP_B_FV432_Bulldog_GB_W", "CUP_B_MCV80_GB_W_SLAT", "CUP_B_Challenger2_2CW_BAF"};
        th[] = {"CUP_B_CH47F_GB"};
        ah[] = {"CUP_B_AH1_DL_BAF"};
    };

    class CUP_BAF_DE {
        side = "west";
        camouflage[] = {"desert"};
        infantry[] = {"CUP_B_BAF_Soldier_SquadLeader_DDPM", "CUP_B_BAF_Soldier_SquadLeader_DDPM", "CUP_B_BAF_Soldier_Rifleman_DDPM", "CUP_B_BAF_Soldier_Rifleman_DDPM", "CUP_B_BAF_Soldier_RiflemanLAT_DDPM", "CUP_B_BAF_Soldier_AutoRifleman_DDPM", "CUP_B_BAF_Soldier_HeavyGunner_DDPM", "CUP_B_BAF_Soldier_Medic_DDPM", "CUP_B_BAF_Soldier_Officer_DDPM"};
        crewmen[] = {"CUP_B_BAF_Soldier_Crew_DDPM"};
        pilots[] = {"CUP_B_BAF_Soldier_Pilot_DDPM"};
        technicals[] = {"CUP_B_LR_Special_M2_GB_D", "CUP_B_LR_Special_GMG_GB_D", "CUP_B_Jackal2_GMG_GB_D", "CUP_B_Jackal2_L2A1_GB_D"};
        armour[] = {"CUP_B_FV432_Bulldog_GB_D_RWS", "CUP_B_FV432_Bulldog_GB_D", "CUP_B_MCV80_GB_D_SLAT", "CUP_B_Challenger2_2CD_BAF"};
        th[] = {"CUP_B_CH47F_GB"};
        ah[] = {"CUP_B_AH1_DL_BAF"};
    };

    class CUP_BAF_MTP {
        side = "west";
        camouflage[] = {"woodland", "desert"};
        infantry[] = {"CUP_B_BAF_Soldier_SquadLeader_MTP", "CUP_B_BAF_Soldier_SquadLeader_MTP", "CUP_B_BAF_Soldier_Rifleman_MTP", "CUP_B_BAF_Soldier_Rifleman_MTP", "CUP_B_BAF_Soldier_RiflemanLAT_MTP", "CUP_B_BAF_Soldier_AutoRifleman_MTP", "CUP_B_BAF_Soldier_HeavyGunner_MTP", "CUP_B_BAF_Soldier_Medic_MTP", "CUP_B_BAF_Soldier_Officer_MTP"};
        crewmen[] = {"CUP_B_BAF_Soldier_Crew_MTP"};
        pilots[] = {"CUP_B_BAF_Soldier_Pilot_MTP"};
        technicals[] = {"CUP_B_Jackal2_GMG_GB_D", "CUP_B_Jackal2_L2A1_GB_D", "CUP_B_Mastiff_GMG_GB_D", "CUP_B_Mastiff_HMG_GB_D", "CUP_B_Ridgback_GMG_GB_D", "CUP_B_Ridgback_HMG_GB_D"};
        armour[] = {"CUP_B_FV432_Bulldog_GB_W_RWS", "CUP_B_FV432_Bulldog_GB_W", "CUP_B_MCV80_GB_W_SLAT", "CUP_B_Challenger2_2CW_BAF"};
        th[] = {"CUP_B_MH47E_GB"};
        ah[] = {"CUP_B_AH1_DL_BAF"};
    };

    class FIA_GUER {
        side = "west";
        camouflage[] = {"woodland", "desert"};
        infantry[] = {"B_G_Soldier_SL_F", "B_G_Soldier_SL_F", "B_G_Soldier_F", "B_G_Soldier_F", "B_G_Soldier_RPG7_F", "B_G_Soldier_AR_F", "B_G_Soldier_AR_F", "B_G_medic_F", "B_G_officer_F"};
        crewmen[] = {"B_G_Soldier_F"};
        pilots[] = {"B_G_Soldier_F"};
        technicals[] = {"B_G_Offroad_01_armed_F", "B_G_Offroad_01_AT_F", "B_G_Offroad_01_armed_F"};
        armour[] = {"CUP_B_BTR60_FIA", "CUP_B_MTLB_pk_FIA", "CUP_I_T34_NAPA", "CUP_I_T55_TK_GUE", "CUP_I_BRDM2_NAPA", "CUP_I_BMP1_TK_GUE", "CUP_B_BTR80_FIA", "CUP_B_BTR80A_FIA"};
        th[] = {"CUP_O_UH1H_SLA"};
        ah[] = {"CUP_O_Mi8_SLA_2"};
    };

    class CSAT_CBRN {
        side = "east";
        camouflage[] = {};
        infantry[] = {"skn_o_nbc_sl", "skn_o_nbc_sl", "skn_o_nbc_rf", "skn_o_nbc_rf", "skn_o_nbc_rpg18", "skn_o_nbc_ar", "skn_o_nbc_ar", "skn_o_medic"};
        crewmen[] = {"skn_o_nbc_rf"};
        pilots[] = {"skn_o_nbc_rf"};
        technicals[] = {"O_MRAP_02_hmg_F", "O_LSV_02_armed_F", "O_LSV_02_armed_F"};
        armour[] = {"O_APC_Tracked_02_cannon_F", "O_MBT_02_cannon_F", "O_APC_Wheeled_02_rcws_F", "CUP_O_BTR80_CSAT", "CUP_O_BTR80A_CSAT"};
        th[] = {"O_Heli_Light_02_unarmed_F"};
        ah[] = {"O_Heli_Attack_02_F"};
    };

    class MNP_OPF_F_SN {
        side = "east";
        camouflage[] = {"snow"};
        infantry[] = {"MNP_RU_Soldier_Arctic_O", "MNP_RU_Soldier_Arctic_O", "MNP_RU_Soldier_Arctic_F", "MNP_RU_Soldier_Arctic_F", "MNP_RU_Soldier_Arctic_AT", "MNP_RU_Soldier_Arctic_AR", "MNP_RU_Soldier_Arctic_MG", "MNP_RU_Soldier_Arctic_M"};
        crewmen[] = {"MNP_RU_Soldier_Arctic_F"};
        pilots[] = {"MNP_RU_Soldier_Arctic_F"};
        technicals[] = {"CUP_O_UAZ_MG_RU", "CUP_O_UAZ_MG_RU", "CUP_O_UAZ_AGS30_RU", "CUP_O_UAZ_SPG9_RU"};
        armour[] = {"CUP_O_MTLB_pk_Winter_RU", "CUP_O_BTR60_Winter_RU", "CUP_O_T72_RU", "CUP_O_GAZ_Vodnik_BPPU_RU", "CUP_O_BTR80_WINTER_RU", "CUP_O_BTR80A_WINTER_RU"};
        th[] = {"O_Heli_Light_02_unarmed_F"};
        ah[] = {"CUP_O_Ka60_Blk_CSAT"};
    };

    class MNP_CH_UNI {
        side = "east";
        camouflage[] = {"woodland", "desert", "snow"};
        infantry[] = {"MNP_CN_Soldier_O", "MNP_CN_Soldier_O", "MNP_CN_Soldier_F", "MNP_CN_Soldier_F", "MNP_CN_Soldier_RAT", "MNP_CN_Soldier_AR", "MNP_CN_Soldier_MG", "MNP_CN_Soldier_MED"};
        crewmen[] = {"MNP_CN_Soldier_F"};
        pilots[] = {"MNP_CN_Soldier_F"};
        technicals[] = {"CUP_O_UAZ_MG_RU", "CUP_O_UAZ_MG_RU", "CUP_O_UAZ_AGS30_RU", "CUP_O_UAZ_SPG9_RU"};
        armour[] = {"CUP_O_BRDM2_SLA", "CUP_O_BTR60_SLA", "CUP_I_BMP1_TK_GUE", "CUP_I_T55_TK_GUE", "CUP_O_T72_SLA"};
        th[] = {"O_Heli_Light_02_unarmed_F"};
        ah[] = {"CUP_O_Ka60_Blk_CSAT"};
    };

    class MNP_CH_WD {
        side = "east";
        camouflage[] = {"woodland"};
        infantry[] = {"MNP_CW_Soldier_O", "MNP_CW_Soldier_O", "MNP_CW_Soldier_F", "MNP_CW_Soldier_F", "MNP_CW_Soldier_RAT", "MNP_CW_Soldier_AR", "MNP_CW_Soldier_MG", "MNP_CW_Soldier_MED"};
        crewmen[] = {"MNP_CW_Soldier_F"};
        pilots[] = {"MNP_CW_Soldier_F"};
        technicals[] = {"CUP_O_UAZ_MG_RU", "CUP_O_UAZ_MG_RU", "CUP_O_UAZ_MG_RU", "CUP_O_UAZ_AGS30_RU", "CUP_O_UAZ_SPG9_RU"};
        armour[] = {"CUP_O_BRDM2_SLA", "CUP_O_BTR60_SLA", "CUP_O_BRDM2_SLA", "CUP_I_BMP1_TK_GUE", "CUP_I_T55_TK_GUE", "CUP_O_T72_SLA"};
        th[] = {"O_Heli_Light_02_unarmed_F"};
        ah[] = {"CUP_O_Ka60_Blk_CSAT"};
    };

    class MNP_CH_DE {
        side = "east";
        camouflage[] = {"desert"};
        infantry[] = {"MNP_CD_Soldier_O", "MNP_CD_Soldier_O", "MNP_CD_Soldier_F", "MNP_CD_Soldier_F", "MNP_CD_Soldier_RAT", "MNP_CD_Soldier_AR", "MNP_CD_Soldier_MG", "MNP_CD_Soldier_MED"};
        crewmen[] = {"MNP_CD_Soldier_F"};
        pilots[] = {"MNP_CD_Soldier_F"};
        technicals[] = {"CUP_O_UAZ_MG_RU", "CUP_O_UAZ_MG_RU", "CUP_O_UAZ_MG_RU", "CUP_O_UAZ_AGS30_RU", "CUP_O_UAZ_SPG9_RU"};
        armour[] = {"CUP_O_BRDM2_SLA", "CUP_O_BTR60_SLA", "CUP_O_BRDM2_SLA", "CUP_I_BMP1_TK_GUE", "CUP_I_T55_TK_GUE", "CUP_O_T72_SLA"};
        th[] = {"O_Heli_Light_02_unarmed_F"};
        ah[] = {"CUP_O_Ka60_Blk_CSAT"};
    };

    class MNP_CH_MAR {
        side = "east";
        camouflage[] = {"woodland", "desert"};
        infantry[] = {"MNP_CM_Soldier_O", "MNP_CM_Soldier_O", "MNP_CM_Soldier_F", "MNP_CM_Soldier_F", "MNP_CM_Soldier_RAT", "MNP_CM_Soldier_AR", "MNP_CM_Soldier_MG", "MNP_CM_Soldier_MED"};
        crewmen[] = {"MNP_CM_Soldier_F"};
        pilots[] = {"MNP_CM_Soldier_F"};
        technicals[] = {"CUP_O_UAZ_MG_RU", "CUP_O_UAZ_MG_RU", "CUP_O_UAZ_AGS30_RU", "CUP_O_UAZ_SPG9_RU"};
        armour[] = {"CUP_O_BRDM2_SLA", "CUP_O_BTR60_SLA", "CUP_O_BRDM2_SLA", "CUP_I_BMP1_TK_GUE", "CUP_I_T55_TK_GUE", "CUP_O_T72_SLA"};
        th[] = {"O_Heli_Light_02_unarmed_F"};
        ah[] = {"CUP_O_Ka60_Blk_CSAT"};
    };

    class MNP_KOR_OD {
        side = "east";
        camouflage[] = {"woodland"};
        infantry[] = {"MNP_NK_Soldier_O", "MNP_NK_Soldier_O", "MNP_NK_Soldier_F", "MNP_NK_Soldier_F", "MNP_NK_Soldier_AT", "MNP_NK_Soldier_AR", "MNP_NK_Soldier_MG", "MNP_NK_Soldier_MD"};
        crewmen[] = {"MNP_NK_Soldier_F"};
        pilots[] = {"MNP_NK_Soldier_F"};
        technicals[] = {"CUP_O_UAZ_MG_RU", "CUP_O_UAZ_MG_RU", "CUP_O_UAZ_AGS30_RU", "CUP_O_UAZ_SPG9_RU"};
        armour[] = {"CUP_O_MTLB_pk_WDL_RU", "CUP_O_BRDM2_SLA", "CUP_O_BTR60_SLA", "CUP_I_BMP1_TK_GUE", "CUP_I_T55_TK_GUE", "CUP_O_T72_SLA", "CUP_O_BTR80_GREEN_RU", "CUP_O_BTR80A_GREEN_RU"};
        th[] = {"CUP_O_Mi8AMT_RU"};
        ah[] = {"CUP_O_Mi24_V_Dynamic_RU"};
    };

    class MNP_KOR_WD {
        side = "east";
        camouflage[] = {"woodland"};
        infantry[] = {"MNP_NKC_Soldier_O", "MNP_NKC_Soldier_O", "MNP_NKC_Soldier_F", "MNP_NKC_Soldier_F", "MNP_NKC_Soldier_AT", "MNP_NKC_Soldier_AR", "MNP_NKC_Soldier_MG", "MNP_NKC_Soldier_MD"};
        crewmen[] = {"MNP_NKC_Soldier_F"};
        pilots[] = {"MNP_NKC_Soldier_F"};
        technicals[] = {"CUP_O_UAZ_MG_RU", "CUP_O_UAZ_MG_RU", "CUP_O_UAZ_AGS30_RU", "CUP_O_UAZ_SPG9_RU"};
        armour[] = {"CUP_O_MTLB_pk_WDL_RU", "CUP_O_BRDM2_SLA", "CUP_O_BTR60_SLA", "CUP_I_BMP1_TK_GUE", "CUP_I_T55_TK_GUE", "CUP_O_T72_SLA", "CUP_O_BTR80_GREEN_RU", "CUP_O_BTR80A_GREEN_RU"};
        th[] = {"CUP_O_Mi8AMT_RU"};
        ah[] = {"CUP_O_Mi24_V_Dynamic_RU"};
    };

    class MNP_RU_AIR {
        side = "east";
        camouflage[] = {"woodland", "desert", "snow"};
        infantry[] = {"MNP_RO3_Soldier_O", "MNP_RO3_Soldier_O", "MNP_RO3_Soldier_F", "MNP_RO3_Soldier_F", "MNP_RO3_Soldier_AT", "MNP_RO3_Soldier_AR", "MNP_RO3_Soldier_MG", "MNP_RO3_Soldier_M"};
        crewmen[] = {"MNP_RO3_Soldier_F"};
        pilots[] = {"MNP_RO3_Soldier_F"};
        technicals[] = {"CUP_O_UAZ_MG_RU", "CUP_O_UAZ_MG_RU", "CUP_O_UAZ_AGS30_RU", "CUP_O_UAZ_SPG9_RU"};
        armour[] = {"CUP_O_MTLB_pk_WDL_RU", "CUP_O_BRDM2_SLA", "CUP_O_BMP2_RU", "CUP_I_BMP1_TK_GUE", "CUP_I_T55_TK_GUE", "CUP_O_BTR60_RU", "CUP_O_BTR80_CAMO_RU"};
        th[] = {"CUP_O_Mi8AMT_RU"};
        ah[] = {"CUP_O_Mi24_V_Dynamic_RU"};
    };

    class GM_GDR_80_WD {
        side = "east";
        camouflage[] = {"woodland"};
        infantry[] = {"gm_gc_army_squadleader_mpiak74n_80_str", "gm_gc_army_squadleader_mpiak74n_80_str", "gm_gc_army_rifleman_mpiak74n_80_str", "gm_gc_army_rifleman_mpiak74n_80_str", "gm_gc_army_antitank_mpiak74n_rpg7_80_str", "gm_gc_army_machinegunner_lmgrpk_80_str", "gm_gc_army_machinegunner_pk_80_str", "gm_gc_army_medic_mpiak74n_80_str"};
        crewmen[] = {"gm_gc_army_crew_mpiaks74nk_80_blk"};
        pilots[] = {"gm_gc_airforce_pilot_pm_80_blu"};
        technicals[] = {"gm_gc_army_uaz469_spg9", "gm_gc_army_uaz469_dshkm", "gm_gc_army_uaz469_dshkm"};
        armour[] = {"gm_gc_army_brdm2", "gm_gc_army_btr60pb", "gm_gc_army_bmp1sp2", "gm_gc_army_pt76b", "gm_gc_army_t55", "gm_gc_army_t55a", "gm_gc_army_t55ak", "gm_gc_army_t55am2", "gm_gc_army_t55am2b"};
        th[] = {"gm_gc_airforce_mi2t"};
        ah[] = {"gm_gc_airforce_mi2urn"};
    };

    class GM_GDR_80_SN {
        side = "east";
        camouflage[] = {"snow"};
        infantry[] = {"gm_gc_army_squadleader_mpiak74n_80_win", "gm_gc_army_squadleader_mpiak74n_80_win", "gm_gc_army_rifleman_mpiak74n_80_win", "gm_gc_army_rifleman_mpiak74n_80_win", "gm_gc_army_antitank_mpiak74n_rpg7_80_win", "gm_gc_army_machinegunner_lmgrpk_80_win", "gm_gc_army_machinegunner_pk_80_win", "gm_gc_army_medic_mpiak74n_80_win"};
        crewmen[] = {"gm_gc_army_crew_mpiaks74nk_80_blk"};
        pilots[] = {"gm_gc_airforce_pilot_pm_80_blu"};
        technicals[] = {"gm_gc_army_uaz469_spg9_win", "gm_gc_army_uaz469_dshkm_win", "gm_gc_army_uaz469_dshkm_win"};
        armour[] = {"gm_gc_army_brdm2_win", "gm_gc_army_btr60pb_win", "gm_gc_army_bmp1sp2_win", "gm_gc_army_pt76b_win", "gm_gc_army_t55_win", "gm_gc_army_t55a_win", "gm_gc_army_t55ak_win", "gm_gc_army_t55am2_win", "gm_gc_army_t55am2b_win"};
        th[] = {"gm_gc_airforce_mi2t"};
        ah[] = {"gm_gc_airforce_mi2urn"};
    };

    class GM_GDR_80_AIR {
        side = "east";
        camouflage[] = {"woodland"};
        infantry[] = {"gm_gc_army_sf_squadleader_mpikms72_80_str", "gm_gc_army_sf_squadleader_mpikms72_80_str", "gm_gc_army_sf_rifleman_mpikms72_80_str", "gm_gc_army_sf_rifleman_mpikms72_80_str", "gm_gc_army_sf_antitank_mpikms72_rpg7_80_str", "gm_gc_army_sf_machinegunner_lmgrpk_80_str", "gm_gc_army_sf_machinegunner_lmgrpk_80_str", "gm_gc_army_sf_rifleman_pm63_80_str"};
        crewmen[] = {"gm_gc_army_crew_mpiaks74nk_80_blk"};
        pilots[] = {"gm_gc_airforce_pilot_pm_80_blu"};
        technicals[] = {"gm_gc_army_uaz469_spg9", "gm_gc_army_uaz469_dshkm", "gm_gc_army_uaz469_dshkm"};
        armour[] = {"gm_gc_army_brdm2", "gm_gc_army_btr60pb", "gm_gc_army_bmp1sp2", "gm_gc_army_pt76b", "gm_gc_army_t55", "gm_gc_army_t55a", "gm_gc_army_t55ak", "gm_gc_army_t55am2", "gm_gc_army_t55am2b"};
        th[] = {"gm_gc_airforce_mi2t"};
        ah[] = {"gm_gc_airforce_mi2urn"};
    };

    class GM_PRL_80_WD {
        side = "east";
        camouflage[] = {"woodland"};
        infantry[] = {"gm_pl_army_grenadier_akm_pallad_80_moro", "gm_pl_army_grenadier_akm_pallad_80_moro", "gm_pl_army_rifleman_akm_80_moro", "gm_pl_army_rifleman_akm_80_moro", "gm_pl_army_antitank_akm_rpg7_80_moro", "gm_pl_army_machinegunner_rpk_80_moro", "gm_pl_army_machinegunner_pk_80_moro", "gm_pl_army_medic_akm_80_moro"};
        crewmen[] = {"gm_pl_army_crew_pm63_80_moro"};
        pilots[] = {"gm_pl_airforce_pilot_pm_80_gry"};
        technicals[] = {"gm_pl_army_uaz469_dshkm"};
        armour[] = {"gm_pl_army_brdm2", "gm_pl_army_ot64a", "gm_pl_army_bmp1sp2", "gm_pl_army_pt76b", "gm_pl_army_t55", "gm_pl_army_t55a", "gm_pl_army_t55ak"};
        th[] = {"gm_pl_airforce_mi2t"};
        ah[] = {"gm_pl_airforce_mi2urn"};
    };

    class GM_PRL_80_SN {
        side = "east";
        camouflage[] = {"snow"};
        infantry[] = {"gm_pl_army_grenadier_akm_pallad_80_win", "gm_pl_army_grenadier_akm_pallad_80_win", "gm_pl_army_rifleman_akm_80_win", "gm_pl_army_rifleman_akm_80_win", "gm_pl_army_antitank_akm_rpg7_80_win", "gm_pl_army_machinegunner_rpk_80_win", "gm_pl_army_machinegunner_pk_80_win", "gm_pl_army_medic_akm_80_win"};
        crewmen[] = {"gm_pl_army_crew_pm63_80_moro"};
        pilots[] = {"gm_pl_airforce_pilot_pm_80_gry"};
        technicals[] = {"gm_pl_army_uaz469_dshkm_win"};
        armour[] = {"gm_pl_army_brdm2", "gm_pl_army_ot64a", "gm_pl_army_bmp1sp2", "gm_pl_army_pt76b", "gm_pl_army_t55", "gm_pl_army_t55a", "gm_pl_army_t55ak"};
        th[] = {"gm_pl_airforce_mi2t"};
        ah[] = {"gm_pl_airforce_mi2urn"};
    };

    class GM_PRL_80_AIR {
        side = "east";
        camouflage[] = {"woodland"};
        infantry[] = {"gm_pl_army_sf_grenadier_akm_pallad_80_moro", "gm_pl_army_sf_grenadier_akm_pallad_80_moro", "gm_pl_army_sf_rifleman_akmn_80_moro", "gm_pl_army_sf_antitank_akmn_rpg7_80_moro", "gm_pl_army_sf_machinegunner_rpk_80_moro", "gm_pl_army_sf_machinegunner_rpk_80_moro", "gm_pl_army_sf_rifleman_pm63_80_moro", "gm_pl_army_sf_rifleman_pm63_80_moro"};
        crewmen[] = {"gm_pl_army_crew_pm63_80_moro"};
        pilots[] = {"gm_pl_airforce_pilot_pm_80_gry"};
        technicals[] = {"gm_pl_army_uaz469_dshkm"};
        armour[] = {"gm_pl_army_brdm2", "gm_pl_army_ot64a", "gm_pl_army_bmp1sp2", "gm_pl_army_pt76b", "gm_pl_army_t55", "gm_pl_army_t55a", "gm_pl_army_t55ak"};
        th[] = {"gm_pl_airforce_mi2t"};
        ah[] = {"gm_pl_airforce_mi2urn"};
    };

    class GM_DNK_80_WD {
        side = "west";
        camouflage[] = {"woodland"};
        infantry[] = {"gm_dk_army_squadleader_g3a3_p2a1_84_m84", "gm_dk_army_squadleader_g3a3_p2a1_84_m84", "gm_dk_army_rifleman_g3a3_84_m84", "gm_dk_army_rifleman_g3a3_84_m84", "gm_dk_army_antitank_g3a3_pzf84_84_m84", "gm_dk_army_machinegunner_mg3_84_m84", "gm_dk_army_machinegunner_mg3_84_m84", "gm_dk_army_medic_g3a3_84_m84"};
        crewmen[] = {"gm_dk_army_crew_84_oli"};
        pilots[] = {"gm_dk_army_crew_84_oli"};
        technicals[] = {"gm_dk_army_u1300l_container"};
        armour[] = {"gm_dk_army_m113a1dk_apc", "gm_dk_army_m113a1dk_command", "gm_dk_army_m113a1dk_engineer", "gm_dk_army_m113a2dk", "gm_dk_army_Leopard1a3"};
        th[] = {"CUP_B_MH6M_USA"};
        ah[] = {"CUP_B_AH6J_USA"};
    };

    class GM_DNK_80_SN {
        side = "west";
        camouflage[] = {"snow"};
        infantry[] = {"gm_dk_army_squadleader_g3a3_p2a1_84_win", "gm_dk_army_squadleader_g3a3_p2a1_84_win", "gm_dk_army_rifleman_g3a3_84_win", "gm_dk_army_rifleman_g3a3_84_win", "gm_dk_army_antitank_g3a3_pzf84_84_win", "gm_dk_army_machinegunner_mg3_84_win", "gm_dk_army_machinegunner_mg3_84_win", "gm_dk_army_medic_g3a3_84_win"};
        crewmen[] = {"gm_dk_army_crew_84_oli"};
        pilots[] = {"gm_dk_army_crew_84_oli"};
        technicals[] = {"gm_dk_army_u1300l_container_win"};
        armour[] = {"gm_dk_army_m113a1dk_apc_win", "gm_dk_army_m113a1dk_command_win", "gm_dk_army_m113a1dk_engineer_win", "gm_dk_army_m113a2dk_win", "gm_dk_army_Leopard1a3_win"};
        th[] = {"CUP_B_MH6M_USA"};
        ah[] = {"CUP_B_AH6J_USA"};
    };

    class GM_DNK_90_WD {
        side = "west";
        camouflage[] = {"woodland"};
        infantry[] = {"gm_dk_army_squadleader_gvm95_p2a1_90_m84", "gm_dk_army_squadleader_gvm95_p2a1_90_m84", "gm_dk_army_rifleman_gvm95_90_m84", "gm_dk_army_rifleman_gvm95_90_m84", "gm_dk_army_antitank_gvm95_pzf84_90_m84", "gm_dk_army_machinegunner_mg3_90_m84", "gm_dk_army_machinegunner_mg3_90_m84", "gm_dk_army_medic_gvm95_90_m84"};
        crewmen[] = {"gm_dk_army_crew_84_oli"};
        pilots[] = {"gm_dk_army_crew_84_oli"};
        technicals[] = {"gm_dk_army_u1300l_container"};
        armour[] = {"gm_dk_army_m113a1dk_apc", "gm_dk_army_m113a1dk_command", "gm_dk_army_m113a1dk_engineer", "gm_dk_army_m113a2dk", "gm_dk_army_Leopard1a3"};
        th[] = {"CUP_B_MH6M_USA"};
        ah[] = {"CUP_B_AH6J_USA"};
    };

    class GM_DNK_90_SN {
        side = "west";
        camouflage[] = {"snow"};
        infantry[] = {"gm_dk_army_squadleader_gvm95_p2a1_90_win", "gm_dk_army_squadleader_gvm95_p2a1_90_win", "gm_dk_army_rifleman_gvm95_90_win", "gm_dk_army_rifleman_gvm95_90_win", "gm_dk_army_antitank_gvm95_pzf84_90_win", "gm_dk_army_machinegunner_mg3_90_win", "gm_dk_army_machinegunner_mg3_90_win", "gm_dk_army_medic_gvm95_90_win"};
        crewmen[] = {"gm_dk_army_crew_84_oli"};
        pilots[] = {"gm_dk_army_crew_84_oli"};
        technicals[] = {"gm_dk_army_u1300l_container_win"};
        armour[] = {"gm_dk_army_m113a1dk_apc_win", "gm_dk_army_m113a1dk_command_win", "gm_dk_army_m113a1dk_engineer_win", "gm_dk_army_m113a2dk_win", "gm_dk_army_Leopard1a3_win"};
        th[] = {"CUP_B_MH6M_USA"};
        ah[] = {"CUP_B_AH6J_USA"};
    };

    class GM_FRG_80_WD {
        side = "west";
        camouflage[] = {"woodland"};
        infantry[] = {"gm_ge_army_grenadier_g3a3_80_ols", "gm_ge_army_squadleader_g3a3_p2a1_80_ols", "gm_ge_army_rifleman_g3a3_80_ols", "gm_ge_army_rifleman_g3a3_80_ols", "gm_ge_army_antitank_g3a3_pzf44_80_ols", "gm_ge_army_machinegunner_mg3_80_ols", "gm_ge_army_machinegunner_mg3_80_ols", "gm_ge_army_medic_g3a3_80_ols"};
        crewmen[] = {"gm_ge_army_crew_mp2a1_80_oli"};
        pilots[] = {"gm_ge_army_pilot_p1_80_oli"};
        technicals[] = {"gm_g3_army_iltis_mg3", "gm_ge_army_fuchsa0_engineer", "gm_ge_army_fuchsa0_command", "gm_ge_army_u1300l_container"};
        armour[] = {"gm_ge_army_M113a1g_apc", "gm_ge_army_m113a1g_apc_milan", "gm_ge_army_m113a1g_command", "gm_ge_army_luchsa1", "gm_ge_army_luchsa2", "gm_ge_army_Leopard1a1", "gm_ge_army_Leopard1a1a1", "gm_ge_army_Leopard1a1a2", "gm_ge_army_Leopard1a3", "gm_ge_army_Leopard1a3a1", "gm_ge_army_Leopard1a5", "gm_ge_army_marder1a1plus", "gm_ge_army_marder1a1a"};
        th[] = {"gm_ge_army_ch53g"};
        ah[] = {"CUP_B_UH1D_gunship_GER_KSK"};
    };

    class GM_FRG_80_SN {
        side = "west";
        camouflage[] = {"snow"};
        infantry[] = {"gm_ge_army_grenadier_g3a3_parka_80_win", "gm_ge_army_squadleader_g3a3_p2a1_parka_80_win", "gm_ge_army_rifleman_g3a3_parka_80_win", "gm_ge_army_rifleman_g3a3_parka_80_win", "gm_ge_army_antitank_g3a3_pzf44_parka_80_win", "gm_ge_army_machinegunner_mg3_parka_80_win", "gm_ge_army_machinegunner_mg3_parka_80_win", "gm_ge_army_medic_g3a3_parka_80_win"};
        crewmen[] = {"gm_ge_army_crew_mp2a1_80_oli"};
        pilots[] = {"gm_ge_army_pilot_p1_80_oli"};
        technicals[] = {"gm_g3_army_iltis_mg3_win", "gm_ge_army_fuchsa0_engineer_win", "gm_ge_army_fuchsa0_command_win", "gm_ge_army_u1300l_container_win"};
        armour[] = {"gm_ge_army_M113a1g_apc_win", "gm_ge_army_m113a1g_apc_milan_win", "gm_ge_army_m113a1g_command_win", "gm_ge_army_luchsa1_win", "gm_ge_army_luchsa2_win", "gm_ge_army_Leopard1a1_win", "gm_ge_army_Leopard1a1a1_win", "gm_ge_army_Leopard1a1a2_win", "gm_ge_army_Leopard1a3_win", "gm_ge_army_Leopard1a3a1_win", "gm_ge_army_Leopard1a5_win", "gm_ge_army_marder1a1plus_win", "gm_ge_army_marder1a1a_win"};
        th[] = {"gm_ge_army_ch53g"};
        ah[] = {"CUP_B_UH1D_gunship_GER_KSK"};
    };

    class GM_FRG_90_WD {
        side = "west";
        camouflage[] = {"woodland"};
        infantry[] = {"gm_ge_army_squadleader_g36a1_p2a1_90_flk", "gm_ge_army_squadleader_g36a1_p2a1_90_flk", "gm_ge_army_rifleman_g36a1_90_flk", "gm_ge_army_rifleman_g36a1_90_flk", "gm_ge_army_antitank_g36a1_pzf3_90_flk", "gm_ge_army_machinegunner_mg3_90_flk", "gm_ge_army_machinegunner_mg3_90_flk", "gm_ge_army_medic_g36a1_90_flk"};
        crewmen[] = {"gm_ge_army_crew_90_flk"};
        pilots[] = {"gm_ge_army_pilot_p1_80_oli"};
        technicals[] = {"gm_g3_army_iltis_mg3", "gm_ge_army_fuchsa0_engineer", "gm_ge_army_fuchsa0_command", "gm_ge_army_u1300l_container"};
        armour[] = {"gm_ge_army_M113a1g_apc", "gm_ge_army_m113a1g_apc_milan", "gm_ge_army_m113a1g_command", "gm_ge_army_luchsa2", "gm_ge_army_Leopard1a5", "gm_ge_army_marder1a2"};
        th[] = {"gm_ge_army_ch53g"};
        ah[] = {"CUP_B_UH1D_gunship_GER_KSK"};
    };

    class GM_FRG_90_SN {
        side = "west";
        camouflage[] = {"snow"};
        infantry[] = {"gm_ge_army_squadleader_g36a1_p2a1_90_win", "gm_ge_army_squadleader_g36a1_p2a1_90_win", "gm_ge_army_rifleman_g36a1_90_win", "gm_ge_army_rifleman_g36a1_90_win", "gm_ge_army_antitank_g36a1_pzf3_90_win", "gm_ge_army_machinegunner_mg3_90_win", "gm_ge_army_machinegunner_mg3_90_win", "gm_ge_army_medic_g36a1_90_win"};
        crewmen[] = {"gm_ge_army_crew_90_flk"};
        pilots[] = {"gm_ge_army_pilot_p1_80_oli"};
        technicals[] = {"gm_g3_army_iltis_mg3_win", "gm_ge_army_fuchsa0_engineer_win", "gm_ge_army_fuchsa0_command_win", "gm_ge_army_u1300l_container_win"};
        armour[] = {"gm_ge_army_M113a1g_apc_win", "gm_ge_army_m113a1g_apc_milan_win", "gm_ge_army_m113a1g_command_win", "gm_ge_army_luchsa1_win", "gm_ge_army_luchsa2_win", "gm_ge_army_Leopard1a1_win", "gm_ge_army_Leopard1a1a1_win", "gm_ge_army_Leopard1a1a2_win", "gm_ge_army_Leopard1a3_win", "gm_ge_army_Leopard1a3a1_win", "gm_ge_army_Leopard1a5_win", "gm_ge_army_marder1a1plus_win", "gm_ge_army_marder1a1a_win"};
        th[] = {"gm_ge_army_ch53g"};
        ah[] = {"CUP_B_UH1D_gunship_GER_KSK"};
    };

    class MNP_DPR_SUM {
        side = "east";
        camouflage[] = {"woodland"};
        infantry[] = {"MNP_DPR_T_Soldier_TL", "MNP_DPR_T_Soldier_TL", "MNP_DPR_T_Soldier_F", "MNP_DPR_T_Soldier_TL", "MNP_DPR_T_Soldier_AT", "MNP_DPR_T_Soldier_AR", "MNP_DPR_T_Soldier_MG", "MNP_DPR_T_Soldier_MD"};
        crewmen[] = {"MNP_DPR_T_Soldier_F"};
        pilots[] = {"MNP_DPR_T_Soldier_F"};
        technicals[] = {"CUP_O_UAZ_MG_CHDKZ", "CUP_O_UAZ_MG_CHDKZ", "CUP_O_UAZ_AGS30_CHDKZ", "CUP_O_UAZ_SPG9_CHDKZ"};
        armour[] = {"CUP_O_BTR60_CHDKZ", "CUP_O_T55_CHDKZ", "CUP_O_BRDM2_CHDKZ", "CUP_I_BMP1_TK_GUE", "CUP_O_BMP2_CHDKZ", "CUP_O_MTLB_pk_ChDKZ", "CUP_O_T72_CHDKZ", "CUP_O_BTR80_CAMO_RU", "CUP_O_BTR80A_CAMO_RU"};
        th[] = {"CUP_O_Mi8_CHDKZ"};
        ah[] = {"CUP_O_Mi24_V_Dynamic_RU"};
    };

    class MNP_DPR_AUT {
        side = "east";
        camouflage[] = {"woodland"};
        infantry[] = {"MNP_DPR_Soldier_TL", "MNP_DPR_Soldier_TL", "MNP_DPR_Soldier_F", "MNP_DPR_Soldier_F", "MNP_DPR_Soldier_AT", "MNP_DPR_Soldier_AR", "MNP_DPR_Soldier_MG", "MNP_DPR_Soldier_MD"};
        crewmen[] = {"MNP_DPR_Soldier_F"};
        pilots[] = {"MNP_DPR_Soldier_F"};
        technicals[] = {"CUP_O_UAZ_MG_CHDKZ", "CUP_O_UAZ_MG_CHDKZ", "CUP_O_UAZ_AGS30_CHDKZ", "CUP_O_UAZ_SPG9_CHDKZ"};
        armour[] = {"CUP_O_BTR60_CHDKZ", "CUP_O_T55_CHDKZ", "CUP_O_BRDM2_CHDKZ", "CUP_I_BMP1_TK_GUE", "CUP_O_BMP2_CHDKZ", "CUP_O_MTLB_pk_ChDKZ", "CUP_O_T72_CHDKZ", "CUP_O_BTR80_CAMO_RU", "CUP_O_BTR80A_CAMO_RU"};
        th[] = {"CUP_O_Mi8_CHDKZ"};
        ah[] = {"CUP_O_Mi24_V_Dynamic_RU"};
    };

    class MNP_IRN {
        side = "east";
        camouflage[] = {"desert"};
        infantry[] = {"MNP_IR_IRGC_Soldier_TL", "MNP_IR_IRGC_Soldier_TL", "MNP_IR_IRGC_Soldier_F", "MNP_IR_IRGC_Soldier_F", "MNP_IR_IRGC_Soldier_AT", "MNP_IR_IRGC_Soldier_AR", "MNP_IR_IRGC_Soldier_MG", "MNP_IR_IRGC_Soldier_MD"};
        crewmen[] = {"MNP_IR_IRGC_Soldier_F"};
        pilots[] = {"MNP_IR_IRGC_Soldier_F"};
        technicals[] = {"CUP_O_UAZ_MG_RU", "CUP_O_UAZ_MG_RU", "CUP_O_UAZ_AGS30_RU", "CUP_O_UAZ_SPG9_RU"};
        armour[] = {"CUP_O_BRDM2_SLA", "CUP_O_BTR60_RU", "CUP_I_BMP1_TK_GUE", "UP_O_BMP2_SLA", "CUP_I_T55_TK_GUE", "CUP_O_T72_SLA"};
        th[] = {"CUP_O_Mi8_SLA_2"};
        ah[] = {"CUP_O_Mi24_V_Dynamic_RU"};
    };

    class MNP_IRN_RG {
        side = "east";
        camouflage[] = {"desert"};
        infantry[] = {"MNP_IR_IRGC_Soldier_MED_O", "MNP_IR_IRGC_Soldier_MED_O", "MNP_IR_IRGC_Soldier_MEDIUM", "MNP_IR_IRGC_Soldier_MEDIUM", "MNP_IR_IRGC_Soldier_Med_AT", "MNP_IR_IRGC_Soldier_Med_AR", "MNP_IR_IRGC_Soldier_Med_MG", "MNP_IR_IRGC_Soldier_Med_M"};
        crewmen[] = {"MNP_IR_IRGC_Soldier_MEDIUM"};
        pilots[] = {"MNP_IR_IRGC_Soldier_MEDIUM"};
        technicals[] = {"CUP_O_UAZ_MG_RU", "CUP_O_UAZ_MG_RU", "CUP_O_UAZ_AGS30_RU", "CUP_O_UAZ_SPG9_RU"};
        armour[] = {"CUP_O_BRDM2_SLA", "CUP_O_BTR60_RU", "CUP_I_BMP1_TK_GUE", "UP_O_BMP2_SLA", "CUP_I_T55_TK_GUE", "CUP_O_T72_SLA"};
        th[] = {"CUP_O_Mi8_SLA_2"};
        ah[] = {"CUP_O_Mi24_V_Dynamic_RU"};
    };

    class CUP_TKA_OD {
        side = "east";
        camouflage[] = {"woodland", "desert"};
        infantry[] = {"CUP_O_TK_Soldier_GL", "CUP_O_TK_Soldier_GL", "CUP_O_TK_Soldier", "CUP_O_TK_Soldier_Backpack", "CUP_O_TK_Soldier_LAT", "CUP_O_TK_Soldier_AR", "CUP_O_TK_Soldier_MG", "CUP_O_TK_Medic"};
        crewmen[] = {"CUP_O_TK_Crew"};
        pilots[] = {"CUP_O_TK_Pilot"};
        technicals[] = {"CUP_O_UAZ_MG_TKA", "CUP_O_UAZ_MG_TKA", "CUP_O_UAZ_AGS30_TKA", "CUP_O_UAZ_SPG9_TKA", "CUP_O_BTR40_MG_TKA", "CUP_O_LR_SPG9_TKA", "CUP_O_LR_MG_TKA"};
        armour[] = {"CUP_O_M113A3_TKA", "CUP_O_MTLB_pk_TKA", "CUP_O_BTR60_TK", "CUP_O_BRDM2_TKA", "CUP_O_BMP1P_TKA", "CUP_O_BMP2_TKA", "CUP_O_BMP2_ZU_TKA", "CUP_O_T55_TK", "CUP_O_T72_TKA", "CUP_O_BTR80_TK", "CUP_O_BTR80A_TK"};
        th[] = {"CUP_O_Mi17_TK"};
        ah[] = {"CUP_O_Mi24_D_TK"};
    };

    class GMX_TKA {
        side = "east";
        camouflage[] = {"woodland", "desert"};
        infantry[] = {"gmx_tak_army_squadleader_g3a3_p2a1_oli", "gmx_tak_army_grenadier_g3a3_oli", "gmx_tak_army_rifleman_g3a3_oli", "gmx_tak_army_rifleman_g3a3_oli", "gmx_tak_army_antitank_g3a3_rpg7_oli", "gmx_tak_army_machinegunner_rpk_oli", "gmx_tak_army_machinegunner_mg3_oli", "gmx_tak_army_machinegunner_pkm_oli", "gmx_tak_army_medic_g3a3_oli"};
        crewmen[] = {"gmx_tak_army_crew_mpiaks74nk_oli"};
        pilots[] = {"gmx_tak_army_pilot_p1_oli"};
        technicals[] = {"gmx_tak_army_uaz469_dshkm_des", "gmx_tak_army_uaz469_dshkm_des", "gmx_tak_army_uaz469_spg9_des"};
        armour[] = {"gmx_tak_army_brdm2_des", "gmx_tak_army_bmp1sp2_des", "gmx_tak_army_btr60pb_des", "gmx_tak_armyM113a1g_apc_des", "gmx_tak_army_m113a1g_apc_milan_des", "gmx_tak_army_ot64a_des", "gmx_tak_army_pt76b_des", "gmx_tak_army_t55_des", "gmx_tak_army_t55a_des", "gmx_tak_army_t55ak_des", "gmx_tak_army_t55am2_des", "gmx_tak_army_t55am2b_des"};
        th[] = {"gmx_tak_army_mi2t_des"};
        ah[] = {"gmx_tak_army_mi2urn_des"};
    };

    class CUP_TK_INS {
        side = "east";
        camouflage[] = {"desert"};
        infantry[] = {"CUP_O_TK_INS_Soldier_GL", "CUP_O_TK_INS_Soldier_TL", "CUP_O_TK_INS_Soldier", "CUP_O_TK_INS_Soldier_FNFAL", "CUP_O_TK_INS_Soldier_AT", "CUP_O_TK_INS_Soldier_AR", "CUP_O_TK_INS_Soldier_MG", "CUP_O_TK_INS_Guerilla_Medic", "CUP_O_TK_INS_Commander"};
        crewmen[] = {"CUP_O_TK_INS_Mechanic"};
        pilots[] = {"CUP_O_TK_INS_Mechanic"};
        technicals[] = {"CUP_O_Hilux_AGS30_TK_INS", "CUP_O_Hilux_DSHKM_TK_INS", "CUP_O_Hilux_SPG9_TK_INS", "CUP_O_Hilux_zu23_TK_INS", "CUP_O_Hilux_armored_AGS30_TK_INS", "CUP_O_Hilux_armored_DSHKM_TK_INS", "CUP_O_Hilux_armored_SPG9_TK_INS", "CUP_O_Hilux_armored_zu23_TK_INS"};
        armour[] = {"CUP_O_Hilux_armored_BMP1_TK_INS", "CUP_O_Hilux_armored_BTR60_TK_INS", "CUP_O_T55_TK", "CUP_O_T34_TKA"};
        th[] = {"CUP_O_Mi17_TK"};
        ah[] = {"CUP_O_Mi24_D_TK"};
    };

    class CUP_SLA_WD {
        side = "east";
        camouflage[] = {"woodland"};
        infantry[] = {"CUP_O_sla_soldier_GL", "CUP_O_sla_soldier_GL", "CUP_O_sla_soldier", "CUP_O_SLA_Soldier_Backpack", "CUP_O_sla_Soldier_LAT", "CUP_O_sla_Soldier_AR", "CUP_O_sla_Soldier_MG", "CUP_O_sla_Medic", "CUP_O_sla_Officer"};
        crewmen[] = {"CUP_O_sla_Crew"};
        pilots[] = {"CUP_O_sla_Pilot"};
        technicals[] = {"CUP_O_UAZ_MG_SLA", "CUP_O_UAZ_MG_SLA", "CUP_O_UAZ_AGS30_SLA", "CUP_O_UAZ_SPG9_SLA"};
        armour[] = {"CUP_O_MTLB_pk_SLA", "CUP_O_BTR60_SLA", "CUP_O_BTR60_SLA", "CUP_O_BRDM2_SLA", "CUP_O_T55_SLA", "CUP_I_BMP1_TK_GUE", "CUP_O_BMP2_SLA", "CUP_O_T72_SLA", "CUP_O_BTR80_SLA", "CUP_O_BTR80A_SLA"};
        th[] = {"CUP_O_Mi8_SLA_1"};
        ah[] = {"CUP_O_Mi24_D_SLA"};
    };

    class CUP_CHDKZ {
        side = "east";
        camouflage[] = {"woodland"};
        infantry[] = {"CUP_O_INS_Soldier_GL", "CUP_O_INS_Soldier_GL", "CUP_O_INS_Soldier_AK74", "CUP_O_INS_Soldier", "CUP_O_INS_Soldier_AT", "CUP_O_INS_Soldier_AR", "CUP_O_INS_Soldier_MG", "CUP_O_INS_Medic"};
        crewmen[] = {"CUP_O_INS_Crew"};
        pilots[] = {"CUP_O_INS_Pilot"};
        technicals[] = {"CUP_O_UAZ_MG_CHDKZ", "CUP_O_UAZ_MG_CHDKZ", "CUP_O_UAZ_AGS30_CHDKZ", "CUP_O_UAZ_SPG9_CHDKZ", "CUP_O_Ural_ZU23_CHDKZ"};
        armour[] = {"CUP_O_BTR60_CHDKZ", "CUP_O_T55_CHDKZ", "CUP_O_BRDM2_CHDKZ", "CUP_O_MTLB_pk_ChDKZ", "CUP_O_BMP2_CHDKZ", "CUP_O_T72_CHDKZ", "CUP_O_BTR80_CHDKZ", "CUP_O_BTR80A_CHDKZ"};
        th[] = {"CUP_O_Mi8_CHDKZ"};
        ah[] = {"CUP_O_Mi24_V_Dynamic_RU"};
    };

    class GMX_CHDKZ {
        side = "east";
        camouflage[] = {"woodland"};
        infantry[] = {"gmx_chdkz_army_grenadier_akm_pallad_mix", "gmx_chdkz_army_grenadier_akm_pallad_mix", "gmx_chdkz_army_rifleman_akm_mix", "gmx_chdkz_army_rifleman_akm_mix", "gmx_chdkz_army_antitank_akm_rpg7_mix", "gmx_chdkz_army_machinegunner_rpk_mix", "gmx_chdkz_army_machinegunner_pk_mix", "gmx_chdkz_army_medic_akm_mix"};
        crewmen[] = {"gmx_chdkz_army_crew_akm_mix"};
        pilots[] = {"gmx_chdkz_army_pilot_pm63_mix"};
        technicals[] = {"gmx_chdkz_uaz469_dshkm_wdr", "gmx_chdkz_uaz469_dshkm_wdr", "gmx_chdkz_uaz469_spg9_wdr"};
        armour[] = {"gmx_chdkz_brdm2_wdr", "gmx_chdkz_btr60pb_wdr", "gmx_chdkz_ot64a_wdr", "gmx_chdkz_bmp1sp2_wdr", "gmx_chdkz_pt76b_wdr", "gmx_chdkz_t55_wdr", "gmx_chdkz_t55a_wdr", "gmx_chdkz_t55ak_wdr", "gmx_chdkz_t55am2_wdr", "gmx_chdkz_t55am2b_wdr"};
        th[] = {"gmx_chdkz_mi2t_wdl"};
        ah[] = {"gmx_chdkz_mi2urn_wdl"};
    };

    class CUP_RU_WD {
        side = "east";
        camouflage[] = {"woodland"};
        infantry[] = {"CUP_O_RU_Soldier_GL", "CUP_O_RU_Soldier_TL", "CUP_O_RU_Soldier", "CUP_O_RU_Soldier", "CUP_O_RU_Soldier_LAT", "CUP_O_RU_Soldier_AR", "CUP_O_RU_Soldier_MG", "CUP_O_RU_Medic"};
        crewmen[] = {"CUP_O_RU_Crew"};
        pilots[] = {"CUP_O_RU_Pilot"};
        technicals[] = {"CUP_O_UAZ_MG_RU", "CUP_O_UAZ_MG_RU", "CUP_O_UAZ_AGS30_RU", "CUP_O_UAZ_SPG9_RU", "CUP_O_GAZ_Vodnik_PK_RU", "CUP_O_GAZ_Vodnik_AGS_RU", "CUP_O_GAZ_Vodnik_KPVT_RU"};
        armour[] = {"CUP_O_BRDM2_RUS", "CUP_O_BTR60_Green_RU", "CUP_O_MTLB_pk_WDL_RU", "CUP_I_BMP1_TK_GUE", "CUP_O_BMP2_RU", "CUP_O_BMP3_RU", "CUP_O_T72_RU", "CUP_O_BTR90_RU", "CUP_O_GAZ_Vodnik_BPPU_RU", "CUP_O_T90_RU", "CUP_O_BTR80_GREEN_RU", "CUP_O_BTR80A_GREEN_RU"};
        th[] = {"CUP_O_Mi8AMT_RU"};
        ah[] = {"CUP_O_Mi24_V_Dynamic_RU"};
    };

    class CUP_RU_EMR {
        side = "east";
        camouflage[] = {"woodland"};
        infantry[] = {"CUP_O_RU_Soldier_GL_EMR", "CUP_O_RU_Soldier_TL_EMR", "CUP_O_RU_Soldier_EMR", "CUP_O_RU_Soldier_EMR", "CUP_O_RU_Soldier_LAT_EMR", "CUP_O_RU_SOldier_LAT_EMR", "CUP_O_RU_Soldier_AR_EMR", "CUP_O_RU_Soldier_MG_EMR", "CUP_O_RU_Medic_EMR"};
        crewmen[] = {"CUP_O_RU_Crew_EMR"};
        pilots[] = {"CUP_O_RU_Pilot_EMR"};
        technicals[] = {"CUP_O_UAZ_MG_RU", "CUP_O_UAZ_MG_RU", "CUP_O_UAZ_AGS30_RU", "CUP_O_UAZ_SPG9_RU", "CUP_O_GAZ_Vodnik_PK_RU", "CUP_O_GAZ_Vodnik_AGS_RU", "CUP_O_GAZ_Vodnik_KPVT_RU"};
        armour[] = {"CUP_O_BRDM2_RUS", "CUP_O_BTR60_Green_RU", "CUP_O_MTLB_pk_WDL_RU", "CUP_I_BMP1_TK_GUE", "CUP_O_BMP2_RU", "CUP_O_BMP3_RU", "CUP_O_T72_RU", "CUP_O_BTR90_RU", "CUP_O_GAZ_Vodnik_BPPU_RU", "CUP_O_T90_RU", "CUP_O_BTR80_GREEN_RU", "CUP_O_BTR80A_GREEN_RU"};
        th[] = {"CUP_O_Mi8AMT_RU"};
        ah[] = {"CUP_O_Mi24_V_Dynamic_RU"};
    };

    class CUP_RU_MOD {
        side = "east";
        camouflage[] = {"woodland"};
        infantry[] = {"CUP_O_RU_Soldier_TL_M_EMR", "CUP_O_RU_Soldier_TL_M_EMR", "CUP_O_RU_Soldier_M_EMR", "CUP_O_RU_Soldier_M_EMR", "CUP_O_RU_Soldier_LAT_M_EMR", "CUP_O_RU_Soldier_AR_M_EMR", "CUP_O_RU_Soldier_MG_M_EMR", "CUP_O_RU_Medic_M_EMR"};
        crewmen[] = {"CUP_O_RU_Crew_M_EMR"};
        pilots[] = {"CUP_O_RU_Pilot_M_EMR"};
        technicals[] = {"CUP_O_UAZ_MG_RU", "CUP_O_UAZ_MG_RU", "CUP_O_UAZ_AGS30_RU", "CUP_O_UAZ_SPG9_RU", "CUP_O_GAZ_Vodnik_PK_RU", "CUP_O_GAZ_Vodnik_AGS_RU", "CUP_O_GAZ_Vodnik_KPVT_RU"};
        armour[] = {"CUP_O_BMP2_RU", "CUP_O_BMP3_RU", "CUP_O_T72_RU", "CUP_O_BTR90_RU", "CUP_O_GAZ_Vodnik_BPPU_RU", "CUP_O_T90_RU", "CUP_O_BTR80_GREEN_RU", "CUP_O_BTR80A_GREEN_RU"};
        th[] = {"CUP_O_Mi8AMT_RU"};
        ah[] = {"CUP_O_Ka50_DL_RU"};
    };

    class CUP_RU_RATNIK_WD {
        side = "east";
        camouflage[] = {"woodland"};
        infantry[] = {"CUP_O_RU_Soldier_GL_Ratnik_Summer", "CUP_O_RU_Soldier_GL_Ratnik_Summer", "CUP_O_RU_Soldier_Ratnik_Summer", "CUP_O_RU_Soldier_Ratnik_Summer", "CUP_O_RU_Soldier_AR_Ratnik_Summer", "CUP_O_RU_Soldier_MG_Ratnik_Summer", "CUP_O_RU_Soldier_AT_Ratnik_Summer", "CUP_O_RU_Soldier_Medic_Ratnik_Summer"};
        crewmen[] = {"CUP_O_RU_Crew_M_EMR"};
        pilots[] = {"CUP_O_RU_Pilot_M_EMR"};
        technicals[] = {"CUP_O_UAZ_MG_RU", "CUP_O_UAZ_MG_RU", "CUP_O_UAZ_AGS30_RU", "CUP_O_UAZ_SPG9_RU", "CUP_O_GAZ_Vodnik_PK_RU", "CUP_O_GAZ_Vodnik_AGS_RU", "CUP_O_GAZ_Vodnik_KPVT_RU"};
        armour[] = {"CUP_O_BMP2_RU", "CUP_O_BMP3_RU", "CUP_O_T72_RU", "CUP_O_BTR90_RU", "CUP_O_GAZ_Vodnik_BPPU_RU", "CUP_O_T90_RU", "CUP_O_BTR80_GREEN_RU", "CUP_O_BTR80A_GREEN_RU"};
        th[] = {"CUP_O_Mi8AMT_RU"};
        ah[] = {"CUP_O_Ka50_DL_RU"};
    };

    class CUP_RU_RATNIK_DE {
        side = "east";
        camouflage[] = {"desert"};
        infantry[] = {"CUP_O_RU_Soldier_GL_Ratnik_Desert", "CUP_O_RU_Soldier_GL_Ratnik_Desert", "CUP_O_RU_Soldier_Ratnik_Desert", "CUP_O_RU_Soldier_Ratnik_Desert", "CUP_O_RU_Soldier_AR_Ratnik_Desert", "CUP_O_RU_Soldier_MG_Ratnik_Desert", "CUP_O_RU_Soldier_AT_Ratnik_Desert", "CUP_O_RU_Soldier_Medic_Ratnik_Desert"};
        crewmen[] = {"CUP_O_RU_Crew_M_EMR"};
        pilots[] = {"CUP_O_RU_Pilot_M_EMR"};
        technicals[] = {"CUP_O_UAZ_MG_RU", "CUP_O_UAZ_MG_RU", "CUP_O_UAZ_AGS30_RU", "CUP_O_UAZ_SPG9_RU", "CUP_O_GAZ_Vodnik_PK_RU", "CUP_O_GAZ_Vodnik_AGS_RU", "CUP_O_GAZ_Vodnik_KPVT_RU"};
        armour[] = {"CUP_O_BMP2_RU", "CUP_O_BMP3_RU", "CUP_O_T72_RU", "CUP_O_BTR90_RU", "CUP_O_GAZ_Vodnik_BPPU_RU", "CUP_O_T90_RU", "CUP_O_BTR80_GREEN_RU", "CUP_O_BTR80A_GREEN_RU"};
        th[] = {"CUP_O_Mi8AMT_RU"};
        ah[] = {"CUP_O_Ka50_DL_RU"};
    };

    class CUP_RU_RATNIK_SN {
        side = "east";
        camouflage[] = {"snow"};
        infantry[] = {"CUP_O_RU_Soldier_GL_Ratnik_Winter", "CUP_O_RU_Soldier_GL_Ratnik_Winter", "CUP_O_RU_Soldier_Ratnik_Winter", "CUP_O_RU_Soldier_Ratnik_Winter", "CUP_O_RU_Soldier_AR_Ratnik_Winter", "CUP_O_RU_Soldier_MG_Ratnik_Winter", "CUP_O_RU_Soldier_AT_Ratnik_Winter", "CUP_O_RU_Soldier_Medic_Ratnik_Winter"};
        crewmen[] = {"CUP_O_RU_Crew_M_EMR"};
        pilots[] = {"CUP_O_RU_Pilot_M_EMR"};
        technicals[] = {"CUP_O_UAZ_MG_RU", "CUP_O_UAZ_MG_RU", "CUP_O_UAZ_AGS30_RU", "CUP_O_UAZ_SPG9_RU", "CUP_O_GAZ_Vodnik_PK_RU", "CUP_O_GAZ_Vodnik_AGS_RU", "CUP_O_GAZ_Vodnik_KPVT_RU"};
        armour[] = {"CUP_O_BMP2_RU", "CUP_O_BMP3_RU", "CUP_O_T72_RU", "CUP_O_BTR90_RU", "CUP_O_GAZ_Vodnik_BPPU_RU", "CUP_O_T90_RU", "CUP_O_BTR80_GREEN_RU", "CUP_O_BTR80A_GREEN_RU"};
        th[] = {"CUP_O_Mi8AMT_RU"};
        ah[] = {"CUP_O_Ka50_DL_RU"};
    };

    class SPETSNAZ {
        side = "east";
        camouflage[] = {"woodland"};
        infantry[] = {"O_R_Soldier_TL_F", "O_R_Soldier_TL_F", "O_R_JTAC_F", "O_R_JTAC_F", "O_R_Soldier_RPG7_F", "O_R_Soldier_AR_F", "O_R_Soldier_AR_F", "O_R_medic_F"};
        crewmen[] = {"CUP_O_RU_Crew_M_EMR"};
        pilots[] = {"CUP_O_RU_Pilot_M_EMR"};
        technicals[] = {"CUP_O_UAZ_MG_RU", "CUP_O_UAZ_MG_RU", "CUP_O_UAZ_AGS30_RU", "CUP_O_UAZ_SPG9_RU", "CUP_O_GAZ_Vodnik_PK_RU", "CUP_O_GAZ_Vodnik_AGS_RU", "CUP_O_GAZ_Vodnik_KPVT_RU"};
        armour[] = {"CUP_O_BMP2_RU", "CUP_O_BMP3_RU", "CUP_O_T72_RU", "CUP_O_BTR90_RU", "CUP_O_GAZ_Vodnik_BPPU_RU", "CUP_O_T90_RU", "CUP_O_BTR80_GREEN_RU", "CUP_O_BTR80A_GREEN_RU"};
        th[] = {"CUP_O_Mi8AMT_RU"};
        ah[] = {"CUP_O_Ka50_DL_RU"};
    };

    class CUP_RU_VDV_MOD {
        side = "east";
        camouflage[] = {"woodland"};
        infantry[] = {"CUP_O_RU_Soldier_TL_M_VDV_EMR_V2", "CUP_O_RU_Soldier_TL_M_VDV_EMR_V2", "CUP_O_RU_Soldier_M_VDV_EMR_V2", "CUP_O_RU_Soldier_M_VDV_EMR_V2", "CUP_O_RU_Soldier_AT_M_VDV_EMR_V2", "CUP_O_RU_Soldier_AR_M_VDV_EMR_V2", "CUP_O_RU_Soldier_MG_M_VDV_EMR_V2", "CUP_O_RU_Soldier_Medic_M_VDV_EMR_V2", "CUP_O_RU_Officer_M_VDV_EMR_V2"};
        crewmen[] = {"CUP_O_RU_Soldier_Crew_M_VDV_EMR_V2"};
        pilots[] = {"CUP_O_RU_Pilot_VDV_M_EMR"};
        technicals[] = {"CUP_O_UAZ_MG_RU", "CUP_O_UAZ_MG_RU", "CUP_O_UAZ_AGS30_RU", "CUP_O_UAZ_SPG9_RU", "CUP_O_GAZ_Vodnik_PK_RU", "CUP_O_GAZ_Vodnik_AGS_RU", "CUP_O_GAZ_Vodnik_KPVT_RU"};
        armour[] = {"CUP_O_BMP2_RU", "CUP_O_BMP3_RU", "CUP_O_T72_RU", "CUP_O_BTR90_RU", "CUP_O_GAZ_Vodnik_BPPU_RU", "CUP_O_T90_RU", "CUP_O_BTR80_GREEN_RU", "CUP_O_BTR80A_GREEN_RU"};
        th[] = {"CUP_O_Mi8AMT_RU"};
        ah[] = {"CUP_O_Ka50_DL_RU"};
    };

    class ARK_RU_CBRN {
        side = "east";
        camouflage[] = {};
        infantry[] = {"ARK_RU_CBRN_Soldier_TL_F", "ARK_RU_CBRN_Soldier_TL_F", "ARK_RU_CBRN_Soldier_F", "ARK_RU_CBRN_Soldier_F", "ARK_RU_CBRN_Soldier_LAT_F", "ARK_RU_CBRN_Soldier_AR_F", "ARK_RU_CBRN_Soldier_MG_F"};
        crewmen[] = {"ARK_RU_CBRN_Crew_F"};
        pilots[] = {"ARK_RU_CBRN_Pilot_F"};
        technicals[] = {"CUP_O_UAZ_MG_RU", "CUP_O_UAZ_MG_RU", "CUP_O_UAZ_AGS30_RU", "CUP_O_UAZ_SPG9_RU", "CUP_O_GAZ_Vodnik_PK_RU", "CUP_O_GAZ_Vodnik_AGS_RU", "CUP_O_GAZ_Vodnik_KPVT_RU"};
        armour[] = {"CUP_O_BMP2_RU", "CUP_O_BMP3_RU", "CUP_O_T72_RU", "CUP_O_BTR90_RU", "CUP_O_GAZ_Vodnik_BPPU_RU", "CUP_O_T90_RU", "CUP_O_BTR80_GREEN_RU", "CUP_O_BTR80A_GREEN_RU"};
        th[] = {"CUP_O_Mi8AMT_RU"};
        ah[] = {"CUP_O_Ka50_DL_RU"};
    };

    class AAF_WOODLAND {
        side = "resistance";
        camouflage[] = {"woodland"};
        infantry[] = {"I_Soldier_GL_F", "I_Soldier_GL_F", "I_soldier_f", "I_soldier_f", "I_soldier_AT4_F", "I_Soldier_AR_F", "I_SOldier_AR_F", "I_medic_F"};
        crewmen[] = {"I_crew_F"};
        pilots[] = {"I_helipilot_F"};
        technicals[] = {"CUP_I_LR_SF_GMG_AAF", "CUP_I_LR_SF_HMG_AAF", "CUP_I_LR_SF_HMG_AAF", "I_MRAP_03_gmg_F", "I_MRAP_03_hmg_F"};
        armour[] = {"I_LT_01_cannon_F", "I_MBT_03_cannon_F", "CUP_I_M113A3_AAF", "I_APC_tracked_03_cannon_F", "I_APC_Wheeled_03_cannon_F"};
        th[] = {"I_Heli_Transport_02_F"};
        ah[] = {"CUP_I_AH1Z_Dynamic_AAF"};
    };

    class AAF_CBRN {
        side = "resistance";
        camouflage[] = {};
        infantry[] = {"skn_i_nbc_tl", "skn_i_nbc_tl", "skn_i_nbc_rf", "skn_i_nbc_rf", "skn_i_nbc_AT4", "skn_i_nbc_AR", "skn_i_nbc_AR", "skn_i_nbc_medic"};
        crewmen[] = {"skn_i_nbc_crew"};
        pilots[] = {"skn_i_nbc_crew"};
        technicals[] = {"CUP_I_LR_SF_GMG_AAF", "CUP_I_LR_SF_HMG_AAF", "CUP_I_LR_SF_HMG_AAF", "I_MRAP_03_gmg_F", "I_MRAP_03_hmg_F"};
        armour[] = {"I_LT_01_cannon_F", "I_MBT_03_cannon_F", "CUP_I_M113A3_AAF", "I_APC_tracked_03_cannon_F", "I_APC_Wheeled_03_cannon_F"};
        th[] = {"I_Heli_Transport_02_F"};
        ah[] = {"CUP_I_AH1Z_Dynamic_AAF"};
    };

    class LDF {
        side = "resistance";
        camouflage[] = {};
        infantry[] = {"I_E_Soldier_SL_F", "I_E_Soldier_GL_F", "I_E_Soldier_F", "I_E_Soldier_F", "I_E_Soldier_AT4_F", "I_E_Soldier_AR_F", "I_E_SoldierAR_F", "I_E_RadioOperator_F", "I_E_Medic_F", "I_E_Soldier_TL_F"};
        crewmen[] = {"I_E_Crew_F"};
        pilots[] = {"I_E_Helipilot_F"};
        technicals[] = {"I_G_Offroad_01_AT_F", "I_G_Offroad_01_armed_F", "I_G_Offroad_01_armed_F"};
        armour[] = {"I_E_APC_tracked_03_cannon_F"};
        th[] = {"I_E_Heli_light_03_unarmed_F"};
        ah[] = {"I_E_Heli_light_03_dynamicLoadout_F"};
    };

    class MNP_LVM_WD {
        side = "resistance";
        camouflage[] = {"woodland"};
        infantry[] = {"MNP_Militia_Soldier_O", "MNP_Militia_Soldier_O", "MNP_Militia_Soldier_F", "MNP_Militia_Soldier_F", "MNP_Militia_Soldier_RAT", "MNP_Militia_Soldier_AR", "MNP_Militia_Soldier_MG", "MNP_Militia_Soldier_M"};
        crewmen[] = {"MNP_Militia_Soldier_F"};
        pilots[] = {"MNP_Militia_Soldier_F"};
        technicals[] = {"CUP_B_LR_MG_GB_W", "CUP_O_UAZ_MG_CHDKZ", "CUP_I_Datsun_PK", "CUP_O_UAZ_AGS30_RU", "CUP_O_UAZ_SPG9_CHDKZ", "CUP_I_Ural_ZU23_NAPA"};
        armour[] = {"CUP_O_MTLB_pk_SLA", "CUP_O_BTR60_SLA", "CUP_O_BRDM2_SLA", "CUP_I_BMP1_TK_GUE", "UP_O_BMP2_SLA", "CUP_I_T55_TK_GUE", "CUP_O_T72_SLA"};
        th[] = {"CUP_O_Mi8_SLA_2"};
        ah[] = {"CUP_O_Mi8_SLA_2"};
    };

    class MNP_LVM_DE {
        side = "resistance";
        camouflage[] = {"desert"};
        infantry[] = {"MNP_Militia_Soldier_DO", "MNP_Militia_Soldier_DO", "MNP_Militia_Soldier_DF", "MNP_Militia_Soldier_DF", "MNP_Militia_Soldier_DRAT", "MNP_Militia_Soldier_DAR", "MNP_Militia_Soldier_DMG", "MNP_Militia_Soldier_DM"};
        crewmen[] = {"MNP_Militia_Soldier_DF"};
        pilots[] = {"MNP_Militia_Soldier_DF"};
        technicals[] = {"CUP_B_LR_MG_GB_W", "CUP_O_UAZ_MG_CHDKZ", "CUP_I_Datsun_PK", "CUP_O_UAZ_AGS30_RU", "CUP_O_UAZ_SPG9_CHDKZ", "CUP_I_Ural_ZU23_NAPA"};
        armour[] = {"CUP_O_MTLB_pk_TK_MILITIA", "CUP_O_BTR60_SLA", "CUP_O_BRDM2_SLA", "CUP_I_BMP1_TK_GUE", "UP_O_BMP2_SLA", "CUP_I_T55_TK_GUE", "CUP_O_T72_SLA"};
        th[] = {"CUP_O_Mi8_SLA_2"};
        ah[] = {"CUP_O_Mi8_SLA_2"};
    };

    class MNP_IRE_WD {
        side = "resistance";
        camouflage[] = {"woodland"};
        infantry[] = {"MNP_Irish_Soldier_Officer", "MNP_Irish_Soldier_Officer", "MNP_Irish_Soldier_F", "MNP_Irish_Soldier_F", "MNP_Irish_Soldier_RAT", "MNP_Irish_Soldier_AR", "MNP_Irish_Soldier_MG", "MNP_Irish_Soldier_Medic"};
        crewmen[] = {"MNP_Irish_Soldier_F"};
        pilots[] = {"MNP_Irish_Soldier_F"};
        technicals[] = {"CUP_B_LR_Special_M2_GB_W", "CUP_B_LR_Special_M2_GB_W", "CUP_B_LR_Special_GMG_GB_W", "CUP_B_RG31_M2_OD_USMC", "CUP_B_RG31_Mk19_OD_USMC"};
        armour[] = {"CUP_B_LAV25M240_green"};
        th[] = {"CUP_B_UH1D_slick_GER_KSK_Des"};
        ah[] = {"CUP_B_UH1D_gunship_GER_KSK_Des"};
    };

    class MNP_IRE_DE {
        side = "resistance";
        camouflage[] = {"desert"};
        infantry[] = {"MNP_Irish_Soldier_DOfficer", "MNP_Irish_Soldier_DOfficer", "MNP_Irish_Soldier_D", "MNP_Irish_Soldier_D", "MNP_Irish_Soldier_DRAT", "MNP_Irish_Soldier_DAR", "MNP_Irish_Soldier_DMG", "MNP_Irish_Soldier_DMedic"};
        crewmen[] = {"MNP_Irish_Soldier_D"};
        pilots[] = {"MNP_Irish_Soldier_D"};
        technicals[] = {"CUP_B_LR_Special_GMG_GB_D", "CUP_B_LR_Special_M2_GB_D", "CUP_B_LR_Special_M2_GB_D", "CUP_B_RG31E_M2_USMC", "CUP_B_RG31_Mk19_USMC"};
        armour[] = {"CUP_B_LAV25M240_desert_USMC"};
        th[] = {"CUP_B_UH1D_slick_GER_KSK_Des"};
        ah[] = {"CUP_B_UH1D_gunship_GER_KSK_Des"};
    };

    class MNP_NZ {
        side = "resistance";
        camouflage[] = {};
        infantry[] = {"MNP_NZ_Soldier_O", "MNP_NZ_Soldier_O", "MNP_NZ_Soldier_F", "MNP_NZ_Soldier_F", "MNP_NZ_Soldier_AT", "MNP_NZ_Soldier_AR", "MNP_NZ_Soldier_MG", "MNP_NZ_Soldier_MD"};
        crewmen[] = {"MNP_NZ_Soldier_F"};
        pilots[] = {"MNP_NZ_Soldier_F"};
        technicals[] = {"I_MRAP_03_hmg_F"};
        armour[] = {"I_APC_tracked_03_cannon_F", "I_MBT_03_cannon_F"};
        th[] = {"CUP_B_UH1D_slick_GER_KSK_Des"};
        ah[] = {"CUP_B_UH1D_gunship_GER_KSK_Des"};
    };

    class MNP_FIN_WD {
        side = "resistance";
        camouflage[] = {"woodland"};
        infantry[] = {"MNP_FIN_Soldier_O", "MNP_FIN_Soldier_O", "MNP_FIN_Soldier_F", "MNP_FIN_Soldier_F", "MNP_FIN_Soldier_AT", "MNP_FIN_Soldier_AR", "MNP_FIN_Soldier_MG", "MNP_FIN_Soldier_MD"};
        crewmen[] = {"MNP_FIN_Soldier_F"};
        pilots[] = {"MNP_FIN_Soldier_F"};
        technicals[] = {"CUP_O_UAZ_MG_RU", "CUP_O_UAZ_MG_RU", "CUP_O_UAZ_AGS30_RU", "CUP_O_UAZ_SPG9_RU"};
        armour[] = {"CUP_B_MTLB_pk_CDF", "CUP_O_BRDM2_SLA", "CUP_O_BRDM2_SLA", "CUP_I_BMP1_TK_GUE", "CUP_O_BMP2_SLA", "CUP_O_T72_SLA"};
        th[] = {"CUP_O_Mi8_SLA_2"};
        ah[] = {"CUP_O_Mi8_SLA_2"};
    };

    class MNP_FIN_SN {
        side = "resistance";
        camouflage[] = {"snow"};
        infantry[] = {"MNP_AFIN_Soldier_O", "MNP_AFIN_Soldier_O", "MNP_AFIN_Soldier_F", "MNP_AFIN_Soldier_F", "MNP_AFIN_Soldier_AT", "MNP_AFIN_Soldier_AR", "MNP_AFIN_Soldier_MG", "MNP_AFIN_Soldier_MD"};
        crewmen[] = {"MNP_AFIN_Soldier_F"};
        pilots[] = {"MNP_AFIN_Soldier_F"};
        technicals[] = {"CUP_O_UAZ_MG_RU", "CUP_O_UAZ_MG_RU", "CUP_O_UAZ_AGS30_RU", "CUP_O_UAZ_SPG9_RU"};
        armour[] = {"CUP_B_MTLB_pk_Winter_CDF", "CUP_O_BRDM2_SLA", "CUP_O_BRDM2_SLA", "CUP_I_BMP1_TK_GUE", "CUP_O_BMP2_SLA", "CUP_O_T72_SLA"};
        th[] = {"CUP_O_Mi8_SLA_2"};
        ah[] = {"CUP_O_Mi8_SLA_2"};
    };

    class MNP_NOR_WD {
        side = "resistance";
        camouflage[] = {"woodland"};
        infantry[] = {"MNP_NOR_Soldier_O", "MNP_NOR_Soldier_O", "MNP_NOR_Soldier_F", "MNP_NOR_Soldier_F", "MNP_NOR_Soldier_AT", "MNP_NOR_Soldier_AR", "MNP_NOR_Soldier_MG", "MNP_NOR_Soldier_MD"};
        crewmen[] = {"MNP_NOR_Soldier_F"};
        pilots[] = {"MNP_NOR_Soldier_F"};
        technicals[] = {"ARK_M113_NOR"};
        armour[] = {"ARK_M113_NOR", "ARK_M113_NOR", "ARK_LEO2_NOR"};
        th[] = {"ARK_UH1Y_UNA_NOR"};
        ah[] = {"ARK_UH1Y_GUN_NOR"};
    };

    class MNP_NOR_DE {
        side = "resistance";
        camouflage[] = {"desert"};
        infantry[] = {"MNP_NOR_D_Soldier_O", "MNP_NOR_D_Soldier_O", "MNP_NOR_D_Soldier_F", "MNP_NOR_D_Soldier_F", "MNP_NOR_D_Soldier_AT", "MNP_NOR_D_Soldier_AR", "MNP_NOR_D_Soldier_MG", "MNP_NOR_D_Soldier_MD"};
        crewmen[] = {"MNP_NOR_D_Soldier_F"};
        pilots[] = {"MNP_NOR_D_Soldier_F"};
        technicals[] = {"ARK_M113_NOR"};
        armour[] = {"ARK_M113_NOR", "ARK_M113_NOR", "ARK_LEO2_NOR"};
        th[] = {"ARK_UH1Y_UNA_NOR"};
        ah[] = {"ARK_UH1Y_GUN_NOR"};
    };

    class CUP_RACS_DE {
        side = "resistance";
        camouflage[] = {"desert"};
        infantry[] = {"CUP_I_RACS_SL", "CUP_I_RACS_SL", "CUP_I_RACS_Soldier", "CUP_I_RACS_Soldier", "CUP_I_RACS_Soldier_LAT", "CUP_I_RACS_AR", "CUP_I_RACS_MMG", "CUP_I_RACS_Medic", "CUP_I_RACS_Officer"};
        crewmen[] = {"CUP_I_RACS_Crew"};
        pilots[] = {"CUP_I_RACS_Pilot"};
        technicals[] = {"CUP_I_LR_MG_RACS"};
        armour[] = {"CUP_I_M113A1_RACS", "CUP_I_LAV25M240_RACS", "CUP_I_AAV_RACS", "CUP_I_M60A3_TTS_RACS", "CUP_B_M1A2SEP_RACS", "CUP_B_M1A2SEP_TUSK_RACS"};
        th[] = {"CUP_I_UH60L_RACS"};
        ah[] = {"CUP_I_AH6J_RACS"};
    };

    class CUP_RACS_WD {
        side = "resistance";
        camouflage[] = {"woodland"};
        infantry[] = {"CUP_I_RACS_SL_wdl", "CUP_I_RACS_SL_wdl", "CUP_I_RACS_Soldier_wdl", "CUP_I_RACS_Soldier_wdl", "CUP_I_RACS_Soldier_LAT_wdl", "CUP_I_RACS_AR_wdl", "CUP_I_RACS_MMG_wdl", "CUP_I_RACS_Medic_wdl", "CUP_I_RACS_Officer_wdl"};
        crewmen[] = {"CUP_I_RACS_Crew"};
        pilots[] = {"CUP_I_RACS_Pilot"};
        technicals[] = {"CUP_I_LR_MG_RACS"};
        armour[] = {"CUP_I_M113A1_RACS", "CUP_I_LAV25M240_RACS", "CUP_I_AAV_RACS", "CUP_I_M60A3_TTS_RACS", "CUP_B_M1A2SEP_RACS", "CUP_B_M1A2SEP_TUSK_RACS"};
        th[] = {"CUP_I_UH60L_RACS"};
        ah[] = {"CUP_I_AH6J_RACS"};
    };

    class CUP_TK_LOC {
        side = "resistance";
        camouflage[] = {"desert"};
        infantry[] = {"CUP_I_TK_GUE_Soldier_GL", "CUP_I_TK_GUE_Soldier_GL", "CUP_I_TK_GUE_Soldier_M16A2", "CUP_I_TK_GUE_Soldier", "CUP_I_TK_GUE_Soldier_AT", "CUP_I_TK_GUE_Soldier_AR", "CUP_I_TK_GUE_Soldier_MG", "CUP_I_TK_GUE_Guerilla_Medic", "CUP_I_TK_GUE_Commander"};
        crewmen[] = {"CUP_I_TK_GUE_Mechanic"};
        pilots[] = {"CUP_I_TK_GUE_Mechanic"};
        technicals[] = {"CUP_I_Hilux_AGS30_TK", "CUP_I_Hilux_DSHKM_TK", "CUP_I_Hilux_SPG9_TK", "CUP_I_Hilux_zu23_TK", "CUP_I_BTR40_MG_TKG", "CUP_I_Hilux_armored_AGS30_TK", "CUP_I_Hilux_armored_DSHKM_TK", "CUP_I_Hilux_armored_SPG9_TK", "CUP_I_Hilux_armored_zu23_TK"};
        armour[] = {"CUP_I_Hilux_armored_BMP1_TK", "CUP_I_Hilux_armored_BTR60_TK", "CUP_I_BMP1_TK_GUE", "CUP_I_BRDM2_TK_Gue", "CUP_I_T34_TK_GUE", "CUP_I_T55_TK_GUE"};
        th[] = {"CUP_I_UH1H_slick_TK_GUE"};
        ah[] = {"CUP_I_UH1H_gunship_TK_GUE"};
    };

    class CUP_NAPA_WD {
        side = "resistance";
        camouflage[] = {"woodland"};
        infantry[] = {"CUP_I_GUE_Soldier_GL", "CUP_I_GUE_Soldier_GL", "CUP_I_GUE_Soldier_AKS74", "CUP_I_GUE_Soldier_AKM", "CUP_I_GUE_Soldier_LAT", "CUP_I_GUE_Soldier_AR", "CUP_I_GUE_Soldier_MG", "CUP_I_GUE_Medic", "CUP_I_GUE_Commander"};
        crewmen[] = {"CUP_I_GUE_Crew"};
        pilots[] = {"CUP_I_GUE_Pilot"};
        technicals[] = {"CUP_I_Datsun_PK_Random", "CUP_I_Datsun_PK_Random", "CUP_I_BRDM2_HQ_NAPA", "CUP_I_BTR40_MG_TKG", "CUP_I_BTR40_MG_TKG", "CUP_I_Ural_ZU23_NAPA"};
        armour[] = {"CUP_I_MTLB_pk_NAPA", "CUP_I_BMP2_NAPA", "CUP_I_BRDM2_NAPA", "CUP_I_T34_NAPA", "CUP_I_T55_NAPA", "CUP_I_T72_NAPA"};
        th[] = {"CUP_I_UH1H_slick_TK_GUE"};
        ah[] = {"CUP_I_UH1H_gunship_TK_GUE"};
    };

    class SYND_BANDIT {
        side = "resistance";
        camouflage[] = {"desert"};
        infantry[] = {"I_C_Soldier_Bandit_6_F_ARK", "I_C_Soldier_Bandit_8_F_ARK", "I_C_Soldier_Bandit_5_F_ARK", "I_C_Soldier_Bandit_4_F_ARK", "I_C_Soldier_Bandit_2_F_ARK", "I_C_Soldier_Bandit_7_F_ARK", "I_C_Soldier_Bandit_3_F_ARK"};
        crewmen[] = {"I_C_Soldier_Bandit_4_F_ARK"};
        pilots[] = {"I_C_Pilot_F_ARK"};
        technicals[] = {"CUP_I_Hilux_AGS30_TK", "CUP_I_Hilux_DSHKM_TK", "CUP_I_Hilux_SPG9_TK", "CUP_I_Hilux_zu23_TK", "CUP_I_BTR40_MG_TKG", "CUP_I_Hilux_armored_AGS30_TK", "CUP_I_Hilux_armored_DSHKM_TK", "CUP_I_Hilux_armored_SPG9_TK", "CUP_I_Hilux_armored_zu23_TK"};
        armour[] = {"CUP_I_Hilux_armored_BMP1_TK", "CUP_I_Hilux_armored_BTR60_TK", "CUP_I_BMP1_TK_GUE", "CUP_I_BRDM2_TK_Gue", "CUP_I_T34_TK_GUE", "CUP_I_T55_TK_GUE"};
        th[] = {"CUP_I_UH1H_slick_TK_GUE"};
        ah[] = {"CUP_I_UH1H_gunship_TK_GUE"};
    };

    class SYND_REBEL {
        side = "resistance";
        camouflage[] = {"desert"};
        infantry[] = {"I_C_Soldier_Para_2_F_ARK", "I_C_Soldier_Para_2_F_ARK", "I_C_Soldier_Para_6_F_ARK", "I_C_Soldier_Para_6_F_ARK", "I_C_Soldier_Para_1_F_ARK", "I_C_Soldier_Para_4_F_ARK", "I_C_Soldier_Para_7_F_ARK"};
        crewmen[] = {"I_C_Soldier_Para_6_F_ARK"};
        pilots[] = {"I_C_Helipilot_F_ARK"};
        technicals[] = {"CUP_I_Hilux_AGS30_TK", "CUP_I_Hilux_DSHKM_TK", "CUP_I_Hilux_SPG9_TK", "CUP_I_Hilux_zu23_TK", "CUP_I_BTR40_MG_TKG", "CUP_I_Hilux_armored_AGS30_TK", "CUP_I_Hilux_armored_DSHKM_TK", "CUP_I_Hilux_armored_SPG9_TK", "CUP_I_Hilux_armored_zu23_TK"};
        armour[] = {"CUP_I_Hilux_armored_BMP1_TK", "CUP_I_Hilux_armored_BTR60_TK", "CUP_O_BMP2_SLA", "CUP_O_T55_SLA", "CUP_I_T34_NAPA", "CUP_I_MTLB_pk_SYNDIKAT"};
        th[] = {"CUP_I_UH1H_slick_TK_GUE"};
        ah[] = {"CUP_I_UH1H_gunship_TK_GUE"};
    };

    class CUP_CDF_DES {
        side = "west";
        camouflage[] = {"desert"};
        infantry[] = {"CUP_B_CDF_Soldier_GL_DST", "CUP_B_CDF_Soldier_GL_DST", "CUP_B_CDF_Soldier_DST", "CUP_B_CDF_Soldier_DST", "CUP_B_CDF_Soldier_RPG18_DST", "CUP_B_CDF_Soldier_AR_DST", "CUP_B_CDF_Soldier_MG_DST", "CUP_B_CDF_Medic_DST", "CUP_B_CDF_Officer_DST"};
        crewmen[] = {"CUP_B_CDF_Crew_DST"};
        pilots[] = {"CUP_B_CDF_Pilot_DST"};
        technicals[] = {"CUP_B_UAZ_MG_CDF", "CUP_B_UAZ_MG_CDF", "CUP_B_UAZ_AGS30_CDF", "CUP_B_UAZ_SPG9_CDF"};
        armour[] = {"CUP_B_MTLB_pk_CDF", "CUP_B_BRDM2_CDF", "CUP_B_BTR60_CDF", "CUP_B_BMP2_CDF", "CUP_B_T72_CDF", "CUP_B_T72_CDF", "CUP_B_BTR80_CDF", "CUP_B_BTR80A_CDF"};
        th[] = {"CUP_B_Mi17_CDF"};
        ah[] = {"CUP_B_Mi24_D_Dynamic_CDF"};
    };

    class CUP_CDF_FOR {
        side = "west";
        camouflage[] = {"woodland"};
        infantry[] = {"CUP_B_CDF_Soldier_GL_FST", "CUP_B_CDF_Soldier_GL_FST", "CUP_B_CDF_Soldier_FST", "CUP_B_CDF_Soldier_FST", "CUP_B_CDF_Soldier_RPG18_FST", "CUP_B_CDF_Soldier_AR_FST", "CUP_B_CDF_Soldier_MG_FST", "CUP_B_CDF_Medic_FST", "CUP_B_CDF_Officer_FST"};
        crewmen[] = {"CUP_B_CDF_Crew_FST"};
        pilots[] = {"CUP_B_CDF_Pilot_FST"};
        technicals[] = {"CUP_B_UAZ_MG_CDF", "CUP_B_UAZ_MG_CDF", "CUP_B_UAZ_AGS30_CDF", "CUP_B_UAZ_SPG9_CDF"};
        armour[] = {"CUP_B_MTLB_pk_CDF", "CUP_B_BRDM2_CDF", "CUP_B_BTR60_CDF", "CUP_B_BMP2_CDF", "CUP_B_T72_CDF", "CUP_B_T72_CDF", "CUP_B_BTR80_CDF", "CUP_B_BTR80A_CDF"};
        th[] = {"CUP_B_Mi17_CDF"};
        ah[] = {"CUP_B_Mi24_D_Dynamic_CDF"};
    };

    class CUP_CDF_MOU {
        side = "west";
        camouflage[] = {"desert", "woodland"};
        infantry[] = {"CUP_B_CDF_Soldier_GL_MNT", "CUP_B_CDF_Soldier_GL_MNT", "CUP_B_CDF_Soldier_MNT", "CUP_B_CDF_Soldier_MNT", "CUP_B_CDF_Soldier_RPG18_MNT", "CUP_B_CDF_Soldier_AR_MNT", "CUP_B_CDF_Soldier_MG_MNT", "CUP_B_CDF_Medic_MNT", "CUP_B_CDF_Officer_MNT"};
        crewmen[] = {"CUP_B_CDF_Crew_MNT"};
        pilots[] = {"CUP_B_CDF_Pilot_MNT"};
        technicals[] = {"CUP_B_UAZ_MG_CDF", "CUP_B_UAZ_MG_CDF", "CUP_B_UAZ_AGS30_CDF", "CUP_B_UAZ_SPG9_CDF"};
        armour[] = {"CUP_B_MTLB_pk_CDF", "CUP_B_BRDM2_CDF", "CUP_B_BTR60_CDF", "CUP_B_BMP2_CDF", "CUP_B_T72_CDF", "CUP_B_T72_CDF", "CUP_B_BTR80_CDF", "CUP_B_BTR80A_CDF"};
        th[] = {"CUP_B_Mi17_CDF"};
        ah[] = {"CUP_B_Mi24_D_Dynamic_CDF"};
    };

    class GMX_CDF {
        side = "west";
        camouflage[] = {"woodland"};
        infantry[] = {"gmx_cdf_army_squadleader_ak74_ttsko", "gmx_cdf_army_squadleader_ak74_ttsko", "gmx_cdf_army_rifleman_ak74_ttsko", "gmx_cdf_army_rifleman_ak74_ttsko", "gmx_cdf_army_antitank_ak74_rpg7_ttsko", "gmx_cdf_army_machinegunner_rpk_ttsko", "gmx_cdf_army_machinegunner_pk_ttsko", "gmx_cdf_army_medic_ak74_ttsko", "gmx_cdf_army_radioman_ak74_ttsko"};
        crewmen[] = {"gmx_cdf_army_crew_ak74_ttsko"};
        pilots[] = {"gmx_cdf_army_pilot_pm63_ttsko"};
        technicals[] = {"gmx_cdf_uaz469_dshkm_wdl", "gmx_cdf_uaz469_dshkm_wdl", "gmx_cdf_uaz469_spg9_wdl"};
        armour[] = {"gmx_cdf_brdm2_wdl", "gmx_cdf_btr60pb_wdl", "gmx_cdf_bmp1sp2_wdl", "gmx_cdf_pt76b_wdl", "gmx_cdf_t55_wdl", "gmx_cdf_t55a_wdl", "gmx_cdf_t55am2_wdl", "gmx_cdf_t55am2b_wdl"};
        th[] = {"gmx_cdf_mi2t_wdl"};
        ah[] = {"gmx_cdf_mi2urn_wdl"};
    };

    class GMX_CDF_2022 {
        side = "west";
        camouflage[] = {"woodland"};
        infantry[] = {"gmx_cdf2022_army_squadleader_trg21_digittsko", "gmx_cdf2022_army_squadleader_trg21_digittsko", "gmx_cdf2022_army_rifleman_trg21_digittsko", "gmx_cdf2022_army_rifleman_trg21_digittsko", "gmx_cdf2022_army_antitank_trg21_pzf3_digittsko", "gmx_cdf2022_army_machinegunner_pk_digittsko", "gmx_cdf2022_army_medic_trg21_digittsko", "gmx_cdf2022_army_radioman_trg21_digittsko"};
        crewmen[] = {"gmx_cdf2022_army_crew_trg21_digittsko"};
        pilots[] = {"gmx_cdf2022_army_pilot_smg_02_digittsko"};
        technicals[] = {"gmx_cdf2022_uaz469_dshkm_wdl", "gmx_cdf2022_uaz469_dshkm_wdl", "gmx_cdf2022_uaz469_spg9_wdl"};
        armour[] = {"gmx_cdf2022_brdm2_wdl", "gmx_cdf2022_btr60pb_wdl", "gmx_cdf2022_bmp1sp2_wdl", "gmx_cdf2022_marder1a2_wdl", "gmx_cdf2022_pt76b_wdl", "gmx_cdf2022_kpz1a5_wdl", "gmx_cdf2022_t55am2b_wdl", "gmx_cdf2022_t55am2_wdl"};
        th[] = {"gmx_cdf2022_mi2t_wdl"};
        ah[] = {"gmx_cdf2022_mi2urn_wdl"};
    };

    class GMX_CDF_OREL {
        side = "west";
        camouflage[] = {""};
        infantry[] = {"gmx_cdf2022_orel_squadleader_mp5a2_blu", "gmx_cdf2022_orel_squadleader_mp5a2_blu", "gmx_cdf2022_orel_rifleman_mp5a2_blu", "gmx_cdf2022_orel_rifleman_mp5a2_blu", "gmx_cdf2022_paramilitary_antitank_mp5a2_pzf84_blu", "gmx_cdf2022_paramilitary_machinegunner_pk_blu", "gmx_cdf2022_orel_radioman_mp5a2_blu", "gmx_cdf2022_orel_grenadier_hk69a1_blu"};
        crewmen[] = {"gmx_cdf2022_orel_rifleman_mp5a2_blu"};
        pilots[] = {"gmx_cdf2022_orel_rifleman_mp5a2_blu"};
        technicals[] = {"gmx_cdf2022_brdm2_wdl"};
        armour[] = {"gmx_cdf2022_btr60pb_wdl"};
        th[] = {"gmx_cdf2022_mi2t_wdl"};
        ah[] = {"gmx_cdf2022_mi2urn_wdl"};
    };

    class GMX_CDF_NG {
        side = "west";
        camouflage[] = {""};
        infantry[] = {"gmx_cdf2022_paramilitary_squadleader_m16a2_oli", "gmx_cdf2022_paramilitary_squadleader_m16a2_oli", "gmx_cdf2022_paramilitary_rifleman_m16a2_oli", "gmx_cdf2022_paramilitary_rifleman_m16a2_oli", "gmx_cdf2022_paramilitary_antitank_m16a2_pzf84_oli", "gmx_cdf2022_paramilitary_machinegunner_pk_oli", "gmx_cdf2022_paramilitary_medic_m16a2_oli", "gmx_cdf2022_paramilitary_radioman_m16a2_oli"};
        crewmen[] = {"gmx_cdf2022_army_crew_trg21_digittsko"};
        pilots[] = {"gmx_cdf2022_army_pilot_smg_02_digittsko"};
        technicals[] = {"gmx_cdf2022_uaz469_dshkm_wdl", "gmx_cdf2022_uaz469_dshkm_wdl", "gmx_cdf2022_uaz469_spg9_wdl"};
        armour[] = {"gmx_cdf2022_brdm2_wdl", "gmx_cdf2022_btr60pb_wdl", "gmx_cdf2022_bmp1sp2_wdl", "gmx_cdf2022_marder1a2_wdl", "gmx_cdf2022_pt76b_wdl", "gmx_cdf2022_kpz1a5_wdl", "gmx_cdf2022_t55am2b_wdl", "gmx_cdf2022_t55am2_wdl"};
        th[] = {"gmx_cdf2022_mi2t_wdl"};
        ah[] = {"gmx_cdf2022_mi2urn_wdl"};
    };

    class CUP_CDF_SN {
        side = "west";
        camouflage[] = {"snow"};
        infantry[] = {"CUP_B_CDF_Soldier_GL_SNW", "CUP_B_CDF_Soldier_GL_SNW", "CUP_B_CDF_Soldier_SNW", "CUP_B_CDF_Soldier_SNW", "CUP_B_CDF_Soldier_RPG18_SNW", "CUP_B_CDF_Soldier_AR_SNW", "CUP_B_CDF_Soldier_MG_SNW", "CUP_B_CDF_Medic_SNW", "CUP_B_CDF_Officer_SNW"};
        crewmen[] = {"CUP_B_CDF_Crew_SNW"};
        pilots[] = {"CUP_B_CDF_Pilot_SNW"};
        technicals[] = {"CUP_B_UAZ_MG_CDF", "CUP_B_UAZ_MG_CDF", "CUP_B_UAZ_MG_CDF", "CUP_B_UAZ_AGS30_CDF", "CUP_B_UAZ_SPG9_CDF"};
        armour[] = {"CUP_B_MTLB_pk_Winter_CDF", "CUP_B_BRDM2_CDF", "CUP_B_BTR60_CDF", "CUP_B_BMP2_CDF", "CUP_B_T72_CDF", "CUP_B_T72_CDF", "CUP_B_BTR80_CDF", "CUP_B_BTR80A_CDF"};
        th[] = {"CUP_B_Mi17_CDF"};
        ah[] = {"CUP_B_Mi24_D_Dynamic_CDF"};
    };

    class CUP_CDF_UN_DES {
        side = "resistance";
        camouflage[] = {"desert"};
        infantry[] = {"CUP_I_UN_CDF_Soldier_GL_DST", "CUP_I_UN_CDF_Soldier_GL_DST", "CUP_I_UN_CDF_Soldier_DST", "CUP_I_UN_CDF_Soldier_Backpack_DST", "CUP_I_UN_CDF_Soldier_LAT_DST", "CUP_I_UN_CDF_SOldier_AR_DST", "CUP_I_UN_CDF_Soldier_MG_DST"};
        crewmen[] = {"CUP_I_UN_CDF_Crew_DST"};
        pilots[] = {"CUP_I_UN_CDF_Pilot_DST"};
        technicals[] = {"CUP_I_UAZ_MG_UN", "CUP_I_UAZ_MG_UN", "CUP_I_UAZ_MG_UN", "CUP_I_UAZ_AGS30_UN", "CUP_I_UAZ_SPG9_UN"};
        armour[] = {"CUP_I_BRDM2_UN", "CUP_I_BTR60_UN", "CUP_I_BTR80_UN", "CUP_I_BTR80A_UN", "CUP_I_MTLB_pk_UN", "CUP_I_M113A3_UN", "CUP_I_BMP2_UN"};
        th[] = {"CUP_I_Mi17_UN"};
        ah[] = {"CUP_I_Mi24_D_Dynamic_UN"};
    };

    class CUP_CDF_UN_FOR {
        side = "resistance";
        camouflage[] = {"woodland"};
        infantry[] = {"CUP_I_UN_CDF_Soldier_GL_FST", "CUP_I_UN_CDF_Soldier_GL_FST", "CUP_I_UN_CDF_Soldier_FST", "CUP_I_UN_CDF_Soldier_Backpack_FST", "CUP_I_UN_CDF_Soldier_LAT_FST", "CUP_I_UN_CDF_SOldier_AR_FST", "CUP_I_UN_CDF_Soldier_MG_FST"};
        crewmen[] = {"CUP_I_UN_CDF_Crew_FST"};
        pilots[] = {"CUP_I_UN_CDF_Pilot_FST"};
        technicals[] = {"CUP_I_UAZ_MG_UN", "CUP_I_UAZ_MG_UN", "CUP_I_UAZ_MG_UN", "CUP_I_UAZ_AGS30_UN", "CUP_I_UAZ_SPG9_UN"};
        armour[] = {"CUP_I_BRDM2_UN", "CUP_I_BTR60_UN", "CUP_I_BTR80_UN", "CUP_I_BTR80A_UN", "CUP_I_MTLB_pk_UN", "CUP_I_M113A3_UN", "CUP_I_BMP2_UN"};
        th[] = {"CUP_I_Mi17_UN"};
        ah[] = {"CUP_I_Mi24_D_Dynamic_UN"};
    };

    class CUP_CDF_UN_MOU {
        side = "resistance";
        camouflage[] = {"woodland", "desert"};
        infantry[] = {"CUP_I_UN_CDF_Soldier_GL_MNT", "CUP_I_UN_CDF_Soldier_GL_MNT", "CUP_I_UN_CDF_Soldier_MNT", "CUP_I_UN_CDF_Soldier_Backpack_MNT", "CUP_I_UN_CDF_Soldier_LAT_MNT", "CUP_I_UN_CDF_SOldier_AR_MNT", "CUP_I_UN_CDF_Soldier_MG_MNT"};
        crewmen[] = {"CUP_I_UN_CDF_Crew_MNT"};
        pilots[] = {"CUP_I_UN_CDF_Pilot_MNT"};
        technicals[] = {"CUP_I_UAZ_MG_UN", "CUP_I_UAZ_MG_UN", "CUP_I_UAZ_MG_UN", "CUP_I_UAZ_AGS30_UN", "CUP_I_UAZ_SPG9_UN"};
        armour[] = {"CUP_I_BRDM2_UN", "CUP_I_BTR60_UN", "CUP_I_BTR80_UN", "CUP_I_BTR80A_UN", "CUP_I_MTLB_pk_UN", "CUP_I_M113A3_UN", "CUP_I_BMP2_UN"};
        th[] = {"CUP_I_Mi17_UN"};
        ah[] = {"CUP_I_Mi24_D_Dynamic_UN"};
    };

    class CUP_RACS_MECH {
        side = "resistance";
        camouflage[] = {"woodland"};
        infantry[] = {"CUP_I_RACS_SL_Mech", "CUP_I_RACS_SL_Mech", "CUP_I_RACS_Soldier_Mech", "CUP_I_RACS_Soldier_Mech", "CUP_I_RACS_Soldier_LAT_Mech", "CUP_I_RACS_AR_Mech", "CUP_I_RACS_MMG_Mech", "CUP_I_RACS_Medic_Mech", "CUP_I_RACS_Officer_Mech"};
        crewmen[] = {"CUP_I_RACS_Crew"};
        pilots[] = {"CUP_I_RACS_Pilot"};
        technicals[] = {"CUP_I_LR_MG_RACS"};
        armour[] = {"CUP_I_M113A1_RACS", "CUP_I_LAV25M240_RACS", "CUP_I_AAV_RACS", "CUP_I_M60A3_TTS_RACS", "CUP_B_M1A2SEP_RACS", "CUP_B_M1A2SEP_TUSK_RACS"};
        th[] = {"CUP_I_UH60L_RACS"};
        ah[] = {"CUP_I_AH6J_RACS"};
    };

    class CUP_RACS_URB {
        side = "resistance";
        camouflage[] = {"desert"};
        infantry[] = {"CUP_I_RACS_SL_Urban", "CUP_I_RACS_SL_Urban", "CUP_I_RACS_Soldier_Urban", "CUP_I_RACS_Soldier_Urban", "CUP_I_RACS_Soldier_LAT_Urban", "CUP_I_RACS_AR_Urban", "CUP_I_RACS_MMG_Urban", "CUP_I_RACS_Medic_Urban", "CUP_I_RACS_Officer_Urban"};
        crewmen[] = {"CUP_I_RACS_Crew"};
        pilots[] = {"CUP_I_RACS_Pilot"};
        technicals[] = {"CUP_I_LR_MG_RACS"};
        armour[] = {"CUP_I_M113A1_RACS_URB", "CUP_I_LAV25M240_RACS", "CUP_I_AAV_RACS", "CUP_I_M60A3_TTS_RACS", "CUP_B_M1A2SEP_RACS", "CUP_B_M1A2SEP_TUSK_RACS"};
        th[] = {"CUP_I_UH60L_RACS"};
        ah[] = {"CUP_I_AH6J_RACS"};
    };

    class CUP_SLA_DE {
        side = "east";
        camouflage[] = {"desert"};
        infantry[] = {"CUP_O_sla_Soldier_GL_desert", "CUP_O_sla_Soldier_GL_desert", "CUP_O_sla_soldier_desert", "CUP_O_SLA_Soldier_Backpack_desert", "CUP_O_sla_Soldier_LAT_desert", "CUP_O_sla_Soldier_AR_desert", "CUP_O_sla_Soldier_MG_desert", "CUP_O_sla_Medic_Desert", "CUP_O_sla_Officer_desert"};
        crewmen[] = {"CUP_O_sla_Crew"};
        pilots[] = {"CUP_O_sla_Pilot"};
        technicals[] = {"CUP_O_UAZ_MG_SLA", "CUP_O_UAZ_MG_SLA", "CUP_O_UAZ_AGS30_SLA", "CUP_O_UAZ_SPG9_SLA"};
        armour[] = {"CUP_O_MTLB_pk_SLA", "CUP_O_BTR60_SLA", "CUP_O_BRDM2_SLA", "CUP_O_T55_SLA", "CUP_I_BMP1_TK_GUE", "CUP_O_BMP2_SLA", "CUP_O_T72_SLA", "CUP_O_BTR80_SLA", "CUP_O_BTR80A_SLA"};
        th[] = {"CUP_O_Mi8_SLA_1"};
        ah[] = {"CUP_O_Mi24_D_SLA"};
    };

    class CUP_USMC_FROG_WD {
        side = "west";
        camouflage[] = {"woodland"};
        infantry[] = {"CUP_B_USMC_Soldier_GL_FROG_WDL", "CUP_B_USMC_Soldier_GL_FROG_WDL", "CUP_B_USMC_Soldier_FROG_WDL", "CUP_B_USMC_Soldier_FROG_WDL", "CUP_B_USMC_Soldier_LAT_FROG_WDL", "CUP_B_USMC_Soldier_AR_FROG_WDL", "CUP_B_USMC_Soldier_MG_FROG_WDL", "CUP_B_USMC_Medic_FROG_WDL", "CUP_B_USMC_Officer_FROG_WDL"};
        crewmen[] = {"CUP_B_USMC_Crewman_FROG_WDL"};
        pilots[] = {"CUP_B_USMC_Pilot"};
        technicals[] = {"CUP_B_nM1025_M2_USA_WDL", "CUP_B_nM1025_M2_USA_WDL", "CUP_B_nM1025_M240_USA_WDL", "CUP_B_nM1025_Mk19_USA_WDL", "CUP_B_RG31_M2_OD_USMC", "CUP_B_RG31_Mk19_OD_USMC"};
        armour[] = {"CUP_B_LAV25M240_USMC", "CUP_B_AAV_USMC", "CUP_B_M1A1FEP_Woodland_USMC", "CUP_B_M1A1EP_TUSK_Woodland_USMC"};
        th[] = {"CUP_B_UH60S_USN"};
        ah[] = {"CUP_B_AH1Z_Dynamic_USMC"};
    };

    class CUP_USMC_FROG_DE {
        side = "west";
        camouflage[] = {"desert"};
        infantry[] = {"CUP_B_USMC_Soldier_GL_FROG_DES", "CUP_B_USMC_Soldier_GL_FROG_DES", "CUP_B_USMC_Soldier_FROG_DES", "CUP_B_USMC_Soldier_FROG_DES", "CUP_B_USMC_Soldier_LAT_FROG_DES", "CUP_B_USMC_Soldier_AR_FROG_DES", "CUP_B_USMC_Soldier_MG_FROG_DES", "CUP_B_USMC_Medic_FROG_DES", "CUP_B_USMC_Officer_FROG_DES"};
        crewmen[] = {"CUP_B_USMC_Crewman_FROG_DES"};
        pilots[] = {"CUP_B_USMC_Pilot"};
        technicals[] = {"CUP_B_nm1025_M2_USA_DES", "CUP_B_nm1025_Mk19_USA_DES", "CUP_B_RG31_M2_USMC", "CUP_B_RG31_Mk19_USMC"};
        armour[] = {"CUP_B_LAV25M240_desert_USMC", "CUP_B_AAV_USMC", "CUP_B_M1A1FEP_Desert_USMC", "CUP_B_M1A1FEP_TUSK_Desert_USMC"};
        th[] = {"CUP_B_UH60S_USN"};
        ah[] = {"CUP_B_AH1Z_Dynamic_USMC"};
    };

    class CUP_ION_PMC {
        side = "resistance";
        camouflage[] = {"woodland", "desert"};
        infantry[] = {"CUP_I_PMC_Soldier_GL_M16A2", "CUP_I_PMC_Soldier_GL_M16A2", "CUP_I_PMC_Soldier_M4A3", "CUP_I_PMC_Contractor2", "CUP_I_PMC_Soldier_AT", "CUP_I_PMC_Soldier_MG_PKM", "CUP_I_PMC_Soldier_MG_PKM"};
        crewmen[] = {"CUP_I_PMC_Bodyguard_M4"};
        pilots[] = {"CUP_I_PMC_Bodyguard_M4"};
        technicals[] = {"CUP_I_LSV_02_Minigun_ION", "CUP_I_4WD_AT_ION", "CUP_I_4WD_LMG_ION", "CUP_I_RG31_M2_ION", "CUP_I_RG31_Mk19_ION"};
        armour[] = {"CUP_I_FENNEK_GMG_ION", "CUP_I_FENNEK_HMG_ION", "CUP_I_MATV_GMG_ION", "CUP_I_MATV_HMG_ION", "CUP_I_BTR80_ION", "CUP_I_BTR80A_ION"};
        th[] = {"CUP_I_Ka60_GL_Blk_ION"};
        ah[] = {"CUP_I_Mi24_Mk4_AT_ION"};
    };

    class CUP_ION_PMC_SN {
        side = "resistance";
        camouflage[] = {"snow"};
        infantry[] = {"CUP_I_PMC_Winter_Soldier_GL", "CUP_I_PMC_Winter_Soldier_GL", "CUP_I_PMC_Winter_Soldier", "CUP_I_PMC_Winter_Soldier", "CUP_I_PMC_Winter_Soldier_AT", "CUP_I_PMC_Winter_Soldier_MG", "CUP_I_PMC_Winter_Soldier_MG_PKM", "CUP_I_PMC_Winter_Medic"};
        crewmen[] = {"CUP_I_PMC_Winter_Crew"};
        pilots[] = {"CUP_I_PMC_Winter_Pilot"};
        technicals[] = {"CUP_I_LSV_02_Minigun_ION", "CUP_I_4WD_AT_ION", "CUP_I_4WD_LMG_ION", "CUP_I_RG31_M2_W_ION", "CUP_I_RG31_Mk19_W_ION"};
        armour[] = {"CUP_I_FENNEK_GMG_ION", "CUP_I_FENNEK_HMG_ION", "CUP_I_MATV_GMG_ION", "CUP_I_MATV_HMG_ION", "CUP_I_BTR80_ION", "CUP_I_BTR80A_ION"};
        th[] = {"CUP_I_Ka60_GL_Blk_ION"};
        ah[] = {"CUP_I_Mi24_Mk4_AT_ION"};
    };

    class FOW_USMC {
        side = "resistance";
        camouflage[] = {};
        infantry[] = {"fow_s_usmc_teamleader", "fow_s_usmc_rifleman_m1903", "fow_s_usmc_rifleman", "fow_s_usmc_rifleman", "fow_s_usmc_rifleman", "fow_s_usmc_rifleman_m1_carbine", "fow_s_usmc_rifleman_m1_carbine", "fow_s_usmc_nco", "fow_s_usmc_officer", "fow_s_usmc_m1919a6_gunner", "fow_s_usmc_m1919a6_asst", "fow_s_usmc_bar_gunner", "fow_s_usmc_bar_gunner_asst", "fow_s_usmc_at", "fow_s_usmc_at_asst"};
        crewmen[] = {"fow_s_usmc_crewman", "fow_s_usmc_crewman"};
        pilots[] = {"fow_s_us_pilot"};
        technicals[] = {"LIB_US_Scout_M3_FFV", "LIB_US_Scout_M3_FFV", "LIB_M8_Greyhound", "LIB_US_M3_Halftrack", "LIB_US_M3_Halftrack"};
        armour[] = {"LIB_M3A3_Stuart", "LIB_M4A3_75_Tubes", "LIB_M5A1_Stuart", "LIB_M4A3_75"};
        th[] = {"LIB_C47_Skytrain"};
        ah[] = {"LIB_P47"};
    };

    class FOW_USA {
        side = "resistance";
        camouflage[] = {};
        infantry[] = {"fow_s_us_m37_smg_m3", "fow_s_us_m37_smg_m1a1", "fow_s_us_m37_teamleader_asst", "fow_s_us_m37_teamleader", "fow_s_us_m37_rifleman_scout", "fow_s_us_m37_rifleman_m1_carbine", "fow_s_us_m37_rifleman_gl", "fow_s_us_m37_rifleman", "fow_s_us_m37_radio_operator", "fow_s_us_m37_officer", "fow_s_us_m37_nco", "fow_s_us_m37_m1919a6_gunner", "fow_s_us_m37_1919a6_asst", "fow_s_us_m37_bar_gunner", "fow_s_us_m37_bar_asst", "fow_s_us_m37_at", "fow_s_us_m37_at_asst"};
        crewmen[] = {"fow_s_us_crewman", "fow_s_us_crewman"};
        pilots[] = {"fow_s_us_pilot_green"};
        technicals[] = {"LIB_US_Scout_M3_FFV", "LIB_US_Scout_M3_FFV", "LIB_M8_Greyhound", "LIB_US_M3_Halftrack", "LIB_US_M3_Halftrack"};
        armour[] = {"LIB_M3A3_Stuart", "LIB_M4A3_76", "LIB_M5A1_Stuart", "LIB_M4A3_75", "LIB_M4A3_76_HVSS"};
        th[] = {"LIB_C47_Skytrain"};
        ah[] = {"LIB_P47"};
    };

    class IF44_USA_NA {
        side = "resistance";
        camouflage[] = {};
        infantry[] = {"LIB_US_NAC_smgunner", "LIB_US_NAC_Captain", "LIB_US_NAC_first_lieutenant", "LIB_US_NAC_second_lieutenant", "LIB_US_NAC_radioman", "LIB_US_NAC_corporal", "LIB_US_NAC_rifleman", "LIB_US_NAC_medic", "LIB_US_NAC_mgunner", "LIB_US_NAC_grenadier", "LIB_US_NAC_AT_soldier"};
        crewmen[] = {"LIB_US_Tank_Sergeant", "LIB_US_Tank_Crew"};
        pilots[] = {"LIB_US_Pilot"};
        technicals[] = {"LIB_US_NAC_Scout_M3", "LIB_US_NAC_Scout_M3_FFV", "LIB_US_NAC_M3_Halftrack"};
        armour[] = {"LIB_US_NAC_M4A3_75"};
        th[] = {"LIB_C47_Skytrain"};
        ah[] = {"LIB_US_NAC_P39"};
    };

    class IF44_USA_SN {
        side = "resistance";
        camouflage[] = {};
        infantry[] = {"LIB_US_Smgunner_w", "LIB_US_Second_lieutenant_w", "LIB_US_First_lieutenant_w", "LIB_US_Captain_w", "LIB_US_Rifleman_w", "LIB_US_FC_rifleman_w", "LIB_US_Corporal_w", "LIB_US_Radioman_w", "LIB_US_Medic_w", "LIB_US_Mgunner_w", "LIB_US_Grenadier_W", "LIB_US_AT_soldier_w"};
        crewmen[] = {"LIB_US_Tank_Sergeant", "LIB_US_Tank_Crew"};
        pilots[] = {"LIB_US_Pilot"};
        technicals[] = {"LIB_US_M3_Halftrack_w", "LIB_US_Scout_m3_w", "LIB_US_Scout_M3_FFV_w"};
        armour[] = {"LIB_M4A3_75_w"};
        th[] = {"LIB_C47_Skytrain"};
        ah[] = {"LIB_US_NAC_P39"};
    };

    class FOW_USA_PARA {
        side = "resistance";
        camouflage[] = {};
        infantry[] = {"fow_s_us_ab_m42_smg_m3", "fow_s_us_ab_m42_smg_m1a1", "fow_s_us_ab_m42_teamleader_asst", "fow_s_us_ab_m42_teamleader", "fow_s_us_ab_m42_rifleman_scout", "fow_s_us_ab_m42_rifleman_m1_carbine", "fow_s_us_ab_m42_rifleman_gl", "fow_s_us_ab_m42_rifleman", "fow_s_us_ab_m42_radio_operator", "fow_s_us_ab_m42_officer", "fow_s_us_ab_m42_nco", "fow_s_us_ab_m42_m1919a6_gunner", "fow_s_us_ab_m42_m1919a6_gunner_asst", "fow_s_us_ab_m42_bar_gunner", "fow_s_us_ab_m42_bar_asst", "fow_s_us_ab_m42_at", "fow_s_us_ab_m42_at_asst"};
        crewmen[] = {"fow_s_us_crewman", "fow_s_us_crewman"};
        pilots[] = {"fow_s_us_pilot_green"};
        technicals[] = {"LIB_US_Scout_M3_FFV", "LIB_US_Scout_M3_FFV", "LIB_M8_Greyhound", "LIB_US_M3_Halftrack", "LIB_US_M3_Halftrack"};
        armour[] = {"LIB_M3A3_Stuart", "LIB_M4A3_76", "LIB_M5A1_Stuart", "LIB_M4A3_75", "LIB_M4A3_76_HVSS"};
        th[] = {"LIB_C47_Skytrain"};
        ah[] = {"LIB_P47"};
    };

    class FOW_USA_PAC {
        side = "resistance";
        camouflage[] = {};
        infantry[] = {"fow_s_us_p_smg_m3", "fow_s_us_p_smg_m1a1", "fow_s_us_p_teamleader_asst", "fow_s_us_p_teamleader", "fow_s_us_p_rifleman_scout", "fow_s_us_p_rifleman_m1_carbine", "fow_s_us_p_rifleman_gl", "fow_s_us_p_rifleman", "fow_s_us_p_radio_operator", "fow_s_us_p_officer", "fow_s_us_p_nco", "fow_s_us_p_m1919a6_gunner", "fow_s_us_p_1919a6_asst", "fow_s_us_p_bar_gunner", "fow_s_us_p_bar_asst", "fow_s_us_p_at", "fow_s_us_p_at_asst"};
        crewmen[] = {"fow_s_us_p_crewman", "fow_s_us_p_crewman"};
        pilots[] = {"fow_s_us_pilot_green"};
        technicals[] = {"LIB_US_Scout_M3_FFV", "LIB_US_Scout_M3_FFV", "LIB_M8_Greyhound", "LIB_US_M3_Halftrack", "LIB_US_M3_Halftrack"};
        armour[] = {"LIB_M3A3_Stuart", "LIB_M4A3_75_Tubes", "LIB_M5A1_Stuart", "LIB_M4A3_75"};
        th[] = {"LIB_C47_Skytrain"};
        ah[] = {"LIB_P47"};
    };

    class FOW_BAF_ESX {
        side = "resistance";
        camouflage[] = {};
        infantry[] = {"fow_s_uk_teamleader", "fow_s_uk_section_commander", "fow_s_uk_rifleman", "fow_s_uk_radio_operator", "fow_s_uk_officer", "fow_s_uk_bren", "fow_s_uk_bren_asst", "fow_s_uk_at", "fow_s_uk_at_asst", "fow_s_uk_rifleman", "fow_s_uk_rifleman"};
        crewmen[] = {"fow_s_uk_crewman", "fow_s_uk_crewman"};
        pilots[] = {"fow_s_us_pilot"};
        technicals[] = {"fow_v_universalCarrier", "fow_v_universalCarrier", "LIB_M8_Greyhound", "LIB_US_M3_Halftrack", "LIB_US_M3_Halftrack"};
        armour[] = {"LIB_M3A3_Stuart", "LIB_M4A4_FIREFLY", "LIB_M5A1_Stuart", "fow_v_cromwell_uk"};
        th[] = {"LIB_C47_RAF"};
        ah[] = {"LIB_P47"};
    };

    class FOW_BAF_PARA {
        side = "resistance";
        camouflage[] = {};
        infantry[] = {"fow_s_uk_para_teamleader", "fow_s_uk_para_section_commander", "fow_s_uk_para_rifleman", "fow_s_uk_para_radio_operator", "fow_s_uk_para_officer", "fow_s_uk_para_bren", "fow_s_uk_para_bren_asst", "fow_s_uk_para_at", "fow_s_uk_para_at_asst", "fow_s_uk_para_rifleman", "fow_s_uk_para_rifleman"};
        crewmen[] = {"fow_s_uk_crewman", "fow_s_uk_crewman"};
        pilots[] = {"fow_s_us_pilot"};
        technicals[] = {"fow_v_universalCarrier", "fow_v_universalCarrier", "LIB_M8_Greyhound", "LIB_US_M3_Halftrack", "LIB_US_M3_Halftrack"};
        armour[] = {"LIB_M3A3_Stuart", "LIB_M4A4_FIREFLY", "LIB_M5A1_Stuart", "fow_v_cromwell_uk"};
        th[] = {"LIB_C47_RAF"};
        ah[] = {"LIB_P47"};
    };

    class FOW_BAF_COM {
        side = "resistance";
        camouflage[] = {};
        infantry[] = {"fow_s_uk_cdo_teamleader", "fow_s_uk_cdo_section_commander", "fow_s_uk_cdo_rifleman", "fow_s_uk_cdo_radio_operator", "fow_s_uk_cdo_officer", "fow_s_uk_cdo_bren", "fow_s_uk_cdo_bren_asst", "fow_s_uk_cdo_at", "fow_s_uk_cdo_at_asst", "fow_s_uk_cdo_rifleman", "fow_s_uk_cdo_rifleman"};
        crewmen[] = {"fow_s_uk_crewman", "fow_s_uk_crewman"};
        pilots[] = {"fow_s_us_pilot"};
        technicals[] = {"fow_v_universalCarrier", "fow_v_universalCarrier", "LIB_M8_Greyhound", "LIB_US_M3_Halftrack", "LIB_US_M3_Halftrack"};
        armour[] = {"LIB_M3A3_Stuart", "LIB_M4A4_FIREFLY", "LIB_M5A1_Stuart", "fow_v_cromwell_uk"};
        th[] = {"LIB_C47_RAF"};
        ah[] = {"LIB_P47"};
    };

    class FOW_BAF_PAC {
        side = "resistance";
        camouflage[] = {};
        infantry[] = {"fow_s_uk_seac_teamleader", "fow_s_uk_seac_section_commander", "fow_s_uk_seac_rifleman", "fow_s_uk_seac_radio_operator", "fow_s_uk_seac_officer", "fow_s_uk_seac_bren", "fow_s_uk_seac_bren_asst", "fow_s_uk_seac_at", "fow_s_uk_seac_at_asst", "fow_s_uk_seac_rifleman", "fow_s_uk_seac_rifleman"};
        crewmen[] = {"fow_s_uk_crewman", "fow_s_uk_crewman"};
        pilots[] = {"fow_s_us_pilot"};
        technicals[] = {"fow_v_universalCarrier", "fow_v_universalCarrier", "LIB_M8_Greyhound", "LIB_US_M3_Halftrack", "LIB_US_M3_Halftrack"};
        armour[] = {"LIB_M3A3_Stuart", "LIB_M4A3_75_Tubes", "LIB_M5A1_Stuart", "LIB_M4A3_75"};
        th[] = {"LIB_C47_RAF"};
        ah[] = {"LIB_P47"};
    };

    class FOW_AUS {
        side = "resistance";
        camouflage[] = {};
        infantry[] = {"fow_s_uk_seac_teamleader_l", "fow_s_uk_seac_section_commander_l", "fow_s_uk_seac_rifleman_l", "fow_s_uk_seac_radio_operator_l", "fow_s_uk_seac_officer_l", "fow_s_uk_seac_bren_gunner_l", "fow_s_uk_seac_bren_asst_l", "fow_s_uk_seac_at_l", "fow_s_uk_seac_at_asst_l", "fow_s_uk_seac_rifleman_l", "fow_s_uk_seac_rifleman_l"};
        crewmen[] = {"fow_s_uk_crewman", "fow_s_uk_crewman"};
        pilots[] = {"fow_s_us_pilot"};
        technicals[] = {"fow_v_universalCarrier", "fow_v_universalCarrier", "LIB_M8_Greyhound", "LIB_US_M3_Halftrack", "LIB_US_M3_Halftrack"};
        armour[] = {"LIB_M3A3_Stuart", "LIB_M4A3_75_Tubes", "LIB_M5A1_Stuart", "LIB_M4A3_75"};
        th[] = {"LIB_C47_RAF"};
        ah[] = {"LIB_P47"};
    };

    class FOW_CAN {
        side = "resistance";
        camouflage[] = {};
        infantry[] = {"fow_s_uk_can_01_teamleader", "fow_s_uk_can_01_section_commander", "fow_s_uk_can_01_rifleman", "fow_s_uk_can_01_radio_operator", "fow_s_uk_can_01_officer", "fow_s_uk_can_01_bren", "fow_s_uk_can_01_bren_asst", "fow_s_uk_can_01_at", "fow_s_uk_can_01_at_asst", "fow_s_uk_can_01_rifleman", "fow_s_uk_can_01_rifleman"};
        crewmen[] = {"fow_s_uk_crewman", "fow_s_uk_crewman"};
        pilots[] = {"fow_s_us_pilot"};
        technicals[] = {"fow_v_universalCarrier", "fow_v_universalCarrier", "LIB_M8_Greyhound", "LIB_US_M3_Halftrack", "LIB_US_M3_Halftrack"};
        armour[] = {"LIB_M3A3_Stuart", "LIB_M4A4_FIREFLY", "LIB_M5A1_Stuart", "fow_v_cromwell_uk"};
        th[] = {"LIB_C47_RAF"};
        ah[] = {"LIB_P47"};
    };

    class IF44_BAF_NA {
        side = "resistance";
        camouflage[] = {};
        infantry[] = {"LIB_UK_DR_AT_Soldier", "LIB_UK_DR_LanceCorporal", "LIB_UK_DR_Radioman", "LIB_UK_DR_Corporal", "LIB_UK_DR_Rifleman", "LIB_UK_DR_Grenadier", "LIB_UK_DR_Medic", "LIB_UK_DR_Officer", "LIB_UK_DR_Sergeant"};
        crewmen[] = {"LIB_UK_DR_Tank_Crew", "LIB_UK_DR_Tank_Commander"};
        pilots[] = {"LIB_US_Pilot"};
        technicals[] = {"LIB_UniversalCarrier_desert", "LIB_UniversalCarrier_desert", "LIB_M8_Greyhound", "LIB_UK_DR_M3_Halftrack", "LIB_UK_DR_M3_Halftrack"};
        armour[] = {"LIB_M3A3_Stuart", "LIB_Crusader_Mk3_desert", "LIB_UK_DR_M4A3_75"};
        th[] = {"LIB_C47_RAF"};
        ah[] = {"LIB_RAF_P39"};
    };

    class IF44_BAF_SN {
        side = "resistance";
        camouflage[] = {};
        infantry[] = {"LIB_UK_Sergeant_w", "LIB_UK_Officer_w", "LIB_UK_Rifleman_w", "LIB_UK_Radioman_w", "LIB_UK_Corporal_w", "LIB_UK_Medic_w", "LIB_UK_Grenadier_w", "LIB_UK_LanceCorporal_w", "LIB_UK_AT_Soldier_W"};
        crewmen[] = {"LIB_UK_DR_Tank_Crew", "LIB_UK_DR_Tank_Commander"};
        pilots[] = {"LIB_US_Pilot"};
        technicals[] = {"LIB_UniversalCarrier_w"};
        armour[] = {"LIB_Cromwell_Mk4_w", "LIB_M4A3_75_w"};
        th[] = {"LIB_C47_RAF"};
        ah[] = {"LIB_P47"};
    };

    class IF44_POL {
        side = "resistance";
        camouflage[] = {};
        infantry[] = {"LIB_WP_Stggunner", "LIB_WP_Sierzant", "LIB_WP_Porucznic", "LIB_WP_Starszy_strzelec", "LIB_WP_Strzelec", "LIB_WP_Mgunner", "LIB_WP_AT_grenadier"};
        crewmen[] = {"LIB_WP_Strzelec", "LIB_WP_Sierzant"};
        pilots[] = {"LIB_WP_Sierzant"};
        technicals[] = {"LIB_Kfz1_MG42", "LIB_SdKfz252", "LIB_Sdkfz251_FFV", "LIB_SdKfz222", "LIB_SdKfz234_1"};
        armour[] = {"LIB_PzKpfwIV_H", "LIB_StuG_III_G", "LIB_SdKfz124", "LIB_SdKfz234_2"};
        th[] = {"LIB_Li2"};
        ah[] = {"LIB_Ju87"};
    };

    class IF44_GER_SN {
        side = "west";
        camouflage[] = {};
        infantry[] = {"LIB_GER_Stggunner_w", "LIB_GER_Scout_unterofficer_w", "LIB_GER_Unterofficer_w", "LIB_GER_Lieutenant_w", "LIB_GER_Scout_rifleman_w", "LIB_GER_Rifleman_w", "LIB_GER_Scout_ober_rifleman_w", "LIB_GER_Ober_rifleman_w", "LIB_GER_Scout_mgunner_w", "LIB_GER_AT_soldier_w", "LIB_GER_AT_grenadier_w", "LIB_GER_Scout_smgunner_w"};
        crewmen[] = {"LIB_GER_Scout_smgunner_w", "LIB_GER_Scout_unterofficer_w"};
        pilots[] = {"LIB_GER_pilot"};
        technicals[] = {"LIB_Sdkfz251_w", "LIB_Sdkfz251_FFV_w"};
        armour[] = {"LIB_PzKpfwIV_H_w", "LIB_StuG_III_G_w", "LIB_PzKpfwV_w", "LIB_PzKpfwVI_E_w"};
        th[] = {"LIB_Ju52"};
        ah[] = {"LIB_Ju87_w"};
    };

    class FOW_GER {
        side = "west";
        camouflage[] = {};
        infantry[] = {"fow_s_ger_heer_rifleman_mp40", "fow_s_ger_heer_rifleman_mp40_pzf", "fow_s_ger_heer_rifleman_g43", "fow_s_ger_heer_rifleman", "fow_s_ger_heer_radio_operator", "fow_s_ger_heer_nco_mp40", "fow_s_ger_heer_mg42_gunner", "fow_s_ger_heer_mg34_gunner", "fow_s_ger_heer_tl_asst", "fow_s_ger_heer_tl_stg", "fow_s_ger_heer_tl_mp40", "fow_s_ger_heer_mg42_sparebarrel", "fow_s_ger_heer_mg42_asst"};
        crewmen[] = {"fow_s_ger_heer_tankcrew_01_2nd_leutnant", "fow_s_ger_heer_tankcrew_01_shutz"};
        pilots[] = {"LIB_GER_pilot"};
        technicals[] = {"LIB_SdKfz222", "LIB_Kfz1_MG42", "LIB_SdKfz251", "LIB_Sdkfz251_FFV"};
        armour[] = {"LIB_StuG_III_G", "LIB_SdKfz124", "LIB_PzKpfwVI_E_1", "LIB_PzKpfwIV_H", "LIB_PzKpfwV"};
        th[] = {"LIB_Ju52"};
        ah[] = {"LIB_Ju87"};
    };

    class IF44_GER_NA {
        side = "west";
        camouflage[] = {};
        infantry[] = {"LIB_DAK_Lieutenant", "LIB_DAK_NCO", "LIB_DAK_Soldier_2", "LIB_DAK_radioman", "LIB_DAK_medic", "LIB_DAK_AT_grenadier", "LIB_DAK_medic", "LIB_DAK_Soldier", "LIB_DAK_Soldier", "LIB_DAK_Soldier", "LIB_DAK_Soldier"};
        crewmen[] = {"LIB_DAK_spg_crew", "LIB_DAK_spg_lieutenant"};
        pilots[] = {"LIB_GER_pilot"};
        technicals[] = {"LIB_SdKfz222", "LIB_Kfz1_MG42", "LIB_SdKfz251", "LIB_Sdkfz251_FFV"};
        armour[] = {"LIB_StuG_III_G", "LIB_SdKfz124", "LIB_PzKpfwVI_E_1", "LIB_PzKpfwIV_H", "LIB_PzKpfwV"};
        th[] = {"LIB_Ju52"};
        ah[] = {"LIB_DAK_Ju87"};
    };

    class FOW_GER_SS {
        side = "west";
        camouflage[] = {};
        infantry[] = {"fow_s_ger_ss_tl_stg", "fow_s_ger_ss_tl_mp40", "fow_s_ger_ss_rifleman_mp40", "fow_s_ger_ss_rifleman_g43", "fow_s_ger_ss_rifleman", "fow_s_ger_ss_radio_operator", "fow_s_ger_ss_nco_mp40", "fow_s_ger_ss_mg42_gunner", "fow_s_ger_ss_mg43_gunner", "fow_s_ger_ss_mg42_sparebarrel", "fow_s_ger_ss_mg42_asst"};
        crewmen[] = {"fow_s_ger_heer_tankcrew_01_2nd_leutnant", "fow_s_ger_heer_tankcrew_01_shutz"};
        pilots[] = {"LIB_GER_pilot"};
        technicals[] = {"LIB_SdKfz222", "LIB_Kfz1_MG42", "LIB_SdKfz251", "LIB_Sdkfz251_FFV"};
        armour[] = {"LIB_StuG_III_G", "LIB_SdKfz124", "LIB_PzKpfwVI_E_1", "LIB_PzKpfwIV_H", "LIB_PzKpfwV"};
        th[] = {"LIB_Ju52"};
        ah[] = {"LIB_Ju87"};
    };

    class FOW_GER_PARA {
        side = "west";
        camouflage[] = {};
        infantry[] = {"fow_s_ger_luft_camo_tl_stg", "fow_s_ger_luft_camo_tl_mp40", "fow_s_ger_luft_camo_rifleman_mp40", "fow_s_ger_luft_camo_rifleman_g43", "fow_s_ger_luft_camo_rifleman_fg42", "fow_s_ger_luft_camo_rifleman", "fow_s_ger_luft_camo_radio_operator", "fow_s_ger_luft_camo_nco_mp40", "fow_s_ger_luft_camo_mg34_gunner", "fow_s_ger_luft_camo_mg42_gunner", "fow_s_ger_luft_camo_mg42_sparebarrel", "fow_s_ger_luft_camo_mg42_asst"};
        crewmen[] = {"fow_s_ger_heer_tankcrew_01_2nd_leutnant", "fow_s_ger_heer_tankcrew_01_shutz"};
        pilots[] = {"LIB_GER_pilot"};
        technicals[] = {"LIB_SdKfz222", "LIB_Kfz1_MG42", "LIB_SdKfz251", "LIB_Sdkfz251_FFV"};
        armour[] = {"LIB_StuG_III_G", "LIB_SdKfz124", "LIB_PzKpfwVI_E_1", "LIB_PzKpfwIV_H", "LIB_PzKpfwV"};
        th[] = {"LIB_Ju52"};
        ah[] = {"LIB_Ju87"};
    };

    class FOW_IJA {
        side = "west";
        camouflage[] = {};
        infantry[] = {"fow_s_ija_rifleman_at", "fow_s_ija_rifleman", "fow_s_ija_officer", "fow_s_ija_nco", "fow_s_ija_type99_gunner", "fow_s_ija_type99_asst", "fow_s_ija_rifleman", "fow_s_ija_rifleman"};
        crewmen[] = {"fow_s_ija_crewman", "fow_s_ija_crewman"};
        pilots[] = {"fow_s_ija_pilot"};
        technicals[] = {"fow_v_type97_truck_open_ija", "fow_v_type97_truck_ija"};
        armour[] = {"fow_ija_type95_HaGo_1_ija", "fow_ija_type95_HaGo_2_ija", "fow_ija_type95_HaGo_3_ija"};
        th[] = {"LIB_Li2"};
        ah[] = {"LIB_RBAF_Ju87"};
    };

    class FOW_IJA_SNLF {
        side = "west";
        camouflage[] = {};
        infantry[] = {"fow_s_ija_snlf_rifleman_at", "fow_s_ija_snlf_rifleman", "fow_s_ija_snlf_nco", "fow_s_ija_snlf_type99_gunner", "fow_s_ija_snlf_type99_asst", "fow_s_ija_snlf_rifleman", "fow_s_ija_snlf_rifleman"};
        crewmen[] = {"fow_s_ija_crewman", "fow_s_ija_crewman"};
        pilots[] = {"fow_s_ija_pilot"};
        technicals[] = {"fow_v_type97_truck_open_ija", "fow_v_type97_truck_ija"};
        armour[] = {"fow_ija_type95_HaGo_1_ija", "fow_ija_type95_HaGo_2_ija", "fow_ija_type95_HaGo_3_ija"};
        th[] = {"LIB_Li2"};
        ah[] = {"LIB_RBAF_Ju87"};
    };

    class IF44_USSR {
        side = "east";
        camouflage[] = {};
        infantry[] = {"LIB_SOV_smgunner", "LIB_SOV_lieutenant", "LIB_SOV_operator", "LIB_SOV_LC_rifleman", "LIB_SOV_mgunner", "LIB_SOV_gun_crew", "LIB_SOV_gun_sergeant", "LIB_SOV_first_lieutenant", "LIB_SOV_captain", "LIB_SOV_LC_rifleman", "LIB_SOV_AT_grenadier", "LIB_SOV_AT_soldier"};
        crewmen[] = {"LIB_SOV_tank_overall_lieutenant", "LIB_SOV_tank_overall_crew"};
        pilots[] = {"LIB_SOV_pilot"};
        technicals[] = {"LIB_Scout_M3", "LIB_Scout_M3_FFV", "LIB_SOV_M3_Halftrack", "LIB_SdKfz251_captured", "LIB_Sdkfz2_FFV"};
        armour[] = {"LIB_JS2_43", "LIB_M4A2_SOV", "LIB_SU85", "LIB_T34_76", "LIB_T34_85", "LIB_T34_85"};
        th[] = {"LIB_Li2﻿"};
        ah[] = {"LIB_Pe2"};
    };

    class IF44_USSR_NKVD {
        side = "east";
        camouflage[] = {};
        infantry[] = {"LIB_NKVD_smgunner", "LIB_NKVD_sergeant", "LIB_NKVD_p_officer", "LIB_NKVD_rifleman", "LIB_NKVD_LC_rifleman", "LIB_NKVD_firest_lieutenant"};
        crewmen[] = {"LIB_SOV_tank_overall_lieutenant", "LIB_SOV_tank_overall_crew"};
        pilots[] = {"LIB_SOV_pilot"};
        technicals[] = {"LIB_Scout_M3", "LIB_Scout_M3_FFV", "LIB_SOV_M3_Halftrack", "LIB_SdKfz251_captured", "LIB_Sdkfz2_FFV"};
        armour[] = {"LIB_JS2_43", "LIB_M4A2_SOV", "LIB_SU85", "LIB_T34_76", "LIB_T34_85", "LIB_T34_85"};
        th[] = {"LIB_Li2﻿"};
        ah[] = {"LIB_Pe2"};
    };

    class IF44_USSR_SN {
        side = "east";
        camouflage[] = {};
        infantry[] = {"LIB_SOV_Smgunner_w", "LIB_SOV_Lieutenant_w", "LIB_SOV_Operator_w", "LIB_SOV_Assault_sergeant_w", "LIB_SOV_P_officer_w", "LIB_SOV_Rifleman_w", "LIB_SOV_Mgunner_w", "LIB_SOV_Captain_w", "LIB_SOV_AT_grenadier_w", "LIB_SOV_AT_soldier_W", "LIB_SOV_Rifleman_w", "LIB_SOV_Rifleman_w"};
        crewmen[] = {"LIB_SOV_tank_captain", "LIB_SOV_tank_crew"};
        pilots[] = {"LIB_SOV_pilot"};
        technicals[] = {"LIB_Scout_M3_w", "LIB_Scout_M3_FFV_w", "LIB_SOV_M3_Halftrack_w"};
        armour[] = {"LIB_JS2_43_w", "LIB_M4A2_SOV_w", "LIB_SU85_w", "LIB_T34_76_w", "LIB_T34_85_w", "LIB_T34_85_w"};
        th[] = {"LIB_Li2﻿"};
        ah[] = {"LIB_Pe2_w"};
    };

    class USM_RAN_90_WD {
        side = "west";
        camouflage[] = {"woodland"};
        infantry[] = {"usm_ranger_90s_w_h_gr", "usm_ranger_90s_w_h_gr", "usm_ranger_90s_w_h_rm1", "usm_ranger_90s_w_h_rm1", "usm_ranger_90s_w_h_at4", "usm_ranger_90s_w_h_ar", "usm_ranger_90s_w_h_mg", "usm_ranger_90s_w_h_medic", "usm_ranger_90s_w_h_off"};
        crewmen[] = {"usm_soldier_90s_w_h_crew1"};
        pilots[] = {"CUP_B_US_Pilot"};
        technicals[] = {"CUP_B_nM1025_M2_USA_WDL", "CUP_B_nM1025_M240_USA_WDL", "CUP_B_nM1025_Mk19_USA_WDL"};
        armour[] = {"CUP_B_M113A3_USA", "CUP_B_M2Bradley_USA_W", "CUP_B_M1A1SA_Woodland_US_Army", "CUP_B_M1A2SEP_Woodland_US_Army"};
        th[] = {"CUP_B_CH47F_USA"};
        ah[] = {"CUP_B_AH64D_DL_USA"};
    };

    class USM_USA_90_WD {
        side = "west";
        camouflage[] = {"woodland"};
        infantry[] = {"usm_soldier_90s_w_h_gr", "usm_soldier_90s_w_h_gr", "usm_soldier_90s_w_h_rm1", "usm_soldier_90s_w_h_rm1", "usm_soldier_90s_w_h_at4", "usm_soldier_90s_w_h_ar", "usm_soldier_90s_w_h_mg", "usm_soldier_90s_w_h_medic", "usm_soldier_90s_w_h_off"};
        crewmen[] = {"usm_soldier_90s_w_h_crew1"};
        pilots[] = {"CUP_B_US_Pilot"};
        technicals[] = {"CUP_B_nM1025_M2_USA_WDL", "CUP_B_nM1025_M240_USA_WDL", "CUP_B_nM1025_Mk19_USA_WDL"};
        armour[] = {"CUP_B_M113A3_USA", "CUP_B_M2Bradley_USA_W", "CUP_B_M1A1SA_Woodland_US_Army", "CUP_B_M1A2SEP_Woodland_US_Army", "CUP_B_M60A3_TTS_USMC"};
        th[] = {"CUP_B_UH60M_US"};
        ah[] = {"CUP_B_AH64D_DL_USA"};
    };

    class USM_USMC_90_WD {
        side = "west";
        camouflage[] = {"woodland"};
        infantry[] = {"usm_marine_90s_w_h_gr", "usm_marine_90s_w_h_gr", "usm_marine_90s_w_h_rm1", "usm_marine_90s_w_h_rm1", "usm_marine_90s_w_h_at4", "usm_marine_90s_w_h_ar", "usm_marine_90s_w_h_mg", "usm_marine_90s_w_h_medic", "usm_marine_90s_w_h_off"};
        crewmen[] = {"usm_marine_90s_w_h_crew1"};
        pilots[] = {"CUP_B_USMC_Pilot"};
        technicals[] = {"CUP_B_nM1025_M2_USA_WDL", "CUP_B_nM1025_M240_USA_WDL", "CUP_B_nM1025_Mk19_USA_WDL"};
        armour[] = {"CUP_B_LAV25M240_USMC", "CUP_B_AAV_USMC", "CUP_B_M1A1FEP_Woodland_USMC", "CUP_B_M60A3_TTS_USMC"};
        th[] = {"CUP_B_UH60S_USN"};
        ah[] = {"CUP_B_AH1Z_Dynamic_USMC"};
    };

    class USM_USA_90_DE {
        side = "west";
        camouflage[] = {"desert"};
        infantry[] = {"usm_soldier_90s_d_h_gr", "usm_soldier_90s_d_h_gr", "usm_soldier_90s_d_h_rm1", "usm_soldier_90s_d_h_rm1", "usm_soldier_90s_d_h_at4", "usm_soldier_90s_d_h_ar", "usm_soldier_90s_d_h_mg", "usm_soldier_90s_d_h_medic", "usm_soldier_90s_d_h_off"};
        crewmen[] = {"usm_soldier_90s_d_h_crew1"};
        pilots[] = {"CUP_B_US_Pilot"};
        technicals[] = {"CUP_B_nM1025_M2_USA_DES", "CUP_B_nM1025_M2_USA_DES", "CUP_B_nM1025_Mk19_USA_DES"};
        armour[] = {"CUP_B_M113A3_desert_USA", "CUP_B_M2Bradley_USA_D", "CUP_B_M1A1SA_Desert_US_Army", "CUP_B_M1A2SEP_Desert_US_Army"};
        th[] = {"CUP_B_UH60M_US"};
        ah[] = {"CUP_B_AH64D_DL_USA"};
    };

    class USM_USA_80_DE {
        side = "west";
        camouflage[] = {"desert"};
        infantry[] = {"usm_soldier_80s_d_h_gr", "usm_soldier_80s_d_h_gr", "usm_soldier_80s_d_h_rm1", "usm_soldier_80s_d_h_rm1", "usm_soldier_80s_d_h_at4", "usm_soldier_80s_d_h_ar", "usm_soldier_80s_d_h_mg", "usm_soldier_80s_d_h_medic", "usm_soldier_80s_d_h_off"};
        crewmen[] = {"usm_soldier_80s_d_h_crew1"};
        pilots[] = {"CUP_B_US_Pilot"};
        technicals[] = {"CUP_B_nM1025_M2_USA_DES", "CUP_B_nM1025_M2_USA_DES", "CUP_B_nM1025_Mk19_USA_DES"};
        armour[] = {"CUP_B_M113A1_desert_USA", "CUP_B_M2Bradley_USA_D", "CUP_B_M1A1SA_Desert_US_Army"};
        th[] = {"CUP_B_UH1D_slick_GER_KSK_Des"};
        ah[] = {"CUP_B_AH64_DL_USA"};
    };

    class USM_USMC_90_DE {
        side = "west";
        camouflage[] = {"desert"};
        infantry[] = {"usm_marine_90s_d_h_gr", "usm_marine_90s_d_h_gr", "usm_marine_90s_d_h_rm1", "usm_marine_90s_d_h_rm1", "usm_marine_90s_d_h_at4", "usm_marine_90s_d_h_ar", "usm_marine_90s_d_h_mg", "usm_marine_90s_d_h_medic", "usm_marine_90s_d_h_off"};
        crewmen[] = {"usm_marine_90s_d_h_crew1"};
        pilots[] = {"CUP_B_USMC_Pilot"};
        technicals[] = {"CUP_B_nM1025_M2_USA_DES", "CUP_B_nM1025_M2_USA_DES", "CUP_B_nM1025_Mk19_USA_DES"};
        armour[] = {"CUP_B_M113A3_desert_USA", "CUP_B_AAV_USMC", "CUP_B_LAV25M240_desert_USMC", "CUP_B_M1A1FEP_Desert_USMC", "CUP_B_M1A1FEP_TUSK_Desert_USMC"};
        th[] = {"CUP_B_UH60S_USN"};
        ah[] = {"CUP_B_AH1Z_Dynamic_USMC"};
    };

    class USM_USMC_80_DE {
        side = "west";
        camouflage[] = {"desert"};
        infantry[] = {"usm_soldier_80s_d_h_gr", "usm_soldier_80s_d_h_gr", "usm_soldier_80s_d_h_rm1", "usm_soldier_80s_d_h_rm1", "usm_soldier_80s_d_h_at4", "usm_soldier_80s_d_h_ar", "usm_soldier_80s_d_h_mg", "usm_soldier_80s_d_h_medic", "usm_soldier_80s_d_h_off"};
        crewmen[] = {"usm_soldier_80s_d_h_crew1"};
        pilots[] = {"CUP_B_USMC_Pilot"};
        technicals[] = {"CUP_B_nM1025_M2_USA_DES", "CUP_B_nM1025_M2_USA_DES", "CUP_B_nM1025_Mk19_USA_DES"};
        armour[] = {"CUP_B_M113A1_desert_USA", "CUP_B_AAV_USMC", "CUP_B_LAV25M240_desert_USMC", "CUP_B_M1A1FEP_Desert_USMC"};
        th[] = {"CUP_B_UH60S_USN"};
        ah[] = {"CUP_B_AH1Z_Dynamic_USMC"};
    };

    class ARK_NVA {
        side = "east";
        camouflage[] = {"woodland"};
        infantry[] = {"ARK_NVA_Soldier_TL_F", "ARK_NVA_Soldier_TL_F", "ARK_NVA_Soldier_F", "ARK_NVA_Soldier_F", "ARK_NVA_Soldier_LAT_F", "ARK_NVA_Soldier_AR_F", "ARK_NVA_Soldier_MG_F", "ARK_NVA_Soldier_F_SKS", "ARK_NVA_Soldier_F_SKS"};
        crewmen[] = {"ARK_NVA_Crew_F"};
        pilots[] = {"ARK_NVA_Pilot_F"};
        technicals[] = {"CUP_O_UAZ_MG_SLA", "CUP_O_UAZ_MG_SLA", "CUP_I_BTR40_MG_TKG", "CUP_O_UAZ_SPG9_SLA", "CUP_O_UAZ_AGS30_SLA"};
        armour[] = {"CUP_O_BTR60_Green_RU", "CUP_O_BRDM2_SLA", "CUP_I_T55_TK_GUE", "CUP_I_T34_NAPA", "CUP_O_MTLB_pk_SLA"};
        th[] = {"CUP_O_Mi8_SLA_2"};
        ah[] = {"CUP_O_Mi8_SLA_2"};
    };

    class CUP_CZ_WD {
        side = "west";
        camouflage[] = {"woodland"};
        infantry[] = {"CUP_B_CZ_Soldier_805_GL_WDL", "CUP_B_CZ_Soldier_805_GL_WDL", "CUP_B_CZ_Soldier_WDL", "CUP_B_CZ_Soldier_WDL", "CUP_B_CZ_Soldier_RPG_WDL", "CUP_B_CZ_Soldier_AR_WDL", "CUP_B_CZ_Soldier_MG_WDL", "CUP_B_CZ_Medic_WDL"};
        crewmen[] = {"CUP_B_CZ_Crew_WDL"};
        pilots[] = {"CUP_B_CZ_Pilot_WDL"};
        technicals[] = {"CUP_B_LR_MG_CZ_W", "CUP_B_LR_MG_CZ_W", "CUP_B_LR_Special_CZ_W", "CUP_B_Dingo_GL_CZ_Wdl", "CUP_B_Dingo_CZ_Wdl"};
        armour[] = {"CUP_B_BMP2_CZ", "CUP_B_BRDM2_CZ", "CUP_B_T72_CZ"};
        th[] = {"CUP_B_Mi171Sh_ACR"};
        ah[] = {"CUP_B_Mi35_Dynamic_CZ"};
    };

    class CUP_CZ_DE {
        side = "west";
        camouflage[] = {"desert"};
        infantry[] = {"CUP_B_CZ_Soldier_805_GL_DES", "CUP_B_CZ_Soldier_805_GL_DES", "CUP_B_CZ_Soldier_DES", "CUP_B_CZ_Soldier_DES", "CUP_B_CZ_Soldier_RPG_DES", "CUP_B_CZ_Soldier_AR_DES", "CUP_B_CZ_Soldier_MG_DES", "CUP_B_CZ_Medic_DES"};
        crewmen[] = {"CUP_B_CZ_Crew_DES"};
        pilots[] = {"CUP_B_CZ_Pilot_DES"};
        technicals[] = {"CUP_B_HMMWV_DSHKM_GPK_ACR", "CUP_B_HMMWV_DSHKM_GPK_ACR", "CUP_B_HMMWV_AGS_GPK_ACR", "CUP_B_Dingo_GL_CZ_Des", "CUP_B_Dingo_CZ_Des"};
        armour[] = {"CUP_B_BMP2_CZ_Des", "CUP_B_BRDM2_CZ_Des", "CUP_B_T72_CZ"};
        th[] = {"CUP_B_Mi171Sh_ACR"};
        ah[] = {"CUP_B_Mi35_Dynamic_CZ_Des"};
    };

    class GEND {
        side = "west";
        camouflage[] = {};
        infantry[] = {"B_GEN_Soldier_1_F", "B_GEN_Soldier_F", "B_GEN_Soldier_1_F", "B_GEN_Soldier_AR_F", "B_GEN_Soldier_SMG_F", "B_GEN_Soldier_SG_F", "B_GEN_Soldier_Pistol_F", "B_GEN_Commander_F"};
        crewmen[] = {"B_GEN_Soldier_Crew_F"};
        pilots[] = {"B_GEN_Soldier_Pilot_F"};
        technicals[] = {"B_GEN_Offroad_01_armed_F"};
        armour[] = {"B_GEN_APC_Wheeled_02_rcws_F", "B_GEN_MRAP_01_hmg_F"};
        th[] = {"B_Heli_Light_01_F"};
        ah[] = {"CUP_O_Ka60_GL_Blk_CSAT"};
    };

    class GEND_SWAT {
        side = "west";
        camouflage[] = {};
        infantry[] = {"B_GEN_SWAT_TL_F", "B_GEN_SWAT_TL_F", "B_GEN_SWAT_F", "B_GEN_SWAT_F", "B_GEN_SWAT_LAT_F", "B_GEN_SWAT_AR_F", "B_GEN_SWAT_MG_F"};
        crewmen[] = {"B_GEN_SWAT_Crew_F"};
        pilots[] = {"B_GEN_SWAT_Pilot_F"};
        technicals[] = {"B_GEN_LSV_01_armed_black_F", "B_GEN_MRAP_01_hmg_F"};
        armour[] = {"B_GEN_APC_Wheeled_02_rcws_F"};
        th[] = {"B_Heli_Light_01_F"};
        ah[] = {"CUP_O_Ka60_GL_Blk_CSAT"};
    };

    class WS_ION_PMC {
        side = "west";
        camouflage[] = {"woodland", "desert"};
        infantry[] = {"B_ION_TL_lxWS", "B_ION_TL_lxWS", "B_ION_Soldier_GL_lxWS", "B_ION_Soldier_lxWS", "B_ION_Soldier_lxWS", "B_ION_soldier_AR_lxWS", "B_ION_Soldier_AT4_lxWS", "B_ION_medic_lxWS"};
        crewmen[] = {"B_ION_crew_lxWS"};
        pilots[] = {"B_ION_Helipilot_lxWS"};
        technicals[] = {"B_ION_offroad_armed_lxWS"};
        armour[] = {"B_ION_APC_Wheeled_01_command_lxWS", "B_ION_APC_Wheeled_02_hmg_lxWS", "B_ION_APC_Wheeled_02_hmg_lxWS"};
        th[] = {"B_ION_Heli_Light_02_unarmed_lxWS"};
        ah[] = {"CUP_I_Mi24_Mk4_AT_ION"};
    };

    class WS_UNA {
        side = "west";
        camouflage[] = {"desert"};
        infantry[] = {"B_UN_Soldier_TL_lxWS", "B_UN_Soldier_TL_lxWS", "B_UN_Soldier_GL_lxWS", "B_UN_Soldier_GL_lxWS", "B_UN_Soldier_lxWS", "B_UN_Soldier_lxWS", "B_UN_HeavyGunner_lxWS", "B_UN_HeavyGunner_lxWS", "B_UN_Soldier_AT4_lxWS", "B_UN_medic_lxWS", "B_UN_officer_lxWS"};
        crewmen[] = {"B_UN_crew_lxWS"};
        pilots[] = {"B_UN_Helipilot_lxWS"};
        technicals[] = {"B_UNA_APC_Wheeled_02_hmg_lxWS"};
        armour[] = {"B_UN_APC_Wheeled_01_command_lxWS", "B_UN_APC_Wheeled_01_command_lxWS", "B_MBT_03_cannon_lxWS"};
        th[] = {"B_UN_Heli_transport_02_lxWS"};
        ah[] = {"CUP_I_Mi24_Mk4_UN"};
    };

    class WS_SFIA {
        side = "east";
        camouflage[] = {"desert"};
        infantry[] = {"O_SFIA_Soldier_GL_lxWS", "O_SFIA_Soldier_GL_lxWS", "O_SFIA_soldier_lxWS", "O_SFIA_soldier_lxWS", "O_SFIA_Soldier_AR_lxWS", "O_SFIA_Soldier_AR_lxWS", "O_SFIA_soldier_RPG7_lxWS", "O_SFIA_medic_lxWS", "O_SFIA_officer_lxWS"};
        crewmen[] = {"O_SFIA_crew_lxWS"};
        pilots[] = {"O_SFIA_pilot_lxWS"};
        technicals[] = {"O_SFIA_Offroad_armed_lxWS", "O_SFIA_Offroad_armed_lxWS", "O_SFIA_Offroad_AT_lxWS", "O_SFIA_Truck_02_aa_lxWS"};
        armour[] = {"O_SFIA_APC_Wheeled_02_hmg_lxWS", "O_SFIA_APC_tracked_02_30mm_lxWS", "O_SFIA_APC_Tracked_02_cannon_lxWS", "O_SFIA_MBT_02_cannon_lxWS"};
        th[] = {"O_Heli_Transport_04_covered_F"};
        ah[] = {"O_SFIA_Heli_Attack_02_dynamicLoadout_lxWS"};
    };

    class WS_TURA {
        side = "resistance";
        camouflage[] = {"desert"};
        infantry[] = {"I_SFIA_defector_lxWS", "I_Tura_deserter_lxWS", "I_SFIA_enforcer_lxWS", "I_SFIA_hireling_RPG7_lxWS", "I_Tura_HeavyGunner_lxWS", "I_SFIA_medic2_lxWS", "I_SFIA_watcher_lxWS"};
        crewmen[] = {"I_SFIA_watcher_lxWS"};
        pilots[] = {"I_SFIA_watcher_lxWS"};
        technicals[] = {"I_Tura_Offroad_armor_armed_lxWS", "I_Tura_Offroad_armor_armed_lxWS", "I_Tura_Offroad_armor_AT_lxWS", "I_Tura_Truck_02_aa_lxWS"};
        armour[] = {"CUP_I_T55_TK_GUE"};
        th[] = {"CUP_I_UH1H_slick_TK_GUE"};
        ah[] = {"CUP_I_UH1H_gunship_TK_GUE"};
    };

    class VN_AUS_ARMY {
        side = "west";
        camouflage[] = {};
        infantry[] = {"vn_b_men_aus_army_66_01", "vn_b_men_aus_army_66_02", "vn_b_men_aus_army_66_16", "vn_b_men_aus_army_66_07", "vn_b_men_aus_army_66_17", "vn_b_men_aus_army_66_08", "vn_b_men_aus_army_66_09", "vn_b_men_aus_army_66_11", "vn_b_men_aus_army_66_12", "vn_b_men_aus_army_66_18", "vn_b_men_aus_army_66_21", "vn_b_men_aus_army_66_06", "vn_b_men_aus_army_66_03", "vn_b_men_aus_army_66_15"};
        crewmen[] = {"vn_b_men_aus_army_66_23", "vn_b_men_aus_army_66_24"};
        pilots[] = {"vn_b_men_aircrew_27", "vn_b_men_aircrew_34"};
        technicals[] = {"vn_b_wheeled_m151_mg_02_aus_army", "vn_b_wheeled_m151_mg_02_aus_army", "vn_b_wheeled_m151_mg_06_aus_army"};
        armour[] = {"vn_b_armor_m113_01_aus_army"};
        th[] = {"vn_b_air_uh1d_02_06"};
        ah[] = {"vn_b_air_uh1d_03_06"};
    };

    class VN_AUS_SAS {
        side = "west";
        camouflage[] = {};
        infantry[] = {"vn_b_men_aus_sas_66_01", "vn_b_men_aus_sas_66_09", "vn_b_men_aus_sas_66_10", "vn_b_men_aus_sas_66_12", "vn_b_men_aus_sas_66_13", "vn_b_men_aus_sas_66_14", "vn_b_men_aus_sas_66_07", "vn_b_men_aus_sas_66_02", "vn_b_men_aus_sas_66_06"};
        crewmen[] = {"vn_b_men_aus_army_66_23", "vn_b_men_aus_army_66_24"};
        pilots[] = {"vn_b_men_aircrew_27", "vn_b_men_aircrew_34"};
        technicals[] = {"vn_b_wheeled_m151_mg_03_aus_army", "vn_b_wheeled_m151_mg_02_aus_army", "vn_b_wheeled_m151_mg_06_aus_army"};
        armour[] = {"vn_b_armor_m113_01_aus_army"};
        th[] = {"vn_b_air_uh1d_02_06"};
        ah[] = {"vn_b_air_uh1d_03_06"};
    };

    class VN_US_CIDG {
        side = "west";
        camouflage[] = {};
        infantry[] = {"vn_b_men_cidg_01", "vn_b_men_cidg_07", "vn_b_men_cidg_11", "vn_b_men_cidg_17", "vn_b_men_cidg_06", "vn_b_men_cidg_14", "vn_b_men_cidg_19", "vn_b_men_cidg_09", "vn_b_men_cidg_08", "vn_b_men_cidg_05", "vn_b_men_cidg_15", "vn_b_men_cidg_18", "vn_b_men_cidg_02", "vn_b_men_cidg_10", "vn_b_men_cidg_20"};
        crewmen[] = {"vn_b_men_cidg_02"};
        pilots[] = {"vn_b_men_aircrew_37", "vn_b_men_aircrew_38"};
        technicals[] = {"vn_b_wheeled_m151_mg_02", "vn_b_wheeled_m151_mg_02", "vn_b_wheeled_m151_mg_06"};
        armour[] = {"vn_b_wheeled_m151_mg_02", "vn_b_wheeled_m151_mg_02", "vn_b_wheeled_m151_mg_06"};
        th[] = {"vn_b_air_uh1d_02_03"};
        ah[] = {"vn_b_air_uh1c_01_03"};
    };

    class VN_US_SEAL {
        side = "west";
        camouflage[] = {};
        infantry[] = {"vn_b_men_seal_51", "vn_b_men_seal_50", "vn_b_men_seal_43", "vn_b_men_seal_47", "vn_b_men_seal_48", "vn_b_men_seal_49", "vn_b_men_seal_25", "vn_b_men_seal_26", "vn_b_men_seal_45", "vn_b_men_seal_46", "vn_b_men_seal_24", "vn_b_men_seal_27", "vn_b_men_seal_44"};
        crewmen[] = {"vn_b_men_seal_47"};
        pilots[] = {"vn_b_men_aircrew_21", "vn_b_men_aircrew_22"};
        technicals[] = {"vn_b_wheeled_m151_mg_02", "vn_b_wheeled_m151_mg_02", "vn_b_wheeled_m151_mg_06"};
        armour[] = {"vn_b_wheeled_m151_mg_02", "vn_b_wheeled_m151_mg_02", "vn_b_wheeled_m151_mg_06"};
        th[] = {"vn_b_air_uh1c_07_05"};
        ah[] = {"vn_b_air_uh1b_02_05"};
    };

    class VN_US_SEAL_BLUE {
        side = "west";
        camouflage[] = {};
        infantry[] = {"vn_b_men_seal_07", "vn_b_men_seal_08", "vn_b_men_seal_12", "vn_b_men_seal_10", "vn_b_men_seal_11", "vn_b_men_seal_14", "vn_b_men_seal_15", "vn_b_men_seal_03", "vn_b_men_seal_09", "vn_b_men_seal_05", "vn_b_men_seal_16", "vn_b_men_seal_17", "vn_b_men_seal_02", "vn_b_men_seal_06", "vn_b_men_seal_04"};
        crewmen[] = {"vn_b_men_seal_10"};
        pilots[] = {"vn_b_men_aircrew_21", "vn_b_men_aircrew_22"};
        technicals[] = {"vn_b_wheeled_m151_mg_02", "vn_b_wheeled_m151_mg_02", "vn_b_wheeled_m151_mg_06"};
        armour[] = {"vn_b_wheeled_m151_mg_02", "vn_b_wheeled_m151_mg_02", "vn_b_wheeled_m151_mg_06"};
        th[] = {"vn_b_air_uh1c_07_05"};
        ah[] = {"vn_b_air_uh1b_02_05"};
    };

    class VN_US_SOG {
        side = "west";
        camouflage[] = {};
        infantry[] = {"vn_b_men_sog_04", "vn_b_men_sog_07", "vn_b_men_sog_11", "vn_b_men_sog_28", "vn_b_men_sog_14", "vn_b_men_sog_08", "vn_b_men_sog_20", "vn_b_men_sog_05", "vn_b_men_sog_16", "vn_b_men_sog_03", "vn_b_men_sog_13", "vn_b_men_sog_06", "vn_b_men_sog_10"};
        crewmen[] = {"vn_b_men_sog_13"};
        pilots[] = {"vn_b_men_aircrew_17", "vn_b_men_aircrew_18"};
        technicals[] = {"vn_b_wheeled_m151_mg_02", "vn_b_wheeled_m151_mg_02", "vn_b_wheeled_m151_mg_06"};
        armour[] = {"vn_b_wheeled_m151_mg_04", "vn_b_wheeled_m54_mg_01", "vn_b_wheeled_m54_mg_03"};
        th[] = {"vn_b_air_uh1d_02_01"};
        ah[] = {"vn_b_air_uh1c_05_01"};
    };

    class VN_US_MIKE {
        side = "west";
        camouflage[] = {};
        infantry[] = {"vn_b_men_sf_14", "vn_b_men_sf_17", "vn_b_men_sf_01", "vn_b_men_sf_03", "vn_b_men_sf_15", "vn_b_men_sf_16", "vn_b_men_sf_13", "vn_b_men_sf_02"};
        crewmen[] = {"vn_b_men_sf_14"};
        pilots[] = {"vn_b_men_aircrew_17", "vn_b_men_aircrew_18"};
        technicals[] = {"vn_b_wheeled_m151_mg_02", "vn_b_wheeled_m151_mg_02", "vn_b_wheeled_m151_mg_06"};
        armour[] = {"vn_b_wheeled_m151_mg_04", "vn_b_wheeled_m54_mg_01", "vn_b_wheeled_m54_mg_03"};
        th[] = {"vn_b_air_uh1d_02_01"};
        ah[] = {"vn_b_air_uh1c_05_01"};
    };

    class VN_US_ARMY {
        side = "west";
        camouflage[] = {};
        infantry[] = {"vn_b_men_army_02", "vn_b_men_army_08", "vn_b_men_army_07", "vn_b_men_army_17", "vn_b_men_army_15", "vn_b_men_army_16", "vn_b_men_army_18", "vn_b_men_army_19", "vn_b_men_army_20", "vn_b_men_army_21", "vn_b_men_army_06", "vn_b_men_army_27", "vn_b_men_army_12", "vn_b_men_army_03", "vn_b_men_army_01"};
        crewmen[] = {"vn_b_men_army_23", "vn_b_men_army_24", "vn_b_men_army_25"};
        pilots[] = {"vn_b_men_aircrew_05", "vn_b_man_aircrew_06"};
        technicals[] = {"vn_b_wheeled_m151_mg_02", "vn_b_wheeled_m151_mg_02", "vn_b_wheeled_m151_mg_06"};
        armour[] = {"vn_b_armor_m113_acav_04", "vn_b_armor_m113_acav_02", "vn_b_armor_m113_acav_01", "vn_b_armor_m113_acav_06", "vn_b_armor_m113_acav_03", "vn_b_armor_m113_acav_05", "vn_b_armor_m113_01", "vn_b_armor_m41_01_01"};
        th[] = {"vn_b_air_uh1d_02_01"};
        ah[] = {"vn_b_air_ah1g_04"};
    };

    class VN_US_USMC {
        side = "west";
        camouflage[] = {};
        infantry[] = {"vn_b_men_army_02", "vn_b_men_army_08", "vn_b_men_army_07", "vn_b_men_army_17", "vn_b_men_army_15", "vn_b_men_army_16", "vn_b_men_army_18", "vn_b_men_army_19", "vn_b_men_army_20", "vn_b_men_army_21", "vn_b_men_army_06", "vn_b_men_army_27", "vn_b_men_army_12", "vn_b_men_army_03", "vn_b_men_army_01"};
        crewmen[] = {"vn_b_men_army_23", "vn_b_men_army_24", "vn_b_men_army_25"};
        pilots[] = {"vn_b_men_aircrew_09", "vn_b_man_aircrew_10"};
        technicals[] = {"vn_b_wheeled_m151_mg_02", "vn_b_wheeled_m151_mg_02", "vn_b_wheeled_m151_mg_06"};
        armour[] = {"vn_b_armor_m113_acav_04", "vn_b_armor_m113_acav_02", "vn_b_armor_m113_acav_01", "vn_b_armor_m113_acav_06", "vn_b_armor_m113_acav_03", "vn_b_armor_m113_acav_05", "vn_b_armor_m113_01", "vn_b_armor_m41_01_01"};
        th[] = {"vn_b_air_ch34_03_01"};
        ah[] = {"vn_b_air_ch34_04_02"};
    };

    class VN_NZ_SAS {
        side = "west";
        camouflage[] = {};
        infantry[] = {"vn_b_men_nz_sas_70_01", "vn_b_men_nz_sas_70_09", "vn_b_men_nz_sas_70_10", "vn_b_men_nz_sas_70_07", "vn_b_men_nz_sas_70_12", "vn_b_men_nz_sas_70_13", "vn_b_men_nz_sas_70_14", "vn_b_men_nz_sas_70_08", "vn_b_men_nz_sas_70_06"};
        crewmen[] = {"vn_b_men_aus_army_66_23", "vn_b_men_aus_army_66_24"};
        pilots[] = {"vn_b_men_aircrew_27", "vn_b_men_aircrew_34"};
        technicals[] = {"vn_b_wheeled_m151_mg_02_nz_army", "vn_b_wheeled_m151_mg_06_nz_army", "vn_b_wheeled_m151_03_nz_army"};
        armour[] = {"vn_b_armor_m113_01_aus_army"};
        th[] = {"vn_b_air_uh1d_02_06"};
        ah[] = {"vn_b_air_uh1d_03_06"};
    };

    class VN_NZ_ARMY {
        side = "west";
        camouflage[] = {};
        infantry[] = {"vn_b_men_nz_army_70_02", "vn_b_men_nz_army_70_14", "vn_b_men_nz_army_70_02", "vn_b_men_nz_army_70_07", "vn_b_men_nz_army_70_08", "vn_b_men_nz_army_70_09", "vn_b_men_nz_army_70_12", "vn_b_men_nz_army_70_16", "vn_b_men_nz_army_70_19", "vn_b_men_nz_army_70_06", "vn_b_men_nz_army_70_03", "vn_b_men_nz_army_70_13", "vn_b_men_nz_army_70_01"};
        crewmen[] = {"vn_b_men_aus_army_66_23", "vn_b_men_aus_army_66_24"};
        pilots[] = {"vn_b_men_aircrew_27", "vn_b_men_aircrew_34"};
        technicals[] = {"vn_b_wheeled_m151_mg_02_nz_army", "vn_b_wheeled_m151_mg_02_nz_army", "vn_b_wheeled_m151_mg_06_nz_army"};
        armour[] = {"vn_b_armor_m113_01_aus_army"};
        th[] = {"vn_b_air_uh1d_02_06"};
        ah[] = {"vn_b_air_uh1d_03_06"};
    };

    class VN_ROK_ARMY_EARLY {
        side = "west";
        camouflage[] = {};
        infantry[] = {"vn_b_men_rok_army_65_02", "vn_b_men_rok_army_65_07", "vn_b_men_rok_army_65_17", "vn_b_men_rok_army_65_15", "vn_b_men_rok_army_65_16", "vn_b_men_rok_army_65_18", "vn_b_men_rok_army_65_19", "vn_b_men_rok_army_65_20", "vn_b_men_rok_army_65_21", "vn_b_men_rok_army_65_12", "vn_b_men_rok_army_65_06", "vn_b_men_rok_army_65_27", "vn_b_men_rok_army_65_03", "vn_b_men_rok_army_65_08", "vn_b_men_rok_army_65_01"};
        crewmen[] = {"vn_b_men_rok_army_65_14", "vn_b_men_rok_army_65_13"};
        pilots[] = {"vn_b_men_aircrew_21", "vn_b_men_aircrew_22"};
        technicals[] = {"vn_b_wheeled_m151_mg_01_rok_army", "vn_b_wheeled_m151_mg_02_rok_army", "vn_b_wheeled_m151_mg_06_rok_army"};
        armour[] = {"vn_b_armor_m113_acav_01_rok_army", "vn_b_armor_m113_acav_02_rok_army", "vn_b_armor_m113_acav_04_rok_army", "vn_b_armor_m113_acav_06_rok_army", "vn_b_armor_m113_acav_03_rok_army", "vn_b_armor_m113_acav_05_rok_army", "vn_b_armor_m113_01_rok_army"};
        th[] = {"vn_b_air_uh1c_07_01"};
        ah[] = {"vn_b_air_uh1c_04_01"};
    };

    class VN_ROK_ARMY {
        side = "west";
        camouflage[] = {};
        infantry[] = {"vn_b_men_rok_army_68_02", "vn_b_men_rok_army_68_07", "vn_b_men_rok_army_68_17", "vn_b_men_rok_army_68_15", "vn_b_men_rok_army_68_16", "vn_b_men_rok_army_68_18", "vn_b_men_rok_army_68_19", "vn_b_men_rok_army_68_20", "vn_b_men_rok_army_68_21", "vn_b_men_rok_army_68_12", "vn_b_men_rok_army_68_06", "vn_b_men_rok_army_68_27", "vn_b_men_rok_army_68_03", "vn_b_men_rok_army_68_08", "vn_b_men_rok_army_68_01"};
        crewmen[] = {"vn_b_men_rok_army_68_25", "vn_b_men_rok_army_68_24"};
        pilots[] = {"vn_b_men_aircrew_21", "vn_b_men_aircrew_22"};
        technicals[] = {"vn_b_wheeled_m151_mg_01_rok_army", "vn_b_wheeled_m151_mg_02_rok_army", "vn_b_wheeled_m151_mg_06_rok_army"};
        armour[] = {"vn_b_armor_m113_acav_01_rok_army", "vn_b_armor_m113_acav_02_rok_army", "vn_b_armor_m113_acav_04_rok_army", "vn_b_armor_m113_acav_06_rok_army", "vn_b_armor_m113_acav_03_rok_army", "vn_b_armor_m113_acav_05_rok_army", "vn_b_armor_m113_01_rok_army"};
        th[] = {"vn_b_air_uh1c_07_01"};
        ah[] = {"vn_b_air_uh1c_04_01"};
    };

    class VN_ROK_MARINE_EARLY {
        side = "west";
        camouflage[] = {};
        infantry[] = {"vn_b_men_rok_marine_65_02", "vn_b_men_rok_marine_65_07", "vn_b_men_rok_marine_65_17", "vn_b_men_rok_marine_65_15", "vn_b_men_rok_marine_65_16", "vn_b_men_rok_marine_65_18", "vn_b_men_rok_marine_65_19", "vn_b_men_rok_marine_65_20", "vn_b_men_rok_marine_65_21", "vn_b_men_rok_marine_65_12", "vn_b_men_rok_marine_65_06", "vn_b_men_rok_marine_65_03", "vn_b_men_rok_marine_65_08", "vn_b_men_rok_marine_65_01"};
        crewmen[] = {"vn_b_men_rok_marine_65_14", "vn_b_men_rok_marine_65_13"};
        pilots[] = {"vn_b_men_aircrew_21", "vn_b_men_aircrew_22"};
        technicals[] = {"vn_b_wheeled_m151_mg_01_rok_marines", "vn_b_wheeled_m151_mg_02_rok_marines", "vn_b_wheeled_m151_mg_06_rok_marines"};
        armour[] = {"vn_b_wheeled_m151_mg_01_rok_marines", "vn_b_wheeled_m151_mg_02_rok_marines", "vn_b_wheeled_m151_mg_06_rok_marines"};
        th[] = {"vn_b_air_uh1c_07_01"};
        ah[] = {"vn_b_air_uh1c_04_01"};
    };

    class VN_ROK_MARINE {
        side = "west";
        camouflage[] = {};
        infantry[] = {"vn_b_men_rok_marine_68_02", "vn_b_men_rok_marine_68_07", "vn_b_men_rok_marine_68_17", "vn_b_men_rok_marine_68_15", "vn_b_men_rok_marine_68_16", "vn_b_men_rok_marine_68_18", "vn_b_men_rok_marine_68_19", "vn_b_men_rok_marine_68_20", "vn_b_men_rok_marine_68_21", "vn_b_men_rok_marine_68_12", "vn_b_men_rok_marine_68_06", "vn_b_men_rok_marine_68_03", "vn_b_men_rok_marine_68_08", "vn_b_men_rok_marine_68_01"};
        crewmen[] = {"vn_b_men_rok_marine_68_14", "vn_b_men_rok_marine_68_13"};
        pilots[] = {"vn_b_men_aircrew_21", "vn_b_men_aircrew_22"};
        technicals[] = {"vn_b_wheeled_m151_mg_01_rok_marines", "vn_b_wheeled_m151_mg_02_rok_marines", "vn_b_wheeled_m151_mg_06_rok_marines"};
        armour[] = {"vn_b_wheeled_m151_mg_01_rok_marines", "vn_b_wheeled_m151_mg_02_rok_marines", "vn_b_wheeled_m151_mg_06_rok_marines"};
        th[] = {"vn_b_air_uh1c_07_01"};
        ah[] = {"vn_b_air_uh1c_04_01"};
    };

    class VN_LAO_PL {
        side = "east";
        camouflage[] = {};
        infantry[] = {"vn_o_men_pl_21", "vn_o_men_pl_23", "vn_o_men_pl_22", "vn_o_men_pl_07", "vn_o_men_pl_27", "vn_o_men_pl_04", "vn_o_men_pl_05", "vn_o_men_pl_03", "vn_o_men_pl_02", "vn_o_men_pl_06", "vn_o_men_pl_12", "vn_o_men_pl_14", "vn_o_men_pl_26", "vn_o_men_pl_25", "vn_o_men_pl_11", "vn_o_men_pl_28", "vn_o_men_pl_08", "vn_o_men_pl_13", "vn_o_men_pl_01"};
        crewmen[] = {"vn_o_men_pl_18", "vn_o_men_pl_19", "vn_o_men_pl_20"};
        pilots[] = {"vn_o_men_aircrew_01", "vn_o_men_aircrew_02"};
        technicals[] = {"vn_o_wheeled_btr40_mg_01_pl", "vn_o_wheeled_btr40_mg_02_pl", "vn_o_wheeled_btr40_mg_03_pl", "vn_o_wheeled_z157_mg_01_pl", "vn_o_wheeled_z157_mg_02_pl"};
        armour[] = {"vn_o_armor_pt76a_01_pl"};
        th[] = {"vn_o_air_mi2_01_03"};
        ah[] = {"vn_o_air_mi2_04_02"};
    };

    class VN_NV_NVA_DC {
        side = "east";
        camouflage[] = {};
        infantry[] = {"vn_o_men_nva_dc_07", "vn_o_men_nva_dc_06", "vn_o_men_nva_dc_03", "vn_o_men_nva_dc_04", "vn_o_men_nva_dc_02", "vn_o_men_nva_dc_05", "vn_o_men_nva_dc_12", "vn_o_men_nva_dc_14", "vn_o_men_nva_dc_11", "vn_o_men_nva_dc_09", "vn_o_men_nva_dc_08", "vn_o_men_nva_dc_13", "vn_o_men_nva_dc_01"};
        crewmen[] = {"vn_o_men_nva_65_38", "vn_o_men_nva_65_39", "vn_o_men_nva_65_40"};
        pilots[] = {"vn_o_men_aircrew_01", "vn_o_men_aircrew_02"};
        technicals[] = {"vn_o_wheeled_btr40_mg_01_nva65", "vn_o_wheeled_btr40_mg_02_nva65", "vn_o_wheeled_btr40_mg_03_nva65"};
        armour[] = {"vn_o_armor_pt76a_01_nva65", "vn_o_armor_pt76b_01_nva65", "vn_o_armor_type63_01_nva65"};
        th[] = {"vn_o_air_mi2_01_03"};
        ah[] = {"vn_o_air_mi2_04_02"};
    };

    class VN_NV_NVA_EARLY {
        side = "east";
        camouflage[] = {};
        infantry[] = {"vn_o_men_nva_65_21", "vn_o_men_nva_65_20", "vn_o_men_nva_65_17", "vn_o_men_nva_65_16", "vn_o_men_nva_65_19", "vn_o_men_nva_65_18", "vn_o_men_nva_65_28", "vn_o_men_nva_65_25", "vn_o_men_nva_65_26", "vn_o_men_nva_65_22", "vn_o_men_nva_65_27", "vn_o_men_nva_65_15"};
        crewmen[] = {"vn_o_men_nva_65_38", "vn_o_men_nva_65_39", "vn_o_men_nva_65_40"};
        pilots[] = {"vn_o_men_aircrew_01", "vn_o_men_aircrew_02"};
        technicals[] = {"vn_o_wheeled_btr40_mg_01_nva65", "vn_o_wheeled_btr40_mg_02_nva65", "vn_o_wheeled_btr40_mg_03_nva65"};
        armour[] = {"vn_o_armor_pt76a_01_nva65", "vn_o_armor_pt76b_01_nva65", "vn_o_armor_type63_01_nva65"};
        th[] = {"vn_o_air_mi2_01_03"};
        ah[] = {"vn_o_air_mi2_04_02"};
    };

    class VN_NV_NVA {
        side = "east";
        camouflage[] = {};
        infantry[] = {"vn_o_men_nva_07", "vn_o_men_nva_06", "vn_o_men_nva_03", "vn_o_men_nva_02", "vn_o_men_nva_05", "vn_o_men_nva_04", "vn_o_men_nva_12", "vn_o_men_nva_14", "vn_o_men_nva_11", "vn_o_men_nva_13", "vn_o_men_nva_08", "vn_o_men_nva_01"};
        crewmen[] = {"vn_o_men_nva_37", "vn_o_men_nva_38", "vn_o_men_nva_39"};
        pilots[] = {"vn_o_men_aircrew_01", "vn_o_men_aircrew_02"};
        technicals[] = {"vn_o_wheeled_btr40_mg_01_nva65", "vn_o_wheeled_btr40_mg_02_nva65", "vn_o_wheeled_btr40_mg_03_nva65"};
        armour[] = {"vn_o_armor_pt76a_01_nva65", "vn_o_armor_pt76b_01_nva65", "vn_o_armor_type63_01_nva65"};
        th[] = {"vn_o_air_mi2_01_03"};
        ah[] = {"vn_o_air_mi2_04_02"};
    };

    class VN_NV_VPNM {
        side = "east";
        camouflage[] = {};
        infantry[] = {"vn_o_men_nva_marine_07", "vn_o_men_nva_marine_06", "vn_o_men_nva_marine_03", "vn_o_men_nva_marine_02", "vn_o_men_nva_marine_05", "vn_o_men_nva_marine_04", "vn_o_men_nva_marine_12", "vn_o_men_nva_marine_14", "vn_o_men_nva_marine_11", "vn_o_men_nva_marine_08", "vn_o_men_nva_marine_13", "vn_o_men_nva_marine_01"};
        crewmen[] = {"vn_o_men_nva_navy_09"};
        pilots[] = {"vn_o_men_aircrew_01", "vn_o_men_aircrew_02"};
        technicals[] = {"vn_o_wheeled_btr40_mg_01_nva65", "vn_o_wheeled_btr40_mg_02_nva65", "vn_o_wheeled_btr40_mg_03_nva65"};
        armour[] = {"vn_o_armor_pt76a_01_nva65", "vn_o_armor_pt76b_01_nva65", "vn_o_armor_type63_01_nva65"};
        th[] = {"vn_o_air_mi2_01_02"};
        ah[] = {"vn_o_air_mi2_04_01"};
    };

    class VN_NV_VC {
        side = "east";
        camouflage[] = {};
        infantry[] = {"vn_o_men_vc_07", "vn_o_men_vc_04", "vn_o_men_vc_05", "vn_o_men_vc_03", "vn_o_men_vc_02", "vn_o_men_vc_06", "vn_o_men_vc_14", "vn_o_men_vc_11", "vn_o_men_vc_08", "vn_o_men_vc_13", "vn_o_men_vc_01", "vn_o_men_vc_regional_07", "vn_o_men_vc_regional_04", "vn_o_men_vc_regional_03", "vn_o_men_vc_regional_02", "vn_o_men_vc_regional_06", "vn_o_men_vc_regional_05", "vn_o_men_vc_regional_14", "vn_o_men_vc_regional_11", "vn_o_men_vc_regional_08", "vn_o_men_vc_regional_13", "vn_o_men_vc_regional_01"};
        crewmen[] = {"vn_o_men_vc_regional_05"};
        pilots[] = {"vn_o_men_aircrew_01", "vn_o_men_aircrew_02"};
        technicals[] = {"vn_o_wheeled_btr40_mg_01_nva65", "vn_o_wheeled_btr40_mg_02_nva65", "vn_o_wheeled_btr40_mg_03_nva65"};
        armour[] = {"vn_o_armor_pt76a_01_nva65", "vn_o_armor_pt76b_01_nva65", "vn_o_armor_type63_01_nva65"};
        th[] = {"vn_o_air_mi2_01_03"};
        ah[] = {"vn_o_air_mi2_04_02"};
    };

    class VN_SV_ARVN {
        side = "resistance";
        camouflage[] = {};
        infantry[] = {"vn_i_men_army_02", "vn_i_men_army_07", "vn_i_men_army_15", "vn_i_men_army_16", "vn_i_men_army_18", "vn_i_men_army_19", "vn_i_men_army_20", "vn_i_men_army_21", "vn_i_men_army_12", "vn_i_men_army_06", "vn_i_men_army_11", "vn_i_men_army_03", "vn_i_men_army_08", "vn_i_men_army_01"};
        crewmen[] = {"vn_i_men_army_23", "vn_i_men_army_24", "vn_i_men_army_25"};
        pilots[] = {"vn_i_men_aircrew_01", "vn_i_men_aircrew_02"};
        technicals[] = {"vn_i_wheeled_m151_mg_01", "vn_i_wheeled_m151_mg_06", "vn_i_wheeled_m151_mg_02_marines"};
        armour[] = {"vn_i_armor_m41_01", "vn_armor_m113_acav_04", "vn_armor_m113_acav_02", "vn_armor_m113_acav_01", "vn_armor_m113_acav_06", "vn_armor_m113_acav_03", "vn_armor_m113_acav_05", "vn_i_armor_m113_01"};
        th[] = {"vn_i_air_ch34_01_02"};
        ah[] = {"vn_i_air_uh1c_02_01"};
    };

    class VN_SV_LLDB {
        side = "resistance";
        camouflage[] = {};
        infantry[] = {"vn_i_men_sf_02", "vn_i_men_sf_07", "vn_i_men_sf_12", "vn_i_men_sf_06", "vn_i_men_sf_11", "vn_i_men_sf_03", "vn_i_men_sf_08", "vn_i_men_sf_01"};
        crewmen[] = {"vn_i_men_sf_02"};
        pilots[] = {"vn_i_men_aircrew_01", "vn_i_men_aircrew_02"};
        technicals[] = {"vn_i_wheeled_m151_mg_01", "vn_i_wheeled_m151_mg_06", "vn_i_wheeled_m151_mg_02_marines"};
        armour[] = {"vn_i_wheeled_m151_mg_01", "vn_i_wheeled_m151_mg_06", "vn_i_wheeled_m151_mg_02_marines"};
        th[] = {"vn_i_air_uh1d_02_01"};
        ah[] = {"vn_i_air_uh1c_01_01"};
    };

    class VN_SV_RANGER {
        side = "resistance";
        camouflage[] = {};
        infantry[] = {"vn_i_men_ranger_02", "vn_i_men_ranger_07", "vn_i_men_ranger_17", "vn_i_men_ranger_15", "vn_i_men_ranger_16", "vn_i_men_ranger_18", "vn_i_men_ranger_19", "vn_i_men_ranger_20", "vn_i_men_ranger_21", "vn_i_men_ranger_12", "vn_i_men_ranger_06", "vn_i_men_ranger_11", "vn_i_men_ranger_03", "vn_i_men_ranger_08", "vn_i_men_ranger_01"};
        crewmen[] = {"vn_i_men_army_23", "vn_i_men_army_24", "vn_i_men_army_25"};
        pilots[] = {"vn_i_men_aircrew_01", "vn_i_men_aircrew_02"};
        technicals[] = {"vn_i_wheeled_m151_mg_01", "vn_i_wheeled_m151_mg_06", "vn_i_wheeled_m151_mg_02_marines"};
        armour[] = {"vn_i_armor_m41_01", "vn_armor_m113_acav_04", "vn_armor_m113_acav_02", "vn_armor_m113_acav_01", "vn_armor_m113_acav_06", "vn_armor_m113_acav_03", "vn_armor_m113_acav_05", "vn_i_armor_m113_01"};
        th[] = {"vn_i_air_uh1d_02_01"};
        ah[] = {"vn_i_air_uh1c_02_01"};
    };

    class VN_SV_MARINE {
        side = "resistance";
        camouflage[] = {};
        infantry[] = {"vn_i_men_marine_02", "vn_i_men_marine_07", "vn_i_men_marine_17", "vn_i_men_marine_15", "vn_i_men_marine_16", "vn_i_men_marine_18", "vn_i_men_marine_19", "vn_i_men_marine_20", "vn_i_men_marine_21", "vn_i_men_marine_12", "vn_i_men_marine_06", "vn_i_men_marine_11", "vn_i_men_marine_03", "vn_i_men_marine_08", "vn_i_men_marine_01"};
        crewmen[] = {"vn_i_men_army_23", "vn_i_men_army_24", "vn_i_men_army_25"};
        pilots[] = {"vn_i_men_aircrew_01", "vn_i_men_aircrew_02"};
        technicals[] = {"vn_i_wheeled_m151_mg_01", "vn_i_wheeled_m151_mg_06", "vn_i_wheeled_m151_mg_02_marines"};
        armour[] = {"vn_i_armor_m41_01", "vn_armor_m113_acav_04", "vn_armor_m113_acav_02", "vn_armor_m113_acav_01", "vn_armor_m113_acav_06", "vn_armor_m113_acav_03", "vn_armor_m113_acav_05", "vn_i_armor_m113_01"};
        th[] = {"vn_i_air_ch32_02_01"};
        ah[] = {"vn_i_air_uh1c_02_01"};
    };

    class VN_LAO_RLA {
        side = "resistance";
        camouflage[] = {};
        infantry[] = {"vn_i_men_rla_02", "vn_i_men_rla_07", "vn_i_men_rla_17", "vn_i_men_rla_15", "vn_i_men_rla_16", "vn_i_men_rla_18", "vn_i_men_rla_19", "vn_i_men_rla_20", "vn_i_men_rla_21", "vn_i_men_rla_09", "vn_i_men_rla_12", "vn_i_men_rla_06", "vn_i_men_rla_11", "vn_i_men_rla_03", "vn_i_men_rla_08", "vn_i_men_rla_01"};
        crewmen[] = {"vn_i_men_rla_14", "vn_i_men_rla_13"};
        pilots[] = {"vn_i_men_aircrew_01", "vn_i_men_aircrew_02"};
        technicals[] = {"vn_i_wheeled_m151_mg_01_rla", "vn_i_wheeled_m151_mg_02_rla", "vn_i_wheeled_m151_mg_06_rla"};
        armour[] = {"vn_i_wheeled_m151_mg_01_rla", "vn_i_wheeled_m151_mg_02_rla", "vn_i_wheeled_m151_mg_06_rla"};
        th[] = {"vn_b_air_uh1c_07_01"};
        ah[] = {"vn_b_air_uh1c_04_01"};
    };

};
