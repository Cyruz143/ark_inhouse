class CUP_RACS_MECH {
    class Rifleman {
        headGear = "CUP_H_RACS_Helmet_mech";
        goggles = "";
        uniform = "CUP_U_I_RACS_mech_1";
        vest = "CUP_V_B_Interceptor_Rifleman_Olive_ARM";
        backpack = "ark_backpack_med";
        insignia = "";
    };

    class Leader : Rifleman {
        vest = "CUP_V_B_Interceptor_Grenadier_Olive_ARM";
        headGear = "CUP_H_RACS_Helmet_Headset_mech";
    };

    class Officer : Leader {
        headGear = "CUP_H_RACS_Beret_Blue";
        vest = "CUP_V_B_Interceptor_Grenadier_Olive_ARM";
    };

    class Crew : Rifleman {
        headGear = "CUP_H_USMC_ACVC_WDL";
        uniform = "CUP_U_I_RACS_mech_2";
        vest = "CUP_V_B_Interceptor_Base_Olive_ARM";
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
        insignia = "";
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
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
        backpack = "ark_backpack_large";
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
        headGear = "CUP_H_US_patrol_cap_tigerstripe";
        uniform = "CUP_U_I_RACS_mech_2";
        vest = "CUP_V_B_Interceptor_Rifleman_Olive_ARM";
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
        uniform = "CUP_U_I_RACS_PilotOverall";
        headGear = "H_PilotHelmetHeli_O";
        vest = "CUP_V_B_PilotVest_ARM";
        backpack = "B_Parachute";
        goggles = "G_Aviator";
    };

    class PCM : P {
        headGear = "H_CrewHelmetHeli_O";
    };

};