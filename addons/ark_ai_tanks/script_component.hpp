#define COMPONENT ai_tanks
#define COMPONENT_BEAUTIFIED AI Tanks

#include "\x\ark\addons\ark_main\script_mod.hpp"
#include "\x\ark\addons\ark_main\script_macros.hpp"

#define ENHANCED_IFV \
    airLock = 1; \
    allowAgainstInfantry = 1; \
    aiAmmoUsageFlags = "64 + 128 + 256 + 512"; \
    cost = 35;

#define ENHANCED_TANK \
    airLock = 1; \
    allowAgainstInfantry = 1; \
    aiAmmoUsageFlags = "64 + 128 + 256 + 512"; \
    cost = 100;