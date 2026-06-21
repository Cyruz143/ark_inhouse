#include "script_component.hpp"

if (!hasInterface) exitWith {};

["Air", "HandleDamage", {
    _this call FUNC(fuelHit);
}] call CBA_fnc_addClassEventHandler;

["ark_vws_playSound", {
    params ["_snd"];
    playSound _snd;
}] call CBA_fnc_addEventHandler;
