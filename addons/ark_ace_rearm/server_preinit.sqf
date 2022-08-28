ark_ace_rearm_fnc_makeSource = {
    params ["_vehicle"];

    [_vehicle, 9999] call ace_rearm_fnc_makeSource;
    ["ACE Rearm","INFO","fnc_enableRearm","Rearm enabled for",_vehicle] call ark_admin_tools_fnc_log;
};

ark_ace_rearm_fnc_enableRearm = {
    params ["_logic","_vehicles"];

    if (_vehicles isEqualTo []) exitWith {
        ["ACE Rearm","ERROR","fnc_enableRearm","Module not syncd to any vehicle",_logic] call ark_admin_tools_fnc_log;
    };

    {
        _x call ark_ace_rearm_fnc_makeSource;
    } forEach _vehicles;

    ["ACE Rearm","INFO","fnc_enableRearm","Deleting module",_logic] call ark_admin_tools_fnc_log;
    deleteVehicle _logic;

    //Return true because spawnd from module
    true;
};