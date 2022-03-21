ark_admin_tools_fnc_tpToLeader = {
    private _leader = leader group player;
    private _pos = getPos _leader;

    if (_leader != player) then {
        private _leaderVehicle = vehicle _leader;
        if (_leaderVehicle != _leader) then {
            private _success = player moveInAny _leaderVehicle;
            if !(_success) then {
                [["\A3\ui_f\data\map\mapcontrol\taskIconFailed_ca.paa", 2.0], ["No room in leaders vehicle!"]] call CBA_fnc_notify;
            };
        } else {
            player setPos getPos _leader;
        };
    } else {
        [["\A3\ui_f\data\map\mapcontrol\taskIconFailed_ca.paa", 2.0], ["You're the group leader, use manual TP"]] call CBA_fnc_notify;
    };
};