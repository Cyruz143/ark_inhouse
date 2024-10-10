class HK416_ROK {
    class Rifleman {
        primaryWeapon = "CUP_arifle_HK416_Black";
        primaryWeaponItems[] = {"CUP_optic_Eotech553_Black", "CUP_acc_Flashlight"};
        secondaryWeapon = "";
        secondaryWeaponItems[] = {};
        handgunWeapon = "";
        handgunItems[] = {};
        uniformWeapons[] = {};
        vestWeapons[] = {};
        backpackWeapons[] = {};
        uniformMagazines[] = {
            {"ACE_Chemlight_HiRed", 2},
            {"SmokeShell", 1}
        };
        vestMagazines[] = {
            {"CUP_30Rnd_556x45_PMAG_QP", 6},
            {"CUP_30Rnd_556x45_PMAG_QP_Tracer_Red", 2}
        };
        backpackMagazines[] = {
            {"HandGrenade", 2},
            {"SmokeShell", 1},
            {"CUP_30Rnd_556x45_PMAG_QP", 4},
            {"CUP_30Rnd_556x45_PMAG_QP_Tracer_Red", 2}
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
        primaryWeapon = "CUP_arifle_HK416_M203_Black";
        primaryWeaponItems[] = {"CUP_optic_Eotech553_Black", "CUP_acc_Flashlight"};
        handgunWeapon = "hlc_pistol_P226US";
        vestMagazines[] = {
            {"CUP_30Rnd_556x45_PMAG_QP", 3},
            {"CUP_1Rnd_HE_M203", 4},
            {"CUP_1Rnd_Smoke_M203", 2},
            {"CUP_1Rnd_SmokeRed_M203", 2},
            {"CUP_30Rnd_556x45_PMAG_QP_Tracer_Red", 2},
            {"hlc_15Rnd_9x19_B_P226", 3}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_30Rnd_556x45_PMAG_QP", 6},
            {"CUP_30Rnd_556x45_PMAG_QP_Tracer_Red", 2},
            {"CUP_FlareWhite_M203", 2},
            {"CUP_1Rnd_Smoke_M203", 2},
            {"CUP_1Rnd_SmokeRed_M203", 2}
        };
        assignItems[] = {"ItemGPS"};
        binocular = "Binocular";
    };

    class Officer : Leader {
        assignItems[] = {"ItemGPS"};
        binocular = "ACE_VectorDay";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class Crew : Rifleman {
        primaryWeapon = "CUP_arifle_HK416_CQB_Black";
        primaryWeaponItems[] = {"CUP_optic_Eotech553_Black", "CUP_acc_Flashlight"};
        uniformMagazines[] = {
            {"ACE_Chemlight_HiRed", 2},
            {"SmokeShell", 1}
        };
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        vestMagazines[] = {{"CUP_30Rnd_556x45_PMAG_QP", 4}};
        backpackMagazines[] = {};
        assignItems[] = {"ItemGPS", "ACE_NVG_Wide"};
    };

    class CO : Officer {
    };

    class XO : CO {
        backpackMagazines[] = {
            {"CUP_1Rnd_Smoke_M203", 8},
            {"CUP_FlareWhite_M203", 8},
            {"CUP_1Rnd_SmokeRed_M203", 8}
        };
        backpackRadios[] = {"ACRE_PRC117F"};
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        primaryWeapon = "CUP_arifle_HK416_CQB_Black";
        primaryWeaponItems[] = {"CUP_optic_Eotech553_Black", "CUP_acc_Flashlight"};
        vestMagazines[] = {
            {"CUP_30Rnd_556x45_PMAG_QP", 4},
            {"CUP_30Rnd_556x45_PMAG_QP_Tracer_Red", 2},
            {"SmokeShell", 2}
        };
        backpackMagazines[] = {
            {"SmokeShellBlue", 4},
            {"CUP_30Rnd_556x45_PMAG_QP", 2}
        };
        assignItems[] = {"ItemGPS"};
        binocular = "Binocular";
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
        primaryWeapon = "CUP_lmg_M60E4";
        primaryWeaponItems[] = {};
        vestMagazines[] = {{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 2}};
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 4}
        };
    };

    class AAR : Rifleman {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 4}
        };
        binocular = "Binocular";
    };

    class RAT : Rifleman {
        primaryWeapon = "CUP_arifle_HK416_CQB_Black";
        primaryWeaponItems[] = {"CUP_optic_Eotech553_Black", "CUP_acc_Flashlight"};
        secondaryWeapon = "CUP_launch_APILAS";
        vestMagazines[] = {
            {"CUP_30Rnd_556x45_PMAG_QP", 6},
            {"CUP_30Rnd_556x45_PMAG_QP_Tracer_Red", 2}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_30Rnd_556x45_PMAG_QP", 4}
        };
    };

    class MMGG : Rifleman {
        primaryWeapon = "CUP_lmg_M60E4";
        primaryWeaponItems[] = {};
        vestMagazines[] = {{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 1}};
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 3}
        };
    };

    class MMGAG : Rifleman {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_30Rnd_556x45_PMAG_QP_Tracer_Red", 2},
            {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 3}
        };
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class HMGG : Rifleman {
        primaryWeapon = "CUP_arifle_HK416_CQB_Black";
        primaryWeaponItems[] = {"CUP_optic_Eotech553_Black", "CUP_acc_Flashlight"};
        backpack = "CUP_B_M2_Gun_Bag";
        backpackMagazines[] = {};
        backpackMedicalItems[] = {};
    };

    class HMGAG : HMGG {
        backpack = "CUP_B_M2_MiniTripod_Bag";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
    };

    class HMGAC : Rifleman {
    };

    class MATG : RAT {
        primaryWeapon = "CUP_arifle_HK416_CQB_Black";
        primaryWeaponItems[] = {"CUP_optic_Eotech553_Black", "CUP_acc_Flashlight"};
        secondaryWeapon = "CUP_launch_PzF3";
        vestMagazines[] = {
            {"CUP_30Rnd_556x45_PMAG_QP", 10},
            {"CUP_30Rnd_556x45_PMAG_QP_Tracer_Red", 4},
            {"HandGrenade", 1},
            {"SmokeShell", 1}
        };
        backpackMagazines[] = {};
        backpackItems[] = {
            {"CUP_launch_PzF3", 1},
            {"CUP_launch_BF3", 1}
        };
    };

    class MATAG : Rifleman {
        secondaryWeapon = "CUP_launch_PzF3";
        vestMagazines[] = {
            {"CUP_30Rnd_556x45_PMAG_QP", 10},
            {"CUP_30Rnd_556x45_PMAG_QP_Tracer_Red", 4},
            {"HandGrenade", 1},
            {"SmokeShell", 1}
        };
        backpackMagazines[] = {};
        backpackItems[] = {
            {"CUP_launch_PzF3", 1},
            {"CUP_launch_BF3", 1}
        };
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class MATAC : MATAG {
        secondaryWeapon = "CUP_launch_PzF3";
        vestMagazines[] = {
            {"CUP_30Rnd_556x45_PMAG_QP", 10},
            {"CUP_30Rnd_556x45_PMAG_QP_Tracer_Red", 4},
            {"HandGrenade", 1},
            {"SmokeShell", 1}
        };
        backpackMagazines[] = {};
        backpackItems[] = {
            {"CUP_launch_PzF3", 1},
            {"CUP_launch_BF3", 1}
        };
        assignItems[] = {};
        binocular = "Binocular";
        uniformRadios[] = {"ACRE_PRC343"};
    };

    class HATG : MATG {
        secondaryWeapon = "launch_O_Vorona_green_F";
        primaryWeapon = "CUP_arifle_HK416_CQB_Black";
        primaryWeaponItems[] = {"CUP_optic_Eotech553_Black", "CUP_acc_Flashlight"};
        secondaryWeaponItems[] = {"Vorona_HEAT"};
        backpackItems[] = {};
        backpackMagazines[] = {
            {"Vorona_HEAT", 2},
            {"Vorona_HE", 1}
        };
    };

    class HATAG : MATAG {
        backpackItems[] = {};
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"Vorona_HEAT", 1},
            {"Vorona_HE", 1}
        };
    };

    class HATAC : HATAG {
    };

    class DHATG : Rifleman {
        primaryWeapon = "CUP_arifle_HK416_CQB_Black";
        primaryWeaponItems[] = {"CUP_optic_Eotech553_Black", "CUP_acc_Flashlight"};
        backpack = "CUP_B_Tow_Gun_Bag";
        backpackMagazines[] = {};
        backpackMedicalItems[] = {};
    };

    class DHATAG : HMGG {
        backpack = "CUP_B_TOW_Tripod_Bag";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        uniformMagazines[] = {
            {"ACE_Chemlight_HiRed", 2},
            {"SmokeShell", 1}
        };
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
    };

    class DHATAC : Rifleman {
    };

    class SAMG : Rifleman {
        primaryWeapon = "CUP_arifle_HK416_CQB_Black";
        primaryWeaponItems[] = {"CUP_optic_Eotech553_Black", "CUP_acc_Flashlight"};
        secondaryWeapon = "CUP_launch_FIM92Stinger";
    };

    class SAMAG : Rifleman {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"CUP_30Rnd_556x45_PMAG_QP_Tracer_Red", 2}
        };
        uniformMagazines[] = {
            {"ACE_Chemlight_HiRed", 2},
            {"SmokeShell", 1}
        };
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
    };

    class SAMAC : SAMAG {
        uniformRadios[] = {"ACRE_PRC343"};
        binocular = "Binocular";
        assignItems[] = {};
    };

    class GMGG : Rifleman {
        primaryWeapon = "CUP_arifle_HK416_CQB_Black";
        primaryWeaponItems[] = {"CUP_optic_Eotech553_Black", "CUP_acc_Flashlight"};
        backpack = "CUP_B_Mk19_Gun_Bag";
        backpackMagazines[] = {};
        backpackMedicalItems[] = {};
    };

    class GMGAG : HMGG {
        backpack = "CUP_B_Mk19_Tripod_Bag";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        uniformMagazines[] = {
            {"ACE_Chemlight_HiRed", 2},
            {"SmokeShell", 1}
        };
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
    };

    class GMGAC : Rifleman {
    };

    class MTRG : Rifleman {
        primaryWeapon = "CUP_arifle_HK416_CQB_Black";
        primaryWeaponItems[] = {"CUP_optic_Eotech553_Black", "CUP_acc_Flashlight"};
        backpack = "CUP_B_M252_Gun_Bag";
        backpackMagazines[] = {};
        backpackMedicalItems[] = {};
    };

    class MTRAG : MTRG {
        backpack = "CUP_B_M252_Bipod_Bag";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        uniformMagazines[] = {
            {"ACE_Chemlight_HiRed", 2},
            {"SmokeShell", 1}
        };
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
    };

    class MTRAC : Rifleman {
    };

    class ENG : Rifleman {
        primaryWeapon = "CUP_arifle_HK416_CQB_Black";
        primaryWeaponItems[] = {"CUP_optic_Eotech553_Black", "CUP_acc_Flashlight"};
        vestMagazines[] = {
            {"CUP_30Rnd_556x45_PMAG_QP", 4},
            {"CUP_30Rnd_556x45_PMAG_QP_Tracer_Red", 2}
        };
        backpackMagazines[] = {
            {"DemoCharge_Remote_Mag", 3},
            {"SLAMDirectionalMine_Wire_Mag", 2}
        };
        assignItems[] = {"ItemGPS"};
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
        primaryWeapon = "CUP_srifle_AWM_wdl";
        handgunWeapon = "hlc_pistol_P226US";
        primaryWeaponItems[] = {"CUP_optic_SB_3_12x50_PMII", "bipod_02_F_blk"};
        vestMagazines[] = {
            {"CUP_5Rnd_86x70_L115A1", 4},
            {"hlc_15Rnd_9x19_B_P226", 3}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_5Rnd_86x70_L115A1", 3}
        };
        assignItems[] = {"ItemGPS"};
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class SP : Rifleman {
        binocular = "ACE_VectorDay";
        vestMagazines[] = {
            {"CUP_30Rnd_556x45_PMAG_QP", 4},
            {"CUP_30Rnd_556x45_PMAG_QP_Tracer_Red", 2}
        };
    };

    class VC : Crew {
        binocular = "ACE_VectorDay";
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
        weapons[] = {
            {"CUP_launch_APILAS", 4}
        };
        magazines[] = {
            {"CUP_30Rnd_556x45_PMAG_QP", 20},
            {"CUP_30Rnd_556x45_PMAG_QP_Tracer_Red", 10},
            {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 10},
            {"CUP_1Rnd_Smoke_M203", 5},
            {"ACE_HandFlare_White", 5},
            {"CUP_FlareWhite_M203", 5},
            {"HandGrenade", 5},
            {"SmokeShell", 5}
        };
        items[] = {{"ItemGPS", 1}};
        medicalItems[] = {
            {"ACE_fieldDressing", 50},
            {"ACE_splint", 12}
        };
    };

    class Car : Vehicle {
    };

    class Truck : Vehicle {
        weapons[] = {
            {"CUP_launch_APILAS", 10},
            {"CUP_launch_PzF3", 5}
        };
        magazines[] = {
            {"CUP_30Rnd_556x45_PMAG_QP", 40},
            {"CUP_30Rnd_556x45_PMAG_QP_Tracer_Red", 20},
            {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 20},
            {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 10},
            {"CUP_1Rnd_Smoke_M203", 10},
            {"SatchelCharge_Remote_Mag", 5},
            {"ACE_HandFlare_White", 10},
            {"Vorona_HEAT", 5},
            {"CUP_FlareWhite_M203", 10},
            {"HandGrenade", 10},
            {"SmokeShell", 10}
        };
        items[] = {
            {"ACE_M26_Clacker", 1},
            {"ItemGPS", 1}
        };
        medicalItems[] = {
            {"ACE_fieldDressing", 50},
            {"ACE_splint", 12}
        };
    };

    class Armored : Truck {
        weapons[] = {
            {"CUP_launch_APILAS", 10},
            {"CUP_launch_PzF3", 5}
        };
        magazines[] = {
            {"CUP_30Rnd_556x45_PMAG_QP", 40},
            {"CUP_30Rnd_556x45_PMAG_QP_Tracer_Red", 20},
            {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 20},
            {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 10},
            {"CUP_1Rnd_Smoke_M203", 10},
            {"CUP_FlareWhite_M203", 10},
            {"SatchelCharge_Remote_Mag", 5},
            {"ACE_HandFlare_White", 10},
            {"HandGrenade", 10},
            {"SmokeShell", 10}
        };
        items[] = {
            {"ACE_M26_Clacker", 1},
            {"ItemGPS", 1}
        };
        medicalItems[] = {
            {"ACE_fieldDressing", 50},
            {"ACE_splint", 12}
        };
    };

};
