#pragma once

// Paladins (5.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "PL_BattleClient_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class BattleClient.BattleHUD
// 0x0000 (0x0684 - 0x0684)
class ABattleHUD : public ATgClientHUD
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class BattleClient.BattleHUD"));
		return ptr;
	}


	void BattleHUDFunction();
};


// Class BattleClient.BattleLaunch
// 0x0000 (0x04F0 - 0x04F0)
class ABattleLaunch : public ATgGameLaunch
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class BattleClient.BattleLaunch"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
