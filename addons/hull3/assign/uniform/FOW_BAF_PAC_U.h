class FOW_BAF_PAC_U {
    class Rifleman {
        headGear = "fow_h_uk_mk2";
        goggles = "";
        uniform = "fow_u_uk_bd40_seac_01_private";
        vest = "fow_v_uk_base_green";
        backpack = "fow_b_uk_p37_blanco";
        insignia = "";
    };

    class Leader : Rifleman {
        vest = "fow_v_uk_sten_green_ARM";
    };

    class Officer : Leader {
        headGear = "fow_h_uk_mk2_net_camo";
        uniform = "fow_u_uk_bd40_seac_02_lieutenant";
    };

    class Crew : Rifleman {
        headGear = "fow_h_uk_beret_rtr";
        uniform = "fow_u_uk_bd40_seac_01_private";
        vest = "fow_v_uk_officer_green_ARM";
        backpack = "fow_b_uk_p37_blanco";
    };

    class CO : Officer {
        uniform = "fow_u_uk_bd40_seac_02_lieutenant";
        vest = "fow_v_uk_officer_green_ARM";
    };

    class XO : CO {
        backpack = "fow_b_uk_p37_radio_blanco";
    };

    class SL : Officer {
        uniform = "fow_u_uk_bd40_seac_02_sergeant";
    };

    class Medic : Rifleman {
        backpack = "fow_b_uk_bergenpack";
        uniform = "fow_u_uk_bd40_seac_02_corporal";
        headGear = "fow_h_uk_mk2_net";
        insignia = "";
    };

    class FTL : Leader {
        uniform = "fow_u_uk_bd40_seac_02_corporal";
    };

    class AR : Rifleman {
        vest = "fow_v_uk_bren_green_ARM";
        headGear = "fow_h_uk_mk2_net";
        uniform = "fow_u_uk_bd40_seac_01_lance_corporal";
        backpack = "fow_b_uk_bergenpack";
    };

    class AAR : Rifleman {
        backpack = "fow_b_uk_bergenpack";
    };

    class RAT : Rifleman {
        vest = "fow_v_uk_sten_green_ARM";
        uniform = "fow_u_uk_bd40_seac_02_private";
    };

    class MMGG : AR {
    };

    class MMGAG : AAR {
        uniform = "fow_u_uk_bd40_seac_02_corporal";
    };

    class HMGG : AR {
        backpack = "fow_b_uk_vickers_weapon";
    };

    class HMGAG : AAR {
        backpack = "fow_b_uk_vickers_support";
    };

    class HMGAC : HMGG {
    };

    class MATG : RAT {
        backpack = "fow_b_uk_piat";
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
        uniform = "fow_u_uk_bd40_seac_02_sergeant";
        vest = "fow_v_uk_bren_green_ARM";
        backpack = "fow_b_uk_p37_blanco_shovel";
    };

    class ENGA : ENG {
        uniform = "fow_u_uk_bd40_seac_01_private";
        headGear = "fow_h_uk_mk2_net_camo";
    };

    class SN : Rifleman {
    };

    class SP : SN {
    };

    class VC : Crew {
        headGear = "fow_h_uk_beret_rtr_headset";
        uniform = "fow_u_uk_bd40_seac_02_sergeant";
    };

    class VG : Crew {
    };

    class VD : Crew {
    };

    class P : Crew {
        headGear = "fow_h_us_flight_helmet";
        uniform = "fow_u_uk_bd40_seac_01_sergeant";
        vest = "fow_v_uk_officer_green_ARM";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };

};
