class IF44_GER_SN_U {
    class Rifleman {
        headGear = "H_LIB_GER_Helmet_w";
        goggles = "";
        uniform = "U_LIB_GER_Soldier_camo_w";
        vest = "fow_v_heer_k98_ARM";
        backpack = "fow_b_heer_aframe";
        insignia = "";
    };

    class Leader : Rifleman {
        vest = "fow_v_heer_mp40_nco_ARM";
    };

    class Officer : Leader {
        headGear = "fow_h_ger_officer_cap";
        uniform = "U_LIB_GER_Scharfschutze_2_w";
    };

    class Crew : Rifleman {
        headGear = "fow_h_ger_m38_feldmutze_panzer";
        uniform = "fow_u_ger_tankcrew_01_shutz";
        vest = "fow_v_heer_tankcrew_p38_ARM";
        backpack = "fow_b_heer_aframe";
    };

    class CO : Officer {
        uniform = "U_LIB_GER_Scharfschutze_2_w";
        vest = "fow_v_heer_mp40_nco_ARM";
    };

    class XO : CO {
        backpack = "fow_b_torn_radio";
    };

    class SL : Officer {
        uniform = "U_LIB_GER_Scharfschutze_2_w";
    };

    class Medic : Rifleman {
        backpack = "fow_b_tornister_medic";
        vest = "fow_v_heer_g43_ARM";
        uniform = "U_LIB_GER_Scharfschutze_2_w";
        headGear = "H_LIB_GER_Helmet_Medic";
        insignia = "";
    };

    class FTL : Leader {
        headGear = "H_LIB_GER_Fieldcap";
        uniform = "U_LIB_GER_Scharfschutze_2_w";
        vest = "fow_v_heer_mp44_ARM";
    };

    class AR : Rifleman {
        vest = "fow_v_heer_mg_ARM";
        headGear = "H_LIB_GER_Helmet_Glasses_w";
        uniform = "U_LIB_GER_Soldier_camo_w";
        backpack = "fow_b_heer_ammo_belt";
    };

    class AAR : Rifleman {
        headGear = "H_LIB_GER_Helmet_net_w";
        backpack = "fow_b_ammoboxes_mg34_42";
        vest = "fow_v_heer_k98_ass_ARM";
    };

    class RAT : Rifleman {
        uniform = "U_LIB_GER_Soldier3_w";
        vest = "fow_v_heer_g43_ARM";
        backpack = "fow_b_grenadebag";
    };

    class MMGG : AR {
    };

    class MMGAG : AAR {
        uniform = "U_LIB_GER_Scharfschutze_2_w";
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
        headGear = "H_LIB_GER_Helmet_net_w";
        uniform = "U_LIB_GER_Soldier_camo_w";
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
        uniform = "U_LIB_GER_Scharfschutze_2_w";
        headGear = "H_LIB_GER_Fieldcap";
        vest = "fow_v_heer_mp40_ARM";
        backpack = "fow_b_uk_bergenpack";
    };

    class ENGA : ENG {
        uniform = "U_LIB_GER_Soldier_camo_w";
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
