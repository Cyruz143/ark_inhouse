#include "script_component.hpp"

// Useful events
// TO DO: QGVAR(say3D) doesnt register...
["ark_common_say3D", {
    params ["_object", "_sound", ["_maxDistance", 100], ["_pitch", 1], ["_isSpeech", 1], ["_offset", 0], ["_speedOfSound", false]];
    _object say3D [_sound, _maxDistance, _pitch, _isSpeech, _offset, _speedOfSound];
}] call CBA_fnc_addEventHandler;
