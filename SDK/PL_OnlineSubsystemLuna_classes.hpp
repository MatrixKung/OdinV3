#pragma once

// Paladins (5.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "PL_OnlineSubsystemLuna_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class OnlineSubsystemLuna.OnlineGameInterfaceLuna
// 0x0060 (0x03A8 - 0x0348)
class UOnlineGameInterfaceLuna : public UOnlineGameInterfaceImpl
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0348(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class OnlineSubsystemLuna.OnlineGameInterfaceLuna"));
		return ptr;
	}

};


// Class OnlineSubsystemLuna.OnlineSubsystemLuna
// 0x0798 (0x0A20 - 0x0288)
class UOnlineSubsystemLuna : public UOnlineSubsystemCommonImpl
{
public:
	unsigned char                                      UnknownData00[0x798];                                     // 0x0288(0x0798) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class OnlineSubsystemLuna.OnlineSubsystemLuna"));
		return ptr;
	}

};


// Class OnlineSubsystemLuna.OnlineMarketplaceInterfaceLuna
// 0x07F8 (0x0858 - 0x0060)
class UOnlineMarketplaceInterfaceLuna : public UObject
{
public:
	unsigned char                                      UnknownData00[0x7F8];                                     // 0x0060(0x07F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class OnlineSubsystemLuna.OnlineMarketplaceInterfaceLuna"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
