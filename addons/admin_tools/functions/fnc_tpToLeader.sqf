#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Teleports to Group Leader
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_admin_tools_fnc_tpToLeader
 */

private _leader = leader group player;
private _pos = getPosASL _leader;

if (_leader != player) then {
    private _leaderVehicle = vehicle _leader;
    if (_leaderVehicle != _leader) then {
        private _success = player moveInAny _leaderVehicle;
        if !(_success) then {
            [["\A3\ui_f\data\map\mapcontrol\taskIconFailed_ca.paa", 2.0], ["No room in leaders vehicle!"]] call CBA_fnc_notify;
        };
    } else {
        player setPosASL (_leader modelToWorldVisualWorld [0,-1,0]);
    };
} else {
    [["\A3\ui_f\data\map\mapcontrol\taskIconFailed_ca.paa", 2.0], ["You're the group leader, use manual TP"]] call CBA_fnc_notify;
};
