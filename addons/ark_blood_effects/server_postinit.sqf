ark_blood_effects_var_models = [
    "a3\Props_F_Orange\Humanitarian\Garbage\BloodPool_01_Large_F.p3d",
    "a3\Props_F_Orange\Humanitarian\Garbage\BloodPool_01_Medium_F.p3d",
    "a3\Props_F_Orange\Humanitarian\Garbage\BloodSplatter_01_Large_F.p3d",
    "a3\Props_F_Orange\Humanitarian\Garbage\BloodSplatter_01_Medium_F.p3d",
    "a3\Props_F_Orange\Humanitarian\Garbage\BloodSpray_01_F.p3d"
];

addMissionEventHandler ["EntityKilled", {call ark_blood_effects_fnc_createBlood}];

ark_blood_effects_fnc_createBlood = {
    params ["_unit"];

    // Ignore units in vehicles
    if (!(_unit isKindOf "CAManBase") || { !(isNull objectParent _unit) }) exitWith {};

    private _pos = getPosASL _unit;
    private _lisPos = (lineIntersectsSurfaces [_pos, _pos vectorAdd [0,0,-1e11], objNull, objNull, true, 1, "ROADWAY", "FIRE"]) #0;
    private _blood = createSimpleObject [(selectRandom ark_blood_effects_var_models), (_lisPos #0), true];
    _blood setDir (random 360);
    _blood setVectorUp _lisPos #1;

    // Using ACE's medical_blood module to handle clean up
    ["ace_medical_blood_bloodDropCreated", [_blood,_unit]] call CBA_fnc_serverEvent;
};