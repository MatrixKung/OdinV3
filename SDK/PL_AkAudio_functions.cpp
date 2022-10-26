// Paladins (5.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PL_AkAudio_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AkAudio.AkAmbientSound.StopPlayback
// (Iterator, Singular, Net, NetReliable, Exec, Static, HasOptionalParms)

void AAkAmbientSound::STATIC_StopPlayback()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkAmbientSound.StopPlayback"));

	AAkAmbientSound_StopPlayback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkAmbientSound.StartPlayback
// (Defined, Singular, Net, NetReliable, Exec, Static, HasOptionalParms)

void AAkAmbientSound::STATIC_StartPlayback()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkAmbientSound.StartPlayback"));

	AAkAmbientSound_StartPlayback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
