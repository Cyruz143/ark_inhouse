class GMX_CDF_TTSKO {
    class Rifleman {
        headGear = "gmx_cdf_army_headgear_m96_ttsko";
        goggles = "";
        uniform = "gmx_cdf_army_uniform_soldier_ttsko";
        vest = "gmx_cdf_army_vest_rifleman_ttsko_ARM";
        backpack = "ark_backpack_med";
        insignia = "";
    };

    class Leader : Rifleman {
        uniform = "gmx_cdf_army_uniform_soldier_rolled_ttsko";
        vest = "gmx_cdf_army_vest_leader_ttsko_ARM";
    };

    class Officer : Leader {
        headGear = "gmx_cdf_army_headgear_cap_ttsko";
    };

    class Crew : Rifleman {
        headGear = "gm_gc_army_headgear_crewhat_80_blk";
        uniform = "gmx_cdf_army_uniform_crew_ttsko";
        vest = "gmx_cdf_army_vest_belt_ttsko_ARM";
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
        vest = "gmx_cdf_army_vest_lmg_ttsko_ARM";
    };

    class AAR : Rifleman {
        backpack = "ark_backpack_large";
    };

    class RAT : Rifleman {
        vest = "gmx_cdf_army_vest_at_ttsko_ARM";
    };

    class MMGG : AR {
        vest = "gmx_cdf_army_vest_lmg_ttsko_ARM";
        backpack = "ark_backpack_large";
    };

    class MMGAG : AAR {
        vest = "gmx_cdf_army_vest_leader_ttsko_ARM";
    };

    class HMGG : AR {
    };

    class HMGAG : AAR {
        vest = "gmx_cdf_army_vest_leader_ttsko_ARM";
    };

    class HMGAC : AAR {
    };

    class MATG : RAT {
        backpack = "ark_backpack_large";
    };

    class MATAG : AAR {
        vest = "gmx_cdf_army_vest_leader_ttsko_ARM";
    };

    class MATAC : MATAG {
    };

    class HATG : RAT {
        backpack = "ark_backpack_large";
    };

    class HATAG : AAR {
        vest = "gmx_cdf_army_vest_leader_ttsko_ARM";
    };

    class HATAC : HATAG {
    };

    class DHATG : AR {
    };

    class DHATAG : AAR {
        vest = "gmx_cdf_army_vest_leader_ttsko_ARM";
    };

    class DHATAC : AAR {
    };

    class SAMG : AR {
    };

    class SAMAG : AAR {
        vest = "gmx_cdf_army_vest_leader_ttsko_ARM";
    };

    class SAMAC : AAR {
    };

    class GMGG : AR {
    };

    class GMGAG : AAR {
        vest = "gmx_cdf_army_vest_leader_ttsko_ARM";
    };

    class GMGAC : AAR {
    };

    class MTRG : AR {
    };

    class MTRAG : AAR {
        vest = "gmx_cdf_army_vest_leader_ttsko_ARM";
    };

    class MTRAC : AAR {
    };

    class ENG : Rifleman {
        backpack = "ark_backpack_large";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "gmx_cdf_army_headgear_cap_ttsko";
        vest = "gmx_cdf_army_vest_marksman_ttsko_ARM";
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
        vest = "gm_ge_army_vest_pilot_oli_ARM";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };

};
