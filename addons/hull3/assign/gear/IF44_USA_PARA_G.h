class IF44_USA_PARA_G {
    class Rifleman {
        primaryWeapon = "LIB_M1_Garand";
        secondaryWeapon = "";
        secondaryWeaponItems[] = {};
        handgunWeapon = "";
        handgunItems[] = {};
        uniformWeapons[] = {};
        vestWeapons[] = {};
        backpackWeapons[] = {};
        uniformMagazines[] = {{"SmokeShell", 1}};
        vestMagazines[] = {{"LIB_8Rnd_762x63", 8}};
        backpackMagazines[] = {
            {"LIB_US_Mk_2", 2},
            {"SmokeShell", 1},
            {"LIB_8Rnd_762x63", 6}
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
        primaryWeapon = "LIB_M1A1_Thompson";
        handgunWeapon = "LIB_Colt_M1911";
        vestMagazines[] = {
            {"LIB_30Rnd_45ACP", 8},
            {"LIB_7Rnd_45ACP", 3}
        };
        backpackMagazines[] = {
            {"LIB_US_Mk_2", 2},
            {"SmokeShell", 1},
            {"LIB_30Rnd_45ACP", 6}
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
        handgunWeapon = "LIB_Colt_M1911";
        uniformMagazines[] = {{"SmokeShell", 1}};
        uniformRadios[] = {"ACRE_PRC343"};
        vestMagazines[] = {{"LIB_7Rnd_45ACP", 4}};
        backpackMagazines[] = {};
        assignItems[] = {};
    };

    class CO : Officer {
    };

    class XO : Officer {
        backpackRadios[] = {"ACRE_PRC152"};
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        primaryWeapon = "LIB_M1A1_Carbine";
        vestMagazines[] = {
            {"LIB_15Rnd_762x33", 8},
            {"SmokeShell", 4}
        };
        backpackMagazines[] = {
            {"SmokeShellBlue", 4},
            {"LIB_15Rnd_762x33", 2}
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
        primaryWeapon = "LIB_M3_GreaseGun";
        uniformRadios[] = {};
        vestMagazines[] = {
            {"LIB_30Rnd_M3_GreaseGun_45ACP", 8},
            {"LIB_7Rnd_45ACP", 3}
        };
        backpackMagazines[] = {
            {"LIB_US_Mk_2", 2},
            {"SmokeShell", 1},
            {"LIB_30Rnd_M3_GreaseGun_45ACP", 6}
        };
    };

    class AR : Rifleman {
        primaryWeapon = "LIB_M1918A2_BAR";
        primaryWeaponItems[] = {"LIB_M1918A2_BAR_Bipod"};
        handgunWeapon = "LIB_Colt_M1911";
        vestMagazines[] = {
            {"LIB_20Rnd_762x63", 4},
            {"LIB_7Rnd_45ACP", 4}
        };
        backpackMagazines[] = {
            {"LIB_US_Mk_2", 2},
            {"SmokeShell", 1},
            {"LIB_20Rnd_762x63", 4}
        };
    };

    class AAR : Rifleman {
        primaryWeapon = "LIB_M1_Garand";
        primaryWeaponItems[] = {"LIB_ACC_GL_M7"};
        backpackMagazines[] = {
            {"LIB_US_Mk_2", 2},
            {"SmokeShell", 1},
            {"LIB_1Rnd_G_Mk2", 2},
            {"LIB_1Rnd_G_M9A1", 2},
            {"LIB_20Rnd_762x63", 6}
        };
        binocular = "Binocular";
    };

    class RAT : Rifleman {
        primaryWeapon = "LIB_M1A1_Carbine";
        vestMagazines[] = {{"LIB_15Rnd_762x33", 6}};
        backpackMagazines[] = {
            {"LIB_US_Mk_2", 2},
            {"SmokeShell", 1},
            {"LIB_15Rnd_762x33", 6},
            {"LIB_No82", 2}
        };
    };

    class MMGG : AR {
        primaryWeapon = "LIB_M1919A6";
        vestMagazines[] = {{"LIB_50Rnd_762x63", 4}};
        backpackMagazines[] = {{"LIB_50Rnd_762x63", 4}};
    };

    class MMGAG : AAR {
        primaryWeapon = "LIB_M1A1_Carbine";
        vestMagazines[] = {{"LIB_15Rnd_762x33", 6}};
        uniformRadios[] = {"ACRE_PRC343"};
        backpackMagazines[] = {{"LIB_50Rnd_762x63", 4}};
    };

    class HMGG : Rifleman {
        primaryWeapon = "LIB_M1919A6";
        vestMagazines[] = {{"LIB_50Rnd_762x63", 4}};
        backpackMagazines[] = {{"LIB_100Rnd_762x63", 3}};
    };

    class HMGAG : MMGAG {
        primaryWeapon = "LIB_M1A1_Thompson";
        secondaryWeapon = "LIB_M2_Tripod";
        vestMagazines[] = {{"LIB_30Rnd_45ACP", 8}};
        backpackMagazines[] = {{"LIB_100Rnd_762x63", 4}};
        uniformRadios[] = {"ACRE_PRC343"};
        binocular = "binocular";
        assignItems[] = {};
    };

    class HMGAC : HMGAG {
        primaryWeapon = "LIB_M1_Garand";
        secondaryWeapon = "";
        vestMagazines[] = {{"LIB_8Rnd_762x63", 6}};
        uniformRadios[] = {};
    };

    class MATG : RAT {
        secondaryWeapon = "LIB_M1A1_Bazooka";
        secondaryWeaponItems[] = {"LIB_1Rnd_60mm_M6"};
        backpackMagazines[] = {{"LIB_1Rnd_60mm_M6", 3}};
    };

    class MATAG : Rifleman {
        primaryWeapon = "LIB_M1A1_Thompson";
        vestMagazines[] = {{"LIB_30Rnd_45ACP", 8}};
        backpackMagazines[] = {
            {"LIB_US_Mk_2", 1},
            {"LIB_30Rnd_45ACP", 2},
            {"LIB_1Rnd_60mm_M6", 3}
        };
        uniformMagazines[] = {{"SmokeShell", 1}};
        binocular = "binocular";
        assignItems[] = {};
        uniformRadios[] = {"ACRE_PRC343"};
    };

    class MATAC : MATAG {
        primaryWeapon = "LIB_M1_Garand";
        vestMagazines[] = {{"LIB_8Rnd_762x63", 8}};
        uniformRadios[] = {};
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
        primaryWeapon = "LIB_M1A1_Carbine";
        secondaryWeapon = "LIB_M2_60_Barrel";
        vestMagazines[] = {{"LIB_15Rnd_762x33", 6}};
        backpackMagazines[] = {
            {"LIB_1Rnd_60mm_Mo_HE", 2},
            {"LIB_1Rnd_60mm_Mo_Smoke", 1},
            {"LIB_1Rnd_60mm_Mo_Illum", 1}
        };
    };

    class MTRAG : Rifleman {
        primaryWeapon = "LIB_M3_GreaseGun";
        vestMagazines[] = {{"LIB_30Rnd_M3_GreaseGun_45ACP", 6}};
        secondaryWeapon = "LIB_M2_60_Tripod";
        backpackMagazines[] = {
            {"LIB_1Rnd_60mm_Mo_HE", 2},
            {"LIB_1Rnd_60mm_Mo_Smoke", 1},
            {"LIB_1Rnd_60mm_Mo_Illum", 1}
        };
        uniformRadios[] = {"ACRE_PRC343"};
    };

    class MTRAC : MTRAG {
        primaryWeapon = "LIB_M1A1_Carbine";
        secondaryWeapon = "";
        vestMagazines[] = {{"LIB_15Rnd_762x33", 6}};
        uniformRadios[] = {};
    };

    class ENG : Rifleman {
        primaryWeapon = "LIB_M1A1_Thompson";
        vestMagazines[] = {{"LIB_30Rnd_45ACP", 8}};
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
        primaryWeapon = "LIB_M1A1_Carbine";
        vestMagazines[] = {{"LIB_15Rnd_762x33", 8}};
        uniformRadios[] = {};
    };

    class SN : Rifleman {
        primaryWeapon = "LIB_M1903A4_Springfield";
        vestMagazines[] = {{"LIB_5Rnd_762x63", 6}};
        uniformRadios[] = {"ACRE_PRC343"};
    };

    class SP : Rifleman {
        binocular = "Binocular";
    };

    class VC : Crew {
        binocular = "binocular";
        primaryWeapon = "LIB_M1A1_Thompson";
        vestMagazines[] = {
            {"LIB_30Rnd_45ACP", 4},
            {"LIB_7Rnd_45ACP", 3}
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
            {"LIB_M1_Garand", 1},
            {"LIB_M1A1_Thompson", 1}
        };
        magazines[] = {
            {"LIB_15Rnd_762x33", 50},
            {"LIB_8Rnd_762x63", 50},
            {"LIB_30Rnd_45ACP", 50},
            {"LIB_30Rnd_M3_GreaseGun_45ACP", 50},
            {"LIB_20Rnd_762x63", 25},
            {"LIB_50Rnd_762x63", 50},
            {"LIB_100Rnd_762x63", 50},
            {"LIB_1Rnd_G_Mk2", 25},
            {"LIB_1Rnd_G_M9A1", 25},
            {"LIB_1Rnd_60mm_M6", 15},
            {"SatchelCharge_Remote_Mag", 5},
            {"ACE_HandFlare_White", 10},
            {"LIB_US_Mk_2", 10},
            {"LIB_No82", 25},
            {"SmokeShell", 10},
            {"LIB_1Rnd_60mm_Mo_HE", 15},
            {"LIB_1Rnd_60mm_Mo_Smoke", 15},
            {"LIB_1Rnd_60mm_Mo_Illum", 15}
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
