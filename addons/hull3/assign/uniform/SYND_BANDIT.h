class SYND_BANDIT {
    class Rifleman {
        headGear = "H_Cap_red";
        goggles = "G_Bandanna_beast";
        uniform = "U_I_C_Soldier_Bandit_5_F";
        vest = "CUP_V_RUS_Smersh_New_Buttpack_ARM";
        backpack = "ark_backpack_med";
        insignia = "";
    };

    class Leader : Rifleman {
        headGear = "H_Booniehat_tan";
        goggles = "CUP_FR_NeckScarf2";
        uniform = "U_I_C_Soldier_Bandit_2_F";
        vest = "CUP_V_I_Carrier_Belt_ARM";
    };

    class Officer : Leader {
        headGear = "MNP_MC_Rev";
        goggles = "G_Aviator";
        uniform = "U_I_C_Soldier_Bandit_3_F";
        vest = "CUP_V_RUS_Smersh_New_Full_ARM";
    };

    class Crew : Rifleman {
        headGear = "CUP_H_RUS_TSH_4_Brown";
        goggles = "";
        uniform = "U_I_C_Soldier_Bandit_4_F";
        vest = "CUP_V_RUS_Smersh_New_Light_ARM";
        backpack = "ark_backpack_small";
    };

    class CO : Officer {
    };

    class XO : CO {
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        headGear = "H_Bandanna_sgg";
        goggles = "";
        uniform = "U_I_C_Soldier_Bandit_1_F";
        vest = "CUP_V_OI_TKI_Jacket2_01_ARM";
        backpack = "ark_backpack_large";
        insignia = "";
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        headGear = "H_Bandanna_sgg";
        goggles = "";
        uniform = "U_I_C_Soldier_Bandit_1_F";
        vest = "CUP_V_OI_TKI_Jacket2_01_ARM";
    };

    class AAR : Rifleman {
        backpack = "ark_backpack_large";
        headGear = "CUP_H_PMC_Cap_Back_Tan";
        goggles = "G_Bandanna_oli";
        uniform = "U_I_C_Soldier_Bandit_4_F";
        vest = "CUP_V_OI_TKI_Jacket2_01_ARM";
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
        headGear = "";
        goggles = "G_Balaclava_oli";
        uniform = "U_I_C_Soldier_Bandit_2_F";
        vest = "CUP_V_RUS_Smersh_New_Radio_ARM";
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
        headGear = "CUP_H_RUS_ZSH_Shield_Up";
        goggles = "G_Aviator";
        vest = "V_TacVest_oli_ARM";
        backpack = "B_Parachute";
        uniform = "CUP_U_C_Pilot_01";
    };

    class PCM : P {
    };

};
