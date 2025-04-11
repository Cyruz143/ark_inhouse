#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Adds Briefing entry for Paradrop
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_player_paradrop_fnc_addBriefing
 */

private _jumpHeight = missionNamespace getVariable [QGVAR(jumpHeight), 200];
private _jumpGap = missionNamespace getVariable [QGVAR(jumpGap), 1];
private _briefingText = format ["
    <br/>JUMP MASTER
    <br/>The pilot of the plane has control of the jump, once you're over the target AO, they can ACE self-interact and select Start Paradrop, this will drop all of the player cargo one unit at a time. Once the jump has started you'll have an option to stop the jump if run out of room.
    <br/><br/>CHUTE DEPLOY HEIGHT
    <br/>The chute will auto deply when you reach %1m, this requires no input from the player.
    <br/><br/>GAP BETWEEN JUMPS
    <br/>A player will be ejected every %2 seconds.", _jumpHeight, _jumpGap
];

player createDiaryRecord ["Diary", ["Static Line Jump", _briefingText]];
