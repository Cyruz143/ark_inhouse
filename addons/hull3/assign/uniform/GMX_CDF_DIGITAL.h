class GMX_CDF_DIGITAL {
    class Rifleman {
        headGear = "gmx_cdf2022_army_headgear_m92_digittsko";
        goggles = "";
        uniform = "gmx_cdf2022_army_uniform_soldier_digittsko";
        vest = "gmx_cdf2022_army_vest_armor_90_rifleman_digittsko_ARM";
        backpack = "ark_backpack_med";
        insignia = "";
    };

    class Leader : Rifleman {
        uniform = "gmx_cdf2022_army_uniform_soldier_rolled_digittsko";
        vest = "gmx_cdf2022_army_vest_armor_90_leader_digittsko_ARM";
    };

    class Officer : Leader {
        headGear = "gmx_cdf2022_army_beret_grn";
    };

    class Crew : Rifleman {
        headGear = "gm_gc_army_headgear_crewhat_80_blk";
        uniform = "gmx_cdf2022_army_uniform_crew_digittsko";
        vest = "gmx_cdf2022_army_vest_armor_90_crew_digittsko_ARM";
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
        vest = "gmx_cdf2022_army_vest_armor_90_medic_digittsko_ARM";
        backpack = "ark_backpack_large";
        insignia = "";
    };

    class FTL : Leader {
        headGear = "gmx_cdf2022_army_headgear_m92_glasses_digittsko";
    };

    class AR : Rifleman {
        vest = "gmx_cdf2022_army_vest_armor_90_machinegunner_digittsko_ARM";
    };

    class AAR : Rifleman {
        backpack = "ark_backpack_large";
    };

    class RAT : Rifleman {
        headGear = "gmx_cdf2022_army_headgear_m92_glasses_digittsko";
    };

    class MMGG : AR {
        vest = "gmx_cdf2022_army_vest_armor_90_machinegunner_digittsko_ARM";
        backpack = "ark_backpack_large";
    };

    class MMGAG : AAR {
        vest = "gmx_cdf2022_army_vest_armor_90_leader_digittsko_ARM";
    };

    class HMGG : AR {
    };

    class HMGAG : AAR {
        vest = "gmx_cdf2022_army_vest_armor_90_leader_digittsko_ARM";
    };

    class HMGAC : AAR {
    };

    class MATG : RAT {
        headGear = "gmx_cdf2022_army_headgear_m92_glasses_digittsko";
        backpack = "ark_backpack_large";
    };

    class MATAG : AAR {
        vest = "gmx_cdf2022_army_vest_armor_90_leader_digittsko_ARM";
    };

    class MATAC : MATAG {
    };

    class HATG : RAT {
        headGear = "gmx_cdf2022_army_headgear_m92_glasses_digittsko";
        backpack = "ark_backpack_large";
    };

    class HATAG : AAR {
        vest = "gmx_cdf2022_army_vest_armor_90_leader_digittsko_ARM";
    };

    class HATAC : HATAG {
    };

    class DHATG : AR {
        headGear = "gmx_cdf2022_army_headgear_m92_glasses_digittsko";
    };

    class DHATAG : AAR {
        vest = "gmx_cdf2022_army_vest_armor_90_leader_digittsko_ARM";
    };

    class DHATAC : AAR {
    };

    class SAMG : AR {
        headGear = "gmx_cdf2022_army_headgear_m92_glasses_digittsko";
    };

    class SAMAG : AAR {
        vest = "gmx_cdf2022_army_vest_armor_90_leader_digittsko_ARM";
    };

    class SAMAC : AAR {
    };

    class GMGG : AR {
        headGear = "gmx_cdf2022_army_headgear_m92_glasses_digittsko";
    };

    class GMGAG : AAR {
        vest = "gmx_cdf2022_army_vest_armor_90_leader_digittsko_ARM";
    };

    class GMGAC : AAR {
    };

    class MTRG : AR {
        headGear = "gmx_cdf2022_army_headgear_m92_glasses_digittsko";
    };

    class MTRAG : AAR {
        vest = "gmx_cdf2022_army_vest_armor_90_leader_digittsko_ARM";
    };

    class MTRAC : AAR {
    };

    class ENG : Rifleman {
        headGear = "gmx_cdf2022_army_headgear_m92_glasses_digittsko";
        vest = "gmx_cdf2022_army_vest_armor_90_demolition_digittsko_ARM";
        backpack = "ark_backpack_large";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "gmx_cdf2022_army_beret_grn";
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
