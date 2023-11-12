ark_chase_ai_fnc_nearestBuildingPos = {
    params ["_unit"];

    // Catch in doMove fnc as bad pos!
    private _buildingPos = "outside";

    private _nearBuildings = (nearestObjects [_unit, ["House", "Building"], 50]);
    if (_nearBuildings isEqualTo []) exitWith {_buildingPos};

    private _nearestBuilding = _nearBuildings #0;
    private _buildingPositions = _nearestBuilding buildingPos -1;
    if (_buildingPositions isEqualTo []) exitWith {_buildingPos};

    private _buildingPosDistance = [];
    {
        private _distance = _unit distance _x;
        _buildingPosDistance pushBack [_distance, _x];
    } forEach _buildingPositions;

    _buildingPosDistance sort true;

    private _buildingPos = (_buildingPosDistance #0) #1;
    _buildingPos //return
};