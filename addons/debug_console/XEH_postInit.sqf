#include "script_component.hpp"

if (isServer) then {
    [QGVAR(stopRain), {
        params ["_caller"];
        INFO_1("Rain was stopped by '%1'",_caller);
        0 setRain 0;
        0 setOvercast 0;
        forceWeatherChange;
    }] call CBA_fnc_addEventHandler;
};

[QGVAR(massHeal), {
    params ["_caller"];
    if (isServer) exitWith {
        INFO_1("Mass Heal was executed by '%1'",_caller);
    };
    [ace_player] call ace_medical_treatment_fnc_fullHealLocal;
}] call CBA_fnc_addEventHandler;

// Limited to 6 buttons.
[["Mass Heal", "Heals all Players"], {
    [QGVAR(massHeal), ace_player] call CBA_fnc_globalEvent;
}] call FUNC(addButton);

[["Stop Rain", "Stops Rain"], {
    [QGVAR(stopRain), ace_player] call CBA_fnc_serverEvent;
}] call FUNC(addButton);

[["Win Mission", "Ends Mission with a Win!"], {
    [QEGVAR(main,endMission), ["EveryoneWon"]] call CBA_fnc_serverEvent;
}] call FUNC(addButton);

[["Lose Mission", "Ends Mission with a Loss!"], {
    [QEGVAR(main,endMission), ["EveryoneLost"]] call CBA_fnc_serverEvent;
}] call FUNC(addButton);
