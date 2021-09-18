#include "pch.h"
#include "hook.h"
#include "display_is_wd.h"

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    {
        create_hook(
            (BYTE*)get_display_is_wd_address,
            (BYTE*)get_display_is_wd,
            get_display_is_wd_instraction_size
        );
        break;
    }
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

