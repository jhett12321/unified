#include <windows.h>
#include <detours.h>
#include "nwnx.hpp"

BOOL WINAPI DllMain(HINSTANCE hinst, DWORD dwReason, LPVOID reserved)
{
    LONG error;
    UNREFERENCED_PARAMETER(hinst);
    UNREFERENCED_PARAMETER(reserved);

    if (DetourIsHelperProcess())
        return TRUE;

    if (dwReason == DLL_PROCESS_ATTACH)
    {
        DetourRestoreAfterWith();
        NWNXLib::Platform::OpenLibrary("NWNX_Core", NULL);
    }

    return TRUE;
}
