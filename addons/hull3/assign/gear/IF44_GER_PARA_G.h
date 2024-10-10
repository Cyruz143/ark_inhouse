class IF44_GER_PARA_G {
    class Rifleman {
        primaryWeapon = "LIB_FG42G";
        secondaryWeapon = "";
        secondaryWeaponItems[] = {};
        handgunWeapon = "";
        handgunItems[] = {};
        uniformWeapons[] = {};
        vestWeapons[] = {};
        backpackWeapons[] = {};
        uniformMagazines[] = {{"SmokeShell", 1}};
        vestMagazines[] = {{"LIB_20Rnd_792x57", 8}};
        backpackMagazines[] = {
            {"LIB_Shg24", 2},
            {"SmokeShell", 1},
            {"LIB_20Rnd_792x57", 6}
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
        primaryWeapon = "LIB_MP40";
        handgunWeapon = "LIB_P08";
        vestMagazines[] = {
            {"LIB_32Rnd_9x19", 8},
            {"LIB_8Rnd_9x19_P08", 3}
        };
        backpackMagazines[] = {
            {"LIB_Shg24", 2},
            {"SmokeShell", 1},
            {"LIB_32Rnd_9x19", 6}
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
        handgunWeapon = "LIB_P08";
        uniformMagazines[] = {{"SmokeShell", 1}};
        uniformRadios[] = {"ACRE_PRC343"};
        vestMagazines[] = {{"LIB_8Rnd_9x19_P08", 4}};
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
        primaryWeapon = "LIB_G43";
        vestMagazines[] = {
            {"LIB_10Rnd_792x57", 8},
            {"SmokeShell", 4}
        };
        backpackMagazines[] = {
            {"SmokeShellBlue", 4},
            {"LIB_10Rnd_792x57", 2}
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
        primaryWeapon = "LIB_MP40";
        uniformRadios[] = {};
        vestMagazines[] = {
            {"LIB_32Rnd_9x19", 8},
            {"LIB_8Rnd_9x19_P08", 3}
        };
        backpackMagazines[] = {
            {"LIB_Shg24", 2},
            {"SmokeShell", 1},
            {"LIB_32Rnd_9x19", 6}
        };
    };

    class AR : Rifleman {
        primaryWeapon = "LIB_MG34";
        handgunWeapon = "LIB_P38";
        vestMagazines[] = {
            {"LIB_50Rnd_792x57", 4},
            {"LIB_8Rnd_9x19", 4}
        };
        backpackMagazines[] = {
            {"LIB_Shg24", 2},
            {"SmokeShell", 1},
            {"LIB_50Rnd_792x57", 4}
        };
    };

    class AAR : Rifleman {
        primaryWeapon = "LIB_K98";
        primaryWeaponItems[] = {"LIB_ACC_GW_SB_Empty"};
        vestMagazines[] = {
            {"LIB_5Rnd_792x57", 8},
            {"LIB_1Rnd_G_SPRGR_30", 2},
            {"LIB_1Rnd_G_PZGR_30", 1}
        };
        backpackMagazines[] = {
            {"LIB_Shg24", 2},
            {"SmokeShell", 1},
            {"LIB_50Rnd_792x57", 6}
        };
        binocular = "Binocular";
    };

    class RAT : Rifleman {
        primaryWeapon = "LIB_FG42G";
        secondaryWeapon = "LIB_PzFaust_60m";
        vestMagazines[] = {{"LIB_20Rnd_792x57", 8}};
        backpackMagazines[] = {
            {"LIB_Shg24", 2},
            {"SmokeShell", 1},
            {"LIB_20Rnd_792x57", 6},
            {"LIB_Shg24x7", 2}
        };
    };

    class MMGG : AR {
        primaryWeapon = "LIB_MG42";
        vestMagazines[] = {{"LIB_50Rnd_792x57", 3}};
        backpackMagazines[] = {{"LIB_50Rnd_792x57", 4}};
    };

    class MMGAG : AAR {
        primaryWeapon = "LIB_MP40";
        vestMagazines[] = {{"LIB_32Rnd_9x19", 8}};
        backpackMagazines[] = {{"LIB_50Rnd_792x57", 4}};
        uniformRadios[] = {"ACRE_PRC343"};
    };

    class HMGG : Rifleman {
        primaryWeapon = "LIB_MG42";
        secondaryWeapon = "LIB_Laffete_Tripod";
        vestMagazines[] = {{"LIB_50Rnd_792x57", 3}};
        backpackMagazines[] = {{"LIB_100Rnd_792x57", 4}};
    };

    class HMGAG : MMGAG {
        vestMagazines[] = {{"LIB_32Rnd_9x19", 8}};
        backpackMagazines[] = {{"LIB_100Rnd_792x57", 4}};
        uniformRadios[] = {"ACRE_PRC343"};
    };

    class HMGAC : HMGG {
        primaryWeapon = "LIB_G43";
        secondaryWeapon = "";
        vestMagazines[] = {{"LIB_10Rnd_792x57", 8}};
        backpackMagazines[] = {{"LIB_100Rnd_792x57", 4}};
    };

    class MATG : RAT {
        secondaryWeapon = "LIB_RPzB";
        backpackMagazines[] = {{"LIB_1Rnd_RPzB", 3}};
    };

    class MATAG : Rifleman {
        primaryWeapon = "LIB_MP40";
        vestMagazines[] = {{"LIB_32Rnd_9x19", 8}};
        backpackMagazines[] = {{"LIB_1Rnd_RPzB", 3}};
        uniformRadios[] = {"ACRE_PRC343"};
    };

    class MATAC : Rifleman {
        backpackMagazines[] = {{"LIB_1Rnd_RPzB", 3}};
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
        secondaryWeapon = "LIB_GrWr34_Barrel";
        backpackMagazines[] = {
            {"LIB_1Rnd_81mm_Mo_HE", 2},
            {"LIB_1Rnd_81mm_Mo_Smoke", 1},
            {"LIB_1Rnd_81mm_Mo_Illum", 1}
        };
    };

    class MTRAG : Rifleman {
        secondaryWeapon = "LIB_GrWr34_Tripod";
        primaryWeapon = "LIB_MP40";
        vestMagazines[] = {{"LIB_32Rnd_9x19", 8}};
        backpackMagazines[] = {
            {"LIB_1Rnd_81mm_Mo_HE", 2},
            {"LIB_1Rnd_81mm_Mo_Smoke", 1},
            {"LIB_1Rnd_81mm_Mo_Illum", 1}
        };
        uniformRadios[] = {"ACRE_PRC343"};
    };

    class MTRAC : MTRAG {
        secondaryWeapon = "";
        primaryWeapon = "LIB_G43";
        vestMagazines[] = {{"LIB_10Rnd_792x57", 8}};
        uniformRadios[] = {};
    };

    class ENG : Rifleman {
        primaryWeapon = "LIB_MP40";
        vestMagazines[] = {{"LIB_32Rnd_9x19", 8}};
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
        primaryWeapon = "LIB_G3340";
        vestMagazines[] = {{"LIB_5Rnd_792x57", 8}};
        uniformRadios[] = {};
    };

    class SN : Rifleman {
        primaryWeapon = "LIB_K98ZF39";
        handgunWeapon = "LIB_P38";
        vestMagazines[] = {
            {"LIB_5Rnd_792x57", 8},
            {"LIB_8Rnd_9x19", 4}
        };
        uniformRadios[] = {"ACRE_PRC343"};
    };

    class SP : Rifleman {
        binocular = "Binocular";
    };

    class VC : Crew {
        binocular = "binocular";
        primaryWeapon = "LIB_MP40";
        vestMagazines[] = {
            {"LIB_32Rnd_9x19", 4},
            {"LIB_8Rnd_9x19_P08", 3}
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
            {"LIB_K98", 1},
            {"LIB_MP40", 1},
            {"LIB_PzFaust_60m", 10}
        };
        magazines[] = {
            {"LIB_10Rnd_792x57", 50},
            {"LIB_100Rnd_792x57", 50},
            {"LIB_20Rnd_792x57", 50},
            {"LIB_5Rnd_792x57", 100},
            {"LIB_32Rnd_9x19", 50},
            {"LIB_1Rnd_RPzB", 15},
            {"LIB_50Rnd_792x57", 100},
            {"SatchelCharge_Remote_Mag", 5},
            {"ACE_HandFlare_White", 10},
            {"LIB_Shg24", 10},
            {"SmokeShell", 10},
            {"LIB_Shg24x7", 25},
            {"LIB_1Rnd_G_SPRGR_30", 25},
            {"LIB_1Rnd_G_PZGR_30", 25},
            {"LIB_1Rnd_81mm_Mo_HE", 15},
            {"LIB_1Rnd_81mm_Mo_Smoke", 15},
            {"LIB_1Rnd_81mm_Mo_Illum", 15}
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
