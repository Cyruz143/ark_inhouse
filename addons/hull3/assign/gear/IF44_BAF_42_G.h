class IF44_BAF_42_G {
    class Rifleman {
        primaryWeapon = "LIB_LeeEnfield_No4";
        secondaryWeapon = "";
        secondaryWeaponItems[] = {};
        handgunWeapon = "";
        handgunItems[] = {};
        uniformWeapons[] = {};
        vestWeapons[] = {};
        backpackWeapons[] = {};
        uniformMagazines[] = {{"SmokeShell", 1}};
        vestMagazines[] = {{"LIB_10Rnd_770x56", 8}};
        backpackMagazines[] = {
            {"LIB_MillsBomb", 2},
            {"SmokeShell", 1},
            {"LIB_10Rnd_770x56", 6}
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
        primaryWeapon = "LIB_Sten_Mk2";
        handgunWeapon = "LIB_Webley_mk6";
        vestMagazines[] = {
            {"LIB_32Rnd_9x19_Sten", 8},
            {"LIB_6Rnd_455", 3}
        };
        backpackMagazines[] = {
            {"LIB_MillsBomb", 2},
            {"SmokeShell", 1},
            {"LIB_32Rnd_9x19_Sten", 6}
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
        handgunWeapon = "LIB_Webley_mk6";
        uniformMagazines[] = {{"SmokeShell", 1}};
        uniformRadios[] = {"ACRE_PRC343"};
        vestMagazines[] = {{"LIB_6Rnd_455", 4}};
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
        primaryWeapon = "LIB_LeeEnfield_No4";
        vestMagazines[] = {
            {"LIB_10Rnd_770x56", 8},
            {"SmokeShell", 4}
        };
        backpackMagazines[] = {
            {"SmokeShellBlue", 4},
            {"LIB_10Rnd_770x56", 2}
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
        primaryWeapon = "LIB_Sten_Mk2";
        uniformRadios[] = {};
        vestMagazines[] = {
            {"LIB_32Rnd_9x19_Sten", 8},
            {"LIB_6Rnd_455", 3}
        };
        backpackMagazines[] = {
            {"LIB_MillsBomb", 2},
            {"SmokeShell", 1},
            {"LIB_32Rnd_9x19_Sten", 6}
        };
    };

    class AR : Rifleman {
        primaryWeapon = "LIB_Bren_Mk2";
        handgunWeapon = "LIB_Webley_mk6";
        vestMagazines[] = {
            {"LIB_30Rnd_770x56", 4},
            {"LIB_6Rnd_455", 4}
        };
        backpackMagazines[] = {
            {"LIB_MillsBomb", 2},
            {"SmokeShell", 1},
            {"LIB_30Rnd_770x56", 4}
        };
    };

    class AAR : Rifleman {
        primaryWeapon = "LIB_LeeEnfield_No4";
        primaryWeaponItems[] = {"LIB_ACC_GL_Enfield_CUP_Empty"};
        backpackMagazines[] = {
            {"LIB_MillsBomb", 2},
            {"SmokeShell", 1},
            {"LIB_1Rnd_G_MillsBomb", 2},
            {"LIB_30Rnd_770x56", 6}
        };
        binocular = "Binocular";
    };

    class RAT : Rifleman {
        backpackMagazines[] = {
            {"LIB_MillsBomb", 2},
            {"SmokeShell", 1},
            {"LIB_10Rnd_770x56", 6},
            {"LIB_No82", 2}
        };
    };

    class MMGG : AR {
    };

    class MMGAG : AAR {
        uniformRadios[] = {"ACRE_PRC343"};
    };

    class HMGG : Rifleman {
        primaryWeapon = "LIB_LeeEnfield_No4";
        vestMagazines[] = {{"LIB_10Rnd_770x56", 8}};
        backpack = "fow_b_uk_vickers_weapon";
        backpackMagazines[] = {};
        backpackMedicalItems[] = {};
    };

    class HMGAG : MMGAG {
        primaryWeapon = "LIB_Sten_Mk2";
        vestMagazines[] = {{"LIB_32Rnd_9x19_Sten", 8}};
        backpack = "fow_b_uk_vickers_support";
        backpackMagazines[] = {};
        uniformRadios[] = {"ACRE_PRC343"};
        binocular = "binocular";
        assignItems[] = {};
    };

    class HMGAC : HMGG {
        backpack = "fow_b_uk_vickers_weapon";
    };

    class MATG : RAT {
        secondaryWeapon = "LIB_PIAT";
        secondaryWeaponItems[] = {"LIB_1Rnd_89m_PIAT"};
        backpackMagazines[] = {{"LIB_1Rnd_89m_PIAT", 3}};
    };

    class MATAG : Rifleman {
        primaryWeapon = "LIB_Sten_Mk2";
        vestMagazines[] = {{"LIB_32Rnd_9x19_Sten", 8}};
        backpackMagazines[] = {
            {"LIB_MillsBomb", 1},
            {"LIB_32Rnd_9x19_Sten", 2},
            {"LIB_1Rnd_89m_PIAT", 3}
        };
        uniformMagazines[] = {{"SmokeShell", 1}};
        binocular = "binocular";
        assignItems[] = {};
        uniformRadios[] = {"ACRE_PRC343"};
    };

    class MATAC : MATAG {
        primaryWeapon = "LIB_LeeEnfield_No4";
        vestMagazines[] = {{"LIB_10Rnd_770x56", 8}};
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
    };

    class MTRAG : Rifleman {
    };

    class MTRAC : Rifleman {
    };

    class ENG : Rifleman {
        primaryWeapon = "LIB_Sten_Mk2";
        vestMagazines[] = {{"LIB_32Rnd_9x19_Sten", 8}};
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
        primaryWeapon = "LIB_LeeEnfield_No4";
        vestMagazines[] = {{"LIB_10Rnd_770x56", 8}};
        uniformRadios[] = {};
    };

    class SN : Rifleman {
        primaryWeapon = "LIB_LeeEnfield_No4_Scoped";
        uniformRadios[] = {"ACRE_PRC343"};
    };

    class SP : Rifleman {
        binocular = "Binocular";
    };

    class VC : Crew {
        binocular = "binocular";
        primaryWeapon = "LIB_Sten_Mk2";
        vestMagazines[] = {
            {"LIB_32Rnd_9x19_Sten", 4},
            {"LIB_6Rnd_455", 3}
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
            {"LIB_LeeEnfield_No4", 1},
            {"LIB_Sten_Mk2", 1}
        };
        magazines[] = {
            {"LIB_30Rnd_770x56", 50},
            {"LIB_10Rnd_770x56", 50},
            {"LIB_32Rnd_9x19_Sten", 50},
            {"LIB_1Rnd_G_MillsBomb", 25},
            {"LIB_1Rnd_89m_PIAT", 15},
            {"SatchelCharge_Remote_Mag", 5},
            {"ACE_HandFlare_White", 10},
            {"LIB_MillsBomb", 10},
            {"SmokeShell", 10},
            {"LIB_No82", 25}
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
