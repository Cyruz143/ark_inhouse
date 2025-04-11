#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Checks conditions are correct for Rotor to function, i.e. triggers supplied and template used.
 *
 * Arguments:
 * 0: Logic <MODULE>
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_rotor_fnc_checkTrigger
 */

params ["_logic"];

private _syncdTrg = synchronizedObjects _logic;
if (_syncdTrg isEqualTo []) exitWith {
    ERROR_MSG("fnc_checkTrigger, Trigger not sync'd to the module");
};

if (count _syncdTrg > 1) then {
    WARNING("fnc_checkTrigger, Only sync one trigger to the module");
};

private _trigger = _syncdTrg #0;
private _syncUnits = [];

{
    if ((typeOf _x) isEqualTo "C_Jeff_VR") then {
        _syncUnits pushBack _x;
    };
} forEach synchronizedObjects _trigger;

if (count _syncUnits > 1) then {
    WARNING("fnc_checkTrigger, Only sync one VR entity to the trigger");
};

private _vrUnit = _syncUnits #0;

if (isNil "_vrUnit") exitWith {
    ERROR_MSG_1("fnc_checkTrigger, No VR Entity sync'd with trigger (%1)",_trigger);
};

private _waypoints = waypoints (group _vrUnit);
if (count _waypoints < 3) exitWith {
    ERROR_MSG_1("fnc_checkTrigger, VR Entity (%1) needs minimum of 2 waypoints",_vrUnit);
};

deleteVehicle _vrUnit;
INFO_1("fnc_checkTrigger, VR Entity Deleted (%1)",_vrUnit);
private _unitTemplate = adm_camp_defaultUnitTemplate;
private _vehicleClassname = _logic getVariable ["Vehicle_ClassName", "Default"];

if (_vehicleClassname isEqualTo "Default") then {
    private _heloArray = [_unitTemplate, "th"] call adm_common_fnc_getUnitTemplateArray;
    if (isNil "_heloArray" || { _heloArray isEqualTo [] }) exitWith {
        ERROR_MSG("fnc_checkTrigger, No Helicopter defined in Admiral Template");
    };
    _vehicleClassname = selectRandom _heloArray;
};

private _routineFunction = _logic getVariable ["Routine_Function", {FUNC(paradrop)}];

INFO_6("fnc_checkTrigger, Compiled Rotor routine: %1, %2, %3, %4, %5, %6",_logic,_trigger,_vehicleClassname,_unitTemplate,_waypoints,_routineFunction);
[_logic, _trigger, _vehicleClassname, _unitTemplate, _waypoints] call (call compile _routineFunction);
