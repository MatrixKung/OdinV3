// Paladins (5.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PL_GFxUI_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GFxUI.GFxFSCmdHandler.FSCommand
// (Final, Iterator, Singular, Net, Simulated, Exec, Native, HasOptionalParms)
// Parameters:
// class UGFxMoviePlayer*         Movie                          (Parm)
// class UGFxEvent_FSCommand*     Event                          (Parm)
// struct FString                 Cmd                            (Parm, NeedCtorLink)
// struct FString                 Arg                            (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxFSCmdHandler::FSCommand(class UGFxMoviePlayer* Movie, class UGFxEvent_FSCommand* Event, const struct FString& Cmd, const struct FString& Arg)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxFSCmdHandler.FSCommand"));

	UGFxFSCmdHandler_FSCommand_Params params;
	params.Movie = Movie;
	params.Event = Event;
	params.Cmd = Cmd;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxInteraction.CloseAllMoviePlayers
// (Iterator, PreOperator, Net, NetReliable, Exec, Operator, HasOptionalParms)

void UGFxInteraction::CloseAllMoviePlayers()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxInteraction.CloseAllMoviePlayers"));

	UGFxInteraction_CloseAllMoviePlayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxInteraction.NotifySplitscreenLayoutChanged
// (Final, Defined, Iterator, Latent, PreOperator, Net, Simulated, Exec, Event, Operator, Static)

void UGFxInteraction::STATIC_NotifySplitscreenLayoutChanged()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxInteraction.NotifySplitscreenLayoutChanged"));

	UGFxInteraction_NotifySplitscreenLayoutChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxInteraction.NotifyPlayerRemoved
// (Final, Latent, PreOperator, Net, Simulated, Exec, Event, Operator, Static)
// Parameters:
// int                            PlayerIndex                    (Parm)
// class ULocalPlayer*            RemovedPlayer                  (Parm)

