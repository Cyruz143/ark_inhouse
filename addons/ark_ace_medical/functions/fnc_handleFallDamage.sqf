// From @Diwako - https://github.com/diwako/ace_medical_tweaks/blob/master/addons/main/functions/fnc_handleFallDamage.sqf
ark_ace_medical_fnc_handleFallDamage = {
    params ["_unit", "_allDamages", "_typeOfDamage"];
    private _copy = _allDamages call BIS_fnc_arrayShuffle;
    private _addDamage = 0;
    private _lethality = 0;
    for "_" from 2 to ((count _copy) - 1)  do {
        private _deleted = _copy deleteAt 0;
        _addDamage = _addDamage + (_deleted select 0);
        _lethality = _lethality + (_deleted select 2);
    };

    {
        _x set [0, (_x select 0) + (_addDamage / 2)];
        _x set [2, (_x select 2) + (_lethality / 2)];
    } forEach _copy;

    [_unit, _copy, _typeOfDamage]
};