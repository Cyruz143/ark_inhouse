class CfgPatches {
    class ark_ark_enhanced_launchers {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.76;
        requiredAddons[] = {"A3_Weapons_F", "CUP_Weapons_Ammunition"};
        author = "ARK, JonBons, YoursTruly";
    };
};

#define ENHANCED_AI \
    airLock = 1; \
    allowAgainstInfantry = 1; \
    aiAmmoUsageFlags = "64 + 128 + 256 + 512";

#define ENHANCED_LAUNCHER \
    airLock = 1; \
    allowAgainstInfantry = 1; \
    aiAmmoUsageFlags = "64 + 128 + 256 + 512"; \
    soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1",6,0.85,500}; \
    whistleDist = 32;

class CfgAmmo {
    class RocketBase;   // External Class Reference

    class R_PG32V_F: RocketBase {
        ENHANCED_LAUNCHER
    };
    class R_TBG32V_F: R_PG32V_F {
        ENHANCED_LAUNCHER
    };
    class CUP_R_PG7V_AT: RocketBase {
        ENHANCED_AI
    };
    class CUP_R_PG7VL_AT: RocketBase {
        ENHANCED_AI
    };
    class CUP_R_PG7VR_AT: RocketBase {
        ENHANCED_AI
    };
    class CUP_R_OG7_AT: RocketBase {
        ENHANCED_AI
    };
    class CUP_R_PG9_AT: RocketBase {
        ENHANCED_AI
    };
    class CUP_R_OG9_HE: CUP_R_PG9_AT {
        ENHANCED_AI
    };
    class CUP_R_SMAW_HEDP: RocketBase {
        ENHANCED_AI
    };
    class CUP_R_SMAW_HEAA: CUP_R_SMAW_HEDP {
        ENHANCED_AI
    };
    class CUP_R_M136_AT: RocketBase {
        ENHANCED_AI
    };
    class CUP_R_MEEWS_HEDP: RocketBase {
        ENHANCED_AI
    };
    class CUP_R_MEEWS_HEAT: CUP_R_MEEWS_HEDP {
        ENHANCED_AI
    };
    class CUP_R_RPG18_AT: RocketBase {
        ENHANCED_AI
    };
    class CUP_R_SMAW_HEDP_N: RocketBase {
        ENHANCED_AI
    };
    class CUP_R_SMAW_HEAA_N: CUP_R_SMAW_HEDP_N {
        ENHANCED_AI
    };
    class CUP_R_M72A6_AT: RocketBase {
        ENHANCED_AI
    };
};