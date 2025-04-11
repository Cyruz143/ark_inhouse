class ACE_Medical_Injuries {
    class damageTypes {
        class woundHandlers;
        class falling {
            class woundHandlers: woundHandlers {
                ADDON = QFUNC(handleFallDamage);
            };
        };
    };
};
