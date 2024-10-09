class Katiba_CSAT {
    class Rifleman {
        primaryWeapon = "arifle_Katiba_F";
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
            {"30Rnd_65x39_caseless_green", 6},
            {"30Rnd_65x39_caseless_green_mag_Tracer", 2}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"30Rnd_65x39_caseless_green", 4},
            {"30Rnd_65x39_caseless_green_mag_Tracer", 2}
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
        primaryWeapon = "arifle_Katiba_GL_F";
        handgunWeapon = "hgun_Rook40_F";
        uniformMagazines[] = {
            {"ACE_Chemlight_HiRed", 2},
            {"SmokeShell", 1}
        };
        vestMagazines[] = {
            {"30Rnd_65x39_caseless_green", 6},
            {"1Rnd_HE_Grenade_shell", 4},
            {"1Rnd_Smoke_Grenade_shell", 2},
            {"1Rnd_SmokeRed_Grenade_shell", 2},
            {"30Rnd_65x39_caseless_green_mag_Tracer", 2},
            {"16Rnd_9x21_Mag", 3}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"30Rnd_65x39_caseless_green", 4},
            {"30Rnd_65x39_caseless_green_mag_Tracer", 2},
            {"1Rnd_Smoke_Grenade_shell", 2},
            {"1Rnd_SmokeRed_Grenade_shell", 2},
            {"UGL_FlareWhite_F", 2}
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
        primaryWeapon = "SMG_02_F";
        primaryWeaponItems[] = {"CUP_acc_Flashlight"};
        uniformMagazines[] = {
            {"ACE_Chemlight_HiRed", 2},
            {"SmokeShell", 1}
        };
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        assignItems[] = {"ItemGPS", "ACE_NVG_Wide"};
        vestMagazines[] = {{"30Rnd_9x21_Mag", 4}};
        backpackMagazines[] = {};
    };

    class CO : Officer {
    };

    class XO : CO {
        backpackMagazines[] = {
            {"1Rnd_Smoke_Grenade_shell", 8},
            {"1Rnd_SmokeRed_Grenade_shell", 8}
        };
        backpackRadios[] = {"ACRE_PRC117F"};
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        primaryWeapon = "arifle_Katiba_C_F";
        uniformMagazines[] = {
            {"ACE_Chemlight_HiRed", 2},
            {"SmokeShell", 1}
        };
        vestMagazines[] = {
            {"30Rnd_65x39_caseless_green", 6},
            {"30Rnd_65x39_caseless_green_mag_Tracer", 2},
            {"SmokeShell", 4}
        };
        backpackMagazines[] = {
            {"SmokeShellBlue", 4},
            {"30Rnd_65x39_caseless_green_mag_Tracer", 2}
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
        primaryWeapon = "LMG_Zafir_F";
        primaryWeaponItems[] = {"CUP_acc_Flashlight"};
        vestMagazines[] = {{"150Rnd_762x54_Box", 2}};
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"150Rnd_762x54_Box", 2},
            {"150Rnd_762x54_Box_Tracer", 2}
        };
    };

    class AAR : Rifleman {
        binocular = "Binocular";
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"150Rnd_762x54_Box", 2},
            {"150Rnd_762x54_Box_Tracer", 2}
        };
    };

    class RAT : Rifleman {
        primaryWeapon = "arifle_Katiba_C_F";
        primaryWeaponItems[] = {"CUP_acc_Flashlight"};
        secondaryWeapon = "CUP_launch_RPG26";
        vestMagazines[] = {
            {"30Rnd_65x39_caseless_green", 6},
            {"30Rnd_65x39_caseless_green_mag_Tracer", 2}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"30Rnd_65x39_caseless_green", 4},
            {"30Rnd_65x39_caseless_green_mag_Tracer", 2}
        };
    };

    class MMGG : Rifleman {
        primaryWeapon = "CUP_lmg_Pecheneg";
        primaryWeaponItems[] = {};
        vestMagazines[] = {{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", 1}};
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", 3}
        };
    };

    class MMGAG : Rifleman {
        uniformMagazines[] = {
            {"ACE_Chemlight_HiRed", 2},
            {"SmokeShell", 1}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", 3}
        };
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class HMGG : Rifleman {
        primaryWeapon = "arifle_Katiba_C_F";
        backpack = "O_HMG_01_weapon_F";
        backpackMagazines[] = {};
        backpackMedicalItems[] = {};
    };

    class HMGAG : HMGG {
        uniformMagazines[] = {
            {"ACE_Chemlight_HiRed", 2},
            {"SmokeShell", 1}
        };
        backpack = "O_HMG_01_support_F";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
    };

    class HMGAC : Rifleman {
    };

    class MATG : RAT {
        secondaryWeapon = "launch_RPG32_F";
        secondaryWeaponItems[] = {"RPG32_F"};
        backpackMagazines[] = {
            {"RPG32_F", 2},
            {"RPG32_HE_F", 1}
        };
    };

    class MATAG : Rifleman {
        uniformMagazines[] = {
            {"ACE_Chemlight_HiRed", 2},
            {"SmokeShell", 1}
        };
        backpackMagazines[] = {
            {"RPG32_F", 2},
            {"RPG32_HE_F", 1}
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
        secondaryWeapon = "launch_O_Titan_short_F";
        secondaryWeaponItems[] = {"Titan_AT"};
        backpackMagazines[] = {{"Titan_AT", 1}};
    };

    class HATAG : MATAG {
        uniformMagazines[] = {
            {"ACE_Chemlight_HiRed", 2},
            {"SmokeShell", 1}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"Titan_AT", 1}
        };
    };

    class HATAC : HATAG {
    };

    class DHATG : Rifleman {
        primaryWeapon = "arifle_Katiba_C_F";
        backpack = "O_AT_01_weapon_F";
        backpackMagazines[] = {};
        backpackMedicalItems[] = {};
    };

    class DHATAG : HMGG {
        backpack = "O_HMG_01_support_F";
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
        primaryWeapon = "arifle_Katiba_C_F";
        secondaryWeapon = "launch_O_Titan_F";
        secondaryWeaponItems[] = {"Titan_AA"};
        backpackMagazines[] = {{"Titan_AA", 2}};
    };

    class SAMAG : Rifleman {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"Titan_AA", 2}
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
        primaryWeapon = "arifle_Katiba_C_F";
        backpack = "O_GMG_01_weapon_F";
        backpackMagazines[] = {};
        backpackMedicalItems[] = {};
    };

    class GMGAG : HMGG {
        backpack = "O_HMG_01_support_F";
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
        primaryWeapon = "arifle_Katiba_C_F";
        backpack = "O_Mortar_01_weapon_F";
        backpackMagazines[] = {};
        backpackMedicalItems[] = {};
    };

    class MTRAG : MTRG {
        backpack = "O_Mortar_01_support_F";
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
        primaryWeapon = "arifle_Katiba_C_F";
        uniformMagazines[] = {
            {"ACE_Chemlight_HiRed", 2},
            {"SmokeShell", 1}
        };
        vestMagazines[] = {
            {"30Rnd_65x39_caseless_green", 6},
            {"30Rnd_65x39_caseless_green_mag_Tracer", 2}
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
        primaryWeapon = "srifle_DMR_01_F";
        handgunWeapon = "hgun_Rook40_F";
        primaryWeaponItems[] = {"optic_MRCO"};
        uniformMagazines[] = {
            {"ACE_Chemlight_HiRed", 2},
            {"SmokeShell", 1}
        };
        vestMagazines[] = {
            {"10Rnd_762x54_Mag", 4},
            {"16Rnd_9x21_Mag", 3}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"10Rnd_762x54_Mag", 3}
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
        backpackMedicalItems[] = {};
    };

    class PCM : P {
    };

    class Vehicle {
        weapons[] = {
            {"CUP_launch_RPG26", 4}
        };
        magazines[] = {
            {"30Rnd_65x39_caseless_green", 20},
            {"30Rnd_65x39_caseless_green_mag_Tracer", 10},
            {"150Rnd_762x54_Box", 10},
            {"1Rnd_Smoke_Grenade_shell", 5},
            {"UGL_FlareWhite_F", 5},
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
            {"CUP_launch_RPG26", 10}
        };
        magazines[] = {
            {"30Rnd_65x39_caseless_green", 40},
            {"30Rnd_65x39_caseless_green_mag_Tracer", 20},
            {"150Rnd_762x54_Box", 20},
            {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", 10},
            {"1Rnd_Smoke_Grenade_shell", 10},
            {"UGL_FlareWhite_F", 10},
            {"SatchelCharge_Remote_Mag", 5},
            {"ACE_HandFlare_White", 10},
            {"RPG32_F", 5},
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
        weapons[] = {{"CUP_launch_RPG26", 10}};
        magazines[] = {
            {"30Rnd_65x39_caseless_green", 40},
            {"30Rnd_65x39_caseless_green_mag_Tracer", 20},
            {"150Rnd_762x54_Box", 20},
            {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", 10},
            {"1Rnd_Smoke_Grenade_shell", 10},
            {"UGL_FlareWhite_F", 10},
            {"RPG32_F", 5},
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