void UGFxInteraction::STATIC_NotifyPlayerRemoved(int PlayerIndex, class ULocalPlayer* RemovedPlayer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxInteraction.NotifyPlayerRemoved"));

	UGFxInteraction_NotifyPlayerRemoved_Params params;
	params.PlayerIndex = PlayerIndex;
	params.RemovedPlayer = RemovedPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxInteraction.NotifyPlayerAdded
// (Latent, PreOperator, Net, Simulated, Exec, Event, Operator, Static)
// Parameters:
// int                            PlayerIndex                    (Parm)
// class ULocalPlayer*            AddedPlayer                    (Parm)

void UGFxInteraction::STATIC_NotifyPlayerAdded(int PlayerIndex, class ULocalPlayer* AddedPlayer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxInteraction.NotifyPlayerAdded"));

	UGFxInteraction_NotifyPlayerAdded_Params params;
	params.PlayerIndex = PlayerIndex;
	params.AddedPlayer = AddedPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxInteraction.NotifyGameSessionEnded
// (Final, Iterator, PreOperator, Singular, Net, NetReliable, Simulated, Native, HasOptionalParms)

void UGFxInteraction::NotifyGameSessionEnded()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxInteraction.NotifyGameSessionEnded"));

	UGFxInteraction_NotifyGameSessionEnded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxInteraction.GetFocusMovie
// (Latent, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            ControllerId                   (Parm)
// class UGFxMoviePlayer*         ReturnValue                    (Parm, OutParm, ReturnParm)

class UGFxMoviePlayer* UGFxInteraction::GetFocusMovie(int ControllerId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxInteraction.GetFocusMovie"));

	UGFxInteraction_GetFocusMovie_Params params;
	params.ControllerId = ControllerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.UpdateSplitscreenLayout
// (Final, PreOperator, Net, NetReliable, Simulated, Exec, Operator, HasOptionalParms)

void UGFxMoviePlayer::UpdateSplitscreenLayout()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.UpdateSplitscreenLayout"));

	UGFxMoviePlayer_UpdateSplitscreenLayout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.ApplyPriorityVisibilityEffect
// (Final, Iterator, Latent, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// bool                           bRemoveEffect                  (Parm)

void UGFxMoviePlayer::ApplyPriorityVisibilityEffect(bool bRemoveEffect)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.ApplyPriorityVisibilityEffect"));

	UGFxMoviePlayer_ApplyPriorityVisibilityEffect_Params params;
	params.bRemoveEffect = bRemoveEffect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.ApplyPriorityBlurEffect
// (Iterator, Latent, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// bool                           bRemoveEffect                  (Parm)

void UGFxMoviePlayer::ApplyPriorityBlurEffect(bool bRemoveEffect)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.ApplyPriorityBlurEffect"));

	UGFxMoviePlayer_ApplyPriorityBlurEffect_Params params;
	params.bRemoveEffect = bRemoveEffect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.ApplyPriorityEffect
// (Defined, Singular, Net, Simulated, Exec, Native, HasOptionalParms)
// Parameters:
// bool                           bRequestedBlurState            (Parm)
// bool                           bRequestedHiddenState          (Parm)

void UGFxMoviePlayer::ApplyPriorityEffect(bool bRequestedBlurState, bool bRequestedHiddenState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.ApplyPriorityEffect"));

	UGFxMoviePlayer_ApplyPriorityEffect_Params params;
	params.bRequestedBlurState = bRequestedBlurState;
	params.bRequestedHiddenState = bRequestedHiddenState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.PlaySoundFromTheme
// (Final, Defined, Iterator, Singular, Net, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FName                   EventName                      (Parm)
// struct FName                   SoundThemeName                 (OptionalParm, Parm)

void UGFxMoviePlayer::PlaySoundFromTheme(const struct FName& EventName, const struct FName& SoundThemeName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.PlaySoundFromTheme"));

	UGFxMoviePlayer_PlaySoundFromTheme_Params params;
	params.EventName = EventName;
	params.SoundThemeName = SoundThemeName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.OnFocusLost
// (Final, Defined, Latent, Singular, Net, Simulated, Exec, Native, HasOptionalParms)
// Parameters:
// int                            LocalPlayerIndex               (Parm)

void UGFxMoviePlayer::OnFocusLost(int LocalPlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.OnFocusLost"));

	UGFxMoviePlayer_OnFocusLost_Params params;
	params.LocalPlayerIndex = LocalPlayerIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.OnFocusGained
// (Defined, Latent, Singular, Net, Simulated, Exec, Native, HasOptionalParms)
// Parameters:
// int                            LocalPlayerIndex               (Parm)

void UGFxMoviePlayer::OnFocusGained(int LocalPlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.OnFocusGained"));

	UGFxMoviePlayer_OnFocusGained_Params params;
	params.LocalPlayerIndex = LocalPlayerIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.ConsoleCommand
// (Iterator, Latent, Singular, Net, Simulated, Static)
// Parameters:
// struct FString                 Command                        (Parm, NeedCtorLink)

void UGFxMoviePlayer::STATIC_ConsoleCommand(const struct FString& Command)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.ConsoleCommand"));

	UGFxMoviePlayer_ConsoleCommand_Params params;
	params.Command = Command;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.GetPC
// (Final, Defined, Iterator, Singular, Net, Simulated, Exec, Native, HasOptionalParms)
// Parameters:
// class APlayerController*       ReturnValue                    (Parm, OutParm, ReturnParm)

class APlayerController* UGFxMoviePlayer::GetPC()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.GetPC"));

	UGFxMoviePlayer_GetPC_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.GetLP
// (Defined, Iterator, Singular, Net, Simulated, Exec, Native, HasOptionalParms)
// Parameters:
// class ULocalPlayer*            ReturnValue                    (Parm, OutParm, ReturnParm)

class ULocalPlayer* UGFxMoviePlayer::GetLP()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.GetLP"));

	UGFxMoviePlayer_GetLP_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.Init
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Exec)
// Parameters:
// class ULocalPlayer*            LocPlay                        (OptionalParm, Parm)

void UGFxMoviePlayer::Init(class ULocalPlayer* LocPlay)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.Init"));

	UGFxMoviePlayer_Init_Params params;
	params.LocPlay = LocPlay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetWidgetPathBinding
// (Defined, Iterator, Latent, Singular, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// class UGFxObject*              WidgetToBind                   (Parm)
// struct FName                   Path                           (Parm)

void UGFxMoviePlayer::SetWidgetPathBinding(class UGFxObject* WidgetToBind, const struct FName& Path)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.SetWidgetPathBinding"));

	UGFxMoviePlayer_SetWidgetPathBinding_Params params;
	params.WidgetToBind = WidgetToBind;
	params.Path = Path;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.PostWidgetInit
// (Final, Iterator, Latent, Singular, Net, Simulated, Exec, Native, HasOptionalParms)

void UGFxMoviePlayer::PostWidgetInit()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.PostWidgetInit"));

	UGFxMoviePlayer_PostWidgetInit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.WidgetUnloaded
// (Final, PreOperator, Singular, Net, Simulated, Exec, Native, HasOptionalParms)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxMoviePlayer::WidgetUnloaded(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.WidgetUnloaded"));

	UGFxMoviePlayer_WidgetUnloaded_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.WidgetInitialized
// (PreOperator, Singular, Net, Simulated, Exec, Native, HasOptionalParms)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxMoviePlayer::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.WidgetInitialized"));

	UGFxMoviePlayer_WidgetInitialized_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.ActionScriptConstructor
// (Defined, Iterator, PreOperator, Singular, Net, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 ClassName                      (Parm, NeedCtorLink)
// class UGFxObject*              ReturnValue                    (Parm, OutParm, ReturnParm)

class UGFxObject* UGFxMoviePlayer::ActionScriptConstructor(const struct FString& ClassName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.ActionScriptConstructor"));

	UGFxMoviePlayer_ActionScriptConstructor_Params params;
	params.ClassName = ClassName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.ActionScriptObject
// (Final, Latent, PreOperator, Singular, Net, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// class UGFxObject*              ReturnValue                    (Parm, OutParm, ReturnParm)

class UGFxObject* UGFxMoviePlayer::ActionScriptObject(const struct FString& Path)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.ActionScriptObject"));

	UGFxMoviePlayer_ActionScriptObject_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.ActionScriptString
// (Iterator, Latent, PreOperator, Singular, Net, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UGFxMoviePlayer::ActionScriptString(const struct FString& Path)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.ActionScriptString"));

	UGFxMoviePlayer_ActionScriptString_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.ActionScriptFloat
// (Final, Defined, Iterator, PreOperator, Singular, Net, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UGFxMoviePlayer::ActionScriptFloat(const struct FString& Path)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.ActionScriptFloat"));

	UGFxMoviePlayer_ActionScriptFloat_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.ActionScriptInt
// (Latent, PreOperator, Singular, Net, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UGFxMoviePlayer::ActionScriptInt(const struct FString& Path)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.ActionScriptInt"));

	UGFxMoviePlayer_ActionScriptInt_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.ActionScriptVoid
// (Final, Iterator, Latent, PreOperator, Singular, Net, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)

void UGFxMoviePlayer::ActionScriptVoid(const struct FString& Path)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.ActionScriptVoid"));

	UGFxMoviePlayer_ActionScriptVoid_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.Invoke
// (Final, Iterator, Latent, PreOperator, Singular, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 method                         (Parm, NeedCtorLink)
// TArray<struct FASValue>        args                           (Parm, NeedCtorLink)
// struct FASValue                ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FASValue UGFxMoviePlayer::Invoke(const struct FString& method, TArray<struct FASValue> args)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.Invoke"));

	UGFxMoviePlayer_Invoke_Params params;
	params.method = method;
	params.args = args;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.ActionScriptSetFunction
// (Defined, Latent, PreOperator, Singular, Net, Exec, Operator, HasOptionalParms)
// Parameters:
// class UGFxObject*              Object                         (Parm)
// struct FString                 Member                         (Parm, NeedCtorLink)

void UGFxMoviePlayer::ActionScriptSetFunction(class UGFxObject* Object, const struct FString& Member)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.ActionScriptSetFunction"));

	UGFxMoviePlayer_ActionScriptSetFunction_Params params;
	params.Object = Object;
	params.Member = Member;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.CreateArray
// (Defined, Iterator, PreOperator, Net, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// class UGFxObject*              ReturnValue                    (Parm, OutParm, ReturnParm)

class UGFxObject* UGFxMoviePlayer::CreateArray()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.CreateArray"));

	UGFxMoviePlayer_CreateArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.CreateObject
// (Latent, PreOperator, Net, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 ASClass                        (Parm, NeedCtorLink)
// class UClass*                  Type                           (OptionalParm, Parm)
// TArray<struct FASValue>        args                           (OptionalParm, Parm, NeedCtorLink)
// class UGFxObject*              ReturnValue                    (Parm, OutParm, ReturnParm)

class UGFxObject* UGFxMoviePlayer::CreateObject(const struct FString& ASClass, class UClass* Type, TArray<struct FASValue> args)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.CreateObject"));

	UGFxMoviePlayer_CreateObject_Params params;
	params.ASClass = ASClass;
	params.Type = Type;
	params.args = args;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.SetVariableStringArray
// (Final, Latent, Singular, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// int                            Index                          (Parm)
// TArray<struct FString>         Arg                            (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxMoviePlayer::SetVariableStringArray(const struct FString& Path, int Index, TArray<struct FString> Arg)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.SetVariableStringArray"));

	UGFxMoviePlayer_SetVariableStringArray_Params params;
	params.Path = Path;
	params.Index = Index;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.SetVariableFloatArray
// (Final, Defined, Singular, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// int                            Index                          (Parm)
// TArray<float>                  Arg                            (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxMoviePlayer::SetVariableFloatArray(const struct FString& Path, int Index, TArray<float> Arg)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.SetVariableFloatArray"));

	UGFxMoviePlayer_SetVariableFloatArray_Params params;
	params.Path = Path;
	params.Index = Index;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.SetVariableIntArray
// (Final, Iterator, Singular, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// int                            Index                          (Parm)
// TArray<int>                    Arg                            (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxMoviePlayer::SetVariableIntArray(const struct FString& Path, int Index, TArray<int> Arg)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.SetVariableIntArray"));

	UGFxMoviePlayer_SetVariableIntArray_Params params;
	params.Path = Path;
	params.Index = Index;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.SetVariableArray
// (Final, Singular, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// int                            Index                          (Parm)
// TArray<struct FASValue>        Arg                            (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxMoviePlayer::SetVariableArray(const struct FString& Path, int Index, TArray<struct FASValue> Arg)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.SetVariableArray"));

	UGFxMoviePlayer_SetVariableArray_Params params;
	params.Path = Path;
	params.Index = Index;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.GetVariableStringArray
// (Defined, Iterator, PreOperator, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// int                            Index                          (Parm)
// TArray<struct FString>         Arg                            (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxMoviePlayer::GetVariableStringArray(const struct FString& Path, int Index, TArray<struct FString>* Arg)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.GetVariableStringArray"));

	UGFxMoviePlayer_GetVariableStringArray_Params params;
	params.Path = Path;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Arg != nullptr)
		*Arg = params.Arg;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.GetVariableFloatArray
// (PreOperator, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// int                            Index                          (Parm)
// TArray<float>                  Arg                            (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxMoviePlayer::GetVariableFloatArray(const struct FString& Path, int Index, TArray<float>* Arg)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.GetVariableFloatArray"));

	UGFxMoviePlayer_GetVariableFloatArray_Params params;
	params.Path = Path;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Arg != nullptr)
		*Arg = params.Arg;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.GetVariableIntArray
// (Defined, PreOperator, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// int                            Index                          (Parm)
// TArray<int>                    Arg                            (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxMoviePlayer::GetVariableIntArray(const struct FString& Path, int Index, TArray<int>* Arg)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.GetVariableIntArray"));

	UGFxMoviePlayer_GetVariableIntArray_Params params;
	params.Path = Path;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Arg != nullptr)
		*Arg = params.Arg;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.GetVariableArray
// (Defined, Iterator, Latent, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// int                            Index                          (Parm)
// TArray<struct FASValue>        Arg                            (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxMoviePlayer::GetVariableArray(const struct FString& Path, int Index, TArray<struct FASValue>* Arg)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.GetVariableArray"));

	UGFxMoviePlayer_GetVariableArray_Params params;
	params.Path = Path;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Arg != nullptr)
		*Arg = params.Arg;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.SetVariableObject
// (Final, Defined, Iterator, Singular, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// class UGFxObject*              Object                         (Parm)

void UGFxMoviePlayer::SetVariableObject(const struct FString& Path, class UGFxObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.SetVariableObject"));

	UGFxMoviePlayer_SetVariableObject_Params params;
	params.Path = Path;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetVariableString
// (Latent, Singular, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// struct FString                 S                              (Parm, NeedCtorLink)

void UGFxMoviePlayer::SetVariableString(const struct FString& Path, const struct FString& S)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.SetVariableString"));

	UGFxMoviePlayer_SetVariableString_Params params;
	params.Path = Path;
	params.S = S;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetVariableInt
// (Iterator, Singular, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// int                            I                              (Parm)

void UGFxMoviePlayer::SetVariableInt(const struct FString& Path, int I)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.SetVariableInt"));

	UGFxMoviePlayer_SetVariableInt_Params params;
	params.Path = Path;
	params.I = I;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetVariableNumber
// (Defined, Iterator, Singular, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// float                          F                              (Parm)

void UGFxMoviePlayer::SetVariableNumber(const struct FString& Path, float F)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.SetVariableNumber"));

	UGFxMoviePlayer_SetVariableNumber_Params params;
	params.Path = Path;
	params.F = F;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetVariableBool
// (Defined, Singular, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// bool                           B                              (Parm)

void UGFxMoviePlayer::SetVariableBool(const struct FString& Path, bool B)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.SetVariableBool"));

	UGFxMoviePlayer_SetVariableBool_Params params;
	params.Path = Path;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetVariable
// (Singular, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// struct FASValue                Arg                            (Parm, NeedCtorLink)

void UGFxMoviePlayer::SetVariable(const struct FString& Path, const struct FASValue& Arg)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.SetVariable"));

	UGFxMoviePlayer_SetVariable_Params params;
	params.Path = Path;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.GetAS3ClassObject
// (Final, PreOperator, Singular, Net, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// class UClass*                  Type                           (OptionalParm, Parm)
// class UGFxObject*              ReturnValue                    (Parm, OutParm, ReturnParm)

class UGFxObject* UGFxMoviePlayer::GetAS3ClassObject(const struct FString& Path, class UClass* Type)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.GetAS3ClassObject"));

	UGFxMoviePlayer_GetAS3ClassObject_Params params;
	params.Path = Path;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.GetVariableObject
// (Iterator, PreOperator, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// class UClass*                  Type                           (OptionalParm, Parm)
// class UGFxObject*              ReturnValue                    (Parm, OutParm, ReturnParm)

class UGFxObject* UGFxMoviePlayer::GetVariableObject(const struct FString& Path, class UClass* Type)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.GetVariableObject"));

	UGFxMoviePlayer_GetVariableObject_Params params;
	params.Path = Path;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.GetVariableString
// (Final, Iterator, PreOperator, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UGFxMoviePlayer::GetVariableString(const struct FString& Path)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.GetVariableString"));

	UGFxMoviePlayer_GetVariableString_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.GetVariableInt
// (Final, PreOperator, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UGFxMoviePlayer::GetVariableInt(const struct FString& Path)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.GetVariableInt"));

	UGFxMoviePlayer_GetVariableInt_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.GetVariableNumber
// (Final, Defined, PreOperator, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UGFxMoviePlayer::GetVariableNumber(const struct FString& Path)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.GetVariableNumber"));

	UGFxMoviePlayer_GetVariableNumber_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.GetVariableBool
// (Final, Defined, Iterator, Latent, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxMoviePlayer::GetVariableBool(const struct FString& Path)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.GetVariableBool"));

	UGFxMoviePlayer_GetVariableBool_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.GetVariable
// (Final, Iterator, Latent, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// struct FASValue                ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FASValue UGFxMoviePlayer::GetVariable(const struct FString& Path)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.GetVariable"));

	UGFxMoviePlayer_GetVariable_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.GetAVMVersion
// (Defined, PreOperator, Singular, Net, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UGFxMoviePlayer::GetAVMVersion()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.GetAVMVersion"));

	UGFxMoviePlayer_GetAVMVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.ShouldBlockKey
// (Defined, Iterator, Latent, Singular, Net, Simulated, Exec, Native, HasOptionalParms)
// Parameters:
// int                            ControllerId                   (Parm)
// struct FName                   ButtonName                     (Parm)
// TEnumAsByte<EInputEvent>       InputEvent                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxMoviePlayer::ShouldBlockKey(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> InputEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.ShouldBlockKey"));

	UGFxMoviePlayer_ShouldBlockKey_Params params;
	params.ControllerId = ControllerId;
	params.ButtonName = ButtonName;
	params.InputEvent = InputEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.FilterButtonInput
// (Iterator, Singular, Net, Simulated, Exec, Native, HasOptionalParms)
// Parameters:
// int                            ControllerId                   (Parm)
// struct FName                   ButtonName                     (Parm)
// TEnumAsByte<EInputEvent>       InputEvent                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxMoviePlayer::FilterButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> InputEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.FilterButtonInput"));

	UGFxMoviePlayer_FilterButtonInput_Params params;
	params.ControllerId = ControllerId;
	params.ButtonName = ButtonName;
	params.InputEvent = InputEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.NativeAllowButtonInput
// (Final, Singular, Net, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            ControllerId                   (Parm)
// struct FName                   ButtonName                     (Parm)
// TEnumAsByte<EInputEvent>       InputEvent                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxMoviePlayer::NativeAllowButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> InputEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.NativeAllowButtonInput"));

	UGFxMoviePlayer_NativeAllowButtonInput_Params params;
	params.ControllerId = ControllerId;
	params.ButtonName = ButtonName;
	params.InputEvent = InputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.FlushPlayerInput
// (Net, Simulated, Exec, Event, Static)
// Parameters:
// bool                           capturekeysonly                (Parm)

void UGFxMoviePlayer::STATIC_FlushPlayerInput(bool capturekeysonly)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.FlushPlayerInput"));

	UGFxMoviePlayer_FlushPlayerInput_Params params;
	params.capturekeysonly = capturekeysonly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.ClearFocusIgnoreKeys
// (Final, Defined, PreOperator, Net, NetReliable, Exec, Operator, HasOptionalParms)

void UGFxMoviePlayer::ClearFocusIgnoreKeys()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.ClearFocusIgnoreKeys"));

	UGFxMoviePlayer_ClearFocusIgnoreKeys_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.AddFocusIgnoreKey
// (NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FName                   Key                            (Parm)

void UGFxMoviePlayer::AddFocusIgnoreKey(const struct FName& Key)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.AddFocusIgnoreKey"));

	UGFxMoviePlayer_AddFocusIgnoreKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.ClearCaptureKeys
// (Defined, PreOperator, Net, NetReliable, Exec, Operator, HasOptionalParms)

void UGFxMoviePlayer::ClearCaptureKeys()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.ClearCaptureKeys"));

	UGFxMoviePlayer_ClearCaptureKeys_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.AddCaptureKey
// (Defined, Iterator, Latent, PreOperator, Singular, Net, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FName                   Key                            (Parm)

void UGFxMoviePlayer::AddCaptureKey(const struct FName& Key)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.AddCaptureKey"));

	UGFxMoviePlayer_AddCaptureKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveInput
// (Final, Latent, PreOperator, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// bool                           bCanReceiveInput               (Parm)

void UGFxMoviePlayer::SetMovieCanReceiveInput(bool bCanReceiveInput)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveInput"));

	UGFxMoviePlayer_SetMovieCanReceiveInput_Params params;
	params.bCanReceiveInput = bCanReceiveInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveFocus
// (Latent, PreOperator, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// bool                           bCanReceiveFocus               (Parm)

void UGFxMoviePlayer::SetMovieCanReceiveFocus(bool bCanReceiveFocus)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveFocus"));

	UGFxMoviePlayer_SetMovieCanReceiveFocus_Params params;
	params.bCanReceiveFocus = bCanReceiveFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetPerspective3D
// (Final, Defined, Latent, PreOperator, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FMatrix                 matPersp                       (Const, Parm, OutParm)

void UGFxMoviePlayer::SetPerspective3D(struct FMatrix* matPersp)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.SetPerspective3D"));

	UGFxMoviePlayer_SetPerspective3D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (matPersp != nullptr)
		*matPersp = params.matPersp;
}


// Function GFxUI.GFxMoviePlayer.SetView3D
// (Defined, Latent, Singular, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FMatrix                 matView                        (Const, Parm, OutParm)

void UGFxMoviePlayer::SetView3D(struct FMatrix* matView)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.SetView3D"));

	UGFxMoviePlayer_SetView3D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (matView != nullptr)
		*matView = params.matView;
}


// Function GFxUI.GFxMoviePlayer.GetVisibleFrameRect
// (Latent, PreOperator, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// float                          x0                             (Parm, OutParm)
// float                          y0                             (Parm, OutParm)
// float                          X1                             (Parm, OutParm)
// float                          Y1                             (Parm, OutParm)

void UGFxMoviePlayer::GetVisibleFrameRect(float* x0, float* y0, float* X1, float* Y1)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.GetVisibleFrameRect"));

	UGFxMoviePlayer_GetVisibleFrameRect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (x0 != nullptr)
		*x0 = params.x0;
	if (y0 != nullptr)
		*y0 = params.y0;
	if (X1 != nullptr)
		*X1 = params.X1;
	if (Y1 != nullptr)
		*Y1 = params.Y1;
}


// Function GFxUI.GFxMoviePlayer.SetAlignment
// (Final, Defined, Iterator, PreOperator, Singular, Net, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// TEnumAsByte<EGFxAlign>         A                              (Parm)

void UGFxMoviePlayer::SetAlignment(TEnumAsByte<EGFxAlign> A)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.SetAlignment"));

	UGFxMoviePlayer_SetAlignment_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetViewScaleMode
// (Iterator, Latent, Singular, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// TEnumAsByte<EGFxScaleMode>     SM                             (Parm)

void UGFxMoviePlayer::SetViewScaleMode(TEnumAsByte<EGFxScaleMode> SM)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.SetViewScaleMode"));

	UGFxMoviePlayer_SetViewScaleMode_Params params;
	params.SM = SM;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.ViewportToScreen
// (Final, Defined, Iterator, PreOperator, Net, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            X                              (Parm)
// int                            Y                              (Parm)
// int                            xOut                           (Parm, OutParm)
// int                            yOut                           (Parm, OutParm)

void UGFxMoviePlayer::ViewportToScreen(int X, int Y, int* xOut, int* yOut)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.ViewportToScreen"));

	UGFxMoviePlayer_ViewportToScreen_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (xOut != nullptr)
		*xOut = params.xOut;
	if (yOut != nullptr)
		*yOut = params.yOut;
}


