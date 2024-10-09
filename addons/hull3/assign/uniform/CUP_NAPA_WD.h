class CUP_NAPA_WD {
    class Rifleman {
        headGear = "CUP_H_Ger_Boonie_Flecktarn";
        goggles = "G_Bandanna_blk";
        uniform = "CUP_U_I_GUE_Flecktarn2";
        vest = "CUP_V_B_GER_Carrier_Rig_2_ARM";
        backpack = "ark_backpack_med";
        insignia = "";
    };

    class Leader : Rifleman {
        vest = "CUP_V_B_GER_Tactical_Fleck_ARM";
        goggles = "G_Bandanna_oli";
        headGear = "H_Watchcap_camo";
    };

    class Officer : Leader {
        headGear = "MNP_MC_OD";
        goggles = "";
        uniform = "CUP_U_I_GUE_Flecktarn";
    };

    class Crew : Rifleman {
        headGear = "CUP_H_SLA_TankerHelmet";
        uniform = "CUP_U_I_GUE_Woodland1";
        goggles = "G_Bandanna_oli";
        vest = "CUP_V_O_TK_CrewBelt_ARM";
        backpack = "ark_backpack_small";
    };

    class CO : Officer {
        headGear = "CUP_H_NAPA_Fedora";
        uniform = "U_I_G_resistanceLeader_F";
        goggles = "G_Aviator";
        vest = "CUP_V_I_Guerilla_Jacket_ARM";
    };

    class XO : Officer {
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        backpack = "ark_backpack_large";
        goggles = "";
        headGear = "H_Bandanna_khk_hs";
        insignia = "";
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        headGear = "H_Cap_grn";
    };

    class AAR : Rifleman {
        backpack = "ark_backpack_large";
        headGear = "";
        uniform = "CUP_U_I_GUE_Flecktarn3";
        goggles = "G_Bandanna_blk";
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
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "CUP_H_PMC_Cap_PRR_Tan";
        uniform = "CUP_U_I_GUE_Flecktarn";
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
        uniform = "CUP_U_C_Pilot_01";
        headGear = "CUP_H_PMC_EP_Headset";
        vest = "CUP_V_O_TK_CrewBelt_ARM";
        backpack = "B_Parachute";
        goggles = "G_Aviator";
    };

    class PCM : P {
    };

};
