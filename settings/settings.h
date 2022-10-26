#pragma once

class c_config final {
public:
	struct {
		// Main
		bool ShowSexyMenu;

		// AIMBOT TAB
		bool aimbot;
		bool prediction;
		bool smooth;
		float smoothness;
		float aimfov;

		// VISUALS TAB
		bool visuals;
		bool players;
		bool tracers;
		bool box;
		bool health;
		bool fov;
		int resolution;
		bool bones;

		// EXPLOITS TAB
		bool recoil;
		bool spread;
		bool glow;
		bool thirdPerson;
		bool speedhack;
	} item;
};

extern c_config config_system;