["ark_player_paradrop_eh_jumpController", {
    params ["_vehicle"];

    private _jumpHeight = missionNamespace getVariable ["ark_player_paradrop_var_jumpHeight", 200];
    private _jumpGap = missionNamespace getVariable ["ark_player_paradrop_var_jumpGap", 1];

    [
        {
            params ["_args", "_id"];
            _args params ["_jumpHeight", "_vehicle"];

            private _unit = fullCrew [_vehicle, "cargo", false] param [0, [objNull]] select 0;

            if (isNull _unit || !(_vehicle getVariable ["ark_player_paradrop_var_jumpInProgress", false])) exitWith {
                _id call CBA_fnc_removePerFrameHandler;
                _vehicle setVariable ["ark_player_paradrop_var_jumpInProgress", nil, true];
            };

            if (local _unit && !isPlayer _unit) then {
                [_unit] call ark_player_paradrop_fnc_doJump;
            } else {
                ["ark_player_paradrop_eh_playerJump", [], _unit] call CBA_fnc_targetEvent;
            };
        },
        _jumpGap,
        [_jumpHeight, _vehicle]
    ] call CBA_fnc_addPerFrameHandler;
}] call CBA_fnc_addEventHandler;