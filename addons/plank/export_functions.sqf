#include "script_component.hpp"

#define NEW_LINE                toString [13, 10]

plank_export_fnc_preInit = {
    plank_export_deployedForts = [];
};

plank_export_fnc_addFort = {
    params ["_unit","_fort"];

    private _exportData = [
        typeOf _fort,
        getPosASL _fort,
        getDir _fort,
        _unit getVariable ["plank_deploy_fortPitch", 0],
        _unit getVariable ["plank_deploy_fortBank", 0]
    ];
    PUSH(plank_export_deployedForts,_exportData);
};

plank_export_fnc_export = {
    private _exportCode = format ['comment "Exported from Plank.";%1', NEW_LINE];
    if (isNil {blufor}) then {
        _exportCode = _exportCode + format ['comment "Requires BIS functions modules.";%1%1', NEW_LINE];
    };
    {
        _exportCode = _exportCode + ([_x] call plank_export_fnc_getFortCode);
    } forEach plank_export_deployedForts;

    copyToClipboard _exportCode;
};


plank_export_fnc_getFortCode = {
    params ["_exportData"];

    private _exportCode = format ['private "_fortification";%1', NEW_LINE];
    _exportCode = _exportCode + format ['_fortification = createVehicle ["%1", [0,0,0], [], 0, "NONE"];%2', _exportData select 0, NEW_LINE];
    _exportCode = _exportCode + format ['_fortification setPosASL %1;%2', _exportData select 1, NEW_LINE];
    _exportCode = _exportCode + format ['_fortification setDir %1;%2', _exportData select 2, NEW_LINE];
    _exportCode = _exportCode + format ['[_fortification, %1, %2] call BIS_fnc_setPitchBank;%3%3', _exportData select 3, _exportData select 4, NEW_LINE];

    _exportCode;
};
