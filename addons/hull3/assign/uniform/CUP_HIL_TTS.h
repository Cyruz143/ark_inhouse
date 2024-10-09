class CUP_HIL_TTS {
    class Rifleman {
        headGear = "CUP_H_HIL_HelmetACH_TTS";
        goggles = "";
        uniform = "CUP_U_B_HIL_ACU_TTS";
        vest = "CUP_V_CPC_Fastbelt_rngr_ARM";
        backpack = "ark_backpack_med";
        insignia = "";
    };

    class Leader : Rifleman {
        headGear = "CUP_H_HIL_HelmetACH_Headset_TTS";
        uniform = "CUP_U_B_HIL_ACU_Gloves_TTS";
        vest = "CUP_V_CPC_communicationsbelt_rngr_ARM";
    };

    class Officer : Leader {
        headGear = "CUP_H_Beret_HIL";
        goggles = "G_Aviator";
        uniform = "CUP_U_B_HIL_ACU_Kneepad_Gloves_TTS";
    };

    class Crew : Rifleman {
        headGear = "CUP_H_USMC_ACVC_WDL";
        goggles = "";
        uniform = "CUP_U_B_HIL_ACU_Rolled_TTS";
        vest = "CUP_V_CPC_light_rngr_ARM";
        backpack = "ark_backpack_small";
    };

    class CO : Officer {
    };

    class XO : CO {
    };

    class SL : Officer {
        vest = "CUP_V_CPC_tlbelt_rngr_ARM";
    };

    class Medic : Rifleman {
        headGear = "CUP_H_HIL_HelmetACH_GCovered_TTS";
        uniform = "CUP_U_B_HIL_ACU_Kneepad_Rolled_TTS";
        vest = "CUP_V_CPC_medicalbelt_rngr_ARM";
        backpack = "ark_backpack_large";
        insignia = "";
    };

    class FTL : Leader {
        headGear = "CUP_H_HIL_HelmetACH_Headset_TTS";
        vest = "CUP_V_CPC_weaponsbelt_rngr_ARM";
    };

    class AR : Rifleman {
        headGear = "CUP_H_HIL_HelmetACH_GCovered_TTS";
        uniform = "CUP_U_B_HIL_ACU_Kneepad_Rolled_Gloves_TTS";
        vest = "CUP_V_CPC_medicalbelt_rngr_ARM";
    };

    class AAR : Rifleman {
        uniform = "CUP_U_B_HIL_ACU_Kneepad_Rolled_TTS";
        backpack = "ark_backpack_large";
    };

    class RAT : Rifleman {
        headGear = "CUP_H_HIL_HelmetACH_ESS_TTS";
        uniform = "CUP_U_B_HIL_ACU_Kneepad_TTS";
    };

    class MMGG : AR {
        backpack = "ark_backpack_large";
    };

    class MMGAG : AAR {
        headGear = "CUP_H_HIL_HelmetACH_ESS_Headset_TTS";
    };

    class HMGG : AR {
    };

    class HMGAG : AAR {
        headGear = "CUP_H_HIL_HelmetACH_ESS_Headset_TTS";
    };

    class HMGAC : AAR {
    };

    class MATG : RAT {
        backpack = "ark_backpack_large";
    };

    class MATAG : AAR {
        headGear = "CUP_H_HIL_HelmetACH_ESS_Headset_TTS";
    };

    class MATAC : MATAG {
    };

    class HATG : RAT {
        backpack = "ark_backpack_large";
    };

    class HATAG : AAR {
        headGear = "CUP_H_HIL_HelmetACH_ESS_Headset_TTS";
    };

    class HATAC : HATAG {
        headGear = "CUP_H_HIL_HelmetACH_ESS_TTS";
    };

    class DHATG : AR {
    };

    class DHATAG : AAR {
        headGear = "CUP_H_HIL_HelmetACH_ESS_Headset_TTS";
    };

    class DHATAC : AAR {
    };

    class SAMG : AR {
    };

    class SAMAG : AAR {
        headGear = "CUP_H_HIL_HelmetACH_ESS_Headset_TTS";
    };

    class SAMAC : AAR {
    };

    class GMGG : AR {
    };

    class GMGAG : AAR {
        headGear = "CUP_H_HIL_HelmetACH_ESS_Headset_TTS";
    };

    class GMGAC : AAR {
    };

    class MTRG : AR {
    };

    class MTRAG : AAR {
        headGear = "CUP_H_HIL_HelmetACH_ESS_Headset_TTS";
    };

    class MTRAC : AAR {
    };

    class ENG : Rifleman {
        headGear = "CUP_H_HIL_HelmetACH_ESS_Headset_TTS";
        uniform = "CUP_U_B_HIL_ACU_Kneepad_Gloves_TTS";
        backpack = "ark_backpack_large";
    };

    class ENGA : ENG {
        headGear = "CUP_H_HIL_HelmetACH_ESS_TTS";
    };

    class SN : Rifleman {
        headGear = "CUP_H_Booniehat_TTS";
        uniform = "CUP_U_B_HIL_ACU_Kneepad_Rolled_Gloves_TTS";
        vest = "CUP_V_CPC_Fast_rngr_ARM";
        backpack = "ark_backpack_small";
    };

    class SP : SN {
    };

    class VC : Crew {
    };

    class VG : Crew {
    };

    class VD : Crew {
    };

    class P : Crew {
        headGear = "H_PilotHelmetHeli_O";
        uniform = "CUP_U_B_HIL_ACU_Gloves_TTS";
        backpack = "B_Parachute";
    };

    class PCM : P {
        headGear = "H_CrewHelmetHeli_O";
    };

};
