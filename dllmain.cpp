#include "stdafx.h"
#include "SDK/PL_Engine_parameters.hpp"
#include "SDK/PL_TgClient_parameters.hpp"
#include "process_event.h"
#include <detours/detours.h>
#include "utils/TEB.h"
#include "memory_manager.h"

HMODULE moduleBase;
tProcessEvent ProcessEventOriginal = nullptr;

uintptr_t xorKey;

// HOOK
void ProcessEventHook(UObject* pObject, UFunction* pFunction, const void* pParams, __int64 pResult) {
	auto FunctionName = pFunction->GetFullName();

	if (FunctionName == _xor_("Function TgClient.TgGameViewportClient.PostRender"))
		MainLoop(((UTgGameViewportClient_PostRender_Params*)(pParams))->Canvas);

	return SpoofCall<void>((PVOID)ProcessEventOriginal, pObject, pFunction, pParams, pResult);
}

// TODO: Use engine input instead since this will probably get detected (or not, ty hirez)
bool HookKeyState() {
	HMODULE API = (HMODULE)GetModuleBase(_xor_(L"win32u.dll"));
	
	if (API != NULL)
	{
		o_getasynckeystate = SpoofCall<LPFN_MBA>(GetProcAddress, API, _xor_("NtUserGetAsyncKeyState"));
		if (o_getasynckeystate != NULL)
			return true;
		else
			return false;
	}
}

void Main() {
#ifdef DEBUG
	AllocConsole();
	freopen(_xor_("conin$"), _xor_("r"), stdin);
	freopen(_xor_("conout$"), _xor_("w"), stdout);
	freopen(_xor_("conout$"), _xor_("w"), stderr);

	//MessageBox(0, _xor_("DEBUG"), _xor_("DEBUG"), 0);
#endif // DEBUG
	
	// Settings helper
	ResetSettings();

	// TODO: Config
	// Could use NSeven's one

	moduleBase = (HMODULE)GetModuleBase(_xor_(L"Paladins.exe"));
	
	GObject = GetMovAddress<decltype(GObject)>(FindPattern(_xor_("48 8B 05 ? ? ? ? 4C 8B 04 0A 4C 33 04 F0 44"), _xor_(L"Paladins.exe")));
	GName = GetMovAddress<decltype(GName)>(FindPattern(_xor_("48 8B 05 ? ? ? ? B9 ? ? ? ? 48 8B 0C 0A 48 BA"), _xor_(L"Paladins.exe")));
	Globals::UEngineAddr = GetMovAddress<DWORD_PTR>(FindPattern(_xor_("48 8B 0D ? ? ? ? 48 85 C9 0F 84 ? ? ? ? 48 39 B9 ? ? ? ?"), _xor_(L"Paladins.exe")));
	ProcessEventOriginal = GetCallAddress<tProcessEvent>(FindPattern(_xor_("E8 ? ? ? ? 8D 4E FD"), _xor_(L"Paladins.exe")));

	Globals::Engine = (UEngine*)(*(uintptr_t*)Globals::UEngineAddr);

	//Globals::xorFunc = GetCallAddress<void*>(PatternScan<void*>(_xor_("E8 ? ? ? ? 85 C0 75 0F 48 8B 03"), (uint64_t)moduleBase, SizeOfImage));
	Globals::xorFunc = GetCallAddress<void*>(FindPattern(_xor_("E8 ? ? ? ? 85 C0 75 0F 48 8B 03"), _xor_(L"Paladins.exe")));
	xorKey = (uintptr_t)GetAndValue<void*>((void*)((DWORD64)Globals::xorFunc + 0x63));

	PBYTE tramp1 = United(moduleBase, _xor_("\x48\x83\xC4\x68\xC3"), _xor_("xxxxx"), 0);
	PBYTE tramp2 = United(moduleBase, _xor_("\xFF\xE3"), _xor_("xx"), 0);

	FC::SetSpoofStub((void*)tramp1, (void*)tramp2);

#ifdef DEBUG
	printf(_xor_("Module       : 0x%p\n"), moduleBase);
	//printf(_xor_("Legit Tramp  : 0x%p\n"), game_rbx_jmp);
	printf(_xor_("GObjects     : 0x%p\n"), GObject);
	printf(_xor_("GNames       : 0x%p\n"), GName);
	printf(_xor_("UEngine      : 0x%p (0x%p)\n"), Globals::UEngineAddr, Globals::Engine);
	printf(_xor_("ProcessEvent : 0x%p\n"), (uintptr_t*)ProcessEventOriginal);
	printf(_xor_("XOR          : 0x%p\n"), Globals::xorFunc);
	printf(_xor_("XOR Key      : 0x%p\n\n"), xorKey);

	printf(_xor_("GObjects     : %d\n"), UObject::GetGlobalObjects().Num());
	printf(_xor_("GNames       : %d\n"), FName::GetGlobalNames().Num());
#endif // DEBUG

	if (!HookKeyState())
		printf(_xor_("KeystateHook error!\n"));
	
	hook((__int64)ProcessEventOriginal, (__int64)ProcessEventHook, (__int64*)&ProcessEventOriginal);
}

BOOL WINAPI DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved) {
	if (dwReason == 1)
		Main();

	return true;
}