ark_admin_tools_fnc_disablePreventInstaDeath = {
    if !((briefingName find "ark_gtvt") isEqualTo -1) then {
        player setvariable ["ace_medical_preventInstaDeath", false, true];
    };
};

[] call ark_admin_tools_fnc_disablePreventInstaDeath;