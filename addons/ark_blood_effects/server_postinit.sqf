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
    if (!isNull objectParent _unit) exitWith {};

    private _blood = createSimpleObject [(selectRandom ark_blood_effects_var_models), (getPosWorld _unit)];
    _blood setDir random 360;
    _blood setVectorUp surfaceNormal position _blood;

    // Using ACE's medical_blood module to handle clean up
    ["ace_medical_blood_bloodDropCreated", [_blood]] call CBA_fnc_serverEvent;
};