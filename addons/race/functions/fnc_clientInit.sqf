#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Client initialisation for race missions.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_race_fnc_clientInit
 */

if ((briefingName find "ark_race") isEqualTo -1) exitWith {};

INFO("fnc_clientInit, Race Mission Detected");
//Disable damage for vehicles and units
player addEventHandler ["GetInMan", {
    call FUNC(noDamage);
}];

player addEventHandler ["GetOutMan", {
    call FUNC(noDamage);
}];

//Cover starting in/out of vehicles
player allowDamage false;
(vehicle player) allowDamage false;

//Track units and addActions
call FUNC(createUnitMarker);
call FUNC(addActions);

[{(vehicle player) inArea boost_trigger}, {
    (vehicle player) setVelocityModelSpace [0,350,10]
}] call CBA_fnc_waitUntilAndExecute;
