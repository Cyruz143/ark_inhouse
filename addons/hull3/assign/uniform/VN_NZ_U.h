class VN_NZ_U {
    class Rifleman {
        headGear = "vn_b_boonie_08_01";
        goggles = "";
        uniform = "vn_b_uniform_nz_01_01";
        vest = "vn_b_vest_anzac_01_ARM";
        backpack = "vn_b_pack_p08_01";
        insignia = "";
    };

    class Leader : Rifleman {
        goggles = "vn_b_acc_rag_01";
        uniform = "vn_b_uniform_nz_03_01";
        vest = "vn_b_vest_anzac_04_ARM";
    };

    class Officer : Leader {
        headGear = "vn_b_boonie_08_02";
        goggles = "vn_b_acc_rag_02";
        uniform = "vn_b_uniform_nz_04_01";
        vest = "vn_b_vest_anzac_07_ARM";
    };

    class Crew : Rifleman {
        headGear = "vn_b_beret_01_07";
        uniform = "vn_b_uniform_aus_10_01";
        vest = "vn_b_vest_anzac_09_ARM";
        backpack = "ark_backpack_small";
    };

    class CO : Officer {
    };

    class XO : CO {
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        headGear = "vn_b_boonie_07_01";
        uniform = "vn_b_uniform_nz_04_01";
        vest = "vn_b_vest_anzac_06_ARM";
        backpack = "vn_b_pack_pfield_02";
        insignia = "";
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        uniform = "vn_b_uniform_nz_02_01";
    };

    class AAR : Rifleman {
        backpack = "vn_b_pack_p08_02";
        vest = "vn_b_vest_anzac_02_ARM";
    };

    class RAT : Rifleman {
    };

    class MMGG : AR {
        backpack = "vn_b_pack_p08_02";
    };

    class MMGAG : AAR {
    };

    class ENG : Rifleman {
        uniform = "vn_b_uniform_nz_04_01";
        backpack = "vn_b_pack_p08_02";
    };

    class ENGA : ENG {
        uniform = "vn_b_uniform_nz_03_01";
    };

    class SN : Rifleman {
        uniform = "vn_b_uniform_nz_02_01";
        vest = "vn_b_vest_anzac_03_ARM";
        backpack = "ark_backpack_small";
    };

    class SP : SN {
    };

    class VC : Crew {
        headGear = "vn_b_beret_04_01";
        uniform = "vn_b_uniform_aus_01_01";
    };

    class VG : Crew {
    };

    class VD : Crew {
    };

    class P : Crew {
        headGear = "vn_b_helmet_svh4_01_04";
        uniform = "vn_b_uniform_k2b_03_01";
        vest = "vn_b_vest_anzac_08_ARM";
        backpack = "ark_backpack_small";
    };

    class PCM : P {
        headGear = "vn_b_helmet_svh4_02_04";
    };

};
