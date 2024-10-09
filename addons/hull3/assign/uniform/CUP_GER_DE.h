class CUP_GER_DE {
    class Rifleman {
        headGear = "CUP_H_Ger_M92_Cover_Trop";
        goggles = "";
        uniform = "CUP_U_B_GER_Tropentarn_5";
        vest = "CUP_V_B_GER_PVest_Trop_RFL_ARM";
        backpack = "ark_backpack_med";
        insignia = "";
    };

    class Leader : Rifleman {
        headGear = "CUP_H_Ger_M92_Cover_Trop_GG_CF";
        uniform = "CUP_U_B_GER_Tropentarn_2";
        vest = "CUP_V_B_GER_PVest_Trop_TL_ARM";
    };

    class Officer : Leader {
        headGear = "gm_ge_headgear_beret_grn_infantry";
        vest = "CUP_V_B_GER_PVest_Trop_OFC_ARM";
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
        uniform = "CUP_U_B_GER_Tropentarn_3";
        vest = "CUP_V_B_GER_PVest_Trop_Med_ARM";
        backpack = "ark_backpack_large";
        insignia = "";
    };

    class FTL : Leader {
        uniform = "CUP_U_B_GER_Tropentarn_4";
        vest = "CUP_V_B_GER_PVest_Trop_Gren_ARM";
    };

    class AR : Rifleman {
        uniform = "CUP_U_B_GER_Tropentarn_2";
        vest = "CUP_V_B_GER_PVest_Trop_MG_ARM";
    };

    class AAR : Rifleman {
        uniform = "CUP_U_B_GER_Tropentarn_8";
        backpack = "ark_backpack_large";
    };

    class RAT : Rifleman {
        uniform = "CUP_U_B_GER_Tropentarn_7";
    };

    class MMGG : AR {
        backpack = "ark_backpack_large";
    };

    class MMGAG : AAR {
        headGear = "CUP_H_Ger_M92_Cover_Trop_GG_CF";
    };

    class HMGG : AR {
    };

    class HMGAG : AAR {
        headGear = "CUP_H_Ger_M92_Cover_Trop_GG_CF";
    };

    class HMGAC : AAR {
    };

    class MATG : RAT {
        backpack = "ark_backpack_large";
    };

    class MATAG : AAR {
        headGear = "CUP_H_Ger_M92_Cover_Trop_GG_CF";
    };

    class MATAC : MATAG {
    };

    class HATG : RAT {
    };

    class HATAG : AAR {
        headGear = "CUP_H_Ger_M92_Cover_Trop_GG_CF";
        backpack = "ark_backpack_large";
    };

    class HATAC : HATAG {
    };

    class DHATG : AR {
    };

    class DHATAG : AAR {
        headGear = "CUP_H_Ger_M92_Cover_Trop_GG_CF";
    };

    class DHATAC : AAR {
    };

    class SAMG : AR {
    };

    class SAMAG : AAR {
        headGear = "CUP_H_Ger_M92_Cover_Trop_GG_CF";
    };

    class SAMAC : AAR {
    };

    class GMGG : AR {
    };

    class GMGAG : AAR {
        headGear = "CUP_H_Ger_M92_Cover_Trop_GG_CF";
    };

    class GMGAC : AAR {
    };

    class MTRG : AR {
    };

    class MTRAG : AAR {
        headGear = "CUP_H_Ger_M92_Cover_Trop_GG_CF";
    };

    class MTRAC : AAR {
    };

    class ENG : Rifleman {
        headGear = "CUP_H_Ger_M92_Cover_Trop_GG_CF";
        uniform = "CUP_U_B_GER_Tropentarn_3";
        vest = "CUP_V_B_GER_PVest_Trop_MG_ARM";
        backpack = "ark_backpack_large";
    };

    class ENGA : ENG {
        headGear = "CUP_H_Ger_M92_Cover_Trop";
    };

    class SN : Rifleman {
        headGear = "CUP_H_Ger_Boonie2_desert";
        uniform = "CUP_U_B_GER_Tropentarn_3";
        vest = "CUP_V_B_GER_PVest_Trop_TL_ARM";
        backpack = "ark_backpack_small";
    };

    class SP : SN {
        headGear = "CUP_H_Ger_Boonie_desert";
        vest = "CUP_V_B_GER_PVest_Trop_RFL_ARM";
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
