#include "script_component.hpp"

if (isServer) then {
    call FUNC(serverInit);
};

if (hasInterface) then {
    call FUNC(clientInit);
};
