ark_brass_totalCases = [];
ark_brass_maxCases = 1000;

["ark_brass_createdCase", {
    params ["_clientCaseArr"];

    ark_brass_totalCases append _clientCaseArr;
    private _totalCasings = count ark_brass_totalCases;

    if (_totalCasings > ark_brass_maxCases) then {
        for "_i" from 0 to (_totalCasings - ark_brass_maxCases) do {
            deleteVehicle (ark_brass_totalCases deleteAt 0);
        };
    };
}] call CBA_fnc_addEventHandler;