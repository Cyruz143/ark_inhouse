if ((briefingName find "ark_race") != -1 ) then {
    [{
        [nil, nil, nil, ['confirm']] call compile preProcessFileLineNumbers 'x\ark\addons\hull3\mission_host_safetytimer_stop.sqf';
    }, [], 10] call CBA_fnc_waitAndExecute;

    ["Car", "init", {(_this #0) call ark_clear_cargo_fnc_clearVehicle}, true] call CBA_fnc_addClassEventHandler;
};