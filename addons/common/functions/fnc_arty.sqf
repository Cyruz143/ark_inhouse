#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Used to handle AI firing artillery at a given position
 * with randomisation and timings
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 * 1: Marker <STRING>
 * 2: Round count <NUMBER> (Optional)
 * 3: Delay <NUMBER> (Optional)
 * 4: Radius <NUMBER> (Optional)
 *
 * Return Value:
 * None
 *
 * Example:
 * [myVehicle, "mkrTarget", 5, 30, 50] call ark_common_fnc_arty
 */

params ["_vehicle", "_target", ["_roundCount", 3], ["_delay", 30], ["_radius", 50]];

private _gunner = effectiveCommander _vehicle;
{_gunner disableAI _x} forEach ["AUTOTARGET","FSM","AUTOCOMBAT"];

[
    {
        params ["_args", "_id"];
        _args params ["_gunner", "_target", "_roundCount", "_radius"];

        if (!alive _gunner) exitWith {_id call CBA_fnc_removePerFrameHandler};
        private _veh = vehicle _gunner;
        private _mag = currentMagazine _veh;
        private _targetPos = [_target, _radius] call CBA_fnc_randPos;

        if ((_targetPos inRangeOfArtillery [[_gunner], _mag]) isEqualTo false) exitWith {
            ERROR_MSG_2("fnc_arty, Error target %1 is out of range of %2",_target,_gunner);
        };

        _gunner doArtilleryFire [_targetPos, _mag, _roundCount];
        _veh setVehicleAmmoDef 1;
        _veh setVehicleAmmo 1;
    },
    _delay,
    [_gunner, _target, _roundCount, _radius]
] call CBA_fnc_addPerFrameHandler;
