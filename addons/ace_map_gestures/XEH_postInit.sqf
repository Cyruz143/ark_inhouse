#include "script_component.hpp"

if (!hasInterface) exitWith {};

{
    [_x, [1, 0, 0, 0.95], [1, 0, 0, 0.7]] call ace_map_gestures_fnc_addGroupColorMapping;
} forEach ["ASL", "A1", "A2", "A3", "A4", "APC1", "IFV1", "TNK1"];

{
    [_x, [0, 0, 1, 0.95], [0, 0, 1, 0.7]] call ace_map_gestures_fnc_addGroupColorMapping;
} forEach ["BSL", "B1", "B2", "B3", "B4", "APC2", "IFV2", "TNK2"];

{
    [_x, [0, 0, 0.8, 0.95], [0, 0, 0.8, 0.7]] call ace_map_gestures_fnc_addGroupColorMapping;
} forEach ["CSL", "C1", "C2", "C3", "C4", "APC3", "IFV3", "TNK3"];

{
    [_x, [0.5, 0.25, 0, 0.95], [0.5, 0.25, 0, 0.7]] call ace_map_gestures_fnc_addGroupColorMapping;
} forEach ["DSL", "D1", "D2", "D3", "D4", "APC4", "IFV4", "TNK4"];

{
    [_x, [0.85, 0.40, 0, 0.95], [0.85, 0.40, 0, 0.7]] call ace_map_gestures_fnc_addGroupColorMapping;
} forEach ["CAS1", "CAS2", "ENG1", "ENG2", "ENG3", "ENG4", "MMG1", "MMG2", "MMG3", "MMG4", "MAT1", "MAT2", "MAT3", "MAT4", "HMG1", "HMG2", "HMG3", "HMG4", "HAT1", "HAT2", "HAT3", "HAT4", "TH1", "TH2", "TH3", "TH4", "AH1", "AH2", "AH3", "AH4"];

["CO", [0.86, 0.86, 0, 0.95], [0.86, 0.86, 0, 0.7]] call ace_map_gestures_fnc_addGroupColorMapping;
