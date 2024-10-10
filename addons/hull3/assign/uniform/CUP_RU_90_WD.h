class CUP_RU_90_WD {
    class Rifleman {
        headGear = "CUP_H_RUS_SSH68_cover_vsr98";
        goggles = "";
        uniform = "CUP_U_O_RUS_VSR98_worn_MSV";
        vest = "CUP_V_RUS_6B3_Flora_2_ARM";
        backpack = "ark_backpack_med";
        insignia = "";
    };

    class Leader : Rifleman {
        uniform = "CUP_U_O_RUS_VSR98_worn_MSV_rolled_up";
        vest = "CUP_V_RUS_6B3_Flora_1_ARM";
    };

    class Officer : Leader {
        headGear = "CUP_H_RUS_Beret_VDV";
    };

    class Crew : Rifleman {
        headGear = "CUP_H_RUS_TSH_4_Brown";
        uniform = "CUP_U_O_RUS_VSR98_worn_gloves_MSV";
        vest = "CUP_V_RUS_6B3_Flora_4_ARM";
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
        backpack = "ark_backpack_large";
        insignia = "";
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        uniform = "CUP_U_O_RUS_VSR98_worn_gloves_MSV";
        vest = "CUP_V_RUS_6B3_Flora_3_ARM";
    };

    class AAR : Rifleman {
        backpack = "ark_backpack_large";
    };

    class RAT : Rifleman {
        uniform = "CUP_U_O_RUS_VSR98_worn_gloves_MSV";
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
        uniform = "CUP_U_O_RUS_VSR98_worn_gloves_MSV";
        vest = "CUP_V_RUS_6B3_Flora_3_ARM";
        backpack = "ark_backpack_large";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
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
        headGear = "CUP_H_RUS_ZSH_Shield_Up";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };

};
