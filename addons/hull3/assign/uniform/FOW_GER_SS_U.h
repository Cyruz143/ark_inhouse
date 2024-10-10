class FOW_GER_SS_U {
    class Rifleman {
        headGear = "fow_h_ger_m40_ss_01";
        goggles = "";
        uniform = "fow_u_ger_m43_peadot_01_private";
        vest = "fow_v_heer_k98_ARM";
        backpack = "fow_b_heer_aframe";
        insignia = "";
    };

    class Leader : Rifleman {
        vest = "fow_v_heer_mp40_nco_ARM";
    };

    class Officer : Leader {
        headGear = "fow_h_ger_officer_cap_ss";
        uniform = "fow_u_ger_m43_peadot_02_private";
    };

    class Crew : Rifleman {
        headGear = "fow_h_ger_m38_feldmutze_panzer";
        uniform = "fow_u_ger_tankcrew_01_shutz";
        vest = "fow_v_heer_tankcrew_p38_ARM";
        backpack = "fow_b_heer_aframe";
    };

    class CO : Officer {
        uniform = "fow_u_ger_m43_peadot_02_private";
        vest = "fow_v_heer_mp40_nco_ARM";
    };

    class XO : CO {
        backpack = "fow_b_torn_radio";
    };

    class SL : Officer {
        uniform = "fow_u_ger_m43_smock_01_private";
    };

    class Medic : Rifleman {
        backpack = "fow_b_tornister_medic";
        vest = "fow_v_heer_g43_ARM";
        uniform = "fow_u_ger_m43_ss_01_private";
        headGear = "fow_h_ger_m40_ss_02";
        insignia = "";
    };

    class FTL : Leader {
        headGear = "fow_h_ger_feldmutze_ss";
        uniform = "fow_u_ger_m43_smock_02_private";
        vest = "fow_v_heer_mp44_ARM";
    };

    class AR : Rifleman {
        vest = "fow_v_heer_mg_ARM";
        headGear = "fow_h_ger_m40_ss_02";
        uniform = "fow_u_ger_m43_peadot_03_private";
        backpack = "fow_b_heer_ammo_belt";
    };

    class AAR : Rifleman {
        headGear = "fow_h_ger_m40_ss_02";
        backpack = "fow_b_ammoboxes_mg34_42";
        vest = "fow_v_heer_k98_ass_ARM";
    };

    class RAT : Rifleman {
        uniform = "fow_u_ger_m43_ss_01_private";
        vest = "fow_v_heer_g43_ARM";
        backpack = "fow_b_grenadebag";
    };

    class MMGG : AR {
    };

    class MMGAG : AAR {
        uniform = "fow_u_ger_m43_peadot_03_private";
        vest = "fow_v_heer_k98_ass_ARM";
        backpack = "fow_b_ammoboxes";
    };

    class HMGG : AR {
    };

    class HMGAG : AAR {
    };

    class HMGAC : HMGG {
    };

    class MATG : RAT {
        backpack = "fow_b_uk_bergenpack";
    };

    class MATAG : MATG {
        headGear = "fow_h_ger_m38_feldmutze";
        uniform = "fow_u_ger_m43_peadot_02_private";
        vest = "fow_v_heer_mp40_ARM";
    };

    class MATAC : MATG {
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
        uniform = "fow_u_ger_m43_smock_02_private";
        headGear = "fow_h_ger_m38_feldmutze";
        vest = "fow_v_heer_mp40_ARM";
        backpack = "fow_b_uk_bergenpack";
    };

    class ENGA : ENG {
        uniform = "fow_u_ger_m43_smock_01_private";
        vest = "fow_v_heer_k98_ARM";
    };

    class SN : Rifleman {
    };

    class SP : SN {
    };

    class VC : Crew {
        headGear = "fow_h_ger_headset";
        uniform = "fow_u_ger_tankcrew_01_2nd_leutnant";
    };

    class VG : Crew {
    };

    class VD : Crew {
    };

    class P : Crew {
        headGear = "H_LIB_GER_LW_PilotHelmet";
        uniform = "U_LIB_GER_LW_pilot";
        vest = "V_LIB_GER_OfficerBelt_ARM";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };

};
