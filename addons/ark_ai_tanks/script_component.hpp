#define COMPONENT ai_tanks
#define COMPONENT_BEAUTIFIED AI Tanks

#include "\x\ark\addons\ark_main\script_mod.hpp"
#include "\x\ark\addons\ark_main\script_macros.hpp"

#define ENHANCED_IFV \
    allowAgainstInfantry = 1; \
    aiAmmoUsageFlags = "64 + 128 + 256 + 512"; \

#define ENHANCED_TANK \
    allowAgainstInfantry = 1; \
    aiAmmoUsageFlags = "64 + 128 + 256 + 512"; \

#define ENHANCED_MODES \
    class player; \
    class close: player { \
        minRangeProbab = 0.35; \
        midRangeProbab = 0.78; \
        maxRangeProbab = 0.04; \
        aiDispersionCoefX = 6; \
        aiDispersionCoefY = 6; \
    }; \
    class short: close { \
        minRangeProbab = 0.05; \
        midRangeProbab = 0.58; \
        maxRangeProbab = 0.04; \
    };