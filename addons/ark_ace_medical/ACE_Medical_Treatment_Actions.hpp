class ace_medical_treatment_actions {
    class BasicBandage {
        treatmentTime = "ark_ace_medical_fnc_getBandageTime";
    };
    class PatDown: BasicBandage {
        callbackSuccess = "ark_ace_medical_fnc_putOutFire";
    };
};