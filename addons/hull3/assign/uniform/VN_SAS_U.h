class VN_SAS_U {
    class Rifleman {
        primaryWeapon = "vn_l1a1_01_camo";
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
            {"vn_l1a1_30_02_mag", 6},
            {"vn_l1a1_30_02_t_mag", 2}
        };
        backpackMagazines[] = {
            {"vn_m61_grenade_mag", 1},
            {"vn_m18_white_mag", 1},
            {"vn_l1a1_30_02_mag", 4},
            {"vn_l1a1_30_02_t_mag", 2}
        };
        basicAssignItems[] = {"vn_b_item_map", "vn_b_item_compass", "vn_b_item_watch"};
        assignItems[] = {};
        binocular = "";
        uniformItems[] = {
            {"ACE_Flashlight_MX991", 1},
            {"ACE_wirecutter", 1},
            {"ACE_EntrenchingTool", 1},
            {"vn_b_l1a1", 1}
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
        primaryWeapon = "vn_l1a1_xm148_camo";
        handgunWeapon = "vn_hp";
        vestMagazines[] = {
            {"vn_l1a1_30_02_mag", 6},
            {"vn_40mm_m381_he_mag", 4},
            {"vn_l1a1_30_02_t_mag", 2},
            {"vn_hp_mag", 3}
        };
        backpackMagazines[] = {
            {"vn_m61_grenade_mag", 1},
            {"vn_m18_white_mag", 1},
            {"vn_l1a1_30_02_mag", 4},
            {"vn_40mm_m583_flare_w_mag", 2},
            {"vn_40mm_m680_smoke_w_mag", 2},
            {"vn_l1a1_30_02_t_mag", 2}
        };
        binocular = "vn_m19_binocs_grey";
    };

    class Officer : Leader {
        assignItems[] = {};
        binocular = "vn_m19_binocs_grey";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class Crew : Rifleman {
        primaryWeapon = "vn_f1_smg";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        vestMagazines[] = {{"vn_f1_smg_mag", 4}};
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
        primaryWeapon = "vn_l1a1_03_camo";
        vestMagazines[] = {
            {"vn_l1a1_30_02_mag", 6},
            {"vn_l1a1_30_02_t_mag", 2},
            {"vn_m18_white_mag", 4}
        };
        backpackMagazines[] = {
            {"vn_m18_white_mag", 4},
            {"vn_l1a1_30_02_mag", 2}
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
        primaryWeapon = "vn_m60";
        vestMagazines[] = {{"vn_m60_100_mag", 4}};
        backpackMagazines[] = {{"vn_m60_100_mag", 6}};
    };

    class AAR : Rifleman {
        primaryWeapon = "vn_l1a1_03_camo";
        backpackMagazines[] = {
            {"vn_m61_grenade_mag", 1},
            {"vn_m18_white_mag", 1},
            {"vn_m60_100_mag", 4}
        };
        binocular = "vn_m19_binocs_grey";
    };

    class RAT : Rifleman {
        primaryWeapon = "vn_l1a1_01_gl";
        secondaryWeapon = "vn_m72";
        secondaryWeaponItems[] = {"vn_m72_mag"};
        vestMagazines[] = {
            {"vn_l1a1_30_02_mag", 6},
            {"vn_l1a1_30_02_t_mag", 2}
        };
        backpackMagazines[] = {
            {"vn_m61_grenade_mag", 1},
            {"vn_m18_white_mag", 1},
            {"vn_l1a1_30_02_mag", 4},
            {"vn_l1a1_30_02_t_mag", 2}
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
    };

    class MMGAG : Rifleman {
        backpackMagazines[] = {
            {"vn_m61_grenade_mag", 1},
            {"vn_m18_white_mag", 1},
            {"vn_l1a1_30_02_t_mag", 2},
            {"vn_l1a1_30_02_t_mag", 4}
        };
        binocular = "vn_m19_binocs_grey";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class ENG : Rifleman {
        primaryWeapon = "vn_l1a1_03_camo";
        vestMagazines[] = {
            {"vn_l1a1_30_02_mag", 6},
            {"vn_f1_smg_t_mag", 4}
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
        primaryWeapon = "vn_l1a1_01_camo";
        handgunWeapon = "vn_hp";
        primaryWeaponItems[] = {"vn_o_3x_l1a1"};
        vestMagazines[] = {
            {"vn_l1a1_30_02_mag", 4},
            {"vn_l1a1_30_02_t_mag", 2},
            {"vn_hp_mag", 3}
        };
        backpackMagazines[] = {
            {"vn_m61_grenade_mag", 1},
            {"vn_m18_white_mag", 1},
            {"vn_l1a1_30_02_mag", 2},
            {"vn_l1a1_30_02_t_mag", 2}
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
            {"vn_l1a1_30_02_mag", 50},
            {"vn_l1a1_30_02_t_mag", 25},
            {"vn_m60_100_mag", 100},
            {"vn_f1_smg_mag", 25},
            {"vn_f1_smg_t_mag", 25},
            {"vn_hp_mag", 5},
            {"vn_40mm_m381_he_mag", 10},
            {"vn_40mm_m583_flare_w_mag", 10},
            {"vn_40mm_m680_smoke_w_mag", 10},
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
