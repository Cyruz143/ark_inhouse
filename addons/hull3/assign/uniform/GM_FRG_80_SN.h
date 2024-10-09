class GM_FRG_80_SN {
    class Rifleman {
        headGear = "gm_ge_headgear_m62_cover_win";
        goggles = "";
        uniform = "gm_ge_army_uniform_soldier_parka_80_win";
        vest = "gm_ge_army_vest_80_rifleman_ARM";
        backpack = "ark_backpack_med";
        insignia = "";
    };

    class Leader : Rifleman {
        vest = "gm_ge_army_vest_80_leader_ARM";
    };

    class Officer : Leader {
        headGear = "gm_ge_headgear_hat_80_gry";
    };

    class Crew : Rifleman {
        headGear = "gm_ge_headgear_crewhat_80_blk";
        uniform = "gm_ge_army_uniform_crew_80_oli";
        vest = "gm_ge_army_vest_80_crew_ARM";
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
        vest = "gm_ge_army_vest_80_medic_ARM";
        backpack = "ark_backpack_large";
        insignia = "";
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        headGear = "gm_ge_headgear_m62_win_pap_01";
        vest = "gm_ge_army_vest_80_machinegunner_ARM";
    };

    class AAR : Rifleman {
    };

    class RAT : Rifleman {
        headGear = "gm_ge_headgear_m62_win_pap_01";
    };

    class MMGG : AR {
        vest = "gm_ge_army_vest_80_machinegunner_ARM";
        backpack = "ark_backpack_large";
    };

    class MMGAG : AAR {
    };

    class HMGG : Rifleman {
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

    class DHATG : Rifleman {
    };

    class DHATAG : AAR {
    };

    class DHATAC : AAR {
    };

    class SAMG : Rifleman {
    };

    class SAMAG : AAR {
    };

    class SAMAC : AAR {
    };

    class GMGG : Rifleman {
    };

    class GMGAG : AAR {
    };

    class GMGAC : AAR {
    };

    class MTRG : Rifleman {
    };

    class MTRAG : AAR {
    };

    class MTRAC : AAR {
    };

    class ENG : Rifleman {
        vest = "gm_ge_army_vest_80_demolition_ARM";
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
        headGear = "gm_ge_headgear_sph4_oli";
        uniform = "gm_ge_army_uniform_pilot_oli";
        vest = "gm_ge_army_vest_pilot_oli_ARM";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };

};
