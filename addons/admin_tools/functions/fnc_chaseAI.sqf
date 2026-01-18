#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Grabs all AI within a radius of the position and gives them a position to attack.
 *
 * Arguments:
 * 0: Position <POSITION> (default: [0, 0, 0])
 * 0: Distance <NUMBER> (default: 250)
 * 0: Teleport <BOOL> (default: false)
 *
 * Return Value:
 * None
 *
 * Example:
 * [[0,0,0], 50, false] call ark_admin_tools_fnc_chaseAI
 */

if (!is3DENPreview && {!isServer}) exitWith {};

params [["_pos",[0,0,0]],["_dist",250],["_tp",false]];

if (_pos isEqualTo [0,0,0]) exitWith {
    INFO("fnc_chaseAI, Invalid or No position passed.");
};

private _closeUnits = allUnits select {
    (side group _x) isEqualTo ([adm_camp_defaultUnitTemplate] call adm_common_fnc_getUnitTemplateSide) &&
    {isNull objectParent _x} &&
    {((getPosATL _x) distance2D _pos) <= _dist} &&
    {lifeState _x != "INCAPACITATED"} &&
    {!(_x getVariable ["ark_chase_ai_unit", false])}
};

{
    private _unit = _x;
    private _grp = group _unit;
    [_grp] call CBA_fnc_clearWaypoints;
    _grp setCombatMode "RED";

    if !(_unit checkAIFeature "PATH") then {
        if !(simulationEnabled _unit) then {
            _unit enableSimulation true;
        };
        {_unit enableAI _x} forEach ["PATH","MOVE"];
        if (_tp) then {
            private _safePos = (getPos _unit) findEmptyPosition [0, 10, "CAManBase"];
            if (_safePos isEqualTo []) exitWith {};
            _unit setPos _safePos;
        };
    };

    {_unit disableAI _x} forEach ["SUPPRESSION","AUTOCOMBAT"];
    _unit enableAttack false;
    _unit setBehaviour "AWARE";
    _unit setSpeedMode "FULL";
    _unit allowFleeing 0;
    private _targets = _unit targets [true, _dist];
    if (_targets isNotEqualTo []) then {
        {_unit forgetTarget _x} forEach _targets;
    };

    _unit setDestination [_pos, "LEADER PLANNED", true];
    _unit doMove _pos;
} forEach _closeUnits;

INFO_3("fnc_chaseAI, Chase AI executed with Args: %1, %2, %3",_pos,_dist,_tp);
