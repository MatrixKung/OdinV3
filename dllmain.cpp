#include "stdafx.h"
#include "SDK/PL_Engine_parameters.hpp"
#include "SDK/PL_TgClient_parameters.hpp"
#include "process_event.h"
#include <detours/detours.h>
#include "utils/TEB.h"

#include "memory_manager.h"

//#define DEBUG

HMODULE moduleBase;
tProcessEvent ProcessEventOriginal = nullptr;

uintptr_t TEB, xorKey;
static const void* game_rbx_jmp;

void ProcessEventHook(UObject* pObject, UFunction* pFunction, const void* pParams, __int64 pResult) {
	TEB = __readgsqword(0x58u);

	auto FunctionName = pFunction->GetFullName();

	if (FunctionName == _xor_("Function TgClient.TgGameViewportClient.PostRender"))
		MainLoop(((UTgGameViewportClient_PostRender_Params*)(pParams))->Canvas);

	return spoof_call(game_rbx_jmp, ProcessEventOriginal, pObject, pFunction, pParams, pResult);
}

// TODO: Use engine input instead since this will probably get detected
bool HookKeyState() {
	HMODULE API = GetModuleHandle(_xor_(TEXT("win32u.dll")));
	if (API != NULL)
	{
		o_getasynckeystate = (LPFN_MBA)GetProcAddress(API, _xor_("NtUserGetAsyncKeyState"));
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
	discord_rpc::init();

	// Settings helper
	ResetSettings();

	/*mINI::INIFile file("settings.ini");
	mINI::INIStructure ini;

	if (std::filesystem::exists(_xor_("settings.ini"))) {
		file.read(ini);

		std::string& aimbot = ini[_xor_("aimbot")]["aimbot"];
		std::string& prediction = ini["aimbot"]["prediction"];
		std::string& smooth = ini["aimbot"]["smooth"];

		std::string& visuals = ini["visuals"]["visuals"];
		std::string& players = ini["visuals"]["players"];
		std::string& tracers = ini["visuals"]["tracers"];
		std::string& box = ini["visuals"]["box"];

		std::string& recoil = ini["exploits"]["no_recoil"];
		std::string& spread = ini["exploits"]["no_spread"];
		std::string& thirdPerson = ini["exploits"]["third_person"];

		istringstream(aimbot) >> config_system.item.aimbot;
		istringstream(prediction) >> config_system.item.prediction;
		istringstream(smooth) >> config_system.item.smooth;

		istringstream(visuals) >> config_system.item.visuals;
		istringstream(players) >> config_system.item.players;
		istringstream(tracers) >> config_system.item.tracers;
		istringstream(box) >> config_system.item.box;

		istringstream(recoil) >> config_system.item.recoil;
		istringstream(spread) >> config_system.item.spread;
		istringstream(thirdPerson) >> config_system.item.thirdPerson;
	} else {
		std::string& aimbot = ini["aimbot"]["aimbot"] = "0";
		std::string& prediction = ini["aimbot"]["prediction"] = "0";
		std::string& smooth = ini["aimbot"]["smooth"] = "0";

		std::string& visuals = ini["visuals"]["visuals"] = "0";
		std::string& players = ini["visuals"]["players"] = "1";
		std::string& tracers = ini["visuals"]["tracers"] = "1";
		std::string& box = ini["visuals"]["box"] = "1";

		std::string& recoil = ini["exploits"]["no_recoil"] = "0";
		std::string& spread = ini["exploits"]["no_spread"] = "0";
		std::string& thirdPerson = ini["exploits"]["third_person"] = "0";

		file.generate(ini);
	}*/

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

	game_rbx_jmp = gadget(NULL);

	//auto tramp1 = United(moduleBase, _xor_("\x48\x83\xC4\x68\xC3"), _xor_("xxxxx"), 0);
	//auto tramp2 = United(moduleBase, _xor_("\xFF\xE3"), _xor_("xx"), 0);

#ifdef DEBUG
	printf(_xor_("Module       : 0x%p\n"), moduleBase);
	printf(_xor_("Legit Tramp  : 0x%p\n"), game_rbx_jmp);
	printf(_xor_("GObjects     : 0x%p\n"), GObject);
	printf(_xor_("GNames       : 0x%p\n"), GName);
	printf(_xor_("UEngine      : 0x%p (0x%p)\n"), Globals::UEngineAddr, Globals::Engine);
	printf(_xor_("ProcessEvent : 0x%p\n"), (uintptr_t*)ProcessEventOriginal);
	printf(_xor_("XOR          : 0x%p\n"), Globals::xorFunc);
	printf(_xor_("XOR Key      : 0x%p\n\n"), xorKey);

	printf(_xor_("GObjects     : %d\n"), UObject::GetGlobalObjects().Num());
	printf(_xor_("GNames       : %d\n"), FName::GetGlobalNames().Num());

	//printf(_xor_("Tramp 1      : 0x%p\n"), tramp1);
	//printf(_xor_("Tramp 2      : 0x%p\n"), tramp2);

	spoof_call(game_rbx_jmp, MessageBox, (HWND)0, (LPCSTR)0, (LPCSTR)0, (UINT)0);
#endif // DEBUG

	//FC::SetSpoofStub((void*)tramp1, (void*)tramp2);
	//FC2::SetSpoofStub((void*)tramp1, (void*)tramp2);

	if (!HookKeyState())
		spoof_call(game_rbx_jmp, MessageBox, (HWND)0, (LPCSTR)0, (LPCSTR)0, (UINT)0);

	DetourTransactionBegin();
	DetourUpdateThread(GetCurrentThread());
	DetourAttach(&(PVOID&)ProcessEventOriginal, ProcessEventHook);
	DetourTransactionCommit();

	discord_rpc::update();
}

BOOL WINAPI DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved) {
	if (dwReason == 1)
		Main();

	return true;
}