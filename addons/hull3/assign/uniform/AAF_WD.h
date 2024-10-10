class AAF_WD {
    class Rifleman {
        headGear = "H_HelmetIA";
        goggles = "";
        uniform = "U_I_CombatUniform";
        vest = "V_PlateCarrierIA2_dgtl_ARM";
        backpack = "B_Kitbag_rgr";
        insignia = "";
    };

    class Leader : Rifleman {
        uniform = "U_I_CombatUniform_shortsleeve";
        vest = "V_PlateCarrierIAGL_dgtl_ARM";
    };

    class Officer : Leader {
        headGear = "H_MilCap_dgtl";
        uniform = "U_I_OfficerUniform";
    };

    class Crew : Rifleman {
        headGear = "H_HelmetCrew_I";
        uniform = "U_I_CombatUniform_shortsleeve";
        vest = "V_BandollierB_oli_ARM";
        backpack = "B_AssaultPack_rgr";
    };

    class CO : Officer {
    };

    class XO : CO {
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        backpack = "B_Carryall_oli";
        uniform = "U_I_CombatUniform_shortsleeve";
        insignia = "";
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        uniform = "U_I_CombatUniform_shortsleeve";
    };

    class AAR : Rifleman {
        backpack = "B_Carryall_oli";
    };

    class RAT : Rifleman {
    };

    class MMGG : AR {
        backpack = "B_Carryall_oli";
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
        backpack = "B_Carryall_oli";
    };

    class MATAG : AAR {
    };

    class MATAC : MATAG {
    };

    class HATG : RAT {
        backpack = "B_Carryall_oli";
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
        uniform = "U_I_CombatUniform_shortsleeve";
        backpack = "B_Carryall_oli";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "H_Cap_headphones";
        goggles = "G_Bandanna_khk";
        uniform = "U_I_CombatUniform_shortsleeve";
        vest = "V_BandollierB_oli_ARM";
        backpack = "B_AssaultPack_dgtl";
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
        headGear = "H_PilotHelmetHeli_I";
        uniform = "U_I_HeliPilotCoveralls";
        vest = "V_TacVest_khk_ARM";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };
};
