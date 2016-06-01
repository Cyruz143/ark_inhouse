#include "ark_macros.h"

if !(ark_deploy_deployEnabled) exitWith {};

[] call ark_deploy_fnc_activatePostGroupDeploy;