ark_ace_rearm_fnc_makeSource = {
    params ["_vehicle"];
    [_vehicle, 9999] call ace_rearm_fnc_makeSource;
};

ark_ace_rearm_fnc_enableRearm = {
    params ["_logic","_vehicles","_activated"];

    if (!_activated) exitWith {
        [COMPONENT_BEAUTIFIED,"ERROR","fnc_enableRearm","Module not activated",_logic] call ark_admin_tools_fnc_log;
    };

    if (_vehicles isEqualTo []) exitWith {
        [COMPONENT_BEAUTIFIED,"LEVEL","fnc_enableRearm","Module not syncd to any vehicle",_logic] call ark_admin_tools_fnc_log;
    };

    {
        _x call ark_ace_rearm_fnc_makeSource;
    } forEach _vehicles;
};