// Function GFxUI.GFxMoviePlayer.ScreenToViewport
// (Defined, Iterator, PreOperator, Singular, Net, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            X                              (Parm)
// int                            Y                              (Parm)
// int                            xOut                           (Parm, OutParm)
// int                            yOut                           (Parm, OutParm)

void UGFxMoviePlayer::ScreenToViewport(int X, int Y, int* xOut, int* yOut)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.ScreenToViewport"));

	UGFxMoviePlayer_ScreenToViewport_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (xOut != nullptr)
		*xOut = params.xOut;
	if (yOut != nullptr)
		*yOut = params.yOut;
}


// Function GFxUI.GFxMoviePlayer.GetViewport
// (Final, Defined, Iterator, PreOperator, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            X                              (Parm, OutParm)
// int                            Y                              (Parm, OutParm)
// int                            Width                          (Parm, OutParm)
// int                            Height                         (Parm, OutParm)

void UGFxMoviePlayer::GetViewport(int* X, int* Y, int* Width, int* Height)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.GetViewport"));

	UGFxMoviePlayer_GetViewport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (X != nullptr)
		*X = params.X;
	if (Y != nullptr)
		*Y = params.Y;
	if (Width != nullptr)
		*Width = params.Width;
	if (Height != nullptr)
		*Height = params.Height;
}


