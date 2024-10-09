class AKM_PRL {
    class Rifleman {
        primaryWeapon = "gm_akmn_wud";
        primaryWeaponItems[] = {};
        secondaryWeapon = "";
        secondaryWeaponItems[] = {};
        handgunWeapon = "";
        handgunItems[] = {};
        uniformWeapons[] = {};
        vestWeapons[] = {};
        backpackWeapons[] = {};
        uniformMagazines[] = {
            {"ACE_HandFlare_Red", 2},
            {"SmokeShell", 1}
        };
        vestMagazines[] = {
            {"gm_30Rnd_762x39mm_B_M43_ak47_blk", 6},
            {"gm_30Rnd_762x39mm_B_T_57N231P_ak47_blk", 2}
        };
        backpackMagazines[] = {
            {"HandGrenade", 2},
            {"SmokeShell", 1},
            {"gm_30Rnd_762x39mm_B_M43_ak47_blk", 4},
            {"gm_30Rnd_762x39mm_B_T_57N231P_ak47_blk", 2}
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
        handgunWeapon = "gm_pm_blk";
        vestMagazines[] = {
            {"gm_30Rnd_762x39mm_B_M43_ak47_blk", 6},
            {"gm_30Rnd_762x39mm_B_T_57N231P_ak47_blk", 2},
            {"gm_8Rnd_9x18mm_B_pst_pm_blk", 3}
        };
        backpackMagazines[] = {
            {"HandGrenade", 2},
            {"SmokeShell", 1},
            {"gm_30Rnd_762x39mm_B_M43_ak47_blk", 4},
            {"gm_30Rnd_762x39mm_B_T_57N231P_ak47_blk", 2}
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
        primaryWeapon = "gm_pm63_blk";
        uniformMagazines[] = {
            {"ACE_HandFlare_Red", 2},
            {"SmokeShell", 1}
        };
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        vestMagazines[] = {{"gm_25Rnd_9x18mm_B_pst_pm63_blk", 4}};
        backpackMagazines[] = {};
        assignItems[] = {};
    };

    class CO : Officer {
    };

    class XO : CO {
        backpackRadios[] = {"ACRE_PRC117F"};
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        vestMagazines[] = {
            {"gm_30Rnd_762x39mm_B_M43_ak47_blk", 6},
            {"gm_30Rnd_762x39mm_B_T_57N231P_ak47_blk", 2},
            {"SmokeShell", 4}
        };
        backpackMagazines[] = {
            {"SmokeShellBlue", 4},
            {"gm_30Rnd_762x39mm_B_M43_ak47_blk", 2}
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
        primaryWeapon = "gm_rpk_wud";
        vestMagazines[] = {{"gm_75Rnd_762x39mm_B_M43_ak47_blk", 2}};
        backpackMagazines[] = {
            {"HandGrenade", 2},
            {"SmokeShell", 1},
            {"gm_75Rnd_762x39mm_B_M43_ak47_blk", 4}
        };
    };

    class AAR : Rifleman {
        backpackMagazines[] = {
            {"HandGrenade", 2},
            {"SmokeShell", 1},
            {"gm_75Rnd_762x39mm_B_M43_ak47_blk", 4}
        };
        binocular = "gm_df7x40_blk";
    };

    class RAT : Rifleman {
        secondaryWeapon = "CUP_launch_RPG7V";
        secondaryWeaponItems[] = {"CUP_PG7VL_M"};
        vestMagazines[] = {
            {"gm_30Rnd_762x39mm_B_M43_ak47_blk", 6},
            {"gm_30Rnd_762x39mm_B_T_57N231P_ak47_blk", 2}
        };
        backpackMagazines[] = {
            {"HandGrenade", 2},
            {"SmokeShell", 1},
            {"gm_30Rnd_762x39mm_B_M43_ak47_blk", 4},
            {"gm_30Rnd_762x39mm_B_T_57N231P_ak47_blk", 2},
            {"CUP_PG7VM_M", 2}
        };
    };

    class MMGG : Rifleman {
        primaryWeapon = "gm_hmgpkm_prp";
        vestMagazines[] = {{"gm_100Rnd_762x54mm_B_T_t46_pk_grn", 1}};
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"gm_100Rnd_762x54mm_B_T_t46_pk_grn", 3}
        };
    };

    class MMGAG : Rifleman {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"gm_30Rnd_762x39mm_B_T_57N231P_ak47_blk", 2},
            {"gm_100Rnd_762x54mm_B_T_t46_pk_grn", 3}
        };
        uniformMagazines[] = {
            {"ACE_HandFlare_Red", 2},
            {"SmokeShell", 1}
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
        uniformMagazines[] = {
            {"ACE_HandFlare_Red", 2},
            {"SmokeShell", 1}
        };
        binocular = "gm_df7x40_blk";
        assignItems[] = {};
    };

    class HMGAC : Rifleman {
    };

    class MATG : RAT {
        secondaryWeapon = "CUP_launch_RPG7V";
        secondaryWeaponItems[] = {"CUP_optic_PGO7V", "CUP_PG7VL_M"};
        backpackMagazines[] = {
            {"CUP_PG7VL_M", 2},
            {"CUP_PG7VR_M", 1}
        };
    };

    class MATAG : Rifleman {
        backpackMagazines[] = {
            {"CUP_PG7VL_M", 2},
            {"CUP_PG7VR_M", 1}
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
        secondaryWeapon = "";
        secondaryWeaponItems[] = {};
        backpackMagazines[] = {};
        backpack = "gm_fagot_launcher_weaponBag";
    };

    class HATAG : MATAG {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"gm_30Rnd_762x39mm_B_T_57N231P_ak47_blk", 2}
        };
        uniformMagazines[] = {
            {"ACE_HandFlare_Red", 2},
            {"SmokeShell", 1}
        };
    };

    class HATAC : Rifleman {
        uniformRadios[] = {"ACRE_PRC343"};
        assignItems[] = {};
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
            {"ACE_HandFlare_Red", 2},
            {"SmokeShell", 1}
        };
        binocular = "gm_df7x40_blk";
        assignItems[] = {};
    };

    class DHATAC : Rifleman {
    };

    class SAMG : Rifleman {
        secondaryWeapon = "gm_9k32m_oli";
        secondaryWeaponItems[] = {"gm_1Rnd_72mm_he_9m32m"};
        backpackMagazines[] = {{"gm_1Rnd_72mm_he_9m32m", 2}};
    };

    class SAMAG : Rifleman {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"gm_30Rnd_762x39mm_B_T_57N231P_ak47_blk", 2},
            {"gm_1Rnd_72mm_he_9m32m", 2}
        };
        uniformMagazines[] = {
            {"ACE_HandFlare_Red", 2},
            {"SmokeShell", 1}
        };
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        binocular = "gm_df7x40_blk";
        assignItems[] = {};
    };

    class SAMAC : SAMAG {
        uniformRadios[] = {"ACRE_PRC343"};
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
            {"ACE_HandFlare_Red", 2},
            {"SmokeShell", 1}
        };
        binocular = "gm_df7x40_blk";
        assignItems[] = {};
    };

    class GMGAC : Rifleman {
    };

    class MTRG : Rifleman {
        backpack = "CUP_B_Podnos_Gun_Bag";
        backpackMagazines[] = {};
        backpackMedicalItems[] = {};
    };

    class MTRAG : MTRG {
        backpack = "CUP_B_Podnos_Bipod_Bag";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        uniformMagazines[] = {
            {"ACE_HandFlare_Red", 2},
            {"SmokeShell", 1}
        };
        binocular = "gm_df7x40_blk";
        assignItems[] = {};
    };

    class MTRAC : Rifleman {
    };

    class ENG : Rifleman {
        vestMagazines[] = {
            {"gm_30Rnd_762x39mm_B_M43_ak47_blk", 6},
            {"gm_30Rnd_762x39mm_B_T_57N231P_ak47_blk", 2}
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
        primaryWeapon = "gm_svd_wud";
        handgunWeapon = "gm_pm_blk";
        primaryWeaponItems[] = {"gm_pso1_gry"};
        uniformMagazines[] = {
            {"ACE_HandFlare_Red", 2},
            {"SmokeShell", 1}
        };
        vestMagazines[] = {
            {"gm_10Rnd_762x54mmR_AP_7N1_svd_blk", 4},
            {"gm_8Rnd_9x18mm_B_pst_pm_blk", 3}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"gm_10Rnd_762x54mmR_AP_7N1_svd_blk", 3}
        };
        assignItems[] = {};
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class SP : Rifleman {
        binocular = "gm_df7x40_blk";
    };

    class VC : Crew {
        binocular = "gm_df7x40_blk";
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
        weapons[] = {{"CUP_launch_RPG26", 2}};
        magazines[] = {
            {"gm_30Rnd_762x39mm_B_M43_ak47_blk", 20},
            {"gm_30Rnd_762x39mm_B_T_57N231P_ak47_blk", 10},
            {"gm_75Rnd_762x39mm_B_M43_ak47_blk", 10},
            {"CUP_PG7VL_M", 2},
            {"ACE_HandFlare_White", 15},
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
        weapons[] = {{"CUP_launch_RPG26", 10}};
        magazines[] = {
            {"gm_30Rnd_762x39mm_B_M43_ak47_blk", 40},
            {"gm_30Rnd_762x39mm_B_T_57N231P_ak47_blk", 20},
            {"gm_75Rnd_762x39mm_B_M43_ak47_blk", 20},
            {"gm_100Rnd_762x54mm_B_T_t46_pk_grn", 10},
            {"CUP_PG7VL_M", 12},
            {"SatchelCharge_Remote_Mag", 5},
            {"ACE_HandFlare_White", 15},
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
        weapons[] = {{"CUP_launch_RPG26", 10}};
        magazines[] = {
            {"gm_30Rnd_762x39mm_B_M43_ak47_blk", 40},
            {"gm_30Rnd_762x39mm_B_T_57N231P_ak47_blk", 20},
            {"gm_75Rnd_762x39mm_B_M43_ak47_blk", 20},
            {"gm_100Rnd_762x54mm_B_T_t46_pk_grn", 10},
            {"CUP_PG7VL_M", 12},
            {"SatchelCharge_Remote_Mag", 5},
            {"ACE_HandFlare_White", 15},
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
