class VN_NV_NVA_E_G {
    class Rifleman {
        primaryWeapon = "vn_sks";
        primaryWeaponItems[] = {};
        secondaryWeapon = "";
        secondaryWeaponItems[] = {};
        handgunWeapon = "";
        handgunItems[] = {};
        uniformWeapons[] = {};
        vestWeapons[] = {};
        backpackWeapons[] = {};
        uniformMagazines[] = {
            {"vn_t67_grenade_mag", 1},
            {"ACE_HandFlare_Red", 2},
            {"vn_rdg2_mag", 1}
        };
        vestMagazines[] = {
            {"vn_sks_mag", 6},
            {"vn_sks_t_mag", 2}
        };
        backpackMagazines[] = {
            {"vn_t67_grenade_mag", 1},
            {"vn_rdg2_mag", 1},
            {"vn_sks_mag", 4},
            {"vn_sks_t_mag", 2}
        };
        basicAssignItems[] = {"vn_o_item_map", "vn_b_item_compass", "vn_b_item_watch"};
        assignItems[] = {};
        binocular = "";
        uniformItems[] = {
            {"ACE_Flashlight_KSF1", 1},
            {"ACE_wirecutter", 1},
            {"ACE_EntrenchingTool", 1},
            {"vn_b_sks", 1}
        };
        vestItems[] = {};
        backpackItems[] = {};
        uniformRadios[] = {"ACRE_PRC343"};
        vestRadios[] = {};
        backpackRadios[] = {};
        uniformMedicalItems[] = {
            {"ACE_fieldDressing", 10},
            {"ACE_tourniquet", 2}
        };
        vestMedicalItems[] = {};
        backpackMedicalItems[] = {};
        code = "";
        headGear = "";
        uniform = "";
        goggles = "";
        vest = "";
        backpack = "";
    };

    class Leader : Rifleman {
        primaryWeapon = "vn_sks_gl";
        handgunWeapon = "vn_tt33";
        vestMagazines[] = {
            {"vn_sks_mag", 6},
            {"vn_22mm_m60_frag_mag", 4},
            {"vn_sks_t_mag", 2},
            {"vn_tt33_mag", 3}
        };
        backpackMagazines[] = {
            {"vn_t67_grenade_mag", 1},
            {"vn_rdg2_mag", 1},
            {"vn_sks_mag", 4},
            {"vn_sks_t_mag", 2},
            {"vn_22mm_lume_mag", 2},
            {"vn_22mm_m22_smoke_mag", 2}
        };
        binocular = "Binocular";
    };

    class Officer : Leader {
        assignItems[] = {};
        binocular = "Binocular";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class Crew : Rifleman {
        primaryWeapon = "vn_k50m";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        vestMagazines[] = {{"vn_ppsh41_35_mag", 4}};
        backpackMagazines[] = {};
    };

    class CO : Officer {
    };

    class XO : CO {
        backpackRadios[] = {"ACRE_PRC152"};
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        primaryWeapon = "vn_pps52";
        vestMagazines[] = {
            {"vn_pps_mag", 6},
            {"vn_pps_t_mag", 2},
            {"vn_rdg2_mag", 4}
        };
        backpackMagazines[] = {
            {"vn_rdg2_mag", 4},
            {"vn_pps_mag", 2}
        };
        binocular = "Binocular";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        backpackMedicalItems[] = {
            {"ACE_fieldDressing", 30},
            {"ACE_morphine", 30},
            {"ACE_epinephrine", 30},
            {"ACE_bloodIV_500", 24},
            {"ACE_splint", 4}
        };
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        primaryWeapon = "vn_rpd";
        primaryWeaponItems[] = {};
        vestMagazines[] = {{"vn_rpd_100_mag", 4}};
        backpackMagazines[] = {{"vn_rpd_100_mag", 4}};
        uniformItems[] = {
            {"ACE_Flashlight_KSF1", 1},
            {"ACE_wirecutter", 1},
            {"ACE_EntrenchingTool", 1}
        };
    };

    class AAR : Rifleman {
        primaryWeapon = "vn_pps43";
        vestMagazines[] = {
            {"vn_pps_mag", 6},
            {"vn_pps_t_mag", 2}
        };
        backpackMagazines[] = {
            {"vn_t67_grenade_mag", 1},
            {"vn_rdg2_mag", 1},
            {"vn_rpd_100_mag", 4}
        };
        uniformItems[] = {
            {"ACE_Flashlight_KSF1", 1},
            {"ACE_wirecutter", 1},
            {"ACE_EntrenchingTool", 1},
            {"vn_b_m1_garand", 1}
        };
        binocular = "Binocular";
    };

