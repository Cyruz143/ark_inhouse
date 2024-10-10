class IF44_USA_U {
    class Rifleman {
        headGear = "H_LIB_US_Helmet";
        goggles = "";
        uniform = "U_LIB_US_Private";
        vest = "V_LIB_US_Vest_Garand_ARM";
        backpack = "B_LIB_US_Backpack";
        insignia = "";
    };

    class Leader : Rifleman {
        vest = "V_LIB_US_Vest_Thompson_nco_ARM";
    };

    class Officer : Leader {
    };

    class Crew : Rifleman {
        uniform = "U_LIB_US_Tank_Crew";
        headGear = "H_LIB_US_Helmet_Tank";
        vest = "V_LIB_US_Vest_45_ARM";
        backpack = "B_LIB_US_M36";
    };

    class CO : Officer {
        backpack = "B_LIB_US_Backpack_Bandoleer";
        headgear = "H_LIB_US_Helmet_Cap";
    };

    class XO : CO {
        headGear = "H_LIB_US_Helmet_First_lieutenant";
        backpack = "B_LIB_US_Radio_ACRE2";
    };

    class SL : Officer {
        headGear = "H_LIB_US_Helmet_Second_lieutenant";
    };

    class Medic : Rifleman {
        uniform = "U_LIB_US_Eng";
        vest = "V_LIB_US_Vest_Medic2_ARM";
        headgear = "H_LIB_US_Helmet_Med";
        backpack = "B_LIB_US_Backpack";
        insignia = "";
    };

    class FTL : Leader {
        headGear = "H_LIB_US_Helmet_NCO";
        uniform = "U_LIB_US_Sergeant";
        vest = "V_LIB_US_Vest_Thompson_ARM";
    };

    class AR : Rifleman {
        vest = "V_LIB_US_Vest_Bar_ARM";
        uniform = "U_LIB_US_Corp";
        headGear = "H_LIB_US_Helmet_Net_ns";
    };

    class AAR : Rifleman {
        vest = "V_LIB_US_Vest_Grenadier_ARM";
        headGear = "H_LIB_US_Helmet_os";
        backpack = "B_LIB_US_Bandoleer";
    };

    class RAT : Rifleman {
        uniform = "U_LIB_US_Private_1st";
        backpack = "B_LIB_US_Backpack_Mk2";
        vest = "V_LIB_US_Vest_Carbine_ARM";
    };

    class MMGG : AR {
        uniform = "U_LIB_US_Private";
        vest = "V_LIB_US_Vest_M1919_ARM";
    };

    class MMGAG : AAR {
        headGear = "H_LIB_US_Helmet_NCO";
        uniform = "U_LIB_US_Sergeant";
        vest = "V_LIB_US_Vest_Asst_MG_ARM";
    };

    class HMGG : AR {
        uniform = "U_LIB_US_Private";
        vest = "V_LIB_US_Vest_M1919_ARM";
    };

    class HMGAG : AAR {
        headGear = "H_LIB_US_Helmet_NCO";
        uniform = "U_LIB_US_Sergeant";
        vest = "V_LIB_US_Vest_Asst_MG_ARM";
    };

    class HMGAC : HMGG {
        vest = "V_LIB_US_Vest_Asst_MG_ARM";
    };

    class MATG : RAT {
        backpack = "B_LIB_US_Backpack_RocketBag_Empty";
    };

    class MATAG : MATG {
        headGear = "H_LIB_US_Helmet_NCO";
        uniform = "U_LIB_US_Sergeant";
        backpack = "B_LIB_US_Backpack_RocketBag_Empty";
    };

    class MATAC : MATAG {
        backpack = "B_LIB_US_Backpack_RocketBag_Empty";
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
        vest = "V_LIB_US_Vest_Carbine_ARM";
    };

    class MTRAG : Rifleman {
        headGear = "H_LIB_US_Helmet_NCO";
        vest = "V_LIB_US_Vest_Thompson_ARM";
        uniform = "U_LIB_US_Sergeant";
    };

    class MTRAC : Rifleman {
        vest = "V_LIB_US_Vest_Carbine_ARM";
    };

    class ENG : Rifleman {
        headGear = "H_LIB_US_Helmet_NCO";
        uniform = "U_LIB_US_Sergeant";
        vest = "V_LIB_US_Vest_Thompson_ARM";
    };

    class ENGA : ENG {
        uniform = "U_LIB_US_Eng";
        vest = "V_LIB_US_Vest_Carbine_eng_ARM";
    };

    class SN : Rifleman {
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
        uniform = "U_LIB_US_Bomber_Pilot";
        headGear = "H_LIB_US_Helmet_Pilot_Glasses_Up";
        vest = "V_LIB_US_LifeVest_ARM";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };

};
