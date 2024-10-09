class FIA {
    class Rifleman {
        headGear = "H_Cap_oli_hs";
        goggles = "G_Bandanna_tan";
        uniform = "U_BG_Guerilla1_1";
        vest = "V_PlateCarrier1_blk_ARM";
        backpack = "B_Kitbag_rgr";
        insignia = "";
    };

    class Leader : Rifleman {
        uniform = "U_BG_Guerilla2_1";
        headGear = "H_Booniehat_khk";
        goggles = "";
    };

    class Officer : Leader {
        headGear = "H_MilCap_gry";
        uniform = "U_BG_Guerilla3_1";
    };

    class Crew : Rifleman {
        headGear = "H_HelmetCrew_I";
        uniform = "U_BG_Guerilla2_2";
        vest = "V_BandollierB_oli_ARM";
        goggles = "";
        backpack = "B_AssaultPack_rgr";
    };

    class CO : Officer {
    };

    class XO : CO {
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        backpack = "B_Carryall_oli";
        uniform = "U_BG_Guerilla2_3";
        goggles = "";
        insignia = "";
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        uniform = "U_BG_Guerrilla_6_1";
        headGear = "H_Bandanna_khk_hs";
    };

    class AAR : Rifleman {
        backpack = "B_Carryall_oli";
    };

    class RAT : Rifleman {
        uniform = "U_BG_Guerilla2_1";
        headGear = "H_Cap_headphones";
        goggles = "G_Bandanna_blk";
    };

    class MMGG : AR {
        backpack = "B_Carryall_oli";
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
        backpack = "B_Carryall_oli";
    };

    class MATAG : AAR {
    };

    class MATAC : MATAG {
    };

    class HATG : RAT {
        backpack = "B_Carryall_oli";
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
        uniform = "U_BG_Guerilla2_2";
        headGear = "H_Cap_headphones";
        backpack = "B_Carryall_oli";
        goggles = "G_Bandanna_oli";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "H_Watchcap_khk";
        goggles = "G_Bandanna_aviator";
        uniform = "U_BG_Guerilla3_1";
        vest = "V_BandollierB_rgr_ARM";
        backpack = "B_AssaultPack_rgr";
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
        headGear = "H_Cap_oli_hs";
        uniform = "U_BG_Guerilla2_2";
        vest = "V_TacVest_blk_ARM";
        backpack = "B_Parachute";
        goggles = "G_Aviator";
    };

    class PCM : P {
    };
};
