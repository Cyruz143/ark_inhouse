class GM_PRL_80_AIR {
    class Rifleman {
        headGear = "gm_pl_army_headgear_wz63_oli";
        goggles = "";
        uniform = "gm_pl_army_uniform_soldier_80_moro";
        vest = "gm_pl_army_vest_80_rifleman_gry_ARM";
        backpack = "ark_backpack_med";
        insignia = "";
    };

    class Leader : Rifleman {
        uniform = "gm_pl_army_uniform_soldier_autumn_80_moro";
        vest = "gm_pl_army_vest_80_leader_gry_ARM";
    };

    class Officer : Leader {
        headGear = "gm_pl_headgear_beret_bdx";
    };

    class Crew : Rifleman {
        headGear = "gm_gc_army_headgear_crewhat_80_blk";
        uniform = "gm_gc_civ_uniform_pilot_80_blk";
        vest = "gm_pl_army_vest_80_crew_gry_ARM";
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
        headGear = "gm_pl_army_headgear_wz63_net_oli";
        uniform = "gm_pl_army_uniform_soldier_rolled_80_moro";
        vest = "gm_pl_army_vest_80_rifleman_smg_gry_ARM";
        backpack = "ark_backpack_large";
        insignia = "";
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        uniform = "gm_pl_army_uniform_soldier_rolled_80_moro";
        vest = "gm_pl_army_vest_80_mg_gry_ARM";
    };

    class AAR : Rifleman {
        headGear = "gm_pl_army_headgear_wz63_net_oli";
        backpack = "ark_backpack_large";
    };

    class RAT : Rifleman {
        headGear = "gm_pl_army_headgear_wz63_net_oli";
        uniform = "gm_pl_army_uniform_soldier_rolled_80_moro";
        vest = "gm_pl_army_vest_80_at_gry_ARM";
    };

    class MMGG : AR {
        backpack = "ark_backpack_large";
    };

    class MMGAG : AAR {
        vest = "gm_pl_army_vest_80_leader_gry_ARM";
    };

    class HMGG : AR {
        vest = "gm_pl_army_vest_80_rifleman_smg_gry_ARM";
    };

    class HMGAG : AAR {
        vest = "gm_pl_army_vest_80_leader_gry_ARM";
    };

    class HMGAC : AAR {
        vest = "gm_pl_army_vest_80_rifleman_smg_gry_ARM";
    };

    class MATG : RAT {
        vest = "gm_pl_army_vest_80_rifleman_smg_gry_ARM";
        backpack = "ark_backpack_large";
    };

    class MATAG : AAR {
        vest = "gm_pl_army_vest_80_leader_gry_ARM";
    };

    class MATAC : MATAG {
        vest = "gm_pl_army_vest_80_rifleman_smg_gry_ARM";
    };

    class HATG : RAT {
        vest = "gm_pl_army_vest_80_rifleman_smg_gry_ARM";
        backpack = "ark_backpack_large";
    };

    class HATAG : AAR {
        vest = "gm_pl_army_vest_80_leader_gry_ARM";
    };

    class HATAC : HATAG {
        vest = "gm_pl_army_vest_80_rifleman_smg_gry_ARM";
    };

    class DHATG : AR {
        vest = "gm_pl_army_vest_80_rifleman_smg_gry_ARM";
    };

    class DHATAG : AAR {
        vest = "gm_pl_army_vest_80_leader_gry_ARM";
    };

    class DHATAC : AAR {
        vest = "gm_pl_army_vest_80_rifleman_smg_gry_ARM";
    };

    class SAMG : AR {
        vest = "gm_pl_army_vest_80_rifleman_smg_gry_ARM";
    };

    class SAMAG : AAR {
        vest = "gm_pl_army_vest_80_leader_gry_ARM";
    };

    class SAMAC : AAR {
        vest = "gm_pl_army_vest_80_rifleman_smg_gry_ARM";
    };

    class GMGG : AR {
        vest = "gm_pl_army_vest_80_rifleman_smg_gry_ARM";
    };

    class GMGAG : AAR {
        vest = "gm_pl_army_vest_80_leader_gry_ARM";
    };

    class GMGAC : AAR {
        vest = "gm_pl_army_vest_80_rifleman_smg_gry_ARM";
    };

    class MTRG : AR {
        vest = "gm_pl_army_vest_80_rifleman_smg_gry_ARM";
    };

    class MTRAG : AAR {
        vest = "gm_pl_army_vest_80_leader_gry_ARM";
    };

    class MTRAC : AAR {
        vest = "gm_pl_army_vest_80_rifleman_smg_gry_ARM";
    };

    class ENG : Rifleman {
        headGear = "gm_pl_army_headgear_wz63_net_oli";
        uniform = "gm_pl_army_uniform_soldier_rolled_80_moro";
        vest = "gm_pl_army_vest_80_rifleman_smg_gry_ARM";
        backpack = "ark_backpack_large";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "gm_pl_army_headgear_wz63_net_oli";
        vest = "gm_pl_army_vest_80_marksman_gry_ARM";
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
