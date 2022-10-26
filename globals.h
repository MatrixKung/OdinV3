#pragma once
#include "SDK.hpp"

typedef int (WINAPI* LPFN_MBA)(DWORD);
static LPFN_MBA o_getasynckeystate;

namespace keybinds
{
	SDK::FKeyBind KeyBind;
	SDK::EInputEvent InputEvent;

	SDK::FKeyBind RightClick;
	SDK::FKeyBind LeftClick;
	SDK::FKeyBind MiddleMouseButton;
	SDK::FKeyBind ThumbMouseButton;
	SDK::FKeyBind ThumbMouseButton2;

	SDK::FKeyBind Insert;
	SDK::FKeyBind PageUp;
	SDK::FKeyBind PageDown;
	SDK::FKeyBind Enter;
	SDK::FKeyBind LeftShift;
	SDK::FKeyBind LeftControl;
	SDK::FKeyBind LeftAlt;
	SDK::FKeyBind CapsLock;
	SDK::FKeyBind SpaceBar;

	SDK::FKeyBind Gamepad_DPad_Up;
	SDK::FKeyBind Gamepad_DPad_Down;
	SDK::FKeyBind Gamepad_DPad_Left;
	SDK::FKeyBind Gamepad_DPad_Right;
	SDK::FKeyBind Gamepad_LeftShoulder;
	SDK::FKeyBind Gamepad_RightShoulder;
	SDK::FKeyBind Gamepad_LeftTrigger;
	SDK::FKeyBind Gamepad_RightTrigger;
	SDK::FKeyBind Gamepad_FaceButton_Bottom;
	SDK::FKeyBind Gamepad_Special_Right;

	SDK::FKeyBind Up;
	SDK::FKeyBind Down;
	SDK::FKeyBind Left;
	SDK::FKeyBind Right;

	SDK::FKeyBind Zero;
	SDK::FKeyBind One;
	SDK::FKeyBind Two;
	SDK::FKeyBind Three;
	SDK::FKeyBind Four;
	SDK::FKeyBind Five;
	SDK::FKeyBind Six;
	SDK::FKeyBind Seven;
	SDK::FKeyBind Eight;
	SDK::FKeyBind Nine;

	SDK::FKeyBind A;
	SDK::FKeyBind B;
	SDK::FKeyBind C;
	SDK::FKeyBind D;
	SDK::FKeyBind E;
	SDK::FKeyBind F;
	SDK::FKeyBind G;
	SDK::FKeyBind H;
	SDK::FKeyBind I;
	SDK::FKeyBind J;
	SDK::FKeyBind K;
	SDK::FKeyBind L;
	SDK::FKeyBind M;
	SDK::FKeyBind N;
	SDK::FKeyBind O;
	SDK::FKeyBind P;
	SDK::FKeyBind Q;
	SDK::FKeyBind R;
	SDK::FKeyBind S;
	SDK::FKeyBind T;
	SDK::FKeyBind U;
	SDK::FKeyBind V;
	SDK::FKeyBind W;
	SDK::FKeyBind X;
	SDK::FKeyBind Y;
	SDK::FKeyBind Z;

	SDK::FKeyBind F1;
	SDK::FKeyBind F2;
	SDK::FKeyBind F3;
	SDK::FKeyBind F4;
	SDK::FKeyBind F5;
	SDK::FKeyBind F6;
	SDK::FKeyBind F7;
	SDK::FKeyBind F8;
	SDK::FKeyBind F9;
	SDK::FKeyBind F10;
	SDK::FKeyBind F11;
	SDK::FKeyBind F12;

}

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
	
	int width, height;
	float FOV;

	bool test;

	bool TickyTicky() {
		//if (LocalController->PlayerInput->PressedKeys.IsValidIndex(0))
		//	keybinds::KeyBind = LocalController->PlayerInput->PressedKeys[0];

		//keybinds::InputEvent = LocalController->PlayerInput->CurrentEvent.GetValue();

		return true;
	}

	bool SetObjects()
	{
		// Set Engine
		Engine = (UEngine*)(UEngineAddr);
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

		// Everything went well
		return true;
	}
}