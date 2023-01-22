#pragma once
#include "SDK.hpp"

//#define DEBUG
//#define DEBUG_ADDRESSES

typedef int (WINAPI* LPFN_MBA)(DWORD);
static LPFN_MBA o_getasynckeystate;

namespace Globals {
	DWORD_PTR UEngineAddr;
	UEngine* Engine;

	ULocalPlayer* LocalPlayer;
	APlayerController* LocalController;
	APawn* LocalPawn;
	ATgRepInfo_Player* ReplicationInfo;
	ATgPlayerCamera* PlayerCamera;
	AWorldInfo* WorldInfo;
	ATgDevice* LocalWeapon;
	
	void* xorFunc;

	int width, height;
	float FOV;

	bool test;

	bool TickyTicky() {
		return true;
	}

	bool SetObjects()
	{
		// Set Engine
		Engine = (UEngine*)(*(uintptr_t*)UEngineAddr);
		if (!Engine) return false;

		// Set Local Player
		if (Engine && Engine->GamePlayers.IsValidIndex(0)) LocalPlayer = Engine->GamePlayers[0];
		if (!LocalPlayer) return false;

		// Set Player Controller
		if (LocalPlayer) LocalController = LocalPlayer->Actor;
		if (!LocalController) return false;

		// Set Pawn
		if (LocalController) LocalPawn = LocalController->AcknowledgedPawn;
		if (!LocalPawn) return false;

		// Set Replication Info
		if (LocalController) ReplicationInfo = (ATgRepInfo_Player*)LocalController->PlayerReplicationInfo;
		if (!ReplicationInfo) return false;

		if (LocalController) PlayerCamera = (ATgPlayerCamera*)LocalController->PlayerCamera;
		if (!PlayerCamera) return false;

		if (LocalController) WorldInfo = LocalController->WorldInfo;
		if (!WorldInfo) return false;

		if (LocalPawn) LocalWeapon = (ATgDevice*)LocalPawn->Weapon;
		if (!LocalWeapon) return false;

		FOV = PlayerCamera->DefaultFOV * LocalController->LODDistanceFactor;

		if (!FOV || FOV == 0.f)
			return false;

		if (!TickyTicky()) return false;

#ifdef DEBUG_ADDRESSES
		printf(_xor_("====================\n"));
		printf(_xor_("Engine          : %p\n"), Engine);
		printf(_xor_("LocalPlayer     : %p\n"), LocalPlayer);
		printf(_xor_("LocalController : %p\n"), LocalController);
		printf(_xor_("LocalPawn       : %p\n"), LocalPawn);
		printf(_xor_("ReplicationInfo : %p\n"), ReplicationInfo);
		printf(_xor_("PlayerCamera    : %p\n"), PlayerCamera);
		printf(_xor_("WorldInfo       : %p\n"), WorldInfo);
		printf(_xor_("LocalWeapon     : %p\n"), LocalWeapon);
		printf(_xor_("====================\n\n"));
#endif

		// Everything went well
		return true;
	}
}