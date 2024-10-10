class FOW_IJA_SNLF_U {
    class Rifleman {
        headGear = "fow_h_ija_type90_snlf";
        goggles = "";
        uniform = "fow_u_ija_type98_snlf";
        vest = "fow_v_ija_rifle_ARM";
        backpack = "fow_b_ija_backpack";
        insignia = "";
    };

    class Leader : Rifleman {
        vest = "fow_v_ija_nco_ARM";
    };

    class Officer : Leader {
        headGear = "fow_h_ija_fieldcap_marine";
        uniform = "fow_u_ija_type98_snlf";
    };

    class Crew : Rifleman {
        headGear = "fow_h_ija_tank_helmet";
        uniform = "fow_u_ija_type98_khakibrown";
        vest = "fow_v_heer_tankcrew_p38_ARM";
        backpack = "fow_b_ija_backpack";
    };

    class CO : Officer {
        uniform = "fow_u_ija_type98_snlf";
        vest = "fow_v_ija_officer_ARM";
    };

    class XO : CO {
        backpack = "fow_b_ija_backpack";
    };

    class SL : Officer {
        uniform = "fow_u_ija_type98_snlf";
    };

    class Medic : Rifleman {
        backpack = "fow_b_ija_backpack";
        uniform = "fow_u_ija_type98_snlf";
        vest = "fow_v_ija_medic_ARM";
        headGear = "fow_h_ija_type90_snlf";
        insignia = "";
    };

    class FTL : Leader {
        uniform = "fow_u_ija_type98_snlf";
        headGear = "fow_h_ija_fieldcap_marine_neck";
    };

    class AR : Rifleman {
        vest = "fow_v_ija_mg_ARM";
        headGear = "fow_h_ija_type90_snlf";
        uniform = "fow_u_ija_type98_snlf";
        backpack = "fow_b_ija_backpack";
    };

    class AAR : Rifleman {
        vest = "fow_v_ija_grenadier_ARM";
        backpack = "fow_b_ija_ammobox_metal";
    };

    class RAT : Rifleman {
        vest = "fow_v_ija_grenadier_ARM";
        uniform = "fow_u_ija_type98_snlf";
    };

    class MMGG : AR {
    };

    class MMGAG : AAR {
        uniform = "fow_u_ija_type98_snlf";
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
        vest = "fow_v_ija_mortar_ARM";
        backpack = "fow_b_ija_type97_mortar_weapon";
    };

    class MTRAG : Rifleman {
        vest = "";
        backpack = "fow_b_ija_type97_mortar_support";
    };

    class MTRAC : MTRG {
    };

    class ENG : Rifleman {
        uniform = "fow_u_ija_type98_snlf";
        headGear = "fow_h_ija_fieldcap_neck";
        vest = "fow_v_ija_mg_ARM";
        backpack = "fow_b_ija_ammobox_metal";
    };

    class ENGA : ENG {
        uniform = "fow_u_ija_type98_snlf";
        headGear = "fow_h_ija_type90_snlf";
    };

    class SN : Rifleman {
        uniform = "fow_u_ija_type98_foliage";
        headGear = "fow_h_ija_type90_foliage";
        backpack = "fow_b_ija_backpack_foliage";
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
        headGear = "fow_h_ija_flight_helmet";
        uniform = "fow_u_ija_pilot";
        vest = "fow_v_heer_tankcrew_p38_ARM";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };

};
