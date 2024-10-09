class USM_USA_90_WD {
    class Rifleman {
        headGear = "usm_helmet_pasgt_w";
        goggles = "";
        uniform = "usm_bdu_w";
        vest = "usm_vest_pasgt_lbv_rm_ARM";
        backpack = "ark_backpack_med";
        insignia = "";
    };

    class Leader : Rifleman {
        uniform = "usm_bdu_w";
        vest = "usm_vest_pasgt_lbv_gr_ARM";
    };

    class Officer : Leader {
        headGear = "usm_bdu_cap_wdl";
    };

    class Crew : Rifleman {
        headGear = "usm_helmet_cvc";
        uniform = "usm_bdu_w";
        vest = "usm_vest_pasgt_ARM";
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
        vest = "usm_vest_pasgt_lbv_rm_ARM";
        insignia = "";
    };

    class FTL : Leader {
        headGear = "usm_helmet_pasgt_g_w";
        vest = "usm_vest_pasgt_lbv_rmp_ARM";
    };

    class AR : Rifleman {
        uniform = "usm_bdu_w";
        vest = "usm_vest_pasgt_lbv_mg_ARM";
    };

    class AAR : Rifleman {
        backpack = "ark_backpack_large";
    };

    class RAT : Rifleman {
        headGear = "usm_helmet_pasgt_g_w";
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

    class MATAG : RAT {
        backpack = "ark_backpack_large";
    };

    class MATAC : MATAG {
    };

    class HATG : RAT {
        backpack = "ark_backpack_large";
    };

    class HATAG : RAT {
        backpack = "ark_backpack_large";
    };

    class HATAC : HATAG {
    };

    class DHATG : Rifleman {
    };

    class DHATAG : Rifleman {
    };

    class DHATAC : Rifleman {
    };

    class SAMG : Rifleman {
    };

    class SAMAG : Rifleman {
    };

    class SAMAC : Rifleman {
    };

    class GMGG : Rifleman {
    };

    class GMGAG : Rifleman {
    };

    class GMGAC : Rifleman {
    };

    class MTRG : Rifleman {
    };

    class MTRAG : Rifleman {
    };

    class MTRAC : Rifleman {
    };

    class ENG : Rifleman {
        uniform = "usm_bdu_w";
        headGear = "usm_helmet_pasgt_g_w";
        backpack = "ark_backpack_large";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "usm_bdu_boonie_wdl";
        uniform = "usm_bdu_w";
        vest = "usm_vest_pasgt_lbv_rmp_ARM";
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
        headGear = "CUP_H_BAF_Helmet_Pilot";
        uniform = "usm_bdu_w";
        vest = "usm_vest_pasgt_ARM";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };

};
