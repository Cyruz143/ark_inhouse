class GM_GDR_80_AIR {
    class Rifleman {
        headGear = "gm_gc_headgear_fjh_model4_oli";
        goggles = "";
        uniform = "gm_gc_army_uniform_soldier_80_str";
        vest = "gm_gc_army_vest_80_rifleman_str_ARM";
        backpack = "ark_backpack_med";
        insignia = "";
    };

    class Leader : Rifleman {
        uniform = "gm_gc_army_uniform_soldier_gloves_80_str";
        vest = "gm_gc_army_vest_80_leader_str_ARM";
    };

    class Officer : Leader {
        headGear = "gm_gc_headgear_beret_officer_str";
    };

    class Crew : Rifleman {
        headGear = "gm_gc_army_headgear_crewhat_80_blk";
        uniform = "gm_gc_civ_uniform_pilot_80_blk";
        vest = "gm_gc_army_vest_80_belt_str_ARM";
        backpack = "ark_backpack_small";
    };

    class CO : Officer {
    };

    class XO : CO {
        backpack = "ark_backpack_large";
    };

    class SL : Officer {
        headGear = "gm_gc_headgear_beret_str";
    };

    class Medic : Rifleman {
        backpack = "ark_backpack_large";
        insignia = "";
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        vest = "gm_gc_army_vest_80_lmg_str_ARM";
    };

    class AAR : Rifleman {
        backpack = "ark_backpack_large";
    };

    class RAT : Rifleman {
        vest = "gm_gc_army_vest_80_at_str_ARM";
    };

    class MMGG : AR {
        backpack = "ark_backpack_large";
    };

    class MMGAG : AAR {
        vest = "gm_gc_army_vest_80_leader_str_ARM";
    };

    class HMGG : AR {
    };

    class HMGAG : AAR {
        vest = "gm_gc_army_vest_80_leader_str_ARM";
    };

    class HMGAC : AAR {
    };

    class MATG : RAT {
        backpack = "ark_backpack_large";
    };

    class MATAG : AAR {
        vest = "gm_gc_army_vest_80_leader_str_ARM";
    };

    class MATAC : MATAG {
    };

    class HATG : RAT {
        backpack = "ark_backpack_large";
    };

    class HATAG : AAR {
        vest = "gm_gc_army_vest_80_leader_str_ARM";
    };

    class HATAC : HATAG {
    };

    class DHATG : AR {
    };

    class DHATAG : AAR {
        vest = "gm_gc_army_vest_80_leader_str_ARM";
    };

    class DHATAC : AAR {
    };

    class SAMG : AR {
    };

    class SAMAG : AAR {
        vest = "gm_gc_army_vest_80_leader_str_ARM";
    };

    class SAMAC : AAR {
    };

    class GMGG : AR {
    };

    class GMGAG : AAR {
        vest = "gm_gc_army_vest_80_leader_str_ARM";
    };

    class GMGAC : AAR {
    };

    class MTRG : AR {
    };

    class MTRAG : AAR {
        vest = "gm_gc_army_vest_80_leader_str_ARM";
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
        headGear = "gm_gc_headgear_zsh3_wht";
        uniform = "gm_pl_airforce_uniform_pilot_80_gry";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };

};
