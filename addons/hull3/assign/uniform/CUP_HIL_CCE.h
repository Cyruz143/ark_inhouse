class CUP_HIL_CCE {
    class Rifleman {
        headGear = "CUP_H_HIL_HelmetACH_CCE";
        goggles = "";
        uniform = "CUP_U_B_HIL_ACU_CCE";
        vest = "CUP_V_PMC_CIRAS_OD_Patrol_ARM";
        backpack = "ark_backpack_med";
        insignia = "";
    };

    class Leader : Rifleman {
        headGear = "CUP_H_HIL_HelmetACH_Headset_CCE";
        uniform = "CUP_U_B_HIL_ACU_Gloves_CCE";
        vest = "CUP_V_PMC_CIRAS_OD_Veh_ARM";
    };

    class Officer : Leader {
        headGear = "CUP_H_Beret_HIL";
        goggles = "G_Aviator";
        uniform = "CUP_U_B_HIL_ACU_Kneepad_Gloves_CCE";
    };

    class Crew : Rifleman {
        headGear = "CUP_H_USMC_ACVC_WDL";
        goggles = "";
        uniform = "CUP_U_B_HIL_ACU_Rolled_CCE";
        vest = "CUP_V_PMC_CIRAS_OD_Empty_ARM";
        backpack = "ark_backpack_small";
    };

    class CO : Officer {
        vest = "CUP_V_PMC_CIRAS_OD_TL_ARM";
    };

    class XO : CO {
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        headGear = "CUP_H_HIL_HelmetACH_GCovered_CCE";
        uniform = "CUP_U_B_HIL_ACU_Kneepad_Rolled_CCE";
        backpack = "ark_backpack_large";
        insignia = "";
    };

    class FTL : Leader {
        headGear = "CUP_H_HIL_HelmetACH_Headset_CCE";
    };

    class AR : Rifleman {
        headGear = "CUP_H_HIL_HelmetACH_GCovered_CCE";
        uniform = "CUP_U_B_HIL_ACU_Kneepad_Rolled_Gloves_CCE";
    };

    class AAR : Rifleman {
        uniform = "CUP_U_B_HIL_ACU_Kneepad_Rolled_CCE";
        backpack = "ark_backpack_large";
    };

    class RAT : Rifleman {
        headGear = "CUP_H_HIL_HelmetACH_ESS_CCE";
        uniform = "CUP_U_B_HIL_ACU_Kneepad_CCE";
    };

    class MMGG : AR {
        backpack = "ark_backpack_large";
    };

    class MMGAG : AAR {
        headGear = "CUP_H_HIL_HelmetACH_ESS_Headset_CCE";
    };

    class HMGG : AR {
    };

    class HMGAG : AAR {
        headGear = "CUP_H_HIL_HelmetACH_ESS_Headset_CCE";
    };

    class HMGAC : AAR {
    };

    class MATG : RAT {
        backpack = "ark_backpack_large";
    };

    class MATAG : AAR {
        headGear = "CUP_H_HIL_HelmetACH_ESS_Headset_CCE";
    };

    class MATAC : MATAG {
    };

    class HATG : RAT {
        backpack = "ark_backpack_large";
    };

    class HATAG : AAR {
        headGear = "CUP_H_HIL_HelmetACH_ESS_Headset_CCE";
    };

    class HATAC : HATAG {
        headGear = "CUP_H_HIL_HelmetACH_ESS_CCE";
    };

    class DHATG : AR {
    };

    class DHATAG : AAR {
        headGear = "CUP_H_HIL_HelmetACH_ESS_Headset_CCE";
    };

    class DHATAC : AAR {
    };

    class SAMG : AR {
    };

    class SAMAG : AAR {
        headGear = "CUP_H_HIL_HelmetACH_ESS_Headset_CCE";
    };

    class SAMAC : AAR {
    };

    class GMGG : AR {
    };

    class GMGAG : AAR {
        headGear = "CUP_H_HIL_HelmetACH_ESS_Headset_CCE";
    };

    class GMGAC : AAR {
    };

    class MTRG : AR {
    };

    class MTRAG : AAR {
        headGear = "CUP_H_HIL_HelmetACH_ESS_Headset_CCE";
    };

    class MTRAC : AAR {
    };

    class ENG : Rifleman {
        headGear = "CUP_H_HIL_HelmetACH_ESS_Headset_CCE";
        uniform = "CUP_U_B_HIL_ACU_Kneepad_Gloves_CCE";
        backpack = "ark_backpack_large";
    };

    class ENGA : ENG {
        headGear = "CUP_H_HIL_HelmetACH_ESS_CCE";
    };

    class SN : Rifleman {
        headGear = "CUP_H_Booniehat_CCE";
        uniform = "CUP_U_B_HIL_ACU_Kneepad_Rolled_Gloves_CCE";
        vest = "CUP_V_PMC_CIRAS_OD_TL_ARM";
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
        uniform = "CUP_U_B_HIL_ACU_Gloves_CCE";
        backpack = "B_Parachute";
    };

    class PCM : P {
        headGear = "H_CrewHelmetHeli_O";
    };

};
