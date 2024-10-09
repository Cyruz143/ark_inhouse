class GMX_CHDKZ {
    class Rifleman {
        headGear = "CUP_H_RUS_SSH68_green";
        goggles = "";
        uniform = "gmx_chdkz_army_uniform_soldier_01_mix_01";
        vest = "gm_pl_army_vest_80_rifleman_gry_ARM";
        backpack = "ark_backpack_med";
        insignia = "";
    };

    class Leader : Rifleman {
        uniform = "gmx_chdkz_army_uniform_soldier_01_wdl";
        vest = "gm_pl_army_vest_80_leader_gry_ARM";
    };

    class Officer : Leader {
        headGear = "gmx_chdkz_army_headgear_cap_blk";
    };

    class Crew : Rifleman {
        headGear = "gm_gc_army_headgear_crewhat_80_blk";
        uniform = "gmx_chdkz_army_uniform_soldier_02_mix_03";
        vest = "gm_dk_army_vest_54_crew_ARM";
        backpack = "ark_backpack_small";
    };

    class CO : Officer {
        uniform = "gmx_chdkz_army_uniform_soldier_01_win";
    };

    class XO : CO {
        backpack = "ark_backpack_large";
    };

    class SL : Officer {
        headGear = "gmx_chdkz_army_headgear_cap_wdl";
    };

    class Medic : Rifleman {
        uniform = "gmx_chdkz_army_uniform_soldier_02_mix_01";
        vest = "gm_ge_bgs_vest_80_rifleman_ARM";
        backpack = "ark_backpack_large";
        insignia = "";
    };

    class FTL : Leader {
        headGear = "CUP_H_RUS_SSH68_olive";
        uniform = "gmx_chdkz_army_uniform_soldier_01_mix_02";
    };

    class AR : Rifleman {
        uniform = "gmx_chdkz_army_uniform_soldier_01_mix_03";
        vest = "gm_pl_army_vest_80_mg_gry_ARM";
    };

    class AAR : Rifleman {
        headGear = "CUP_H_RUS_SSH68_cover_vsr84_dubok";
        uniform = "gmx_chdkz_army_uniform_soldier_02_mix_02";
        vest = "gm_dk_army_vest_54_machinegunner_ARM";
        backpack = "ark_backpack_large";
    };

    class RAT : Rifleman {
        uniform = "gmx_chdkz_army_uniform_soldier_01_mix_04";
        vest = "gm_pl_army_vest_80_at_gry_ARM";
    };

    class MMGG : AR {
        vest = "gm_pl_army_vest_80_mg_gry_ARM";
        backpack = "ark_backpack_large";
    };

    class MMGAG : AAR {
        vest = "gm_pl_army_vest_80_leader_gry_ARM";
    };

    class HMGG : AR {
    };

    class HMGAG : AAR {
        vest = "gm_pl_army_vest_80_leader_gry_ARM";
    };

    class HMGAC : AAR {
    };

    class MATG : RAT {
        headGear = "CUP_H_RUS_SSH68_cover_vsr84_dubok";
        backpack = "ark_backpack_large";
    };

    class MATAG : AAR {
        headGear = "CUP_H_RUS_SSH68_olive";
        vest = "gm_pl_army_vest_80_leader_gry_ARM";
    };

    class MATAC : MATAG {
    };

    class HATG : RAT {
        headGear = "CUP_H_RUS_SSH68_cover_vsr84_dubok";
        backpack = "ark_backpack_large";
    };

    class HATAG : AAR {
        headGear = "CUP_H_RUS_SSH68_olive";
        vest = "gm_pl_army_vest_80_leader_gry_ARM";
    };

    class HATAC : HATAG {
    };

    class DHATG : AR {
        headGear = "CUP_H_RUS_SSH68_green";
    };

    class DHATAG : AAR {
        headGear = "CUP_H_RUS_SSH68_olive";
        vest = "gm_pl_army_vest_80_leader_gry_ARM";
    };

    class DHATAC : AAR {
    };

    class SAMG : AR {
        headGear = "CUP_H_RUS_SSH68_green";
    };

    class SAMAG : AAR {
        headGear = "CUP_H_RUS_SSH68_olive";
        vest = "gm_pl_army_vest_80_leader_gry_ARM";
    };

    class SAMAC : AAR {
    };

    class GMGG : AR {
        headGear = "CUP_H_RUS_SSH68_olive";
    };

    class GMGAG : AAR {
        headGear = "CUP_H_RUS_SSH68_green";
        vest = "gm_pl_army_vest_80_leader_gry_ARM";
    };

    class GMGAC : AAR {
    };

    class MTRG : AR {
        headGear = "CUP_H_RUS_SSH68_olive";
    };

    class MTRAG : AAR {
        headGear = "CUP_H_RUS_SSH68_green";
        vest = "gm_pl_army_vest_80_leader_gry_ARM";
    };

    class MTRAC : AAR {
    };

    class ENG : Rifleman {
        headGear = "CUP_H_RUS_SSH68_olive";
        vest = "gmx_chdkz_vest_combatvest3_grn_ARM";
        backpack = "ark_backpack_large";
    };

    class ENGA : ENG {
        headGear = "CUP_H_RUS_SSH68_green";
    };

    class SN : Rifleman {
        headGear = "gm_ge_headgear_hat_beanie_blk";
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
        vest = "gmx_chdkz_army_vest_pilot_wdl_ARM";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };

};
