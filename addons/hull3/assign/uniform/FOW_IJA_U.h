class FOW_IJA_U {
    class Rifleman {
        headGear = "fow_h_ija_type90";
        goggles = "";
        uniform = "fow_u_ija_type98";
        vest = "fow_v_ija_rifle_ARM";
        backpack = "fow_b_ija_backpack";
        insignia = "";
    };

    class Leader : Rifleman {
        vest = "fow_v_ija_nco_ARM";
    };

    class Officer : Leader {
        headGear = "fow_h_ija_fieldcap_officer";
        uniform = "fow_u_ija_type98_short";
    };

    class Crew : Rifleman {
        headGear = "fow_h_ija_tank_helmet";
        uniform = "fow_u_ija_type98_khakibrown";
        vest = "fow_v_heer_tankcrew_p38_ARM";
        backpack = "fow_b_ija_backpack";
    };

    class CO : Officer {
        uniform = "fow_u_ija_type98_short";
        vest = "fow_v_ija_officer_ARM";
    };

    class XO : CO {
        backpack = "fow_b_ija_backpack";
    };

    class SL : Officer {
        uniform = "fow_u_ija_type98_short";
    };

    class Medic : Rifleman {
        backpack = "fow_b_ija_backpack";
        uniform = "fow_u_ija_type98";
        vest = "fow_v_ija_medic_ARM";
        headGear = "fow_h_ija_type90_net_neck";
        insignia = "";
    };

    class FTL : Leader {
        uniform = "fow_u_ija_type98";
        headGear = "fow_h_ija_fieldcap";
    };

    class AR : Rifleman {
        vest = "fow_v_ija_mg_ARM";
        headGear = "fow_h_ija_type90_net";
        uniform = "fow_u_ija_type98";
        backpack = "fow_b_ija_backpack";
    };

    class AAR : Rifleman {
        vest = "fow_v_ija_grenadier_ARM";
        backpack = "fow_b_ija_ammobox_metal";
    };

    class RAT : Rifleman {
        vest = "fow_v_ija_grenadier_ARM";
        uniform = "fow_u_ija_type98";
    };

    class MMGG : AR {
    };

    class MMGAG : AAR {
        uniform = "fow_u_ija_type98";
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
        vest = "fow_v_ija_mortar_ARM";
        backpack = "fow_b_ija_type97_mortar_support";
    };

    class MTRAC : MTRG {
    };

    class ENG : Rifleman {
        uniform = "fow_u_ija_type98_short";
        headGear = "fow_h_ija_fieldcap_neck";
        vest = "fow_v_ija_mg_ARM";
        backpack = "fow_b_ija_ammobox_metal";
    };

    class ENGA : ENG {
        uniform = "fow_u_ija_type98";
        headGear = "fow_h_ija_type90_net_neck";
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
