class ACE_Medical_Injuries {
    class damageTypes {
        class woundHandlers;
        class falling {
            class woundHandlers: woundHandlers {
                ADDON = "{call ark_ace_medical_fnc_handleFallDamage}";
            };
        };
    };
};