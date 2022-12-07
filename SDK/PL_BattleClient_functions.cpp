// Paladins (5.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PL_BattleClient_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BattleClient.BattleHUD.BattleHUDFunction
// (Final, Defined, Iterator, PreOperator, Net, Simulated, Native, Event, Operator, HasOptionalParms, Const)

void ABattleHUD::BattleHUDFunction()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BattleClient.BattleHUD.BattleHUDFunction"));

	ABattleHUD_BattleHUDFunction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
