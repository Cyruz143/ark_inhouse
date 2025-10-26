class CfgVehicles {
    class CUP_Uh60S_Base;
    class ARK_MH60_AUS: CUP_Uh60S_Base {
        SCOPE;
        side = 1;
        faction = "MNP_AUS";
        displayName="UH60 Blackhawk";
        crew = "MNP_Aus_Soldier_F";
        hiddenSelections[]= {"camo1","camo2"};
        hiddenSelectionsTextures[]= {
            QPATHTOF(resources\aus\blackhawk\uh60m_aus_fuselage.paa),
            QPATHTOF(resources\aus\blackhawk\uh60m_aus_engine.paa)
        };
        typicalCargo[] = {"MNP_Aus_Soldier_F"};
    };

    class CUP_B_UH1Y_UNA_USMC;
    class ARK_UH1Y_UNA_NOR: CUP_B_UH1Y_UNA_USMC {
        SCOPE;
        side = 2;
        faction = "MNP_NOR_WD";
        displayName="Bell 412SP";
        crew = "MNP_NOR_Soldier_F";
        hiddenSelections[]= {"camo1","camo2"};
        hiddenSelectionsTextures[]= {
            QPATHTOF(resources\nor\uh1y\n_uh1y_ext_co.paa),
            QPATHTOF(resources\nor\uh1y\n_uh1y_int_co.paa)
        };
        typicalCargo[] = {"MNP_NOR_Soldier_F"};
    };

    class CUP_B_UH1Y_Gunship_Dynamic_USMC;
    class ARK_UH1Y_GUN_NOR: CUP_B_UH1Y_Gunship_Dynamic_USMC {
        SCOPE;
        side = 2;
        faction = "MNP_NOR_WD";
        displayName="Bell 412SP Gunship";
        crew = "MNP_NOR_Soldier_F";
        hiddenSelections[]= {"camo1","camo2"};
        hiddenSelectionsTextures[]= {
            QPATHTOF(resources\nor\uh1y\n_uh1y_ext_co.paa),
            QPATHTOF(resources\nor\uh1y\n_uh1y_int_co.paa)
        };
        typicalCargo[] = {"MNP_NOR_Soldier_F"};
    };

    class CUP_LAV25_Base;
    class ARK_LAV25_AUS: CUP_LAV25_Base {
        SCOPE;
        side = 1;
        faction = "MNP_AUS";
        displayName="ASLAV";
        crew = "MNP_Aus_Soldier_F";
        hiddenSelections[]= {"camo1","camo2"};
        hiddenSelectionsTextures[]= {
            QPATHTOF(resources\aus\lav\lav_aus_hull.paa),
            QPATHTOF(resources\aus\lav\lav_aus_turret.paa)
        };
        typicalCargo[] = {"MNP_Aus_Soldier_F","MNP_Aus_Soldier_F"};
    };
    class CUP_B_LAV25M240_USMC;
    class ARK_LAV25M240_AUS: CUP_B_LAV25M240_USMC {
        SCOPE;
        side = 1;
        faction = "MNP_AUS";
        displayName="ASLAV (M240)";
        crew = "MNP_Aus_Soldier_F";
        hiddenSelections[]= {"camo1","camo2"};
        hiddenSelectionsTextures[]= {
            QPATHTOF(resources\aus\lav\lav_aus_hull.paa),
            QPATHTOF(resources\aus\lav\lav_aus_turret.paa)
        };
        typicalCargo[] = {"MNP_Aus_Soldier_F","MNP_Aus_Soldier_F"};
    };
    class CUP_B_LAV25_HQ_USMC;
    class ARK_LAV25HQ_AUS: CUP_B_LAV25_HQ_USMC {
        SCOPE;
        side = 1;
        faction = "MNP_AUS";
        displayName="ASLAV-C2";
        crew = "MNP_Aus_Soldier_F";
        hiddenSelections[]= {"camo1","camo2","camo3"};
        hiddenSelectionsTextures[]= {
            QPATHTOF(resources\aus\lav\lav_aus_hull.paa),
            QPATHTOF(resources\aus\lav\lav_aus_turret.paa),
            QPATHTOF(resources\aus\lav\lav_aus_hq.paa)
        };
        typicalCargo[] = {"MNP_Aus_Soldier_F","MNP_Aus_Soldier_F"};
    };

    class CUP_B_LR_Transport_CZ_W;
    class ARK_LR_TRANS_AUS: CUP_B_LR_Transport_CZ_W {
        SCOPE;
        side = 1;
        faction = "MNP_AUS";
        displayName="Land Rover";
        crew = "MNP_Aus_Soldier_F";
        hiddenSelections[]= {"camo1","camo2"};
        hiddenSelectionsTextures[]={
            QPATHTOF(resources\aus\land_rover\lr_aus_base.paa),
            "cup\wheeledvehicles\cup_wheeledvehicles_lr\data\lr_acr_spec_co.paa"
        };
        typicalCargo[] = {"MNP_Aus_Soldier_F"};
    };

    class gm_demo_nato_mb_u1300l_cargo;
    class ark_demo_aus_mb_u1300l_cargo: gm_demo_nato_mb_u1300l_cargo {
        SCOPE;
        side = 1;
        faction = "MNP_AUS";
        displayName="Unimog Truck";
        crew = "MNP_Aus_Soldier_F";
        hiddenSelectionsTextures[]= {
            "gm_demo\gm_demo_mb_u1300l\data\gm_demo_335_80_R_20_mil_01_co.paa",
            "gm_demo\gm_demo_mb_u1300l\gm_demo_nato_mb_u1300l\data\nato\gm_demo_nato_mb_u1300l_rim_01_nato_co.paa",
            "gm_demo\gm_demo_mb_u1300l\gm_demo_nato_mb_u1300l\data\nato\gm_demo_nato_mb_u1300l_rim_01_nato_co.paa",
            "gm_demo\gm_demo_mb_u1300l\gm_demo_nato_mb_u1300l\data\nato\gm_demo_nato_mb_u1300l_rim_01_nato_co.paa",
            QPATHTOF(resources\aus\unimog\ark_demo_aus_unimog_hull_co.paa),
            "gm_demo\gm_demo_mb_u1300l\gm_demo_nato_mb_u1300l\data\nato\gm_demo_nato_mb_u1300l_ext_02_nato_co.paa",
            QPATHTOF(resources\aus\unimog\ark_demo_aus_unimog_cargo_co.paa),
            "gm_demo\gm_demo_mb_u1300l\gm_demo_nato_mb_u1300l\data\nato\gm_demo_nato_mb_u1300l_cargo_ext_04_nato_co.paa"
        };
        typicalCargo[] = {"MNP_Aus_Soldier_F"};
    };

    class CUP_B_LR_MG_CZ_W;
    class ARK_LR_M2_AUS: CUP_B_LR_MG_CZ_W {
        SCOPE;
        side = 1;
        faction = "MNP_AUS";
        displayName="Land Rover M2";
        crew = "MNP_Aus_Soldier_F";
        hiddenSelections[]= {"camo1","camo2"};
        hiddenSelectionsTextures[]= {
            QPATHTOF(resources\aus\land_rover\lr_aus_base.paa),
            "cup\wheeledvehicles\cup_wheeledvehicles_lr\data\lr_acr_spec_co.paa"
        };
        typicalCargo[] = {"MNP_Aus_Soldier_F"};
    };

    class CUP_M1_Abrams_base;
    class ARK_M1A1_AUS: CUP_M1_Abrams_base {
        SCOPE;
        side = 1;
        faction = "MNP_AUS";
        displayName="M1A1";
        crew = "MNP_Aus_Soldier_F";
        hiddenSelections[]= {"camo1","camo2","camo3"};
        hiddenSelectionsTextures[]= {
            QPATHTOF(resources\aus\abrams\m1a1_aus_hull.paa),
            QPATHTOF(resources\aus\abrams\m1a1_aus_turret.paa),
            QPATHTOF(resources\aus\abrams\m1a1_aus_extra.paa)
        };
        typicalCargo[] = {"MNP_Aus_Soldier_F","MNP_Aus_Soldier_F"};
    };

    class CUP_M1A2_TUSK_base;
    class ARK_M1A1_AUS_TUSK: CUP_M1A2_TUSK_base {
        SCOPE;
        side = 1;
        faction = "MNP_AUS";
        displayName="M1A1 TUSK";
        crew = "MNP_Aus_Soldier_F";
        hiddenSelections[]= {"camo1","camo2","camo3","camo4"};
        hiddenSelectionsTextures[]= {
            QPATHTOF(resources\aus\abrams\m1a1_aus_hull.paa),
            QPATHTOF(resources\aus\abrams\m1a1_aus_turret.paa),
            QPATHTOF(resources\aus\abrams\m1a1_aus_extra.paa),
            QPATHTOF(resources\aus\abrams\m1a1_aus_tusk.paa)
        };
        typicalCargo[] = {"MNP_Aus_Soldier_F","MNP_Aus_Soldier_F"};
    };

    class CUP_M113_Base;
    class ARK_M113_AUS: CUP_M113_Base {
        SCOPE;
        side = 1;
        faction = "MNP_AUS";
        displayName="M113A3";
        crew = "MNP_Aus_Soldier_F";
        hiddenSelections[]= {"camo1"};
        hiddenSelectionsTextures[]= {
            QPATHTOF(resources\aus\m113\m113a3_aus_co.paa)
        };
        typicalCargo[] = {"MNP_Aus_Soldier_F"};
    };
    class ARK_M113_USA_OD: CUP_M113_Base {
        SCOPE;
        side = 1;
        faction = "CUP_B_US_Army";
        displayName="M113A3 OD";
        crew = "CUP_B_US_Crew";
        hiddenSelections[]= {"camo1"};
        hiddenSelectionsTextures[]= {
            "cup\trackedvehicles\cup_trackedvehicles_M113\data\m113a3_01_olive_drab_co.paa"
        };
        typicalCargo[] = {"CUP_B_US_Crew"};
    };
    class ARK_M113_CAN: CUP_M113_Base {
        SCOPE;
        side = 1;
        faction = "MNP_CA_WD";
        displayName="M113A3";
        crew = "MNP_Canada_Soldier_F";
        hiddenSelections[]= {"camo1"};
        hiddenSelectionsTextures[]= {
            QPATHTOF(resources\can\m113\m113a3_can_hull.paa)
        };
        typicalCargo[] = {"MNP_Canada_Soldier_F"};
    };
    class ARK_M113_NOR: CUP_M113_Base {
        SCOPE;
        side = 2;
        faction = "MNP_NOR_WD";
        displayName="M113A3";
        crew = "MNP_NOR_Soldier_F";
        hiddenSelections[]= {"camo1"};
        hiddenSelectionsTextures[]= {
            QPATHTOF(resources\nor\m113\m113a3_01_green_co.paa)
        };
        typicalCargo[] = {"MNP_NOR_Soldier_F"};
    };

    class I_MBT_03_base_F;
    class ARK_LEO2_CAN: I_MBT_03_base_F {
        SCOPE;
        side = 1;
        faction = "MNP_CA_WD";
        displayName="Leopard C2";
        crew = "MNP_Canada_Soldier_F";
        hiddenSelections[]= {"camo1","camo2","camo3"};
        hiddenSelectionsTextures[]= {
            QPATHTOF(resources\can\leo2\mbt_03_can_hull.paa),
            QPATHTOF(resources\can\leo2\mbt_03_can_turret.paa),
            QPATHTOF(resources\can\leo2\mbt_03_can_rcws.paa)
        };
        typicalCargo[] = {"MNP_Canada_Soldier_F","MNP_Canada_Soldier_F"};
        class TextureSources {
            class Indep_01 {
                displayName = "Leopard C2";
                author = "ARK";
                textures[] = {
                    QPATHTOF(resources\can\leo2\mbt_03_can_hull.paa),
                    QPATHTOF(resources\can\leo2\mbt_03_can_turret.paa),
                    QPATHTOF(resources\can\leo2\mbt_03_can_rcws.paa)
                };
                factions[] = {"MNP_CA_WD"};
            };
        };
    };
    class ARK_LEO2_NOR: I_MBT_03_base_F {
        SCOPE;
        side = 2;
        faction = "MNP_NOR_WD";
        displayName="Leopard 2A7NO";
        crew = "MNP_NOR_Soldier_F";
        hiddenSelections[]= {"camo1","camo2","camo3"};
        hiddenSelectionsTextures[]= {
            QPATHTOF(resources\nor\leo2\n_leo2_w_ext1_co.paa),
            QPATHTOF(resources\nor\leo2\n_leo2_w_ext3_co.paa),
            QPATHTOF(resources\nor\leo2\n_leo2_w_rcws_co.paa)
        };
        typicalCargo[] = {"MNP_NOR_Soldier_F","MNP_NOR_Soldier_F"};
        class TextureSources {
            class Indep_01 {
                displayName = "Leopard 2A7NO";
                author = "ARK";
                textures[] = {
                    QPATHTOF(resources\nor\leo2\n_leo2_w_ext1_co.paa),
                    QPATHTOF(resources\nor\leo2\n_leo2_w_ext3_co.paa),
                    QPATHTOF(resources\nor\leo2\n_leo2_w_rcws_co.paa)
                };
                factions[] = {"MNP_NOR_WD"};
            };
        };
    };

    class I_Truck_02_fuel_F;
    class ARK_SCA_FUEL_NOR_WD: I_Truck_02_fuel_F {
        SCOPE;
        side = 2;
        faction = "MNP_NOR_WD";
        displayName="Scania P90 Fuel (Wood)";
        crew = "MNP_NOR_Soldier_F";
        hiddenSelections[]= {"camo1","camo2"};
        hiddenSelectionsTextures[]= {
            QPATHTOF(resources\nor\scan\n_scania_w_fuelbody_co.paa),
            QPATHTOF(resources\nor\scan\n_scania_w_fuel_co.paa)
        };
        typicalCargo[] = {"MNP_NOR_Soldier_F"};
    };
    class ARK_SCA_FUEL_NOR_GN: I_Truck_02_fuel_F {
        SCOPE;
        side = 2;
        faction = "MNP_NOR_WD";
        displayName="Scania P90 Fuel (Olive)";
        crew = "MNP_NOR_Soldier_F";
        hiddenSelections[]= {"camo1","camo2"};
        hiddenSelectionsTextures[]= {
            QPATHTOF(resources\nor\scan\n_scania_grn_fuelbody_co.paa),
            QPATHTOF(resources\nor\scan\n_scania_w_fuel_co.paa)
        };
        typicalCargo[] = {"MNP_NOR_Soldier_F"};
    };

    class I_Truck_02_covered_F;
    class ARK_SCA_COV_NOR_WD: I_Truck_02_covered_F {
        SCOPE;
        side = 2;
        faction = "MNP_NOR_WD";
        displayName="Scania P90 Covered (Wood)";
        crew = "MNP_NOR_Soldier_F";
        hiddenSelections[]= {"camo1","camo2"};
        hiddenSelectionsTextures[]= {
            QPATHTOF(resources\nor\scan\n_scania_w_transbody_co.paa),
            QPATHTOF(resources\nor\scan\n_scania_w_covered_co.paa)
        };
        typicalCargo[] = {"MNP_NOR_Soldier_F"};
    };
    class ARK_SCA_COV_NOR_GN: I_Truck_02_covered_F {
        SCOPE;
        side = 2;
        faction = "MNP_NOR_WD";
        displayName="Scania P90 Covered (Olive)";
        crew = "MNP_NOR_Soldier_F";
        hiddenSelections[]= {"camo1","camo2"};
        hiddenSelectionsTextures[]= {
            QPATHTOF(resources\nor\scan\n_scania_grn_transbody_co.paa),
            QPATHTOF(resources\nor\scan\n_scania_w_covered_co.paa)
        };
        typicalCargo[] = {"MNP_NOR_Soldier_F"};
    };

    class I_Truck_02_transport_F;
    class ARK_SCA_TRAN_NOR_WD: I_Truck_02_transport_F {
        SCOPE;
        side = 2;
        faction = "MNP_NOR_WD";
        displayName="Scania P90 Transport (Wood)";
        crew = "MNP_NOR_Soldier_F";
        hiddenSelections[]= {"camo1","camo2"};
        hiddenSelectionsTextures[]= {
            QPATHTOF(resources\nor\scan\n_scania_w_transbody_co.paa),
            QPATHTOF(resources\nor\scan\n_scania_w_covered_co.paa)
        };
        typicalCargo[] = {"MNP_NOR_Soldier_F"};
    };
    class ARK_SCA_TRAN_NOR_GN: I_Truck_02_transport_F {
        SCOPE;
        side = 2;
        faction = "MNP_NOR_WD";
        displayName="Scania P90 Transport(Olive)";
        crew = "MNP_NOR_Soldier_F";
        hiddenSelections[]= {"camo1","camo2"};
        hiddenSelectionsTextures[]= {
            QPATHTOF(resources\nor\scan\n_scania_grn_transbody_co.paa),
            QPATHTOF(resources\nor\scan\n_scania_w_covered_co.paa)
        };
        typicalCargo[] = {"MNP_NOR_Soldier_F"};
    };

    class B_G_Offroad_01_armed_F;
    class B_GEN_Offroad_01_armed_Base: B_G_Offroad_01_armed_F {
        class EventHandlers;
        scope = 0;
    };

    class B_GEN_Offroad_01_armed_F: B_GEN_Offroad_01_armed_Base {
        SCOPE;
        side = 1;
        faction = "BLU_GEN_F";
        displayName = "Offroad (Armed)";
        crew = "B_GEN_Soldier_Crew_F";
        editorPreview = "\A3\EditorPreviews_F_Exp\resources\CfgVehicles\B_GEN_Offroad_01_gen_F.jpg";
        hiddenSelectionsTextures[] = {
            "\A3\Soft_F_Exp\Offroad_01\resources\Offroad_01_ext_gen_CO.paa",
            "\A3\Soft_F_Exp\Offroad_01\resources\Offroad_01_ext_gen_CO.paa"
        };
        typicalCargo[] = {"B_GEN_Soldier_Crew_F"};
        animationList[] = {
            "HidePolice", 0,
            "HideBumper1", 1,
            "HideBumper2", 0,
            "HideConstruction", 0,
            "HideDoor3", 0,
            "HideBackpacks", 1
        };
        class EventHandlers: EventHandlers {
            init = "(_this select 0) setVariable ['BIS_enableRandomization', false];";
        };
        class TransportMagazines{};
        class TransportItems{};
        class TransportWeapons{};
    };

    class B_LSV_01_armed_black_F;
    class B_GEN_LSV_01_armed_black_F: B_LSV_01_armed_black_F {
        SCOPE;
        side = 1;
        faction = "BLU_GEN_F";
        displayName = "Prowler HMG (SWAT)";
        crew = "B_GEN_SWAT_Crew_F";
        hiddenSelectionsTextures[] = {
            QPATHTOF(resources\gend\NATO_LSV_01_Gend_CO.paa),
            QPATHTOF(resources\gend\NATO_LSV_02_Gend_CO.paa),
            QPATHTOF(resources\gend\NATO_LSV_03_Gend_CO.paa),
            QPATHTOF(resources\gend\NATO_LSV_Adds_Gend_CO.paa)
        };
        textureList[] = {};
        class TransportMagazines{};
        class TransportItems{};
        class TransportWeapons{};
    };

    class B_MRAP_01_hmg_F;
    class B_GEN_MRAP_01_hmg_F: B_MRAP_01_hmg_F {
        SCOPE;
        side = 1;
        faction = "BLU_GEN_F";
        displayName = "Hunter HMG (SWAT)";
        crew = "B_GEN_SWAT_Crew_F";
        hiddenSelectionsTextures[] = {
            QPATHTOF(resources\gend\mrap_01_base_co.paa),
            QPATHTOF(resources\gend\mrap_01_adds_co.paa),
            QPATHTOF(resources\gend\mrap_01_base_co.paa)
        };
        textureList[] = {};
        class TransportMagazines{};
        class TransportItems{};
        class TransportWeapons{};
    };

    class O_APC_Wheeled_02_rcws_v2_F;
    class B_GEN_APC_Wheeled_02_rcws_F: O_APC_Wheeled_02_rcws_v2_F {
        SCOPE;
        side = 1;
        faction = "BLU_GEN_F";
        displayName = "MSE-3 Marid (SWAT)";
        crew = "B_GEN_SWAT_Crew_F";
        hiddenSelectionsTextures[] = {
            QPATHTOF(resources\gend\GT_APC_ext_01_CO.paa),
            QPATHTOF(resources\gend\GT_APC_ext_02_CO.paa),
            QPATHTOF(resources\gend\GT_APC_ext_01_CO.paa)
        };
        textureList[] = {};
        class TransportMagazines{};
        class TransportItems{};
        class TransportWeapons{};
    };
    class CUP_B_MCV80_GB_W;
    class ARK_MCV80_GB_WIN: CUP_B_MCV80_GB_W {
        SCOPE;
        side = 1;
        faction = "CUP_B_GB";
        displayName = "MCV-80 Warrior (Snow)";
        crew = "CUP_B_BAF_Soldier_Crew_MTP";
        hiddenSelectionsTextures[] = {
            QPATHTOF(resources\baf\warrior\warrior_gb_hull_win_co.paa),
            QPATHTOF(resources\baf\warrior\warrior_gb_hull_win_co.paa),
            QPATHTOF(resources\baf\warrior\warrior_gb_turret_win_co.paa)
        };
        textureList[] = {};
        class TransportMagazines{};
        class TransportItems{};
        class TransportWeapons{};
    };
    class CUP_B_MCV80_GB_W_SLAT;
    class ARK_MCV80_GB_WIN_SLAT: CUP_B_MCV80_GB_W_SLAT {
        SCOPE;
        side = 1;
        faction = "CUP_B_GB";
        displayName = "MCV-80 Warrior (SLAT - Snow)";
        crew = "CUP_B_BAF_Soldier_Crew_MTP";
        hiddenSelectionsTextures[] = {
            QPATHTOF(resources\baf\warrior\warrior_gb_hull_win_co.paa),
            QPATHTOF(resources\baf\warrior\warrior_gb_hull_win_co.paa),
            QPATHTOF(resources\baf\warrior\warrior_gb_turret_win_co.paa)
        };
        textureList[] = {};
        class TransportMagazines{};
        class TransportItems{};
        class TransportWeapons{};
    };
    class CUP_B_FV432_Bulldog_GB_W;
    class ARK_FV432_Bulldog_GB_WIN: CUP_B_FV432_Bulldog_GB_W {
        SCOPE;
        side = 1;
        faction = "CUP_B_GB";
        displayName = "FV342 Bulldog M240 [Snow]";
        crew = "CUP_B_BAF_Soldier_Crew_MTP";
        hiddenSelectionsTextures[] = {
            QPATHTOF(resources\baf\bulldog\bulldog_gb_hull_part1_win_co.paa),
            QPATHTOF(resources\baf\bulldog\bulldog_gb_hull_part2_win_co.paa),
            QPATHTOF(resources\baf\bulldog\bulldog_gb_hull_part3_win_co.paa),
            QPATHTOF(resources\baf\bulldog\bulldog_gb_ancills_win_co.paa),
            QPATHTOF(resources\baf\bulldog\bulldog_gb_turret_win_co.paa),
            QPATHTOF(resources\baf\bulldog\bulldog_gb_turret_win_co.paa)
        };
        textureList[] = {};
        class TransportMagazines{};
        class TransportItems{};
        class TransportWeapons{};
    };
    class CUP_B_FV432_Bulldog_GB_W_RWS;
    class ARK_FV432_Bulldog_GB_WIN_RWS: CUP_B_FV432_Bulldog_GB_W_RWS {
        SCOPE;
        side = 1;
        faction = "CUP_B_GB";
        displayName = "FV342 Bulldog M2 RWS [Snow]";
        crew = "CUP_B_BAF_Soldier_Crew_MTP";
        hiddenSelectionsTextures[] = {
            QPATHTOF(resources\baf\bulldog\bulldog_gb_hull_part1_win_co.paa),
            QPATHTOF(resources\baf\bulldog\bulldog_gb_hull_part2_win_co.paa),
            QPATHTOF(resources\baf\bulldog\bulldog_gb_hull_part3_win_co.paa),
            QPATHTOF(resources\baf\bulldog\bulldog_gb_ancills_win_co.paa)
        };
        textureList[] = {};
        class TransportMagazines{};
        class TransportItems{};
        class TransportWeapons{};
    };
};