// Function GFxUI.GFxMoviePlayer.SetViewport
// (Final, Defined, Latent, Singular, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            X                              (Parm)
// int                            Y                              (Parm)
// int                            Width                          (Parm)
// int                            Height                         (Parm)

void UGFxMoviePlayer::SetViewport(int X, int Y, int Width, int Height)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.SetViewport"));

	UGFxMoviePlayer_SetViewport_Params params;
	params.X = X;
	params.Y = Y;
	params.Width = Width;
	params.Height = Height;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.GetGameViewportClient
// (Final, Latent, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// class UGameViewportClient*     ReturnValue                    (Parm, OutParm, ReturnParm)

class UGameViewportClient* UGFxMoviePlayer::GetGameViewportClient()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.GetGameViewportClient"));

	UGFxMoviePlayer_GetGameViewportClient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.SetPriority
// (Iterator, Latent, PreOperator, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// unsigned char                  NewPriority                    (Parm)

void UGFxMoviePlayer::SetPriority(unsigned char NewPriority)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.SetPriority"));

	UGFxMoviePlayer_SetPriority_Params params;
	params.NewPriority = NewPriority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetExternalTexture
// (Final, PreOperator, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 Resource                       (Parm, NeedCtorLink)
// class UTexture*                Texture                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxMoviePlayer::SetExternalTexture(const struct FString& Resource, class UTexture* Texture)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.SetExternalTexture"));

	UGFxMoviePlayer_SetExternalTexture_Params params;
	params.Resource = Resource;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.SetExternalInterface
// (PreOperator, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// class UObject*                 H                              (Parm)

void UGFxMoviePlayer::SetExternalInterface(class UObject* H)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.SetExternalInterface"));

	UGFxMoviePlayer_SetExternalInterface_Params params;
	params.H = H;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetTimingMode
// (Final, Defined, Iterator, Latent, PreOperator, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// TEnumAsByte<EGFxTimingMode>    Mode                           (Parm)

