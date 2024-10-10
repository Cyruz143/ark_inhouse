class GMX_TKA_OD {
    class Rifleman {
        headGear = "gm_gc_army_headgear_m56";
        goggles = "";
        uniform = "gmx_tak_army_uniform_soldier_oli";
        vest = "gm_ge_army_vest_80_rifleman_ARM";
        backpack = "ark_backpack_med";
    };

    class Leader : Rifleman {
        vest = "gm_ge_army_vest_80_leader_ARM";
    };

    class Officer : Leader {
        headGear = "CUP_H_TK_Beret";
        goggles = "G_Aviator";
    };

    class Crew : Rifleman {
        headGear = "gm_gc_army_headgear_crewhat_80_blk";
        uniform = "gmx_tak_army_uniform_crew_oli";
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
        headGear = "gm_gc_army_headgear_m56_net";
        vest = "gm_ge_army_vest_80_medic_ARM";
        backpack = "ark_backpack_large";
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        vest = "gm_ge_army_vest_80_machinegunner_ARM";
    };

    class AAR : Rifleman {
        headGear = "gm_gc_army_headgear_m56_net";
        backpack = "ark_backpack_large";
    };

    class RAT : Rifleman {
        headGear = "gm_gc_army_headgear_m56_net";
    };

    class MMGG : AR {
        backpack = "ark_backpack_large";
    };

    class MMGAG : AAR {
        vest = "gm_ge_army_vest_80_leader_ARM";
    };

    class HMGG : AR {
    };

    class HMGAG : AAR {
        vest = "gm_ge_army_vest_80_leader_ARM";
    };

    class HMGAC : AAR {
    };

    class MATG : RAT {
        backpack = "ark_backpack_large";
    };

    class MATAG : AAR {
        vest = "gm_ge_army_vest_80_leader_ARM";
    };

    class MATAC : MATAG {
    };

    class HATG : RAT {
        backpack = "ark_backpack_large";
    };

    class HATAG : AAR {
        vest = "gm_ge_army_vest_80_leader_ARM";
    };

    class HATAC : HATAG {
    };

    class DHATG : AR {
    };

    class DHATAG : AAR {
        vest = "gm_ge_army_vest_80_leader_ARM";
    };

    class DHATAC : AAR {
    };

    class SAMG : AR {
    };

    class SAMAG : AAR {
        vest = "gm_ge_army_vest_80_leader_ARM";
    };

    class SAMAC : AAR {
    };

    class GMGG : AR {
    };

    class GMGAG : AAR {
        vest = "gm_ge_army_vest_80_leader_ARM";
    };

    class GMGAC : AAR {
    };

    class MTRG : AR {
    };

    class MTRAG : AAR {
        vest = "gm_ge_army_vest_80_leader_ARM";
    };

    class MTRAC : AAR {
    };

    class ENG : Rifleman {
        headGear = "gm_gc_army_headgear_m56_net";
        vest = "gm_ge_army_vest_80_demolition_ARM";
        backpack = "ark_backpack_large";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "gm_gc_army_headgear_m56_net";
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
        uniform = "gmx_tak_army_uniform_pilot_oli";
        vest = "gm_ge_army_vest_pilot_oli_ARM";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };

};
