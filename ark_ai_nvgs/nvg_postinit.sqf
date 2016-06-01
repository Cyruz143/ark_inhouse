if isServer then {
  addMissionEventHandler ["EntityKilled", {
    private [ "_unit", "_hmd" ];
    _unit = _this select 0;
    _hmd = hmd _unit;
    if ( _hmd == "NVGoggles_AI" ) then {
      _unit unlinkItem _hmd;
    };
  }];
};