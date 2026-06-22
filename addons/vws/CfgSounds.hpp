class CfgSounds {
    class ark_vws_fuel_pressure {
        name = "ark_vws_fuel_pressure";
        sound[] = {"CUP\AirVehicles\CUP_AirVehicles_Core\data\betty\dws_warning_fuelpressure.wss", 2.5, 1, 1};
        titles[] = {};
    };
    class ark_vws_fuel_low:ark_vws_fuel_pressure {
        name = "ark_vws_fuel_low";
        sound[] = {"CUP\AirVehicles\CUP_AirVehicles_Core\data\betty\dws_caution_fuelow.wss", 2.5, 1, 1};
    };
    class ark_vws_fuel_critical:ark_vws_fuel_pressure {
        name = "ark_vws_fuel_critical";
        sound[] = {"CUP\AirVehicles\CUP_AirVehicles_Core\data\betty\dws_warning_fuelcritical.wss", 2.5, 1, 1};
    };
    class ark_vws_engine_failure:ark_vws_fuel_pressure {
        name = "ark_vws_engine_failure";
        sound[] = {"CUP\AirVehicles\CUP_AirVehicles_Core\data\betty\dws_critical_enginefailure.wss", 2.5, 1, 1};
    };
};
