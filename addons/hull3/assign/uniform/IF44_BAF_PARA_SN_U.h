class IF44_BAF_PARA_SN_U {
    class Rifleman {
        headGear = "H_LIB_UK_Para_Helmet_Mk2_w";
        goggles = "";
        uniform = "U_LIB_UK_DenisonSmock_w";
        vest = "V_LIB_UK_P37_Rifleman_Blanco_ARM";
        backpack = "B_LIB_UK_HSack_Blanco";
        insignia = "";
    };

    class Leader : Rifleman {
        vest = "V_LIB_UK_P37_Officer_Blanco_ARM";
    };

    class Officer : Leader {
        headGear = "H_LIB_UK_Para_Beret";
    };

    class Crew : Rifleman {
        headGear = "H_LIB_UK_Beret_Tankist";
		uniform = "U_LIB_UK_P37_w";
        vest = "V_LIB_UK_P37_Crew_ARM";
        backpack = "B_LIB_UK_HSack_Blanco";
    };

    class CO : Officer {
        backpack = "B_LIB_UK_HSack_Blanco_Tea";
    };

    class XO : CO {
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        backpack = "B_LIB_UK_HSack_Blanco_Cape";
        headGear = "H_LIB_UK_Para_Helmet_Mk2_Net_w";
        insignia = "";
    };

    class FTL : Leader {
        vest = "V_LIB_UK_P37_Sten_Blanco_ARM";
    };

    class AR : Rifleman {
        vest = "V_LIB_UK_P37_Heavy_Blanco_ARM";
        headGear = "H_LIB_UK_Para_Helmet_Mk2_Net_w";
        backpack = "B_LIB_UK_HSack_Blanco_Cape";
    };

    class AAR : Rifleman {
        backpack = "B_LIB_UK_HSack_Blanco_Cape";
    };

    class RAT : Rifleman {
    };

    class MMGG : AR {
    };

    class MMGAG : AAR {
    };

    class HMGG : AR {
    };

    class HMGAG : AAR {
    };

    class HMGAC : HMGG {
    };

    class MATG : RAT {
    };

    class MATAG : MATG {
    };

    class MATAC : MATAG {
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
    };

    class MTRAG : Rifleman {
    };

    class MTRAC : Rifleman {
    };

    class ENG : Rifleman {
        vest = "V_LIB_UK_P37_Holster_Blanco_ARM";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
    };

    class SP : SN {
    };

    class VC : Crew {
        headGear = "H_LIB_UK_Beret_Headset";
    };

    class VG : Crew {
    };

    class VD : Crew {
    };

    class P : Crew {
        headGear = "H_LIB_UK_Pilot_Cap";
        vest = "V_LIB_UK_P37_Crew_ARM";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };

};
