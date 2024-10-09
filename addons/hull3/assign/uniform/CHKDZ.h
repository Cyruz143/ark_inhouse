class CHKDZ {
    class Rifleman {
        headGear = "";
        goggles = "G_Balaclava_oli";
        uniform = "CUP_U_O_CHDKZ_Kam_01";
        vest = "CUP_V_RUS_Smersh_New_Buttpack_ARM";
        backpack = "ark_backpack_med";
        insignia = "";
    };

    class Leader : Rifleman {
        headGear = "H_Bandanna_khk_hs";
        goggles = "G_Bandanna_oli";
        uniform = "CUP_U_O_CHDKZ_Kam_04";
        vest = "CUP_V_RUS_Smersh_New_Full_ARM";
    };

    class Officer : Leader {
        uniform = "CUP_U_O_CHDKZ_Kam_05";
        headGear = "CUP_H_ChDKZ_Cap";
        goggles = "G_Aviator";
    };

    class Crew : Rifleman {
        headGear = "CUP_H_RUS_TSH_4_Brown";
        uniform = "CUP_U_O_CHDKZ_Kam_07";
        goggles = "";
        vest = "CUP_V_RUS_Smersh_New_Light_ARM";
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
        backpack = "ark_backpack_large";
        goggles = "";
        headGear = "CUP_H_ChDKZ_Beanie";
        uniform = "CUP_U_O_CHDKZ_Kam_03";
        insignia = "";
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        goggles = "G_Balaclava_blk";
        headGear = "";
        uniform = "CUP_U_O_CHDKZ_Kam_08";
    };

    class AAR : Rifleman {
        backpack = "ark_backpack_large";
        goggles = "";
        headGear = "CUP_H_SLA_BeanieGreen";
        uniform = "CUP_U_O_CHDKZ_Kam_03";
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
        headGear = "H_Cap_headphones";
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
