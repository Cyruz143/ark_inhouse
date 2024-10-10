class VN_NV_NVA_L_U {
    class Rifleman {
        headGear = "vn_o_helmet_nva_01";
        goggles = "";
        uniform = "vn_o_uniform_nva_army_11_03";
        vest = "vn_o_vest_02_ARM";
        backpack = "vn_o_pack_01";
        insignia = "";
    };

    class Leader : Rifleman {
        headGear = "vn_o_helmet_nva_02";
        uniform = "vn_o_uniform_nva_army_01_03";
        vest = "vn_o_vest_01_ARM";
        backpack = "vn_o_pack_02";
    };

    class Officer : Leader {
        headGear = "vn_o_cap_01";
        uniform = "vn_o_uniform_nva_army_02_03";
        vest = "vn_o_vest_07_ARM";
    };

    class Crew : Rifleman {
        headGear = "vn_o_helmet_tsh3_02";
        goggles = "vn_o_acc_goggles_01";
        uniform = "vn_o_uniform_nva_army_05_03";
        vest = "vn_o_vest_05_ARM";
        backpack = "ark_backpack_small";
    };

    class CO : Officer {
    };

    class XO : CO {
        backpack = "vn_o_pack_t884_01";
    };

    class SL : Officer {
        backpack = "vn_o_pack_04";
    };

    class Medic : Rifleman {
        headGear = "vn_o_helmet_nva_07";
        goggles = "vn_g_spectacles_01";
        uniform = "vn_o_uniform_nva_army_06_03";
        vest = "vn_o_vest_06_ARM";
        backpack = "ark_backpack_large";
        insignia = "";
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        headGear = "vn_o_helmet_nva_03";
        uniform = "vn_o_uniform_nva_army_12_03";
        vest = "vn_o_vest_03_ARM";
    };

    class AAR : Rifleman {
    };

    class RAT : Rifleman {
        headGear = "vn_o_helmet_nva_05";
        backpack = "vn_o_pack_07";
    };

    class MMGG : AR {
    };

    class MMGAG : AAR {
    };

    class ENG : Rifleman {
        headGear = "vn_o_helmet_nva_04";
        vest = "vn_o_vest_08_ARM";
        backpack = "vn_o_pack_05";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "vn_o_boonie_nva_02_01";
        goggles = "vn_o_poncho_01_01";
        vest = "vn_o_vest_01_ARM";
        backpack = "vn_o_pack_06";
    };

    class SP : SN {
    };

    class VC : Crew {
        headGear = "vn_o_helmet_tsh3_01";
        goggles = "";
    };

    class VG : Crew {
    };

    class VD : Crew {
    };

    class P : Crew {
        headGear = "vn_o_helmet_zsh3_01";
        goggles = "";
        uniform = "vn_o_uniform_nva_air_01";
        backpack = "ark_backpack_small";
    };

    class PCM : P {
        headGear = "vn_o_helmet_zsh3_02";
    };

};
