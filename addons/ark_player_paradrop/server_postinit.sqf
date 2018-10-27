[
    "ark_player_paradrop_eh_jumpController", 
    {
        params ["_vehicle"];

        private _jumpHeight = missionNamespace getVariable ["ark_player_paradrop_var_jumpHeight", 200];

        ark_player_paradrop_pfh_jumpLoop = [
            {
                params ["_args", "_id"];
                _args params ["_jumpHeight","_vehicle"];
                {
                    ["ark_player_paradrop_eh_playerJump", [_jumpHeight], (_x #0)] call CBA_fnc_targetEvent;
                } forEach (fullCrew [_vehicle, "cargo", false]);
            },
            3,
            [_jumpHeight,_vehicle]
        ] call CBA_fnc_addPerFrameHandler;

        [
            {count (fullCrew [_vehicle, "cargo", false]) isEqualTo 0},
            {
                [(_this #0)] call CBA_fnc_removePerFrameHandler;
                (_this #1) setVariable ["ark_player_paradrop_var_jumpInProgress", nil]; 
            },
            [ark_player_paradrop_pfh_jumpLoop,_vehicle]
        ] call CBA_fnc_waitUntilAndExecute;
    }
] call CBA_fnc_addEventHandler;