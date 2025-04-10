#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Enable NVG Overlay for colourblind people
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_player_nvgs_fnc_enableOverlay
 */

GVAR(ppHandle) = ppEffectCreate ["colorCorrections", 1501];
GVAR(ppHandle) ppEffectAdjust [0.4, 0.6, 0, [0, 0.1, 0.4, 0], [0.3, 0.9, 2.4, 0], [1, 1, 1, 0]];
GVAR(ppHandle) ppEffectForceInNVG true;
GVAR(ppHandle) ppEffectCommit 0;

if (isNil QGVAR(nvgEH)) then {
    GVAR(nvgEH) = ["visionMode", {
        params ["_unit", "_visionMode"];

        GVAR(ppHandle) ppEffectEnable ([false, true] select _visionMode);
    }] call CBA_fnc_addPlayerEventHandler;
};

if (visibleMap) then {
    openMap false;
    [["\A3\ui_f\data\map\MapControl\taskicondone_ca.paa", 2.0], ["Colour blind overlay enabled"]] call CBA_fnc_notify;
};

if (currentVisionMode player == 1) then {
    GVAR(ppHandle) ppEffectEnable true;
};
