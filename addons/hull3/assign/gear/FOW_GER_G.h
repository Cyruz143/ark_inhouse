class FOW_GER_G {
    class Rifleman {
        primaryWeapon = "fow_w_k98";
        secondaryWeapon = "";
        secondaryWeaponItems[] = {};
        handgunWeapon = "";
        handgunItems[] = {};
        uniformWeapons[] = {};
        vestWeapons[] = {};
        backpackWeapons[] = {};
        uniformMagazines[] = {{"SmokeShell", 1}};
        vestMagazines[] = {{"fow_5Rnd_792x57", 8}};
        backpackMagazines[] = {
            {"fow_e_m24_spli", 2},
            {"SmokeShell", 1},
            {"fow_5Rnd_792x57", 6}
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
        primaryWeapon = "fow_w_mp40";
        handgunWeapon = "fow_w_p08";
        vestMagazines[] = {
            {"fow_32Rnd_9x19_mp40", 8},
            {"fow_8Rnd_9x19", 3}
        };
        backpackMagazines[] = {
            {"fow_e_m24_spli", 2},
            {"SmokeShell", 1},
            {"fow_32Rnd_9x19_mp40", 6}
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
        handgunWeapon = "fow_w_p08";
        uniformMagazines[] = {{"SmokeShell", 1}};
        uniformRadios[] = {"ACRE_PRC343"};
        vestMagazines[] = {{"fow_8Rnd_9x19", 4}};
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
        primaryWeapon = "fow_w_g43";
        vestMagazines[] = {
            {"fow_10nd_792x57", 8},
            {"SmokeShell", 4}
        };
        backpackMagazines[] = {
            {"SmokeShellBlue", 4},
            {"fow_10nd_792x57", 2}
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
        primaryWeapon = "fow_w_stg44";
        vestMagazines[] = {
            {"fow_30Rnd_792x33", 8},
            {"fow_8Rnd_9x19", 3}
        };
        uniformRadios[] = {};
        backpackMagazines[] = {
            {"fow_e_m24_spli", 2},
            {"SmokeShell", 1},
            {"fow_30Rnd_792x33", 6}
        };
    };

    class AR : Rifleman {
        primaryWeapon = "fow_w_mg34";
        handgunWeapon = "fow_w_p08";
        vestMagazines[] = {
            {"fow_50Rnd_792x57", 4},
            {"fow_8Rnd_9x19", 4}
        };
        backpackMagazines[] = {
            {"fow_e_m24_spli", 2},
            {"SmokeShell", 1},
            {"fow_50Rnd_792x57", 4}
        };
    };

    class AAR : Rifleman {
        backpackMagazines[] = {
            {"fow_e_m24_spli", 2},
            {"SmokeShell", 1},
            {"fow_50Rnd_792x57", 6},
            {"fow_1Rnd_m9a1", 2}
        };
        binocular = "Binocular";
    };

    class RAT : Rifleman {
        primaryWeapon = "fow_w_g43";
        secondaryWeapon = "fow_w_pzfaust_100";
        vestMagazines[] = {{"fow_10nd_792x57", 8}};
        backpackMagazines[] = {
            {"fow_e_m24_spli", 2},
            {"SmokeShell", 1},
            {"fow_10nd_792x57", 6},
            {"fow_e_m24_at", 2}
        };
    };

    class MMGG : AR {
        primaryWeapon = "fow_w_mg42";
        handgunWeapon = "fow_w_p08";
        vestMagazines[] = {
            {"fow_50Rnd_792x57", 4},
            {"fow_8Rnd_9x19", 4}
        };
        backpackMagazines[] = {
            {"fow_e_m24_spli", 2},
            {"SmokeShell", 1},
            {"fow_50Rnd_792x57", 4}
        };
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
        primaryWeapon = "fow_w_mp40";
        secondaryWeapon = "LIB_RPzB";
        secondaryWeaponItems[] = {"LIB_1Rnd_RPzB"};
        vestMagazines[] = {{"fow_32Rnd_9x19_mp40", 8}};
        backpackMagazines[] = {{"LIB_1Rnd_RPzB", 3}};
    };

    class MATAG : Rifleman {
        primaryWeapon = "fow_w_mp40";
        vestMagazines[] = {{"fow_32Rnd_9x19_mp40", 8}};
        backpackMagazines[] = {
            {"fow_e_m24_spli", 1},
            {"fow_32Rnd_9x19_mp40", 2},
            {"LIB_1Rnd_RPzB", 3}
        };
        uniformMagazines[] = {{"SmokeShell", 1}};
        binocular = "binocular";
        assignItems[] = {};
        uniformRadios[] = {"ACRE_PRC343"};
    };

    class MATAC : MATAG {
        primaryWeapon = "fow_w_k98";
        vestMagazines[] = {{"fow_5Rnd_792x57", 8}};
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
        primaryWeapon = "fow_w_mp40";
        vestMagazines[] = {{"fow_32Rnd_9x19_mp40", 8}};
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
        primaryWeapon = "fow_w_k98";
        vestMagazines[] = {{"fow_5Rnd_792x57", 8}};
        uniformRadios[] = {};
    };

    class SN : Rifleman {
        primaryWeapon = "fow_w_k98_scoped";
        handgunWeapon = "fow_w_p08";
        vestMagazines[] = {
            {"fow_5Rnd_792x57", 8},
            {"fow_8Rnd_9x19", 3}
        };
        uniformRadios[] = {"ACRE_PRC343"};
    };

    class SP : Rifleman {
        binocular = "Binocular";
    };

    class VC : Crew {
        binocular = "binocular";
        primaryWeapon = "fow_w_mp40";
        vestMagazines[] = {
            {"fow_32Rnd_9x19_mp40", 4},
            {"fow_8Rnd_9x19", 3}
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
            {"fow_w_k98", 1},
            {"fow_w_pzfaust_100", 5},
            {"fow_w_mp40", 1}
        };
        magazines[] = {
            {"fow_50Rnd_792x57", 100},
            {"fow_10nd_792x57", 50},
            {"fow_5Rnd_792x57", 50},
            {"fow_32Rnd_9x19_mp40", 50},
            {"LIB_1Rnd_RPzB", 25},
            {"fow_30Rnd_792x33", 50},
            {"SatchelCharge_Remote_Mag", 5},
            {"ACE_HandFlare_White", 10},
            {"fow_e_m24_spli", 10},
            {"SmokeShell", 10},
            {"fow_e_m24_at", 25}
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
