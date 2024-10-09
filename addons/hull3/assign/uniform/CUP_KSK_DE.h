class CUP_KSK_DE {
    class Rifleman {
        headGear = "CUP_H_OpsCore_Covered_Tropen_NoHS";
        goggles = "";
        uniform = "CUP_U_B_GER_Crye";
        vest = "CUP_V_B_GER_Carrier_Vest_2_ARM";
        backpack = "ark_backpack_med";
        insignia = "";
    };

    class Leader : Rifleman {
        headGear = "CUP_H_OpsCore_Covered_Tropen";
        uniform = "CUP_U_B_GER_Crye2";
        vest = "CUP_V_B_GER_Armatus_BB_Trop_ARM";
    };

    class Officer : Leader {
        headGear = "gm_ge_headgear_beret_bdx_specop";
    };

    class Crew : Rifleman {
        headGear = "gm_ge_headgear_crewhat_80_blk";
        uniform = "CUP_U_B_GER_Overalls_Tank";
        vest = "CUP_V_B_GER_Tactical_Trop_ARM";
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
        vest = "CUP_V_B_GER_Armatus_Trop_ARM";
        backpack = "ark_backpack_large";
        insignia = "";
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
    };

    class AAR : Rifleman {
        uniform = "CUP_U_B_GER_Crye2";
        backpack = "ark_backpack_large";
    };

    class RAT : Rifleman {
    };

    class MMGG : AR {
        backpack = "ark_backpack_large";
    };

    class MMGAG : AAR {
        headGear = "CUP_H_OpsCore_Covered_Tropen";
    };

    class HMGG : AR {
    };

    class HMGAG : AAR {
        headGear = "CUP_H_OpsCore_Covered_Tropen";
    };

    class HMGAC : AAR {
    };

    class MATG : RAT {
        backpack = "ark_backpack_large";
    };

    class MATAG : AAR {
        headGear = "CUP_H_OpsCore_Covered_Tropen";
    };

    class MATAC : MATAG {
    };

    class HATG : RAT {
    };

    class HATAG : AAR {
        headGear = "CUP_H_OpsCore_Covered_Tropen";
        backpack = "ark_backpack_large";
    };

    class HATAC : HATAG {
    };

    class DHATG : AR {
    };

    class DHATAG : AAR {
        headGear = "CUP_H_OpsCore_Covered_Tropen";
    };

    class DHATAC : AAR {
    };

    class SAMG : AR {
    };

    class SAMAG : AAR {
        headGear = "CUP_H_OpsCore_Covered_Tropen";
    };

    class SAMAC : AAR {
    };

    class GMGG : AR {
    };

    class GMGAG : AAR {
        headGear = "CUP_H_OpsCore_Covered_Tropen";
    };

    class GMGAC : AAR {
    };

    class MTRG : AR {
    };

    class MTRAG : AAR {
        headGear = "CUP_H_OpsCore_Covered_Tropen";
    };

    class MTRAC : AAR {
    };

    class ENG : Rifleman {
        headGear = "CUP_H_OpsCore_Covered_Tropen";
        uniform = "CUP_U_B_GER_Crye2";
        backpack = "ark_backpack_large";
    };

    class ENGA : ENG {
        headGear = "CUP_H_OpsCore_Covered_Tropen_NoHS";
    };

    class SN : Rifleman {
        headGear = "CUP_H_Ger_Boonie2_desert";
        uniform = "CUP_U_B_GER_Crye2";
        vest = "CUP_V_B_GER_Armatus_Trop_ARM";
        backpack = "ark_backpack_small";
    };

    class SP : SN {
        headGear = "CUP_H_Ger_Boonie_desert";
    };

    class VC : Crew {
    };

    class VG : Crew {
    };

    class VD : Crew {
    };

    class P : Crew {
        headGear = "gm_ge_headgear_sph4_oli";
        goggles = "G_Aviator";
        uniform = "CUP_U_B_GER_Fleck_Overalls_Pilot";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };

};
