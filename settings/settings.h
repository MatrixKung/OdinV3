#pragma once

class c_config final {
public:
	struct {
		// MENU
		bool showSexyMenu;
		bool hud;

		// AIMBOT TAB
		bool aimbot;
		bool silent;
		bool prediction;
		bool smooth;
		bool lockWhenClose;
		bool angleCheck;
		bool visCheck;

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
		int angle;
		float aimFOV;
		bool gravity;
		float smoothness;
		int tolerance;
		int resolution;
		float FOV;
		float speed;

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