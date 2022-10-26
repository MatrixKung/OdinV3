#pragma once
#include "ntapi.h"
#include "../utils/skcrypt.h"

extern HMODULE moduleBase;
extern uintptr_t TEB;

//HANDLE GetFirstThread();
//uintptr_t StealTLS();
uintptr_t GetXorKey(size_t index);