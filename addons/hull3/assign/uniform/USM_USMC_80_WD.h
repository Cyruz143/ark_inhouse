class USM_USMC_80_WD {
    class Rifleman {
        headGear = "usm_helmet_pasgt_w_m";
        goggles = "";
        uniform = "usm_bdu_w_m";
        vest = "usm_vest_pasgt_lbe_rm_m_ARM";
        backpack = "ark_backpack_med";
        insignia = "";
    };

    class Leader : Rifleman {
        uniform = "usm_bdu_w_m";
        vest = "usm_vest_LBE_gr_m_ARM";
    };

    class Officer : Leader {
        headGear = "usm_bdu_8point_wdl_m";
    };

    class Crew : Rifleman {
        headGear = "usm_helmet_cvc";
        uniform = "usm_bdu_w_m";
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
        vest = "usm_vest_pasgt_lbe_rm_m_ARM";
        insignia = "";
    };

    class FTL : Leader {
        headGear = "usm_helmet_pasgt_g_w_m";
        vest = "usm_vest_pasgt_lbe_rmp_m_ARM";
    };

    class AR : Rifleman {
        uniform = "usm_bdu_w_m";
        vest = "usm_vest_pasgt_lbe_mg_m_ARM";
    };

    class AAR : Rifleman {
        backpack = "ark_backpack_large";
    };

    class RAT : Rifleman {
        headGear = "usm_helmet_pasgt_g_w_m";
    };

    class MMGG : AR {
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
        uniform = "usm_bdu_w_m";
        headGear = "usm_helmet_pasgt_g_w_m";
        backpack = "ark_backpack_large";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "usm_bdu_boonie_wdl";
        uniform = "usm_bdu_w_m";
        vest = "usm_vest_pasgt_lbe_rmp_m_ARM";
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
        uniform = "usm_bdu_w_m";
        vest = "usm_vest_pasgt_ARM";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };

};
