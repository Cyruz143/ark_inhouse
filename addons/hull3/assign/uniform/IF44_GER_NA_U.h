class IF44_GER_NA_U {
    class Rifleman {
        headGear = "H_LIB_DAK_Helmet_2";
        goggles = "";
        uniform = "U_LIB_DAK_Shorts";
        vest = "V_LIB_DAK_VestKar98_ARM";
        backpack = "B_LIB_GER_Tonister34_cowhide";
        insignia = "";
    };

    class Leader : Rifleman {
        uniform = "U_LIB_DAK_Lieutenant";
    };

    class Officer : Leader {
        headGear = "H_LIB_DAK_OfficerCap";
        vest = "V_LIB_DAK_FieldOfficer_ARM";
    };

    class Crew : Rifleman {
        headGear = "H_LIB_DAK_Cap";
        uniform = "U_LIB_DAK_Spg_crew_private";
        vest = "V_LIB_DAK_PrivateBelt_ARM";
        backpack = "B_LIB_GER_A_frame";
    };

    class CO : Officer {
    };

    class XO : CO {
        backpack = "B_LIB_GER_Radio_ACRE2";
    };

    class SL : Officer {
        headGear = "H_LIB_DAK_Cap";
    };

    class Medic : Rifleman {
        backpack = "B_LIB_GER_MedicBackpack_Empty";
        uniform = "U_LIB_DAK_Soldier";
        vest = "V_LIB_DAK_VestG43_ARM";
        headGear = "H_LIB_DAK_Helmet_net_2";
        insignia = "";
    };

    class FTL : Leader {
        uniform = "U_LIB_DAK_Shorts";
        vest = "V_LIB_DAK_VestMP40_ARM";
        headGear = "H_LIB_DAK_Helmet_Glasses";
    };

    class AR : Rifleman {
        vest = "V_LIB_DAK_VestMG_ARM";
        headGear = "H_LIB_DAK_Helmet_ns_2";
        backpack = "B_LIB_GER_Backpack";
    };

    class AAR : Rifleman {
        backpack = "B_LIB_GER_Backpack";
        headGear = "H_LIB_DAK_Helmet_ns_2";
    };

    class RAT : Rifleman {
        vest = "V_LIB_DAK_VestG43_ARM";
    };

    class MMGG : AR {
        vest = "V_LIB_DAK_VestMG_ARM";
    };

    class MMGAG : AAR {
        vest = "V_LIB_DAK_VestMP40_ARM";
    };

    class HMGG : AR {
        backpack = "B_LIB_GER_Backpack";
        vest = "V_LIB_DAK_VestMG_ARM";
    };

    class HMGAG : AAR {
        backpack = "B_LIB_GER_Backpack";
        vest = "V_LIB_DAK_VestMP40_ARM";
    };

    class HMGAC : HMGG {
        vest = "V_LIB_DAK_VestG43_ARM";
        backpack = "B_LIB_GER_Backpack";
    };

    class MATG : RAT {
        headGear = "H_LIB_DAK_Helmet_Glasses";
        backpack = "B_LIB_GER_Panzer_Empty";
    };

    class MATAG : MATG {
        headGear = "H_LIB_DAK_Helmet_2";
        vest = "V_LIB_DAK_VestMP40_ARM";
        backpack = "B_LIB_GER_Panzer_Empty";
    };

    class MATAC : MATAG {
        backpack = "B_LIB_GER_Panzer_Empty";
        vest = "V_LIB_DAK_VestKar98_ARM";
    };

    class HATG : Rifleman {
    };

    class HATAG : Rifleman {
    };

    class HATAC : Rifleman {
    };

    class DHATG : Rifleman {
    };

    class DHATAG : Rifleman {
    };

    class DHATAC : Rifleman {
    };

    class SAMG : Rifleman {
    };

    class SAMAG : Rifleman {
    };

    class SAMAC : Rifleman {
    };

    class GMGG : Rifleman {
    };

    class GMGAG : Rifleman {
    };

    class GMGAC : Rifleman {
    };

    class MTRG : Rifleman {
        backpack = "B_LIB_GER_Backpack";
    };

    class MTRAG : Rifleman {
        vest = "V_LIB_DAK_VestMP40_ARM";
        backpack = "B_LIB_GER_Backpack";
    };

    class MTRAC : MTRG {
        backpack = "B_LIB_GER_Backpack";
        vest = "V_LIB_DAK_VestG43_ARM";
    };

    class ENG : Rifleman {
        headGear = "H_LIB_DAK_PithHelmet";
        vest = "V_LIB_DAK_PioneerVest_ARM";
        backpack = "B_LIB_GER_SapperBackpack_empty";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        backpack = "B_LIB_DAK_A_frame";
    };

    class SP : SN {
    };

    class VC : Crew {
        uniform = "U_LIB_DAK_Spg_crew_leutnant";
        headGear = "H_LIB_DAK_OfficerCap";
    };

    class VG : Crew {
    };

    class VD : Crew {
    };

    class P : Crew {
        headGear = "H_LIB_GER_LW_PilotHelmet";
        uniform = "U_LIB_GER_LW_pilot";
        vest = "V_LIB_DAK_PrivateBelt_ARM";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };

};
