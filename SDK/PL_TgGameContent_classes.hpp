#pragma once

// Paladins (5.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "PL_TgGameContent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class TgGameContent.tgmenucontentdata_content
// 0x0000 (0x0070 - 0x0070)
class Utgmenucontentdata_content : public UTgMenuContentData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class TgGameContent.tgmenucontentdata_content"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
