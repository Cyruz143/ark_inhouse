class CUP_USMC_MTV_WD {
    class Rifleman {
        headGear = "CUP_H_LWHv2_MARPAT";
        goggles = "";
        uniform = "CUP_U_B_USMC_MCCUU";
        vest = "CUP_V_B_MTV_Patrol_ARM";
        backpack = "ark_backpack_med";
        insignia = "";
    };

    class Leader : Rifleman {
        headGear = "CUP_H_LWHv2_MARPAT_comms";
        uniform = "CUP_U_B_USMC_MCCUU_roll_2";
        vest = "CUP_V_B_MTV_TL_ARM";
    };

    class Officer : Leader {
        headGear = "CUP_H_LWHv2_MARPAT_NVG_gog_cov2";
        uniform = "CUP_U_B_USMC_MCCUU_roll_2_gloves";
        vest = "CUP_V_B_MTV_noCB_ARM";
    };

    class Crew : Rifleman {
        headGear = "CUP_H_USMC_Crew_Helmet";
        uniform = "CUP_U_B_USMC_MCCUU_roll";
        vest = "CUP_V_B_MTV_ARM";
        backpack = "ark_backpack_small";
    };

    class CO : Officer {
        headGear = "CUP_H_USMC_CAP_WDL";
    };

    class XO : CO {
        backpack = "ark_backpack_large";
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        uniform = "CUP_U_B_USMC_MCCUU_gloves";
        vest = "CUP_V_B_MTV_Pouches_ARM";
        backpack = "ark_backpack_large";
        insignia = "";
    };

    class FTL : Leader {
        headGear = "CUP_H_LWHv2_MARPAT_NVG_gog_cov2";
        uniform = "CUP_U_B_USMC_MCCUU_roll_pads_gloves";
    };

    class AR : Rifleman {
        headGear = "CUP_H_LWHv2_MARPAT_cov_fr";
        uniform = "CUP_U_B_USMC_MCCUU_pads_gloves";
        vest = "CUP_V_B_MTV_MG_ARM";
    };

    class AAR : Rifleman {
        backpack = "ark_backpack_large";
    };

    class RAT : Rifleman {
        headGear = "CUP_H_LWHv2_MARPAT_cov_fr";
        uniform = "CUP_U_B_USMC_MCCUU_pads";
        vest = "CUP_V_B_MTV_LegPouch_ARM";
    };

    class MMGG : AR {
        backpack = "ark_backpack_large";
    };

    class MMGAG : AAR {
        headGear = "CUP_H_LWHv2_MARPAT_comms_cov_fr";
    };

    class HMGG : AR {
    };

    class HMGAG : AAR {
        headGear = "CUP_H_LWHv2_MARPAT_comms_cov_fr";
    };

    class HMGAC : AAR {
    };

    class MATG : RAT {
        backpack = "ark_backpack_large";
    };

    class MATAG : AAR {
        headGear = "CUP_H_LWHv2_MARPAT_comms_cov_fr";
    };

    class MATAC : MATAG {
    };

    class HATG : RAT {
        backpack = "ark_backpack_large";
    };

    class HATAG : AAR {
        headGear = "CUP_H_LWHv2_MARPAT_comms_cov_fr";
    };

    class HATAC : HATAG {
    };

    class DHATG : AR {
    };

    class DHATAG : AAR {
        headGear = "CUP_H_LWHv2_MARPAT_comms_cov_fr";
    };

    class DHATAC : AAR {
    };

    class SAMG : AR {
    };

    class SAMAG : AAR {
        headGear = "CUP_H_LWHv2_MARPAT_comms_cov_fr";
    };

    class SAMAC : AAR {
    };

    class GMGG : AR {
    };

    class GMGAG : AAR {
        headGear = "CUP_H_LWHv2_MARPAT_comms_cov_fr";
    };

    class GMGAC : AAR {
    };

    class MTRG : AR {
    };

    class MTRAG : AAR {
        headGear = "CUP_H_LWHv2_MARPAT_comms_cov_fr";
    };

    class MTRAC : AAR {
    };

    class ENG : Rifleman {
        headGear = "CUP_H_LWHv2_MARPAT_comms_cov_fr";
        uniform = "CUP_U_B_USMC_MCCUU_roll_2_pads_gloves";
        backpack = "ark_backpack_large";
    };

    class ENGA : ENG {
        headGear = "CUP_H_LWHv2_MARPAT_cov_fr";
        uniform = "CUP_U_B_USMC_MCCUU_roll_pads_gloves";
        vest = "CUP_V_B_MTV_Mine_ARM";
    };

    class SN : Rifleman {
        headGear = "CUP_H_USMC_BOONIE_WDL";
        goggles = "G_Bandanna_khk";
        uniform = "CUP_U_B_USMC_MCCUU_roll_pads_gloves";
        vest = "CUP_V_B_MTV_Marksman_ARM";
        backpack = "ark_backpack_small";
    };

    class SP : SN {
        headGear = "CUP_H_USMC_BOONIE_PRR_WDL";
    };

    class VC : Crew {
    };

    class VG : Crew {
    };

    class VD : Crew {
    };

    class P : Crew {
        headGear = "H_PilotHelmetHeli_B";
        uniform = "CUP_U_B_USMC_PilotOverall";
        vest = "CUP_V_B_PilotVest_ARM";
        backpack = "B_Parachute";
    };

    class PCM : P {
        headGear = "H_CrewHelmetHeli_B";
    };

};
