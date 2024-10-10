class USM_USA_70_OD {
    class Rifleman {
        headGear = "CUP_H_USArmy_Helmet_M1_Olive";
        goggles = "";
        uniform = "usm_bdu_odg";
        vest = "usm_vest_LBE_rm_m_ARM";
        backpack = "ark_backpack_med";
        insignia = "";
    };

    class Leader : Rifleman {
        uniform = "usm_bdu_odg";
        vest = "usm_vest_LBE_rmp_m_ARM";
    };

    class Officer : Leader {
        headGear = "usm_bdu_cap_odg";
    };

    class Crew : Rifleman {
        headGear = "usm_helmet_cvc";
        uniform = "usm_bdu_odg";
        vest = "usm_vest_LBE_rmp_m_ARM";
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
        vest = "usm_vest_LBE_rm_m_ARM";
        insignia = "";
    };

    class FTL : Leader {
        headGear = "usm_bdu_boonie_odg";
    };

    class AR : Rifleman {
        uniform = "usm_bdu_odg";
        vest = "usm_vest_LBE_mg_m_ARM";
    };

    class AAR : Rifleman {
        backpack = "ark_backpack_large";
    };

    class RAT : Rifleman {
        vest = "usm_vest_LBE_gr_ARM";
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

    class HATAG : AAR {
        backpack = "ark_backpack_large";
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
        uniform = "usm_bdu_odg";
        headGear = "usm_bdu_boonie_odg";
        backpack = "ark_backpack_large";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "H_Bandanna_khk";
        uniform = "usm_bdu_odg";
        vest = "usm_vest_LBE_rmp_m_ARM";
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
        uniform = "usm_bdu_odg";
        vest = "usm_vest_LBE_rmp_m_ARM";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };

};
