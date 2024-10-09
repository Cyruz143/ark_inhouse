class AKS74_RU {
    class Rifleman {
        primaryWeapon = "CUP_arifle_AKS74";
        primaryWeaponItems[] = {"CUP_acc_Flashlight"};
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
            {"CUP_30Rnd_545x39_AK74_plum_M", 6},
            {"CUP_30Rnd_TE1_Green_Tracer_545x39_AK74_plum_M", 2}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_30Rnd_545x39_AK74_plum_M", 4},
            {"CUP_30Rnd_TE1_Green_Tracer_545x39_AK74_plum_M", 2}
        };
        basicAssignItems[] = {"ItemMap", "gm_gc_compass_f73", "gm_watch_kosei_80"};
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
        primaryWeapon = "CUP_arifle_AKS74_GL";
        primaryWeaponItems[] = {"CUP_acc_Flashlight"};
        handgunWeapon = "CUP_hgun_Makarov";
        vestMagazines[] = {
            {"CUP_30Rnd_545x39_AK74_plum_M", 4},
            {"CUP_1Rnd_HE_GP25_M", 4},
            {"CUP_1Rnd_SMOKE_GP25_M", 2},
            {"CUP_1Rnd_SmokeRed_GP25_M", 2},
            {"CUP_30Rnd_TE1_Green_Tracer_545x39_AK74_plum_M", 2},
            {"CUP_8Rnd_9x18_Makarov_M", 3}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_30Rnd_545x39_AK74_plum_M", 6},
            {"CUP_30Rnd_TE1_Green_Tracer_545x39_AK74_plum_M", 2},
            {"CUP_FlareWhite_GP25_M", 2},
            {"CUP_1Rnd_SMOKE_GP25_M", 2},
            {"CUP_1Rnd_SmokeRed_GP25_M", 2}
        };
        assignItems[] = {};
        binocular = "gm_df7x40_blk";
    };

    class Officer : Leader {
        assignItems[] = {};
        binocular = "gm_df7x40_blk";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class Crew : Rifleman {
        primaryWeapon = "CUP_arifle_AKS74U";
        primaryWeaponItems[] = {};
        uniformMagazines[] = {
            {"ACE_Chemlight_HiRed", 2},
            {"SmokeShell", 1}
        };
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        vestMagazines[] = {{"CUP_30Rnd_545x39_AK74_plum_M", 4}};
        backpackMagazines[] = {};
        assignItems[] = {};
    };

    class CO : Officer {
    };

    class XO : CO {
        backpackMagazines[] = {
            {"CUP_1Rnd_SMOKE_GP25_M", 8},
            {"CUP_FlareWhite_GP25_M", 8},
            {"CUP_1Rnd_SmokeRed_GP25_M", 8}
        };
        backpackRadios[] = {"ACRE_PRC117F"};
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        vestMagazines[] = {
            {"CUP_30Rnd_545x39_AK74_plum_M", 6},
            {"CUP_30Rnd_TE1_Green_Tracer_545x39_AK74_plum_M", 2},
            {"SmokeShell", 4}
        };
        backpackMagazines[] = {
            {"SmokeShellBlue", 4},
            {"CUP_30Rnd_545x39_AK74_plum_M", 2}
        };
        assignItems[] = {};
        binocular = "gm_df7x40_blk";
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
        primaryWeapon = "CUP_arifle_RPK74_45";
        primaryWeaponItems[] = {"CUP_acc_Flashlight"};
        vestMagazines[] = {{"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M", 2}};
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M", 6}
        };
    };

    class AAR : Rifleman {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M", 4}
        };
        binocular = "gm_df7x40_blk";
    };

    class RAT : Rifleman {
        secondaryWeapon = "CUP_launch_RPG7V";
        secondaryWeaponItems[] = {"CUP_PG7VL_M"};
        vestMagazines[] = {
            {"CUP_30Rnd_545x39_AK74_plum_M", 6},
            {"CUP_30Rnd_TE1_Green_Tracer_545x39_AK74_plum_M", 2}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_30Rnd_545x39_AK74_plum_M", 4},
            {"CUP_PG7VL_M", 2}
        };
    };

    class MMGG : Rifleman {
        primaryWeapon = "CUP_lmg_PKM";
        primaryWeaponItems[] = {};
        vestMagazines[] = {{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", 1}};
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", 3}
        };
    };

    class MMGAG : Rifleman {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_30Rnd_TE1_Green_Tracer_545x39_AK74_plum_M", 2},
            {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", 3}
        };
        binocular = "gm_df7x40_blk";
        assignItems[] = {};
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class HMGG : Rifleman {
        backpack = "CUP_B_DShkM_Gun_Bag";
        backpackMagazines[] = {};
        backpackMedicalItems[] = {};
    };

    class HMGAG : HMGG {
        backpack = "CUP_B_DShkM_TripodLow_Bag";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        binocular = "gm_df7x40_blk";
        assignItems[] = {};
    };

    class HMGAC : Rifleman {
    };

    class MATG : RAT {
        secondaryWeapon = "CUP_launch_RPG7V";
        secondaryWeaponItems[] = {"CUP_PG7VL_M", "CUP_optic_PGO7V3"};
        backpackMagazines[] = {
            {"CUP_PG7VL_M", 2},
            {"CUP_PG7VR_M", 1},
            {"CUP_OG7_M", 1}
        };
    };

    class MATAG : Rifleman {
        backpackMagazines[] = {
            {"CUP_PG7VL_M", 2},
            {"CUP_PG7VR_M", 1},
            {"CUP_OG7_M", 1}
        };
        binocular = "gm_df7x40_blk";
        assignItems[] = {};
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class MATAC : MATAG {
        assignItems[] = {};
        binocular = "gm_df7x40_blk";
        uniformRadios[] = {"ACRE_PRC343"};
    };

    class HATG : MATG {
        secondaryWeapon = "CUP_launch_Metis";
        secondaryWeaponItems[] = {"CUP_AT13_M"};
        backpackMagazines[] = {{"CUP_AT13_M", 1}};
    };

    class HATAG : MATAG {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"CUP_AT13_M", 1}
        };
    };

    class HATAC : HATAG {
    };

    class DHATG : Rifleman {
        backpack = "CUP_B_SPG9_Gun_Bag";
        backpackMagazines[] = {};
        backpackMedicalItems[] = {};
    };

    class DHATAG : HMGG {
        backpack = "CUP_B_SPG9_Tripod_Bag";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        uniformMagazines[] = {
            {"ACE_Chemlight_HiRed", 2},
            {"SmokeShell", 1}
        };
        binocular = "gm_df7x40_blk";
        assignItems[] = {};
    };

    class DHATAC : Rifleman {
    };

    class SAMG : Rifleman {
        secondaryWeapon = "CUP_launch_Igla";
        secondaryWeaponItems[] = {"CUP_Igla_M"};
        backpackMagazines[] = {{"CUP_Igla_M", 1}};
    };

    class SAMAG : Rifleman {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"CUP_30Rnd_TE1_Green_Tracer_545x39_AK74_plum_M", 2},
            {"CUP_Igla_M", 1}
        };
        uniformMagazines[] = {
            {"ACE_Chemlight_HiRed", 2},
            {"SmokeShell", 1}
        };
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        binocular = "gm_df7x40_blk";
        assignItems[] = {};
    };

    class SAMAC : SAMAG {
        uniformRadios[] = {"ACRE_PRC343"};
        binocular = "gm_df7x40_blk";
        assignItems[] = {};
    };

    class GMGG : Rifleman {
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
        binocular = "gm_df7x40_blk";
        assignItems[] = {};
    };

    class GMGAC : Rifleman {
    };

    class MTRG : Rifleman {
        backpack = "CUP_B_Podnos_Bipod_Bag";
        backpackMagazines[] = {};
        backpackMedicalItems[] = {};
    };

    class MTRAG : MTRG {
        backpack = "CUP_B_Podnos_Gun_Bag";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        uniformMagazines[] = {
            {"ACE_Chemlight_HiRed", 2},
            {"SmokeShell", 1}
        };
        binocular = "gm_df7x40_blk";
        assignItems[] = {};
    };

    class MTRAC : Rifleman {
    };

    class ENG : Rifleman {
        vestMagazines[] = {
            {"CUP_30Rnd_545x39_AK74_plum_M", 6},
            {"CUP_30Rnd_TE1_Green_Tracer_545x39_AK74_plum_M", 2}
        };
        backpackMagazines[] = {
            {"DemoCharge_Remote_Mag", 3},
            {"SLAMDirectionalMine_Wire_Mag", 2}
        };
        assignItems[] = {};
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
        primaryWeapon = "CUP_srifle_SVD";
        handgunWeapon = "CUP_hgun_Makarov";
        primaryWeaponItems[] = {"CUP_optic_PSO_1"};
        vestMagazines[] = {
            {"CUP_10Rnd_762x54_SVD_M", 4},
            {"CUP_8Rnd_9x18_Makarov_M", 3}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_10Rnd_762x54_SVD_M", 3}
        };
        assignItems[] = {};
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class SP : Rifleman {
        binocular = "gm_df7x40_blk";
        vestMagazines[] = {
            {"CUP_30Rnd_545x39_AK74_plum_M", 4},
            {"CUP_30Rnd_TE1_Green_Tracer_545x39_AK74_plum_M", 2}
        };
    };

    class VC : Crew {
        binocular = "gm_df7x40_blk";
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
            {"CUP_30Rnd_545x39_AK74_plum_M", 20},
            {"CUP_30Rnd_TE1_Green_Tracer_545x39_AK74_plum_M", 10},
            {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M", 10},
            {"CUP_1Rnd_SMOKE_GP25_M", 5},
            {"ACE_HandFlare_White", 5},
            {"CUP_PG7VL_M", 2},
            {"CUP_FlareWhite_GP25_M", 5},
            {"HandGrenade", 5},
            {"SmokeShell", 5}
        };
        items[] = {};
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
            {"CUP_30Rnd_545x39_AK74_plum_M", 40},
            {"CUP_30Rnd_TE1_Green_Tracer_545x39_AK74_plum_M", 20},
            {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M", 20},
            {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", 10},
            {"CUP_1Rnd_SMOKE_GP25_M", 10},
            {"SatchelCharge_Remote_Mag", 5},
            {"ACE_HandFlare_White", 10},
            {"CUP_PG7VL_M", 12},
            {"CUP_AT13_M", 5},
            {"CUP_FlareWhite_GP25_M", 10},
            {"HandGrenade", 10},
            {"SmokeShell", 10}
        };
        items[] = {
            {"ACE_M26_Clacker", 1}
        };
        medicalItems[] = {
            {"ACE_fieldDressing", 50},
            {"ACE_splint", 12}
        };
    };

    class Armored : Truck {
        weapons[] = {{"CUP_launch_RPG26", 4}};
        magazines[] = {
            {"CUP_30Rnd_545x39_AK74_plum_M", 40},
            {"CUP_30Rnd_TE1_Green_Tracer_545x39_AK74_plum_M", 20},
            {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M", 20},
            {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", 10},
            {"CUP_1Rnd_SMOKE_GP25_M", 10},
            {"CUP_PG7VL_M", 12},
            {"CUP_FlareWhite_GP25_M", 10},
            {"SatchelCharge_Remote_Mag", 5},
            {"ACE_HandFlare_White", 10},
            {"HandGrenade", 10},
            {"SmokeShell", 10}
        };
        items[] = {
            {"ACE_M26_Clacker", 1}
        };
        medicalItems[] = {
            {"ACE_fieldDressing", 50},
            {"ACE_splint", 12}
        };
    };

};
