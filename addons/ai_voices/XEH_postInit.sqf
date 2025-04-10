#include "script_component.hpp"

if !(GVAR(enabled)) exitWith {};

if (isServer) then {
    GVAR(nameSpace) = createHashMap;
    GVAR(deathSounds) = [MACRO_DEATH_SOUNDS];

    ["CAManBase", "FiredMan", {
        _this call FUNC(firing);
    }] call CBA_fnc_addClassEventHandler;

    ["CAManBase", "Killed", {
        _this call FUNC(killed);
    }] call CBA_fnc_addClassEventHandler;

    ["CAManBase", "GestureChanged", {
        _this call FUNC(reloading);
    }] call CBA_fnc_addClassEventHandler;

    ["CAManBase", "Suppressed", {
        _this call FUNC(suppressed);
    }] call CBA_fnc_addClassEventHandler;

    ["ace_unconscious", {
        _this call FUNC(unconscious);
    }] call CBA_fnc_addEventHandler;
};

if (hasInterface) then {
    [QGVAR(stopSound), {
        params ["_unit"];

        stopSound (_unit getVariable [QGVAR(sid), nil]);
    }] call CBA_fnc_addEventHandler;

    [QGVAR(ps3d), {
        params ["_unit","_snd"];

        if ((positionCameraToWorld [0,0,0]) distance _unit > 150) exitWith {};

        private _isInside = !isNull objectParent _unit || { insideBuilding _unit > 0.2 };

        private _sid = playSound3D [_snd, _unit, _isInside, getPosASL _unit, 5, 1, 200, 0, true];
        _unit setVariable [QGVAR(sid), _sid];

        _unit setRandomLip true;
        [{
            params ["_unit"];
            _unit setRandomLip false;
        }, [_unit], 1] call CBA_fnc_waitAndExecute;
    }] call CBA_fnc_addEventHandler;
};
