class LVM_DE {
    class Rifleman {
        headGear = "H_Bandanna_sand";
        goggles = "";
        uniform = "MNP_CombatUniform_Militia_DF";
        vest = "CUP_V_O_SLA_M23_1_BRN_ARM";
        backpack = "ark_backpack_med";
        insignia = "";
    };

    class Leader : Rifleman {
        uniform = "MNP_CombatUniform_Militia_DB";
        vest = "CUP_V_OI_TKI_Jacket6_03_ARM";
        headGear = "H_Cap_tan";
    };

    class Officer : Leader {
        headGear = "H_MilCap_gry";
        uniform = "MNP_CombatUniform_Militia_DA";
        vest = "CUP_V_OI_TKI_Jacket3_03_ARM";
    };

    class Crew : Rifleman {
        headGear = "CUP_H_TK_TankerHelmet";
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
        uniform = "MNP_CombatUniform_Militia_DE";
        headGear = "H_Booniehat_tan";
        insignia = "";
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        uniform = "MNP_CombatUniform_Militia_DC";
        headGear = "H_Watchcap_cbr";
    };

    class AAR : Rifleman {
        backpack = "ark_backpack_large";
        headGear = "H_Booniehat_tan";
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
        uniform = "MNP_CombatUniform_Militia_DC";
        backpack = "ark_backpack_large";
        headGear = "H_Cap_headphones";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "H_MilCap_gry";
        goggles = "G_Bandanna_khk";
        uniform = "MNP_CombatUniform_Militia_DC";
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
        uniform = "MNP_CombatUniform_Militia_DC";
        vest = "V_TacVest_oli_ARM";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };

};
