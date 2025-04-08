class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_Actions {
            class ACE_MainActions {
                class Ark_TakeLauncher {
                    displayName = "Take Launcher";
                    condition = QUOTE([ARR_2(_player,_target)] call FUNC(canTakeLauncher));
                    statement = QUOTE([ARR_3(_player,_target,(secondaryWeapon _target))] call FUNC(takeLauncher));
                    exceptions[] = {"isNotSwimming"};
                    showDisabled = 0;
                    icon = "\a3\structures_f_bootcamp\vr\helpers\data\vr_symbol_launchers_ca.paa";
                };
            };
        };
    };
};
