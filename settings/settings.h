#pragma once

class c_config final {
public:
	struct {
		// MENU
		bool showSexyMenu;

		// AIMBOT TAB
		bool aimbot;
		bool prediction;
		bool smooth;
		bool lockWhenClose;

		// VISUALS TAB
		bool visuals;
		bool espAllies;
		bool players;
		bool tracers;
		bool box;
		bool health;
		bool espFOV;
		bool bones;

		// EXPLOITS TAB
		bool recoil;
		bool spread;
		bool glow;
		bool thirdPerson;
		bool speedhack;

		// SETTINGS
		int aimBone;
		float aimFOV;
		bool gravity;
		float smoothness;
		int tolerance;
		int resolution;
		float FOV;
		int speed;

		// KEYBINDS
		int menuKey;
		int aimKey;
		int visualsKey;
		int recoilKey;
		int spreadKey;
		int glowKey;
		int thirdPersonKey;
		int speedKey;
		int fovKey;
	} item;
};

extern c_config config_system;