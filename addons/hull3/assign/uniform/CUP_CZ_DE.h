class CUP_CZ_DE {
    class Rifleman {
        headGear = "CUP_H_CZ_Helmet01";
        goggles = "";
        uniform = "CUP_U_B_CZ_DST_NoKneepads";
        vest = "CUP_V_CZ_NPP2006_nk_des_ARM";
        backpack = "ark_backpack_med";
        insignia = "";
    };

    class Leader : Rifleman {
        vest = "CUP_V_CZ_NPP2006_des_ARM";
    };

    class Officer : Leader {
        headGear = "CUP_H_CZ_Hat01";
        uniform = "CUP_U_B_CZ_DST_Kneepads_Sleeve";
        vest = "CUP_V_CZ_NPP2006_co_des_ARM";
    };

    class Crew : Rifleman {
        headGear = "CUP_H_USMC_ACVC_DES";
        uniform = "CUP_U_B_CZ_DST_TShirt";
        vest = "CUP_V_CZ_NPP2006_light_vz95_ARM";
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
        headGear = "CUP_H_CZ_Helmet02";
        vest = "CUP_V_CZ_NPP2006_ok_des_ARM";
        backpack = "ark_backpack_large";
        insignia = "";
    };

    class FTL : Leader {
        vest = "CUP_V_CZ_NPP2006_co_des_ARM";
    };

    class AR : Rifleman {
        headGear = "CUP_H_CZ_Helmet02";
        uniform = "CUP_U_B_CZ_DST_TShirt";
    };

    class AAR : Rifleman {
        headGear = "CUP_H_CZ_Helmet02";
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
        headGear = "CUP_H_CZ_Booniehat_fold_des";
        goggles = "";
        uniform = "CUP_U_B_CZ_DST_TShirt";
        vest = "CUP_V_CZ_NPP2006_des_ARM";
        backpack = "ark_backpack_small";
    };

    class SP : SN {
        headGear = "CUP_H_CZ_Booniehat_vz95_des";
    };

    class VC : Crew {
    };

    class VG : Crew {
    };

    class VD : Crew {
    };

    class P : Crew {
        headGear = "H_PilotHelmetHeli_B";
        uniform = "CUP_U_B_CZ_Pilot_WDL";
        vest = "CUP_V_CZ_NPP2006_light_vz95_ARM";
        backpack = "B_Parachute";
    };

    class PCM : P {
        headGear = "H_CrewHelmetHeli_B";
    };

};
