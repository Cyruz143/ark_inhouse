ark_ace_medical_fnc_vehicleDismount = {
    params ["_veh"];

    private _chance = floor (random 10);
    if (_chance <= 5) then {
        _veh setVariable ["ace_vehicle_damage_allowCrewInImmobile", true, true];
    };
};

["LandVehicle", "init", {call ark_ace_medical_fnc_vehicleDismount}] call CBA_fnc_addClassEventHandler;