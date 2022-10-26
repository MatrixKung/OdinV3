// Paladins (5.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
	TAntiCheatArray<FNameEntry*>* FName::GNames = nullptr;
	TAntiCheatArray<UObject*>* UObject::GObjects = nullptr;
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
