class CUP_TKA_OD {
    class Rifleman {
        headGear = "CUP_H_TK_Helmet";
        goggles = "CUP_TK_NeckScarf";
        uniform = "CUP_U_O_TK_Green";
        vest = "CUP_V_O_TK_Vest_1_ARM";
        backpack = "ark_backpack_med";
        insignia = "";
    };

    class Leader : Rifleman {
        headGear = "CUP_H_TK_Beret";
    };

    class Officer : Leader {
        goggles = "G_Aviator";
    };

    class Crew : Rifleman {
        headGear = "CUP_H_TK_TankerHelmet";
        vest = "CUP_V_O_TK_CrewBelt_ARM";
        backpack = "ark_backpack_small";
    };

    class CO : Officer {
        uniform = "CUP_U_O_TK_Officer";
        vest = "CUP_V_O_TK_OfficerBelt2_ARM";
    };

    class XO : CO {
        backpack = "ark_backpack_large";
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        backpack = "ark_backpack_large";
        vest = "CUP_V_O_TK_Vest_2_ARM";
        insignia = "";
    };

    class FTL : Leader {
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
        headGear = "CUP_H_TK_PilotHelmet";
        vest = "CUP_V_O_TK_CrewBelt_ARM";
        backpack = "B_Parachute";
        goggles = "G_Aviator";
    };

    class PCM : P {
    };

};
