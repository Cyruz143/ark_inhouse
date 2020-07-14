#define COMPONENT ai_tanks
#define COMPONENT_BEAUTIFIED AI Tanks

#include "\x\ark\addons\ark_main\script_mod.hpp"
#include "\x\ark\addons\ark_main\script_macros.hpp"

#define ALLOW_INF \
    allowAgainstInfantry = 1; \
    aiAmmoUsageFlags = "64 + 128 + 256 + 512";