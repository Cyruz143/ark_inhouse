class CUP_USA_RAN {
    class Rifleman {
        headGear = "CUP_H_USArmy_HelmetACH_OEFCP";
        goggles = "CUP_G_Oakleys_Clr";
        uniform = "CUP_U_B_USArmy_ACU_OEFCP";
        vest = "CUP_V_B_IOTV_OEFCP_Rifleman_USArmy_ARM";
        backpack = "ark_backpack_med";
        insignia = "";
    };

    class Leader : Rifleman {
        uniform = "CUP_U_B_USArmy_ACU_Rolled_OEFCP";
        vest = "CUP_V_B_IOTV_OEFCP_SL_USArmy_ARM";
    };

    class Officer : Leader {
        headGear = "CUP_H_US_patrol_cap_OEFCP";
        vest = "CUP_V_B_IOTV_OEFCP_TL_USArmy_ARM";
    };

    class Crew : Rifleman {
        headGear = "CUP_H_USMC_ACVC_DES";
        uniform = "CUP_U_B_USArmy_ACU_Gloves_OEFCP";
        vest = "CUP_V_B_IOTV_OEFCP_Empty_USArmy_ARM";
        backpack = "ark_backpack_small";
    };

    class CO : Officer {
    };

    class XO : CO {
        backpack = "ark_backpack_large";
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        headGear = "CUP_H_USArmy_HelmetACH_ESS_Headset_OEFCP";
        uniform = "CUP_U_B_USArmy_ACU_Kneepad_OEFCP";
        vest = "CUP_V_B_IOTV_OEFCP_Medic_USArmy_ARM";
        backpack = "ark_backpack_large";
        insignia = "";
    };

    class FTL : Leader {
        headGear = "CUP_H_USArmy_HelmetACH_Headset_OEFCP";
        uniform = "CUP_U_B_USArmy_ACU_Kneepad_Rolled_OEFCP";
        vest = "CUP_V_B_IOTV_OEFCP_Grenadier_USArmy_ARM";
    };

    class AR : Rifleman {
        headGear = "CUP_H_USArmy_HelmetACH_ESS_OEFCP";
        uniform = "CUP_U_B_USArmy_ACU_Kneepad_Rolled_Gloves_OEFCP";
        vest = "CUP_V_B_IOTV_OEFCP_SAW_USArmy_ARM";
    };

    class AAR : Rifleman {
        backpack = "ark_backpack_large";
    };

    class RAT : Rifleman {
        headGear = "CUP_H_USArmy_HelmetACH_GCOVERED_OEFCP";
        uniform = "CUP_U_B_USArmy_ACU_Rolled_Gloves_OEFCP";
        vest = "CUP_V_B_IOTV_OEFCP_Rifleman_Deltoid_USArmy_ARM";
    };

    class MMGG : AR {
        uniform = "CUP_U_B_USArmy_ACU_Kneepad_Gloves_OEFCP";
        vest = "CUP_V_B_IOTV_OEFCP_MG_USArmy_ARM";
        backpack = "ark_backpack_large";
    };

    class MMGAG : AAR {
        headGear = "CUP_H_USArmy_HelmetACH_GCOVERED_Headset_OEFCP";
    };

    class HMGG : AR {
    };

    class HMGAG : AAR {
    };

    class HMGAC : AAR {
    };

    class MATG : RAT {
        backpack = "ark_backpack_large";
    };

    class MATAG : AAR {
        headGear = "CUP_H_USArmy_HelmetACH_GCOVERED_Headset_OEFCP";
    };

    class MATAC : MATAG {
    };

    class HATG : RAT {
        backpack = "ark_backpack_large";
    };

    class HATAG : AAR {
        headGear = "CUP_H_USArmy_HelmetACH_GCOVERED_Headset_OEFCP";
    };

    class HATAC : HATAG {
    };

    class DHATG : AR {
    };

    class DHATAG : AAR {
        headGear = "CUP_H_USArmy_HelmetACH_GCOVERED_Headset_OEFCP";
    };

    class DHATAC : AAR {
    };

    class SAMG : AR {
    };

    class SAMAG : AAR {
        headGear = "CUP_H_USArmy_HelmetACH_GCOVERED_Headset_OEFCP";
    };

    class SAMAC : AAR {
    };

    class GMGG : AR {
    };

    class GMGAG : AAR {
        headGear = "CUP_H_USArmy_HelmetACH_GCOVERED_Headset_OEFCP";
    };

    class GMGAC : AAR {
    };

    class MTRG : AR {
    };

    class MTRAG : AAR {
        headGear = "CUP_H_USArmy_HelmetACH_GCOVERED_Headset_OEFCP";
    };

    class MTRAC : AAR {
    };

    class ENG : Rifleman {
        headGear = "CUP_H_USArmy_HelmetACH_GCOVERED_Headset_OEFCP";
        uniform = "CUP_U_B_USArmy_ACU_Kneepad_Rolled_Gloves_OEFCP";
        vest = "CUP_V_B_IOTV_OEFCP_Rifleman_Deltoid_USArmy_ARM";
        backpack = "ark_backpack_large";
    };

    class ENGA : ENG {
        headGear = "CUP_H_USArmy_HelmetACH_GCOVERED_OEFCP";
    };

    class SN : Rifleman {
        headGear = "CUP_H_USArmy_Boonie_OEFCP";
        uniform = "CUP_U_B_USArmy_ACU_Kneepad_Gloves_OEFCP";
        vest = "CUP_V_B_IOTV_OEFCP_Rifleman_USArmy_ARM";
        backpack = "ark_backpack_small";
    };

    class SP : SN {
        headGear = "CUP_H_USArmy_Boonie_hs_OEFCP";
    };

    class VC : Crew {
    };

    class VG : Crew {
    };

    class VD : Crew {
    };

    class P : Crew {
        headGear = "H_PilotHelmetHeli_O";
        uniform = "CUP_U_B_USMC_PilotOverall";
        vest = "CUP_V_B_PilotVest_ARM";
        backpack = "B_Parachute";
    };

    class PCM : P {
        headGear = "H_CrewHelmetHeli_O";
    };

};
