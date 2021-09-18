#pragma once

typedef const char* (__fastcall* _get_display_is_wd)(void);
DWORD get_display_is_wd_address = 0x48d130;
DWORD get_display_is_wd_instraction_size = 0x5;

BOOL __fastcall get_display_is_wd(void)
{
	return 1;
}