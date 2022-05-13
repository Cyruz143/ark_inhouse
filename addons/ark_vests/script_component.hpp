#define COMPONENT vests
#define COMPONENT_BEAUTIFIED Vests

#include "\x\ark\addons\ark_main\script_mod.hpp"
#include "\x\ark\addons\ark_main\script_macros.hpp"

#define HIDDEN \
    scope = 1; \
    scopeArsenal = 0; \
    scopeCurator = 0; \
    class ItemInfo;

#define ARMOUR \
    scope = 2; \
    scopeArsenal = 2; \
    scopeCurator = 2; \
    class ItemInfo: ItemInfo { \
        class HitpointsProtectionInfo { \
            class Neck { \
                hitpointName = "HitNeck"; \
                armor = 20; \
                passThrough = 0.2; \
            }; \
            class Arms { \
                hitpointName = "HitArms"; \
                armor = 20; \
                passThrough = 0.2; \
            }; \
            class Chest { \
                hitpointName = "HitChest"; \
                armor = 20; \
                passThrough = 0.2; \
            }; \
            class Diaphragm { \
                hitpointName = "HitDiaphragm"; \
                armor = 20; \
                passThrough = 0.2; \
            }; \
            class Abdomen { \
                hitpointName = "HitAbdomen"; \
                armor = 20; \
                passThrough = 0.2; \
            }; \
            class Body { \
                hitpointName = "HitBody"; \
                passThrough = 0.2; \
            }; \
        }; \
    };