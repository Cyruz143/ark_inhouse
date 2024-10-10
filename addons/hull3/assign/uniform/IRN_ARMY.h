class IRN_ARMY {
    class Rifleman {
        headGear = "MNP_Helmet_PAGST_IRGC";
        goggles = "";
        uniform = "MNP_CombatUniform_IR_IRGC_A";
        vest = "CUP_V_O_SLA_M23_1_BRN_ARM";
        backpack = "ark_backpack_med";
        insignia = "";
    };

    class Leader : Rifleman {
    };

    class Officer : Leader {
        uniform = "MNP_CombatUniform_IR_IRGC_Med";
        goggles = "CUP_FR_NeckScarf2";
    };

    class Crew : Rifleman {
        headGear = "CUP_H_TK_TankerHelmet";
        vest = "CUP_V_O_TK_CrewBelt_ARM";
        backpack = "ark_backpack_small";
    };

    class CO : Officer {
    };

    class XO : CO {
        uniform = "MNP_CombatUniform_IR_IRGC_Med_B";
        backpack = "ark_backpack_large";
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        backpack = "ark_backpack_large";
        insignia = "";
    };

    class FTL : Leader {
        uniform = "MNP_CombatUniform_IR_IRGC_Med_B";
    };

    class AR : Rifleman {
    };

    class AAR : Rifleman {
        backpack = "ark_backpack_large";
    };

    class RAT : Rifleman {
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
        backpack = "ark_backpack_large";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "CUP_H_TK_Lungee";
        goggles = "";
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
        headGear = "CUP_H_SLA_Pilot_Helmet";
        vest = "CUP_V_B_PilotVest_ARM";
        goggles = "G_Aviator";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };

};
