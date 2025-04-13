#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Fills the vehicle with infantry on a slow loop to avoid stuttering, assigns parachutes if required.
 *
 * Arguments:
 * 0: Cargo Classnames <ARRAY>
 * 1: Side <SIDE>
 * 2: Vehicle <OBJECT>
 * 3: Parachute <OBJECT>
 * 4: Logic <MODULE>
 *
 * Return Value:
 * Group
 *
 * Example:
 * [] call ark_rotor_fnc_createCargo
 */

params ["_cargoClassnames", "_side", "_vehicle", "_parachute", "_logic"];

private _skillArray = ["Camp"] call adm_common_fnc_getZoneTemplateSkillValues;
private _emptySeats = count (fullCrew [_vehicle, "", true] - fullCrew [_vehicle, "driver"]);
private _adjSeats = floor ((_logic getVariable ["Crew_Percentage", 50])/100 * _emptySeats);
private _grp = createGroup [_side, true];

[{
    params ["_args", "_id"];
    _args params ["_vehicle", "_adjSeats", "_grp", "_cargoClassnames", "_skillArray", "_parachute"];

    if (isNil "_vehicle" || { !alive _vehicle }) exitWith {
        ERROR_MSG("fnc_createCargo, Vehicle is dead or has incorrect classname");
        _id call CBA_fnc_removePerFrameHandler;
    };

    if (count (crew _vehicle) >= _adjSeats) exitWith {
        INFO_1("fnc_createCargo, Delayed spawning completed. Spawned total units (%1)",_adjSeats);
        _id call CBA_fnc_removePerFrameHandler;
    };

    private _unit = [[0,0,0], _grp, _cargoClassnames, _skillArray] call adm_common_fnc_placeMan;
    _unit assignAsCargo _vehicle;
    _unit moveInAny _vehicle;
    if (_parachute) then {
        removeBackpack _unit;
        _unit addBackpack "ACE_NonSteerableParachute";
    };
}, 1, [_vehicle, _adjSeats, _grp, _cargoClassnames, _skillArray, _parachute]] call CBA_fnc_addPerFrameHandler;

_grp
