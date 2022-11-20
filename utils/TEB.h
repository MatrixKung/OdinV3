#pragma once
#include <Windows.h>
#include "../utils/skcrypt.h"

extern HMODULE moduleBase;
extern uintptr_t TEB, xorKey;

uintptr_t GetXorKey(size_t index);