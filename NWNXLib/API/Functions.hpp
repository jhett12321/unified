#pragma once

#include "API/nwn_api.hpp"

namespace NWNXLib::API::Functions {
    void Initialize();

#define NWNXLIB_FUNCTION(name, symgcc, symmsvc) \
    extern void* name;

#include "FunctionsList.hpp"

#undef NWNXLIB_FUNCTION
}
