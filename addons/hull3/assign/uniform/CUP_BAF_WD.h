class CUP_BAF_WD {
    class Rifleman {
        headGear = "CUP_H_BAF_DPM_Mk6_EMPTY";
        goggles = "";
        uniform = "CUP_U_B_BAF_DPM_S2_UnRolled";
        vest = "CUP_V_B_BAF_DPM_Osprey_Mk3_Rifleman_ARM";
        backpack = "ark_backpack_med";
        insignia = "";
    };

    class Leader : Rifleman {
        headGear = "CUP_H_BAF_DPM_Mk6_EMPTY_PRR";
        uniform = "CUP_U_B_BAF_DPM_S1_RolledUp";
        vest = "CUP_V_B_BAF_DPM_Osprey_Mk3_Grenadier_ARM";
    };

    class Officer : Leader {
        headGear = "CUP_H_BAF_Officer_Beret_PRR_U";
        vest = "CUP_V_B_BAF_DPM_Osprey_Mk3_Officer_ARM";
    };

    class Crew : Rifleman {
        headGear = "CUP_H_BAF_DPM_Mk6_CREW_PRR";
        uniform = "CUP_U_B_BAF_DPM_S1_RolledUp";
        vest = "CUP_V_B_BAF_DPM_Osprey_Mk3_Crewman_ARM";
        backpack = "ark_backpack_small";
        goggles = "CUP_FR_NeckScarf2";
    };

    class CO : Officer {
    };

    class XO : CO {
        backpack = "ark_backpack_large";
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        headGear = "CUP_H_BAF_DPM_Mk6_NETTING_PRR";
        uniform = "CUP_U_B_BAF_DPM_S2_UnRolled";
        vest = "CUP_V_B_BAF_DPM_Osprey_Mk3_Medic_ARM";
        backpack = "ark_backpack_large";
        insignia = "";
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        headGear = "CUP_H_BAF_DPM_Mk6_GOGGLES_PRR";
        uniform = "CUP_U_B_BAF_DPM_Tshirt";
        vest = "CUP_V_B_BAF_DPM_Osprey_Mk3_AutomaticRifleman_ARM";
    };

    class AAR : Rifleman {
        backpack = "ark_backpack_large";
    };

    class RAT : Rifleman {
        vest = "CUP_V_B_BAF_DPM_Osprey_Mk3_Scout_ARM";
    };

    class MMGG : AR {
        backpack = "ark_backpack_large";
    };

    class MMGAG : AAR {
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
    };

    class MATAC : MATAG {
    };

    class HATG : RAT {
        backpack = "ark_backpack_large";
    };

    class HATAG : AAR {
    };

    class HATAC : HATAG {
    };

    class DHATG : AR {
    };

    class DHATAG : AAR {
    };

    class DHATAC : AAR {
    };

    class SAMG : AR {
    };

    class SAMAG : AAR {
    };

    class SAMAC : AAR {
    };

    class GMGG : AR {
    };

    class GMGAG : AAR {
    };

    class GMGAC : AAR {
    };

    class MTRG : AR {
    };

    class MTRAG : AAR {
    };

    class MTRAC : AAR {
    };

    class ENG : Rifleman {
        uniform = "CUP_U_B_BAF_DPM_Tshirt";
        vest = "CUP_V_B_BAF_DPM_Osprey_Mk3_Engineer_ARM";
        backpack = "ark_backpack_large";
        headGear = "CUP_H_BAF_DPM_Mk6_GLASS_PRR";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "CUP_H_BAF_DPM_Mk6_NETTING_PRR";
        goggles = "CUP_FR_NeckScarf2";
        uniform = "CUP_U_B_BAF_DPM_S1_RolledUp";
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
        headGear = "CUP_H_BAF_PILOT";
        uniform = "CUP_U_B_BAF_DPM_S1_RolledUp";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };

};
