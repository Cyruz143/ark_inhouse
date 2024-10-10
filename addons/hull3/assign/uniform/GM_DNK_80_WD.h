class GM_DNK_80_WD {
    class Rifleman {
        headGear = "gm_dk_headgear_m52_oli";
        goggles = "";
        uniform = "gm_dk_army_uniform_soldier_84_oli";
        vest = "gm_dk_army_vest_54_rifleman_ARM";
        backpack = "ark_backpack_med";
        insignia = "";
    };

    class Leader : Rifleman {
    };

    class Officer : Leader {
        headGear = "H_Beret_blk";
    };

    class Crew : Rifleman {
        headGear = "gm_ge_headgear_crewhat_80_blk";
        vest = "gm_dk_army_vest_54_crew_ARM";
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
        headGear = "gm_dk_headgear_m52_net_oli";
        backpack = "ark_backpack_large";
        insignia = "";
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        vest = "gm_dk_army_vest_54_machinegunner_ARM";
    };

    class AAR : Rifleman {
        headGear = "gm_dk_headgear_m52_net_oli";
        backpack = "ark_backpack_large";
    };

    class RAT : Rifleman {
        headGear = "gm_dk_headgear_m52_net_oli";
    };

    class MMGG : AR {
        backpack = "ark_backpack_large";
    };

    class MMGAG : AAR {
        vest = "gm_dk_army_vest_54_machinegunner_ARM";
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

    class DHATG : AAR {
    };

    class DHATAG : AAR {
    };

    class DHATAC : AAR {
    };

    class SAMG : AAR {
    };

    class SAMAG : AAR {
    };

    class SAMAC : AAR {
    };

    class GMGG : AAR {
    };

    class GMGAG : AAR {
    };

    class GMGAC : AAR {
    };

    class MTRG : AAR {
    };

    class MTRAG : AAR {
    };

    class MTRAC : AAR {
    };

    class ENG : Rifleman {
        headGear = "gm_dk_headgear_m52_net_oli";
        backpack = "ark_backpack_large";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "gm_ge_headgear_hat_boonie_oli";
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
        vest = "gm_ge_army_vest_pilot_oli_ARM";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };

};
