#include "script_component.hpp"

if (!isServer) exitWith {};

{
    [_x, "init", {
        params ["_vehicle"];
            if !(isClass (configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "AcreRacks" >> "Rack_1")) exitWith {
                INFO_1("ACRE Racks: Skipping %1 as it has no rack radios",_vehicle);
            };

            private _ret = [_vehicle] call acre_api_fnc_removeAllRacksFromVehicle;
            if (_ret) then {
                INFO_1("ACRE Racks: Successfully removed rack from: %1",_vehicle);
            } else {
                ERROR_1("ACRE Racks: Failed to remove rack from: %1",_vehicle);
            };
    }] call CBA_fnc_addClassEventHandler;
} forEach ["Air","Car","Tank"];