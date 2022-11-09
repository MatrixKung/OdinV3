#include "stdafx.h"
#include "SDK/PL_Engine_parameters.hpp"
#include "SDK/PL_TgClient_parameters.hpp"
#include "process_event.h"
#include <detours/detours.h>
#include "utils/TEB.h"

#define DEBUG

HMODULE moduleBase;
tProcessEvent ProcessEventOriginal = nullptr;

uintptr_t TEB;
static const void* game_rbx_jmp;

void ProcessEventHook(UObject* pObject, UFunction* pFunction, const void* pParams, __int64 pResult) {
	TEB = __readgsqword(0x58u);

	auto FunctionName = pFunction->GetFullName();

	if (FunctionName == _xor_("Function TgClient.TgGameViewportClient.PostRender"))
		MainLoop(((UTgGameViewportClient_PostRender_Params*)(pParams))->Canvas);

	if (FunctionName == _xor_("Function Engine.GameViewportClient.HandleInputKey"))
		printf("Pressed Key : %s\n", ((UGameViewportClient_HandleInputKey_Params*)(pParams))->Key.GetName().c_str());
	

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

	GObject = reinterpret_cast<decltype(GObject)>((DWORD64)(moduleBase)+0x388A2BC);
	GName = reinterpret_cast<decltype(GObject)>((DWORD64)(moduleBase)+0x388A24C);
	Globals::UEngineAddr = *(uintptr_t*)((uintptr_t)moduleBase+0x389F850);
	ProcessEventOriginal = (tProcessEvent)((DWORD64)(moduleBase)+0x180620);

	game_rbx_jmp = gadget(NULL);

	//auto tramp1 = United(moduleBase, _xor_("\x48\x83\xC4\x68\xC3"), _xor_("xxxxx"), 0);
	//auto tramp2 = United(moduleBase, _xor_("\xFF\xE3"), _xor_("xx"), 0);

#ifdef DEBUG
	printf(_xor_("Module       : 0x%p\n"), moduleBase);
	printf(_xor_("Legit Tramp  : 0x%p\n"), game_rbx_jmp);
	printf(_xor_("GObjects     : 0x%p\n"), GObject);
	printf(_xor_("GNames       : 0x%p\n"), GName);
	printf(_xor_("UEngine      : 0x%p\n"), Globals::UEngineAddr);
	printf(_xor_("ProcessEvent : 0x%p\n"), (uintptr_t*)ProcessEventOriginal);

	Globals::Engine = (UEngine*)Globals::UEngineAddr;

	//printf(_xor_("Tramp 1      : 0x%p\n"), tramp1);
	//printf(_xor_("Tramp 2      : 0x%p\n"), tramp2);
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