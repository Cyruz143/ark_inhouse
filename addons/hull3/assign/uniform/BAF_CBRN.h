class BAF_CBRN {
    class Rifleman {
        headGear = "CUP_H_BAF_MTP_Mk7";
        goggles = "G_AirPurifyingRespirator_02_olive_F";
        uniform = "U_B_CBRN_Suit_01_Wdl_F";
        vest = "CUP_V_B_BAF_MTP_Osprey_Mk4_Rifleman_ARM";
        backpack = "ark_backpack_med";
        insignia = "";
    };

    class Leader : Rifleman {
        headGear = "CUP_H_BAF_MTP_Mk7_PRR";
        vest = "CUP_V_B_BAF_MTP_Osprey_Mk4_Officer_ARM";
    };

    class Officer : Leader {
        vest = "CUP_V_B_BAF_MTP_Osprey_Mk4_Officer_ARM";
    };

    class Crew : Rifleman {
        headGear = "CUP_H_BAF_Crew_Helmet_MTP";
        vest = "CUP_V_B_BAF_MTP_Osprey_Mk4_Crewman_ARM";
        backpack = "ark_backpack_small";
        goggles = "G_AirPurifyingRespirator_02_olive_F";
    };

    class CO : Officer {
    };

    class XO : CO {
        backpack = "CUP_B_Predator_Radio_MTP";
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        headGear = "CUP_H_BAF_MTP_Mk6_GOGGLES_PRR";
        vest = "CUP_V_B_BAF_MTP_Osprey_Mk4_Medic_ARM";
        backpack = "ark_backpack_large";
        insignia = "";
    };

    class FTL : Leader {
        vest = "CUP_V_B_BAF_MTP_Osprey_Mk4_Grenadier_ARM";
    };

    class AR : Rifleman {
        headGear = "CUP_H_BAF_MTP_Mk6_NETTING_PRR";
    };

    class AAR : Rifleman {
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
        vest = "CUP_V_B_BAF_MTP_Osprey_Mk4_Engineer_ARM";
        backpack = "ark_backpack_large";
        headGear = "CUP_H_BAF_Helmet_4_MTP";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "CUP_H_BAF_Helmet_4_MTP";
        goggles = "G_AirPurifyingRespirator_02_olive_F";
        vest = "CUP_V_B_BAF_MTP_Osprey_Mk4_Scout_ARM";
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
        headGear = "CUP_H_BAF_Helmet_Pilot";
        vest = "CUP_V_B_BAF_MTP_Osprey_Mk4_Rifleman_ARM";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };

};
