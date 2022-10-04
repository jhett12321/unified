#include "nwnx.hpp"

namespace NWNXLib::Platform
{

bool IsDebuggerPresent()
{
    return false;
}

std::string GetStackTrace(uint8_t levels)
{
    return "";
}

void* OpenLibrary(const char* fileName, int flags)
{
    return nullptr;
}

int CloseLibrary(void* handle)
{
    return false;
}

void* GetSymbol(void* handle, const char* name)
{
    return nullptr;
}

const char* GetError()
{
    return nullptr;
}

}
