class IF44_USSR_G {
    class Rifleman {
        primaryWeapon = "LIB_M9130";
        secondaryWeapon = "";
        secondaryWeaponItems[] = {};
        handgunWeapon = "";
        handgunItems[] = {};
        uniformWeapons[] = {};
        vestWeapons[] = {};
        backpackWeapons[] = {};
        uniformMagazines[] = {{"SmokeShell", 1}};
        vestMagazines[] = {{"LIB_5Rnd_762x54", 8}};
        backpackMagazines[] = {
            {"LIB_rg42", 2},
            {"SmokeShell", 1},
            {"LIB_5Rnd_762x54", 6}
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
        primaryWeapon = "LIB_PPSh41_m";
        handgunWeapon = "LIB_TT33";
        vestMagazines[] = {
            {"LIB_71Rnd_762x25", 8},
            {"LIB_8Rnd_762x25", 3}
        };
        backpackMagazines[] = {
            {"LIB_rg42", 2},
            {"SmokeShell", 1},
            {"LIB_71Rnd_762x25", 6}
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
        handgunWeapon = "LIB_TT33";
        uniformMagazines[] = {{"SmokeShell", 1}};
        uniformRadios[] = {"ACRE_PRC343"};
        vestMagazines[] = {{"LIB_8Rnd_762x25", 4}};
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
        primaryWeapon = "LIB_SVT_40";
        vestMagazines[] = {
            {"LIB_10Rnd_762x54", 8},
            {"SmokeShell", 4}
        };
        backpackMagazines[] = {
            {"SmokeShellBlue", 4},
            {"LIB_10Rnd_762x54", 2}
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
        primaryWeapon = "LIB_PPSh41_m";
        uniformRadios[] = {};
        vestMagazines[] = {
            {"LIB_71Rnd_762x25", 8},
            {"LIB_8Rnd_762x25", 3}
        };
        backpackMagazines[] = {
            {"LIB_rg42", 2},
            {"SmokeShell", 1},
            {"LIB_71Rnd_762x25", 6}
        };
    };

    class AR : Rifleman {
        primaryWeapon = "LIB_DP28";
        handgunWeapon = "LIB_M1895";
        vestMagazines[] = {
            {"LIB_47Rnd_762x54", 4},
            {"LIB_7Rnd_762x38", 4}
        };
        backpackMagazines[] = {
            {"LIB_rg42", 2},
            {"SmokeShell", 1},
            {"LIB_47Rnd_762x54", 4}
        };
    };

    class AAR : Rifleman {
        primaryWeapon = "LIB_M9130";
        primaryWeaponItems[] = {"LIB_ACC_GL_DYAKONOV_Empty"};
        vestMagazines[] = {
            {"LIB_5Rnd_762x54", 8},
            {"LIB_1Rnd_G_DYAKONOV", 2}
        };
        backpackMagazines[] = {
            {"LIB_rg42", 2},
            {"SmokeShell", 1},
            {"LIB_47Rnd_762x54", 6}
        };
        binocular = "Binocular";
    };

    class RAT : Rifleman {
        backpackMagazines[] = {
            {"LIB_rg42", 2},
            {"SmokeShell", 1},
            {"LIB_5Rnd_762x54", 6},
            {"LIB_rpg6", 2}
        };
    };

    class MMGG : AR {
    };

    class MMGAG : AAR {
        uniformRadios[] = {"ACRE_PRC343"};
    };

    class HMGG : Rifleman {
        backpack = "LIB_Maxim_Bar";
        primaryWeapon = "LIB_PPSh41_m";
        vestMagazines[] = {{"LIB_35Rnd_762x25", 8}};
    };

    class HMGAG : MMGAG {
        backpack = "LIB_Maxim_Bag";
        primaryWeapon = "LIB_PPSh41_m";
        vestMagazines[] = {{"LIB_71Rnd_762x25", 8}};
    };

    class HMGAC : HMGG {
        backpack = "LIB_Maxim_Bar";
        primaryWeapon = "LIB_PPSh41_m";
        vestMagazines[] = {{"LIB_71Rnd_762x25", 8}};
    };

    class MATG : RAT {
    };

    class MATAG : Rifleman {
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
        secondaryWeapon = "LIB_BM37_Barrel";
        backpackMagazines[] = {
            {"LIB_1Rnd_82mm_Mo_HE", 2},
            {"LIB_1Rnd_82mm_Mo_Smoke", 1},
            {"LIB_1Rnd_82mm_Mo_Illum", 1}
        };
    };

    class MTRAG : Rifleman {
        secondaryWeapon = "LIB_BM37_Tripod";
        backpackMagazines[] = {
            {"LIB_1Rnd_82mm_Mo_HE", 2},
            {"LIB_1Rnd_82mm_Mo_Smoke", 1},
            {"LIB_1Rnd_82mm_Mo_Illum", 1}
        };
        uniformRadios[] = {"ACRE_PRC343"};
    };

    class MTRAC : MTRAG {
        secondaryWeapon = "";
        uniformRadios[] = {};
    };

    class ENG : Rifleman {
        primaryWeapon = "LIB_PPSh41_m";
        vestMagazines[] = {{"LIB_71Rnd_762x25", 8}};
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
        primaryWeapon = "LIB_M9130";
        vestMagazines[] = {{"LIB_5Rnd_762x54", 8}};
        uniformRadios[] = {};
    };

    class SN : Rifleman {
        primaryWeapon = "LIB_M9130PU";
        handgunWeapon = "LIB_M1895";
        vestMagazines[] = {
            {"LIB_5Rnd_762x54", 8},
            {"LIB_7Rnd_762x38", 4}
        };
        uniformRadios[] = {"ACRE_PRC343"};
    };

    class SP : Rifleman {
        binocular = "Binocular";
    };

    class VC : Crew {
        binocular = "binocular";
        primaryWeapon = "LIB_PPSh41_m";
        vestMagazines[] = {
            {"LIB_71Rnd_762x25", 4},
            {"LIB_8Rnd_762x25", 3}
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
            {"LIB_M9130", 1},
            {"LIB_PPSh41_m", 1}
        };
        magazines[] = {
            {"LIB_10Rnd_762x54", 50},
            {"LIB_35Rnd_762x25", 50},
            {"LIB_5Rnd_762x54", 100},
            {"LIB_71Rnd_762x25", 50},
            {"LIB_47Rnd_762x54", 100},
            {"SatchelCharge_Remote_Mag", 5},
            {"ACE_HandFlare_White", 10},
            {"LIB_rg42", 10},
            {"SmokeShell", 10},
            {"LIB_rpg6", 25},
            {"LIB_1Rnd_G_DYAKONOV", 25},
            {"LIB_1Rnd_82mm_Mo_HE", 15},
            {"LIB_1Rnd_82mm_Mo_Smoke", 15},
            {"LIB_1Rnd_82mm_Mo_Illum", 15}
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
