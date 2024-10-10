class DPR_AUT {
    class Rifleman {
        headGear = "CUP_H_RUS_SSH68_olive";
        goggles = "G_Bandanna_oli";
        uniform = "MNP_CombatUniform_DPR_A";
        vest = "CUP_V_RUS_Smersh_New_Buttpack_ARM";
        backpack = "ark_backpack_med";
        insignia = "";
    };

    class Leader : Rifleman {
        goggles = "CUP_FR_NeckScarf";
    };

    class Officer : Leader {
        vest = "CUP_V_RUS_Smersh_New_Full_ARM";
        headGear = "CUP_H_SLA_BeanieGreen";
        goggles = "G_Aviator";
    };

    class Crew : Rifleman {
        headGear = "CUP_H_SLA_TankerHelmet";
        uniform = "MNP_CombatUniform_DPR_B";
        vest = "CUP_V_RUS_Smersh_New_Light_ARM";
        backpack = "ark_backpack_small";
    };

    class CO : Officer {
    };

    class XO : CO {
        headGear = "CUP_H_FR_BeanieGreen";
        backpack = "ark_backpack_large";
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        backpack = "ark_backpack_large";
        uniform = "MNP_CombatUniform_DPR_B";
        insignia = "";
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        uniform = "MNP_CombatUniform_DPR_B";
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
        headGear = "CUP_H_FR_BeanieGreen";
        goggles = "G_Bandanna_oli";
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
        vest = "CUP_V_B_PilotVest_ARM";
        goggles = "G_Aviator";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };

};
