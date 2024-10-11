#include "script_component.hpp"

ark_ace_rearm_fnc_makeSource = {
    params ["_vehicle"];

    [_vehicle, 9999] call ace_rearm_fnc_makeSource;
    INFO_1("fnc_enableRearm, Rearm enabled for %1",_vehicle);
};

ark_ace_rearm_fnc_enableRearm = {
    params ["_logic","_vehicles"];

    if (_vehicles isEqualTo []) exitWith {
        ERROR_MSG_1("fnc_enableRearm, Module (%1) is not sync'd to any vehicle",_logic);
    };

    {
        _x call ark_ace_rearm_fnc_makeSource;
    } forEach _vehicles;

    INFO_1("fnc_enableRearm, Deleting Module (%1)",_logic);
    deleteVehicle _logic;

    //Return true because spawnd from module
    true;
};
