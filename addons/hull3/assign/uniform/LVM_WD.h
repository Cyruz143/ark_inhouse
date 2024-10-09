class LVM_WD {
    class Rifleman {
        headGear = "H_Bandanna_khk";
        goggles = "";
        uniform = "MNP_CombatUniform_Militia_E";
        vest = "CUP_V_O_SLA_M23_1_OD_ARM";
        backpack = "ark_backpack_med";
        insignia = "";
    };

    class Leader : Rifleman {
        uniform = "MNP_CombatUniform_Militia_B";
        vest = "CUP_V_OI_TKI_Jacket6_01_ARM";
        headGear = "H_Cap_oli_hs";
    };

    class Officer : Leader {
        headGear = "H_Cap_headphones";
        uniform = "MNP_CombatUniform_Militia_A";
        vest = "CUP_V_OI_TKI_Jacket3_01_ARM";
    };

    class Crew : Rifleman {
        headGear = "CUP_H_SLA_TankerHelmet";
        vest = "CUP_V_O_SLA_M23_1_OD_ARM";
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
        uniform = "MNP_CombatUniform_Militia_F";
        headGear = "H_Booniehat_oli";
        insignia = "";
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        uniform = "MNP_CombatUniform_Militia_C";
        headGear = "H_Watchcap_camo";
    };

    class AAR : Rifleman {
        backpack = "ark_backpack_large";
        headGear = "H_Booniehat_khk";
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
        uniform = "MNP_CombatUniform_Militia_C";
        backpack = "ark_backpack_large";
        headGear = "MNP_MC_OD";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "H_Bandanna_khk_hs";
        goggles = "G_Bandanna_oli";
        uniform = "MNP_CombatUniform_Militia_B";
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
        uniform = "MNP_CombatUniform_Militia_B";
        vest = "V_TacVest_oli_ARM";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };

};
