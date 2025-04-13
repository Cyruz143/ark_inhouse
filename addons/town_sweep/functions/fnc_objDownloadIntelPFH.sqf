#include "..\script_component.hpp"
/*
 * Author: Mike
 * Terminal download, will take 3 minutes from start to finish (not counting animation fanciness)
 *
 * Arguments:
 * 0: Object <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_town_sweep_fnc_objDownloadIntelPFH
 */

params ["_object"];

// both of these go from 0 - 100 on the source for some reason, same as the progress bars.
_object animateSource ["Terminal_source", 100, 0.5];
_object animateSource ["Terminal_source_sound", 100, true];
_object allowDamage false;
_object setVariable [QGVAR(downloadInProgress), true, true];

// Server only, no need for marker globally visible.
private _marker = createMarkerLocal [QGVAR(downloadIntelForPlayersMarker), _object];
_marker setMarkerShapeLocal "ELLIPSE";
_marker setMarkerSizeLocal [5, 5];

/*
 * First stage goes up by 2, 50 iterations to 100.
 * Second stage is 100 iterations as it's 1 per.
 * 180s / 150 iterations = 1.2s
*/

[{
    params ["_args", "_handle"];
    _args params ["_object", ["_prepare", 0], ["_download", 0], ["_progress", 0], ["_preSetSource", true]];

    // Stops anything from happening until case is opened.
    if (_preSetSource) exitWith {
        if (_object animationSourcePhase "Terminal_source" >= 55) then {
            _args set [4, false];
        };
    };

    private _players = [true] call EFUNC(common,players);
    private _inArea = (_players findIf {_x inArea QGVAR(downloadIntelForPlayersMarker)}) != -1;

    if (!_inArea) exitWith {
        playSound3D ["a3\missions_f_beta\data\sounds\firing_drills\checkpoint_not_clear.wss", objNull, false, getPosASL _object, 3];
    };

    if (_prepare < 100) then {
        _args set [1, (_prepare + 2)];
        _object animateSource ["Preparing_source", _prepare, true];
    };

    if (_download < 100 && _prepare == 100) then {
        private _increment = _download + 1;
        _args set [2, _increment];
        _args set [3, _increment];
        _object animateSource ["Downloading_source", _increment, true];
        _object animateSource ["Progress_source", _increment, true];
    };

    if (_progress == 100) exitWith {
        playSound3D ["a3\missions_f_beta\data\sounds\firing_drills\checkpoint_clear.wss", objNull, false, getPosASL _object, 3];
        _object setObjectTextureGlobal [0, "#(argb,8,8,3)color(0,0.22745098,0.96862745,0.99,ca)"];
        _object setObjectTextureGlobal [1, "#(argb,8,8,3)color(0,0.22745098,0.96862745,0.99,ca)"];
        _object setObjectTextureGlobal [2, "#(argb,8,8,3)color(0,0.22745098,0.96862745,0.99,ca)"];

        _handle call CBA_fnc_removePerFrameHandler;
        deleteMarkerLocal QGVAR(downloadIntelForPlayersMarker);

        // Instantly lower the terminal sources to cut off the excess, then animate it closed properly.
        _object animateSource ["Terminal_source", 55, true];
        _object animateSource ["Terminal_source_sound", 55, true];
        [QGVAR(downloadIntelCompletedEvent), []] call CBA_fnc_serverEvent;
        [{
            params ["_object"];
            _object animateSource ["Terminal_source", 0, 0.5];
            _object animateSource ["Terminal_source_sound", 0, 0.5];
        }, [_object], 0.2] call CBA_fnc_waitAndExecute;
    };
}, 1.2, [_object]] call CBA_fnc_addPerFrameHandler;
