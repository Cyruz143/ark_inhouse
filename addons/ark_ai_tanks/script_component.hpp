#define COMPONENT ai_tanks
#define COMPONENT_BEAUTIFIED AI Tanks

#include "\x\ark\addons\ark_main\script_mod.hpp"
#include "\x\ark\addons\ark_main\script_macros.hpp"

#define ENHANCED_IFV \
    allowAgainstInfantry = 1; \
    aiAmmoUsageFlags = "64 + 128 + 256 + 512"; \
    cost = 5;

#define ENHANCED_TANK \
    allowAgainstInfantry = 1; \
    aiAmmoUsageFlags = "64 + 128 + 256 + 512"; \
    cost = 3;

#define ENHANCED_MODES \
    class player; \
    class close: player { \
        minRangeProbab = 0.85; \
    }; \
    class short: close { \
        minRangeProbab = 0.85; \
    }; \
    class medium: close { \
        minRangeProbab = 0.85; \
    };