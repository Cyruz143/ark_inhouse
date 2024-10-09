class AK105_CDF {
    class Rifleman {
        primaryWeapon = "CUP_arifle_AK105_railed";
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
            {"CUP_30Rnd_545x39_AK74M_M", 4},
            {"CUP_30Rnd_TE1_Red_Tracer_545x39_AK74M_M", 2}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_30Rnd_545x39_AK74M_M", 6},
            {"CUP_30Rnd_TE1_Red_Tracer_545x39_AK74M_M", 2}
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
        primaryWeapon = "CUP_arifle_AK74M_GL_railed";
        primaryWeaponItems[] = {"CUP_optic_ZDDot", "CUP_acc_Flashlight"};
        handgunWeapon = "CUP_hgun_PMM";
        vestMagazines[] = {
            {"CUP_30Rnd_545x39_AK74M_M", 4},
            {"CUP_1Rnd_HE_GP25_M", 4},
            {"CUP_1Rnd_SMOKE_GP25_M", 2},
            {"CUP_1Rnd_SmokeRed_GP25_M", 2},
            {"CUP_30Rnd_TE1_Red_Tracer_545x39_AK74M_M", 2},
            {"CUP_12Rnd_9x18_PMM_M", 3}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_30Rnd_545x39_AK74M_M", 6},
            {"CUP_30Rnd_TE1_Red_Tracer_545x39_AK74M_M", 2},
            {"CUP_1Rnd_SMOKE_GP25_M", 2},
            {"CUP_1Rnd_SmokeRed_GP25_M", 2},
            {"CUP_IlumFlareWhite_GP25_M", 2}
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
        primaryWeapon = "CUP_arifle_AKS74U_railed";
        primaryWeaponItems[] = {"CUP_optic_MRad", "CUP_acc_Flashlight"};
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        vestMagazines[] = {{"CUP_30Rnd_545x39_AK74M_M", 4}};
        backpackMagazines[] = {};
        assignItems[] = {"ItemGPS", "ACE_NVG_Wide"};
    };

    class CO : Officer {
    };

    class XO : CO {
        backpackMagazines[] = {
            {"CUP_1Rnd_SMOKE_GP25_M", 8},
            {"CUP_1Rnd_SmokeRed_GP25_M", 8}
        };
        backpackRadios[] = {"ACRE_PRC117F"};
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        primaryWeapon = "CUP_arifle_AKS74U_railed";
        vestMagazines[] = {
            {"CUP_30Rnd_545x39_AK74M_M", 6},
            {"CUP_30Rnd_TE1_Red_Tracer_545x39_AK74M_M", 2},
            {"SmokeShell", 4}
        };
        backpackMagazines[] = {
            {"SmokeShellBlue", 4},
            {"CUP_30Rnd_545x39_AK74M_M", 2}
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
        primaryWeapon = "CUP_arifle_RPK74M_railed";
        primaryWeaponItems[] = {"CUP_optic_ZDDot", "CUP_acc_Flashlight"};
        vestMagazines[] = {{"CUP_60Rnd_TE1_Red_Tracer_545x39_AK74M_M", 1}};
        backpackMagazines[] = {{"CUP_60Rnd_TE1_Red_Tracer_545x39_AK74M_M", 4}};
    };

    class AAR : Rifleman {
        vestMagazines[] = {
            {"CUP_30Rnd_545x39_AK74M_M", 6},
            {"CUP_30Rnd_TE1_Red_Tracer_545x39_AK74M_M", 4}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_60Rnd_TE1_Red_Tracer_545x39_AK74M_M", 4}
        };
        binocular = "Binocular";
    };

    class RAT : Rifleman {
        primaryWeapon = "CUP_arifle_AKS74U_railed";
        secondaryWeapon = "CUP_launch_HCPF3";
        vestMagazines[] = {
            {"CUP_30Rnd_545x39_AK74M_M", 6},
            {"CUP_30Rnd_TE1_Red_Tracer_545x39_AK74M_M", 2}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_30Rnd_545x39_AK74M_M", 4},
            {"CUP_30Rnd_TE1_Red_Tracer_545x39_AK74M_M", 2}
        };
    };

    class MMGG : Rifleman {
        primaryWeapon = "CUP_lmg_Pecheneg_top_rail_B50_vfg";
        primaryWeaponItems[] = {"CUP_optic_ZDDot", "CUP_acc_Flashlight"};
        vestMagazines[] = {{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M", 1}};
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M", 4}
        };
    };

    class MMGAG : Rifleman {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M", 4}
        };
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
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
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
    };

    class HMGAC : Rifleman {
    };

    class MATG : RAT {
        primaryWeapon = "CUP_arifle_AKS74U_railed";
        secondaryWeapon = "CUP_launch_PzF3";
        backpackMagazines[] = {};
        backpackItems[] = {
            {"CUP_launch_PzF3", 1},
            {"CUP_launch_BF3", 1}
        };
    };

    class MATAG : Rifleman {
        secondaryWeapon = "CUP_launch_PzF3";
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
        secondaryWeapon = "CUP_launch_Javelin";
        secondaryWeaponItems[] = {"CUP_Javelin_M"};
        backpackMagazines[] = {{"CUP_Javelin_M", 1}};
        backpackItems[] = {};
    };

    class HATAG : MATAG {
        backpackMagazines[] = {{"CUP_Javelin_M", 1}};
        backpackItems[] = {};
    };

    class HATAC : HATAG {
        assignItems[] = {};
        binocular = "Binocular";
        uniformRadios[] = {"ACRE_PRC343"};
        backpackItems[] = {};
    };

    class DHATG : Rifleman {
        backpack = "CUP_B_Metis_Gun_Bag";
        backpackMagazines[] = {};
        backpackMedicalItems[] = {};
    };

    class DHATAG : HMGG {
        backpack = "CUP_B_Metis_Tripod_Bag";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
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
        backpack = "CUP_B_AGS30_Gun_Bag";
        backpackMagazines[] = {};
        backpackMedicalItems[] = {};
    };

    class GMGAG : HMGG {
        backpack = "CUP_B_AGS30_Tripod_Bag";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
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
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
    };

    class MTRAC : Rifleman {
    };

    class ENG : Rifleman {
        primaryWeapon = "CUP_arifle_AKS74U_railed";
        vestMagazines[] = {
            {"CUP_30Rnd_545x39_AK74M_M", 6},
            {"CUP_30Rnd_TE1_Red_Tracer_545x39_AK74M_M", 2}
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
        weapons[] = {{"CUP_launch_HCPF3", 4}};
        magazines[] = {
            {"CUP_30Rnd_545x39_AK74M_M", 20},
            {"CUP_30Rnd_TE1_Red_Tracer_545x39_AK74M_M", 10},
            {"CUP_60Rnd_TE1_Red_Tracer_545x39_AK74M_M", 10},
            {"CUP_1Rnd_SMOKE_GP25_M", 5},
            {"CUP_IlumFlareWhite_GP25_M", 5},
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
            {"CUP_30Rnd_545x39_AK74M_M", 40},
            {"CUP_30Rnd_TE1_Red_Tracer_545x39_AK74M_M", 20},
            {"CUP_60Rnd_TE1_Red_Tracer_545x39_AK74M_M", 30},
            {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M", 10},
            {"CUP_1Rnd_SMOKE_GP25_M", 10},
            {"CUP_IlumFlareWhite_GP25_M", 10},
            {"SatchelCharge_Remote_Mag", 5},
            {"ACE_HandFlare_White", 10},
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
        weapons[] = {
            {"CUP_launch_HCPF3", 10},
            {"CUP_launch_PzF3", 5}
        };
        magazines[] = {
            {"CUP_30Rnd_545x39_AK74M_M", 40},
            {"CUP_30Rnd_TE1_Red_Tracer_545x39_AK74M_M", 20},
            {"CUP_60Rnd_TE1_Red_Tracer_545x39_AK74M_M", 30},
            {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M", 10},
            {"CUP_1Rnd_SMOKE_GP25_M", 10},
            {"CUP_IlumFlareWhite_GP25_M", 10},
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
