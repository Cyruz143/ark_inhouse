ark_ace_rearm_fnc_clearVehicle = {
    if (isServer) then {
        params ["_vehicle"];
        _vehicle setVariable ["ace_rearm_isSupplyVehicle", true, true];
    };
};

ark_ace_rearm_module_enableRearm = {
    params ["_logic","_vehicles","_activated"];
    
    if !(_activated) exitWith {
        diag_log "[ARK] (ACE Rearm) - Module not activated"
    };
    
    if (count _vehicles == 0) exitWith {
        diag_log "[ARK] (ACE Rearm) - Module not syncd to any vehicle"
    };
    
    {
        [_x] call ark_ace_rearm_fnc_clearVehicle;
    } forEach _vehicles;
};