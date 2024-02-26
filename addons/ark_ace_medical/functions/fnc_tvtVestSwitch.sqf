ark_ace_medical_fnc_tvtVestSwitch = {
    params ["_unit"];

    private _loadout = [_unit] call acre_api_fnc_filterUnitLoadout;
    private _vest = toLowerANSI (_loadout #4 #0);
    private _idx = _vest find "_arm";
    private _newClass = _vest select [0,_idx];

    if (isClass (configFile >> "CfgWeapons" >> _newClass)) then {
        [_loadout, [4,0], _newClass] call BIS_fnc_setNestedElement;
        _unit setUnitLoadout _loadout;
        ["ACE Medical", "INFO", "fnc_tvtVestSwitch", "Players vest replaced with", _newClass] call ark_admin_tools_fnc_log;
    } else {
        ["ACE Medical", "ERROR", "fnc_tvtVestSwitch", "Invalid classname was returned", _newClass] call ark_admin_tools_fnc_log;
    };
};

{
    if ((toLowerANSI briefingName) find _x isNotEqualTo -1) exitWith {
        [{(_this #0) getVariable ["hull3_gear_radiosAssigned", false]}, {call ark_ace_medical_fnc_tvtVestSwitch}, [ace_player]] call CBA_fnc_waitUntilAndExecute;
    };
} forEach ["ark_tvt","ark_gtvt","ark_cotvt","ark44_tvt","ark44_gtvt","ark44_cotvt"];