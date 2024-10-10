class LDF_90_WD {
    class Rifleman {
        headGear = "CUP_H_PASGTv2_ERDL_highland";
        goggles = "";
        uniform = "CUP_U_B_BDUv2_ERDL_highland";
        vest = "CUP_V_B_PASGT_OD_ARM";
        backpack = "ark_backpack_med";
        insignia = "";
    };

    class Leader : Rifleman {
        headGear = "CUP_H_US_patrol_cap_ERDL_highland";
    };

    class Officer : Leader {
    };

    class Crew : Rifleman {
        headGear = "CUP_H_USMC_ACVC_WDL";
        uniform = "CUP_U_B_BDUv2_roll2_ERDL_highland";
        vest = "CUP_V_B_PASGT_no_bags_OD_ARM";
        backpack = "ark_backpack_small";
    };

    class CO : Officer {
        headgear = "H_Beret_EAF_01_F";
    };

    class XO : CO {
        uniform = "CUP_U_B_BDUv2_roll_ERDL_highland";
        backpack = "ark_backpack_large";
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        uniform = "CUP_U_B_BDUv2_roll2_gloves_ERDL_highland";
        backpack = "ark_backpack_large";
        insignia = "";
    };

    class FTL : Leader {
        headGear = "CUP_H_PASGTv2_NVG_ERDL_highland";
    };

    class AR : Rifleman {
        uniform = "CUP_U_B_BDUv2_gloves_ERDL_highland";
    };

    class AAR : Rifleman {
        headGear = "CUP_H_PASGTv2_NVG_ERDL_highland";
        backpack = "ark_backpack_large";
    };

    class RAT : Rifleman {
    };

    class MMGG : AR {
        backpack = "ark_backpack_large";
    };

    class MMGAG : AAR {
        uniform = "CUP_U_B_BDUv2_roll_gloves_ERDL_highland";
        headGear = "CUP_H_PASGTv2_NVG_ERDL_highland";
    };

    class HMGG : AR {
    };

    class HMGAG : AAR {
        uniform = "CUP_U_B_BDUv2_roll_gloves_ERDL_highland";
        headGear = "CUP_H_PASGTv2_NVG_ERDL_highland";
    };

    class HMGAC : AAR {
    };

    class MATG : RAT {
        backpack = "ark_backpack_large";
    };

    class MATAG : AAR {
        uniform = "CUP_U_B_BDUv2_roll_gloves_ERDL_highland";
        headGear = "CUP_H_PASGTv2_NVG_ERDL_highland";
    };

    class MATAC : MATAG {
    };

    class HATG : RAT {
        backpack = "ark_backpack_large";
    };

    class HATAG : AAR {
        uniform = "CUP_U_B_BDUv2_roll_gloves_ERDL_highland";
        headGear = "CUP_H_PASGTv2_NVG_ERDL_highland";
    };

    class HATAC : HATAG {
    };

    class DHATG : AR {
    };

    class DHATAG : AAR {
        uniform = "CUP_U_B_BDUv2_roll_gloves_ERDL_highland";
        headGear = "CUP_H_PASGTv2_NVG_ERDL_highland";
    };

    class DHATAC : AAR {
    };

    class SAMG : AR {
    };

    class SAMAG : AAR {
        uniform = "CUP_U_B_BDUv2_roll_gloves_ERDL_highland";
        headGear = "CUP_H_PASGTv2_NVG_ERDL_highland";
    };

    class SAMAC : AAR {
    };

    class GMGG : AR {
    };

    class GMGAG : AAR {
        uniform = "CUP_U_B_BDUv2_roll_gloves_ERDL_highland";
        headGear = "CUP_H_PASGTv2_NVG_ERDL_highland";
    };

    class GMGAC : AAR {
    };

    class MTRG : AR {
    };

    class MTRAG : AAR {
        uniform = "CUP_U_B_BDUv2_roll_gloves_ERDL_highland";
        headGear = "CUP_H_PASGTv2_NVG_ERDL_highland";
    };

    class MTRAC : AAR {
    };

    class ENG : Rifleman {
        uniform = "CUP_U_B_BDUv2_roll_gloves_ERDL_highland";
        headGear = "CUP_H_PASGTv2_NVG_ERDL_highland";
        backpack = "ark_backpack_large";
    };

    class ENGA : ENG {
        uniform = "CUP_U_B_BDUv2_gloves_ERDL_highland";
    };

    class SN : Rifleman {
        headGear = "CUP_H_PMC_Beanie_Khaki";
        uniform = "CUP_U_B_BDUv2_gloves_ERDL_highland";
        goggles = "CUP_G_Scarf_Face_Grn";
        vest = "CUP_V_B_ALICE_ARM";
        backpack = "ark_backpack_small";
    };

    class SP : SN {
        goggles = "CUP_FR_NeckScarf";
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
        uniform = "CUP_U_B_BDUv2_gloves_ERDL_highland";
        vest = "CUP_V_B_PilotVest_ARM";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };

};
