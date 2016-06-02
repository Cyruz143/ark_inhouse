class CfgPatches {
    class disablemissions {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.60;
        requiredAddons[] = {"A3_Missions_F_Beta", "A3_Missions_F_Gamma", "A3_Missions_F_Curator", "A3_Missions_F", "A3_Missions_F_Bootcamp", "A3_Missions_F_EPA", "A3_Missions_F_EPB", "A3_Missions_F_EPC", "A3_Missions_F_EXP_A"};
        author = "ARK";
    };
};

class CfgMissions {
    class MPMissions {
        delete MP_COOP_m01;
        delete MP_COOP_m02;
        delete MP_COOP_m03;
        delete MP_COOP_m04;
        delete MP_COOP_m05;
        delete MP_COOP_m06;
        delete MP_COOP_m07;
        delete MP_COOP_m08;
        delete MP_GroundSupport01;
        delete MP_GroundSupport02;
        delete MP_GroundSupport03;
        delete MP_GroundSupport04;
        delete MP_GroundSupport05;
        delete MP_Bootcamp_01;
        delete MP_Marksmen_01;
        delete Showcase_Combined_arms;
        delete Showcase_FiringFromVehicles;
        delete MP_ZR_8_Karts01;
        delete MP_ZR_8_Karts02;
        delete MP_ZSC_m10;
        delete MP_ZGM_m11;
        delete MP_ZGM_m11_EAST;
        delete MP_ZGM_m11_WEST;
        delete MP_ZGM_m11_GUER;
        delete MP_ZGM_m12;
        delete MP_ZGM_m12_EAST;
        delete MP_ZGM_m12_WEST;
        delete MP_ZGM_m12_GUER;
        delete MP_ZGM_m13;
        delete MP_ZGM_m13_EAST;
        delete MP_ZGM_m13_WEST;
        delete MP_ZGM_m13_GUER;
        delete MP_End_Game_02;
        delete MP_End_Game_03;
    };
};