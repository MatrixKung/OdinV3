#pragma once
#include <Windows.h>
#include "ntapi.h"
#include "../utils/skcrypt.h"

extern HMODULE moduleBase;
extern uintptr_t xorKey;

uintptr_t GetXorKey(size_t index);