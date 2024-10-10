class PMC_CBRN {
    class Rifleman {
        headGear = "MNP_Helmet_BLK";
        goggles = "G_RegulatorMask_F";
        uniform = "U_C_CBRN_Suit_01_Black_F";
        vest = "CUP_V_PMC_CIRAS_Black_Patrol_ARM";
        backpack = "ark_backpack_med";
        insignia = "";
    };

    class Leader : Rifleman {
        uniform = "U_C_CBRN_Suit_01_Black_F";
        vest = "CUP_V_PMC_CIRAS_Black_TL_ARM";
    };

    class Officer : Leader {
        headGear = "MNP_Helmet_BLK";
        vest = "CUP_V_PMC_CIRAS_Black_TL_ARM";
    };

    class Crew : Rifleman {
        headGear = "H_Cap_blk_ION";
        uniform = "U_C_CBRN_Suit_01_Black_F";
        vest = "CUP_V_PMC_CIRAS_Black_Veh_ARM";
        backpack = "ark_backpack_small";
    };

    class CO : Officer {
    };

    class XO : CO {
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
        backpack = "ark_backpack_large";
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
        backpack = "ark_backpack_large";
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
        headGear = "H_PilotHelmetHeli_B";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };

};
