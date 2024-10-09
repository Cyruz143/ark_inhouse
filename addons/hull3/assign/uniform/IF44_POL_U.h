class IF44_POL_U {
    class Rifleman {
        headGear = "H_LIB_WP_Helmet";
        goggles = "";
        uniform = "U_LIB_WP_Soldier_camo_1";
        vest = "fow_v_heer_k98_ARM";
        backpack = "fow_b_heer_aframe";
        insignia = "";
    };

    class Leader : Rifleman {
        vest = "fow_v_heer_mp40_nco_ARM";
    };

    class Officer : Leader {
        headGear = "H_LIB_WP_Cap";
        uniform = "U_LIB_WP_Soldier_camo_2";
    };

    class Crew : Rifleman {
        headGear = "H_LIB_WP_Cap";
        uniform = "U_LIB_WP_Soldier_camo_1";
        vest = "fow_v_heer_tankcrew_p38_ARM";
        backpack = "fow_b_heer_aframe";
    };

    class CO : Officer {
        uniform = "U_LIB_WP_Soldier_camo_2";
        vest = "fow_v_heer_mp40_nco_ARM";
    };

    class XO : CO {
        backpack = "fow_b_torn_radio";
    };

    class SL : Officer {
        uniform = "U_LIB_WP_Soldier_camo_2";
    };

    class Medic : Rifleman {
        backpack = "fow_b_tornister_medic";
        uniform = "U_LIB_WP_Soldier_camo_3";
        headGear = "H_LIB_WP_Helmet_med";
        insignia = "";
    };

    class FTL : Leader {
        uniform = "U_LIB_WP_Soldier_camo_1";
    };

    class AR : Rifleman {
        vest = "fow_v_heer_mg_ARM";
        headGear = "H_LIB_WP_Helmet_camo";
        uniform = "U_LIB_WP_Soldier_camo_3";
        backpack = "fow_b_heer_ammo_belt";
    };

    class AAR : Rifleman {
        backpack = "fow_b_ammoboxes";
    };

    class RAT : Rifleman {
        vest = "fow_v_heer_g43_ARM";
        backpack = "fow_b_grenadebag";
    };

    class MMGG : AR {
    };

    class MMGAG : AAR {
        uniform = "U_LIB_WP_Soldier_camo_1";
        backpack = "fow_b_ammoboxes_mg34_42";
    };

    class HMGG : Rifleman {
    };

    class HMGAG : Rifleman {
    };

    class HMGAC : HMGG {
    };

    class MATG : RAT {
        backpack = "fow_b_uk_bergenpack";
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
        uniform = "U_LIB_WP_Soldier_camo_1";
        headGear = "H_LIB_WP_Cap";
        vest = "fow_v_heer_g43_ARM";
        backpack = "fow_b_uk_bergenpack";
    };

    class ENGA : ENG {
        uniform = "U_LIB_WP_Soldier_camo_2";
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
        backpack = "B_Parachute";
    };

    class PCM : P {
    };

};
