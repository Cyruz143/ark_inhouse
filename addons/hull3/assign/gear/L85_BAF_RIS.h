class L85_BAF_RIS {
    class Rifleman {
        primaryWeapon = "CUP_arifle_L85A2_G";
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
            {"CUP_30Rnd_556x45_Stanag_L85", 6},
            {"CUP_30Rnd_556x45_Stanag_L85_Tracer_Red", 2}
        };
        backpackMagazines[] = {
            {"HandGrenade", 2},
            {"SmokeShell", 1},
            {"CUP_30Rnd_556x45_Stanag_L85", 4},
            {"CUP_30Rnd_556x45_Stanag_L85_Tracer_Red", 2}
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
        primaryWeapon = "CUP_arifle_L85A2_GL";
        primaryWeaponItems[] = {"CUP_optic_Eotech553_Black", "CUP_acc_Flashlight"};
        handgunWeapon = "CUP_hgun_Glock17_blk";
        vestMagazines[] = {
            {"CUP_30Rnd_556x45_Stanag_L85", 6},
            {"CUP_1Rnd_HE_M203", 4},
            {"CUP_1Rnd_Smoke_M203", 2},
            {"CUP_1Rnd_SmokeRed_M203", 2},
            {"CUP_30Rnd_556x45_Stanag_L85_Tracer_Red", 2},
            {"CUP_17Rnd_9x19_glock17", 3}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_30Rnd_556x45_Stanag_L85", 4},
            {"CUP_30Rnd_556x45_Stanag_L85_Tracer_Red", 2},
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
        primaryWeaponItems[] = {};
        uniformMagazines[] = {
            {"ACE_Chemlight_HiRed", 2},
            {"SmokeShell", 1}
        };
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        vestMagazines[] = {{"CUP_30Rnd_556x45_Stanag_L85", 4}};
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
        vestMagazines[] = {
            {"CUP_30Rnd_556x45_Stanag_L85", 6},
            {"CUP_30Rnd_556x45_Stanag_L85_Tracer_Red", 2},
            {"SmokeShell", 4}
        };
        backpackMagazines[] = {
            {"SmokeShellBlue", 4},
            {"CUP_30Rnd_556x45_Stanag_L85", 2}
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
        primaryWeapon = "CUP_lmg_minimipara";
        primaryWeaponItems[] = {};
        vestMagazines[] = {{"CUP_200Rnd_TE4_Red_Tracer_556x45_M249", 1}};
        backpackMagazines[] = {
            {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249", 2},
            {"CUP_200Rnd_TE1_Red_Tracer_556x45_M249", 2}
        };
    };

    class AAR : Rifleman {
        primaryWeapon = "CUP_arifle_L86A2";
        primaryWeaponItems[] = {"CUP_optic_Eotech553_Black", "CUP_acc_Flashlight"};
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249", 1},
            {"CUP_200Rnd_TE1_Red_Tracer_556x45_M249", 2}
        };
        binocular = "Binocular";
    };

    class RAT : Rifleman {
        secondaryWeapon = "CUP_launch_NLAW";
        vestMagazines[] = {
            {"CUP_30Rnd_556x45_Stanag_L85", 6},
            {"CUP_30Rnd_556x45_Stanag_L85_Tracer_Red", 2}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_30Rnd_556x45_Stanag_L85", 4},
            {"CUP_30Rnd_556x45_Stanag_L85_Tracer_Red", 2}
        };
    };

    class MMGG : Rifleman {
        primaryWeapon = "CUP_lmg_L7A2";
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
        secondaryWeapon = "launch_MRAWS_green_rail_F";
        secondaryWeaponItems[] = {"MRAWS_HEAT_F"};
        backpackMagazines[] = {
            {"MRAWS_HEAT_F", 3},
            {"MRAWS_HE_F", 2}
        };
    };

    class MATAG : Rifleman {
        backpackMagazines[] = {
            {"MRAWS_HEAT_F", 3},
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
        vestMagazines[] = {
            {"CUP_30Rnd_556x45_Stanag_L85", 6},
            {"CUP_30Rnd_556x45_Stanag_L85_Tracer_Red", 2}
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
        primaryWeapon = "CUP_srifle_L129A1_HG";
        handgunWeapon = "CUP_hgun_Glock17";
        primaryWeaponItems[] = {"CUP_optic_ACOG_TA31_KF", "CUP_acc_Flashlight", "bipod_02_F_blk"};
        vestMagazines[] = {
            {"CUP_20Rnd_762x51_L129_M", 4},
            {"CUP_17Rnd_9x19_glock17", 3}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_20Rnd_762x51_L129_M", 3}
        };
        assignItems[] = {"ItemGPS"};
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class SP : Rifleman {
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
            {"CUP_launch_NLAW", 4}
        };
        magazines[] = {
            {"CUP_30Rnd_556x45_Stanag_L85", 20},
            {"CUP_30Rnd_556x45_Stanag_L85_Tracer_Red", 10},
            {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249", 10},
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
            {"CUP_launch_NLAW", 10}
        };
        magazines[] = {
            {"CUP_30Rnd_556x45_Stanag_L85", 20},
            {"CUP_30Rnd_556x45_Stanag_L85_Tracer_Red", 10},
            {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249", 20},
            {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 10},
            {"CUP_1Rnd_Smoke_M203", 10},
            {"CUP_FlareWhite_M203", 10},
            {"SatchelCharge_Remote_Mag", 5},
            {"ACE_HandFlare_White", 10},
            {"MRAWS_HEAT_F", 5},
            {"CUP_Javelin_M", 5},
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
        weapons[] = {{"CUP_launch_NLAW", 10}};
        magazines[] = {
            {"CUP_30Rnd_556x45_Stanag_L85", 20},
            {"CUP_30Rnd_556x45_Stanag_L85_Tracer_Red", 10},
            {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249", 20},
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
