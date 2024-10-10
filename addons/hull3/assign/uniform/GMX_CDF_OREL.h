class GMX_CDF_OREL {
    class Rifleman {
        headGear = "gm_gc_headgear_fjh_model4_wht";
        goggles = "";
        uniform = "gmx_cdf2022_orel_uniform_soldier_blu";
        vest = "gmx_cdf2022_army_vest_90_rifleman_oli_ARM";
        backpack = "ark_backpack_med";
        insignia = "";
    };

    class Leader : Rifleman {
        uniform = "gmx_cdf2022_orel_uniform_soldier_rolled_blu";
        vest = "gmx_cdf2022_army_vest_90_leader_oli_ARM";
    };

    class Officer : Leader {
        headGear = "gmx_cdf2022_army_beret_blk";
    };

    class Crew : Rifleman {
        headGear = "gm_gc_army_headgear_crewhat_80_blk";
        uniform = "gmx_cdf2022_army_uniform_crew_digittsko";
        vest = "gmx_cdf2022_army_vest_90_crew_oli_ARM";
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
        vest = "gmx_cdf2022_army_vest_90_medic_oli_ARM";
        backpack = "ark_backpack_large";
        insignia = "";
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        vest = "gmx_cdf2022_army_vest_90_machinegunner_oli_ARM";
    };

    class AAR : Rifleman {
        backpack = "ark_backpack_large";
    };

    class RAT : Rifleman {
    };

    class MMGG : AR {
        vest = "gmx_cdf2022_army_vest_90_machinegunner_oli_ARM";
        backpack = "ark_backpack_large";
    };

    class MMGAG : AAR {
        vest = "gmx_cdf2022_army_vest_90_leader_oli_ARM";
    };

    class HMGG : AR {
    };

    class HMGAG : AAR {
        vest = "gmx_cdf2022_army_vest_90_leader_oli_ARM";
    };

    class HMGAC : AAR {
    };

    class MATG : RAT {
        backpack = "ark_backpack_large";
    };

    class MATAG : AAR {
        vest = "gmx_cdf2022_army_vest_90_leader_oli_ARM";
    };

    class MATAC : MATAG {
    };

    class HATG : RAT {
        backpack = "ark_backpack_large";
    };

    class HATAG : AAR {
        vest = "gmx_cdf2022_army_vest_90_leader_oli_ARM";
    };

    class HATAC : HATAG {
    };

    class DHATG : AR {
    };

    class DHATAG : AAR {
        vest = "gmx_cdf2022_army_vest_90_leader_oli_ARM";
    };

    class DHATAC : AAR {
    };

    class SAMG : AR {
    };

    class SAMAG : AAR {
        vest = "gmx_cdf2022_army_vest_90_leader_oli_ARM";
    };

    class SAMAC : AAR {
    };

    class GMGG : AR {
    };

    class GMGAG : AAR {
        vest = "gmx_cdf2022_army_vest_90_leader_oli_ARM";
    };

    class GMGAC : AAR {
    };

    class MTRG : AR {
    };

    class MTRAG : AAR {
        vest = "gmx_cdf2022_army_vest_90_leader_oli_ARM";
    };

    class MTRAC : AAR {
    };

    class ENG : Rifleman {
        vest = "gmx_cdf2022_army_vest_90_demolition_oli_ARM";
        backpack = "ark_backpack_large";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "gmx_cdf2022_army_beret_blk";
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
        headGear = "gm_gc_headgear_zsh3_blu";
        vest = "gmx_cdf2022_army_vest_orel_blu_ARM";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };

};
