class ACE_Medical_Injuries {
    class damageTypes {
        class woundHandlers;
        class falling {
            class woundHandlers: woundHandlers {
                ADDON = QFUNC(handleFallDamage);
            };
        };
    };

    // Remove pain from bruises to counteract insane weapon sway.
    class wounds {
        class Contusion {
            bleeding = 0;
            pain = 0;
        };
    };
};
