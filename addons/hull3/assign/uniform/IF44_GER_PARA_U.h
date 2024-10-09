class IF44_GER_PARA_U {
    class Rifleman {
        headGear = "H_LIB_GER_FSJ_M44_Helmet";
        goggles = "";
        uniform = "U_LIB_FSJ_Soldier";
        vest = "V_LIB_GER_FSJ_VestKar98_ARM";
        backpack = "B_LIB_GER_Tonister34_cowhide";
        insignia = "";
    };

    class Leader : Rifleman {
        uniform = "U_LIB_FSJ_Soldier_camo";
    };

    class Officer : Leader {
        headGear = "H_LIB_GER_OfficerCap";
        vest = "V_LIB_GER_FieldOfficer_ARM";
    };

    class Crew : Rifleman {
        headGear = "H_LIB_GER_TankPrivateCap";
        uniform = "U_LIB_GER_Tank_crew_private";
        vest = "V_LIB_GER_PrivateBelt_ARM";
        backpack = "B_LIB_GER_A_frame";
    };

    class CO : Officer {
    };

    class XO : CO {
        headGear = "H_LIB_GER_TankOfficerCap";
        backpack = "B_LIB_GER_Radio_ACRE2";
    };

    class SL : Officer {
        vest = "V_LIB_GER_VestUnterofficer_ARM";
    };

    class Medic : Rifleman {
        backpack = "B_LIB_GER_MedicBackpack_Empty";
        vest = "V_LIB_GER_VestG43_ARM";
        headGear = "H_LIB_GER_FSJ_M44_Helmet_Medic";
        insignia = "";
    };

    class FTL : Leader {
        vest = "V_LIB_GER_VestMP40_ARM";
        headGear = "H_LIB_GER_SPGPrivateCap";
    };

    class AR : Rifleman {
        vest = "V_LIB_GER_VestMG_ARM";
        headGear = "H_LIB_GER_FSJ_M44_HelmetUtility";
        backpack = "B_LIB_GER_Backpack";
    };

    class AAR : Rifleman {
        backpack = "B_LIB_GER_Backpack";
        headGear = "H_LIB_GER_FSJ_M44_Helmet_os";
    };

    class RAT : Rifleman {
        vest = "V_LIB_GER_VestG43_ARM";
        uniform = "U_LIB_FSJ_Soldier_camo";
        headGear = "H_LIB_GER_FSJ_M38_Helmet_Cover";
    };

    class MMGG : AR {
        vest = "V_LIB_GER_VestMG_ARM";
    };

    class MMGAG : AAR {
        vest = "V_LIB_GER_VestMP40_ARM";
    };

    class HMGG : AR {
        backpack = "B_LIB_GER_Backpack";
        vest = "V_LIB_GER_VestMG_ARM";
    };

    class HMGAG : AAR {
        backpack = "B_LIB_GER_Backpack";
        vest = "V_LIB_GER_VestMP40_ARM";
    };

    class HMGAC : HMGG {
        vest = "V_LIB_GER_VestG43_ARM";
        backpack = "B_LIB_GER_Backpack";
    };

    class MATG : RAT {
        headGear = "H_LIB_GER_FSJ_M38_Helmet_Cover";
        backpack = "B_LIB_GER_Panzer_Empty";
    };

    class MATAG : MATG {
        headGear = "H_LIB_GER_FSJ_M44_Helmet";
        vest = "V_LIB_GER_VestMP40_ARM";
        backpack = "B_LIB_GER_Panzer_Empty";
    };

    class MATAC : MATAG {
        backpack = "B_LIB_GER_Panzer_Empty";
        vest = "V_LIB_GER_FSJ_VestKar98_ARM";
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
        vest = "V_LIB_GER_VestUnterofficer_ARM";
        backpack = "B_LIB_GER_Backpack";
    };

    class MTRAC : MTRG {
        backpack = "B_LIB_GER_Backpack";
        vest = "V_LIB_GER_VestG43_ARM";
    };

    class ENG : Rifleman {
        uniform = "U_LIB_FSJ_Soldier_camo";
        headGear = "H_LIB_GER_FSJ_M38_Helmet_Cover";
        vest = "V_LIB_GER_PioneerVest_ARM";
        backpack = "B_LIB_GER_SapperBackpack_empty";
    };

    class ENGA : ENG {
        headGear = "H_LIB_GER_FSJ_M44_Helmet";
        uniform = "U_LIB_FSJ_Soldier";
    };

    class SN : Rifleman {
        headGear = "H_LIB_GER_FSJ_M44_Helmet_os";
        backpack = "B_LIB_GER_A_frame";
    };

    class SP : SN {
    };

    class VC : Crew {
        uniform = "U_LIB_GER_Tank_crew_leutnant";
    };

    class VG : Crew {
    };

    class VD : Crew {
    };

    class P : Crew {
        headGear = "H_LIB_GER_LW_PilotHelmet";
        uniform = "U_LIB_GER_LW_pilot";
        vest = "V_LIB_GER_PrivateBelt_ARM";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };

};
