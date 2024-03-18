ark_ace_medical_fnc_getBandageTime = {
    params ["_medic", "_patient", "_bodyPart", "_bandage"];

    private _partIndex = ["head", "body", "leftarm", "rightarm", "leftleg", "rightleg"] find toLowerANSI _bodyPart;
    if (_partIndex < 0) exitWith { 0 };

    private _targetWounds = [_patient, _bandage, _bodyPart] call ace_medical_treatment_fnc_findMostEffectiveWounds;

    private _woundCount = count _targetWounds;
    // Everything is patched up on this body part already
    if (_woundCount == 0) exitWith {0};

    // Base bandage time is based on wound size and remaining percentage
    private _bandageTimesArray = [2, 4, 5];
    private _bandageTime = 0;

    {
        private _wound = _x;
        _wound params ["_classID", "", "_amountOf"];
        _y params ["_effectiveness", "", "_impact"];
        private _category = (_classID % 10);

        // Base bandage time is based on wound size and remaining percentage
        private _woundTime = _bandageTimesArray select _category;

        // Scale bandage time based on amount left and effectiveness (less time if only a little wound left)
        _bandageTime = _bandageTime + _woundTime;
    } forEach _targetWounds;

    // Medics are more practised at applying bandages
    if ([_medic] call ace_medical_treatment_fnc_isMedic) then {
        _bandageTime = _bandageTime + -2;
    };

    // Bandaging yourself requires more work
    if (_medic == _patient) then {
        _bandageTime = _bandageTime + 2;
    };

    // Bandaging multiple injuries doesn't require opening a new bandage each time
    if (_woundCount > 1) then {
        _bandageTime = _bandageTime - (2 * _woundCount);
    };

    // Nobody can bandage instantly
    _bandageTime max 2.25
};