#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Initialisation for Chase AI
 *
 * Arguments:
 * 0: Logic <MODULE>
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_chase_ai_fnc_init
 */

params ["_logic"];

private _syncdTrg = synchronizedObjects _logic;
if (_syncdTrg isEqualTo []) exitWith {
    ERROR_MSG("fnc_init, Trigger not sync'd to the module.");
};

if (count _syncdTrg > 1) then {
    WARNING("fnc_init, Only sync one trigger to the module");
};

private _unitTemplate = _logic getVariable ["Unit_Template", "ADMIRAL"];
if (_unitTemplate isEqualTo "") exitWith {
    ERROR_MSG("fnc_init, Blank unit template provided!");
};
if (_unitTemplate isEqualTo "ADMIRAL") then {
    _unitTemplate = adm_camp_defaultUnitTemplate;
    INFO_1("fnc_init, Using default unit template (%1)",_unitTemplate);
};

private _unitClassNames = _logic getVariable ["Unit_Classnames", "[ADMIRAL]"];
if (_unitClassNames isEqualTo "[ADMIRAL]") then {
    _unitClassNames = [_unitTemplate, "infantry"] call adm_common_fnc_getUnitTemplateArray;
    INFO_1("fnc_init, Using default unit classnames (%1)",_unitClassNames);
} else {
    _unitClassNames = call compile (_unitClassNames);
    if ((typeName _unitClassNames) isNotEqualTo "ARRAY") exitWith {
        ERROR_MSG_1("fnc_init, Improper classname formatting provided (%1), must be an ARRAY!",_unitClassNames);
    };
    INFO_1("fnc_init, Using custom unit classnames (%1)",_unitClassNames);
};

ark_chase_ai_var_triggerArea = _syncdTrg #0;
ark_chase_ai_var_unitTemplate = _unitTemplate;
ark_chase_ai_var_classNames = _unitClassNames;
ark_chase_ai_var_maxAIUnits = _logic getVariable ["Unit_Amount", 20];
ark_chase_ai_var_maxDistance = _logic getVariable ["Max_Distance", 500];
ark_chase_ai_var_minDistance = _logic getVariable ["Min_Distance", 300];
ark_chase_ai_var_wpAccuracy = (_logic getVariable ["Waypoint_Accuracy", 10]) max 10;
ark_chase_ai_var_spawnTime = (_logic getVariable ["Spawn_Time", 5]) max 1;
ark_chase_ai_var_allowNVGs = _logic getVariable ["Allow_NVGs", true];
ark_chase_ai_var_forceFlashlights = _logic getVariable ["Force_Flashlights", false];
ark_chase_ai_var_allowBS = _logic getVariable ["Allow_BuildingSearch", false];
ark_chase_ai_var_side = [ark_chase_ai_var_unitTemplate] call adm_common_fnc_getUnitTemplateSide;
ark_chase_ai_var_skillArray = ["Camp"] call adm_common_fnc_getZoneTemplateSkillValues;
ark_chase_ai_var_unitPool = [];
ark_chase_ai_var_spawning = false;
ark_chase_ai_var_compatFlashlights = createHashMap;

INFO_1("fnc_init, Deleting Module %1",_logic);
deleteVehicle _logic;

[{triggerActivated ark_chase_ai_var_triggerArea}, {
    [true] call FUNC(enableSpawning);
}] call CBA_fnc_waitUntilAndExecute;
