["ark_player_paradrop_eh_jumpController", {
    params ["_vehicle"];

    private _jumpHeight = missionNamespace getVariable ["ark_player_paradrop_var_jumpHeight", 200];
    private _jumpGap = missionNamespace getVariable ["ark_player_paradrop_var_jumpGap", 1];
    private _fullPlayerCrew = [];

    {
        if (isPlayer (_x #0)) then {_fullPlayerCrew pushBack (_x #0)};
    } forEach (fullCrew [_vehicle, "cargo", false] + fullCrew [_vehicle, "turret", false]);

    [
        {
            params ["_args", "_id"];
            _args params ["_jumpHeight", "_vehicle", "_fullPlayerCrew"];

            private _unit = _fullPlayerCrew param [0, [objNull];

            if (isNull _unit || !(_vehicle getVariable ["ark_player_paradrop_var_jumpInProgress", false])) exitWith {
                _id call CBA_fnc_removePerFrameHandler;
                _vehicle setVariable ["ark_player_paradrop_var_jumpInProgress", nil, true];
            };

            ["ark_player_paradrop_eh_playerJump", [], _unit] call CBA_fnc_targetEvent;
        },
        _jumpGap,
        [_jumpHeight, _vehicle, _fullPlayerCrew]
    ] call CBA_fnc_addPerFrameHandler;
}] call CBA_fnc_addEventHandler;