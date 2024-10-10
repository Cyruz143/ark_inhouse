#include "..\script_component.hpp"

ark_race_fnc_serverInit = {
    INFO("fnc_serverInit, Race Mission Detected");
    [{
        [nil, nil, nil, ['confirm']] call compileScript ['x\ark\addons\hull3\mission_host_safetytimer_stop.sqf'];
    }, [], 30] call CBA_fnc_waitAndExecute;

    ["Car", "init", {(_this #0) call ark_clear_cargo_fnc_doClearVehicle}, true] call CBA_fnc_addClassEventHandler;
};

call ark_race_fnc_serverInit;
