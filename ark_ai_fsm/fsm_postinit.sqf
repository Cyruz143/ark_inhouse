
/*
	Returns statics 
	_weapon: "arifle_mxm_whatever",
	_weapon_config: (configfile >> cfgweapons >> arifle_mxm_whatever)
	_weapon_slot: "primary",
	_weapon_optics: "sight_whatever",
	_optic_type:
		:0 None
		:1 Sight
		:2 Scope
	_weapon_range:
		[ MIN, MID, MAX ]
*/
ark_ai_fsm_normalize_weapon = {
	params["_unit"];	

	// Check weapon currently equipped
	private _weapon = currentweapon _unit;
	if(isnil "_weapon") exitwith { [] };

	// Check to see which slot the weapon occupies
	private _weapon_config = (configfile >> "cfgweapons" >> _weapon);
	private _weapon_slot = "primary";
	if ( secondaryweapon _unit == _weapon ) then { 
		_weapon_slot = "secondary";
	}
	else {
		if ( primaryweapon _unit != _weapon ) then {
			_weapon_slot = "handgun";
		};
	};

	// Get the optics of the weapon
	private _weapon_optics = "";
	if ( _weapon_slot == "primary" ) then {
		_weapon_optics = (primaryweaponitems _unit) select 2;
	}
	else {
		if ( _weapon_slot == "secondary" ) then {
			_weapon_optics = (secondaryweaponitems _unit) select 2;
		}
		else {
			_weapon_optics = (handgunitems _unit) select 2;
		};
	};

	// Check for weapon optic
	private _optic_type = 0;
	if ( _weapon_optics != "" ) then {
		_optic_type = getNumber(configFile >> "cfgweapons" >> _weapon_optics >> "iteminfo" >> "optictype");
	};

	// Calculate engagement ranges
	private _weapon_range = [-1, -1, -1]; // min, mid, max
	if ( _weapon_slot == "secondary" || _weapon_slot == "handgun" ) then {
		_weapon_range = [0, 50, 150];
	}
	else {
		if ( _optic_type == 1 ) then {
			_weapon_range = [100, 300, 650];
		}
		else {
			if ( _optic_type == 2 ) then {
				_weapon_range = [100, 650, 1100];
			}
			else {
				_weapon_range = [50, 200, 500];
			};
		};
	};

	// Return results
	[
		_weapon,
		_weapon_config,
		_weapon_slot,
		_weapon_optics,
		_optic_type,
		_weapon_range
	]
};




