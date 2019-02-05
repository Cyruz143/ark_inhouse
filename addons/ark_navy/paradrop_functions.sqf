ark_navy_fnc_paradrop = {
    params ["_logic", "_trigger", "_vehicleClassname", "_unitTemplate", "_waypoints"];

    private _side = [_unitTemplate] call adm_common_fnc_getUnitTemplateSide;
    _vehicle = [_vehicleClassname, _trigger, _logic] call ark_navy_fnc_createVehicle;
    
    private _pilotClassname = selectRandom (getArray (configfile >> "Admiral" >> "UnitTemplates" >> _unitTemplate >> "pilots"));
    _pilot = [_pilotClassname, _side, _vehicle] call ark_navy_fnc_createPilot;
    
    private _cargoClassnames = [_unitTemplate, "infantry"] call adm_common_fnc_getUnitTemplateArray;
    _cargoGroup = [_cargoClassnames, _side, _vehicle] call ark_navy_fnc_createCargo;

    private _paradropWP = [_pilot, _waypoints, 1, _logic] call ark_navy_fnc_addWaypoint;
    private _deleteWP = [_pilot, _waypoints, 2, _logic] call ark_navy_fnc_addWaypoint;
    
    [
        {((_this #0) distance (getWPPos (_this #1))) < 500},
        {
            [(_this #0)] call ark_navy_fnc_jumpController;
        },
        [_vehicle,_paradropWP]
    ] call CBA_fnc_waitUntilAndExecute;

    [
        {((_this #0) distance (getWPPos (_this #1))) < 750},
        {
            {(_this #0) deleteVehicleCrew _x} forEach crew (_this #0);
            deleteVehicle (_this #0);
        },
        [_vehicle,_deleteWP]
    ] call CBA_fnc_waitUntilAndExecute;
};

ark_navy_fnc_jumpController = {
    params ["_vehicle"];
    [
        {
            params ["_args", "_id"];
            _args params ["_vehicle"];

            private _unit = fullCrew [_vehicle, "cargo", false] param [0, [objNull]] select 0;

            if (isNull _unit) exitWith {
                _id call CBA_fnc_removePerFrameHandler;
            };

            [_unit,_vehicle] call ark_navy_fnc_doJump;
        },
        0.5,
        [_vehicle]
    ] call CBA_fnc_addPerFrameHandler;
};

ark_navy_fnc_doJump = {
    params ["_unit", "_vehicle"];

    private _jumpDirection = ((getDir _vehicle) - 180);
    unassignVehicle _unit;
    moveOut _unit;
    _unit setDir _jumpDirection;
};