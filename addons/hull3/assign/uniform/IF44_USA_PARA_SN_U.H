class IF44_USA_PARA_SN_U {
    class Rifleman {
        headGear = "H_LIB_US_AB_Helmet_Clear_1";
        goggles = "";
        uniform = "U_LIB_US_AB_Uniform_M42_w";
        vest = "V_LIB_US_AB_Vest_Garand_ARM";
        backpack = "B_LIB_US_M36";
        insignia = "";
    };

    class Leader : Rifleman {
        vest = "V_LIB_US_AB_Vest_Padded_Thompson_nco_ARM";
        headgear = "H_LIB_US_AB_Helmet_CO_2";
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
        backpack = "B_LIB_US_M36_Bandoleer";
    };

    class XO : CO {
        vest = "V_LIB_US_AB_Vest_Padded_Thompson_nco_Radio_ARM";
        backpack = "B_LIB_US_Radio_ACRE2";
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        vest = "V_LIB_US_AB_Vest_Padded_Asst_MG_ARM";
        headgear = "H_LIB_US_AB_Helmet_Clear_3";
        backpack = "B_LIB_US_M36";
        insignia = "";
    };

    class FTL : Leader {
        headGear = "H_LIB_US_AB_Helmet_NCO_2";
        vest = "V_LIB_US_AB_Vest_Padded_Thompson_ARM";
    };

    class AR : Rifleman {
        vest = "V_LIB_US_AB_Vest_Padded_Bar_ARM";
        headGear = "H_LIB_US_Helmet_Net_ns";
    };

    class AAR : Rifleman {
        vest = "V_LIB_US_AB_Vest_Padded_Grenadier_ARM";
        headGear = "H_LIB_US_Helmet_os";
        backpack = "B_LIB_US_Bandoleer";
    };

    class RAT : Rifleman {
        backpack = "B_LIB_US_M36_Rope";
        vest = "V_LIB_US_AB_Vest_Padded_Carbine_ARM";
    };

    class MMGG : AR {
        vest = "V_LIB_US_Vest_M1919_ARM";
    };

    class MMGAG : AAR {
        headGear = "H_LIB_US_AB_Helmet_NCO_2";
        vest = "V_LIB_US_AB_Vest_Padded_Carbine_ARM";
    };

    class HMGG : AR {
        vest = "V_LIB_US_Vest_M1919_ARM";
    };

    class HMGAG : AAR {
        headGear = "H_LIB_US_AB_Helmet_NCO_2";
        vest = "V_LIB_US_AB_Vest_Padded_Thompson_ARM";
    };

    class HMGAC : HMGG {
        vest = "V_LIB_US_AB_Vest_M1919_ARM";
    };

    class MATG : RAT {
        backpack = "B_LIB_US_M36_Rocketbag_Empty";
    };

    class MATAG : MATG {
        headGear = "H_LIB_US_AB_Helmet_NCO_2";
        vest = "V_LIB_US_AB_Vest_Padded_Thompson_ARM";
        backpack = "B_LIB_US_M36_Rocketbag_Empty";
    };

    class MATAC : MATAG {
        backpack = "B_LIB_US_M36_Rocketbag_Empty";
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
        vest = "V_LIB_US_AB_Vest_Padded_Carbine_ARM";
    };

    class MTRAG : Rifleman {
        vest = "V_LIB_US_AB_Vest_Padded_Thompson_ARM";
    };

    class MTRAC : Rifleman {
        vest = "V_LIB_US_AB_Vest_Padded_Carbine_ARM";
    };

    class ENG : Rifleman {
        headGear = "H_LIB_US_AB_Helmet_NCO_2";
        vest = "V_LIB_US_AB_Vest_Padded_Carbine_eng_ARM";
    };

    class ENGA : ENG {
        headGear = "H_LIB_US_AB_Helmet_Clear_3";
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
