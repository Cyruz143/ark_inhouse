class HK416_NOR {
    class Rifleman {
        primaryWeapon = "CUP_arifle_HK416_Black";
        primaryWeaponItems[] = {"CUP_optic_CompM4", "CUP_acc_Flashlight"};
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
            {"CUP_30Rnd_556x45_PMAG_QP", 6},
            {"CUP_30Rnd_556x45_PMAG_QP_Tracer_Red", 2}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
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
        primaryWeapon = "CUP_arifle_HK416_AGL_Black";
        primaryWeaponItems[] = {"CUP_optic_CompM4", "CUP_acc_Flashlight"};
        handgunWeapon = "CUP_hgun_Glock17_blk";
        vestMagazines[] = {
            {"CUP_30Rnd_556x45_PMAG_QP", 6},
            {"CUP_1Rnd_HE_M203", 4},
            {"CUP_1Rnd_Smoke_M203", 2},
            {"CUP_1Rnd_SmokeRed_M203", 2},
            {"CUP_30Rnd_556x45_PMAG_QP_Tracer_Red", 2}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_30Rnd_556x45_PMAG_QP", 4},
            {"CUP_30Rnd_556x45_PMAG_QP_Tracer_Red", 2},
            {"CUP_1Rnd_Smoke_M203", 2},
            {"CUP_1Rnd_SmokeRed_M203", 2},
            {"CUP_FlareWhite_M203", 2},
            {"CUP_17Rnd_9x19_glock17", 3}
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
            {"CUP_1Rnd_SmokeRed_M203", 8},
            {"CUP_17Rnd_9x19_glock17", 3}
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
        primaryWeapon = "CUP_lmg_minimi";
        primaryWeaponItems[] = {};
        vestMagazines[] = {{"CUP_200Rnd_TE4_Red_Tracer_556x45_M249", 2}};
        backpackMagazines[] = {{"CUP_200Rnd_TE4_Red_Tracer_556x45_M249", 4}};
    };

    class AAR : Rifleman {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249", 4}
        };
        binocular = "Binocular";
    };

    class RAT : Rifleman {
        secondaryWeapon = "CUP_launch_M72A6";
        vestMagazines[] = {
            {"CUP_30Rnd_556x45_PMAG_QP", 6},
            {"CUP_30Rnd_556x45_PMAG_QP_Tracer_Red", 2}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_30Rnd_556x45_PMAG_QP", 4},
            {"CUP_30Rnd_556x45_PMAG_QP_Tracer_Red", 2}
        };
    };

    class MMGG : Rifleman {
        primaryWeapon = "CUP_lmg_MG3";
        primaryWeaponItems[] = {};
        vestMagazines[] = {{"CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 2}};
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 4}
        };
    };

    class MMGAG : Rifleman {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 4}
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
        secondaryWeapon = "launch_MRAWS_green_rail_F";
        secondaryWeaponItems[] = {"MRAWS_HEAT_F"};
        backpackMagazines[] = {
            {"MRAWS_HEAT_F", 4},
            {"MRAWS_HE_F", 2}
        };
    };

    class MATAG : Rifleman {
        backpackMagazines[] = {
            {"MRAWS_HEAT_F", 4},
            {"MRAWS_HE_F", 2}
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
        secondaryWeapon = "CUP_launch_Javelin";
        secondaryWeaponItems[] = {"CUP_Javelin_M"};
        backpackMagazines[] = {{"CUP_Javelin_M", 1}};
    };

    class HATAG : MATAG {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"CUP_Javelin_M", 1}
        };
    };

    class HATAC : HATAG {
        primaryWeapon = "CUP_smg_MP7";
        primaryWeaponItems[] = {"CUP_optic_MicroT1_low", "CUP_acc_Flashlight"};
        vestMagazines[] = {
            {"CUP_40Rnd_46x30_MP7", 6},
            {"CUP_40Rnd_46x30_MP7_Red_Tracer", 2}
        };
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

    class DHATAG : HMGAG {
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

    class MTRAG : HMGAG {
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
        primaryWeapon = "CUP_srifle_AWM_blk";
        handgunWeapon = "CUP_hgun_Glock17_blk";
        primaryWeaponItems[] = {"CUP_optic_LeupoldMk4", "CUP_bipod_VLTOR_Modpod_black"};
        vestMagazines[] = {
            {"CUP_5Rnd_86x70_L115A1", 4},
            {"CUP_17Rnd_9x19_glock17", 3}
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
        primaryWeapon = "CUP_arifle_HK416_CQB_Black";
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
            {"CUP_launch_M72A6", 4}
        };
        magazines[] = {
            {"CUP_30Rnd_556x45_PMAG_QP_Tracer_Red", 10},
            {"CUP_30Rnd_556x45_PMAG_QP", 20},
            {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249", 10},
            {"CUP_40Rnd_46x30_MP7_Red_Tracer", 10},
            {"CUP_40Rnd_46x30_MP7", 10},
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
            {"CUP_launch_M72A6", 10}
        };
        magazines[] = {
            {"CUP_30Rnd_556x45_PMAG_QP_Tracer_Red", 20},
            {"CUP_30Rnd_556x45_PMAG_QP", 40},
            {"CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 10},
            {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249", 20},
            {"CUP_40Rnd_46x30_MP7_Red_Tracer", 20},
            {"CUP_40Rnd_46x30_MP7", 20},
            {"CUP_1Rnd_Smoke_M203", 10},
            {"CUP_FlareWhite_M203", 10},
            {"MRAWS_HEAT_F", 5},
            {"CUP_Javelin_M", 5},
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

    class Armored : Truck {
        weapons[] = {{"CUP_launch_M72A6", 10}};
        magazines[] = {
            {"CUP_30Rnd_556x45_PMAG_QP_Tracer_Red", 20},
            {"CUP_30Rnd_556x45_PMAG_QP", 40},
            {"CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 10},
            {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249", 20},
            {"CUP_40Rnd_46x30_MP7_Red_Tracer", 20},
            {"CUP_40Rnd_46x30_MP7", 20},
            {"CUP_1Rnd_Smoke_M203", 10},
            {"CUP_FlareWhite_M203", 10},
            {"MRAWS_HEAT_F", 5},
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
