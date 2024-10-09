class BREN805_CZ {
    class Rifleman {
        primaryWeapon = "CUP_arifle_CZ805_A1_blk";
        primaryWeaponItems[] = {"CUP_optic_ZDDot", "CUP_acc_Flashlight"};
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
            {"CUP_30Rnd_556x45_CZ805", 6},
            {"CUP_30Rnd_TE1_Red_Tracer_556x45_CZ805", 1}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_30Rnd_556x45_CZ805", 5},
            {"CUP_30Rnd_TE1_Red_Tracer_556x45_CZ805", 2}
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
        primaryWeapon = "CUP_arifle_CZ805_GL_blk";
        handgunWeapon = "CUP_hgun_CZ75";
        vestMagazines[] = {
            {"CUP_30Rnd_556x45_CZ805", 4},
            {"CUP_1Rnd_HE_M203", 4},
            {"CUP_1Rnd_Smoke_M203", 2},
            {"CUP_1Rnd_SmokeRed_M203", 2},
            {"CUP_30Rnd_TE1_Red_Tracer_556x45_CZ805", 1},
            {"CUP_16Rnd_9x19_cz75", 3}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_30Rnd_556x45_CZ805", 6},
            {"CUP_30Rnd_TE1_Red_Tracer_556x45_CZ805", 3},
            {"CUP_1Rnd_Smoke_M203", 2},
            {"CUP_FlareWhite_M203", 2},
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
        primaryWeapon = "CUP_arifle_CZ805_A2_blk";
        uniformMagazines[] = {
            {"ACE_Chemlight_HiRed", 2},
            {"SmokeShell", 1}
        };
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        vestMagazines[] = {{"CUP_30Rnd_556x45_CZ805", 4}};
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
        primaryWeapon = "CUP_arifle_CZ805_A2_blk";
        vestMagazines[] = {
            {"CUP_30Rnd_556x45_CZ805", 4},
            {"CUP_30Rnd_TE1_Red_Tracer_556x45_CZ805", 2},
            {"SmokeShell", 4}
        };
        backpackMagazines[] = {
            {"SmokeShellBlue", 4},
            {"CUP_30Rnd_556x45_CZ805", 2}
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
        vestMagazines[] = {{"CUP_200Rnd_TE1_Red_Tracer_556x45_M249", 2}};
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_200Rnd_TE1_Red_Tracer_556x45_M249", 3}
        };
    };

    class AAR : Rifleman {
        primaryWeapon = "CUP_arifle_CZ805_A2_blk";
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_200Rnd_TE1_Red_Tracer_556x45_M249", 4}
        };
        binocular = "Binocular";
    };

    class RAT : Rifleman {
        secondaryWeapon = "CUP_launch_RPG7V";
        secondaryWeaponItems[] = {"CUP_PG7VL_M"};
        vestMagazines[] = {
            {"CUP_30Rnd_556x45_CZ805", 5},
            {"CUP_30Rnd_TE1_Red_Tracer_556x45_CZ805", 2}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_30Rnd_556x45_CZ805", 4},
            {"CUP_PG7VL_M", 2}
        };
    };

    class MMGG : Rifleman {
        primaryWeapon = "CUP_lmg_M60E4_norail";
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
            {"CUP_30Rnd_TE1_Red_Tracer_556x45_CZ805", 2},
            {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 4}
        };
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class HMGG : Rifleman {
        primaryWeapon = "CUP_arifle_CZ805_A2_blk";
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
        primaryWeapon = "CUP_arifle_CZ805_A2_blk";
        secondaryWeapon = "launch_MRAWS_green_rail_F";
        secondaryWeaponItems[] = {"MRAWS_HEAT_F"};
        backpackMagazines[] = {
            {"MRAWS_HEAT_F", 2},
            {"MRAWS_HE_F", 1}
        };
    };

    class MATAG : Rifleman {
        backpackMagazines[] = {
            {"MRAWS_HEAT_F", 2},
            {"MRAWS_HE_F", 1}
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
        primaryWeapon = "CUP_arifle_CZ805_A2_blk";
        secondaryWeapon = "CUP_launch_Javelin";
        secondaryWeaponItems[] = {"CUP_Javelin_M"};
        backpackMagazines[] = {{"CUP_Javelin_M", 1}};
    };

    class HATAG : MATAG {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"CUP_Javelin_M", 1}
        };
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class HATAC : HATAG {
        assignItems[] = {};
        binocular = "Binocular";
        uniformRadios[] = {"ACRE_PRC343"};
    };

    class DHATG : Rifleman {
        primaryWeapon = "CUP_arifle_CZ805_A2_blk";
        backpack = "CUP_B_Metis_Gun_Bag";
        backpackMagazines[] = {};
        backpackMedicalItems[] = {};
    };

    class DHATAG : HMGG {
        backpack = "CUP_B_Metis_Tripod_Bag";
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
        primaryWeapon = "CUP_arifle_CZ805_A2_blk";
        secondaryWeapon = "CUP_launch_9K32Strela";
        secondaryWeaponItems[] = {"CUP_Strela_2_M"};
        backpackMagazines[] = {{"CUP_Strela_2_M", 1}};
    };

    class SAMAG : Rifleman {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"CUP_Strela_2_M", 1}
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
        primaryWeapon = "CUP_arifle_CZ805_A2_blk";
        backpack = "CUP_B_AGS30_Gun_Bag";
        backpackMagazines[] = {};
        backpackMedicalItems[] = {};
    };

    class GMGAG : HMGG {
        backpack = "CUP_B_AGS30_Tripod_Bag";
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
        primaryWeapon = "CUP_arifle_CZ805_A2_blk";
        backpack = "CUP_B_Podnos_Gun_Bag";
        backpackMagazines[] = {};
        backpackMedicalItems[] = {};
    };

    class MTRAG : MTRG {
        backpack = "CUP_B_Podnos_Bipod_Bag";
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
        primaryWeapon = "CUP_arifle_CZ805_A2_blk";
        vestMagazines[] = {
            {"CUP_30Rnd_556x45_CZ805", 4},
            {"CUP_30Rnd_TE1_Red_Tracer_556x45_CZ805", 2}
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
        primaryWeapon = "CUP_srifle_CZ750";
        handgunWeapon = "CUP_hgun_CZ75";
        primaryWeaponItems[] = {"CUP_optic_LeupoldMk4", "CUP_bipod_VLTOR_Modpod_black"};
        vestMagazines[] = {
            {"CUP_10Rnd_762x51_CZ750", 4},
            {"CUP_16Rnd_9x19_cz75", 3}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_10Rnd_762x51_CZ750", 3}
        };
        assignItems[] = {"ItemGPS"};
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class SP : Rifleman {
        binocular = "ACE_VectorDay";
        vestMagazines[] = {
            {"CUP_30Rnd_556x45_CZ805", 4},
            {"CUP_30Rnd_TE1_Red_Tracer_556x45_CZ805", 2}
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
            {"CUP_launch_RPG26", 2}
        };
        magazines[] = {
            {"CUP_30Rnd_556x45_CZ805", 20},
            {"CUP_30Rnd_TE1_Red_Tracer_556x45_CZ805", 10},
            {"CUP_200Rnd_TE1_Red_Tracer_556x45_M249", 10},
            {"CUP_1Rnd_Smoke_M203", 5},
            {"ACE_HandFlare_White", 5},
            {"CUP_FlareWhite_M203", 5},
            {"HandGrenade", 5},
            {"CUP_PG7VL_M", 2},
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
            {"CUP_launch_RPG26", 4}
        };
        magazines[] = {
            {"CUP_30Rnd_556x45_CZ805", 40},
            {"CUP_30Rnd_TE1_Red_Tracer_556x45_CZ805", 20},
            {"CUP_200Rnd_TE1_Red_Tracer_556x45_M249", 20},
            {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 10},
            {"CUP_1Rnd_Smoke_M203", 10},
            {"SatchelCharge_Remote_Mag", 5},
            {"CUP_PG7VL_M", 6},
            {"MRAWS_HEAT_F", 5},
            {"CUP_Javelin_M", 5},
            {"ACE_HandFlare_White", 10},
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
        weapons[] = {{"CUP_launch_RPG26", 4}};
        magazines[] = {
            {"CUP_30Rnd_556x45_CZ805", 40},
            {"CUP_30Rnd_TE1_Red_Tracer_556x45_CZ805", 20},
            {"CUP_200Rnd_TE1_Red_Tracer_556x45_M249", 20},
            {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 10},
            {"CUP_1Rnd_Smoke_M203", 10},
            {"CUP_PG7VL_M", 6},
            {"MRAWS_HEAT_F", 5},
            {"SatchelCharge_Remote_Mag", 5},
            {"ACE_HandFlare_White", 10},
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

};
