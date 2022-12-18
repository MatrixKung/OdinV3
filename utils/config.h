#pragma once

VOID ResetSettings() {
	config_system.item = { 0 };

	// MENU
	config_system.item.showSexyMenu = false;

	// AIMBOT TAB
	config_system.item.aimbot = false;
	config_system.item.prediction = false;
	config_system.item.smooth = false;
	config_system.item.lockWhenClose = true;

	// VISUALS TAB
	config_system.item.visuals = false;
	config_system.item.espAllies = false;
	config_system.item.players = false;
	config_system.item.tracers = false;
	config_system.item.box = false;
	config_system.item.health = false;
	config_system.item.espFOV = true;
	config_system.item.bones = false;

	// EXPLOITS TAB
	config_system.item.recoil = false;
	config_system.item.spread = false;
	config_system.item.glow = false;
	config_system.item.thirdPerson = false;
	config_system.item.speedhack = false;

	// SETTINGS
	config_system.item.aimBone = 0;
	config_system.item.aimFOV = 60.0f;
	config_system.item.gravity = false;
	config_system.item.smoothness = 0.0055f;
	config_system.item.tolerance = 100;
	config_system.item.resolution = 64;
	config_system.item.FOV = 100.f;
	config_system.item.speed = 1;

	// KEYBINDS
	config_system.item.menuKey = 0x2D;
	config_system.item.aimKey = 0x01;
	config_system.item.visualsKey = 0x07;
	config_system.item.recoilKey = 0x07;
	config_system.item.spreadKey = 0x07;
	config_system.item.glowKey = 0x07;
	config_system.item.thirdPersonKey = 0x07;
	config_system.item.speedKey = 0x07;
	config_system.item.fovKey = 0x07;
}
