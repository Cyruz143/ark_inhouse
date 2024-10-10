class VN_US_SEAL_G {
    class Rifleman {
        primaryWeapon = "vn_m63a";
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
            {"vn_m63a_30_mag", 6},
            {"vn_m63a_30_t_mag", 2}
        };
        backpackMagazines[] = {
            {"vn_m61_grenade_mag", 1},
            {"vn_m18_white_mag", 1},
            {"vn_m63a_30_mag", 4},
            {"vn_m63a_30_t_mag", 2}
        };
        basicAssignItems[] = {"vn_b_item_map", "vn_b_item_compass", "vn_b_item_watch"};
        assignItems[] = {};
        binocular = "";
        uniformItems[] = {
            {"ACE_Flashlight_MX991", 1},
            {"ACE_wirecutter", 1},
            {"ACE_EntrenchingTool", 1}
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
        handgunWeapon = "vn_mk22";
        vestMagazines[] = {
            {"vn_m63a_30_mag", 6},
            {"vn_m63a_30_t_mag", 2},
            {"vn_mk22_mag", 3}
        };
        backpackMagazines[] = {
            {"vn_m61_grenade_mag", 1},
            {"vn_m18_white_mag", 1},
            {"vn_m63a_30_mag", 4},
            {"vn_m63a_30_t_mag", 2}
        };
        binocular = "vn_mk21_binocs";
    };

    class Officer : Leader {
        assignItems[] = {};
        binocular = "vn_mk21_binocs";
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
        primaryWeapon = "vn_m45";
        vestMagazines[] = {
            {"vn_m45_mag", 6},
            {"vn_m45_t_mag", 2},
            {"vn_m18_white_mag", 4}
        };
        backpackMagazines[] = {
            {"vn_m18_white_mag", 4},
            {"vn_m45_mag", 2}
        };
        binocular = "vn_mk21_binocs";
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
        primaryWeapon = "vn_m63a_lmg";
        primaryWeaponItems[] = {};
        vestMagazines[] = {{"vn_m63a_100_mag", 4}};
        backpackMagazines[] = {
            {"vn_m63a_100_mag", 4},
            {"vn_m63a_100_t_mag", 4}
        };
        uniformItems[] = {
            {"ACE_Flashlight_MX991", 1},
            {"ACE_wirecutter", 1},
            {"ACE_EntrenchingTool", 1},
            {"vn_b_type56", 1}
        };
    };

    class AAR : Rifleman {
        primaryWeapon = "vn_type56";
        vestMagazines[] = {
            {"vn_type56_mag", 6},
            {"vn_type56_mag", 2}
        };
        backpackMagazines[] = {
            {"vn_m61_grenade_mag", 1},
            {"vn_m18_white_mag", 1},
            {"vn_m63a_100_mag", 4},
            {"vn_m63a_100_t_mag", 4}
        };
        uniformItems[] = {
            {"ACE_Flashlight_MX991", 1},
            {"ACE_wirecutter", 1},
            {"ACE_EntrenchingTool", 1},
            {"vn_b_type56", 1}
        };
        binocular = "vn_mk21_binocs";
    };

    class RAT : Rifleman {
        primaryWeapon = "vn_m79";
        handgunWeapon = "vn_m1911";
        secondaryWeapon = "vn_m72";
        secondaryWeaponItems[] = {"vn_m72_mag"};
        vestMagazines[] = {
            {"vn_40mm_m381_he_mag", 4},
            {"vn_40mm_m397_ab_mag", 2},
            {"vn_40mm_m433_hedp_mag", 2},
            {"vn_40mm_m583_flare_w_mag", 2},
            {"vn_40mm_m680_smoke_w_mag", 2},
            {"vn_40mm_m576_buck_mag", 2},
            {"vn_m1911_mag", 4}
        };
        backpackMagazines[] = {
            {"vn_m61_grenade_mag", 1},
            {"vn_m18_white_mag", 1},
            {"vn_40mm_m381_he_mag", 4},
            {"vn_40mm_m397_ab_mag", 2},
            {"vn_40mm_m433_hedp_mag", 2},
            {"vn_40mm_m583_flare_w_mag", 2},
            {"vn_40mm_m680_smoke_w_mag", 2},
            {"vn_40mm_m576_buck_mag", 2},
            {"vn_m1911_mag", 4}
        };
    };

    class MMGG : Rifleman {
        primaryWeapon = "vn_m63a_cdo";
        vestMagazines[] = {{"vn_m63a_150_t_mag", 1}};
        backpackMagazines[] = {
            {"vn_m61_grenade_mag", 1},
            {"vn_m18_white_mag", 1},
            {"vn_m63a_150_t_mag", 4}
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
            {"vn_m63a_30_t_mag", 2},
            {"vn_m63a_150_t_mag", 4}
        };
        binocular = "vn_mk21_binocs";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class ENG : Rifleman {
        primaryWeapon = "vn_m45";
        vestMagazines[] = {
            {"vn_m45_mag", 6},
            {"vn_m45_t_mag", 4}
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
        primaryWeapon = "vn_m40a1";
        handgunWeapon = "vn_mk22";
        primaryWeaponItems[] = {"vn_o_9x_m40a1", "vn_b_camo_m1_garand"};
        vestMagazines[] = {
            {"vn_m40a1_mag", 4},
            {"vn_m40a1_t_mag", 2},
            {"vn_mk22_mag", 3}
        };
        backpackMagazines[] = {
            {"vn_m61_grenade_mag", 1},
            {"vn_m18_white_mag", 1},
            {"vn_m40a1_mag", 2},
            {"vn_m40a1_t_mag", 2}
        };
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class SP : Rifleman {
        binocular = "vn_mk21_binocs";
    };

    class VC : Crew {
        handgunWeapon = "vn_m1911";
        vestMagazines[] = {
            {"vn_m3a1_mag", 4},
            {"vn_m1911_mag", 3}
        };
        binocular = "vn_mk21_binocs";
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
            {"vn_m63a_30_mag", 50},
            {"vn_m63a_30_t_mag", 25},
            {"vn_m63a_100_mag", 50},
            {"vn_m63a_100_t_mag", 25},
            {"vn_m63a_150_mag", 50},
            {"vn_m63a_150_t_mag", 25},
            {"vn_m3a1_mag", 15},
            {"vn_m3a1_t_mag", 10},
            {"vn_m45_mag", 50},
            {"vn_m45_t_mag", 25},
            {"vn_mk22_mag", 5},
            {"vn_m1911_mag", 15},
            {"vn_type56_mag", 50},
            {"vn_type56_t_mag", 25},
            {"vn_40mm_m381_he_mag", 10},
            {"vn_40mm_m397_ab_mag", 10},
            {"vn_40mm_m433_hedp_mag", 10},
            {"vn_40mm_m433_hedp_mag", 10},
            {"vn_40mm_m583_flare_w_mag", 10},
            {"vn_40mm_m680_smoke_w_mag", 10},
            {"vn_40mm_m576_buck_mag", 10},
            {"ACE_HandFlare_Red", 5},
            {"vn_m61_grenade_mag", 5},
            {"vn_m18_white_mag", 5},
            {"vn_m72_mag", 10}
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
