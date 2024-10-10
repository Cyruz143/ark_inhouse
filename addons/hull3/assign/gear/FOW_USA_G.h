class FOW_USA_G {
    class Rifleman {
        primaryWeapon = "fow_w_m1_garand";
        secondaryWeapon = "";
        secondaryWeaponItems[] = {};
        handgunWeapon = "";
        handgunItems[] = {};
        uniformWeapons[] = {};
        vestWeapons[] = {};
        backpackWeapons[] = {};
        uniformMagazines[] = {{"SmokeShell", 1}};
        vestMagazines[] = {{"fow_8Rnd_762x63", 8}};
        backpackMagazines[] = {
            {"fow_e_mk2", 2},
            {"SmokeShell", 1},
            {"fow_8Rnd_762x63", 6}
        };
        basicAssignItems[] = {"ItemMap", "ItemCompass", "ItemWatch"};
        assignItems[] = {};
        binocular = "";
        uniformItems[] = {
            {"ACE_Flashlight_KSF1", 1},
            {"ACE_wirecutter", 1},
            {"ACE_EntrenchingTool", 1}
        };
        vestItems[] = {};
        backpackItems[] = {};
        uniformRadios[] = {};
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
        primaryWeapon = "fow_w_m1_carbine";
        handgunWeapon = "fow_w_m1911";
        vestMagazines[] = {
            {"fow_15Rnd_762x33", 8},
            {"fow_7Rnd_45acp", 3}
        };
        backpackMagazines[] = {
            {"fow_e_mk2", 2},
            {"SmokeShell", 1},
            {"fow_15Rnd_762x33", 6}
        };
        assignItems[] = {};
        uniformRadios[] = {"ACRE_PRC343"};
        binocular = "Binocular";
    };

    class Officer : Leader {
        assignItems[] = {};
        binocular = "binocular";
        uniformRadios[] = {"ACRE_PRC343"};
    };

    class Crew : Rifleman {
        primaryWeapon = "";
        handgunWeapon = "fow_w_m1911";
        uniformMagazines[] = {{"SmokeShell", 1}};
        uniformRadios[] = {"ACRE_PRC343"};
        vestMagazines[] = {{"fow_7Rnd_45acp", 4}};
        backpackMagazines[] = {};
        assignItems[] = {};
    };

    class CO : Officer {
    };

    class XO : CO {
        primaryWeapon = "fow_w_m1a1_thompson";
        vestMagazines[] = {
            {"fow_30Rnd_45acp", 8},
            {"fow_7Rnd_45acp", 3}
        };
        backpackRadios[] = {"ACRE_PRC152"};
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        primaryWeapon = "fow_w_m3";
        vestMagazines[] = {
            {"fow_30Rnd_45acp", 8},
            {"SmokeShell", 4}
        };
        backpackMagazines[] = {
            {"SmokeShellBlue", 4},
            {"fow_30Rnd_45acp", 2}
        };
        assignItems[] = {};
        binocular = "Binocular";
        uniformRadios[] = {"ACRE_PRC343"};
        backpackMedicalItems[] = {
            {"ACE_fieldDressing", 30},
            {"ACE_morphine", 30},
            {"ACE_epinephrine", 30},
            {"ACE_bloodIV_500", 24},
            {"ACE_splint", 4}
        };
    };

    class FTL : Leader {
        primaryWeapon = "fow_w_m1a1_thompson";
        uniformRadios[] = {};
        vestMagazines[] = {
            {"fow_30Rnd_45acp", 8},
            {"fow_7Rnd_45acp", 3}
        };
        backpackMagazines[] = {
            {"fow_e_mk2", 2},
            {"SmokeShell", 1},
            {"fow_30Rnd_45acp", 6}
        };
    };

    class AR : Rifleman {
        primaryWeapon = "fow_w_m1918a2";
        handgunWeapon = "fow_w_m1911";
        primaryWeaponItems[] = {"fow_w_acc_m1918a2_handle", "fow_w_acc_m1918a2_bipod"};
        vestMagazines[] = {
            {"fow_20Rnd_762x63", 4},
            {"fow_7Rnd_45acp", 4}
        };
        backpackMagazines[] = {
            {"fow_e_mk2", 2},
            {"SmokeShell", 1},
            {"fow_20Rnd_762x63", 4}
        };
    };

    class AAR : Rifleman {
        backpackMagazines[] = {
            {"fow_e_mk2", 2},
            {"SmokeShell", 1},
            {"fow_20Rnd_762x63", 6},
            {"fow_1Rnd_m9a1", 2}
        };
        binocular = "Binocular";
    };

    class RAT : Rifleman {
        primaryWeapon = "fow_w_m1_carbine";
        vestMagazines[] = {{"fow_15Rnd_762x33", 8}};
        backpackMagazines[] = {
            {"fow_e_mk2", 2},
            {"SmokeShell", 1},
            {"fow_15Rnd_762x33", 6},
            {"fow_e_tnt_halfpound", 2}
        };
    };

    class MMGG : Rifleman {
        primaryWeapon = "fow_w_m1919a6";
        primaryWeaponItems[] = {};
        handgunWeapon = "fow_w_m1911";
        vestMagazines[] = {
            {"fow_100Rnd_762x63", 1},
            {"fow_7Rnd_45acp", 4}
        };
        backpackMagazines[] = {
            {"fow_e_mk2", 1},
            {"SmokeShell", 1},
            {"fow_100Rnd_762x63", 4}
        };
    };

    class MMGAG : Rifleman {
        primaryWeapon = "fow_w_m1_carbine";
        handgunWeapon = "fow_w_m1911";
        vestMagazines[] = {
            {"fow_15Rnd_762x33", 8},
            {"fow_7Rnd_45acp", 4}
        };
        backpackMagazines[] = {
            {"fow_e_mk2", 1},
            {"SmokeShell", 1},
            {"fow_15Rnd_762x33", 2},
            {"fow_100Rnd_762x63", 4}
        };
        uniformMagazines[] = {{"SmokeShell", 1}};
        binocular = "binocular";
        assignItems[] = {};
        uniformRadios[] = {"ACRE_PRC343"};
    };

    class HMGG : Rifleman {
        primaryWeapon = "fow_w_m1_carbine";
        vestMagazines[] = {{"fow_15Rnd_762x33", 8}};
        backpack = "CUP_B_M2_Gun_Bag";
        backpackMagazines[] = {};
        backpackMedicalItems[] = {};
    };

    class HMGAG : MMGAG {
        backpack = "CUP_B_M2_MiniTripod_Bag";
        backpackMagazines[] = {};
        uniformRadios[] = {"ACRE_PRC343"};
        binocular = "binocular";
        assignItems[] = {};
    };

    class HMGAC : Rifleman {
        backpack = "CUP_B_M2_Gun_Bag";
    };

    class MATG : RAT {
        primaryWeapon = "fow_w_m1_carbine";
        vestMagazines[] = {{"fow_15Rnd_762x33", 8}};
        secondaryWeapon = "fow_w_m1a1_bazooka";
        secondaryWeaponItems[] = {"fow_1Rnd_m6a1"};
        backpackMagazines[] = {{"fow_1Rnd_m6a1", 3}};
    };

    class MATAG : Rifleman {
        primaryWeapon = "fow_w_m3";
        vestMagazines[] = {{"fow_30Rnd_45acp", 8}};
        backpackMagazines[] = {
            {"fow_e_mk2", 1},
            {"fow_30Rnd_45acp", 2},
            {"fow_1Rnd_m6a1", 3}
        };
        uniformMagazines[] = {{"SmokeShell", 1}};
        binocular = "binocular";
        assignItems[] = {};
        uniformRadios[] = {"ACRE_PRC343"};
    };

    class MATAC : MATAG {
        primaryWeapon = "fow_w_m1_garand";
        vestMagazines[] = {{"fow_8Rnd_762x63", 8}};
        assignItems[] = {};
    };

    class HATG : Rifleman {
    };

    class HATAG : Rifleman {
    };

    class HATAC : Rifleman {
    };

    class DHATG : Rifleman {
    };

    class DHATAG : HMGG {
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

    class GMGAG : HMGG {
    };

    class GMGAC : Rifleman {
    };

    class MTRG : Rifleman {
        primaryWeapon = "fow_w_m1_carbine";
        vestMagazines[] = {{"fow_15Rnd_762x33", 8}};
        backpack = "fow_b_us_m2_mortar_weapon";
        backpackMagazines[] = {};
        backpackMedicalItems[] = {};
    };

    class MTRAG : MTRG {
        backpack = "fow_b_us_m2_mortar_support";
        primaryWeapon = "fow_w_m3";
        vestMagazines[] = {{"fow_30Rnd_45acp", 8}};
        uniformRadios[] = {"ACRE_PRC343"};
        uniformMagazines[] = {{"SmokeShell", 1}};
        binocular = "binocular";
        assignItems[] = {};
    };

    class MTRAC : Rifleman {
        primaryWeapon = "fow_w_m1_garand";
        vestMagazines[] = {{"fow_8Rnd_762x63", 8}};
        backpack = "fow_b_us_m2_mortar_weapon";
        backpackMagazines[] = {};
        backpackMedicalItems[] = {};
    };

    class ENG : Rifleman {
        primaryWeapon = "fow_w_m1_carbine";
        vestMagazines[] = {{"fow_15Rnd_762x33", 8}};
        backpackMagazines[] = {
            {"DemoCharge_Remote_Mag", 5}
        };
        assignItems[] = {};
        vestItems[] = {
            {"ACE_DefusalKit", 1},
            {"ACE_M26_Clacker", 1}
        };
        uniformRadios[] = {"ACRE_PRC343"};
    };

    class ENGA : ENG {
        uniformRadios[] = {};
    };

    class SN : Rifleman {
        primaryWeapon = "fow_w_m1903A1_sniper";
        handgunWeapon = "fow_w_m1911";
        uniformMagazines[] = {{"SmokeShell", 1}};
        vestMagazines[] = {
            {"fow_5Rnd_762x63", 8},
            {"fow_7Rnd_45acp", 3}
        };
        backpackMagazines[] = {
            {"fow_e_mk2", 1},
            {"SmokeShell", 1},
            {"fow_5Rnd_762x63", 6}
        };
        assignItems[] = {};
        uniformRadios[] = {"ACRE_PRC343"};
    };

    class SP : Rifleman {
        binocular = "Binocular";
    };

    class VC : Crew {
        binocular = "binocular";
        primaryWeapon = "fow_w_m3";
        vestMagazines[] = {
            {"fow_30Rnd_45acp", 4},
            {"fow_7Rnd_45acp", 3}
        };
    };

    class VG : Crew {
    };

    class VD : Crew {
    };

    class P : Crew {
        backpackMedicalItems[] = {};
    };

    class PCM : P {
    };

    class Vehicle {
        weapons[] = {
            {"fow_w_m1_carbine", 1},
            {"fow_w_m1a1_bazooka", 1},
            {"fow_w_m1_garand", 1}
        };
        magazines[] = {
            {"fow_15Rnd_762x33", 50},
            {"fow_8Rnd_762x63", 50},
            {"fow_30Rnd_45acp", 50},
            {"fow_100Rnd_762x63", 25},
            {"fow_20Rnd_762x63", 50},
            {"fow_1Rnd_m9a1", 25},
            {"fow_1Rnd_m6a1", 15},
            {"SatchelCharge_Remote_Mag", 5},
            {"ACE_HandFlare_White", 10},
            {"fow_e_mk2", 10},
            {"SmokeShell", 10},
            {"fow_e_tnt_halfpound", 25}
        };
        items[] = {{"ACE_M26_Clacker", 1}};
        radios[] = {
            {"ACRE_PRC343", 1},
            {"ACRE_PRC152", 1}
        };
        medicalItems[] = {{"ACE_fieldDressing", 100}};
    };

    class Car : Vehicle {
    };

    class Truck : Vehicle {
    };

    class Armored : Truck {
    };

};
