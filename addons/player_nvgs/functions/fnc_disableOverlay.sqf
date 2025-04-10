#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Disable NVG Overlay for colourblind people
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_player_nvgs_fnc_disableOverlay
 */

GVAR(ppHandle) ppEffectEnable false;
ppEffectDestroy GVAR(ppHandle);

if (visibleMap) then {
    openMap false;
    [["\A3\ui_f\data\map\MapControl\taskiconfailed_ca.paa", 2.0], ["Colour blind overlay disabled"]] call CBA_fnc_notify;
};
