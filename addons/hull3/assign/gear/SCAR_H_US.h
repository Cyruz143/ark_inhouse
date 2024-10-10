class SCAR_H_US {
    class Rifleman {
        primaryWeapon = "CUP_arifle_Mk17_STD";
        primaryWeaponItems[] = {"CUP_optic_Eotech553_Black", "CUP_acc_Flashlight_tan"};
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
            {"CUP_20Rnd_762x51_B_SCAR", 6},
            {"CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR", 2}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_20Rnd_762x51_B_SCAR", 4},
            {"CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR", 2}
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
        primaryWeapon = "CUP_arifle_Mk17_STD_EGLM";
        primaryWeaponItems[] = {"CUP_optic_Eotech553_Black", "CUP_acc_Flashlight_tan"};
        handgunWeapon = "CUP_hgun_M9";
        vestMagazines[] = {
            {"CUP_20Rnd_762x51_B_SCAR", 4},
            {"CUP_1Rnd_HE_M203", 4},
            {"CUP_1Rnd_Smoke_M203", 2},
            {"CUP_1Rnd_SmokeRed_M203", 2},
            {"CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR", 2},
            {"CUP_15Rnd_9x19_M9", 3}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_20Rnd_762x51_B_SCAR", 6},
            {"CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR", 2},
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
        primaryWeapon = "CUP_arifle_Mk17_CQC";
        primaryWeaponItems[] = {};
        uniformMagazines[] = {
            {"ACE_Chemlight_HiRed", 2},
            {"SmokeShell", 1}
        };
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        vestMagazines[] = {{"CUP_20Rnd_762x51_B_SCAR", 4}};
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
        primaryWeapon = "CUP_arifle_Mk17_CQC_FG";
        primaryWeaponItems[] = {"CUP_optic_CompM2_low", "CUP_acc_Flashlight_tan"};
        vestMagazines[] = {
            {"CUP_20Rnd_762x51_B_SCAR", 6},
            {"CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR", 2},
            {"SmokeShell", 4}
        };
        backpackMagazines[] = {
            {"SmokeShellBlue", 4},
            {"CUP_20Rnd_762x51_B_SCAR", 2}
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
        primaryWeapon = "CUP_lmg_Mk48_des";
        primaryWeaponItems[] = {};
        vestMagazines[] = {{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 1}};
        backpackMagazines[] = {{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 3}};
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
        primaryWeapon = "CUP_arifle_Mk17_CQC_FG";
        primaryWeaponItems[] = {"CUP_optic_CompM2_low", "CUP_acc_Flashlight_tan"};
        secondaryWeapon = "CUP_launch_M136";
        vestMagazines[] = {
            {"CUP_20Rnd_762x51_B_SCAR", 6},
            {"CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR", 2}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_20Rnd_762x51_B_SCAR", 4},
            {"CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR", 2}
        };
    };

    class MMGG : Rifleman {
        primaryWeapon = "CUP_lmg_M240_B";
        primaryWeaponItems[] = {};
        vestMagazines[] = {{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 1}};
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 4}
        };
    };

    class MMGAG : Rifleman {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 4}
        };
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class HMGG : Rifleman {
        primaryWeapon = "CUP_arifle_Mk17_CQC_FG";
        backpack = "CUP_B_M2_Gun_Bag";
        backpackMagazines[] = {};
        backpackMedicalItems[] = {};
    };

    class HMGAG : HMGG {
        primaryWeapon = "CUP_arifle_Mk17_CQC_FG";
        backpack = "CUP_B_M2_MiniTripod_Bag";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
    };

    class HMGAC : Rifleman {
    };

    class MATG : RAT {
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
        assignItems[] = {};
        binocular = "Binocular";
        uniformRadios[] = {"ACRE_PRC343"};
    };

    class HATG : MATG {
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
        assignItems[] = {};
        binocular = "Binocular";
        uniformRadios[] = {"ACRE_PRC343"};
    };

    class DHATG : Rifleman {
        primaryWeapon = "CUP_arifle_Mk17_CQC_FG";
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
        primaryWeapon = "CUP_arifle_Mk17_CQC_FG";
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
        uniformRadios[] = {"ACRE_PRC343"};
        binocular = "Binocular";
        assignItems[] = {};
    };

    class GMGG : Rifleman {
        primaryWeapon = "CUP_arifle_Mk17_CQC_FG";
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
        primaryWeapon = "CUP_arifle_Mk17_CQC_FG";
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
        primaryWeapon = "CUP_arifle_Mk17_CQC_FG";
        primaryWeaponItems[] = {"CUP_optic_CompM2_low", "CUP_acc_Flashlight_tan"};
        vestMagazines[] = {
            {"CUP_20Rnd_762x51_B_SCAR", 6},
            {"CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR", 2}
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
        primaryWeapon = "srifle_EBR_F";
        handgunWeapon = "CUP_hgun_M9";
        primaryWeaponItems[] = {"optic_Hamr", "CUP_acc_Flashlight_tan", "bipod_02_F_blk"};
        vestMagazines[] = {
            {"20Rnd_762x51_Mag", 4},
            {"CUP_15Rnd_9x19_M9", 3}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"20Rnd_762x51_Mag", 3}
        };
        assignItems[] = {"ItemGPS"};
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class SP : Rifleman {
        vestMagazines[] = {
            {"CUP_20Rnd_762x51_B_SCAR", 4},
            {"CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR", 1}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_20Rnd_762x51_B_SCAR", 4},
            {"CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR", 3}
        };
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
            {"CUP_launch_M136", 4}
        };
        magazines[] = {
            {"CUP_20Rnd_762x51_B_SCAR", 20},
            {"CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR", 10},
            {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 10},
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
            {"CUP_launch_M136", 10}
        };
        magazines[] = {
            {"CUP_20Rnd_762x51_B_SCAR", 40},
            {"CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR", 20},
            {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 20},
            {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 10},
            {"CUP_1Rnd_Smoke_M203", 10},
            {"CUP_FlareWhite_M203", 10},
            {"SatchelCharge_Remote_Mag", 5},
            {"MRAWS_HEAT_F", 5},
            {"CUP_Javelin_M", 5},
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
        weapons[] = {{"CUP_launch_M136", 10}};
        magazines[] = {
            {"CUP_20Rnd_762x51_B_SCAR", 40},
            {"CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR", 20},
            {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 20},
            {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 10},
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
