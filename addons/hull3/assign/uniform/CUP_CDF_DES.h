class CUP_CDF_DES {
    class Rifleman {
        headGear = "CUP_H_CDF_H_PASGT_DST";
        goggles = "";
        uniform = "CUP_U_B_CDF_DST_1";
        vest = "CUP_V_CDF_6B3_1_DST_ARM";
        backpack = "ark_backpack_med";
        insignia = "";
    };

    class Leader : Rifleman {
        uniform = "CUP_U_B_CDF_DST_2";
        vest = "CUP_V_CDF_6B3_5_DST_ARM";
    };

    class Officer : Leader {
        headGear = "CUP_H_CDF_OfficerCap_DST";
    };

    class Crew : Rifleman {
        headGear = "CUP_H_RUS_TSH_4_Brown";
        vest = "CUP_V_CDF_6B3_2_DST_ARM";
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
        vest = "CUP_V_CDF_6B3_4_DST_ARM";
    };

    class AR : Rifleman {
        vest = "CUP_V_CDF_6B3_3_DST_ARM";
    };

    class AAR : Rifleman {
        backpack = "ark_backpack_large";
    };

    class RAT : Rifleman {
    };

    class MMGG : AR {
        vest = "CUP_V_CDF_6B3_3_DST_ARM";
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
        headGear = "H_Bandanna_sand";
        uniform = "CUP_U_B_CDF_DST_2";
        goggles = "G_Bandanna_tan";
        vest = "CUP_V_CDF_6B3_2_DST_ARM";
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
        uniform = "CUP_U_B_CDF_DST_1";
        vest = "CUP_V_CDF_6B3_2_DST_ARM";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };

};
