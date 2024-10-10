class LDF {
    class Rifleman {
        headGear = "H_HelmetHBK_headset_F";
        goggles = "";
        uniform = "U_I_E_Uniform_01_F";
        vest = "V_CarrierRigKBT_01_light_EAF_F_ARM";
        backpack = "B_AssaultPack_eaf_F";
        insignia = "";
    };

    class Leader : Rifleman {
        uniform = "U_I_E_Uniform_01_sweater_F";
        vest = "V_CarrierRigKBT_01_heavy_EAF_F_ARM";
    };

    class Officer : Leader {
        headGear = "H_Beret_EAF_01_F";
        uniform = "U_I_E_Uniform_01_officer_F";
    };

    class Crew : Rifleman {
        headGear = "H_Tank_eaf_F";
        uniform = "U_I_E_Uniform_01_coveralls_F";
        vest = "V_CarrierRigKBT_01_EAF_F_ARM";
        backpack = "B_AssaultPack_eaf_F";
    };

    class CO : Officer {
    };

    class XO : CO {
        backpack = "B_RadioBag_01_eaf_F";
    };

    class SL : Officer {
        headGear = "H_MilCap_eaf";
    };

    class Medic : Rifleman {
        backpack = "B_Carryall_eaf_F";
        uniform = "U_I_E_Uniform_01_shortsleeve_F";
        insignia = "";
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        uniform = "U_I_E_Uniform_01_tanktop_F";
        backpack = "B_Carryall_eaf_F";
        headGear = "H_HelmetHBK_ear_F";
    };

    class AAR : Rifleman {
        backpack = "B_Carryall_eaf_F";
        headGear = "H_HelmetHBK_chops_F";
    };

    class RAT : Rifleman {
    };

    class MMGG : AR {
        backpack = "B_Carryall_eaf_F";
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
        backpack = "B_Carryall_eaf_F";
    };

    class MATAG : AAR {
    };

    class MATAC : MATAG {
    };

    class HATG : RAT {
        backpack = "B_Carryall_eaf_F";
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
        uniform = "U_I_E_Uniform_01_sweater_F";
        backpack = "B_Carryall_eaf_F";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "H_Booniehat_eaf";
        goggles = "G_Bandanna_khk";
        uniform = "U_I_E_Uniform_01_shortsleeve_F";
        backpack = "B_AssaultPack_eaf_F";
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
        headGear = "H_PilotHelmetHeli_I_E";
        uniform = "U_I_E_Uniform_01_coveralls_F";
        vest = "V_CarrierRigKBT_01_EAF_F_ARM";
        backpack = "B_Parachute";
    };

    class PCM : P {
        headGear = "H_CrewHelmetHeli_I_E";
    };

};