void UGFxMoviePlayer::SetTimingMode(TEnumAsByte<EGFxTimingMode> Mode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.SetTimingMode"));

	UGFxMoviePlayer_SetTimingMode_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetMovieInfo
// (Defined, Latent, PreOperator, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// class USwfMovie*               Data                           (Parm)

void UGFxMoviePlayer::SetMovieInfo(class USwfMovie* Data)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.SetMovieInfo"));

	UGFxMoviePlayer_SetMovieInfo_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.ConditionalClearPause
// (Final, Defined, Singular, Net, Simulated, Exec, Native, HasOptionalParms)

void UGFxMoviePlayer::ConditionalClearPause()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.ConditionalClearPause"));

	UGFxMoviePlayer_ConditionalClearPause_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.OnCleanup
// (Latent, Singular, Net, Simulated, Exec, Native, HasOptionalParms)

void UGFxMoviePlayer::OnCleanup()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.OnCleanup"));

	UGFxMoviePlayer_OnCleanup_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.OnClose
// (Final, Latent, Singular, Net, Simulated, Exec, Native, HasOptionalParms)

void UGFxMoviePlayer::OnClose()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.OnClose"));

	UGFxMoviePlayer_OnClose_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.Close
// (Final, Defined, Iterator, Latent, Net, Simulated, Native, Event, HasOptionalParms)
// Parameters:
// bool                           Unload                         (OptionalParm, Parm)

void UGFxMoviePlayer::Close(bool Unload)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.Close"));

	UGFxMoviePlayer_Close_Params params;
	params.Unload = Unload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetPause
// (Final, Latent, PreOperator, Singular, NetReliable, Exec, Native, HasOptionalParms)
// Parameters:
// bool                           bPausePlayback                 (OptionalParm, Parm)

void UGFxMoviePlayer::SetPause(bool bPausePlayback)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.SetPause"));

	UGFxMoviePlayer_SetPause_Params params;
	params.bPausePlayback = bPausePlayback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.OnPostAdvance
// (Iterator, Latent, Singular, Net, Simulated, Exec, Native, HasOptionalParms)
// Parameters:
// float                          DeltaTime                      (Parm)

void UGFxMoviePlayer::OnPostAdvance(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.OnPostAdvance"));

	UGFxMoviePlayer_OnPostAdvance_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.PostAdvance
// (Final, Latent, Singular, Net, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// float                          DeltaTime                      (Parm)

void UGFxMoviePlayer::PostAdvance(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.PostAdvance"));

	UGFxMoviePlayer_PostAdvance_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.Advance
// (Final, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// float                          Time                           (Parm)

void UGFxMoviePlayer::Advance(float Time)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.Advance"));

	UGFxMoviePlayer_Advance_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.Start
// (Final, Defined, Iterator, Latent, Singular, Net, Simulated, Exec, Native, HasOptionalParms)
// Parameters:
// bool                           StartPaused                    (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxMoviePlayer::Start(bool StartPaused)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxMoviePlayer.Start"));

	UGFxMoviePlayer_Start_Params params;
	params.StartPaused = StartPaused;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetFocused
// (Final, Defined, Iterator, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxObject::GetFocused()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.GetFocused"));

	UGFxObject_GetFocused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetTextHeight
// (Final, Defined, Latent, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UGFxObject::GetTextHeight()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.GetTextHeight"));

	UGFxObject_GetTextHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetTextWidth
// (Iterator, Latent, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UGFxObject::GetTextWidth()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.GetTextWidth"));

	UGFxObject_GetTextWidth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetYRotation
// (Defined, Iterator, Latent, PreOperator, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UGFxObject::GetYRotation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.GetYRotation"));

	UGFxObject_GetYRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetXRotation
// (Final, Defined, Latent, PreOperator, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UGFxObject::GetXRotation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.GetXRotation"));

	UGFxObject_GetXRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetRotation
// (Final, Iterator, Net, NetReliable, Exec, Native, Event, Static)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UGFxObject::STATIC_GetRotation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.GetRotation"));

	UGFxObject_GetRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetYScale
// (Final, Defined, Iterator, Latent, PreOperator, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UGFxObject::GetYScale()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.GetYScale"));

	UGFxObject_GetYScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetXScale
// (Iterator, Latent, PreOperator, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UGFxObject::GetXScale()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.GetXScale"));

	UGFxObject_GetXScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetHeight
// (Iterator, PreOperator, NetReliable, Simulated, Native, HasOptionalParms)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UGFxObject::GetHeight()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.GetHeight"));

	UGFxObject_GetHeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetWidth
// (Final, Latent, PreOperator, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UGFxObject::GetWidth()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.GetWidth"));

	UGFxObject_GetWidth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetAlpha
// (PreOperator, Singular, Net, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UGFxObject::GetAlpha()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.GetAlpha"));

	UGFxObject_GetAlpha_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetY
// (Final, Iterator, Latent, PreOperator, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UGFxObject::GetY()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.GetY"));

	UGFxObject_GetY_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetX
// (Defined, Latent, PreOperator, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UGFxObject::GetX()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.GetX"));

	UGFxObject_GetX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.SetYRotation
// (Iterator, PreOperator, Singular, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// float                          fValue                         (Parm)

void UGFxObject::SetYRotation(float fValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.SetYRotation"));

	UGFxObject_SetYRotation_Params params;
	params.fValue = fValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetXRotation
// (Final, PreOperator, Singular, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// float                          fValue                         (Parm)

void UGFxObject::SetXRotation(float fValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.SetXRotation"));

	UGFxObject_SetXRotation_Params params;
	params.fValue = fValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetRotation
// (Defined, Latent, PreOperator, Net, Event, HasOptionalParms)
// Parameters:
// float                          fValue                         (Parm)

void UGFxObject::SetRotation(float fValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.SetRotation"));

	UGFxObject_SetRotation_Params params;
	params.fValue = fValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetDisabled
// (Final, Defined, Iterator, Singular, NetReliable, Exec, Native, HasOptionalParms)
// Parameters:
// bool                           bValue                         (Parm)

void UGFxObject::SetDisabled(bool bValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.SetDisabled"));

	UGFxObject_SetDisabled_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetYScale
// (Final, Iterator, PreOperator, Singular, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// float                          fValue                         (Parm)

void UGFxObject::SetYScale(float fValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.SetYScale"));

	UGFxObject_SetYScale_Params params;
	params.fValue = fValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetXScale
// (Defined, PreOperator, Singular, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// float                          fValue                         (Parm)

void UGFxObject::SetXScale(float fValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.SetXScale"));

	UGFxObject_SetXScale_Params params;
	params.fValue = fValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetHeight
// (Final, Iterator, PreOperator, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// float                          fValue                         (Parm)

void UGFxObject::SetHeight(float fValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.SetHeight"));

	UGFxObject_SetHeight_Params params;
	params.fValue = fValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetWidth
// (Final, Defined, Iterator, Latent, Singular, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// float                          fValue                         (Parm)

void UGFxObject::SetWidth(float fValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.SetWidth"));

	UGFxObject_SetWidth_Params params;
	params.fValue = fValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetAlpha
// (Latent, PreOperator, Singular, Net, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// float                          fValue                         (Parm)

void UGFxObject::SetAlpha(float fValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.SetAlpha"));

	UGFxObject_SetAlpha_Params params;
	params.fValue = fValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetY
// (Final, Defined, PreOperator, Singular, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// float                          fValue                         (Parm)

void UGFxObject::SetY(float fValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.SetY"));

	UGFxObject_SetY_Params params;
	params.fValue = fValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetX
// (PreOperator, Singular, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// float                          fValue                         (Parm)

void UGFxObject::SetX(float fValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.SetX"));

	UGFxObject_SetX_Params params;
	params.fValue = fValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.WidgetUnloaded
// (Final, PreOperator, Singular, Net, Simulated, Exec, Native, HasOptionalParms)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxObject::WidgetUnloaded(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.WidgetUnloaded"));

	UGFxObject_WidgetUnloaded_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.WidgetInitialized
// (PreOperator, Singular, Net, Simulated, Exec, Native, HasOptionalParms)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxObject::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.WidgetInitialized"));

	UGFxObject_WidgetInitialized_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.ListChildren
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Simulated, Exec, Operator, HasOptionalParms)

void UGFxObject::ListChildren()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.ListChildren"));

	UGFxObject_ListChildren_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.RemoveMovieClip
// (Final, Iterator, Latent, Singular, Net, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 PathName                       (Parm, NeedCtorLink)

void UGFxObject::RemoveMovieClip(const struct FString& PathName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.RemoveMovieClip"));

	UGFxObject_RemoveMovieClip_Params params;
	params.PathName = PathName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.AttachMovie
// (Defined, Singular, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 symbolname                     (Parm, NeedCtorLink)
// struct FString                 instancename                   (Parm, NeedCtorLink)
// int                            Depth                          (OptionalParm, Parm)
// class UClass*                  Type                           (OptionalParm, Parm)
// class UGFxObject*              ReturnValue                    (Parm, OutParm, ReturnParm)

class UGFxObject* UGFxObject::AttachMovie(const struct FString& symbolname, const struct FString& instancename, int Depth, class UClass* Type)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.AttachMovie"));

	UGFxObject_AttachMovie_Params params;
	params.symbolname = symbolname;
	params.instancename = instancename;
	params.Depth = Depth;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.CreateEmptyMovieClip
// (Final, Defined, Iterator, PreOperator, Net, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 instancename                   (Parm, NeedCtorLink)
// int                            Depth                          (OptionalParm, Parm)
// class UClass*                  Type                           (OptionalParm, Parm)
// class UGFxObject*              ReturnValue                    (Parm, OutParm, ReturnParm)

class UGFxObject* UGFxObject::CreateEmptyMovieClip(const struct FString& instancename, int Depth, class UClass* Type)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.CreateEmptyMovieClip"));

	UGFxObject_CreateEmptyMovieClip_Params params;
	params.instancename = instancename;
	params.Depth = Depth;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GotoAndStopI
// (Final, Iterator, Latent, Singular, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            frame                          (Parm)

void UGFxObject::GotoAndStopI(int frame)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.GotoAndStopI"));

	UGFxObject_GotoAndStopI_Params params;
	params.frame = frame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.GotoAndStop
// (Iterator, Latent, Singular, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 frame                          (Parm, NeedCtorLink)

void UGFxObject::GotoAndStop(const struct FString& frame)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.GotoAndStop"));

	UGFxObject_GotoAndStop_Params params;
	params.frame = frame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.GotoAndPlayI
// (Final, Defined, Latent, Singular, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            frame                          (Parm)

void UGFxObject::GotoAndPlayI(int frame)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.GotoAndPlayI"));

	UGFxObject_GotoAndPlayI_Params params;
	params.frame = frame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.GotoAndPlay
// (Defined, Latent, Singular, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 frame                          (Parm, NeedCtorLink)

void UGFxObject::GotoAndPlay(const struct FString& frame)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.GotoAndPlay"));

	UGFxObject_GotoAndPlay_Params params;
	params.frame = frame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.ActionScriptArray
// (Final, Iterator, PreOperator, Singular, Net, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// TArray<class UGFxObject*>      ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

TArray<class UGFxObject*> UGFxObject::ActionScriptArray(const struct FString& Path)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.ActionScriptArray"));

	UGFxObject_ActionScriptArray_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.ActionScriptObject
// (Final, Latent, PreOperator, Singular, Net, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// class UGFxObject*              ReturnValue                    (Parm, OutParm, ReturnParm)

class UGFxObject* UGFxObject::ActionScriptObject(const struct FString& Path)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.ActionScriptObject"));

	UGFxObject_ActionScriptObject_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.ActionScriptString
// (Iterator, Latent, PreOperator, Singular, Net, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 method                         (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UGFxObject::ActionScriptString(const struct FString& method)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.ActionScriptString"));

	UGFxObject_ActionScriptString_Params params;
	params.method = method;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.ActionScriptFloat
// (Final, Defined, Iterator, PreOperator, Singular, Net, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 method                         (Parm, NeedCtorLink)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UGFxObject::ActionScriptFloat(const struct FString& method)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.ActionScriptFloat"));

	UGFxObject_ActionScriptFloat_Params params;
	params.method = method;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.ActionScriptInt
// (Latent, PreOperator, Singular, Net, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 method                         (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UGFxObject::ActionScriptInt(const struct FString& method)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.ActionScriptInt"));

	UGFxObject_ActionScriptInt_Params params;
	params.method = method;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.ActionScriptVoid
// (Final, Iterator, Latent, PreOperator, Singular, Net, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 method                         (Parm, NeedCtorLink)

void UGFxObject::ActionScriptVoid(const struct FString& method)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.ActionScriptVoid"));

	UGFxObject_ActionScriptVoid_Params params;
	params.method = method;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.Invoke
// (Final, Iterator, Latent, PreOperator, Singular, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 Member                         (Parm, NeedCtorLink)
// TArray<struct FASValue>        args                           (Parm, NeedCtorLink)
// struct FASValue                ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FASValue UGFxObject::Invoke(const struct FString& Member, TArray<struct FASValue> args)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.Invoke"));

	UGFxObject_Invoke_Params params;
	params.Member = Member;
	params.args = args;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.ActionScriptSetFunctionOn
// (Final, Defined, Latent, PreOperator, Singular, Net, Exec, Operator, HasOptionalParms)
// Parameters:
// class UGFxObject*              Target                         (Parm)
// struct FString                 Member                         (Parm, NeedCtorLink)

void UGFxObject::ActionScriptSetFunctionOn(class UGFxObject* Target, const struct FString& Member)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.ActionScriptSetFunctionOn"));

	UGFxObject_ActionScriptSetFunctionOn_Params params;
	params.Target = Target;
	params.Member = Member;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.ActionScriptSetFunction
// (Defined, Latent, PreOperator, Singular, Net, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 Member                         (Parm, NeedCtorLink)

void UGFxObject::ActionScriptSetFunction(const struct FString& Member)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.ActionScriptSetFunction"));

	UGFxObject_ActionScriptSetFunction_Params params;
	params.Member = Member;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementMemberString
// (Final, Defined, Latent, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            Index                          (Parm)
// struct FString                 Member                         (Parm, NeedCtorLink)
// struct FString                 S                              (Parm, NeedCtorLink)

void UGFxObject::SetElementMemberString(int Index, const struct FString& Member, const struct FString& S)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.SetElementMemberString"));

	UGFxObject_SetElementMemberString_Params params;
	params.Index = Index;
	params.Member = Member;
	params.S = S;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementMemberInt
// (Final, Latent, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            Index                          (Parm)
// struct FString                 Member                         (Parm, NeedCtorLink)
// int                            I                              (Parm)

void UGFxObject::SetElementMemberInt(int Index, const struct FString& Member, int I)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.SetElementMemberInt"));

	UGFxObject_SetElementMemberInt_Params params;
	params.Index = Index;
	params.Member = Member;
	params.I = I;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementMemberFloat
// (Latent, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            Index                          (Parm)
// struct FString                 Member                         (Parm, NeedCtorLink)
// float                          F                              (Parm)

void UGFxObject::SetElementMemberFloat(int Index, const struct FString& Member, float F)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.SetElementMemberFloat"));

	UGFxObject_SetElementMemberFloat_Params params;
	params.Index = Index;
	params.Member = Member;
	params.F = F;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementMemberBool
// (Final, Defined, Iterator, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            Index                          (Parm)
// struct FString                 Member                         (Parm, NeedCtorLink)
// bool                           B                              (Parm)

void UGFxObject::SetElementMemberBool(int Index, const struct FString& Member, bool B)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.SetElementMemberBool"));

	UGFxObject_SetElementMemberBool_Params params;
	params.Index = Index;
	params.Member = Member;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementMemberObject
// (Defined, Latent, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            Index                          (Parm)
// struct FString                 Member                         (Parm, NeedCtorLink)
// class UGFxObject*              val                            (Parm)

void UGFxObject::SetElementMemberObject(int Index, const struct FString& Member, class UGFxObject* val)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.SetElementMemberObject"));

	UGFxObject_SetElementMemberObject_Params params;
	params.Index = Index;
	params.Member = Member;
	params.val = val;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementMember
// (Defined, Iterator, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            Index                          (Parm)
// struct FString                 Member                         (Parm, NeedCtorLink)
// struct FASValue                Arg                            (Parm, NeedCtorLink)

void UGFxObject::SetElementMember(int Index, const struct FString& Member, const struct FASValue& Arg)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.SetElementMember"));

	UGFxObject_SetElementMember_Params params;
	params.Index = Index;
	params.Member = Member;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.GetElementMemberString
// (Final, Defined, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            Index                          (Parm)
// struct FString                 Member                         (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UGFxObject::GetElementMemberString(int Index, const struct FString& Member)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.GetElementMemberString"));

	UGFxObject_GetElementMemberString_Params params;
	params.Index = Index;
	params.Member = Member;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetElementMemberInt
// (Final, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            Index                          (Parm)
// struct FString                 Member                         (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UGFxObject::GetElementMemberInt(int Index, const struct FString& Member)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.GetElementMemberInt"));

	UGFxObject_GetElementMemberInt_Params params;
	params.Index = Index;
	params.Member = Member;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetElementMemberFloat
// (Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            Index                          (Parm)
// struct FString                 Member                         (Parm, NeedCtorLink)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UGFxObject::GetElementMemberFloat(int Index, const struct FString& Member)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.GetElementMemberFloat"));

	UGFxObject_GetElementMemberFloat_Params params;
	params.Index = Index;
	params.Member = Member;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetElementMemberBool
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            Index                          (Parm)
// struct FString                 Member                         (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxObject::GetElementMemberBool(int Index, const struct FString& Member)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.GetElementMemberBool"));

	UGFxObject_GetElementMemberBool_Params params;
	params.Index = Index;
	params.Member = Member;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetElementMemberObject
// (Defined, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            Index                          (Parm)
// struct FString                 Member                         (Parm, NeedCtorLink)
// class UClass*                  Type                           (OptionalParm, Parm)
// class UGFxObject*              ReturnValue                    (Parm, OutParm, ReturnParm)

class UGFxObject* UGFxObject::GetElementMemberObject(int Index, const struct FString& Member, class UClass* Type)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.GetElementMemberObject"));

	UGFxObject_GetElementMemberObject_Params params;
	params.Index = Index;
	params.Member = Member;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetElementMember
// (Defined, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            Index                          (Parm)
// struct FString                 Member                         (Parm, NeedCtorLink)
// struct FASValue                ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FASValue UGFxObject::GetElementMember(int Index, const struct FString& Member)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.GetElementMember"));

	UGFxObject_GetElementMember_Params params;
	params.Index = Index;
	params.Member = Member;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.SetElementColorTransform
// (Final, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            Index                          (Parm)
// struct FASColorTransform       cxform                         (Parm)

void UGFxObject::SetElementColorTransform(int Index, const struct FASColorTransform& cxform)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.SetElementColorTransform"));

	UGFxObject_SetElementColorTransform_Params params;
	params.Index = Index;
	params.cxform = cxform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementPosition
// (Final, Iterator, Latent, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            Index                          (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UGFxObject::SetElementPosition(int Index, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.SetElementPosition"));

	UGFxObject_SetElementPosition_Params params;
	params.Index = Index;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementVisible
// (Final, Defined, Iterator, Latent, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            Index                          (Parm)
// bool                           Visible                        (Parm)

void UGFxObject::SetElementVisible(int Index, bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.SetElementVisible"));

	UGFxObject_SetElementVisible_Params params;
	params.Index = Index;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementDisplayMatrix
// (Final, Defined, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            Index                          (Parm)
// struct FMatrix                 M                              (Parm)

void UGFxObject::SetElementDisplayMatrix(int Index, const struct FMatrix& M)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.SetElementDisplayMatrix"));

	UGFxObject_SetElementDisplayMatrix_Params params;
	params.Index = Index;
	params.M = M;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementDisplayInfo
// (Defined, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            Index                          (Parm)
// struct FASDisplayInfo          D                              (Parm)

void UGFxObject::SetElementDisplayInfo(int Index, const struct FASDisplayInfo& D)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.SetElementDisplayInfo"));

	UGFxObject_SetElementDisplayInfo_Params params;
	params.Index = Index;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.GetElementDisplayMatrix
// (Final, Defined, Latent, PreOperator, Singular, Net, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            Index                          (Parm)
// struct FMatrix                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMatrix UGFxObject::GetElementDisplayMatrix(int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.GetElementDisplayMatrix"));

	UGFxObject_GetElementDisplayMatrix_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetElementDisplayInfo
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            Index                          (Parm)
// struct FASDisplayInfo          ReturnValue                    (Parm, OutParm, ReturnParm)

struct FASDisplayInfo UGFxObject::GetElementDisplayInfo(int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.GetElementDisplayInfo"));

	UGFxObject_GetElementDisplayInfo_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.SetElementString
// (Defined, Iterator, Latent, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            Index                          (Parm)
// struct FString                 S                              (Parm, NeedCtorLink)

void UGFxObject::SetElementString(int Index, const struct FString& S)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.SetElementString"));

	UGFxObject_SetElementString_Params params;
	params.Index = Index;
	params.S = S;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementInt
// (Final, Iterator, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            Index                          (Parm)
// int                            I                              (Parm)

void UGFxObject::SetElementInt(int Index, int I)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.SetElementInt"));

	UGFxObject_SetElementInt_Params params;
	params.Index = Index;
	params.I = I;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementFloat
// (Iterator, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            Index                          (Parm)
// float                          F                              (Parm)

void UGFxObject::SetElementFloat(int Index, float F)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.SetElementFloat"));

	UGFxObject_SetElementFloat_Params params;
	params.Index = Index;
	params.F = F;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementBool
// (NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            Index                          (Parm)
// bool                           B                              (Parm)

void UGFxObject::SetElementBool(int Index, bool B)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.SetElementBool"));

	UGFxObject_SetElementBool_Params params;
	params.Index = Index;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementObject
// (Iterator, Latent, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            Index                          (Parm)
// class UGFxObject*              val                            (Parm)

void UGFxObject::SetElementObject(int Index, class UGFxObject* val)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.SetElementObject"));

	UGFxObject_SetElementObject_Params params;
	params.Index = Index;
	params.val = val;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElement
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            Index                          (Parm)
// struct FASValue                Arg                            (Parm, NeedCtorLink)

void UGFxObject::SetElement(int Index, const struct FASValue& Arg)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.SetElement"));

	UGFxObject_SetElement_Params params;
	params.Index = Index;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.GetElementString
// (Final, Iterator, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            Index                          (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UGFxObject::GetElementString(int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.GetElementString"));

	UGFxObject_GetElementString_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetElementInt
// (Final, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            Index                          (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UGFxObject::GetElementInt(int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.GetElementInt"));

	UGFxObject_GetElementInt_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetElementFloat
// (Iterator, Latent, PreOperator, Singular, Net, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            Index                          (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UGFxObject::GetElementFloat(int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.GetElementFloat"));

	UGFxObject_GetElementFloat_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetElementBool
// (Final, Latent, PreOperator, Singular, Net, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            Index                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxObject::GetElementBool(int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.GetElementBool"));

	UGFxObject_GetElementBool_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetElementObject
// (Iterator, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            Index                          (Parm)
// class UClass*                  Type                           (OptionalParm, Parm)
// class UGFxObject*              ReturnValue                    (Parm, OutParm, ReturnParm)

class UGFxObject* UGFxObject::GetElementObject(int Index, class UClass* Type)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.GetElementObject"));

	UGFxObject_GetElementObject_Params params;
	params.Index = Index;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetElement
// (Latent, PreOperator, Singular, Net, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            Index                          (Parm)
// struct FASValue                ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FASValue UGFxObject::GetElement(int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.GetElement"));

	UGFxObject_GetElement_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.SetText
// (Defined, Iterator, Latent, PreOperator, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 Text                           (Parm, CoerceParm, NeedCtorLink)
// class UTranslationContext*     InContext                      (OptionalParm, Parm)

void UGFxObject::SetText(const struct FString& Text, class UTranslationContext* InContext)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.SetText"));

	UGFxObject_SetText_Params params;
	params.Text = Text;
	params.InContext = InContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.GetText
// (Defined, Latent, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UGFxObject::GetText()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.GetText"));

	UGFxObject_GetText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.SetForceHidden
// (Final, Defined, PreOperator, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// bool                           bForceHide                     (Parm)

void UGFxObject::SetForceHidden(bool bForceHide)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.SetForceHidden"));

	UGFxObject_SetForceHidden_Params params;
	params.bForceHide = bForceHide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetVisible
// (Final, Iterator, Latent, Singular, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// bool                           Visible                        (Parm)

void UGFxObject::SetVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.SetVisible"));

	UGFxObject_SetVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetDisplayMatrix3D
// (Defined, Iterator, Latent, PreOperator, Singular, Net, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FMatrix                 M                              (Parm)

void UGFxObject::SetDisplayMatrix3D(const struct FMatrix& M)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.SetDisplayMatrix3D"));

	UGFxObject_SetDisplayMatrix3D_Params params;
	params.M = M;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetDisplayMatrix
// (Final, Iterator, Latent, PreOperator, Singular, Net, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FMatrix                 M                              (Parm)

void UGFxObject::SetDisplayMatrix(const struct FMatrix& M)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.SetDisplayMatrix"));

	UGFxObject_SetDisplayMatrix_Params params;
	params.M = M;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetColorTransform
// (Final, Defined, Latent, PreOperator, Singular, Net, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FASColorTransform       cxform                         (Parm)

void UGFxObject::SetColorTransform(const struct FASColorTransform& cxform)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.SetColorTransform"));

	UGFxObject_SetColorTransform_Params params;
	params.cxform = cxform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetPosition
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Exec, Event, HasOptionalParms)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UGFxObject::SetPosition(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.SetPosition"));

	UGFxObject_SetPosition_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetDisplayInfo
// (Iterator, Latent, PreOperator, Singular, Net, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FASDisplayInfo          D                              (Parm)
// bool                           bResetCache                    (OptionalParm, Parm)

void UGFxObject::SetDisplayInfo(const struct FASDisplayInfo& D, bool bResetCache)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.SetDisplayInfo"));

	UGFxObject_SetDisplayInfo_Params params;
	params.D = D;
	params.bResetCache = bResetCache;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.GetDisplayMatrix3D
// (Final, Defined, Iterator, PreOperator, Singular, Net, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FMatrix                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMatrix UGFxObject::GetDisplayMatrix3D()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.GetDisplayMatrix3D"));

	UGFxObject_GetDisplayMatrix3D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetDisplayMatrix
// (Defined, Iterator, PreOperator, Singular, Net, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FMatrix                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMatrix UGFxObject::GetDisplayMatrix()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.GetDisplayMatrix"));

	UGFxObject_GetDisplayMatrix_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetColorTransform
// (Iterator, PreOperator, Singular, Net, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FASColorTransform       ReturnValue                    (Parm, OutParm, ReturnParm)

struct FASColorTransform UGFxObject::GetColorTransform()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.GetColorTransform"));

	UGFxObject_GetColorTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetPosition
// (Defined, Iterator, Latent, NetReliable, Exec, Native, Event, Static)
// Parameters:
// float                          X                              (Parm, OutParm)
// float                          Y                              (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxObject::STATIC_GetPosition(float* X, float* Y)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.GetPosition"));

	UGFxObject_GetPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (X != nullptr)
		*X = params.X;
	if (Y != nullptr)
		*Y = params.Y;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetDisplayInfo
// (Final, Iterator, PreOperator, Singular, Net, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FASDisplayInfo          ReturnValue                    (Parm, OutParm, ReturnParm)

struct FASDisplayInfo UGFxObject::GetDisplayInfo()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.GetDisplayInfo"));

	UGFxObject_GetDisplayInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.TranslateString
// (Defined, Iterator, Latent, Net, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 StringToTranslate              (Parm, NeedCtorLink)
// class UTranslationContext*     InContext                      (OptionalParm, Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UGFxObject::TranslateString(const struct FString& StringToTranslate, class UTranslationContext* InContext)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.TranslateString"));

	UGFxObject_TranslateString_Params params;
	params.StringToTranslate = StringToTranslate;
	params.InContext = InContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.SetFunction
// (Iterator, PreOperator, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 Member                         (Parm, NeedCtorLink)
// class UObject*                 context                        (Parm)
// struct FName                   fname                          (Parm)

void UGFxObject::SetFunction(const struct FString& Member, class UObject* context, const struct FName& fname)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.SetFunction"));

	UGFxObject_SetFunction_Params params;
	params.Member = Member;
	params.context = context;
	params.fname = fname;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetObject
// (Final, Latent, PreOperator, Event, HasOptionalParms)
// Parameters:
// struct FString                 Member                         (Parm, NeedCtorLink)
// class UGFxObject*              val                            (Parm)

void UGFxObject::SetObject(const struct FString& Member, class UGFxObject* val)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.SetObject"));

	UGFxObject_SetObject_Params params;
	params.Member = Member;
	params.val = val;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetString
// (Final, Iterator, Latent, PreOperator, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 Member                         (Parm, NeedCtorLink)
// struct FString                 S                              (Parm, NeedCtorLink)
// class UTranslationContext*     InContext                      (OptionalParm, Parm)

void UGFxObject::SetString(const struct FString& Member, const struct FString& S, class UTranslationContext* InContext)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.SetString"));

	UGFxObject_SetString_Params params;
	params.Member = Member;
	params.S = S;
	params.InContext = InContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetInt
// (Defined, Iterator, PreOperator, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 Member                         (Parm, NeedCtorLink)
// int                            I                              (Parm)

void UGFxObject::SetInt(const struct FString& Member, int I)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.SetInt"));

	UGFxObject_SetInt_Params params;
	params.Member = Member;
	params.I = I;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetFloat
// (Defined, PreOperator, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 Member                         (Parm, NeedCtorLink)
// float                          F                              (Parm)

void UGFxObject::SetFloat(const struct FString& Member, float F)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.SetFloat"));

	UGFxObject_SetFloat_Params params;
	params.Member = Member;
	params.F = F;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetBool
// (Final, Latent, PreOperator, Singular, Net, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 Member                         (Parm, NeedCtorLink)
// bool                           B                              (Parm)

void UGFxObject::SetBool(const struct FString& Member, bool B)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.SetBool"));

	UGFxObject_SetBool_Params params;
	params.Member = Member;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.Set
// (Final, Defined, Latent, PreOperator, Singular, Simulated, Exec, Native, HasOptionalParms)
// Parameters:
// struct FString                 Member                         (Parm, NeedCtorLink)
// struct FASValue                Arg                            (Parm, NeedCtorLink)

void UGFxObject::Set(const struct FString& Member, const struct FASValue& Arg)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.Set"));

	UGFxObject_Set_Params params;
	params.Member = Member;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.GetObject
// (Final, Iterator, Latent, PreOperator, Net, Exec, Native, Event, Static)
// Parameters:
// struct FString                 Member                         (Parm, NeedCtorLink)
// class UClass*                  Type                           (OptionalParm, Parm)
// class UGFxObject*              ReturnValue                    (Parm, OutParm, ReturnParm)

class UGFxObject* UGFxObject::STATIC_GetObject(const struct FString& Member, class UClass* Type)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.GetObject"));

	UGFxObject_GetObject_Params params;
	params.Member = Member;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetString
// (Final, Defined, PreOperator, Singular, Net, NetReliable, Exec, Native, Event, Static)
// Parameters:
// struct FString                 Member                         (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UGFxObject::STATIC_GetString(const struct FString& Member)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.GetString"));

	UGFxObject_GetString_Params params;
	params.Member = Member;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetInt
// (Final, Defined, Latent, Exec, Native, Event, Static)
// Parameters:
// struct FString                 Member                         (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UGFxObject::STATIC_GetInt(const struct FString& Member)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.GetInt"));

	UGFxObject_GetInt_Params params;
	params.Member = Member;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetFloat
// (Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// struct FString                 Member                         (Parm, NeedCtorLink)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UGFxObject::STATIC_GetFloat(const struct FString& Member)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.GetFloat"));

	UGFxObject_GetFloat_Params params;
	params.Member = Member;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetBool
// (Final, Defined, PreOperator, Singular, Net, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 Member                         (Parm, NeedCtorLink)
// bool                           bIgnoreUndefined               (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxObject::GetBool(const struct FString& Member, bool bIgnoreUndefined)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.GetBool"));

	UGFxObject_GetBool_Params params;
	params.Member = Member;
	params.bIgnoreUndefined = bIgnoreUndefined;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.Get
// (Final, Defined, Iterator, Latent, Singular, Net, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 Member                         (Parm, NeedCtorLink)
// struct FASValue                ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FASValue UGFxObject::Get(const struct FString& Member)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.Get"));

	UGFxObject_Get_Params params;
	params.Member = Member;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.SetColorMultiplier
// (Defined, Latent, PreOperator, Singular, Net, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// float                          R                              (Parm)
// float                          G                              (Parm)
// float                          B                              (Parm)
// float                          A                              (OptionalParm, Parm)
// bool                           bMaintainAdditive              (OptionalParm, Parm)

void UGFxObject::SetColorMultiplier(float R, float G, float B, float A, bool bMaintainAdditive)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.SetColorMultiplier"));

	UGFxObject_SetColorMultiplier_Params params;
	params.R = R;
	params.G = G;
	params.B = B;
	params.A = A;
	params.bMaintainAdditive = bMaintainAdditive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetColor
// (Iterator, PreOperator, Exec, Operator, HasOptionalParms)
// Parameters:
// float                          R                              (Parm)
// float                          G                              (Parm)
// float                          B                              (Parm)
// float                          A                              (OptionalParm, Parm)
// bool                           bMaintainMultiplier            (OptionalParm, Parm)

void UGFxObject::SetColor(float R, float G, float B, float A, bool bMaintainMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxObject.SetColor"));

	UGFxObject_SetColor_Params params;
	params.R = R;
	params.G = G;
	params.B = B;
	params.A = A;
	params.bMaintainMultiplier = bMaintainMultiplier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxAction_CloseMovie.IsValidLevelSequenceObject
// (PreOperator, Net, NetReliable, Simulated, Native, HasOptionalParms)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxAction_CloseMovie::IsValidLevelSequenceObject()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxAction_CloseMovie.IsValidLevelSequenceObject"));

	UGFxAction_CloseMovie_IsValidLevelSequenceObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxAction_GetVariable.IsValidLevelSequenceObject
// (PreOperator, Net, NetReliable, Simulated, Native, HasOptionalParms)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxAction_GetVariable::IsValidLevelSequenceObject()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxAction_GetVariable.IsValidLevelSequenceObject"));

	UGFxAction_GetVariable_IsValidLevelSequenceObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxAction_Invoke.IsValidLevelSequenceObject
// (PreOperator, Net, NetReliable, Simulated, Native, HasOptionalParms)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxAction_Invoke::IsValidLevelSequenceObject()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxAction_Invoke.IsValidLevelSequenceObject"));

	UGFxAction_Invoke_IsValidLevelSequenceObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxAction_OpenMovie.IsValidLevelSequenceObject
// (PreOperator, Net, NetReliable, Simulated, Native, HasOptionalParms)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxAction_OpenMovie::IsValidLevelSequenceObject()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxAction_OpenMovie.IsValidLevelSequenceObject"));

	UGFxAction_OpenMovie_IsValidLevelSequenceObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxAction_SetVariable.IsValidLevelSequenceObject
// (PreOperator, Net, NetReliable, Simulated, Native, HasOptionalParms)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxAction_SetVariable::IsValidLevelSequenceObject()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxAction_SetVariable.IsValidLevelSequenceObject"));

	UGFxAction_SetVariable_IsValidLevelSequenceObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxFSCmdHandler_Kismet.FSCommand
// (Final, Iterator, Singular, Net, Simulated, Exec, Native, HasOptionalParms)
// Parameters:
// class UGFxMoviePlayer*         Movie                          (Parm)
// class UGFxEvent_FSCommand*     Event                          (Parm)
// struct FString                 Cmd                            (Parm, NeedCtorLink)
// struct FString                 Arg                            (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxFSCmdHandler_Kismet::FSCommand(class UGFxMoviePlayer* Movie, class UGFxEvent_FSCommand* Event, const struct FString& Cmd, const struct FString& Arg)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxFSCmdHandler_Kismet.FSCommand"));

	UGFxFSCmdHandler_Kismet_FSCommand_Params params;
	params.Movie = Movie;
	params.Event = Event;
	params.Cmd = Cmd;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxClikWidget.ASRemoveAllEventListeners
// (Final, Iterator, Latent, PreOperator, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 Event                          (Parm, NeedCtorLink)

void UGFxClikWidget::ASRemoveAllEventListeners(const struct FString& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxClikWidget.ASRemoveAllEventListeners"));

	UGFxClikWidget_ASRemoveAllEventListeners_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxClikWidget.AS3AddEventListener
// (Final, PreOperator, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 Type                           (Parm, NeedCtorLink)
// class UGFxObject*              O                              (Parm)
// bool                           useCapture                     (OptionalParm, Parm)
// int                            listenerPriority               (OptionalParm, Parm)
// bool                           useWeakReference               (OptionalParm, Parm)

void UGFxClikWidget::AS3AddEventListener(const struct FString& Type, class UGFxObject* O, bool useCapture, int listenerPriority, bool useWeakReference)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxClikWidget.AS3AddEventListener"));

	UGFxClikWidget_AS3AddEventListener_Params params;
	params.Type = Type;
	params.O = O;
	params.useCapture = useCapture;
	params.listenerPriority = listenerPriority;
	params.useWeakReference = useWeakReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxClikWidget.ASAddEventListener
// (Final, Latent, PreOperator, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 Type                           (Parm, NeedCtorLink)
// class UGFxObject*              O                              (Parm)
// struct FString                 func                           (Parm, NeedCtorLink)

void UGFxClikWidget::ASAddEventListener(const struct FString& Type, class UGFxObject* O, const struct FString& func)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxClikWidget.ASAddEventListener"));

	UGFxClikWidget_ASAddEventListener_Params params;
	params.Type = Type;
	params.O = O;
	params.func = func;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxClikWidget.SetListener
// (Final, Defined, Iterator, PreOperator, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// class UGFxObject*              O                              (Parm)
// struct FString                 Member                         (Parm, NeedCtorLink)
// struct FScriptDelegate         Listener                       (Parm, NeedCtorLink)

void UGFxClikWidget::SetListener(class UGFxObject* O, const struct FString& Member, const struct FScriptDelegate& Listener)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxClikWidget.SetListener"));

	UGFxClikWidget_SetListener_Params params;
	params.O = O;
	params.Member = Member;
	params.Listener = Listener;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxClikWidget.GetEventStringFromTypename
// (Defined, Iterator, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FName                   Typename                       (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UGFxClikWidget::GetEventStringFromTypename(const struct FName& Typename)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxClikWidget.GetEventStringFromTypename"));

	UGFxClikWidget_GetEventStringFromTypename_Params params;
	params.Typename = Typename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxClikWidget.RemoveAllEventListeners
// (Iterator, Latent, Singular, Net, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 Event                          (Parm, NeedCtorLink)

void UGFxClikWidget::RemoveAllEventListeners(const struct FString& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxClikWidget.RemoveAllEventListeners"));

	UGFxClikWidget_RemoveAllEventListeners_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxClikWidget.AddEventListener
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FName                   Type                           (Parm)
// struct FScriptDelegate         Listener                       (Parm, NeedCtorLink)
// bool                           useCapture                     (OptionalParm, Parm)
// int                            listenerPriority               (OptionalParm, Parm)
// bool                           useWeakReference               (OptionalParm, Parm)

void UGFxClikWidget::AddEventListener(const struct FName& Type, const struct FScriptDelegate& Listener, bool useCapture, int listenerPriority, bool useWeakReference)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxClikWidget.AddEventListener"));

	UGFxClikWidget_AddEventListener_Params params;
	params.Type = Type;
	params.Listener = Listener;
	params.useCapture = useCapture;
	params.listenerPriority = listenerPriority;
	params.useWeakReference = useWeakReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxClikWidget.EventListener
// (Iterator, Latent, PreOperator, Net, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FEventData              Data                           (Parm, NeedCtorLink)

void UGFxClikWidget::EventListener(const struct FEventData& Data)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GFxUI.GFxClikWidget.EventListener"));

	UGFxClikWidget_EventListener_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
