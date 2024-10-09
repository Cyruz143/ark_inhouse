class G36_GER {
    class Rifleman {
        primaryWeapon = "CUP_arifle_G36K_RIS";
        primaryWeaponItems[] = {"CUP_optic_CompM2_low", "CUP_acc_Flashlight"};
        secondaryWeapon = "";
        secondaryWeaponItems[] = {};
        handgunWeapon = "";
        handgunItems[] = {};
        uniformWeapons[] = {};
        vestWeapons[] = {};
        backpackWeapons[] = {};
        uniformMagazines[] = {
            {"HandGrenade", 1},
            {"ACE_Chemlight_HiRed", 2},
            {"SmokeShell", 1}
        };
        vestMagazines[] = {
            {"CUP_30Rnd_556x45_G36", 6},
            {"CUP_30Rnd_TE1_Red_Tracer_556x45_G36", 2}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_30Rnd_556x45_G36", 4},
            {"CUP_30Rnd_TE1_Red_Tracer_556x45_G36", 2}
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
        primaryWeapon = "CUP_arifle_G36K_RIS_AG36";
        primaryWeaponItems[] = {"CUP_optic_CompM2_low", "CUP_acc_Flashlight"};
        vestMagazines[] = {
            {"CUP_30Rnd_556x45_G36", 6},
            {"CUP_1Rnd_HE_M203", 4},
            {"CUP_1Rnd_Smoke_M203", 2},
            {"CUP_1Rnd_SmokeRed_M203", 2},
            {"CUP_30Rnd_TE1_Red_Tracer_556x45_G36", 2}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_30Rnd_556x45_G36", 4},
            {"CUP_30Rnd_TE1_Red_Tracer_556x45_G36", 2},
            {"CUP_1Rnd_Smoke_M203", 2},
            {"CUP_1Rnd_SmokeRed_M203", 2},
            {"CUP_FlareWhite_M203", 2}
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
        primaryWeapon = "CUP_smg_MP7";
        primaryWeaponItems[] = {"CUP_acc_Flashlight", "CUP_optic_MicroT1_low"};
        uniformMagazines[] = {
            {"ACE_Chemlight_HiRed", 2},
            {"SmokeShell", 1}
        };
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        vestMagazines[] = {{"CUP_40Rnd_46x30_MP7", 4}};
        backpackMagazines[] = {};
        assignItems[] = {"ItemGPS", "ACE_NVG_Wide"};
    };

    class CO : Officer {
    };

    class XO : CO {
        backpackMagazines[] = {
            {"CUP_1Rnd_Smoke_M203", 8},
            {"CUP_1Rnd_SmokeRed_M203", 8}
        };
        backpackRadios[] = {"ACRE_PRC117F"};
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        primaryWeapon = "CUP_smg_MP7";
        primaryWeaponItems[] = {"CUP_optic_MicroT1_low", "CUP_acc_Flashlight"};
        vestMagazines[] = {
            {"CUP_40Rnd_46x30_MP7", 6},
            {"CUP_40Rnd_46x30_MP7_Red_Tracer", 2},
            {"SmokeShell", 4}
        };
        backpackMagazines[] = {
            {"SmokeShellBlue", 4},
            {"CUP_40Rnd_46x30_MP7", 2}
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
        primaryWeapon = "CUP_lmg_MG3";
        primaryWeaponItems[] = {};
        vestMagazines[] = {{"CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 2}};
        backpackMagazines[] = {{"CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 4}};
    };

    class AAR : Rifleman {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 4}
        };
        binocular = "Binocular";
    };

    class RAT : Rifleman {
        primaryWeapon = "CUP_arifle_G36K_RIS";
        secondaryWeapon = "CUP_launch_HCPF3";
        vestMagazines[] = {
            {"CUP_30Rnd_556x45_G36", 6},
            {"CUP_30Rnd_TE1_Red_Tracer_556x45_G36", 2}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_30Rnd_556x45_G36", 4},
            {"CUP_30Rnd_TE1_Red_Tracer_556x45_G36", 2}
        };
    };

    class MMGG : Rifleman {
        primaryWeapon = "CUP_lmg_MG3";
        primaryWeaponItems[] = {};
        vestMagazines[] = {{"CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 1}};
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 2}
        };
    };

    class MMGAG : Rifleman {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 2}
        };
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class HMGG : Rifleman {
        primaryWeapon = "CUP_smg_MP7";
        primaryWeaponItems[] = {"CUP_optic_MicroT1_low", "CUP_acc_Flashlight"};
        vestMagazines[] = {
            {"CUP_40Rnd_46x30_MP7", 6},
            {"CUP_40Rnd_46x30_MP7_Red_Tracer", 2}
        };
        backpack = "CUP_B_M2_Gun_Bag";
        backpackMagazines[] = {};
        backpackMedicalItems[] = {};
    };

    class HMGAG : MMGAG {
        backpack = "CUP_B_M2_MiniTripod_Bag";
        backpackMagazines[] = {};
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
    };

    class HMGAC : Rifleman {
        primaryWeapon = "CUP_smg_MP7";
        primaryWeaponItems[] = {"CUP_optic_MicroT1_low", "CUP_acc_Flashlight"};
        vestMagazines[] = {
            {"CUP_40Rnd_46x30_MP7", 6},
            {"CUP_40Rnd_46x30_MP7_Red_Tracer", 2}
        };
    };

    class MATG : RAT {
        primaryWeapon = "CUP_smg_MP7";
        primaryWeaponItems[] = {"CUP_optic_MicroT1_low", "CUP_acc_Flashlight"};
        vestMagazines[] = {
            {"CUP_40Rnd_46x30_MP7", 6},
            {"CUP_40Rnd_46x30_MP7_Red_Tracer", 2}
        };
        secondaryWeapon = "CUP_launch_PzF3";
        backpackMagazines[] = {};
        backpackItems[] = {
            {"CUP_launch_PzF3", 1},
            {"CUP_launch_BF3", 1}
        };
    };

    class MATAG : Rifleman {
        primaryWeapon = "CUP_arifle_G36K_RIS";
        secondaryWeapon = "CUP_launch_PzF3";
        vestMagazines[] = {
            {"CUP_30Rnd_556x45_G36", 10},
            {"CUP_30Rnd_TE1_Red_Tracer_556x45_G36", 4},
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
        primaryWeapon = "CUP_smg_MP7";
        primaryWeaponItems[] = {"CUP_optic_MicroT1_low", "CUP_acc_Flashlight"};
        vestMagazines[] = {
            {"CUP_40Rnd_46x30_MP7", 6},
            {"CUP_40Rnd_46x30_MP7_Red_Tracer", 2}
        };
        secondaryWeapon = "CUP_launch_PzF3";
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
        primaryWeapon = "CUP_smg_MP7";
        primaryWeaponItems[] = {"CUP_optic_MicroT1_low", "CUP_acc_Flashlight"};
        vestMagazines[] = {
            {"CUP_40Rnd_46x30_MP7", 6},
            {"CUP_40Rnd_46x30_MP7_Red_Tracer", 2}
        };
        secondaryWeapon = "launch_I_Titan_short_F";
        secondaryWeaponItems[] = {"Titan_AT"};
        backpackItems[] = {};
        backpackMagazines[] = {
            {"Titan_AT", 2},
            {"Titan_AP", 1}
        };
    };

    class HATAG : MATAG {
        secondaryWeapon = "";
        backpackItems[] = {};
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"Titan_AT", 2},
            {"Titan_AP", 1}
        };
    };

    class HATAC : HATAG {
        primaryWeapon = "CUP_smg_MP7";
        primaryWeaponItems[] = {"CUP_optic_MicroT1_low", "CUP_acc_Flashlight"};
        vestMagazines[] = {
            {"CUP_40Rnd_46x30_MP7", 6},
            {"CUP_40Rnd_46x30_MP7_Red_Tracer", 2}
        };
        secondaryWeapon = "";
        backpackItems[] = {};
        assignItems[] = {};
        binocular = "Binocular";
        uniformRadios[] = {"ACRE_PRC343"};
    };

    class DHATG : Rifleman {
        primaryWeapon = "CUP_smg_MP7";
        primaryWeaponItems[] = {"CUP_optic_MicroT1_low", "CUP_acc_Flashlight"};
        vestMagazines[] = {
            {"CUP_40Rnd_46x30_MP7", 6},
            {"CUP_40Rnd_46x30_MP7_Red_Tracer", 2}
        };
        backpack = "CUP_B_Tow_Gun_Bag";
        backpackMagazines[] = {};
        backpackMedicalItems[] = {};
    };

    class DHATAG : MMGAG {
        backpack = "CUP_B_TOW_Tripod_Bag";
        backpackMagazines[] = {};
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        uniformMagazines[] = {
            {"ACE_Chemlight_HiRed", 2},
            {"SmokeShell", 1}
        };
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
    };

    class DHATAC : Rifleman {
        primaryWeapon = "CUP_smg_MP7";
        primaryWeaponItems[] = {"CUP_optic_MicroT1_low", "CUP_acc_Flashlight"};
        vestMagazines[] = {
            {"CUP_40Rnd_46x30_MP7", 6},
            {"CUP_40Rnd_46x30_MP7_Red_Tracer", 2}
        };
    };

    class SAMG : Rifleman {
        primaryWeapon = "CUP_smg_MP7";
        primaryWeaponItems[] = {"CUP_optic_MicroT1_low", "CUP_acc_Flashlight"};
        vestMagazines[] = {
            {"CUP_40Rnd_46x30_MP7", 6},
            {"CUP_40Rnd_46x30_MP7_Red_Tracer", 2}
        };
        secondaryWeapon = "CUP_launch_FIM92Stinger";
        secondaryWeaponItems[] = {"CUP_Stinger_M"};
        backpackMagazines[] = {{"CUP_Stinger_M", 1}};
    };

    class SAMAG : Rifleman {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"CUP_Stinger_M", 1}
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
        primaryWeapon = "CUP_smg_MP7";
        primaryWeaponItems[] = {"CUP_optic_MicroT1_low", "CUP_acc_Flashlight"};
        vestMagazines[] = {
            {"CUP_40Rnd_46x30_MP7", 6},
            {"CUP_40Rnd_46x30_MP7_Red_Tracer", 2}
        };
        uniformRadios[] = {"ACRE_PRC343"};
        binocular = "Binocular";
        assignItems[] = {};
    };

    class GMGG : Rifleman {
        primaryWeapon = "CUP_smg_MP7";
        primaryWeaponItems[] = {"CUP_optic_MicroT1_low", "CUP_acc_Flashlight"};
        vestMagazines[] = {
            {"CUP_40Rnd_46x30_MP7", 6},
            {"CUP_40Rnd_46x30_MP7_Red_Tracer", 2}
        };
        backpack = "CUP_B_Mk19_Gun_Bag";
        backpackMagazines[] = {};
        backpackMedicalItems[] = {};
    };

    class GMGAG : MMGAG {
        backpack = "CUP_B_Mk19_Tripod_Bag";
        backpackMagazines[] = {};
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        uniformMagazines[] = {
            {"ACE_Chemlight_HiRed", 2},
            {"SmokeShell", 1}
        };
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
    };

    class GMGAC : Rifleman {
        primaryWeapon = "CUP_smg_MP7";
        primaryWeaponItems[] = {"CUP_optic_MicroT1_low", "CUP_acc_Flashlight"};
        vestMagazines[] = {
            {"CUP_40Rnd_46x30_MP7", 6},
            {"CUP_40Rnd_46x30_MP7_Red_Tracer", 2}
        };
    };

    class MTRG : Rifleman {
        primaryWeapon = "CUP_smg_MP7";
        primaryWeaponItems[] = {"CUP_optic_MicroT1_low", "CUP_acc_Flashlight"};
        vestMagazines[] = {
            {"CUP_40Rnd_46x30_MP7", 6},
            {"CUP_40Rnd_46x30_MP7_Red_Tracer", 2}
        };
        backpack = "CUP_B_M252_Gun_Bag";
        backpackMagazines[] = {};
        backpackMedicalItems[] = {};
    };

    class MTRAG : MMGAG {
        backpack = "CUP_B_M252_Bipod_Bag";
        backpackMagazines[] = {};
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        uniformMagazines[] = {
            {"ACE_Chemlight_HiRed", 2},
            {"SmokeShell", 1}
        };
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
    };

    class MTRAC : Rifleman {
        primaryWeapon = "CUP_smg_MP7";
        primaryWeaponItems[] = {"CUP_optic_MicroT1_low", "CUP_acc_Flashlight"};
        vestMagazines[] = {
            {"CUP_40Rnd_46x30_MP7", 6},
            {"CUP_40Rnd_46x30_MP7_Red_Tracer", 2}
        };
    };

    class ENG : Rifleman {
        primaryWeapon = "CUP_smg_MP7";
        primaryWeaponItems[] = {"CUP_optic_MicroT1_low", "CUP_acc_Flashlight"};
        vestMagazines[] = {
            {"CUP_40Rnd_46x30_MP7", 6},
            {"CUP_40Rnd_46x30_MP7_Red_Tracer", 2}
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
        primaryWeapon = "CUP_srifle_G22_wdl";
        handgunWeapon = "CUP_hgun_Glock17";
        primaryWeaponItems[] = {"CUP_optic_Leupold_VX3", "bipod_02_F_blk"};
        vestMagazines[] = {
            {"CUP_5Rnd_762x67_G22", 4},
            {"CUP_17Rnd_9x19_glock17", 3}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_5Rnd_762x67_G22", 3}
        };
        assignItems[] = {"ItemGPS"};
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class SP : Rifleman {
        primaryWeapon = "CUP_arifle_G36K_RIS";
        binocular = "ACE_VectorDay";
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
            {"CUP_launch_HCPF3", 4}
        };
        magazines[] = {
            {"CUP_30Rnd_556x45_G36", 20},
            {"CUP_30Rnd_TE1_Red_Tracer_556x45_G36", 10},
            {"CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 10},
            {"CUP_40Rnd_46x30_MP7", 10},
            {"CUP_40Rnd_46x30_MP7_Red_Tracer", 10},
            {"CUP_1Rnd_Smoke_M203", 5},
            {"CUP_FlareWhite_M203", 5},
            {"ACE_HandFlare_White", 5},
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
            {"CUP_launch_HCPF3", 10},
            {"CUP_launch_PzF3", 5}
        };
        magazines[] = {
            {"CUP_30Rnd_556x45_G36", 40},
            {"CUP_30Rnd_TE1_Red_Tracer_556x45_G36", 20},
            {"CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 30},
            {"CUP_40Rnd_46x30_MP7", 20},
            {"CUP_40Rnd_46x30_MP7_Red_Tracer", 20},
            {"CUP_1Rnd_Smoke_M203", 10},
            {"CUP_FlareWhite_M203", 10},
            {"SatchelCharge_Remote_Mag", 5},
            {"ACE_HandFlare_White", 10},
            {"Titan_AT", 5},
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
            {"CUP_launch_HCPF3", 10},
            {"CUP_launch_PzF3", 5}
        };
        magazines[] = {
            {"CUP_30Rnd_556x45_G36", 40},
            {"CUP_30Rnd_TE1_Red_Tracer_556x45_G36", 20},
            {"CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 30},
            {"CUP_40Rnd_46x30_MP7", 20},
            {"CUP_40Rnd_46x30_MP7_Red_Tracer", 20},
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
