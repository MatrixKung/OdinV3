#pragma once

VOID ResetSettings() {
	config_system.item = { 0 };

	// Main
	config_system.item.showSexyMenu = false;

	// AIMBOT TAB
	config_system.item.aimbot = false;
	config_system.item.prediction = false;
	config_system.item.smooth = false;
	config_system.item.smoothness = 200.0f;
	config_system.item.aimFOV = 60.0f;
	config_system.item.aimKey = 0x01;

	// VISUALS TAB
	config_system.item.visuals = false;
	config_system.item.players = false;
	config_system.item.tracers = false;
	config_system.item.box = false;
	config_system.item.health = false;
	config_system.item.espFOV = true;
	config_system.item.resolution = 64;
	config_system.item.bones = false;

	// EXPLOITS TAB
	config_system.item.recoil = false;
	config_system.item.spread = false;
	config_system.item.glow = false;
	config_system.item.thirdPerson = false;
	config_system.item.speedhack = false;
	config_system.item.FOV = 120.0f;
}
