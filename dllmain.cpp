#include "stdafx.h"
#include "SDK/PL_Engine_parameters.hpp"
#include "SDK/PL_TgClient_parameters.hpp"
#include "process_event.h"
#include <detours/detours.h>
#include "utils/TEB.h"

#include "SkipHook/skiphook.h"

#include "memory_manager.h"

HMODULE moduleBase;
tProcessEvent ProcessEventOriginal = nullptr;

uintptr_t TEB, xorKey;

// HOOK
void ProcessEventHook(UObject* pObject, UFunction* pFunction, const void* pParams, __int64 pResult) {
	TEB = __readgsqword(0x58u);

	auto FunctionName = pFunction->GetFullName();

	if (FunctionName == _xor_("Function TgClient.TgGameViewportClient.PostRender"))
		MainLoop(((UTgGameViewportClient_PostRender_Params*)(pParams))->Canvas);

	return SpoofCall<void>((PVOID)ProcessEventOriginal, pObject, pFunction, pParams, pResult);
}

//typedef void(__fastcall* tProcessInternal)(UObject*, const void*, void*, void*);
//tProcessInternal pProcessInternal = nullptr;
//
//void __fastcall hkProcessInternal(UObject* pFunction, const void* pParams, void* a1, void* pResult)
//{
//	//printf("Function: %s\n", pFunction->GetFullName().c_str());
//
//	UCanvas* canvas = ((UTgGameViewportClient_PostRender_Params*)(pParams))->Canvas;
//	
//	//printf("Canvas: 0x%p\n", canvas);
//
//	if (Globals::SetObjects())
//	{
//		ATgDevice* weapon = (ATgDevice*)Globals::LocalWeapon;
//		if (weapon && o_getasynckeystate(VK_F8))
//		{
//			printf("Ammo count : %i\n", weapon->STATIC_GetCurrentAmmoAmount());
//			weapon->StartFire();
//		}
//	}
//
//	/*printf("Is a canvas : %i\n", canvas->IsA(UCanvas::StaticClass()));
//
//	FVector2D pos = FVector2D(100, 100);
//	FVector2D oldPos = FVector2D(canvas->CurX, canvas->CurY);
//	FColor oldColor = canvas->DrawColor;
//	FColor color = FColor(255.f, 255.f, 0.f, 255.f);
//
//	canvas->STATIC_SetPos(pos.X, pos.Y, 0.f);
//	canvas->STATIC_SetDrawColor(color.R, color.G, color.B, color.A);
//
//	canvas->DrawText(_xor_(L"HELLO FROM ODIN !"), false, 1.f, 1.f, EDisplayPlane::DISPLAYPLANE_HUD, NULL);
//
//	canvas->STATIC_SetPos(oldPos.X, oldPos.Y, 0.f);
//	canvas->STATIC_SetDrawColor(oldColor.R, oldColor.G, oldColor.B, oldColor.A);*/
//
//	return SpoofCall<void>((PVOID)pProcessInternal, pFunction, pParams, a1, pResult);
//}

// TODO: Use engine input instead since this will probably get detected (or not, ty hirez)
bool HookKeyState() {
	/*static auto skGetModuleHandle = skip_hook::make_skip_hook<decltype(&GetModuleHandle)>((uint64_t)GetModuleHandle);
	static auto skGetProcAddress = skip_hook::make_skip_hook<decltype(&GetProcAddress)>((uint64_t)GetProcAddress);*/
	
	HMODULE API = SpoofCall<HMODULE>(GetModuleHandle, _xor_("win32u.dll"));
	
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
#endif // DEBUG

	// Discord
	//discord_rpc::init();

	// Settings helper
	ResetSettings();

	// TODO: Config
	// Could use NSeven's one

	moduleBase = (HMODULE)imageBase();
	const IMAGE_DOS_HEADER* DOSHeader = reinterpret_cast<IMAGE_DOS_HEADER*>(moduleBase);
	const IMAGE_NT_HEADERS* NtHeaders = reinterpret_cast<IMAGE_NT_HEADERS*>(reinterpret_cast<long long>(moduleBase) + DOSHeader->e_lfanew);
	const DWORD SizeOfImage = NtHeaders->OptionalHeader.SizeOfImage;

	GObject = GetMovAddress<decltype(GObject)>(PatternScan<void*>(_xor_("48 8B 05 ? ? ? ? 4C 8B 04 0A 4C 33 04 F0 44"), (uint64_t)moduleBase, SizeOfImage));
	GName = GetMovAddress<decltype(GName)>(PatternScan<void*>(_xor_("48 8B 05 ? ? ? ? B9 ? ? ? ? 48 8B 0C 0A 48 BA"), (uint64_t)moduleBase, SizeOfImage));
	Globals::UEngineAddr = GetMovAddress<DWORD_PTR>(PatternScan<void*>(_xor_("48 8B 0D ? ? ? ? 48 85 C9 0F 84 ? ? ? ? 48 39 B9 ? ? ? ?"), (uint64_t)moduleBase, SizeOfImage));
	ProcessEventOriginal = GetCallAddress<tProcessEvent>(PatternScan<void*>(_xor_("E8 ? ? ? ? 8D 4E FD"), (uint64_t)moduleBase, SizeOfImage));

	Globals::Engine = (UEngine*)(*(uintptr_t*)Globals::UEngineAddr);

	Globals::xorFunc = GetCallAddress<void*>(PatternScan<void*>(_xor_("E8 ? ? ? ? 85 C0 75 0F 48 8B 03"), (uint64_t)moduleBase, SizeOfImage));
	xorKey = (uintptr_t)GetAndValue<void*>((void*)((DWORD64)Globals::xorFunc + 0x63));

	MessageBox(0, 0, 0, 0);

	PBYTE tramp1 = United(moduleBase, _xor_("\x48\x83\xC4\x68\xC3"), _xor_("xxxxx"), 0);
	PBYTE tramp2 = United(moduleBase, _xor_("\xFF\xE3"), _xor_("xx"), 0);

	FC::SetSpoofStub((void*)tramp1, (void*)tramp2);

	// PostRender hook
	/*UFunction* pRenderFunc = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameViewportClient.PostRender"));
	pProcessInternal = (tProcessInternal)((PBYTE)pRenderFunc->Func);
	pRenderFunc->Func = &hkProcessInternal;
	pRenderFunc->FunctionFlags |= 0x400;*/

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
	
	//LoopVTable(UObject::StaticClass(), 0);

	/*DetourTransactionBegin();
	DetourUpdateThread(GetCurrentThread());
	DetourAttach(&(PVOID&)ProcessEventOriginal, ProcessEventHook);
	DetourTransactionCommit();*/
	
	hook((__int64)ProcessEventOriginal, (__int64)ProcessEventHook, (__int64*)&ProcessEventOriginal);
}

BOOL WINAPI DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved) {
	if (dwReason == 1)
		Main();

	return true;
}