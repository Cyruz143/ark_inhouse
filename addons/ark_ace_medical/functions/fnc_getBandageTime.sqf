ark_ace_medical_fnc_getBandageTime = {
    params ["_medic", "_patient", "_bodypart", "_bandage"];

    private _partIndex = ["head", "body", "leftarm", "rightarm", "leftleg", "rightleg"] find toLowerANSI _bodyPart;
    if (_partIndex < 0) exitWith {0};

    private _targetWound = [_patient, _bandage, _partIndex] call  ace_medical_treatment_fnc_findMostEffectiveWound;
    _targetWound params ["_wound", "_woundIndex", "_effectiveness"];

    // Everything is patched up on this body part already
    if (_wound isEqualTo [-1, -1, 0, 0, 0]) exitWith {0};

    _wound params ["_classID", "", "_amountOf", "_bloodloss", "_damage"];
    private _category = (_classID % 10);

    // Base bandage time is based on wound size and remaining percentage
    private _bandageTime = [2, 4, 6] select _category;

    // Medics are more practised at applying bandages
    if ([_medic] call ace_medical_treatment_fnc_isMedic) then {
        _bandageTime = _bandageTime + -2;
    };

    // Bandaging yourself requires more work
    if (_medic == _patient) then {
        _bandageTime = _bandageTime + 2;
    };

    // Nobody can bandage instantly
    _bandageTime max 2.5
};