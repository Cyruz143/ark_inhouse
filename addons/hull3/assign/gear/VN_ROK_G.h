class VN_ROK_G {
    class Rifleman {
        primaryWeapon = "vn_m2carbine";
        primaryWeaponItems[] = {};
        secondaryWeapon = "";
        secondaryWeaponItems[] = {};
        handgunWeapon = "";
        handgunItems[] = {};
        uniformWeapons[] = {};
        vestWeapons[] = {};
        backpackWeapons[] = {};
        uniformMagazines[] = {
            {"vn_m61_grenade_mag", 1},
            {"ACE_HandFlare_Red", 2},
            {"vn_m18_white_mag", 1}
        };
        vestMagazines[] = {
            {"vn_carbine_30_mag", 6},
            {"vn_carbine_30_t_mag", 2}
        };
        backpackMagazines[] = {
            {"vn_m61_grenade_mag", 1},
            {"vn_m18_white_mag", 1},
            {"vn_carbine_30_mag", 4},
            {"vn_carbine_30_t_mag", 2}
        };
        basicAssignItems[] = {"vn_b_item_map", "vn_b_item_compass", "vn_b_item_watch"};
        assignItems[] = {};
        binocular = "";
        uniformItems[] = {
            {"ACE_Flashlight_MX991", 1},
            {"ACE_wirecutter", 1},
            {"ACE_EntrenchingTool", 1},
            {"vn_b_carbine", 1}
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
        primaryWeapon = "vn_m2carbine_gl";
        handgunWeapon = "vn_m1911";
        vestMagazines[] = {
            {"vn_carbine_30_mag", 6},
            {"vn_22mm_m1a2_frag_mag", 4},
            {"vn_carbine_30_t_mag", 2},
            {"vn_m1911_mag", 3}
        };
        backpackMagazines[] = {
            {"vn_m61_grenade_mag", 1},
            {"vn_m18_white_mag", 1},
            {"vn_carbine_30_mag", 4},
            {"vn_carbine_30_t_mag", 2},
            {"vn_22mm_lume_mag", 2},
            {"vn_22mm_m22_smoke_mag", 2}
        };
        binocular = "vn_m19_binocs_grey";
    };

    class Officer : Leader {
        assignItems[] = {};
        binocular = "vn_m19_binocs_grey";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class Crew : Rifleman {
        primaryWeapon = "vn_m3a1";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        vestMagazines[] = {{"vn_m3a1_mag", 4}};
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
        primaryWeapon = "vn_m3a1";
        vestMagazines[] = {
            {"vn_m3a1_mag", 6},
            {"vn_m3a1_t_mag", 2},
            {"vn_m18_white_mag", 4}
        };
        backpackMagazines[] = {
            {"vn_m18_white_mag", 4},
            {"vn_m3a1_mag", 2}
        };
        binocular = "vn_m19_binocs_grey";
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
        primaryWeapon = "vn_m1918";
        primaryWeaponItems[] = {"vn_bipod_m1918"};
        vestMagazines[] = {{"vn_m1918_mag", 4}};
        backpackMagazines[] = {
            {"vn_m1918_mag", 4},
            {"vn_m1918_t_mag", 4}
        };
        uniformItems[] = {
            {"ACE_Flashlight_MX991", 1},
            {"ACE_wirecutter", 1},
            {"ACE_EntrenchingTool", 1}
        };
    };

    class AAR : Rifleman {
        primaryWeapon = "vn_m1_garand";
        vestMagazines[] = {
            {"vn_m1_garand_mag", 6},
            {"vn_m1_garand_t_mag", 2}
        };
        backpackMagazines[] = {
            {"vn_m61_grenade_mag", 1},
            {"vn_m18_white_mag", 1},
            {"vn_m1918_mag", 4},
            {"vn_m1918_t_mag", 4}
        };
        uniformItems[] = {
            {"ACE_Flashlight_MX991", 1},
            {"ACE_wirecutter", 1},
            {"ACE_EntrenchingTool", 1},
            {"vn_b_m1_garand", 1}
        };
        binocular = "vn_m19_binocs_grey";
    };

    class RAT : Rifleman {
        primaryWeapon = "vn_m1_garand_gl";
        secondaryWeapon = "vn_m72";
        secondaryWeaponItems[] = {"vn_m72_mag"};
        vestMagazines[] = {
            {"vn_m1_garand_mag", 6},
            {"vn_m1_garand_t_mag", 2},
            {"vn_22mm_m9_heat_mag", 2}
        };
        backpackMagazines[] = {
            {"vn_m61_grenade_mag", 1},
            {"vn_m18_white_mag", 1},
            {"vn_m1_garand_mag", 4},
            {"vn_m1_garand_t_mag", 2}
        };
        uniformItems[] = {
            {"ACE_Flashlight_MX991", 1},
            {"ACE_wirecutter", 1},
            {"ACE_EntrenchingTool", 1},
            {"vn_b_m1_garand", 1}
        };
    };

    class MMGG : Rifleman {
        primaryWeapon = "vn_m60";
        vestMagazines[] = {{"vn_m60_100_mag", 1}};
        backpackMagazines[] = {
            {"vn_m61_grenade_mag", 1},
            {"vn_m18_white_mag", 1},
            {"vn_m60_100_mag", 4}
        };
        uniformItems[] = {
            {"ACE_Flashlight_MX991", 1},
            {"ACE_wirecutter", 1},
            {"ACE_EntrenchingTool", 1}
        };
    };

    class MMGAG : Rifleman {
        backpackMagazines[] = {
            {"vn_m61_grenade_mag", 1},
            {"vn_m18_white_mag", 1},
            {"vn_carbine_30_t_mag", 2},
            {"vn_m60_100_mag", 4}
        };
        binocular = "vn_m19_binocs_grey";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class ENG : Rifleman {
        primaryWeapon = "vn_m3a1";
        vestMagazines[] = {
            {"vn_m3a1_mag", 6},
            {"vn_m3a1_t_mag", 4}
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
        primaryWeapon = "vn_m1_garand";
        handgunWeapon = "vn_m1911";
        primaryWeaponItems[] = {"vn_o_3x_m84", "vn_b_camo_m1_garand"};
        vestMagazines[] = {
            {"vn_carbine_30_mag", 4},
            {"vn_carbine_30_t_mag", 2},
            {"vn_m1911_mag", 3}
        };
        backpackMagazines[] = {
            {"vn_m61_grenade_mag", 1},
            {"vn_m18_white_mag", 1},
            {"vn_carbine_30_mag", 2},
            {"vn_carbine_30_t_mag", 2}
        };
        uniformItems[] = {
            {"ACE_Flashlight_MX991", 1},
            {"ACE_wirecutter", 1},
            {"ACE_EntrenchingTool", 1},
            {"vn_b_m1_garand", 1}
        };
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class SP : Rifleman {
        binocular = "vn_m19_binocs_grey";
    };

    class VC : Crew {
        binocular = "vn_m19_binocs_grey";
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
        weapons[] = {{"vn_m72", 10}};
        magazines[] = {
            {"vn_carbine_30_mag", 50},
            {"vn_carbine_30_t_mag", 25},
            {"vn_m1918_mag", 50},
            {"vn_m1918_t_mag", 25},
            {"vn_m3a1_mag", 50},
            {"vn_m3a1_t_mag", 25},
            {"vn_m1_garand_mag", 50},
            {"vn_m1_garand_t_mag", 25},
            {"vn_m60_100_mag", 25},
            {"vn_m1911_mag", 5},
            {"vn_22mm_m9_heat_mag", 10},
            {"vn_22mm_m1a2_frag_mag", 10},
            {"ACE_HandFlare_Red", 5},
            {"vn_m61_grenade_mag", 5},
            {"vn_m18_white_mag", 5},
            {"vn_m72_mag", 10},
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
