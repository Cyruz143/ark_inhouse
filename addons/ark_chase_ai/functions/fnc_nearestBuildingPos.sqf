ark_chase_ai_fnc_nearestBuildingPos = {
    params ["_unit"];

    private _nearBuildings = (getPosATL _unit) nearEntities [["House", "Building"], 50];
    if (_nearBuildings isEqualTo []) exitWith {"outside"};

    private _buildingPositions = (_nearBuildings #0) buildingPos -1;
    if (_buildingPositions isEqualTo []) exitWith {"outside"};

    _buildingPositions = _buildingPositions apply {[_unit distance _x, _x]}
    _buildingPositions sort true;

    (_buildingPositions #0) #1 //return
};