class FOW_IJA_G {
    class Rifleman {
        primaryWeapon = "fow_w_type99";
        secondaryWeapon = "";
        secondaryWeaponItems[] = {};
        handgunWeapon = "";
        handgunItems[] = {};
        uniformWeapons[] = {};
        vestWeapons[] = {};
        backpackWeapons[] = {};
        uniformMagazines[] = {{"SmokeShell", 1}};
        vestMagazines[] = {{"fow_5Rnd_77x58", 8}};
        backpackMagazines[] = {
            {"fow_e_type99", 2},
            {"SmokeShell", 1},
            {"fow_5Rnd_77x58", 6}
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
        primaryWeapon = "fow_w_type100";
        handgunWeapon = "fow_w_type14";
        vestMagazines[] = {
            {"fow_32Rnd_8x22", 8},
            {"fow_8Rnd_8x22", 3}
        };
        backpackMagazines[] = {
            {"fow_e_type99", 2},
            {"SmokeShell", 1},
            {"fow_32Rnd_8x22", 6}
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
        handgunWeapon = "fow_w_type14";
        uniformMagazines[] = {{"SmokeShell", 1}};
        uniformRadios[] = {"ACRE_PRC343"};
        vestMagazines[] = {{"fow_8Rnd_8x22", 4}};
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
        primaryWeapon = "fow_w_type99";
        vestMagazines[] = {
            {"fow_5Rnd_77x58", 8},
            {"SmokeShell", 4}
        };
        backpackMagazines[] = {
            {"SmokeShellBlue", 4},
            {"fow_5Rnd_77x58", 2}
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
        primaryWeapon = "fow_w_type100";
        uniformRadios[] = {};
        vestMagazines[] = {
            {"fow_32Rnd_8x22", 8},
            {"fow_8Rnd_8x22", 3}
        };
        backpackMagazines[] = {
            {"fow_e_type99", 2},
            {"SmokeShell", 1},
            {"fow_32Rnd_8x22", 6}
        };
    };

    class AR : Rifleman {
        primaryWeapon = "fow_w_type99_lmg";
        handgunWeapon = "fow_w_type14";
        vestMagazines[] = {
            {"fow_30Rnd_77x58", 4},
            {"fow_8Rnd_8x22", 4}
        };
        backpackMagazines[] = {
            {"fow_e_type99", 2},
            {"SmokeShell", 1},
            {"fow_30Rnd_77x58", 4}
        };
    };

    class AAR : Rifleman {
        backpackMagazines[] = {
            {"fow_e_type99", 2},
            {"SmokeShell", 1},
            {"fow_30Rnd_77x58", 6},
            {"fow_1Rnd_type2_40", 2}
        };
        binocular = "Binocular";
    };

    class RAT : Rifleman {
        backpackMagazines[] = {
            {"fow_e_type99", 2},
            {"SmokeShell", 1},
            {"fow_5Rnd_77x58", 6},
            {"fow_e_type99_at", 2}
        };
    };

    class MMGG : AR {
    };

    class MMGAG : AAR {
        uniformRadios[] = {"ACRE_PRC343"};
    };

    class HMGG : Rifleman {
    };

    class HMGAG : MMGAG {
    };

    class HMGAC : HMGG {
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
        backpack = "fow_b_ija_type97_mortar_weapon";
    };

    class MTRAG : Rifleman {
        backpack = "fow_b_ija_type97_mortar_support";
        primaryWeapon = "fow_w_type100";
        vestItems[] = {{"fow_32Rnd_8x22", 8}};
        uniformRadios[] = {"ACRE_PRC343"};
    };

    class MTRAC : MTRG {
    };

    class ENG : Rifleman {
        primaryWeapon = "fow_w_type100";
        vestMagazines[] = {{"fow_32Rnd_8x22", 8}};
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
        primaryWeapon = "fow_w_type99";
        vestMagazines[] = {{"fow_5Rnd_77x58", 8}};
        uniformRadios[] = {};
    };

    class SN : Rifleman {
        primaryWeapon = "fow_w_type99_sniper";
        handgunWeapon = "fow_w_type14";
        vestMagazines[] = {
            {"fow_5Rnd_77x58", 8},
            {"fow_8Rnd_8x22", 4}
        };
        uniformRadios[] = {"ACRE_PRC343"};
    };

    class SP : Rifleman {
        binocular = "Binocular";
    };

    class VC : Crew {
        binocular = "binocular";
        primaryWeapon = "fow_w_type100";
        vestMagazines[] = {
            {"fow_32Rnd_8x22", 4},
            {"fow_8Rnd_8x22", 3}
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
            {"fow_w_type99", 1},
            {"fow_w_type100", 1}
        };
        magazines[] = {
            {"fow_32Rnd_8x22", 50},
            {"fow_5Rnd_77x58", 50},
            {"fow_30Rnd_77x58", 100},
            {"fow_1Rnd_type2_40", 25},
            {"SatchelCharge_Remote_Mag", 5},
            {"ACE_HandFlare_White", 10},
            {"fow_e_type99", 10},
            {"SmokeShell", 10},
            {"fow_e_type99_at", 25}
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
