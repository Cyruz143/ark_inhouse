addMissionEventHandler ["Map", {call ark_quiet_map_fnc_adjustVolume}];

ark_quiet_map_fnc_adjustVolume = {
    params ["_mapIsOpened"];

    if (_mapIsOpened) then {
        1 fadeSound 0.65; 
    } else {
        1 fadeSound 1; 
    };
};