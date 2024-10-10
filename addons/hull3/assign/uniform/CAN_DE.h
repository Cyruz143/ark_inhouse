class CAN_DE {
    class Rifleman {
        headGear = "MNP_Helmet_Canada_D";
        goggles = "";
        uniform = "MNP_CombatUniform_Canada_D";
        vest = "MNP_Vest_Canada_D2_ARM";
        backpack = "ark_backpack_med";
        insignia = "";
    };

    class Leader : Rifleman {
        uniform = "MNP_CombatUniform_Canada_DS";
        vest = "MNP_Vest_Canada_D_ARM";
    };

    class Officer : Leader {
        headGear = "MNP_Boonie_CAN_D";
    };

    class Crew : Rifleman {
        headGear = "H_HelmetCrew_I";
        uniform = "MNP_CombatUniform_Canada_DS";
        vest = "V_BandollierB_khk_ARM";
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
        uniform = "MNP_CombatUniform_Canada_DS";
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
        uniform = "MNP_CombatUniform_Canada_DS";
        backpack = "ark_backpack_large";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "MNP_Boonie_CAN_D";
        goggles = "G_Bandanna_khk";
        uniform = "MNP_CombatUniform_Canada_DS";
        vest = "MNP_Vest_Canada_D2_ARM";
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
        headGear = "H_PilotHelmetHeli_O";
        uniform = "MNP_CombatUniform_Canada_D";
        vest = "V_TacVest_oli_ARM";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };

};
