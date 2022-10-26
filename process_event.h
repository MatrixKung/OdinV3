#pragma once

// Dummies
namespace SDK {
	class UObject;
	class UFunction;
}

typedef void(__thiscall* tProcessEvent)(SDK::UObject* pObject, SDK::UFunction* pFunction, const void* pParams, __int64 pResult);
extern tProcessEvent ProcessEventOriginal;