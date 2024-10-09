class IF44_BAF_NA_U {
    class Rifleman {
        headGear = "H_LIB_UK_Helmet_Mk2_Desert";
        goggles = "";
        uniform = "U_LIB_UK_KhakiDrills";
        vest = "V_LIB_UK_P37_Rifleman_ARM";
        backpack = "B_LIB_UK_HSack";
        insignia = "";
    };

    class Leader : Rifleman {
        vest = "V_LIB_UK_P37_Officer_ARM";
    };

    class Officer : Leader {
        headGear = "H_LIB_UK_Beret";
    };

    class Crew : Rifleman {
        headGear = "H_LIB_UK_Beret_Tankist";
        vest = "V_LIB_UK_P37_Crew_ARM";
        backpack = "B_LIB_UK_HSack";
    };

    class CO : Officer {
        backpack = "B_LIB_UK_HSack_Tea";
    };

    class XO : CO {
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        backpack = "B_LIB_UK_HSack_Cape";
        headGear = "H_LIB_UK_Helmet_Mk2_Desert_Bowed";
        insignia = "";
    };

    class FTL : Leader {
        vest = "V_LIB_UK_P37_Sten_ARM";
    };

    class AR : Rifleman {
        vest = "V_LIB_UK_P37_Heavy_ARM";
        headGear = "H_LIB_UK_Helmet_Mk2_Desert_Bowed";
        backpack = "B_LIB_UK_HSack_Cape";
    };

    class AAR : Rifleman {
        backpack = "B_LIB_UK_HSack_Cape";
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
        vest = "V_LIB_UK_P37_Holster_ARM";
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
