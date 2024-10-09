class VN_US_CIDG_U {
    class Rifleman {
        headGear = "vn_b_helmet_m1_01_01";
        goggles = "";
        uniform = "vn_b_uniform_macv_02_08";
        vest = "vn_b_vest_usarmy_02_ARM";
        backpack = "vn_b_pack_01_02";
        insignia = "";
    };

    class Leader : Rifleman {
        headGear = "vn_b_boonie_02_07";
        goggles = "vn_b_scarf_01_01";
        uniform = "vn_b_uniform_macv_01_08";
        vest = "vn_b_vest_usarmy_05_ARM";
    };

    class Officer : Leader {
        headGear = "vn_b_boonie_01_07";
        goggles = "vn_b_scarf_01_01";
        uniform = "vn_b_uniform_macv_06_08";
        vest = "vn_b_vest_usarmy_09_ARM";
    };

    class Crew : Rifleman {
        headGear = "vn_b_helmet_t56_01_01";
        goggles = "vn_b_acc_goggles_01";
        uniform = "vn_b_uniform_macv_03_08";
        vest = "vn_b_vest_usarmy_10_ARM";
        backpack = "ark_backpack_small";
    };

    class CO : Officer {
    };

    class XO : CO {
        backpack = "vn_b_pack_prc77_01";
    };

    class SL : Officer {
        backpack = "vn_b_pack_lw_06";
    };

    class Medic : Rifleman {
        headGear = "vn_b_boonie_04_07";
        goggles = "vn_g_spectacles_02";
        uniform = "vn_b_uniform_macv_04_08";
        vest = "vn_b_vest_usarmy_07_ARM";
        backpack = "vn_b_pack_m5_01";
        insignia = "";
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        uniform = "vn_b_uniform_macv_03_08";
        backpack = "vn_b_pack_02_02";
    };

    class AAR : Rifleman {
        vest = "vn_b_vest_usarmy_03_ARM";
        backpack = "vn_b_pack_02_02";
    };

    class RAT : Rifleman {
    };

    class MMGG : AR {
        vest = "vn_b_vest_usarmy_06_ARM";
    };

    class MMGAG : AAR {
    };

    class ENG : Rifleman {
        headGear = "vn_b_boonie_05_07";
        uniform = "vn_b_uniform_macv_04_08";
        backpack = "vn_b_pack_05_02";
    };

    class ENGA : ENG {
        headGear = "vn_b_bandana_07";
        uniform = "vn_b_uniform_macv_04_08";
    };

    class SN : Rifleman {
        headGear = "vn_b_bandana_07";
        uniform = "vn_b_uniform_macv_03_08";
        vest = "vn_b_vest_usarmy_08_ARM";
        backpack = "ark_backpack_small";
    };

    class SP : SN {
        vest = "vn_b_vest_usarmy_04_ARM";
    };

    class VC : Crew {
        headGear = "vn_b_helmet_t56_02_01";
        goggles = "";
    };

    class VG : Crew {
    };

    class VD : Crew {
    };

    class P : Crew {
        headGear = "vn_b_helmet_svh4_01_04";
        goggles = "";
        uniform = "vn_b_uniform_k2b_02_03";
        vest = "vn_b_vest_aircrew_06_ARM";
        backpack = "ark_backpack_small";
    };

    class PCM : P {
        headGear = "vn_b_helmet_svh4_02_04";
    };

};
