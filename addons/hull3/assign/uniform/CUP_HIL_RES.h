class CUP_HIL_RES {
    class Rifleman {
        headGear = "CUP_H_Ger_M92_RGR";
        goggles = "";
        uniform = "CUP_U_B_BDUv2_OD";
        vest = "CUP_V_B_PASGT_CCE_ARM";
        backpack = "ark_backpack_med";
        insignia = "";
    };

    class Leader : Rifleman {
        headGear = "CUP_H_Ger_M92_RGR_GG";
        uniform = "CUP_U_B_BDUv2_gloves_OD";
        vest = "CUP_V_B_PASGT_no_bags_CCE_ARM";
    };

    class Officer : Leader {
        headGear = "CUP_H_Beret_HIL";
        goggles = "G_Aviator";
        uniform = "CUP_U_B_BDUv2_roll2_OD";
    };

    class Crew : Rifleman {
        headGear = "CUP_H_USMC_ACVC_WDL";
        goggles = "";
        uniform = "CUP_U_B_BDUv2_roll_OD";
        vest = "CUP_V_B_PASGT_no_bags_CCE_ARM";
        backpack = "ark_backpack_small";
    };

    class CO : Officer {
    };

    class XO : CO {
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        headGear = "CUP_H_Ger_M92_RGR_GG_CB";
        uniform = "CUP_U_B_BDUv2_roll_gloves_OD";
        backpack = "ark_backpack_large";
        insignia = "";
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        headGear = "CUP_H_Ger_M92_RGR_GG_CB";
        uniform = "CUP_U_B_BDUv2_roll2_gloves_OD";
    };

    class AAR : Rifleman {
        uniform = "CUP_U_B_BDUv2_roll_gloves_OD";
        backpack = "ark_backpack_large";
    };

    class RAT : Rifleman {
        headGear = "CUP_H_Ger_M92_RGR_GG_CF";
        uniform = "CUP_U_B_BDUv2_gloves_OD";
    };

    class MMGG : AR {
        backpack = "ark_backpack_large";
    };

    class MMGAG : AAR {
        headGear = "CUP_H_Ger_M92_RGR_GG";
    };

    class HMGG : AR {
    };

    class HMGAG : AAR {
        headGear = "CUP_H_Ger_M92_RGR_GG";
    };

    class HMGAC : AAR {
    };

    class MATG : RAT {
        backpack = "ark_backpack_large";
    };

    class MATAG : AAR {
        headGear = "CUP_H_Ger_M92_RGR_GG";
    };

    class MATAC : MATAG {
    };

    class HATG : RAT {
        backpack = "ark_backpack_large";
    };

    class HATAG : AAR {
        headGear = "CUP_H_Ger_M92_RGR_GG";
    };

    class HATAC : HATAG {
        headGear = "CUP_H_Ger_M92_RGR";
    };

    class DHATG : AR {
    };

    class DHATAG : AAR {
        headGear = "CUP_H_Ger_M92_RGR_GG";
    };

    class DHATAC : AAR {
    };

    class SAMG : AR {
    };

    class SAMAG : AAR {
        headGear = "CUP_H_Ger_M92_RGR_GG";
    };

    class SAMAC : AAR {
    };

    class GMGG : AR {
    };

    class GMGAG : AAR {
        headGear = "CUP_H_Ger_M92_RGR_GG";
    };

    class GMGAC : AAR {
    };

    class MTRG : AR {
    };

    class MTRAG : AAR {
        headGear = "CUP_H_Ger_M92_RGR_GG";
    };

    class MTRAC : AAR {
    };

    class ENG : Rifleman {
        headGear = "CUP_H_Ger_M92_RGR_GG";
        uniform = "CUP_U_B_BDUv2_roll_gloves_OD";
        backpack = "ark_backpack_large";
    };

    class ENGA : ENG {
        headGear = "CUP_H_Ger_M92_RGR_GG_CF";
    };

    class SN : Rifleman {
        headGear = "CUP_H_US_patrol_cap_OD";
        uniform = "CUP_U_B_BDUv2_roll2_gloves_OD";
        vest = "CUP_V_B_ALICE_ARM";
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
        uniform = "CUP_U_B_BDUv2_gloves_OD";
        vest = "CUP_V_CZ_vest20_ARM";
        backpack = "B_Parachute";
    };

    class PCM : P {
        headGear = "H_CrewHelmetHeli_O";
    };

};
