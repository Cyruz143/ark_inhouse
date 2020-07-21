{
    [_x, "init", {
        params ["_vehicle"];

        private _return = _vehicle setFeatureType 2;

        if (!_return) then {
            diag_log ["[ARK] (AI Vehicles) - Maximum number of vehicles added using setFeatureType. Not adding for: %1",_vehicle];
        };
    }] call CBA_fnc_addClassEventHandler;
} forEach ["Air","Car","Tank"];