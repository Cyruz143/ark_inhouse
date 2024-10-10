class IF44_USA_SN_U {
    class Rifleman {
        headGear = "H_LIB_US_Helmet_w";
        goggles = "";
        uniform = "U_LIB_US_Private_w";
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
        uniform = "U_LIB_US_Tank_Crew2";
        headGear = "H_LIB_US_Helmet_Tank";
        vest = "V_LIB_US_Vest_45_ARM";
        backpack = "B_LIB_US_M36";
    };

    class CO : Officer {
        backpack = "B_LIB_US_Backpack_Bandoleer";
        headgear = "H_LIB_US_Helmet_Cap_w";
    };

    class XO : CO {
        headGear = "H_LIB_US_Helmet_First_lieutenant_w";
        backpack = "B_LIB_US_Radio_ACRE2";
    };

    class SL : Officer {
        headGear = "H_LIB_US_Helmet_Second_lieutenant_w";
    };

    class Medic : Rifleman {
        vest = "V_LIB_US_Vest_Medic2_ARM";
        headgear = "H_LIB_US_Helmet_Med_w";
        backpack = "B_LIB_US_Backpack";
        insignia = "";
    };

    class FTL : Leader {
        headGear = "H_LIB_US_Helmet_Net_w";
        vest = "V_LIB_US_Vest_Thompson_ARM";
    };

    class AR : Rifleman {
        vest = "V_LIB_US_Vest_Bar_ARM";
    };

    class AAR : Rifleman {
        vest = "V_LIB_US_Vest_Grenadier_ARM";
        backpack = "B_LIB_US_Bandoleer";
    };

    class RAT : Rifleman {
        backpack = "B_LIB_US_Backpack_Mk2";
        vest = "V_LIB_US_Vest_Carbine_ARM";
    };

    class MMGG : AR {
        vest = "V_LIB_US_Vest_M1919_ARM";
    };

    class MMGAG : AAR {
        headGear = "H_LIB_US_Helmet_Net_w";
        vest = "V_LIB_US_Vest_Asst_MG_ARM";
    };

    class HMGG : AR {
        vest = "V_LIB_US_Vest_M1919_ARM";
    };

    class HMGAG : AAR {
        headGear = "H_LIB_US_Helmet_Net_w";
        vest = "V_LIB_US_Vest_Asst_MG_ARM";
    };

    class HMGAC : HMGG {
        vest = "V_LIB_US_Vest_Asst_MG_ARM";
    };

    class MATG : RAT {
        backpack = "B_LIB_US_Backpack_RocketBag_Empty";
    };

    class MATAG : MATG {
        headGear = "H_LIB_US_Helmet_Net_w";
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
        headGear = "H_LIB_US_Helmet_Net_w";
        vest = "V_LIB_US_Vest_Thompson_ARM";
    };

    class MTRAC : Rifleman {
        vest = "V_LIB_US_Vest_Carbine_ARM";
    };

    class ENG : Rifleman {
        headGear = "H_LIB_US_Helmet_Net_w";
        vest = "V_LIB_US_Vest_Thompson_ARM";
    };

    class ENGA : ENG {
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
