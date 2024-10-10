#include "script_component.hpp"

ark_ace_rearm_fnc_makeSource = {
    params ["_vehicle"];

    [_vehicle, 9999] call ace_rearm_fnc_makeSource;
    INFO_2("[ARK] %1 - fnc_enableRearm, Rearm enabled for %2",COMPONENT,_vehicle);
};

ark_ace_rearm_fnc_enableRearm = {
    params ["_logic","_vehicles"];

    if (_vehicles isEqualTo []) exitWith {
        ERROR_2("[ARK] %1 - fnc_enableRearm, Module (%2) is not sync'd to any vehicle",COMPONENT,_logic);
    };

    {
        _x call ark_ace_rearm_fnc_makeSource;
    } forEach _vehicles;

    INFO_2("[ARK] %1 - fnc_enableRearm, Deleting Module (%2)",COMPONENT,_logic);
    deleteVehicle _logic;

    //Return true because spawnd from module
    true;
};
