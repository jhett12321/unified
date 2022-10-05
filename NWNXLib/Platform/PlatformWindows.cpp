#include "nwnx.hpp"
#include <windows.h>

namespace NWNXLib::Platform
{

static struct {
    long code;
    const char *function;
} lastError = {
    0,
    nullptr
};

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
    HINSTANCE hInstance;

    hInstance = LoadLibrary (fileName);
    if (hInstance == nullptr) {
        lastError.code = GetLastError ();
        lastError.function = "LoadLibrary";
    }

    return hInstance;
}

int CloseLibrary(void* handle)
{
    BOOL ok;
    int rc = 0;

    ok = FreeLibrary ((HINSTANCE)handle);
    if (!ok)
    {
        lastError.code = GetLastError ();
        lastError.function = "FreeLibrary";
        rc = -1;
    }

    return rc;
}

void* GetSymbol(void* handle, const char* name)
{
    FARPROC ptr = GetProcAddress ((HINSTANCE)handle, name);
    if (!ptr)
    {
        lastError.code = GetLastError ();
        lastError.function = "GetProcAddress";
    }

    return (void *)(intptr_t)ptr;
}

const char* GetError()
{
    static char errorStr [100];

    if (lastError.code)
    {
        sprintf (errorStr, "%s error #%ld", lastError.function, lastError.code);
        return errorStr;
    }
    else
    {
        return nullptr;
    }
}

}
