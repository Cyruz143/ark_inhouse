class GM_FRG_90_SN {
    class Rifleman {
        headGear = "gm_ge_headgear_m92_cover_win";
        goggles = "";
        uniform = "gm_ge_army_uniform_soldier_parka_80_win";
        vest = "gm_ge_vest_90_rifleman_flk_ARM";
        backpack = "ark_backpack_med";
        insignia = "";
    };

    class Leader : Rifleman {
        vest = "gm_ge_vest_90_leader_flk_ARM";
    };

    class Officer : Leader {
        headGear = "gm_ge_headgear_beret_grn_infantry";
    };

    class Crew : Rifleman {
        headGear = "gm_ge_headgear_crewhat_80_blk";
        uniform = "gm_ge_army_uniform_crew_90_flk";
        vest = "gm_ge_vest_90_crew_flk_ARM";
        backpack = "ark_backpack_small";
    };

    class CO : Officer {
    };

    class XO : CO {
        backpack = "ark_backpack_large";
    };

    class SL : Officer {
        headGear = "gm_ge_headgear_hat_beanie_blk";
    };

    class Medic : Rifleman {
        vest = "gm_ge_vest_90_medic_flk_ARM";
        backpack = "ark_backpack_large";
        insignia = "";
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        headGear = "gm_ge_headgear_m92_cover_glasses_win";
        vest = "gm_ge_vest_90_machinegunner_flk_ARM";
    };

    class AAR : Rifleman {
    };

    class RAT : Rifleman {
        headGear = "gm_ge_headgear_m92_cover_glasses_win";
    };

    class MMGG : AR {
        vest = "gm_ge_vest_90_machinegunner_flk_ARM";
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
        backpack = "ark_backpack_large";
    };

    class MATAC : MATAG {
        backpack = "ark_backpack_large";
    };

    class HATG : RAT {
        backpack = "gm_milan_launcher_weaponBag";
    };

    class HATAG : AAR {
        backpack = "gm_milan_launcher_weaponBag";
    };

    class HATAC : HATAG {
        backpack = "gm_milan_launcher_weaponBag";
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
        headGear = "gm_ge_headgear_m92_cover_glasses_win";
        vest = "gm_ge_vest_90_demolition_flk_ARM";
        backpack = "ark_backpack_large";
    };

    class ENGA : ENG {
        headGear = "gm_ge_headgear_m92_cover_win";
        goggles = "gm_ge_facewear_dustglasses";
    };

    class SN : Rifleman {
        headGear = "gm_ge_headgear_hat_beanie_blk";
        backpack = "ark_backpack_small";
    };

    class SP : SN {
    };

    class VC : Crew {
        headGear = "gm_ge_headgear_beret_crew_blk_armor";
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
        vest = "gm_ge_army_vest_pilot_pads_oli_ARM";
    };

};