    class RAT : Rifleman {
        primaryWeapon = "vn_k50m";
        secondaryWeapon = "vn_rpg2";
        secondaryWeaponItems[] = {"vn_rpg2_mag"};
        vestMagazines[] = {
            {"vn_ppsh41_35_mag", 6},
            {"vn_ppsh41_35_t_mag", 2},
            {"vn_rkg3_grenade_mag", 2}
        };
        backpackMagazines[] = {
            {"vn_t67_grenade_mag", 1},
            {"vn_rdg2_mag", 1},
            {"vn_ppsh41_35_mag", 4},
            {"vn_ppsh41_35_t_mag", 2},
            {"vn_rpg2_mag", 2}
        };
        uniformItems[] = {
            {"ACE_Flashlight_KSF1", 1},
            {"ACE_wirecutter", 1},
            {"ACE_EntrenchingTool", 1}
        };
    };

    class MMGG : Rifleman {
        primaryWeapon = "vn_rpd";
        vestMagazines[] = {{"vn_rpd_100_mag", 1}};
        backpackMagazines[] = {
            {"vn_t67_grenade_mag", 1},
            {"vn_rdg2_mag", 1},
            {"vn_rpd_100_mag", 4}
        };
        uniformItems[] = {
            {"ACE_Flashlight_KSF1", 1},
            {"ACE_wirecutter", 1},
            {"ACE_EntrenchingTool", 1}
        };
    };

    class MMGAG : Rifleman {
        backpackMagazines[] = {
            {"vn_t67_grenade_mag", 1},
            {"vn_rdg2_mag", 1},
            {"vn_sks_t_mag", 2},
            {"vn_rpd_100_mag", 4}
        };
        binocular = "Binocular";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class ENG : Rifleman {
        primaryWeapon = "vn_k50m";
        vestMagazines[] = {
            {"vn_ppsh41_35_mag", 6},
            {"vn_ppsh41_35_t_mag", 4}
        };
        backpackMagazines[] = {
            {"DemoCharge_Remote_Mag", 4},
            {"SatchelCharge_Remote_Mag", 2}
        };
        vestItems[] = {
            {"ACE_DefusalKit", 1},
            {"ACE_M26_Clacker", 1}
        };
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class ENGA : ENG {
        uniformRadios[] = {"ACRE_PRC343"};
    };

    class SN : Rifleman {
        primaryWeapon = "vn_vz54";
        handgunWeapon = "vn_tt33";
        primaryWeaponItems[] = {"vn_o_3x_vz54", "vn_b_camo_vz54"};
        vestMagazines[] = {
            {"vn_m38_mag", 4},
            {"vn_m38_t_mag", 2},
            {"vn_tt33_mag", 3}
        };
        backpackMagazines[] = {
            {"vn_t67_grenade_mag", 1},
            {"vn_rdg2_mag", 1},
            {"vn_m38_mag", 2},
            {"vn_m38_t_mag", 2}
        };
        uniformItems[] = {
            {"ACE_Flashlight_KSF1", 1},
            {"ACE_wirecutter", 1},
            {"ACE_EntrenchingTool", 1}
        };
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class SP : Rifleman {
        binocular = "Binocular";
    };

    class VC : Crew {
        binocular = "Binocular";
    };

    class VG : Crew {
    };

    class VD : Crew {
    };

    class P : Crew {
    };

    class PCM : P {
    };

    class Vehicle {
        weapons[] = {};
        magazines[] = {
            {"vn_sks_mag", 50},
            {"vn_sks_t_mag", 25},
            {"vn_rpd_100_mag", 50},
            {"vn_pps_mag", 50},
            {"vn_pps_t_mag", 25},
            {"vn_ppsh41_35_mag", 50},
            {"vn_ppsh41_35_t_mag", 25},
            {"vn_tt33_mag", 5},
            {"vn_22mm_m60_frag_mag", 10},
            {"vn_22mm_m60_heat_mag", 10},
            {"ACE_HandFlare_Red", 5},
            {"vn_t67_grenade_mag", 5},
            {"vn_rdg2_mag", 5},
            {"vn_rkg3_grenade_mag", 10},
            {"vn_22mm_lume_mag", 10},
            {"vn_22mm_m22_smoke_mag", 10}
        };
        medicalItems[] = {
            {"ACE_fieldDressing", 50},
            {"ACE_splint", 12}
        };
    };

    class Car : Vehicle {
    };

    class Truck : Vehicle {
    };

    class Armored : Truck {
    };

};
