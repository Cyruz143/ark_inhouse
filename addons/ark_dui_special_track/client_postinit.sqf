[
    {
        params ["_args", "_id"];
        if (!alive player) exitWith {_id call CBA_fnc_removePerFrameHandler};
        diwako_dui_special_track = (ASLToAGL getPosASL player) nearEntities ["Man", 100] select {side _x isEqualTo side player && { group _x != group player } };
    },
    2.5
] call CBA_fnc_addPerFrameHandler;