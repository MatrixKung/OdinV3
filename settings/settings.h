#pragma once

class c_config final {
public:
	struct {
		// Main
		bool showSexyMenu;

		// AIMBOT TAB
		bool aimbot;
		bool prediction;
		bool smooth;
		float smoothness;
		float aimFOV;
		int aimKey;

		// VISUALS TAB
		bool visuals;
		bool espAllies;
		bool players;
		bool tracers;
		bool box;
		bool health;
		bool espFOV;
		int resolution;
		bool bones;

		// EXPLOITS TAB
		bool recoil;
		bool spread;
		bool glow;
		bool thirdPerson;
		bool speedhack;
		int FOV;
	} item;
};

extern c_config config_system;