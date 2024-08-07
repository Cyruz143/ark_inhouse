#define COMPONENT ai_configs
#define COMPONENT_BEAUTIFIED AI Configs

#include "\x\ark\addons\ark_main\script_mod.hpp"
#include "\x\ark\addons\ark_main\script_macros.hpp"

#define ALLOW_INF \
    allowAgainstInfantry = 1; \
    aiAmmoUsageFlags = "64 + 128 + 256 + 512";

#define ALLOW_INF_COST \
    allowAgainstInfantry = 1; \
    aiAmmoUsageFlags = "64 + 128 + 256 + 512"; \
    cost = 100;