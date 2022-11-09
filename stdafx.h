#pragma once

#define vpnter(ptr) (((unsigned long long)ptr < 0x7FFFFFFEFFFF && (unsigned long long)ptr > 0x00010000))
#define rva(addr, size) (reinterpret_cast<unsigned char*>(addr + *reinterpret_cast<int*>(addr + (size - 4)) + size))

#define Const_PI                  3.14159265358979323846264338327950288419716939937510582f
#define Const_URotation180        32768
#define Const_RadToUnrRot         10430.3783504704527
#define Const_UnrRotToRad         0.00009587379924285
#define Const_URotationToRadians  Const_PI / Const_URotation180 

#include <windows.h>
#include <iostream>
#include <fstream>
#include <filesystem>
#include <vector>
#include <stdio.h>
#include <intrin.h>

#include "utils/rpc.h"
#pragma comment(lib, "discord-rpc.lib")

#include <d3dx9math.h>
#pragma comment(lib, "d3dx9.lib")

#include "utils/utils_importer.hpp"
#include "utils/scanner.h"

#include "SDK.hpp"
using namespace std;
using namespace SDK;

#include "config/ini.h"
#include "settings/settings.h"
//#include "spoofer/return_spoofer.h"
#include "spoofer/spoof.h"
#include "utils/config.h"
#include "globals.h"
#include "exploits/exploits.h"
#include "rendering/ZeroInput.h"
#include "rendering/ZeroGUI.h"
#include "rendering/render.h"