class UKR_TTSKO {
    class Rifleman {
        headGear = "MNP_Helmet_PAGST_UKR";
        goggles = "";
        uniform = "MNP_CombatUniform_Ukrainian";
        vest = "MNP_Vest_UKR_A_ARM";
        backpack = "ark_backpack_med";
        insignia = "";
    };

    class Leader : Rifleman {
        vest = "MNP_Vest_UKR_B_ARM";
    };

    class Officer : Leader {
        headGear = "MNP_MC_UKR";
    };

    class Crew : Rifleman {
        headGear = "CUP_H_SLA_TankerHelmet";
        uniform = "MNP_CombatUniform_Ukrainian";
        vest = "MNP_Vest_UKR_B_ARM";
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
        uniform = "MNP_CombatUniform_Ukrainian";
        goggles = "";
        insignia = "";
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        uniform = "MNP_CombatUniform_Ukrainian";
    };

    class AAR : Rifleman {
        backpack = "ark_backpack_large";
    };

    class RAT : Rifleman {
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
        headGear = "MNP_MC_UKR";
        vest = "MNP_Vest_UKR_B_ARM";
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
        headGear = "CUP_H_SLA_Pilot_Helmet";
        vest = "MNP_Vest_UKR_B_ARM";
        goggles = "G_Aviator";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };

};
