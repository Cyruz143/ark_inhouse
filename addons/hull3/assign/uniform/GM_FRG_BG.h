class GM_FRG_BG {
    class Rifleman {
        headGear = "gm_ge_bgs_headgear_m35_53_blk";
        goggles = "";
        uniform = "gm_ge_bgs_uniform_soldier_80_smp";
        vest = "gm_ge_bgs_vest_80_rifleman";
        backpack = "ark_backpack_med";
        insignia = "";
    };

    class Leader : Rifleman {
    };

    class Officer : Leader {
        headGear = "gm_ge_pol_headgear_cap_80_grn";
    };

    class Crew : Rifleman {
        headGear = "gm_ge_headgear_crewhat_80_blk";
        uniform = "gm_ge_army_uniform_crew_80_oli";
        vest = "gm_ge_army_vest_80_crew";
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
        headGear = "gm_ge_bgs_headgear_m35_53_net_blk";
    };

    class AAR : Rifleman {
    };

    class RAT : Rifleman {
        headGear = "gm_ge_bgs_headgear_m35_53_net_blk";
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
        uniform = "gm_ge_army_uniform_pilot_rolled_oli";
        vest = "gm_ge_army_vest_80_belt";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };

};
