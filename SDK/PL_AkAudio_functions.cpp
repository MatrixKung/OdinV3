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
// (Iterator, Latent, Net, NetReliable, Operator, HasOptionalParms)

void AAkAmbientSound::StopPlayback()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkAmbientSound.StopPlayback"));

	AAkAmbientSound_StopPlayback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkAmbientSound.StartPlayback
// (Defined, Latent, Net, NetReliable, Operator, HasOptionalParms)

void AAkAmbientSound::StartPlayback()
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
