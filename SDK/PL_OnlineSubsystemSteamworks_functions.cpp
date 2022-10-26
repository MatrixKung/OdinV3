// Paladins (5.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PL_OnlineSubsystemSteamworks_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.GetServerAddr
// (PreOperator, Net, NetReliable, Exec, Native, Event, Static)
// Parameters:
// struct FIpAddr                 OutServerIP                    (Parm, OutParm)
// int                            OutServerPort                  (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineAuthInterfaceSteamworks::STATIC_GetServerAddr(struct FIpAddr* OutServerIP, int* OutServerPort)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.GetServerAddr"));

	UOnlineAuthInterfaceSteamworks_GetServerAddr_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutServerIP != nullptr)
		*OutServerIP = params.OutServerIP;
	if (OutServerPort != nullptr)
		*OutServerPort = params.OutServerPort;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.GetServerUniqueId
// (Final, Defined, PreOperator, Net, NetReliable, Exec, Native, Event, Static)
// Parameters:
// struct FUniqueNetId            OutServerUID                   (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineAuthInterfaceSteamworks::STATIC_GetServerUniqueId(struct FUniqueNetId* OutServerUID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.GetServerUniqueId"));

	UOnlineAuthInterfaceSteamworks_GetServerUniqueId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutServerUID != nullptr)
		*OutServerUID = params.OutServerUID;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.VerifyServerAuthSession
// (Final, PreOperator, Singular, Operator, HasOptionalParms)
// Parameters:
// struct FUniqueNetId            ServerUID                      (Parm)
// struct FIpAddr                 ServerIP                       (Parm)
// int                            AuthTicketUID                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineAuthInterfaceSteamworks::VerifyServerAuthSession(const struct FUniqueNetId& ServerUID, const struct FIpAddr& ServerIP, int AuthTicketUID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.VerifyServerAuthSession"));

	UOnlineAuthInterfaceSteamworks_VerifyServerAuthSession_Params params;
	params.ServerUID = ServerUID;
	params.ServerIP = ServerIP;
	params.AuthTicketUID = AuthTicketUID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.CreateServerAuthSession
// (Defined, Iterator, PreOperator, Exec, Static)
// Parameters:
// struct FUniqueNetId            ClientUID                      (Parm)
// struct FIpAddr                 ClientIP                       (Parm)
// int                            ClientPort                     (Parm)
// int                            OutAuthTicketUID               (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineAuthInterfaceSteamworks::STATIC_CreateServerAuthSession(const struct FUniqueNetId& ClientUID, const struct FIpAddr& ClientIP, int ClientPort, int* OutAuthTicketUID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.CreateServerAuthSession"));

	UOnlineAuthInterfaceSteamworks_CreateServerAuthSession_Params params;
	params.ClientUID = ClientUID;
	params.ClientIP = ClientIP;
	params.ClientPort = ClientPort;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAuthTicketUID != nullptr)
		*OutAuthTicketUID = params.OutAuthTicketUID;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.VerifyClientAuthSession
// (Final, Iterator, Latent, Singular, Operator, HasOptionalParms)
// Parameters:
// struct FUniqueNetId            ClientUID                      (Parm)
// struct FIpAddr                 ClientIP                       (Parm)
// int                            ClientPort                     (Parm)
// int                            AuthTicketUID                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineAuthInterfaceSteamworks::VerifyClientAuthSession(const struct FUniqueNetId& ClientUID, const struct FIpAddr& ClientIP, int ClientPort, int AuthTicketUID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.VerifyClientAuthSession"));

	UOnlineAuthInterfaceSteamworks_VerifyClientAuthSession_Params params;
	params.ClientUID = ClientUID;
	params.ClientIP = ClientIP;
	params.ClientPort = ClientPort;
	params.AuthTicketUID = AuthTicketUID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.CreateClientAuthSession
// (Final, Defined, Exec, Static)
// Parameters:
// struct FUniqueNetId            ServerUID                      (Parm)
// struct FIpAddr                 ServerIP                       (Parm)
// int                            ServerPort                     (Parm)
// bool                           bSecure                        (Parm)
// int                            OutAuthTicketUID               (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineAuthInterfaceSteamworks::STATIC_CreateClientAuthSession(const struct FUniqueNetId& ServerUID, const struct FIpAddr& ServerIP, int ServerPort, bool bSecure, int* OutAuthTicketUID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.CreateClientAuthSession"));

	UOnlineAuthInterfaceSteamworks_CreateClientAuthSession_Params params;
	params.ServerUID = ServerUID;
	params.ServerIP = ServerIP;
	params.ServerPort = ServerPort;
	params.bSecure = bSecure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAuthTicketUID != nullptr)
		*OutAuthTicketUID = params.OutAuthTicketUID;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.SendServerAuthRequest
// (Final, Defined, Iterator, PreOperator, NetReliable, Exec, Native, HasOptionalParms)
// Parameters:
// struct FUniqueNetId            ServerUID                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineAuthInterfaceSteamworks::SendServerAuthRequest(const struct FUniqueNetId& ServerUID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.SendServerAuthRequest"));

	UOnlineAuthInterfaceSteamworks_SendServerAuthRequest_Params params;
	params.ServerUID = ServerUID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.SendClientAuthRequest
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, Exec, Native, HasOptionalParms)
// Parameters:
// class UPlayer*                 ClientConnection               (Parm)
// struct FUniqueNetId            ClientUID                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineAuthInterfaceSteamworks::SendClientAuthRequest(class UPlayer* ClientConnection, const struct FUniqueNetId& ClientUID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.SendClientAuthRequest"));

	UOnlineAuthInterfaceSteamworks_SendClientAuthRequest_Params params;
	params.ClientConnection = ClientConnection;
	params.ClientUID = ClientUID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.GetUserConnectionInfoAsync
// (Defined, PreOperator, Singular, Simulated, Exec, Native, Event, Static)
// Parameters:
// TArray<struct FString>         UserNames                      (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceSteamworks::STATIC_GetUserConnectionInfoAsync(TArray<struct FString> UserNames)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.GetUserConnectionInfoAsync"));

	UOnlineGameInterfaceSteamworks_GetUserConnectionInfoAsync_Params params;
	params.UserNames = UserNames;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.GetCurrentSessionMemberInfo
// (Iterator, Latent, Singular, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// struct FName                   SessionName                    (Parm)
// TArray<struct FSessionMemberInfo> OutMemberInfo                  (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceSteamworks::STATIC_GetCurrentSessionMemberInfo(const struct FName& SessionName, TArray<struct FSessionMemberInfo>* OutMemberInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.GetCurrentSessionMemberInfo"));

	UOnlineGameInterfaceSteamworks_GetCurrentSessionMemberInfo_Params params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutMemberInfo != nullptr)
		*OutMemberInfo = params.OutMemberInfo;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.GetCurrentSessionMemberInfoAsync
// (Final, Iterator, Latent, Singular, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FName                   SessionName                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceSteamworks::STATIC_GetCurrentSessionMemberInfoAsync(unsigned char LocalUserNum, const struct FName& SessionName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.GetCurrentSessionMemberInfoAsync"));

	UOnlineGameInterfaceSteamworks_GetCurrentSessionMemberInfoAsync_Params params;
	params.LocalUserNum = LocalUserNum;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.RunBandwidthTest
// (Final, Defined, Iterator, Latent, Singular, Net, Simulated, Native, HasOptionalParms)

void UOnlineGameInterfaceSteamworks::RunBandwidthTest()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.RunBandwidthTest"));

	UOnlineGameInterfaceSteamworks_RunBandwidthTest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.IsAllowedToNetworkHost
// (Iterator, Latent, NetReliable, Exec, Operator, Static)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceSteamworks::STATIC_IsAllowedToNetworkHost()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.IsAllowedToNetworkHost"));

	UOnlineGameInterfaceSteamworks_IsAllowedToNetworkHost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.GetRoomIdFromSessionId
// (Defined, Net, NetReliable, Exec, Native, Event, Static)
// Parameters:
// struct FString                 SessionId                      (Parm, NeedCtorLink)

void UOnlineGameInterfaceSteamworks::STATIC_GetRoomIdFromSessionId(const struct FString& SessionId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.GetRoomIdFromSessionId"));

	UOnlineGameInterfaceSteamworks_GetRoomIdFromSessionId_Params params;
	params.SessionId = SessionId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.GetRoomIdFromTitleService
// (Final, Defined, Net, NetReliable, Exec, Native, Event, Static)
// Parameters:
// struct FQWord                  DataId                         (Parm)

void UOnlineGameInterfaceSteamworks::STATIC_GetRoomIdFromTitleService(const struct FQWord& DataId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.GetRoomIdFromTitleService"));

	UOnlineGameInterfaceSteamworks_GetRoomIdFromTitleService_Params params;
	params.DataId = DataId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.GetRoomId
// (Final, Net, NetReliable, Exec, Native, Event, Static)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlineGameInterfaceSteamworks::STATIC_GetRoomId()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.GetRoomId"));

	UOnlineGameInterfaceSteamworks_GetRoomId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.GetNumberOfCurrentPlayersCached
// (PreOperator, Net, Exec, Native, Event, Static)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOnlineGameInterfaceSteamworks::STATIC_GetNumberOfCurrentPlayersCached()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.GetNumberOfCurrentPlayersCached"));

	UOnlineGameInterfaceSteamworks_GetNumberOfCurrentPlayersCached_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.SendPlayerList
// (Final, PreOperator, NetReliable, Exec, Native, HasOptionalParms)
// Parameters:
// TArray<class APlayerReplicationInfo*> Players                        (Const, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceSteamworks::SendPlayerList(TArray<class APlayerReplicationInfo*> Players)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.SendPlayerList"));

	UOnlineGameInterfaceSteamworks_SendPlayerList_Params params;
	params.Players = Players;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.RetrieveGameSettingsForIP
// (Defined, Iterator, Latent, Singular, NetReliable, Native, HasOptionalParms)
// Parameters:
// struct FString                 IPAddress                      (Parm, NeedCtorLink)

void UOnlineGameInterfaceSteamworks::RetrieveGameSettingsForIP(const struct FString& IPAddress)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.RetrieveGameSettingsForIP"));

	UOnlineGameInterfaceSteamworks_RetrieveGameSettingsForIP_Params params;
	params.IPAddress = IPAddress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.GetNumberOfCurrentPlayers
// (Final, Defined, Iterator, Latent, Net, Exec, Native, Event, Static)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceSteamworks::STATIC_GetNumberOfCurrentPlayers()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.GetNumberOfCurrentPlayers"));

	UOnlineGameInterfaceSteamworks_GetNumberOfCurrentPlayers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.JoinMigratedOnlineGame
// (Final, Iterator, Latent, Singular, Simulated, Exec, Operator, Static)
// Parameters:
// unsigned char                  PlayerNum                      (Parm)
// struct FName                   SessionName                    (Parm)
// struct FOnlineGameSearchResult DesiredGame                    (Const, Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceSteamworks::STATIC_JoinMigratedOnlineGame(unsigned char PlayerNum, const struct FName& SessionName, struct FOnlineGameSearchResult* DesiredGame)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.JoinMigratedOnlineGame"));

	UOnlineGameInterfaceSteamworks_JoinMigratedOnlineGame_Params params;
	params.PlayerNum = PlayerNum;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DesiredGame != nullptr)
		*DesiredGame = params.DesiredGame;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.MigrateOnlineGame
// (Defined, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Native, Operator, Static)
// Parameters:
// unsigned char                  HostingPlayerNum               (Parm)
// struct FName                   SessionName                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceSteamworks::STATIC_MigrateOnlineGame(unsigned char HostingPlayerNum, const struct FName& SessionName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.MigrateOnlineGame"));

	UOnlineGameInterfaceSteamworks_MigrateOnlineGame_Params params;
	params.HostingPlayerNum = HostingPlayerNum;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.RecalculateSkillRating
// (Defined, PreOperator, Singular, Net, Simulated, Exec, HasOptionalParms)
// Parameters:
// struct FName                   SessionName                    (Parm)
// TArray<struct FUniqueNetId>    Players                        (Const, Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceSteamworks::RecalculateSkillRating(const struct FName& SessionName, TArray<struct FUniqueNetId>* Players)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.RecalculateSkillRating"));

	UOnlineGameInterfaceSteamworks_RecalculateSkillRating_Params params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Players != nullptr)
		*Players = params.Players;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.GetArbitratedPlayers
// (Final, Latent, PreOperator, Net, Simulated, Native, Event, Static)
// Parameters:
// struct FName                   SessionName                    (Parm)
// TArray<struct FOnlineArbitrationRegistrant> ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

TArray<struct FOnlineArbitrationRegistrant> UOnlineGameInterfaceSteamworks::STATIC_GetArbitratedPlayers(const struct FName& SessionName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.GetArbitratedPlayers"));

	UOnlineGameInterfaceSteamworks_GetArbitratedPlayers_Params params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.RegisterForArbitration
// (Final, Iterator, Latent, PreOperator, Singular, NetReliable, Simulated, Exec, HasOptionalParms)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceSteamworks::RegisterForArbitration(const struct FName& SessionName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.RegisterForArbitration"));

	UOnlineGameInterfaceSteamworks_RegisterForArbitration_Params params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.EndOnlineGame
// (Final, PreOperator, Event, Static)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceSteamworks::STATIC_EndOnlineGame(const struct FName& SessionName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.EndOnlineGame"));

	UOnlineGameInterfaceSteamworks_EndOnlineGame_Params params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.StartOnlineGame
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Simulated, Exec, Event, HasOptionalParms)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceSteamworks::StartOnlineGame(const struct FName& SessionName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.StartOnlineGame"));

	UOnlineGameInterfaceSteamworks_StartOnlineGame_Params params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.GetResolvedConnectString
// (Final, Iterator, Latent, PreOperator, Singular, NetReliable, Exec, Native, Event, Static)
// Parameters:
// struct FName                   SessionName                    (Parm)
// struct FString                 ConnectInfo                    (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceSteamworks::STATIC_GetResolvedConnectString(const struct FName& SessionName, struct FString* ConnectInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.GetResolvedConnectString"));

	UOnlineGameInterfaceSteamworks_GetResolvedConnectString_Params params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConnectInfo != nullptr)
		*ConnectInfo = params.ConnectInfo;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.QuerySessionsByKeyword
// (Final, Iterator, NetReliable, Exec, HasOptionalParms)
// Parameters:
// unsigned char                  LocalPlayerNum                 (Parm)
// struct FString                 Keyword                        (Parm, NeedCtorLink)
// class UOnlineGameSearch*       SearchSettings                 (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceSteamworks::QuerySessionsByKeyword(unsigned char LocalPlayerNum, const struct FString& Keyword, class UOnlineGameSearch* SearchSettings)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.QuerySessionsByKeyword"));

	UOnlineGameInterfaceSteamworks_QuerySessionsByKeyword_Params params;
	params.LocalPlayerNum = LocalPlayerNum;
	params.Keyword = Keyword;
	params.SearchSettings = SearchSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.QuerySessionsForUser
// (Defined, Iterator, NetReliable, Exec, HasOptionalParms)
// Parameters:
// unsigned char                  LocalPlayerNum                 (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceSteamworks::QuerySessionsForUser(unsigned char LocalPlayerNum)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.QuerySessionsForUser"));

	UOnlineGameInterfaceSteamworks_QuerySessionsForUser_Params params;
	params.LocalPlayerNum = LocalPlayerNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.LeaveAllOnlineSessions
// (Final, Defined, Iterator, Latent, Singular, Native, Operator, Static)
// Parameters:
// bool                           bClearSessionIfHost            (OptionalParm, Parm)

void UOnlineGameInterfaceSteamworks::STATIC_LeaveAllOnlineSessions(bool bClearSessionIfHost)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.LeaveAllOnlineSessions"));

	UOnlineGameInterfaceSteamworks_LeaveAllOnlineSessions_Params params;
	params.bClearSessionIfHost = bClearSessionIfHost;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.LeaveOnlineSession
// (PreOperator, Singular, Native, Operator, Static)
// Parameters:
// unsigned char                  LocalPlayerNum                 (Parm)
// struct FName                   SessionName                    (Parm)
// bool                           bClearSessionIfHost            (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceSteamworks::STATIC_LeaveOnlineSession(unsigned char LocalPlayerNum, const struct FName& SessionName, bool bClearSessionIfHost)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.LeaveOnlineSession"));

	UOnlineGameInterfaceSteamworks_LeaveOnlineSession_Params params;
	params.LocalPlayerNum = LocalPlayerNum;
	params.SessionName = SessionName;
	params.bClearSessionIfHost = bClearSessionIfHost;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AcceptPendingGameSession
// (PreOperator, Singular, Net, NetReliable, Exec, Native, Event)
// Parameters:
// struct FName                   SessionName                    (Parm)

void UOnlineGameInterfaceSteamworks::AcceptPendingGameSession(const struct FName& SessionName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AcceptPendingGameSession"));

	UOnlineGameInterfaceSteamworks_AcceptPendingGameSession_Params params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UpdateSessionProperties
// (Final, Defined, PreOperator, Singular, Net, Simulated, Exec, Native, Event, HasOptionalParms)
// Parameters:
// unsigned char                  ScoutingUserNum                (Parm)
// struct FName                   SessionName                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceSteamworks::UpdateSessionProperties(unsigned char ScoutingUserNum, const struct FName& SessionName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UpdateSessionProperties"));

	UOnlineGameInterfaceSteamworks_UpdateSessionProperties_Params params;
	params.ScoutingUserNum = ScoutingUserNum;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.DeleteCustomMemberProperty
// (Final, Latent, Singular, Net, Native, Static)
// Parameters:
// struct FName                   SessionName                    (Parm)
// struct FString                 PropertyName                   (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceSteamworks::STATIC_DeleteCustomMemberProperty(const struct FName& SessionName, const struct FString& PropertyName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.DeleteCustomMemberProperty"));

	UOnlineGameInterfaceSteamworks_DeleteCustomMemberProperty_Params params;
	params.SessionName = SessionName;
	params.PropertyName = PropertyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.SetCustomMemberProperty
// (Final, Singular, NetReliable, Simulated, Exec, Native, HasOptionalParms)
// Parameters:
// struct FName                   SessionName                    (Parm)
// struct FString                 PropertyName                   (Parm, NeedCtorLink)
// struct FString                 PropertyValue                  (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceSteamworks::SetCustomMemberProperty(const struct FName& SessionName, const struct FString& PropertyName, const struct FString& PropertyValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.SetCustomMemberProperty"));

	UOnlineGameInterfaceSteamworks_SetCustomMemberProperty_Params params;
	params.SessionName = SessionName;
	params.PropertyName = PropertyName;
	params.PropertyValue = PropertyValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.DeleteCustomSessionProperty
// (Defined, Latent, Singular, Net, Native, Static)
// Parameters:
// struct FName                   SessionName                    (Parm)
// struct FString                 PropertyName                   (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceSteamworks::STATIC_DeleteCustomSessionProperty(const struct FName& SessionName, const struct FString& PropertyName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.DeleteCustomSessionProperty"));

	UOnlineGameInterfaceSteamworks_DeleteCustomSessionProperty_Params params;
	params.SessionName = SessionName;
	params.PropertyName = PropertyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.SetCustomSessionProperty
// (Defined, Singular, NetReliable, Simulated, Exec, Native, HasOptionalParms)
// Parameters:
// struct FName                   SessionName                    (Parm)
// struct FString                 PropertyName                   (Parm, NeedCtorLink)
// struct FString                 PropertyValue                  (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceSteamworks::SetCustomSessionProperty(const struct FName& SessionName, const struct FString& PropertyName, const struct FString& PropertyValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.SetCustomSessionProperty"));

	UOnlineGameInterfaceSteamworks_SetCustomSessionProperty_Params params;
	params.SessionName = SessionName;
	params.PropertyName = PropertyName;
	params.PropertyValue = PropertyValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddSessionMembers
// (Defined, Iterator, Singular, Operator)
// Parameters:
// unsigned char                  ScoutingPlayerNum              (Parm)
// struct FName                   SessionName                    (Parm)
// TArray<struct FUniqueNetId>    Members                        (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceSteamworks::AddSessionMembers(unsigned char ScoutingPlayerNum, const struct FName& SessionName, TArray<struct FUniqueNetId> Members)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddSessionMembers"));

	UOnlineGameInterfaceSteamworks_AddSessionMembers_Params params;
	params.ScoutingPlayerNum = ScoutingPlayerNum;
	params.SessionName = SessionName;
	params.Members = Members;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddSessionMember
// (Final, Defined, Singular, Operator)
// Parameters:
// unsigned char                  ScoutingPlayerNum              (Parm)
// struct FName                   SessionName                    (Parm)
// struct FUniqueNetId            Member                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceSteamworks::AddSessionMember(unsigned char ScoutingPlayerNum, const struct FName& SessionName, const struct FUniqueNetId& Member)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddSessionMember"));

	UOnlineGameInterfaceSteamworks_AddSessionMember_Params params;
	params.ScoutingPlayerNum = ScoutingPlayerNum;
	params.SessionName = SessionName;
	params.Member = Member;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddSessionMemberByString
// (Iterator, Singular, Operator)
// Parameters:
// unsigned char                  ScoutingPlayerNum              (Parm)
// struct FName                   SessionName                    (Parm)
// struct FString                 Member                         (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceSteamworks::AddSessionMemberByString(unsigned char ScoutingPlayerNum, const struct FName& SessionName, const struct FString& Member)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddSessionMemberByString"));

	UOnlineGameInterfaceSteamworks_AddSessionMemberByString_Params params;
	params.ScoutingPlayerNum = ScoutingPlayerNum;
	params.SessionName = SessionName;
	params.Member = Member;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.CreateOnlineSessionWithTemplate
// (PreOperator, Exec, Static)
// Parameters:
// unsigned char                  ScoutingPlayerNum              (Parm)
// struct FName                   SessionName                    (Parm)
// class UOnlineGameSettings*     NewGameSettings                (Parm)
// struct FString                 TemplateName                   (Parm, NeedCtorLink)
// struct FString                 SessionKeyword                 (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceSteamworks::STATIC_CreateOnlineSessionWithTemplate(unsigned char ScoutingPlayerNum, const struct FName& SessionName, class UOnlineGameSettings* NewGameSettings, const struct FString& TemplateName, const struct FString& SessionKeyword)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.CreateOnlineSessionWithTemplate"));

	UOnlineGameInterfaceSteamworks_CreateOnlineSessionWithTemplate_Params params;
	params.ScoutingPlayerNum = ScoutingPlayerNum;
	params.SessionName = SessionName;
	params.NewGameSettings = NewGameSettings;
	params.TemplateName = TemplateName;
	params.SessionKeyword = SessionKeyword;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.InitiatedSessionSearch
// (Defined, Iterator, Latent, Singular, Net, Simulated, Operator, Static)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceSteamworks::STATIC_InitiatedSessionSearch(const struct FName& SessionName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.InitiatedSessionSearch"));

	UOnlineGameInterfaceSteamworks_InitiatedSessionSearch_Params params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.IsHostOfSession
// (Iterator, Latent, PreOperator, Singular, NetReliable, Exec, Operator, Static)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceSteamworks::STATIC_IsHostOfSession(const struct FName& SessionName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.IsHostOfSession"));

	UOnlineGameInterfaceSteamworks_IsHostOfSession_Params params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.MatchmakeOnlineGameWithParty
// (Final, Defined, Latent, PreOperator, NetReliable, Exec, Native, Operator, Static)
// Parameters:
// unsigned char                  ScoutingPlayerNum              (Parm)
// struct FName                   SessionName                    (Parm)
// class UOnlineGameSettings*     NewGameSettings                (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceSteamworks::STATIC_MatchmakeOnlineGameWithParty(unsigned char ScoutingPlayerNum, const struct FName& SessionName, class UOnlineGameSettings* NewGameSettings)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.MatchmakeOnlineGameWithParty"));

	UOnlineGameInterfaceSteamworks_MatchmakeOnlineGameWithParty_Params params;
	params.ScoutingPlayerNum = ScoutingPlayerNum;
	params.SessionName = SessionName;
	params.NewGameSettings = NewGameSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.CreateOnlineGameWithParty
// (Defined, Iterator, Latent, Exec, Static)
// Parameters:
// unsigned char                  ScoutingPlayerNum              (Parm)
// struct FName                   SessionName                    (Parm)
// class UOnlineGameSettings*     NewGameSettings                (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceSteamworks::STATIC_CreateOnlineGameWithParty(unsigned char ScoutingPlayerNum, const struct FName& SessionName, class UOnlineGameSettings* NewGameSettings)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.CreateOnlineGameWithParty"));

	UOnlineGameInterfaceSteamworks_CreateOnlineGameWithParty_Params params;
	params.ScoutingPlayerNum = ScoutingPlayerNum;
	params.SessionName = SessionName;
	params.NewGameSettings = NewGameSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.IsCurrentRoomOwner
// (Final, Singular, NetReliable, Exec, Operator, Static)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceSteamworks::STATIC_IsCurrentRoomOwner()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.IsCurrentRoomOwner"));

	UOnlineGameInterfaceSteamworks_IsCurrentRoomOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.SetRankedReadyStatus
// (Latent, Net, Event, HasOptionalParms)
// Parameters:
// bool                           bReady                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceSteamworks::SetRankedReadyStatus(bool bReady)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.SetRankedReadyStatus"));

	UOnlineGameInterfaceSteamworks_SetRankedReadyStatus_Params params;
	params.bReady = bReady;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.IsJoinOperationInProgress
// (Final, Latent, Net, NetReliable, Exec, Operator, Static)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceSteamworks::STATIC_IsJoinOperationInProgress()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.IsJoinOperationInProgress"));

	UOnlineGameInterfaceSteamworks_IsJoinOperationInProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.JoinOnlineGameByMatchingParams
// (PreOperator, Singular, Simulated, Exec, Operator, Static)
// Parameters:
// struct FQWord                  RoomId                         (Parm)
// class UOnlineGameSettings*     JoinedGameSettings             (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceSteamworks::STATIC_JoinOnlineGameByMatchingParams(const struct FQWord& RoomId, class UOnlineGameSettings** JoinedGameSettings)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.JoinOnlineGameByMatchingParams"));

	UOnlineGameInterfaceSteamworks_JoinOnlineGameByMatchingParams_Params params;
	params.RoomId = RoomId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (JoinedGameSettings != nullptr)
		*JoinedGameSettings = params.JoinedGameSettings;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnMapChangeComplete
// (Final, Iterator, Latent, PreOperator, Net, NetReliable, Native, Event, Operator, Static)

void UOnlineGameInterfaceSteamworks::STATIC_OnMapChangeComplete()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnMapChangeComplete"));

	UOnlineGameInterfaceSteamworks_OnMapChangeComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnMapChangePending
// (Defined, Iterator, Latent, PreOperator, Net, NetReliable, Native, Event, Operator, Static)

void UOnlineGameInterfaceSteamworks::STATIC_OnMapChangePending()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnMapChangePending"));

	UOnlineGameInterfaceSteamworks_OnMapChangePending_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.JoinOnlineGameBySessionHandle
// (Final, PreOperator, Singular, Simulated, Exec, Operator, Static)
// Parameters:
// unsigned char                  PlayerNum                      (Parm)
// struct FName                   SessionName                    (Parm)
// struct FString                 InSessionGuid                  (Const, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceSteamworks::STATIC_JoinOnlineGameBySessionHandle(unsigned char PlayerNum, const struct FName& SessionName, const struct FString& InSessionGuid)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.JoinOnlineGameBySessionHandle"));

	UOnlineGameInterfaceSteamworks_JoinOnlineGameBySessionHandle_Params params;
	params.PlayerNum = PlayerNum;
	params.SessionName = SessionName;
	params.InSessionGuid = InSessionGuid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.JoinOnlineGame
// (Final, Defined, Iterator, Latent, Singular, Simulated, Exec, Operator, Static)
// Parameters:
// unsigned char                  PlayerNum                      (Parm)
// struct FName                   SessionName                    (Parm)
// struct FOnlineGameSearchResult DesiredGame                    (Const, Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceSteamworks::STATIC_JoinOnlineGame(unsigned char PlayerNum, const struct FName& SessionName, struct FOnlineGameSearchResult* DesiredGame)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.JoinOnlineGame"));

	UOnlineGameInterfaceSteamworks_JoinOnlineGame_Params params;
	params.PlayerNum = PlayerNum;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DesiredGame != nullptr)
		*DesiredGame = params.DesiredGame;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.FreeSearchResults
// (Final, Latent, PreOperator, Singular, Native, Event, Static)
// Parameters:
// class UOnlineGameSearch*       Search                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceSteamworks::STATIC_FreeSearchResults(class UOnlineGameSearch* Search)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.FreeSearchResults"));

	UOnlineGameInterfaceSteamworks_FreeSearchResults_Params params;
	params.Search = Search;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.GetGameSearch
// (Final, Defined, PreOperator, Singular, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// class UOnlineGameSearch*       ReturnValue                    (Parm, OutParm, ReturnParm)

class UOnlineGameSearch* UOnlineGameInterfaceSteamworks::STATIC_GetGameSearch()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.GetGameSearch"));

	UOnlineGameInterfaceSteamworks_GetGameSearch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.BindPlatformSpecificSessionToSearch
// (Final, Singular, Net, NetReliable, Exec, Native, Operator)
// Parameters:
// unsigned char                  SearchingPlayerNum             (Parm)
// class UOnlineGameSearch*       SearchSettings                 (Parm)
// unsigned char                  PlatformSpecificInfo           (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceSteamworks::BindPlatformSpecificSessionToSearch(unsigned char SearchingPlayerNum, class UOnlineGameSearch* SearchSettings, unsigned char PlatformSpecificInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.BindPlatformSpecificSessionToSearch"));

	UOnlineGameInterfaceSteamworks_BindPlatformSpecificSessionToSearch_Params params;
	params.SearchingPlayerNum = SearchingPlayerNum;
	params.SearchSettings = SearchSettings;
	params.PlatformSpecificInfo = PlatformSpecificInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ReadPlatformSpecificSessionInfoBySessionName
// (Defined, Net, Simulated, Exec, HasOptionalParms)
// Parameters:
// struct FName                   SessionName                    (Parm)
// unsigned char                  PlatformSpecificInfo           (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceSteamworks::ReadPlatformSpecificSessionInfoBySessionName(const struct FName& SessionName, unsigned char* PlatformSpecificInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ReadPlatformSpecificSessionInfoBySessionName"));

	UOnlineGameInterfaceSteamworks_ReadPlatformSpecificSessionInfoBySessionName_Params params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlatformSpecificInfo != nullptr)
		*PlatformSpecificInfo = params.PlatformSpecificInfo;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ReadPlatformSpecificSessionInfo
// (Final, Net, Simulated, Exec, HasOptionalParms)
// Parameters:
// struct FOnlineGameSearchResult DesiredGame                    (Const, Parm, OutParm)
// unsigned char                  PlatformSpecificInfo           (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceSteamworks::ReadPlatformSpecificSessionInfo(struct FOnlineGameSearchResult* DesiredGame, unsigned char* PlatformSpecificInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ReadPlatformSpecificSessionInfo"));

	UOnlineGameInterfaceSteamworks_ReadPlatformSpecificSessionInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DesiredGame != nullptr)
		*DesiredGame = params.DesiredGame;
	if (PlatformSpecificInfo != nullptr)
		*PlatformSpecificInfo = params.PlatformSpecificInfo;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.CancelFindOnlineGames
// (Latent, PreOperator, Singular, Exec, Native, Event, Operator)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceSteamworks::CancelFindOnlineGames()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.CancelFindOnlineGames"));

	UOnlineGameInterfaceSteamworks_CancelFindOnlineGames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.FindOnlineGames
// (Defined, Singular, NetReliable, Exec, Event, Static)
// Parameters:
// unsigned char                  SearchingPlayerNum             (Parm)
// class UOnlineGameSearch*       SearchSettings                 (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceSteamworks::STATIC_FindOnlineGames(unsigned char SearchingPlayerNum, class UOnlineGameSearch* SearchSettings)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.FindOnlineGames"));

	UOnlineGameInterfaceSteamworks_FindOnlineGames_Params params;
	params.SearchingPlayerNum = SearchingPlayerNum;
	params.SearchSettings = SearchSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.DestroyOnlineGame
// (Defined, Latent, PreOperator, Singular, NetReliable, Native, Static)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceSteamworks::STATIC_DestroyOnlineGame(const struct FName& SessionName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.DestroyOnlineGame"));

	UOnlineGameInterfaceSteamworks_DestroyOnlineGame_Params params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.CreateOnlineGame
// (Iterator, Latent, Exec, Static)
// Parameters:
// unsigned char                  HostingPlayerNum               (Parm)
// struct FName                   SessionName                    (Parm)
// class UOnlineGameSettings*     NewGameSettings                (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceSteamworks::STATIC_CreateOnlineGame(unsigned char HostingPlayerNum, const struct FName& SessionName, class UOnlineGameSettings* NewGameSettings)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.CreateOnlineGame"));

	UOnlineGameInterfaceSteamworks_CreateOnlineGame_Params params;
	params.HostingPlayerNum = HostingPlayerNum;
	params.SessionName = SessionName;
	params.NewGameSettings = NewGameSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.GetGameSettings
// (Final, Iterator, PreOperator, Singular, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// struct FName                   SessionName                    (Parm)
// class UOnlineGameSettings*     ReturnValue                    (Parm, OutParm, ReturnParm)

class UOnlineGameSettings* UOnlineGameInterfaceSteamworks::STATIC_GetGameSettings(const struct FName& SessionName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.GetGameSettings"));

	UOnlineGameInterfaceSteamworks_GetGameSettings_Params params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.QueryNonAdvertisedData
// (Iterator, NetReliable, Exec, HasOptionalParms)
// Parameters:
// int                            StartAt                        (Parm)
// int                            NumberToQuery                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceSteamworks::QueryNonAdvertisedData(int StartAt, int NumberToQuery)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.QueryNonAdvertisedData"));

	UOnlineGameInterfaceSteamworks_QueryNonAdvertisedData_Params params;
	params.StartAt = StartAt;
	params.NumberToQuery = NumberToQuery;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearUnregisterPlayerCompleteDelegate
// (Final, Defined, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceSteamworks::ClearUnregisterPlayerCompleteDelegate(const struct FScriptDelegate& UnregisterPlayerCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearUnregisterPlayerCompleteDelegate"));

	UOnlineGameInterfaceSteamworks_ClearUnregisterPlayerCompleteDelegate_Params params;
	params.UnregisterPlayerCompleteDelegate = UnregisterPlayerCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddUnregisterPlayerCompleteDelegate
// (Final, Latent, PreOperator, Singular, Operator)
// Parameters:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceSteamworks::AddUnregisterPlayerCompleteDelegate(const struct FScriptDelegate& UnregisterPlayerCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddUnregisterPlayerCompleteDelegate"));

	UOnlineGameInterfaceSteamworks_AddUnregisterPlayerCompleteDelegate_Params params;
	params.UnregisterPlayerCompleteDelegate = UnregisterPlayerCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnUnregisterPlayerComplete
// (Final, Defined, Iterator, Latent, Singular, NetReliable, Simulated, Exec, Native, HasOptionalParms)
// Parameters:
// struct FName                   SessionName                    (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineGameInterfaceSteamworks::OnUnregisterPlayerComplete(const struct FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnUnregisterPlayerComplete"));

	UOnlineGameInterfaceSteamworks_OnUnregisterPlayerComplete_Params params;
	params.SessionName = SessionName;
	params.PlayerID = PlayerID;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UnregisterPlayers
// (Final, Defined, Iterator, Latent, Singular, Simulated, Exec, Native, Event, HasOptionalParms)
// Parameters:
// struct FName                   SessionName                    (Parm)
// TArray<struct FUniqueNetId>    Players                        (Const, Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceSteamworks::UnregisterPlayers(const struct FName& SessionName, TArray<struct FUniqueNetId>* Players)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UnregisterPlayers"));

	UOnlineGameInterfaceSteamworks_UnregisterPlayers_Params params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Players != nullptr)
		*Players = params.Players;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UnregisterPlayer
// (Iterator, Latent, Singular, Simulated, Exec, Native, Event, HasOptionalParms)
// Parameters:
// struct FName                   SessionName                    (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceSteamworks::UnregisterPlayer(const struct FName& SessionName, const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UnregisterPlayer"));

	UOnlineGameInterfaceSteamworks_UnregisterPlayer_Params params;
	params.SessionName = SessionName;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearRegisterPlayerCompleteDelegate
// (Final, Iterator, Latent, Net, NetReliable, Simulated, Exec, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceSteamworks::ClearRegisterPlayerCompleteDelegate(const struct FScriptDelegate& RegisterPlayerCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearRegisterPlayerCompleteDelegate"));

	UOnlineGameInterfaceSteamworks_ClearRegisterPlayerCompleteDelegate_Params params;
	params.RegisterPlayerCompleteDelegate = RegisterPlayerCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddRegisterPlayerCompleteDelegate
// (Iterator, PreOperator, Operator)
// Parameters:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceSteamworks::AddRegisterPlayerCompleteDelegate(const struct FScriptDelegate& RegisterPlayerCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddRegisterPlayerCompleteDelegate"));

	UOnlineGameInterfaceSteamworks_AddRegisterPlayerCompleteDelegate_Params params;
	params.RegisterPlayerCompleteDelegate = RegisterPlayerCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnRegisterPlayerComplete
// (Iterator, Singular, NetReliable, Simulated, Exec, Native, HasOptionalParms)
// Parameters:
// struct FName                   SessionName                    (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineGameInterfaceSteamworks::OnRegisterPlayerComplete(const struct FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnRegisterPlayerComplete"));

	UOnlineGameInterfaceSteamworks_OnRegisterPlayerComplete_Params params;
	params.SessionName = SessionName;
	params.PlayerID = PlayerID;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.RegisterPlayers
// (Final, Iterator, Net, NetReliable, Simulated, Exec, HasOptionalParms)
// Parameters:
// struct FName                   SessionName                    (Parm)
// TArray<struct FUniqueNetId>    Players                        (Const, Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceSteamworks::RegisterPlayers(const struct FName& SessionName, TArray<struct FUniqueNetId>* Players)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.RegisterPlayers"));

	UOnlineGameInterfaceSteamworks_RegisterPlayers_Params params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Players != nullptr)
		*Players = params.Players;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.RegisterPlayer
// (Defined, Net, NetReliable, Simulated, Exec, HasOptionalParms)
// Parameters:
// struct FName                   SessionName                    (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           bWasInvited                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceSteamworks::RegisterPlayer(const struct FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasInvited)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.RegisterPlayer"));

	UOnlineGameInterfaceSteamworks_RegisterPlayer_Params params;
	params.SessionName = SessionName;
	params.PlayerID = PlayerID;
	params.bWasInvited = bWasInvited;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AcceptGameInvite
// (Final, Defined, Iterator, Latent, Singular, Net, NetReliable, Exec, Native, Event)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FName                   SessionName                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceSteamworks::AcceptGameInvite(unsigned char LocalUserNum, const struct FName& SessionName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AcceptGameInvite"));

	UOnlineGameInterfaceSteamworks_AcceptGameInvite_Params params;
	params.LocalUserNum = LocalUserNum;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearGameInviteAcceptedDelegate
// (Final, PreOperator, Singular, Net, Simulated, Exec, Native, Event, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         GameInviteAcceptedDelegate     (Parm, NeedCtorLink)

void UOnlineGameInterfaceSteamworks::ClearGameInviteAcceptedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& GameInviteAcceptedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearGameInviteAcceptedDelegate"));

	UOnlineGameInterfaceSteamworks_ClearGameInviteAcceptedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.GameInviteAcceptedDelegate = GameInviteAcceptedDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddGameInviteAcceptedDelegate
// (Iterator, Singular, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         GameInviteAcceptedDelegate     (Parm, NeedCtorLink)

void UOnlineGameInterfaceSteamworks::AddGameInviteAcceptedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& GameInviteAcceptedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddGameInviteAcceptedDelegate"));

	UOnlineGameInterfaceSteamworks_AddGameInviteAcceptedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.GameInviteAcceptedDelegate = GameInviteAcceptedDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnGameInviteAccepted
// (Final, Latent, NetReliable, Simulated, Exec, Native, HasOptionalParms)
// Parameters:
// struct FOnlineGameSearchResult InviteResult                   (Const, Parm, OutParm)

void UOnlineGameInterfaceSteamworks::OnGameInviteAccepted(struct FOnlineGameSearchResult* InviteResult)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnGameInviteAccepted"));

	UOnlineGameInterfaceSteamworks_OnGameInviteAccepted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InviteResult != nullptr)
		*InviteResult = params.InviteResult;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UpdateOnlineGame
// (Latent, Singular, Net, Simulated, Exec, Native, Event, HasOptionalParms)
// Parameters:
// struct FName                   SessionName                    (Parm)
// class UOnlineGameSettings*     UpdatedGameSettings            (Parm)
// bool                           bShouldRefreshOnlineData       (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceSteamworks::UpdateOnlineGame(const struct FName& SessionName, class UOnlineGameSettings* UpdatedGameSettings, bool bShouldRefreshOnlineData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UpdateOnlineGame"));

	UOnlineGameInterfaceSteamworks_UpdateOnlineGame_Params params;
	params.SessionName = SessionName;
	params.UpdatedGameSettings = UpdatedGameSettings;
	params.bShouldRefreshOnlineData = bShouldRefreshOnlineData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenChatWithUser
// (Final, PreOperator, NetReliable, Exec, Static, HasOptionalParms)
// Parameters:
// struct FUniqueNetId            UniqueId                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::STATIC_OpenChatWithUser(const struct FUniqueNetId& UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenChatWithUser"));

	UOnlineSubsystemSteamworks_OpenChatWithUser_Params params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.PreLogin
// (Latent, PreOperator, Net, Exec, Native, HasOptionalParms)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::PreLogin()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.PreLogin"));

	UOnlineSubsystemSteamworks_PreLogin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetActivePlayerCountry
// (Final, Defined, Iterator, PreOperator, Net, Exec, Static, HasOptionalParms)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlineSubsystemSteamworks::STATIC_GetActivePlayerCountry()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetActivePlayerCountry"));

	UOnlineSubsystemSteamworks_GetActivePlayerCountry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadChallenges
// (Defined, Iterator, Singular, NetReliable, Exec, Static, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            TitleId                        (OptionalParm, Parm)
// bool                           bUnlockedOnly                  (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::STATIC_ReadChallenges(unsigned char LocalUserNum, int TitleId, bool bUnlockedOnly)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadChallenges"));

	UOnlineSubsystemSteamworks_ReadChallenges_Params params;
	params.LocalUserNum = LocalUserNum;
	params.TitleId = TitleId;
	params.bUnlockedOnly = bUnlockedOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsMuted
// (Final, Latent, PreOperator, Net, NetReliable, Exec, Operator, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::STATIC_IsMuted(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsMuted"));

	UOnlineSubsystemSteamworks_IsMuted_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCurrentConnectionStatus
// (Final, Iterator, Singular, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// TEnumAsByte<EOnlineServerConnectionStatus> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EOnlineServerConnectionStatus> UOnlineSubsystemSteamworks::STATIC_GetCurrentConnectionStatus()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCurrentConnectionStatus"));

	UOnlineSubsystemSteamworks_GetCurrentConnectionStatus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsForPlayer
// (Net, Simulated, Exec, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class UOnlineStatsRead*        StatsRead                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ReadOnlineStatsForPlayer(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsForPlayer"));

	UOnlineSubsystemSteamworks_ReadOnlineStatsForPlayer_Params params;
	params.LocalUserNum = LocalUserNum;
	params.StatsRead = StatsRead;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatForFriends
// (Final, Defined, Latent, PreOperator, Singular, Simulated, Exec, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class UOnlineStatsRead*        StatsRead                      (Parm)
// bool                           FavoriteFriendsOnly            (OptionalParm, Parm)
// int                            NumToRead                      (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ReadOnlineStatForFriends(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, bool FavoriteFriendsOnly, int NumToRead)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatForFriends"));

	UOnlineSubsystemSteamworks_ReadOnlineStatForFriends_Params params;
	params.LocalUserNum = LocalUserNum;
	params.StatsRead = StatsRead;
	params.FavoriteFriendsOnly = FavoriteFriendsOnly;
	params.NumToRead = NumToRead;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendPlayerSessionResume
// (Iterator, PreOperator, NetReliable, Exec, Native, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 MultiplayerCorrelationId       (Parm, NeedCtorLink)
// int                            GameplayModeId                 (Parm)
// int                            DifficultyLevelId              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::SendPlayerSessionResume(unsigned char LocalUserNum, const struct FString& MultiplayerCorrelationId, int GameplayModeId, int DifficultyLevelId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendPlayerSessionResume"));

	UOnlineSubsystemSteamworks_SendPlayerSessionResume_Params params;
	params.LocalUserNum = LocalUserNum;
	params.MultiplayerCorrelationId = MultiplayerCorrelationId;
	params.GameplayModeId = GameplayModeId;
	params.DifficultyLevelId = DifficultyLevelId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendPlayerSessionPause
// (Final, Defined, PreOperator, NetReliable, Exec, Native, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 MultiplayerCorrelationId       (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::SendPlayerSessionPause(unsigned char LocalUserNum, const struct FString& MultiplayerCorrelationId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendPlayerSessionPause"));

	UOnlineSubsystemSteamworks_SendPlayerSessionPause_Params params;
	params.LocalUserNum = LocalUserNum;
	params.MultiplayerCorrelationId = MultiplayerCorrelationId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendPlayerSessionEnd
// (Defined, PreOperator, NetReliable, Exec, Native, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 MultiplayerCorrelationId       (Parm, NeedCtorLink)
// int                            GameplayModeId                 (Parm)
// int                            DifficultyLevelId              (Parm)
// int                            ExitStatusId                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::SendPlayerSessionEnd(unsigned char LocalUserNum, const struct FString& MultiplayerCorrelationId, int GameplayModeId, int DifficultyLevelId, int ExitStatusId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendPlayerSessionEnd"));

	UOnlineSubsystemSteamworks_SendPlayerSessionEnd_Params params;
	params.LocalUserNum = LocalUserNum;
	params.MultiplayerCorrelationId = MultiplayerCorrelationId;
	params.GameplayModeId = GameplayModeId;
	params.DifficultyLevelId = DifficultyLevelId;
	params.ExitStatusId = ExitStatusId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendPlayerSessionStart
// (Final, Iterator, PreOperator, NetReliable, Exec, Native, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 MultiplayerCorrelationId       (Parm, NeedCtorLink)
// int                            GameplayModeId                 (Parm)
// int                            DifficultyLevelId              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::SendPlayerSessionStart(unsigned char LocalUserNum, const struct FString& MultiplayerCorrelationId, int GameplayModeId, int DifficultyLevelId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendPlayerSessionStart"));

	UOnlineSubsystemSteamworks_SendPlayerSessionStart_Params params;
	params.LocalUserNum = LocalUserNum;
	params.MultiplayerCorrelationId = MultiplayerCorrelationId;
	params.GameplayModeId = GameplayModeId;
	params.DifficultyLevelId = DifficultyLevelId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendReputationFeedback
// (Defined, Iterator, PreOperator, NetReliable, Exec, Native, HasOptionalParms)
// Parameters:
// unsigned char                  SenderLocalUserNum             (Parm)
// struct FUniqueNetId            ReputeeNetId                   (Parm)
// TEnumAsByte<EReputationFeedbackType> FeedbackType                   (Parm)
// struct FString                 ReportText                     (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::SendReputationFeedback(unsigned char SenderLocalUserNum, const struct FUniqueNetId& ReputeeNetId, TEnumAsByte<EReputationFeedbackType> FeedbackType, const struct FString& ReportText)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendReputationFeedback"));

	UOnlineSubsystemSteamworks_SendReputationFeedback_Params params;
	params.SenderLocalUserNum = SenderLocalUserNum;
	params.ReputeeNetId = ReputeeNetId;
	params.FeedbackType = FeedbackType;
	params.ReportText = ReportText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnregisterRemoteTalkerCompleteDelegate
// (Iterator, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         UnregisterRemoteTalkerCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearUnregisterRemoteTalkerCompleteDelegate(const struct FScriptDelegate& UnregisterRemoteTalkerCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnregisterRemoteTalkerCompleteDelegate"));

	UOnlineSubsystemSteamworks_ClearUnregisterRemoteTalkerCompleteDelegate_Params params;
	params.UnregisterRemoteTalkerCompleteDelegate = UnregisterRemoteTalkerCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnregisterRemoteTalkerCompleteDelegate
// (Defined, Latent, PreOperator, Singular, Operator)
// Parameters:
// struct FScriptDelegate         UnregisterRemoteTalkerCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddUnregisterRemoteTalkerCompleteDelegate(const struct FScriptDelegate& UnregisterRemoteTalkerCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnregisterRemoteTalkerCompleteDelegate"));

	UOnlineSubsystemSteamworks_AddUnregisterRemoteTalkerCompleteDelegate_Params params;
	params.UnregisterRemoteTalkerCompleteDelegate = UnregisterRemoteTalkerCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnregisterRemoteTalkerComplete
// (Iterator, PreOperator, Exec, Native, Event, Static)
// Parameters:
// struct FUniqueNetId            RemoteNetId                    (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemSteamworks::STATIC_OnUnregisterRemoteTalkerComplete(const struct FUniqueNetId& RemoteNetId, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnregisterRemoteTalkerComplete"));

	UOnlineSubsystemSteamworks_OnUnregisterRemoteTalkerComplete_Params params;
	params.RemoteNetId = RemoteNetId;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnregisterLocalTalkerCompleteDelegate
// (Defined, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         UnregisterLocalTalkerCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearUnregisterLocalTalkerCompleteDelegate(const struct FScriptDelegate& UnregisterLocalTalkerCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnregisterLocalTalkerCompleteDelegate"));

	UOnlineSubsystemSteamworks_ClearUnregisterLocalTalkerCompleteDelegate_Params params;
	params.UnregisterLocalTalkerCompleteDelegate = UnregisterLocalTalkerCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnregisterLocalTalkerCompleteDelegate
// (Latent, PreOperator, Singular, Operator)
// Parameters:
// struct FScriptDelegate         UnregisterLocalTalkerCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddUnregisterLocalTalkerCompleteDelegate(const struct FScriptDelegate& UnregisterLocalTalkerCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnregisterLocalTalkerCompleteDelegate"));

	UOnlineSubsystemSteamworks_AddUnregisterLocalTalkerCompleteDelegate_Params params;
	params.UnregisterLocalTalkerCompleteDelegate = UnregisterLocalTalkerCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnregisterLocalTalkerComplete
// (Final, Defined, PreOperator, Exec, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemSteamworks::STATIC_OnUnregisterLocalTalkerComplete(unsigned char LocalUserNum, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnregisterLocalTalkerComplete"));

	UOnlineSubsystemSteamworks_OnUnregisterLocalTalkerComplete_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRegisterLocalTalkerCompleteDelegate
// (Iterator, Latent, Net, NetReliable, Simulated, Exec, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         RegisterLocalTalkerCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearRegisterLocalTalkerCompleteDelegate(const struct FScriptDelegate& RegisterLocalTalkerCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRegisterLocalTalkerCompleteDelegate"));

	UOnlineSubsystemSteamworks_ClearRegisterLocalTalkerCompleteDelegate_Params params;
	params.RegisterLocalTalkerCompleteDelegate = RegisterLocalTalkerCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRegisterLocalTalkerCompleteDelegate
// (Final, Defined, PreOperator, Operator)
// Parameters:
// struct FScriptDelegate         RegisterLocalTalkerCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddRegisterLocalTalkerCompleteDelegate(const struct FScriptDelegate& RegisterLocalTalkerCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRegisterLocalTalkerCompleteDelegate"));

	UOnlineSubsystemSteamworks_AddRegisterLocalTalkerCompleteDelegate_Params params;
	params.RegisterLocalTalkerCompleteDelegate = RegisterLocalTalkerCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRegisterLocalTalkerComplete
// (Final, Latent, Exec, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemSteamworks::STATIC_OnRegisterLocalTalkerComplete(unsigned char LocalUserNum, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRegisterLocalTalkerComplete"));

	UOnlineSubsystemSteamworks_OnRegisterLocalTalkerComplete_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadOnlineProfilesCompleteDelegate
// (Final, Defined, Latent, PreOperator, Singular, NetReliable, Simulated, Exec, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         ReadOnlineProfileDelegate      (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadOnlineProfilesCompleteDelegate(const struct FScriptDelegate& ReadOnlineProfileDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadOnlineProfilesCompleteDelegate"));

	UOnlineSubsystemSteamworks_ClearReadOnlineProfilesCompleteDelegate_Params params;
	params.ReadOnlineProfileDelegate = ReadOnlineProfileDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadOnlineProfilesCompleteDelegate
// (Iterator, Operator)
// Parameters:
// struct FScriptDelegate         ReadOnlineProfileDelegate      (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadOnlineProfilesCompleteDelegate(const struct FScriptDelegate& ReadOnlineProfileDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadOnlineProfilesCompleteDelegate"));

	UOnlineSubsystemSteamworks_AddReadOnlineProfilesCompleteDelegate_Params params;
	params.ReadOnlineProfileDelegate = ReadOnlineProfileDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadOnlineProfilesComplete
// (Defined, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// TArray<struct FString>         PlayerIDs                      (Parm, NeedCtorLink)
// TArray<struct FOnlineProfile>  OnlineProfiles                 (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::STATIC_OnReadOnlineProfilesComplete(bool bWasSuccessful, TArray<struct FString> PlayerIDs, TArray<struct FOnlineProfile> OnlineProfiles)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadOnlineProfilesComplete"));

	UOnlineSubsystemSteamworks_OnReadOnlineProfilesComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.PlayerIDs = PlayerIDs;
	params.OnlineProfiles = OnlineProfiles;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineProfilesForPlayers
// (Defined, Latent, PreOperator, Singular, Simulated, Exec, HasOptionalParms)
// Parameters:
// TArray<struct FString>         PlayerIDs                      (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ReadOnlineProfilesForPlayers(TArray<struct FString> PlayerIDs)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineProfilesForPlayers"));

	UOnlineSubsystemSteamworks_ReadOnlineProfilesForPlayers_Params params;
	params.PlayerIDs = PlayerIDs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerIDForPlayerNickname
// (Final, NetReliable, Exec, Native, Event, Static)
// Parameters:
// struct FString                 InPlayerNickname               (Parm, NeedCtorLink)
// struct FUniqueNetId            OutPlayerId                    (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::STATIC_GetPlayerIDForPlayerNickname(const struct FString& InPlayerNickname, struct FUniqueNetId* OutPlayerId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerIDForPlayerNickname"));

	UOnlineSubsystemSteamworks_GetPlayerIDForPlayerNickname_Params params;
	params.InPlayerNickname = InPlayerNickname;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPlayerId != nullptr)
		*OutPlayerId = params.OutPlayerId;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNicknameForPlayerId
// (Final, Iterator, NetReliable, Exec, Native, Event, Static)
// Parameters:
// struct FUniqueNetId            InPlayerId                     (Parm)
// struct FString                 OutPlayerNickname              (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::STATIC_GetPlayerNicknameForPlayerId(const struct FUniqueNetId& InPlayerId, struct FString* OutPlayerNickname)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNicknameForPlayerId"));

	UOnlineSubsystemSteamworks_GetPlayerNicknameForPlayerId_Params params;
	params.InPlayerId = InPlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPlayerNickname != nullptr)
		*OutPlayerNickname = params.OutPlayerNickname;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomErrorUI
// (Defined, PreOperator, Simulated, Event, HasOptionalParms)
// Parameters:
// int                            ErrorCode                      (Parm)
// struct FString                 ErrorContext                   (Parm, NeedCtorLink)
// struct FString                 DialogTitle                    (Parm, NeedCtorLink)
// struct FString                 DialogContent                  (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ShowCustomErrorUI(int ErrorCode, const struct FString& ErrorContext, const struct FString& DialogTitle, const struct FString& DialogContent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomErrorUI"));

	UOnlineSubsystemSteamworks_ShowCustomErrorUI_Params params;
	params.ErrorCode = ErrorCode;
	params.ErrorContext = ErrorContext;
	params.DialogTitle = DialogTitle;
	params.DialogContent = DialogContent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowSystemErrorUI
// (Final, Defined, Iterator, PreOperator, Singular, Simulated, Event, HasOptionalParms)
// Parameters:
// int                            ErrorCode                      (Parm)
// struct FString                 ErrorContext                   (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ShowSystemErrorUI(int ErrorCode, const struct FString& ErrorContext)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowSystemErrorUI"));

	UOnlineSubsystemSteamworks_ShowSystemErrorUI_Params params;
	params.ErrorCode = ErrorCode;
	params.ErrorContext = ErrorContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CloseCurrentContentUI
// (Final, Latent, Net, Static)

void UOnlineSubsystemSteamworks::STATIC_CloseCurrentContentUI()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CloseCurrentContentUI"));

	UOnlineSubsystemSteamworks_CloseCurrentContentUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowContentRedeemCodeUI
// (PreOperator, Simulated, Event, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 Offer                          (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ShowContentRedeemCodeUI(unsigned char LocalUserNum, const struct FString& Offer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowContentRedeemCodeUI"));

	UOnlineSubsystemSteamworks_ShowContentRedeemCodeUI_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Offer = Offer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowContentPurchaseUI
// (Final, Defined, Latent, Native, Event, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 Offer                          (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ShowContentPurchaseUI(unsigned char LocalUserNum, const struct FString& Offer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowContentPurchaseUI"));

	UOnlineSubsystemSteamworks_ShowContentPurchaseUI_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Offer = Offer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowProductDetailsUI
// (Final, Defined, PreOperator, Singular, Simulated, Event, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 ParentProductId                (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ShowProductDetailsUI(unsigned char LocalUserNum, const struct FString& ParentProductId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowProductDetailsUI"));

	UOnlineSubsystemSteamworks_ShowProductDetailsUI_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ParentProductId = ParentProductId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearShowHelpCompleteDelegate
// (Final, Defined, Latent, PreOperator, Net, NetReliable, Simulated, Exec, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         HelpDelegate                   (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearShowHelpCompleteDelegate(const struct FScriptDelegate& HelpDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearShowHelpCompleteDelegate"));

	UOnlineSubsystemSteamworks_ClearShowHelpCompleteDelegate_Params params;
	params.HelpDelegate = HelpDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddShowHelpCompleteDelegate
// (Final, Defined, Latent, Singular, Operator)
// Parameters:
// struct FScriptDelegate         HelpDelegate                   (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddShowHelpCompleteDelegate(const struct FScriptDelegate& HelpDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddShowHelpCompleteDelegate"));

	UOnlineSubsystemSteamworks_AddShowHelpCompleteDelegate_Params params;
	params.HelpDelegate = HelpDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnShowHelpComplete
// (Final, Iterator, Latent, Exec, Native, Event, Static)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemSteamworks::STATIC_OnShowHelpComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnShowHelpComplete"));

	UOnlineSubsystemSteamworks_OnShowHelpComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowHelpForErrorUI
// (Final, Singular, Simulated, Event, HasOptionalParms)
// Parameters:
// struct FString                 ContextId                      (Parm, NeedCtorLink)
// struct FString                 ErrorString                    (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ShowHelpForErrorUI(const struct FString& ContextId, const struct FString& ErrorString)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowHelpForErrorUI"));

	UOnlineSubsystemSteamworks_ShowHelpForErrorUI_Params params;
	params.ContextId = ContextId;
	params.ErrorString = ErrorString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowHelpUI
// (Defined, Singular, Simulated, Event, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ShowHelpUI(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowHelpUI"));

	UOnlineSubsystemSteamworks_ShowHelpUI_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAcceptReceivedDataDelegate
// (Final, Latent, Singular, Simulated, Exec, Native, Event, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         InDelegate                     (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearAcceptReceivedDataDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& InDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAcceptReceivedDataDelegate"));

	UOnlineSubsystemSteamworks_ClearAcceptReceivedDataDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.InDelegate = InDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddAcceptReceivedDataDelegate
// (Defined, Latent, Singular, Net, Simulated, Exec, Native, Event)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         InDelegate                     (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddAcceptReceivedDataDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& InDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddAcceptReceivedDataDelegate"));

	UOnlineSubsystemSteamworks_AddAcceptReceivedDataDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.InDelegate = InDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnAcceptReceivedData
// (Final, Latent, PreOperator, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// struct FString                 Data                           (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::STATIC_OnAcceptReceivedData(const struct FString& Data)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnAcceptReceivedData"));

	UOnlineSubsystemSteamworks_OnAcceptReceivedData_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowDataSendingUI
// (Final, Iterator, PreOperator, Simulated, Event, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 Message                        (Parm, NeedCtorLink)
// struct FString                 DataName                       (Parm, NeedCtorLink)
// struct FString                 DataDescription                (Parm, NeedCtorLink)
// TArray<unsigned char>          Data                           (Parm, NeedCtorLink)
// int                            MaxSelectableUsers             (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ShowDataSendingUI(unsigned char LocalUserNum, const struct FString& Message, const struct FString& DataName, const struct FString& DataDescription, TArray<unsigned char> Data, int MaxSelectableUsers)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowDataSendingUI"));

	UOnlineSubsystemSteamworks_ShowDataSendingUI_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Message = Message;
	params.DataName = DataName;
	params.DataDescription = DataDescription;
	params.Data = Data;
	params.MaxSelectableUsers = MaxSelectableUsers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPeoplePickerCompleteDelegate
// (Iterator, Latent, PreOperator, NetReliable, Simulated, Exec, Native, Event, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         InDelegate                     (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearPeoplePickerCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& InDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPeoplePickerCompleteDelegate"));

	UOnlineSubsystemSteamworks_ClearPeoplePickerCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.InDelegate = InDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPeoplePickerCompleteDelegate
// (Final, Defined, Singular, Net, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         InDelegate                     (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddPeoplePickerCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& InDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPeoplePickerCompleteDelegate"));

	UOnlineSubsystemSteamworks_AddPeoplePickerCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.InDelegate = InDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPeoplePickerComplete
// (Iterator, PreOperator, Singular, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// TArray<struct FOnlineFriend>   PeoplePicked                   (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::STATIC_OnPeoplePickerComplete(bool bWasSuccessful, TArray<struct FOnlineFriend> PeoplePicked)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPeoplePickerComplete"));

	UOnlineSubsystemSteamworks_OnPeoplePickerComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.PeoplePicked = PeoplePicked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowPeoplePickerUI
// (Defined, Iterator, Singular, Net, NetReliable, Simulated, Exec, Native, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FOnlineFriend>   People                         (Parm, NeedCtorLink)
// int                            MaxSelectable                  (Parm)
// struct FString                 Text                           (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ShowPeoplePickerUI(unsigned char LocalUserNum, TArray<struct FOnlineFriend> People, int MaxSelectable, const struct FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowPeoplePickerUI"));

	UOnlineSubsystemSteamworks_ShowPeoplePickerUI_Params params;
	params.LocalUserNum = LocalUserNum;
	params.People = People;
	params.MaxSelectable = MaxSelectable;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearShowComposeMessageUICompleteDelegate
// (Final, Latent, PreOperator, Net, NetReliable, Simulated, Exec, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         MessageDelegate                (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearShowComposeMessageUICompleteDelegate(const struct FScriptDelegate& MessageDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearShowComposeMessageUICompleteDelegate"));

	UOnlineSubsystemSteamworks_ClearShowComposeMessageUICompleteDelegate_Params params;
	params.MessageDelegate = MessageDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddShowComposeMessageUICompleteDelegate
// (Final, Latent, Singular, Operator)
// Parameters:
// struct FScriptDelegate         MessageDelegate                (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddShowComposeMessageUICompleteDelegate(const struct FScriptDelegate& MessageDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddShowComposeMessageUICompleteDelegate"));

	UOnlineSubsystemSteamworks_AddShowComposeMessageUICompleteDelegate_Params params;
	params.MessageDelegate = MessageDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnShowComposeMessageUIComplete
// (Final, Defined, Latent, Exec, Native, Event, Static)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemSteamworks::STATIC_OnShowComposeMessageUIComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnShowComposeMessageUIComplete"));

	UOnlineSubsystemSteamworks_OnShowComposeMessageUIComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRemoteTalkerStatusChange
// (Defined, Latent, Exec, Native, Event, Static)
// Parameters:
// struct FUniqueNetId            RemoteNetId                    (Parm)
// bool                           bIsTalking                     (Parm)

void UOnlineSubsystemSteamworks::STATIC_OnRemoteTalkerStatusChange(const struct FUniqueNetId& RemoteNetId, bool bIsTalking)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRemoteTalkerStatusChange"));

	UOnlineSubsystemSteamworks_OnRemoteTalkerStatusChange_Params params;
	params.RemoteNetId = RemoteNetId;
	params.bIsTalking = bIsTalking;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UpdatePlayerMuteSetting
// (Final, Defined, Iterator, PreOperator, NetReliable, Simulated, Exec, Event, HasOptionalParms)
// Parameters:
// bool                           PlayerMuteSetting              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::UpdatePlayerMuteSetting(bool PlayerMuteSetting)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UpdatePlayerMuteSetting"));

	UOnlineSubsystemSteamworks_UpdatePlayerMuteSetting_Params params;
	params.PlayerMuteSetting = PlayerMuteSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsTalkerMuted
// (Final, Iterator, Simulated, Exec, Operator, Static)
// Parameters:
// struct FUniqueNetId            ConsoleId                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::STATIC_IsTalkerMuted(const struct FUniqueNetId& ConsoleId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsTalkerMuted"));

	UOnlineSubsystemSteamworks_IsTalkerMuted_Params params;
	params.ConsoleId = ConsoleId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearGetUserAccountInfoDelegate
// (Final, Defined, Iterator, PreOperator, Singular, Net, Simulated, Exec, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         InDelegate                     (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearGetUserAccountInfoDelegate(const struct FScriptDelegate& InDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearGetUserAccountInfoDelegate"));

	UOnlineSubsystemSteamworks_ClearGetUserAccountInfoDelegate_Params params;
	params.InDelegate = InDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddGetUserAccountInfoDelegate
// (Defined, Latent, Singular, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// struct FScriptDelegate         InDelegate                     (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddGetUserAccountInfoDelegate(const struct FScriptDelegate& InDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddGetUserAccountInfoDelegate"));

	UOnlineSubsystemSteamworks_AddGetUserAccountInfoDelegate_Params params;
	params.InDelegate = InDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUserAccountInfo
// (Final, PreOperator, Singular, Simulated, Exec, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::STATIC_GetUserAccountInfo(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUserAccountInfo"));

	UOnlineSubsystemSteamworks_GetUserAccountInfo_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUserAccountInfoRetrieved
// (Final, Iterator, PreOperator, Exec, Native, Event, Static)
// Parameters:
// bool                           bSuccessful                    (Parm)
// struct FUserAccountInfo        AccountInfo                    (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::STATIC_OnUserAccountInfoRetrieved(bool bSuccessful, const struct FUserAccountInfo& AccountInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUserAccountInfoRetrieved"));

	UOnlineSubsystemSteamworks_OnUserAccountInfoRetrieved_Params params;
	params.bSuccessful = bSuccessful;
	params.AccountInfo = AccountInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RemoveAccountPickerCompleteDelegate
// (Final, Defined, Iterator, Native, HasOptionalParms)
// Parameters:
// struct FScriptDelegate         InDelegate                     (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::RemoveAccountPickerCompleteDelegate(const struct FScriptDelegate& InDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RemoveAccountPickerCompleteDelegate"));

	UOnlineSubsystemSteamworks_RemoveAccountPickerCompleteDelegate_Params params;
	params.InDelegate = InDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddAccountPickerCompleteDelegate
// (Final, Defined, Latent, Singular, Net, Simulated, Exec, Native, Event)
// Parameters:
// struct FScriptDelegate         InDelegate                     (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddAccountPickerCompleteDelegate(const struct FScriptDelegate& InDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddAccountPickerCompleteDelegate"));

	UOnlineSubsystemSteamworks_AddAccountPickerCompleteDelegate_Params params;
	params.InDelegate = InDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnAccountPickerComplete
// (Defined, Latent, PreOperator, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// bool                           bForceLogin                    (Parm)

void UOnlineSubsystemSteamworks::STATIC_OnAccountPickerComplete(bool bForceLogin)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnAccountPickerComplete"));

	UOnlineSubsystemSteamworks_OnAccountPickerComplete_Params params;
	params.bForceLogin = bForceLogin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearShowGamerCardCompleteDelegate
// (Defined, Latent, PreOperator, Net, NetReliable, Simulated, Exec, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         GamerCardDelegate              (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearShowGamerCardCompleteDelegate(const struct FScriptDelegate& GamerCardDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearShowGamerCardCompleteDelegate"));

	UOnlineSubsystemSteamworks_ClearShowGamerCardCompleteDelegate_Params params;
	params.GamerCardDelegate = GamerCardDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddShowGamerCardCompleteDelegate
// (Defined, Latent, Singular, Operator)
// Parameters:
// struct FScriptDelegate         GamerCardDelegate              (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddShowGamerCardCompleteDelegate(const struct FScriptDelegate& GamerCardDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddShowGamerCardCompleteDelegate"));

	UOnlineSubsystemSteamworks_AddShowGamerCardCompleteDelegate_Params params;
	params.GamerCardDelegate = GamerCardDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnShowGamerCardComplete
// (Iterator, Latent, Exec, Native, Event, Static)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemSteamworks::STATIC_OnShowGamerCardComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnShowGamerCardComplete"));

	UOnlineSubsystemSteamworks_OnShowGamerCardComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowVideo
// (Latent, PreOperator, Singular, Simulated, Event, HasOptionalParms)
// Parameters:
// struct FString                 URL                            (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ShowVideo(const struct FString& URL)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowVideo"));

	UOnlineSubsystemSteamworks_ShowVideo_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSystemUserContrllerPairingChangedDelegate
// (Final, Defined, Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Exec, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         PairingChangeDelegate          (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearSystemUserContrllerPairingChangedDelegate(const struct FScriptDelegate& PairingChangeDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSystemUserContrllerPairingChangedDelegate"));

	UOnlineSubsystemSteamworks_ClearSystemUserContrllerPairingChangedDelegate_Params params;
	params.PairingChangeDelegate = PairingChangeDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddSystemUserContrllerPairingChangedDelegate
// (Final, PreOperator, Singular, Operator)
// Parameters:
// struct FScriptDelegate         PairingChangeDelegate          (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddSystemUserContrllerPairingChangedDelegate(const struct FScriptDelegate& PairingChangeDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddSystemUserContrllerPairingChangedDelegate"));

	UOnlineSubsystemSteamworks_AddSystemUserContrllerPairingChangedDelegate_Params params;
	params.PairingChangeDelegate = PairingChangeDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnSystemUserControllerPairingChanged
// (PreOperator, Exec, Native, Event, Static)
// Parameters:
// int                            NewLocalUserNum                (Parm)
// int                            PreviousLocalUserNum           (Parm)

void UOnlineSubsystemSteamworks::STATIC_OnSystemUserControllerPairingChanged(int NewLocalUserNum, int PreviousLocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnSystemUserControllerPairingChanged"));

	UOnlineSubsystemSteamworks_OnSystemUserControllerPairingChanged_Params params;
	params.NewLocalUserNum = NewLocalUserNum;
	params.PreviousLocalUserNum = PreviousLocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFilterTextDelegate
// (Final, Defined, Iterator, Singular, Net, Simulated, Exec, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         FilterTextDelegate             (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearFilterTextDelegate(const struct FScriptDelegate& FilterTextDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFilterTextDelegate"));

	UOnlineSubsystemSteamworks_ClearFilterTextDelegate_Params params;
	params.FilterTextDelegate = FilterTextDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFilterTextDelegate
// (Latent, PreOperator, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// struct FScriptDelegate         FilterTextDelegate             (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddFilterTextDelegate(const struct FScriptDelegate& FilterTextDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFilterTextDelegate"));

	UOnlineSubsystemSteamworks_AddFilterTextDelegate_Params params;
	params.FilterTextDelegate = FilterTextDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFilterText
// (Final, Iterator, Singular, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// struct FString                 OriginalText                   (Parm, NeedCtorLink)
// struct FString                 FilteredText                   (Parm, NeedCtorLink)
// bool                           bCensorCompletely              (Parm)

void UOnlineSubsystemSteamworks::STATIC_OnFilterText(const struct FString& OriginalText, const struct FString& FilteredText, bool bCensorCompletely)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFilterText"));

	UOnlineSubsystemSteamworks_OnFilterText_Params params;
	params.OriginalText = OriginalText;
	params.FilteredText = FilteredText;
	params.bCensorCompletely = bCensorCompletely;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CheckFilterText
// (Final, Net, NetReliable, Simulated, Exec, Native, HasOptionalParms)
// Parameters:
// struct FString                 Text                           (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::CheckFilterText(const struct FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CheckFilterText"));

	UOnlineSubsystemSteamworks_CheckFilterText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPrivilegeCheckedForUsersByUniqueNetIdsDelegate
// (Defined, Singular, NetReliable, Simulated, Exec, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         PrivilegeDelegate              (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearPrivilegeCheckedForUsersByUniqueNetIdsDelegate(const struct FScriptDelegate& PrivilegeDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPrivilegeCheckedForUsersByUniqueNetIdsDelegate"));

	UOnlineSubsystemSteamworks_ClearPrivilegeCheckedForUsersByUniqueNetIdsDelegate_Params params;
	params.PrivilegeDelegate = PrivilegeDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPrivilegeCheckedForUsersByUniqueNetIdsDelegate
// (Final, Defined, Latent, Singular, Net, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// struct FScriptDelegate         PrivilegeDelegate              (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddPrivilegeCheckedForUsersByUniqueNetIdsDelegate(const struct FScriptDelegate& PrivilegeDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPrivilegeCheckedForUsersByUniqueNetIdsDelegate"));

	UOnlineSubsystemSteamworks_AddPrivilegeCheckedForUsersByUniqueNetIdsDelegate_Params params;
	params.PrivilegeDelegate = PrivilegeDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPrivilegeCheckedForUsersByUniqueNetIds
// (Final, Defined, Iterator, PreOperator, Singular, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilege> Privilege                      (Parm)
// TArray<struct FPermissionsResultByUniqueNetId> Results                        (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::STATIC_OnPrivilegeCheckedForUsersByUniqueNetIds(unsigned char LocalUserNum, TEnumAsByte<EFeaturePrivilege> Privilege, TArray<struct FPermissionsResultByUniqueNetId> Results)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPrivilegeCheckedForUsersByUniqueNetIds"));

	UOnlineSubsystemSteamworks_OnPrivilegeCheckedForUsersByUniqueNetIds_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Privilege = Privilege;
	params.Results = Results;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPrivilegeCheckedForUsersDelegate
// (Final, Defined, Singular, NetReliable, Simulated, Exec, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         PrivilegeDelegate              (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearPrivilegeCheckedForUsersDelegate(const struct FScriptDelegate& PrivilegeDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPrivilegeCheckedForUsersDelegate"));

	UOnlineSubsystemSteamworks_ClearPrivilegeCheckedForUsersDelegate_Params params;
	params.PrivilegeDelegate = PrivilegeDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPrivilegeCheckedForUsersDelegate
// (Iterator, Latent, Singular, Net, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// struct FScriptDelegate         PrivilegeDelegate              (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddPrivilegeCheckedForUsersDelegate(const struct FScriptDelegate& PrivilegeDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPrivilegeCheckedForUsersDelegate"));

	UOnlineSubsystemSteamworks_AddPrivilegeCheckedForUsersDelegate_Params params;
	params.PrivilegeDelegate = PrivilegeDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPrivilegeCheckedForUsers
// (Defined, Iterator, PreOperator, Singular, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilege> Privilege                      (Parm)
// TArray<struct FPermissionsResult> Results                        (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::STATIC_OnPrivilegeCheckedForUsers(unsigned char LocalUserNum, TEnumAsByte<EFeaturePrivilege> Privilege, TArray<struct FPermissionsResult> Results)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPrivilegeCheckedForUsers"));

	UOnlineSubsystemSteamworks_OnPrivilegeCheckedForUsers_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Privilege = Privilege;
	params.Results = Results;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateTextWithUsersByUniqueNetIds
// (Net, NetReliable, Simulated, Exec, Native, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FUniqueNetId>    Users                          (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::CanCommunicateTextWithUsersByUniqueNetIds(unsigned char LocalUserNum, TArray<struct FUniqueNetId> Users)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateTextWithUsersByUniqueNetIds"));

	UOnlineSubsystemSteamworks_CanCommunicateTextWithUsersByUniqueNetIds_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Users = Users;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateTextWithUsers
// (Net, Exec, Native, Event, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FSessionMemberInfo> Users                          (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::CanCommunicateTextWithUsers(unsigned char LocalUserNum, TArray<struct FSessionMemberInfo> Users)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateTextWithUsers"));

	UOnlineSubsystemSteamworks_CanCommunicateTextWithUsers_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Users = Users;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateVoiceWithUsersByUniqueNetIds
// (Defined, Latent, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FUniqueNetId>    Users                          (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::STATIC_CanCommunicateVoiceWithUsersByUniqueNetIds(unsigned char LocalUserNum, TArray<struct FUniqueNetId> Users)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateVoiceWithUsersByUniqueNetIds"));

	UOnlineSubsystemSteamworks_CanCommunicateVoiceWithUsersByUniqueNetIds_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Users = Users;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateVoiceWithUsers
// (Defined, Net, Exec, Native, Event, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FSessionMemberInfo> Users                          (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::CanCommunicateVoiceWithUsers(unsigned char LocalUserNum, TArray<struct FSessionMemberInfo> Users)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateVoiceWithUsers"));

	UOnlineSubsystemSteamworks_CanCommunicateVoiceWithUsers_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Users = Users;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CheckForGameInviteOnLaunch
// (Final, Iterator, Latent, Net, NetReliable, Exec, Native, Event, Operator)

void UOnlineSubsystemSteamworks::CheckForGameInviteOnLaunch()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CheckForGameInviteOnLaunch"));

	UOnlineSubsystemSteamworks_CheckForGameInviteOnLaunch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetControllerIdFromNetId
// (Defined, Latent, Net, NetReliable, Simulated, Exec, Native, HasOptionalParms)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Parm)
// int                            ControllerId                   (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::GetControllerIdFromNetId(const struct FUniqueNetId& PlayerID, int* ControllerId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetControllerIdFromNetId"));

	UOnlineSubsystemSteamworks_GetControllerIdFromNetId_Params params;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ControllerId != nullptr)
		*ControllerId = params.ControllerId;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CacheLoggedInGamepad
// (Defined, Iterator, Latent, PreOperator, Singular, NetReliable, Simulated, Exec, Native, HasOptionalParms)

void UOnlineSubsystemSteamworks::CacheLoggedInGamepad()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CacheLoggedInGamepad"));

	UOnlineSubsystemSteamworks_CacheLoggedInGamepad_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCurrentUserChangedDelegate
// (Iterator, PreOperator, Net, Simulated, Exec, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         CurrentUserDelegate            (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearCurrentUserChangedDelegate(const struct FScriptDelegate& CurrentUserDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCurrentUserChangedDelegate"));

	UOnlineSubsystemSteamworks_ClearCurrentUserChangedDelegate_Params params;
	params.CurrentUserDelegate = CurrentUserDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddCurrentUserChangedDelegate
// (Latent, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// struct FScriptDelegate         CurrentUserDelegate            (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddCurrentUserChangedDelegate(const struct FScriptDelegate& CurrentUserDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddCurrentUserChangedDelegate"));

	UOnlineSubsystemSteamworks_AddCurrentUserChangedDelegate_Params params;
	params.CurrentUserDelegate = CurrentUserDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnCurrentUserChanged
// (Singular, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 CurrentUser                    (Parm, NeedCtorLink)
// struct FString                 LoggedInUser                   (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::STATIC_OnCurrentUserChanged(unsigned char LocalUserNum, const struct FString& CurrentUser, const struct FString& LoggedInUser)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnCurrentUserChanged"));

	UOnlineSubsystemSteamworks_OnCurrentUserChanged_Params params;
	params.LocalUserNum = LocalUserNum;
	params.CurrentUser = CurrentUser;
	params.LoggedInUser = LoggedInUser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.PairUserAndControllerAtIndex
// (Final, Iterator, Latent, PreOperator, Net, Exec, Native, Event, Operator, Static)
// Parameters:
// unsigned char                  PlayerIndex                    (Parm)
// unsigned char                  ControllerIndex                (Parm)
// int                            PairIndex                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::STATIC_PairUserAndControllerAtIndex(unsigned char PlayerIndex, unsigned char ControllerIndex, int PairIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.PairUserAndControllerAtIndex"));

	UOnlineSubsystemSteamworks_PairUserAndControllerAtIndex_Params params;
	params.PlayerIndex = PlayerIndex;
	params.ControllerIndex = ControllerIndex;
	params.PairIndex = PairIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateText
// (Final, Defined, Iterator, Latent, PreOperator, Singular, NetReliable, Simulated, Exec, Native, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevelHint             (Parm, OutParm)
// bool                           bAttemptToResolve              (OptionalParm, Parm)
// struct FString                 Reason                         (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::CanCommunicateText(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateText"));

	UOnlineSubsystemSteamworks_CanCommunicateText_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateVideo
// (Final, Net, Exec, Native, Event, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevelHint             (Parm, OutParm)
// bool                           bAttemptToResolve              (OptionalParm, Parm)
// struct FString                 Reason                         (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::CanCommunicateVideo(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateVideo"));

	UOnlineSubsystemSteamworks_CanCommunicateVideo_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateVoice
// (Final, Latent, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevelHint             (Parm, OutParm)
// bool                           bAttemptToResolve              (OptionalParm, Parm)
// struct FString                 Reason                         (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::STATIC_CanCommunicateVoice(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateVoice"));

	UOnlineSubsystemSteamworks_CanCommunicateVoice_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShareUserCreatedContent
// (Final, PreOperator, Net, Exec, Native, Event, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevelHint             (Parm, OutParm)
// bool                           bAttemptToResolve              (OptionalParm, Parm)
// struct FString                 Reason                         (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::CanShareUserCreatedContent(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShareUserCreatedContent"));

	UOnlineSubsystemSteamworks_CanShareUserCreatedContent_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanRecordDVRClips
// (Iterator, Latent, Net, Exec, Native, Event, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevelHint             (Parm, OutParm)
// bool                           bAttemptToResolve              (OptionalParm, Parm)
// struct FString                 Reason                         (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::CanRecordDVRClips(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanRecordDVRClips"));

	UOnlineSubsystemSteamworks_CanRecordDVRClips_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanUseCloudStorage
// (Singular, Net, Exec, Native, Event, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevelHint             (Parm, OutParm)
// bool                           bAttemptToResolve              (OptionalParm, Parm)
// struct FString                 Reason                         (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::CanUseCloudStorage(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanUseCloudStorage"));

	UOnlineSubsystemSteamworks_CanUseCloudStorage_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanAccessPremiumContent
// (Iterator, Latent, Singular, Exec, Native, Event, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevelHint             (Parm, OutParm)
// bool                           bAttemptToResolve              (OptionalParm, Parm)
// struct FString                 Reason                         (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::CanAccessPremiumContent(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanAccessPremiumContent"));

	UOnlineSubsystemSteamworks_CanAccessPremiumContent_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanAccessPremiumVideoContent
// (Final, Iterator, Latent, Singular, Exec, Native, Event, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevelHint             (Parm, OutParm)
// bool                           bAttemptToResolve              (OptionalParm, Parm)
// struct FString                 Reason                         (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::CanAccessPremiumVideoContent(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanAccessPremiumVideoContent"));

	UOnlineSubsystemSteamworks_CanAccessPremiumVideoContent_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanBrowseInternet
// (Defined, Iterator, PreOperator, Singular, Exec, Native, Event, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevelHint             (Parm, OutParm)
// bool                           bAttemptToResolve              (OptionalParm, Parm)
// struct FString                 Reason                         (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::CanBrowseInternet(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanBrowseInternet"));

	UOnlineSubsystemSteamworks_CanBrowseInternet_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShareWithSocialNetwork
// (Defined, PreOperator, Net, Exec, Native, Event, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevelHint             (Parm, OutParm)
// bool                           bAttemptToResolve              (OptionalParm, Parm)
// struct FString                 Reason                         (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::CanShareWithSocialNetwork(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShareWithSocialNetwork"));

	UOnlineSubsystemSteamworks_CanShareWithSocialNetwork_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShareKinectContent
// (PreOperator, Net, Exec, Native, Event, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevelHint             (Parm, OutParm)
// bool                           bAttemptToResolve              (OptionalParm, Parm)
// struct FString                 Reason                         (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::CanShareKinectContent(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShareKinectContent"));

	UOnlineSubsystemSteamworks_CanShareKinectContent_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanUploadFitnessData
// (Final, Defined, Iterator, Latent, PreOperator, Net, Exec, Native, Event, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevelHint             (Parm, OutParm)
// bool                           bAttemptToResolve              (OptionalParm, Parm)
// struct FString                 Reason                         (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::CanUploadFitnessData(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanUploadFitnessData"));

	UOnlineSubsystemSteamworks_CanUploadFitnessData_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnsubscribeToStatisticEvent
// (Final, Iterator, PreOperator, Singular, Simulated, Exec, Native, Event, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            PlayerNetId                    (Parm)
// struct FName                   StatName                       (Parm)

void UOnlineSubsystemSteamworks::UnsubscribeToStatisticEvent(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerNetId, const struct FName& StatName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnsubscribeToStatisticEvent"));

	UOnlineSubsystemSteamworks_UnsubscribeToStatisticEvent_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerNetId = PlayerNetId;
	params.StatName = StatName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SubscribeToStatisticEvent
// (Iterator, Singular, Native, Event, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            PlayerNetId                    (Parm)
// struct FName                   StatName                       (Parm)
// struct FScriptDelegate         EventDelegate                  (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::SubscribeToStatisticEvent(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerNetId, const struct FName& StatName, const struct FScriptDelegate& EventDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SubscribeToStatisticEvent"));

	UOnlineSubsystemSteamworks_SubscribeToStatisticEvent_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerNetId = PlayerNetId;
	params.StatName = StatName;
	params.EventDelegate = EventDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnStatisticChanged
// (Defined, Iterator, Latent, Exec, Native, Event, Static)
// Parameters:
// struct FUniqueNetId            PlayerNetId                    (Parm)
// struct FName                   StatName                       (Parm)
// struct FString                 NewStatValue                   (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::STATIC_OnStatisticChanged(const struct FUniqueNetId& PlayerNetId, const struct FName& StatName, const struct FString& NewStatValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnStatisticChanged"));

	UOnlineSubsystemSteamworks_OnStatisticChanged_Params params;
	params.PlayerNetId = PlayerNetId;
	params.StatName = StatName;
	params.NewStatValue = NewStatValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HideKeyboardUI
// (Latent, PreOperator, Operator, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::STATIC_HideKeyboardUI(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HideKeyboardUI"));

	UOnlineSubsystemSteamworks_HideKeyboardUI_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAchievements
// (Defined, Latent, Singular, Simulated, Exec, Native, Event, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            TitleId                        (OptionalParm, Parm)

void UOnlineSubsystemSteamworks::ClearAchievements(unsigned char LocalUserNum, int TitleId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAchievements"));

	UOnlineSubsystemSteamworks_ClearAchievements_Params params;
	params.LocalUserNum = LocalUserNum;
	params.TitleId = TitleId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPrivilegeLevelCheckedDelegate
// (Iterator, Singular, NetReliable, Simulated, Exec, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         PrivilegeDelegate              (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearPrivilegeLevelCheckedDelegate(const struct FScriptDelegate& PrivilegeDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPrivilegeLevelCheckedDelegate"));

	UOnlineSubsystemSteamworks_ClearPrivilegeLevelCheckedDelegate_Params params;
	params.PrivilegeDelegate = PrivilegeDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPrivilegeLevelCheckedDelegate
// (Final, Iterator, Latent, Singular, Net, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// struct FScriptDelegate         PrivilegeDelegate              (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddPrivilegeLevelCheckedDelegate(const struct FScriptDelegate& PrivilegeDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPrivilegeLevelCheckedDelegate"));

	UOnlineSubsystemSteamworks_AddPrivilegeLevelCheckedDelegate_Params params;
	params.PrivilegeDelegate = PrivilegeDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPrivilegeLevelChecked
// (Latent, PreOperator, Singular, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilege> Privilege                      (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevel                 (Parm)
// bool                           bDiffersFromHint               (Parm)

void UOnlineSubsystemSteamworks::STATIC_OnPrivilegeLevelChecked(unsigned char LocalUserNum, TEnumAsByte<EFeaturePrivilege> Privilege, TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevel, bool bDiffersFromHint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPrivilegeLevelChecked"));

	UOnlineSubsystemSteamworks_OnPrivilegeLevelChecked_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Privilege = Privilege;
	params.PrivilegeLevel = PrivilegeLevel;
	params.bDiffersFromHint = bDiffersFromHint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearURLTokenRetrievedDelegate
// (Latent, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         tsrDelegate                    (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearURLTokenRetrievedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& tsrDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearURLTokenRetrievedDelegate"));

	UOnlineSubsystemSteamworks_ClearURLTokenRetrievedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.tsrDelegate = tsrDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddURLTokenRetrievedDelegate
// (Defined, Iterator, Latent, PreOperator, Singular, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         tsrDelegate                    (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddURLTokenRetrievedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& tsrDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddURLTokenRetrievedDelegate"));

	UOnlineSubsystemSteamworks_AddURLTokenRetrievedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.tsrDelegate = tsrDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnTokenAndSignatureRetrieved
// (Final, PreOperator, Exec, Native, Event, Static)
// Parameters:
// bool                           bSuccess                       (Parm)
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 URL                            (Parm, NeedCtorLink)
// struct FString                 Token                          (Parm, NeedCtorLink)
// struct FString                 AuthToken                      (Parm, NeedCtorLink)
// struct FString                 Signature                      (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::STATIC_OnTokenAndSignatureRetrieved(bool bSuccess, unsigned char LocalUserNum, const struct FString& URL, const struct FString& Token, const struct FString& AuthToken, const struct FString& Signature)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnTokenAndSignatureRetrieved"));

	UOnlineSubsystemSteamworks_OnTokenAndSignatureRetrieved_Params params;
	params.bSuccess = bSuccess;
	params.LocalUserNum = LocalUserNum;
	params.URL = URL;
	params.Token = Token;
	params.AuthToken = AuthToken;
	params.Signature = Signature;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTokenAndSignatureForURL
// (Defined, Iterator, Latent, PreOperator, Simulated, Exec, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 URL                            (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::STATIC_GetTokenAndSignatureForURL(unsigned char LocalUserNum, const struct FString& URL)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTokenAndSignatureForURL"));

	UOnlineSubsystemSteamworks_GetTokenAndSignatureForURL_Params params;
	params.LocalUserNum = LocalUserNum;
	params.URL = URL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowComposeMessageUI
// (Defined, Iterator, Latent, Simulated, Event, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FUniqueNetId>    People                         (OptionalParm, Parm, NeedCtorLink)
// struct FString                 Text                           (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ShowComposeMessageUI(unsigned char LocalUserNum, TArray<struct FUniqueNetId> People, const struct FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowComposeMessageUI"));

	UOnlineSubsystemSteamworks_ShowComposeMessageUI_Params params;
	params.LocalUserNum = LocalUserNum;
	params.People = People;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowGamerCardUIByUsername
// (Final, Defined, Iterator, Latent, PreOperator, Simulated, Event, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 UserName                       (Parm, NeedCtorLink)
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ShowGamerCardUIByUsername(unsigned char LocalUserNum, const struct FString& UserName, const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowGamerCardUIByUsername"));

	UOnlineSubsystemSteamworks_ShowGamerCardUIByUsername_Params params;
	params.LocalUserNum = LocalUserNum;
	params.UserName = UserName;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAllDelegates
// (Final, Defined, Iterator, Latent, Singular, Simulated, Exec, Native, Event, Operator)

void UOnlineSubsystemSteamworks::ClearAllDelegates()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAllDelegates"));

	UOnlineSubsystemSteamworks_ClearAllDelegates_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteSharedFileCompleteDelegate
// (Iterator, Latent, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         WriteSharedFileCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearWriteSharedFileCompleteDelegate(const struct FScriptDelegate& WriteSharedFileCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteSharedFileCompleteDelegate"));

	UOnlineSubsystemSteamworks_ClearWriteSharedFileCompleteDelegate_Params params;
	params.WriteSharedFileCompleteDelegate = WriteSharedFileCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteSharedFileCompleteDelegate
// (Final, Defined, Net, Operator)
// Parameters:
// struct FScriptDelegate         WriteSharedFileCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddWriteSharedFileCompleteDelegate(const struct FScriptDelegate& WriteSharedFileCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteSharedFileCompleteDelegate"));

	UOnlineSubsystemSteamworks_AddWriteSharedFileCompleteDelegate_Params params;
	params.WriteSharedFileCompleteDelegate = WriteSharedFileCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteSharedFile
// (Defined, Iterator, Latent, NetReliable, Simulated, Operator, HasOptionalParms)
// Parameters:
// struct FString                 UserId                         (Parm, NeedCtorLink)
// struct FString                 Filename                       (Parm, NeedCtorLink)
// TArray<unsigned char>          Contents                       (Const, Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::WriteSharedFile(const struct FString& UserId, const struct FString& Filename, TArray<unsigned char>* Contents)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteSharedFile"));

	UOnlineSubsystemSteamworks_WriteSharedFile_Params params;
	params.UserId = UserId;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Contents != nullptr)
		*Contents = params.Contents;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteSharedFileComplete
// (Latent, PreOperator, Exec, Native, Event, Static)
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// struct FString                 UserId                         (Parm, NeedCtorLink)
// struct FString                 Filename                       (Parm, NeedCtorLink)
// struct FString                 SharedHandle                   (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::STATIC_OnWriteSharedFileComplete(bool bWasSuccessful, const struct FString& UserId, const struct FString& Filename, const struct FString& SharedHandle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteSharedFileComplete"));

	UOnlineSubsystemSteamworks_OnWriteSharedFileComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.UserId = UserId;
	params.Filename = Filename;
	params.SharedHandle = SharedHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadSharedFileCompleteDelegate
// (Defined, Net, NetReliable, Simulated, Exec, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         ReadSharedFileCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadSharedFileCompleteDelegate(const struct FScriptDelegate& ReadSharedFileCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadSharedFileCompleteDelegate"));

	UOnlineSubsystemSteamworks_ClearReadSharedFileCompleteDelegate_Params params;
	params.ReadSharedFileCompleteDelegate = ReadSharedFileCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadSharedFileCompleteDelegate
// (Final, Defined, Latent, Operator)
// Parameters:
// struct FScriptDelegate         ReadSharedFileCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadSharedFileCompleteDelegate(const struct FScriptDelegate& ReadSharedFileCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadSharedFileCompleteDelegate"));

	UOnlineSubsystemSteamworks_AddReadSharedFileCompleteDelegate_Params params;
	params.ReadSharedFileCompleteDelegate = ReadSharedFileCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadSharedFile
// (Final, Iterator, Latent, Net, Simulated, Exec, HasOptionalParms)
// Parameters:
// struct FString                 SharedHandle                   (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ReadSharedFile(const struct FString& SharedHandle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadSharedFile"));

	UOnlineSubsystemSteamworks_ReadSharedFile_Params params;
	params.SharedHandle = SharedHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadSharedFileComplete
// (Final, Defined, Exec, Native, Event, Static)
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// struct FString                 SharedHandle                   (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::STATIC_OnReadSharedFileComplete(bool bWasSuccessful, const struct FString& SharedHandle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadSharedFileComplete"));

	UOnlineSubsystemSteamworks_OnReadSharedFileComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.SharedHandle = SharedHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSharedFile
// (Final, Defined, Iterator, PreOperator, Net, NetReliable, Simulated, Exec, Native, Event, Operator)
// Parameters:
// struct FString                 SharedHandle                   (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ClearSharedFile(const struct FString& SharedHandle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSharedFile"));

	UOnlineSubsystemSteamworks_ClearSharedFile_Params params;
	params.SharedHandle = SharedHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSharedFiles
// (Latent, PreOperator, Net, NetReliable, Simulated, Exec, Native, Event, Operator)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ClearSharedFiles()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSharedFiles"));

	UOnlineSubsystemSteamworks_ClearSharedFiles_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSharedFileContents
// (Defined, Iterator, Latent, PreOperator, Net, NetReliable, Exec, Native, Event, Static)
// Parameters:
// struct FString                 SharedHandle                   (Parm, NeedCtorLink)
// TArray<unsigned char>          FileContents                   (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::STATIC_GetSharedFileContents(const struct FString& SharedHandle, TArray<unsigned char>* FileContents)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSharedFileContents"));

	UOnlineSubsystemSteamworks_GetSharedFileContents_Params params;
	params.SharedHandle = SharedHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FileContents != nullptr)
		*FileContents = params.FileContents;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDeleteUserFileCompleteDelegate
// (Defined, Latent, PreOperator, Net, Simulated, Exec, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         DeleteUserFileCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearDeleteUserFileCompleteDelegate(const struct FScriptDelegate& DeleteUserFileCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDeleteUserFileCompleteDelegate"));

	UOnlineSubsystemSteamworks_ClearDeleteUserFileCompleteDelegate_Params params;
	params.DeleteUserFileCompleteDelegate = DeleteUserFileCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDeleteUserFileCompleteDelegate
// (Iterator, Latent, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// struct FScriptDelegate         DeleteUserFileCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddDeleteUserFileCompleteDelegate(const struct FScriptDelegate& DeleteUserFileCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDeleteUserFileCompleteDelegate"));

	UOnlineSubsystemSteamworks_AddDeleteUserFileCompleteDelegate_Params params;
	params.DeleteUserFileCompleteDelegate = DeleteUserFileCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteUserFile
// (Final, Defined, Iterator, PreOperator, Singular, Net, Native, Static)
// Parameters:
// struct FString                 UserId                         (Parm, NeedCtorLink)
// struct FString                 Filename                       (Parm, NeedCtorLink)
// bool                           bShouldCloudDelete             (Parm)
// bool                           bShouldLocallyDelete           (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::STATIC_DeleteUserFile(const struct FString& UserId, const struct FString& Filename, bool bShouldCloudDelete, bool bShouldLocallyDelete)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteUserFile"));

	UOnlineSubsystemSteamworks_DeleteUserFile_Params params;
	params.UserId = UserId;
	params.Filename = Filename;
	params.bShouldCloudDelete = bShouldCloudDelete;
	params.bShouldLocallyDelete = bShouldLocallyDelete;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDeleteUserFileComplete
// (Final, Singular, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// struct FString                 UserId                         (Parm, NeedCtorLink)
// struct FString                 Filename                       (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::STATIC_OnDeleteUserFileComplete(bool bWasSuccessful, const struct FString& UserId, const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDeleteUserFileComplete"));

	UOnlineSubsystemSteamworks_OnDeleteUserFileComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.UserId = UserId;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteUserFileCompleteDelegate
// (Final, Iterator, Latent, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         WriteUserFileCompleteDelegate  (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearWriteUserFileCompleteDelegate(const struct FScriptDelegate& WriteUserFileCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteUserFileCompleteDelegate"));

	UOnlineSubsystemSteamworks_ClearWriteUserFileCompleteDelegate_Params params;
	params.WriteUserFileCompleteDelegate = WriteUserFileCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteUserFileCompleteDelegate
// (Iterator, Net, Operator)
// Parameters:
// struct FScriptDelegate         WriteUserFileCompleteDelegate  (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddWriteUserFileCompleteDelegate(const struct FScriptDelegate& WriteUserFileCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteUserFileCompleteDelegate"));

	UOnlineSubsystemSteamworks_AddWriteUserFileCompleteDelegate_Params params;
	params.WriteUserFileCompleteDelegate = WriteUserFileCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteUserFile
// (Final, PreOperator, NetReliable, Simulated, Operator, HasOptionalParms)
// Parameters:
// struct FString                 UserId                         (Parm, NeedCtorLink)
// struct FString                 Filename                       (Parm, NeedCtorLink)
// TArray<unsigned char>          FileContents                   (Const, Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::WriteUserFile(const struct FString& UserId, const struct FString& Filename, TArray<unsigned char>* FileContents)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteUserFile"));

	UOnlineSubsystemSteamworks_WriteUserFile_Params params;
	params.UserId = UserId;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FileContents != nullptr)
		*FileContents = params.FileContents;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteUserFileComplete
// (Final, Latent, PreOperator, Exec, Native, Event, Static)
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// struct FString                 UserId                         (Parm, NeedCtorLink)
// struct FString                 Filename                       (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::STATIC_OnWriteUserFileComplete(bool bWasSuccessful, const struct FString& UserId, const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteUserFileComplete"));

	UOnlineSubsystemSteamworks_OnWriteUserFileComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.UserId = UserId;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadUserFileCompleteDelegate
// (Iterator, Net, NetReliable, Simulated, Exec, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         ReadUserFileCompleteDelegate   (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadUserFileCompleteDelegate(const struct FScriptDelegate& ReadUserFileCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadUserFileCompleteDelegate"));

	UOnlineSubsystemSteamworks_ClearReadUserFileCompleteDelegate_Params params;
	params.ReadUserFileCompleteDelegate = ReadUserFileCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadUserFileCompleteDelegate
// (Final, Iterator, Latent, Operator)
// Parameters:
// struct FScriptDelegate         ReadUserFileCompleteDelegate   (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadUserFileCompleteDelegate(const struct FScriptDelegate& ReadUserFileCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadUserFileCompleteDelegate"));

	UOnlineSubsystemSteamworks_AddReadUserFileCompleteDelegate_Params params;
	params.ReadUserFileCompleteDelegate = ReadUserFileCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadUserFile
// (Final, Defined, PreOperator, Net, Simulated, Exec, HasOptionalParms)
// Parameters:
// struct FString                 UserId                         (Parm, NeedCtorLink)
// struct FString                 Filename                       (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ReadUserFile(const struct FString& UserId, const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadUserFile"));

	UOnlineSubsystemSteamworks_ReadUserFile_Params params;
	params.UserId = UserId;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadUserFileComplete
// (Final, Iterator, Exec, Native, Event, Static)
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// struct FString                 UserId                         (Parm, NeedCtorLink)
// struct FString                 Filename                       (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::STATIC_OnReadUserFileComplete(bool bWasSuccessful, const struct FString& UserId, const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadUserFileComplete"));

	UOnlineSubsystemSteamworks_OnReadUserFileComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.UserId = UserId;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUserFileList
// (Final, Defined, PreOperator, Singular, Simulated, Exec, Native, Event, Static)
// Parameters:
// struct FString                 UserId                         (Parm, NeedCtorLink)
// TArray<struct FEmsFile>        UserFiles                      (Parm, OutParm, NeedCtorLink)

void UOnlineSubsystemSteamworks::STATIC_GetUserFileList(const struct FString& UserId, TArray<struct FEmsFile>* UserFiles)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUserFileList"));

	UOnlineSubsystemSteamworks_GetUserFileList_Params params;
	params.UserId = UserId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UserFiles != nullptr)
		*UserFiles = params.UserFiles;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearEnumerateUserFileCompleteDelegate
// (Final, Defined, Singular, Net, Simulated, Exec, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         EnumerateUserFileCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearEnumerateUserFileCompleteDelegate(const struct FScriptDelegate& EnumerateUserFileCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearEnumerateUserFileCompleteDelegate"));

	UOnlineSubsystemSteamworks_ClearEnumerateUserFileCompleteDelegate_Params params;
	params.EnumerateUserFileCompleteDelegate = EnumerateUserFileCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddEnumerateUserFileCompleteDelegate
// (Iterator, PreOperator, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// struct FScriptDelegate         EnumerateUserFileCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddEnumerateUserFileCompleteDelegate(const struct FScriptDelegate& EnumerateUserFileCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddEnumerateUserFileCompleteDelegate"));

	UOnlineSubsystemSteamworks_AddEnumerateUserFileCompleteDelegate_Params params;
	params.EnumerateUserFileCompleteDelegate = EnumerateUserFileCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.EnumerateUserFiles
// (Latent, Net, Event, Static)
// Parameters:
// struct FString                 UserId                         (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::STATIC_EnumerateUserFiles(const struct FString& UserId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.EnumerateUserFiles"));

	UOnlineSubsystemSteamworks_EnumerateUserFiles_Params params;
	params.UserId = UserId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnEnumerateUserFilesComplete
// (Final, Defined, Singular, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// struct FString                 UserId                         (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::STATIC_OnEnumerateUserFilesComplete(bool bWasSuccessful, const struct FString& UserId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnEnumerateUserFilesComplete"));

	UOnlineSubsystemSteamworks_OnEnumerateUserFilesComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.UserId = UserId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFile
// (Final, Iterator, Singular, Net, Simulated, Exec, Native, Event, Operator)
// Parameters:
// struct FString                 UserId                         (Parm, NeedCtorLink)
// struct FString                 Filename                       (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ClearFile(const struct FString& UserId, const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFile"));

	UOnlineSubsystemSteamworks_ClearFile_Params params;
	params.UserId = UserId;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFiles
// (Defined, Iterator, Singular, Net, Simulated, Exec, Native, Event, Operator)
// Parameters:
// struct FString                 UserId                         (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ClearFiles(const struct FString& UserId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFiles"));

	UOnlineSubsystemSteamworks_ClearFiles_Params params;
	params.UserId = UserId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFileContents
// (Final, Defined, Iterator, PreOperator, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// struct FString                 UserId                         (Parm, NeedCtorLink)
// struct FString                 Filename                       (Parm, NeedCtorLink)
// TArray<unsigned char>          FileContents                   (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::STATIC_GetFileContents(const struct FString& UserId, const struct FString& Filename, TArray<unsigned char>* FileContents)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFileContents"));

	UOnlineSubsystemSteamworks_GetFileContents_Params params;
	params.UserId = UserId;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FileContents != nullptr)
		*FileContents = params.FileContents;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteUserFileInternal
// (Final, PreOperator, Net, NetReliable, Exec, Static, HasOptionalParms)
// Parameters:
// struct FString                 UserId                         (Parm, NeedCtorLink)
// struct FString                 Filename                       (Parm, NeedCtorLink)
// TArray<unsigned char>          FileContents                   (Const, Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::STATIC_WriteUserFileInternal(const struct FString& UserId, const struct FString& Filename, TArray<unsigned char>* FileContents)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteUserFileInternal"));

	UOnlineSubsystemSteamworks_WriteUserFileInternal_Params params;
	params.UserId = UserId;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FileContents != nullptr)
		*FileContents = params.FileContents;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendJoinURL
// (Final, Latent, PreOperator, Net, Exec, Static, HasOptionalParms)
// Parameters:
// struct FUniqueNetId            FriendUID                      (Parm)
// struct FString                 ServerURL                      (Parm, OutParm, NeedCtorLink)
// struct FString                 ServerUID                      (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::STATIC_GetFriendJoinURL(const struct FUniqueNetId& FriendUID, struct FString* ServerURL, struct FString* ServerUID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendJoinURL"));

	UOnlineSubsystemSteamworks_GetFriendJoinURL_Params params;
	params.FriendUID = FriendUID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ServerURL != nullptr)
		*ServerURL = params.ServerURL;
	if (ServerUID != nullptr)
		*ServerUID = params.ServerUID;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCommandlineJoinURL
// (Latent, PreOperator, Net, Exec, Static, HasOptionalParms)
// Parameters:
// bool                           bMarkAsJoined                  (Parm)
// struct FString                 ServerURL                      (Parm, OutParm, NeedCtorLink)
// struct FString                 ServerUID                      (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::STATIC_GetCommandlineJoinURL(bool bMarkAsJoined, struct FString* ServerURL, struct FString* ServerUID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCommandlineJoinURL"));

	UOnlineSubsystemSteamworks_GetCommandlineJoinURL_Params params;
	params.bMarkAsJoined = bMarkAsJoined;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ServerURL != nullptr)
		*ServerURL = params.ServerURL;
	if (ServerUID != nullptr)
		*ServerUID = params.ServerUID;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Int64ToUniqueNetId
// (Iterator, Latent, PreOperator, Net, Exec, Static, HasOptionalParms)
// Parameters:
// struct FString                 UIDString                      (Parm, NeedCtorLink)
// struct FUniqueNetId            OutUID                         (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::STATIC_Int64ToUniqueNetId(const struct FString& UIDString, struct FUniqueNetId* OutUID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Int64ToUniqueNetId"));

	UOnlineSubsystemSteamworks_Int64ToUniqueNetId_Params params;
	params.UIDString = UIDString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutUID != nullptr)
		*OutUID = params.OutUID;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UniqueNetIdToInt64
// (Final, Defined, Net, NetReliable, Exec, Static, HasOptionalParms)
// Parameters:
// struct FUniqueNetId            Uid                            (Const, Parm, OutParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlineSubsystemSteamworks::STATIC_UniqueNetIdToInt64(struct FUniqueNetId* Uid)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UniqueNetIdToInt64"));

	UOnlineSubsystemSteamworks_UniqueNetIdToInt64_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Uid != nullptr)
		*Uid = params.Uid;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.NotifyVOIPPlaybackFinished
// (Final, Iterator, Latent, NetReliable, Exec, Static, HasOptionalParms)
// Parameters:
// class UAudioComponent*         VOIPAudioComponent             (Parm, EditInline)

void UOnlineSubsystemSteamworks::STATIC_NotifyVOIPPlaybackFinished(class UAudioComponent* VOIPAudioComponent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.NotifyVOIPPlaybackFinished"));

	UOnlineSubsystemSteamworks_NotifyVOIPPlaybackFinished_Params params;
	params.VOIPAudioComponent = VOIPAudioComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnVOIPPlaybackFinished
// (PreOperator, NetReliable, Exec, Static, HasOptionalParms)
// Parameters:
// class UAudioComponent*         AC                             (Parm, EditInline)

void UOnlineSubsystemSteamworks::STATIC_OnVOIPPlaybackFinished(class UAudioComponent* AC)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnVOIPPlaybackFinished"));

	UOnlineSubsystemSteamworks_OnVOIPPlaybackFinished_Params params;
	params.AC = AC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowProfileUI
// (Final, Defined, Iterator, PreOperator, Singular, NetReliable, Exec, Static, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 SubURL                         (OptionalParm, Parm, NeedCtorLink)
// struct FUniqueNetId            PlayerUID                      (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::STATIC_ShowProfileUI(unsigned char LocalUserNum, const struct FString& SubURL, const struct FUniqueNetId& PlayerUID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowProfileUI"));

	UOnlineSubsystemSteamworks_ShowProfileUI_Params params;
	params.LocalUserNum = LocalUserNum;
	params.SubURL = SubURL;
	params.PlayerUID = PlayerUID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UniqueNetIdToPlayerName
// (Iterator, Net, NetReliable, Exec, Static, HasOptionalParms)
// Parameters:
// struct FUniqueNetId            Uid                            (Const, Parm, OutParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlineSubsystemSteamworks::STATIC_UniqueNetIdToPlayerName(struct FUniqueNetId* Uid)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UniqueNetIdToPlayerName"));

	UOnlineSubsystemSteamworks_UniqueNetIdToPlayerName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Uid != nullptr)
		*Uid = params.Uid;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DisplayAchievementProgress
// (Iterator, Net, Exec, Static, HasOptionalParms)
// Parameters:
// int                            AchievementId                  (Parm)
// int                            ProgressCount                  (Parm)
// int                            MaxProgress                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::STATIC_DisplayAchievementProgress(int AchievementId, int ProgressCount, int MaxProgress)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DisplayAchievementProgress"));

	UOnlineSubsystemSteamworks_DisplayAchievementProgress_Params params;
	params.AchievementId = AchievementId;
	params.ProgressCount = ProgressCount;
	params.MaxProgress = MaxProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateLeaderboard
// (Latent, PreOperator, Singular, Exec, Static, HasOptionalParms)
// Parameters:
// struct FString                 LeaderboardName                (Parm, NeedCtorLink)
// TEnumAsByte<ELeaderboardSortType> SortType                       (Parm)
// TEnumAsByte<ELeaderboardFormat> DisplayFormat                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::STATIC_CreateLeaderboard(const struct FString& LeaderboardName, TEnumAsByte<ELeaderboardSortType> SortType, TEnumAsByte<ELeaderboardFormat> DisplayFormat)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateLeaderboard"));

	UOnlineSubsystemSteamworks_CreateLeaderboard_Params params;
	params.LeaderboardName = LeaderboardName;
	params.SortType = SortType;
	params.DisplayFormat = DisplayFormat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ResetStats
// (Defined, PreOperator, Singular, NetReliable, Exec, Static, HasOptionalParms)
// Parameters:
// bool                           bResetAchievements             (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::STATIC_ResetStats(bool bResetAchievements)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ResetStats"));

	UOnlineSubsystemSteamworks_ResetStats_Params params;
	params.bResetAchievements = bResetAchievements;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomMessageUI
// (Final, Defined, PreOperator, Simulated, Event, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FUniqueNetId>    Recipients                     (Const, Parm, OutParm, NeedCtorLink)
// struct FString                 MessageTitle                   (Parm, NeedCtorLink)
// struct FString                 NonEditableMessage             (Parm, NeedCtorLink)
// struct FString                 EditableMessage                (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ShowCustomMessageUI(unsigned char LocalUserNum, const struct FString& MessageTitle, const struct FString& NonEditableMessage, const struct FString& EditableMessage, TArray<struct FUniqueNetId>* Recipients)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomMessageUI"));

	UOnlineSubsystemSteamworks_ShowCustomMessageUI_Params params;
	params.LocalUserNum = LocalUserNum;
	params.MessageTitle = MessageTitle;
	params.NonEditableMessage = NonEditableMessage;
	params.EditableMessage = EditableMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Recipients != nullptr)
		*Recipients = params.Recipients;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCrossTitleProfileSettings
// (Final, PreOperator, Net, Simulated, Exec, Native, Event, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            TitleId                        (Parm)

void UOnlineSubsystemSteamworks::ClearCrossTitleProfileSettings(unsigned char LocalUserNum, int TitleId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCrossTitleProfileSettings"));

	UOnlineSubsystemSteamworks_ClearCrossTitleProfileSettings_Params params;
	params.LocalUserNum = LocalUserNum;
	params.TitleId = TitleId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCrossTitleProfileSettings
// (Defined, Singular, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            TitleId                        (Parm)
// class UOnlineProfileSettings*  ReturnValue                    (Parm, OutParm, ReturnParm)

class UOnlineProfileSettings* UOnlineSubsystemSteamworks::STATIC_GetCrossTitleProfileSettings(unsigned char LocalUserNum, int TitleId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCrossTitleProfileSettings"));

	UOnlineSubsystemSteamworks_GetCrossTitleProfileSettings_Params params;
	params.LocalUserNum = LocalUserNum;
	params.TitleId = TitleId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadCrossTitleProfileSettingsCompleteDelegate
// (Defined, PreOperator, Singular, NetReliable, Simulated, Exec, Native, Event, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadCrossTitleProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadProfileSettingsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadCrossTitleProfileSettingsCompleteDelegate"));

	UOnlineSubsystemSteamworks_ClearReadCrossTitleProfileSettingsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadProfileSettingsCompleteDelegate = ReadProfileSettingsCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadCrossTitleProfileSettingsCompleteDelegate
// (Final, Defined, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadCrossTitleProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadProfileSettingsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadCrossTitleProfileSettingsCompleteDelegate"));

	UOnlineSubsystemSteamworks_AddReadCrossTitleProfileSettingsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadProfileSettingsCompleteDelegate = ReadProfileSettingsCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadCrossTitleProfileSettingsComplete
// (Final, Defined, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            TitleId                        (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemSteamworks::STATIC_OnReadCrossTitleProfileSettingsComplete(unsigned char LocalUserNum, int TitleId, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadCrossTitleProfileSettingsComplete"));

	UOnlineSubsystemSteamworks_OnReadCrossTitleProfileSettingsComplete_Params params;
	params.LocalUserNum = LocalUserNum;
	params.TitleId = TitleId;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadCrossTitleProfileSettings
// (Final, Latent, Singular, Simulated, Exec, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            TitleId                        (Parm)
// class UOnlineProfileSettings*  ProfileSettings                (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ReadCrossTitleProfileSettings(unsigned char LocalUserNum, int TitleId, class UOnlineProfileSettings* ProfileSettings)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadCrossTitleProfileSettings"));

	UOnlineSubsystemSteamworks_ReadCrossTitleProfileSettings_Params params;
	params.LocalUserNum = LocalUserNum;
	params.TitleId = TitleId;
	params.ProfileSettings = ProfileSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockAvatarAward
// (Defined, Latent, PreOperator, Simulated, Exec, Native, Event, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            AvatarItemId                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::UnlockAvatarAward(unsigned char LocalUserNum, int AvatarItemId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockAvatarAward"));

	UOnlineSubsystemSteamworks_UnlockAvatarAward_Params params;
	params.LocalUserNum = LocalUserNum;
	params.AvatarItemId = AvatarItemId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSteamClanData
// (Final, Defined, Latent, PreOperator, Net, Exec, Static, HasOptionalParms)
// Parameters:
// TArray<struct FSteamPlayerClanData> Results                        (Parm, OutParm, NeedCtorLink)

void UOnlineSubsystemSteamworks::STATIC_GetSteamClanData(TArray<struct FSteamPlayerClanData>* Results)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSteamClanData"));

	UOnlineSubsystemSteamworks_GetSteamClanData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Results != nullptr)
		*Results = params.Results;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearGetNumberOfCurrentPlayersCompleteDelegate
// (Iterator, PreOperator, Singular, Net, Simulated, Exec, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         GetNumberOfCurrentPlayersCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearGetNumberOfCurrentPlayersCompleteDelegate(const struct FScriptDelegate& GetNumberOfCurrentPlayersCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearGetNumberOfCurrentPlayersCompleteDelegate"));

	UOnlineSubsystemSteamworks_ClearGetNumberOfCurrentPlayersCompleteDelegate_Params params;
	params.GetNumberOfCurrentPlayersCompleteDelegate = GetNumberOfCurrentPlayersCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddGetNumberOfCurrentPlayersCompleteDelegate
// (Final, Defined, Iterator, Singular, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// struct FScriptDelegate         GetNumberOfCurrentPlayersCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddGetNumberOfCurrentPlayersCompleteDelegate(const struct FScriptDelegate& GetNumberOfCurrentPlayersCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddGetNumberOfCurrentPlayersCompleteDelegate"));

	UOnlineSubsystemSteamworks_AddGetNumberOfCurrentPlayersCompleteDelegate_Params params;
	params.GetNumberOfCurrentPlayersCompleteDelegate = GetNumberOfCurrentPlayersCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnGetNumberOfCurrentPlayersComplete
// (Defined, Latent, Singular, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// int                            TotalPlayers                   (Parm)

void UOnlineSubsystemSteamworks::STATIC_OnGetNumberOfCurrentPlayersComplete(int TotalPlayers)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnGetNumberOfCurrentPlayersComplete"));

	UOnlineSubsystemSteamworks_OnGetNumberOfCurrentPlayersComplete_Params params;
	params.TotalPlayers = TotalPlayers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNumberOfCurrentPlayers
// (Final, Defined, Iterator, Latent, Net, Exec, Native, Event, Static)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::STATIC_GetNumberOfCurrentPlayers()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNumberOfCurrentPlayers"));

	UOnlineSubsystemSteamworks_GetNumberOfCurrentPlayers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineAvatar
// (Final, Latent, Singular, NetReliable, Exec, Static, HasOptionalParms)
// Parameters:
// struct FUniqueNetId            PlayerNetId                    (Const, Parm)
// int                            Size                           (Parm)
// struct FScriptDelegate         ReadOnlineAvatarCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::STATIC_ReadOnlineAvatar(const struct FUniqueNetId& PlayerNetId, int Size, const struct FScriptDelegate& ReadOnlineAvatarCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineAvatar"));

	UOnlineSubsystemSteamworks_ReadOnlineAvatar_Params params;
	params.PlayerNetId = PlayerNetId;
	params.Size = Size;
	params.ReadOnlineAvatarCompleteDelegate = ReadOnlineAvatarCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadOnlineAvatarComplete
// (Final, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// struct FUniqueNetId            PlayerNetId                    (Const, Parm)
// class UTexture2D*              Avatar                         (Parm)

void UOnlineSubsystemSteamworks::STATIC_OnReadOnlineAvatarComplete(const struct FUniqueNetId& PlayerNetId, class UTexture2D* Avatar)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadOnlineAvatarComplete"));

	UOnlineSubsystemSteamworks_OnReadOnlineAvatarComplete_Params params;
	params.PlayerNetId = PlayerNetId;
	params.Avatar = Avatar;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomPlayersUI
// (Iterator, PreOperator, Simulated, Event, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FUniqueNetId>    Players                        (Const, Parm, OutParm, NeedCtorLink)
// struct FString                 Title                          (Parm, NeedCtorLink)
// struct FString                 Description                    (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ShowCustomPlayersUI(unsigned char LocalUserNum, const struct FString& Title, const struct FString& Description, TArray<struct FUniqueNetId>* Players)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomPlayersUI"));

	UOnlineSubsystemSteamworks_ShowCustomPlayersUI_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Title = Title;
	params.Description = Description;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Players != nullptr)
		*Players = params.Players;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetAchievements
// (Iterator, PreOperator, Singular, Simulated, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FAchievementDetails> Achievements                   (Parm, OutParm, NeedCtorLink)
// int                            TitleId                        (OptionalParm, Parm)
// TEnumAsByte<EOnlineEnumerationReadState> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EOnlineEnumerationReadState> UOnlineSubsystemSteamworks::STATIC_GetAchievements(unsigned char LocalUserNum, int TitleId, TArray<struct FAchievementDetails>* Achievements)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetAchievements"));

	UOnlineSubsystemSteamworks_GetAchievements_Params params;
	params.LocalUserNum = LocalUserNum;
	params.TitleId = TitleId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Achievements != nullptr)
		*Achievements = params.Achievements;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadAchievementsCompleteDelegate
// (Iterator, Latent, Singular, NetReliable, Simulated, Exec, Native, Event, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadAchievementsCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadAchievementsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadAchievementsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadAchievementsCompleteDelegate"));

	UOnlineSubsystemSteamworks_ClearReadAchievementsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadAchievementsCompleteDelegate = ReadAchievementsCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadAchievementsCompleteDelegate
// (Final, Iterator, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadAchievementsCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadAchievementsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadAchievementsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadAchievementsCompleteDelegate"));

	UOnlineSubsystemSteamworks_AddReadAchievementsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadAchievementsCompleteDelegate = ReadAchievementsCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadAchievementsComplete
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// int                            TitleId                        (Parm)

void UOnlineSubsystemSteamworks::STATIC_OnReadAchievementsComplete(int TitleId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadAchievementsComplete"));

	UOnlineSubsystemSteamworks_OnReadAchievementsComplete_Params params;
	params.TitleId = TitleId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadAchievements
// (Final, Defined, Iterator, Latent, PreOperator, Simulated, Exec, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            TitleId                        (OptionalParm, Parm)
// bool                           bShouldReadText                (OptionalParm, Parm)
// bool                           bShouldReadImages              (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ReadAchievements(unsigned char LocalUserNum, int TitleId, bool bShouldReadText, bool bShouldReadImages)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadAchievements"));

	UOnlineSubsystemSteamworks_ReadAchievements_Params params;
	params.LocalUserNum = LocalUserNum;
	params.TitleId = TitleId;
	params.bShouldReadText = bShouldReadText;
	params.bShouldReadImages = bShouldReadImages;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowPlayersUI
// (Defined, PreOperator, Singular, Simulated, Event, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ShowPlayersUI(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowPlayersUI"));

	UOnlineSubsystemSteamworks_ShowPlayersUI_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsInviteUI
// (Iterator, Latent, PreOperator, Simulated, Event, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ShowFriendsInviteUI(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsInviteUI"));

	UOnlineSubsystemSteamworks_ShowFriendsInviteUI_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsUI
// (Final, Iterator, Latent, PreOperator, Simulated, Event, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ShowFriendsUI(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsUI"));

	UOnlineSubsystemSteamworks_ShowFriendsUI_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearProfileDataChangedDelegate
// (Final, Iterator, Singular, NetReliable, Simulated, Exec, Native, Event, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ProfileDataChangedDelegate     (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearProfileDataChangedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ProfileDataChangedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearProfileDataChangedDelegate"));

	UOnlineSubsystemSteamworks_ClearProfileDataChangedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ProfileDataChangedDelegate = ProfileDataChangedDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddProfileDataChangedDelegate
// (Defined, Iterator, Latent, Singular, Net, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ProfileDataChangedDelegate     (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddProfileDataChangedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ProfileDataChangedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddProfileDataChangedDelegate"));

	UOnlineSubsystemSteamworks_AddProfileDataChangedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ProfileDataChangedDelegate = ProfileDataChangedDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnProfileDataChanged
// (Final, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Native, Event, Static)

void UOnlineSubsystemSteamworks::STATIC_OnProfileDataChanged()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnProfileDataChanged"));

	UOnlineSubsystemSteamworks_OnProfileDataChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockGamerPicture
// (Final, Defined, Latent, PreOperator, Simulated, Exec, Native, Event, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            PictureId                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::UnlockGamerPicture(unsigned char LocalUserNum, int PictureId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockGamerPicture"));

	UOnlineSubsystemSteamworks_UnlockGamerPicture_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PictureId = PictureId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnlockAchievementCompleteDelegate
// (Final, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         UnlockAchievementCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearUnlockAchievementCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& UnlockAchievementCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnlockAchievementCompleteDelegate"));

	UOnlineSubsystemSteamworks_ClearUnlockAchievementCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.UnlockAchievementCompleteDelegate = UnlockAchievementCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnlockAchievementCompleteDelegate
// (Final, Defined, Iterator, PreOperator, Singular, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         UnlockAchievementCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddUnlockAchievementCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& UnlockAchievementCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnlockAchievementCompleteDelegate"));

	UOnlineSubsystemSteamworks_AddUnlockAchievementCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.UnlockAchievementCompleteDelegate = UnlockAchievementCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnlockAchievementComplete
// (Defined, PreOperator, Exec, Native, Event, Static)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemSteamworks::STATIC_OnUnlockAchievementComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnlockAchievementComplete"));

	UOnlineSubsystemSteamworks_OnUnlockAchievementComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockAchievement
// (Latent, PreOperator, Simulated, Exec, Native, Event, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            AchievementId                  (Parm)
// float                          PercentComplete                (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::UnlockAchievement(unsigned char LocalUserNum, int AchievementId, float PercentComplete)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockAchievement"));

	UOnlineSubsystemSteamworks_UnlockAchievement_Params params;
	params.LocalUserNum = LocalUserNum;
	params.AchievementId = AchievementId;
	params.PercentComplete = PercentComplete;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsDeviceValid
// (Final, Defined, Iterator, Singular, NetReliable, Exec, Operator, Static)
// Parameters:
// int                            DeviceID                       (Parm)
// int                            SizeNeeded                     (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::STATIC_IsDeviceValid(int DeviceID, int SizeNeeded)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsDeviceValid"));

	UOnlineSubsystemSteamworks_IsDeviceValid_Params params;
	params.DeviceID = DeviceID;
	params.SizeNeeded = SizeNeeded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetDeviceSelectionResults
// (Latent, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 DeviceName                     (Parm, OutParm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOnlineSubsystemSteamworks::STATIC_GetDeviceSelectionResults(unsigned char LocalUserNum, struct FString* DeviceName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetDeviceSelectionResults"));

	UOnlineSubsystemSteamworks_GetDeviceSelectionResults_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DeviceName != nullptr)
		*DeviceName = params.DeviceName;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDeviceSelectionDoneDelegate
// (Iterator, Latent, PreOperator, Net, Simulated, Exec, Native, Event, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         DeviceDelegate                 (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearDeviceSelectionDoneDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& DeviceDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDeviceSelectionDoneDelegate"));

	UOnlineSubsystemSteamworks_ClearDeviceSelectionDoneDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.DeviceDelegate = DeviceDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDeviceSelectionDoneDelegate
// (Defined, Iterator, Latent, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         DeviceDelegate                 (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddDeviceSelectionDoneDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& DeviceDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDeviceSelectionDoneDelegate"));

	UOnlineSubsystemSteamworks_AddDeviceSelectionDoneDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.DeviceDelegate = DeviceDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDeviceSelectionComplete
// (Defined, Singular, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemSteamworks::STATIC_OnDeviceSelectionComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDeviceSelectionComplete"));

	UOnlineSubsystemSteamworks_OnDeviceSelectionComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowDeviceSelectionUI
// (Latent, PreOperator, Simulated, Event, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            SizeNeeded                     (Parm)
// bool                           bManageStorage                 (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ShowDeviceSelectionUI(unsigned char LocalUserNum, int SizeNeeded, bool bManageStorage)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowDeviceSelectionUI"));

	UOnlineSubsystemSteamworks_ShowDeviceSelectionUI_Params params;
	params.LocalUserNum = LocalUserNum;
	params.SizeNeeded = SizeNeeded;
	params.bManageStorage = bManageStorage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowMembershipMarketplaceUI
// (Defined, Latent, Singular, Simulated, Event, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ShowMembershipMarketplaceUI(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowMembershipMarketplaceUI"));

	UOnlineSubsystemSteamworks_ShowMembershipMarketplaceUI_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowContentMarketplaceUI
// (Final, Defined, Iterator, Latent, Simulated, Event, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            ParentProductType              (Parm)
// int                            RequestedProductTypes          (Parm)
// struct FString                 ParentProductId                (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ShowContentMarketplaceUI(unsigned char LocalUserNum, int ParentProductType, int RequestedProductTypes, const struct FString& ParentProductId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowContentMarketplaceUI"));

	UOnlineSubsystemSteamworks_ShowContentMarketplaceUI_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ParentProductType = ParentProductType;
	params.RequestedProductTypes = RequestedProductTypes;
	params.ParentProductId = ParentProductId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearContentPurchaseResponse
// (Final, Defined, Latent, Net, Simulated, Exec, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         ResponseDelegate               (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearContentPurchaseResponse(const struct FScriptDelegate& ResponseDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearContentPurchaseResponse"));

	UOnlineSubsystemSteamworks_ClearContentPurchaseResponse_Params params;
	params.ResponseDelegate = ResponseDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddContentPurchaseResponse
// (Defined, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// struct FScriptDelegate         ResponseDelegate               (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddContentPurchaseResponse(const struct FScriptDelegate& ResponseDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddContentPurchaseResponse"));

	UOnlineSubsystemSteamworks_AddContentPurchaseResponse_Params params;
	params.ResponseDelegate = ResponseDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnContentPurchaseResponse
// (Final, Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// bool                           bAuthorized                    (Parm)
// struct FQWord                  qwOrderId                      (Parm)

void UOnlineSubsystemSteamworks::STATIC_OnContentPurchaseResponse(bool bAuthorized, const struct FQWord& qwOrderId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnContentPurchaseResponse"));

	UOnlineSubsystemSteamworks_OnContentPurchaseResponse_Params params;
	params.bAuthorized = bAuthorized;
	params.qwOrderId = qwOrderId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShowContentPurchaseUI
// (Defined, Latent, PreOperator, Net, NetReliable, Simulated, Exec, Event, HasOptionalParms)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::CanShowContentPurchaseUI()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShowContentPurchaseUI"));

	UOnlineSubsystemSteamworks_CanShowContentPurchaseUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowInviteUI
// (Final, Iterator, Singular, Simulated, Event, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 InviteText                     (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ShowInviteUI(unsigned char LocalUserNum, const struct FString& InviteText)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowInviteUI"));

	UOnlineSubsystemSteamworks_ShowInviteUI_Params params;
	params.LocalUserNum = LocalUserNum;
	params.InviteText = InviteText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowAchievementsUI
// (Final, Defined, Latent, Simulated, Event, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ShowAchievementsUI(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowAchievementsUI"));

	UOnlineSubsystemSteamworks_ShowAchievementsUI_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowMessagesUI
// (Final, Defined, Latent, Singular, Simulated, Event, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ShowMessagesUI(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowMessagesUI"));

	UOnlineSubsystemSteamworks_ShowMessagesUI_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowGamerCardUI
// (Defined, Iterator, Latent, PreOperator, Simulated, Event, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ShowGamerCardUI(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowGamerCardUI"));

	UOnlineSubsystemSteamworks_ShowGamerCardUI_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFeedbackUI
// (Final, Latent, PreOperator, Simulated, Event, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ShowFeedbackUI(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFeedbackUI"));

	UOnlineSubsystemSteamworks_ShowFeedbackUI_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteMessage
// (PreOperator, Singular, Net, Native, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            MessageIndex                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::STATIC_DeleteMessage(unsigned char LocalUserNum, int MessageIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteMessage"));

	UOnlineSubsystemSteamworks_DeleteMessage_Params params;
	params.LocalUserNum = LocalUserNum;
	params.MessageIndex = MessageIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnmuteAll
// (Singular, Simulated, Exec, Native, Event, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::UnmuteAll(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnmuteAll"));

	UOnlineSubsystemSteamworks_UnmuteAll_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MuteAll
// (Iterator, PreOperator, Singular, Simulated, Event, Operator, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           bAllowFriends                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::STATIC_MuteAll(unsigned char LocalUserNum, bool bAllowFriends)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MuteAll"));

	UOnlineSubsystemSteamworks_MuteAll_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAllowFriends = bAllowFriends;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CalcAggregateSkill
// (PreOperator, Singular, Net, NetReliable, Simulated, Native, Event, Operator)
// Parameters:
// TArray<struct FDouble>         Mus                            (Parm, NeedCtorLink)
// TArray<struct FDouble>         Sigmas                         (Parm, NeedCtorLink)
// struct FDouble                 OutAggregateMu                 (Parm, OutParm)
// struct FDouble                 OutAggregateSigma              (Parm, OutParm)

void UOnlineSubsystemSteamworks::CalcAggregateSkill(TArray<struct FDouble> Mus, TArray<struct FDouble> Sigmas, struct FDouble* OutAggregateMu, struct FDouble* OutAggregateSigma)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CalcAggregateSkill"));

	UOnlineSubsystemSteamworks_CalcAggregateSkill_Params params;
	params.Mus = Mus;
	params.Sigmas = Sigmas;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAggregateMu != nullptr)
		*OutAggregateMu = params.OutAggregateMu;
	if (OutAggregateSigma != nullptr)
		*OutAggregateSigma = params.OutAggregateSigma;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterStatGuid
// (Final, Defined, Latent, Net, NetReliable, Simulated, Exec, HasOptionalParms)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Parm)
// struct FString                 ClientStatGuid                 (Const, Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::RegisterStatGuid(const struct FUniqueNetId& PlayerID, struct FString* ClientStatGuid)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterStatGuid"));

	UOnlineSubsystemSteamworks_RegisterStatGuid_Params params;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClientStatGuid != nullptr)
		*ClientStatGuid = params.ClientStatGuid;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetClientStatGuid
// (Final, Iterator, Latent, PreOperator, Singular, Net, Simulated, Native, Event, Static)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlineSubsystemSteamworks::STATIC_GetClientStatGuid()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetClientStatGuid"));

	UOnlineSubsystemSteamworks_GetClientStatGuid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRegisterHostStatGuidCompleteDelegateDelegate
// (Final, Defined, Latent, Net, NetReliable, Simulated, Exec, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         RegisterHostStatGuidCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearRegisterHostStatGuidCompleteDelegateDelegate(const struct FScriptDelegate& RegisterHostStatGuidCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRegisterHostStatGuidCompleteDelegateDelegate"));

	UOnlineSubsystemSteamworks_ClearRegisterHostStatGuidCompleteDelegateDelegate_Params params;
	params.RegisterHostStatGuidCompleteDelegate = RegisterHostStatGuidCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRegisterHostStatGuidCompleteDelegate
// (Defined, PreOperator, Operator)
// Parameters:
// struct FScriptDelegate         RegisterHostStatGuidCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddRegisterHostStatGuidCompleteDelegate(const struct FScriptDelegate& RegisterHostStatGuidCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRegisterHostStatGuidCompleteDelegate"));

	UOnlineSubsystemSteamworks_AddRegisterHostStatGuidCompleteDelegate_Params params;
	params.RegisterHostStatGuidCompleteDelegate = RegisterHostStatGuidCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRegisterHostStatGuidComplete
// (Latent, Exec, Native, Event, Static)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemSteamworks::STATIC_OnRegisterHostStatGuidComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRegisterHostStatGuidComplete"));

	UOnlineSubsystemSteamworks_OnRegisterHostStatGuidComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterHostStatGuid
// (Defined, Iterator, Latent, PreOperator, Singular, NetReliable, Simulated, Exec, HasOptionalParms)
// Parameters:
// struct FString                 HostStatGuid                   (Const, Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::RegisterHostStatGuid(struct FString* HostStatGuid)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterHostStatGuid"));

	UOnlineSubsystemSteamworks_RegisterHostStatGuid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HostStatGuid != nullptr)
		*HostStatGuid = params.HostStatGuid;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetHostStatGuid
// (Final, Iterator, Exec, Native, Event, Static)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlineSubsystemSteamworks::STATIC_GetHostStatGuid()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetHostStatGuid"));

	UOnlineSubsystemSteamworks_GetHostStatGuid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendMessageReceivedDelegate
// (Defined, Iterator, Latent, Singular, Net, Simulated, Exec, Native, Event, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         MessageDelegate                (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearFriendMessageReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& MessageDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendMessageReceivedDelegate"));

	UOnlineSubsystemSteamworks_ClearFriendMessageReceivedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.MessageDelegate = MessageDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendMessageReceivedDelegate
// (Final, Singular, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         MessageDelegate                (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddFriendMessageReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& MessageDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendMessageReceivedDelegate"));

	UOnlineSubsystemSteamworks_AddFriendMessageReceivedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.MessageDelegate = MessageDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendMessageReceived
// (Latent, Singular, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            SendingPlayer                  (Parm)
// struct FString                 SendingNick                    (Parm, NeedCtorLink)
// struct FString                 Message                        (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::STATIC_OnFriendMessageReceived(unsigned char LocalUserNum, const struct FUniqueNetId& SendingPlayer, const struct FString& SendingNick, const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendMessageReceived"));

	UOnlineSubsystemSteamworks_OnFriendMessageReceived_Params params;
	params.LocalUserNum = LocalUserNum;
	params.SendingPlayer = SendingPlayer;
	params.SendingNick = SendingNick;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendMessages
// (Final, Defined, Latent, Singular, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FOnlineFriendMessage> FriendMessages                 (Parm, OutParm, NeedCtorLink)

void UOnlineSubsystemSteamworks::STATIC_GetFriendMessages(unsigned char LocalUserNum, TArray<struct FOnlineFriendMessage>* FriendMessages)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendMessages"));

	UOnlineSubsystemSteamworks_GetFriendMessages_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FriendMessages != nullptr)
		*FriendMessages = params.FriendMessages;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearJoinFriendGameCompleteDelegate
// (Defined, Latent, PreOperator, Singular, Net, Simulated, Exec, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         JoinFriendGameCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearJoinFriendGameCompleteDelegate(const struct FScriptDelegate& JoinFriendGameCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearJoinFriendGameCompleteDelegate"));

	UOnlineSubsystemSteamworks_ClearJoinFriendGameCompleteDelegate_Params params;
	params.JoinFriendGameCompleteDelegate = JoinFriendGameCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddJoinFriendGameCompleteDelegate
// (Defined, Iterator, Latent, PreOperator, Singular, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// struct FScriptDelegate         JoinFriendGameCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddJoinFriendGameCompleteDelegate(const struct FScriptDelegate& JoinFriendGameCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddJoinFriendGameCompleteDelegate"));

	UOnlineSubsystemSteamworks_AddJoinFriendGameCompleteDelegate_Params params;
	params.JoinFriendGameCompleteDelegate = JoinFriendGameCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnJoinFriendGameComplete
// (Final, Defined, Latent, Singular, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemSteamworks::STATIC_OnJoinFriendGameComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnJoinFriendGameComplete"));

	UOnlineSubsystemSteamworks_OnJoinFriendGameComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.JoinFriendGame
// (Defined, Latent, Singular, Simulated, Exec, Operator, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            Friend                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::STATIC_JoinFriendGame(unsigned char LocalUserNum, const struct FUniqueNetId& Friend)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.JoinFriendGame"));

	UOnlineSubsystemSteamworks_JoinFriendGame_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Friend = Friend;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReceivedGameInviteDelegate
// (Defined, Iterator, Net, NetReliable, Simulated, Exec, Native, Event, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReceivedGameInviteDelegate     (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReceivedGameInviteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReceivedGameInviteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReceivedGameInviteDelegate"));

	UOnlineSubsystemSteamworks_ClearReceivedGameInviteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReceivedGameInviteDelegate = ReceivedGameInviteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReceivedGameInviteDelegate
// (Final, Defined, Iterator, Latent, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReceivedGameInviteDelegate     (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReceivedGameInviteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReceivedGameInviteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReceivedGameInviteDelegate"));

	UOnlineSubsystemSteamworks_AddReceivedGameInviteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReceivedGameInviteDelegate = ReceivedGameInviteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReceivedGameInvite
// (Defined, Iterator, Exec, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 InviterName                    (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::STATIC_OnReceivedGameInvite(unsigned char LocalUserNum, const struct FString& InviterName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReceivedGameInvite"));

	UOnlineSubsystemSteamworks_OnReceivedGameInvite_Params params;
	params.LocalUserNum = LocalUserNum;
	params.InviterName = InviterName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendGameInviteToFriends
// (Final, Iterator, NetReliable, Exec, Native, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FName                   SessionName                    (Parm)
// TArray<struct FUniqueNetId>    Friends                        (Parm, NeedCtorLink)
// struct FString                 Text                           (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::SendGameInviteToFriends(unsigned char LocalUserNum, const struct FName& SessionName, TArray<struct FUniqueNetId> Friends, const struct FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendGameInviteToFriends"));

	UOnlineSubsystemSteamworks_SendGameInviteToFriends_Params params;
	params.LocalUserNum = LocalUserNum;
	params.SessionName = SessionName;
	params.Friends = Friends;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendGameInviteToFriend
// (Iterator, NetReliable, Exec, Native, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FName                   SessionName                    (Parm)
// struct FUniqueNetId            Friend                         (Parm)
// struct FString                 Text                           (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::SendGameInviteToFriend(unsigned char LocalUserNum, const struct FName& SessionName, const struct FUniqueNetId& Friend, const struct FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendGameInviteToFriend"));

	UOnlineSubsystemSteamworks_SendGameInviteToFriend_Params params;
	params.LocalUserNum = LocalUserNum;
	params.SessionName = SessionName;
	params.Friend = Friend;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendMessageToFriend
// (Final, Iterator, Latent, NetReliable, Exec, Native, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            Friend                         (Parm)
// struct FString                 Message                        (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::SendMessageToFriend(unsigned char LocalUserNum, const struct FUniqueNetId& Friend, const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendMessageToFriend"));

	UOnlineSubsystemSteamworks_SendMessageToFriend_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Friend = Friend;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendInviteReceivedDelegate
// (Final, Iterator, Latent, Singular, Net, Simulated, Exec, Native, Event, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         InviteDelegate                 (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearFriendInviteReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& InviteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendInviteReceivedDelegate"));

	UOnlineSubsystemSteamworks_ClearFriendInviteReceivedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.InviteDelegate = InviteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendInviteReceivedDelegate
// (Singular, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         InviteDelegate                 (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddFriendInviteReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& InviteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendInviteReceivedDelegate"));

	UOnlineSubsystemSteamworks_AddFriendInviteReceivedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.InviteDelegate = InviteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendInviteReceived
// (Final, Defined, Iterator, Singular, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            RequestingPlayer               (Parm)
// struct FString                 RequestingNick                 (Parm, NeedCtorLink)
// struct FString                 Message                        (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::STATIC_OnFriendInviteReceived(unsigned char LocalUserNum, const struct FUniqueNetId& RequestingPlayer, const struct FString& RequestingNick, const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendInviteReceived"));

	UOnlineSubsystemSteamworks_OnFriendInviteReceived_Params params;
	params.LocalUserNum = LocalUserNum;
	params.RequestingPlayer = RequestingPlayer;
	params.RequestingNick = RequestingNick;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DenyFriendInvite
// (NetReliable, Native, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            RequestingPlayer               (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::STATIC_DenyFriendInvite(unsigned char LocalUserNum, const struct FUniqueNetId& RequestingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DenyFriendInvite"));

	UOnlineSubsystemSteamworks_DenyFriendInvite_Params params;
	params.LocalUserNum = LocalUserNum;
	params.RequestingPlayer = RequestingPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AcceptFriendInvite
// (Defined, Iterator, Latent, Singular, Net, NetReliable, Exec, Native, Event)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            RequestingPlayer               (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::AcceptFriendInvite(unsigned char LocalUserNum, const struct FUniqueNetId& RequestingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AcceptFriendInvite"));

	UOnlineSubsystemSteamworks_AcceptFriendInvite_Params params;
	params.LocalUserNum = LocalUserNum;
	params.RequestingPlayer = RequestingPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RemoveFriend
// (Defined, PreOperator, Native, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            FormerFriend                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::RemoveFriend(unsigned char LocalUserNum, const struct FUniqueNetId& FormerFriend)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RemoveFriend"));

	UOnlineSubsystemSteamworks_RemoveFriend_Params params;
	params.LocalUserNum = LocalUserNum;
	params.FormerFriend = FormerFriend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAddFriendByNameCompleteDelegate
// (Iterator, Latent, Singular, Simulated, Exec, Native, Event, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         FriendDelegate                 (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearAddFriendByNameCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAddFriendByNameCompleteDelegate"));

	UOnlineSubsystemSteamworks_ClearAddFriendByNameCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.FriendDelegate = FriendDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddAddFriendByNameCompleteDelegate
// (Iterator, Latent, Singular, Net, Simulated, Exec, Native, Event)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         FriendDelegate                 (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddAddFriendByNameCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddAddFriendByNameCompleteDelegate"));

	UOnlineSubsystemSteamworks_AddAddFriendByNameCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.FriendDelegate = FriendDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnAddFriendByNameComplete
// (Final, Defined, Latent, PreOperator, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemSteamworks::STATIC_OnAddFriendByNameComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnAddFriendByNameComplete"));

	UOnlineSubsystemSteamworks_OnAddFriendByNameComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendByName
// (Final, Defined, Iterator, Latent, PreOperator, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 FriendName                     (Parm, NeedCtorLink)
// struct FString                 Message                        (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::AddFriendByName(unsigned char LocalUserNum, const struct FString& FriendName, const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendByName"));

	UOnlineSubsystemSteamworks_AddFriendByName_Params params;
	params.LocalUserNum = LocalUserNum;
	params.FriendName = FriendName;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriend
// (Defined, Iterator, Latent, PreOperator, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            NewFriend                      (Parm)
// struct FString                 Message                        (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::AddFriend(unsigned char LocalUserNum, const struct FUniqueNetId& NewFriend, const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriend"));

	UOnlineSubsystemSteamworks_AddFriend_Params params;
	params.LocalUserNum = LocalUserNum;
	params.NewFriend = NewFriend;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetKeyboardInputResults
// (Defined, Iterator, PreOperator, Exec, Native, Event, Static)
// Parameters:
// unsigned char                  bWasCanceled                   (Parm, OutParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlineSubsystemSteamworks::STATIC_GetKeyboardInputResults(unsigned char* bWasCanceled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetKeyboardInputResults"));

	UOnlineSubsystemSteamworks_GetKeyboardInputResults_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bWasCanceled != nullptr)
		*bWasCanceled = params.bWasCanceled;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearKeyboardInputDoneDelegate
// (Final, Iterator, Latent, PreOperator, Singular, Net, Simulated, Exec, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         InputDelegate                  (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearKeyboardInputDoneDelegate(const struct FScriptDelegate& InputDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearKeyboardInputDoneDelegate"));

	UOnlineSubsystemSteamworks_ClearKeyboardInputDoneDelegate_Params params;
	params.InputDelegate = InputDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddKeyboardInputDoneDelegate
// (Final, Net, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// struct FScriptDelegate         InputDelegate                  (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddKeyboardInputDoneDelegate(const struct FScriptDelegate& InputDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddKeyboardInputDoneDelegate"));

	UOnlineSubsystemSteamworks_AddKeyboardInputDoneDelegate_Params params;
	params.InputDelegate = InputDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnKeyboardInputComplete
// (Iterator, Latent, Singular, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemSteamworks::STATIC_OnKeyboardInputComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnKeyboardInputComplete"));

	UOnlineSubsystemSteamworks_OnKeyboardInputComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowKeyboardUI
// (Final, Iterator, Latent, Native, Event, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 TitleText                      (Parm, NeedCtorLink)
// struct FString                 DescriptionText                (Parm, NeedCtorLink)
// bool                           bIsPassword                    (OptionalParm, Parm)
// bool                           bShouldValidate                (OptionalParm, Parm)
// struct FString                 DefaultText                    (OptionalParm, Parm, NeedCtorLink)
// int                            MaxResultLength                (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ShowKeyboardUI(unsigned char LocalUserNum, const struct FString& TitleText, const struct FString& DescriptionText, bool bIsPassword, bool bShouldValidate, const struct FString& DefaultText, int MaxResultLength)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowKeyboardUI"));

	UOnlineSubsystemSteamworks_ShowKeyboardUI_Params params;
	params.LocalUserNum = LocalUserNum;
	params.TitleText = TitleText;
	params.DescriptionText = DescriptionText;
	params.bIsPassword = bIsPassword;
	params.bShouldValidate = bShouldValidate;
	params.DefaultText = DefaultText;
	params.MaxResultLength = MaxResultLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetOnlineStatus
// (Iterator, Latent, PreOperator, Event, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 StatusString                   (Parm, NeedCtorLink)
// bool                           PlayerActive                   (OptionalParm, Parm)

void UOnlineSubsystemSteamworks::SetOnlineStatus(unsigned char LocalUserNum, const struct FString& StatusString, bool PlayerActive)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetOnlineStatus"));

	UOnlineSubsystemSteamworks_SetOnlineStatus_Params params;
	params.LocalUserNum = LocalUserNum;
	params.StatusString = StatusString;
	params.PlayerActive = PlayerActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLocalAccountNames
// (Defined, Iterator, Latent, PreOperator, Exec, Native, Event, Static)
// Parameters:
// TArray<struct FString>         Accounts                       (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::STATIC_GetLocalAccountNames(TArray<struct FString>* Accounts)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLocalAccountNames"));

	UOnlineSubsystemSteamworks_GetLocalAccountNames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Accounts != nullptr)
		*Accounts = params.Accounts;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteLocalAccount
// (Final, Defined, Iterator, Latent, Singular, Net, Native, Static)
// Parameters:
// struct FString                 UserName                       (Parm, NeedCtorLink)
// struct FString                 Password                       (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::STATIC_DeleteLocalAccount(const struct FString& UserName, const struct FString& Password)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteLocalAccount"));

	UOnlineSubsystemSteamworks_DeleteLocalAccount_Params params;
	params.UserName = UserName;
	params.Password = Password;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RenameLocalAccount
// (Final, Singular, Native, HasOptionalParms)
// Parameters:
// struct FString                 NewUserName                    (Parm, NeedCtorLink)
// struct FString                 OldUserName                    (Parm, NeedCtorLink)
// struct FString                 Password                       (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::RenameLocalAccount(const struct FString& NewUserName, const struct FString& OldUserName, const struct FString& Password)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RenameLocalAccount"));

	UOnlineSubsystemSteamworks_RenameLocalAccount_Params params;
	params.NewUserName = NewUserName;
	params.OldUserName = OldUserName;
	params.Password = Password;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateLocalAccount
// (Final, Latent, Exec, Static)
// Parameters:
// struct FString                 UserName                       (Parm, NeedCtorLink)
// struct FString                 Password                       (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::STATIC_CreateLocalAccount(const struct FString& UserName, const struct FString& Password)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateLocalAccount"));

	UOnlineSubsystemSteamworks_CreateLocalAccount_Params params;
	params.UserName = UserName;
	params.Password = Password;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCreateOnlineAccountCompletedDelegate
// (Final, Iterator, Latent, Net, Simulated, Exec, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         AccountCreateDelegate          (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearCreateOnlineAccountCompletedDelegate(const struct FScriptDelegate& AccountCreateDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCreateOnlineAccountCompletedDelegate"));

	UOnlineSubsystemSteamworks_ClearCreateOnlineAccountCompletedDelegate_Params params;
	params.AccountCreateDelegate = AccountCreateDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddCreateOnlineAccountCompletedDelegate
// (Final, Iterator, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// struct FScriptDelegate         AccountCreateDelegate          (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddCreateOnlineAccountCompletedDelegate(const struct FScriptDelegate& AccountCreateDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddCreateOnlineAccountCompletedDelegate"));

	UOnlineSubsystemSteamworks_AddCreateOnlineAccountCompletedDelegate_Params params;
	params.AccountCreateDelegate = AccountCreateDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnCreateOnlineAccountCompleted
// (Final, Defined, Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// TEnumAsByte<EOnlineAccountCreateStatus> ErrorStatus                    (Parm)

void UOnlineSubsystemSteamworks::STATIC_OnCreateOnlineAccountCompleted(TEnumAsByte<EOnlineAccountCreateStatus> ErrorStatus)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnCreateOnlineAccountCompleted"));

	UOnlineSubsystemSteamworks_OnCreateOnlineAccountCompleted_Params params;
	params.ErrorStatus = ErrorStatus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateOnlineAccount
// (Final, Defined, Latent, Exec, Static)
// Parameters:
// struct FString                 UserName                       (Parm, NeedCtorLink)
// struct FString                 Password                       (Parm, NeedCtorLink)
// struct FString                 EmailAddress                   (Parm, NeedCtorLink)
// struct FString                 ProductKey                     (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::STATIC_CreateOnlineAccount(const struct FString& UserName, const struct FString& Password, const struct FString& EmailAddress, const struct FString& ProductKey)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateOnlineAccount"));

	UOnlineSubsystemSteamworks_CreateOnlineAccount_Params params;
	params.UserName = UserName;
	params.Password = Password;
	params.EmailAddress = EmailAddress;
	params.ProductKey = ProductKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileState
// (Final, Defined, Latent, PreOperator, Simulated, Exec, Native, Event, Static)
// Parameters:
// struct FString                 Filename                       (Parm, NeedCtorLink)
// TEnumAsByte<EOnlineEnumerationReadState> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EOnlineEnumerationReadState> UOnlineSubsystemSteamworks::STATIC_GetTitleFileState(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileState"));

	UOnlineSubsystemSteamworks_GetTitleFileState_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileContents
// (Latent, PreOperator, Simulated, Exec, Native, Event, Static)
// Parameters:
// struct FString                 Filename                       (Parm, NeedCtorLink)
// TArray<unsigned char>          FileContents                   (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::STATIC_GetTitleFileContents(const struct FString& Filename, TArray<unsigned char>* FileContents)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileContents"));

	UOnlineSubsystemSteamworks_GetTitleFileContents_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FileContents != nullptr)
		*FileContents = params.FileContents;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadTitleFileCompleteDelegate
// (Final, Defined, Net, NetReliable, Simulated, Exec, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         ReadTitleFileCompleteDelegate  (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadTitleFileCompleteDelegate(const struct FScriptDelegate& ReadTitleFileCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadTitleFileCompleteDelegate"));

	UOnlineSubsystemSteamworks_ClearReadTitleFileCompleteDelegate_Params params;
	params.ReadTitleFileCompleteDelegate = ReadTitleFileCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadTitleFileCompleteDelegate
// (Iterator, Latent, Operator)
// Parameters:
// struct FScriptDelegate         ReadTitleFileCompleteDelegate  (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadTitleFileCompleteDelegate(const struct FScriptDelegate& ReadTitleFileCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadTitleFileCompleteDelegate"));

	UOnlineSubsystemSteamworks_AddReadTitleFileCompleteDelegate_Params params;
	params.ReadTitleFileCompleteDelegate = ReadTitleFileCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadTitleFile
// (PreOperator, Net, Simulated, Exec, HasOptionalParms)
// Parameters:
// struct FString                 FileToRead                     (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ReadTitleFile(const struct FString& FileToRead)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadTitleFile"));

	UOnlineSubsystemSteamworks_ReadTitleFile_Params params;
	params.FileToRead = FileToRead;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadTitleFileComplete
// (Iterator, Exec, Native, Event, Static)
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// struct FString                 Filename                       (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::STATIC_OnReadTitleFileComplete(bool bWasSuccessful, const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadTitleFileComplete"));

	UOnlineSubsystemSteamworks_OnReadTitleFileComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearStorageDeviceChangeDelegate
// (Defined, Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Exec, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         StorageDeviceChangeDelegate    (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearStorageDeviceChangeDelegate(const struct FScriptDelegate& StorageDeviceChangeDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearStorageDeviceChangeDelegate"));

	UOnlineSubsystemSteamworks_ClearStorageDeviceChangeDelegate_Params params;
	params.StorageDeviceChangeDelegate = StorageDeviceChangeDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddStorageDeviceChangeDelegate
// (Defined, Iterator, Latent, Singular, Operator)
// Parameters:
// struct FScriptDelegate         StorageDeviceChangeDelegate    (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddStorageDeviceChangeDelegate(const struct FScriptDelegate& StorageDeviceChangeDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddStorageDeviceChangeDelegate"));

	UOnlineSubsystemSteamworks_AddStorageDeviceChangeDelegate_Params params;
	params.StorageDeviceChangeDelegate = StorageDeviceChangeDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnStorageDeviceChange
// (Final, Defined, Iterator, Latent, Exec, Native, Event, Static)

void UOnlineSubsystemSteamworks::STATIC_OnStorageDeviceChange()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnStorageDeviceChange"));

	UOnlineSubsystemSteamworks_OnStorageDeviceChange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLocale
// (Final, Defined, Iterator, Latent, PreOperator, Exec, Native, Event, Static)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOnlineSubsystemSteamworks::STATIC_GetLocale()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLocale"));

	UOnlineSubsystemSteamworks_GetLocale_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNATType
// (Final, Latent, PreOperator, NetReliable, Simulated, Native, HasOptionalParms)
// Parameters:
// TEnumAsByte<ENATType>          ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<ENATType> UOnlineSubsystemSteamworks::GetNATType()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNATType"));

	UOnlineSubsystemSteamworks_GetNATType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearConnectionStatusChangeDelegate
// (Final, Defined, Iterator, Net, Simulated, Exec, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         ConnectionStatusDelegate       (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearConnectionStatusChangeDelegate(const struct FScriptDelegate& ConnectionStatusDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearConnectionStatusChangeDelegate"));

	UOnlineSubsystemSteamworks_ClearConnectionStatusChangeDelegate_Params params;
	params.ConnectionStatusDelegate = ConnectionStatusDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddConnectionStatusChangeDelegate
// (Final, Iterator, Latent, PreOperator, Singular, Net, Simulated, Exec, Native, Event)
// Parameters:
// struct FScriptDelegate         ConnectionStatusDelegate       (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddConnectionStatusChangeDelegate(const struct FScriptDelegate& ConnectionStatusDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddConnectionStatusChangeDelegate"));

	UOnlineSubsystemSteamworks_AddConnectionStatusChangeDelegate_Params params;
	params.ConnectionStatusDelegate = ConnectionStatusDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnConnectionStatusChange
// (Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// TEnumAsByte<EOnlineServerConnectionStatus> ConnectionStatus               (Parm)

void UOnlineSubsystemSteamworks::STATIC_OnConnectionStatusChange(TEnumAsByte<EOnlineServerConnectionStatus> ConnectionStatus)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnConnectionStatusChange"));

	UOnlineSubsystemSteamworks_OnConnectionStatusChange_Params params;
	params.ConnectionStatus = ConnectionStatus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsControllerConnected
// (Defined, Iterator, Latent, PreOperator, NetReliable, Exec, Operator, Static)
// Parameters:
// int                            ControllerId                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::STATIC_IsControllerConnected(int ControllerId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsControllerConnected"));

	UOnlineSubsystemSteamworks_IsControllerConnected_Params params;
	params.ControllerId = ControllerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearControllerChangeDelegate
// (Iterator, Latent, Net, Simulated, Exec, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         ControllerChangeDelegate       (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearControllerChangeDelegate(const struct FScriptDelegate& ControllerChangeDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearControllerChangeDelegate"));

	UOnlineSubsystemSteamworks_ClearControllerChangeDelegate_Params params;
	params.ControllerChangeDelegate = ControllerChangeDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddControllerChangeDelegate
// (Final, Defined, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// struct FScriptDelegate         ControllerChangeDelegate       (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddControllerChangeDelegate(const struct FScriptDelegate& ControllerChangeDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddControllerChangeDelegate"));

	UOnlineSubsystemSteamworks_AddControllerChangeDelegate_Params params;
	params.ControllerChangeDelegate = ControllerChangeDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnControllerChange
// (Defined, Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// int                            ControllerId                   (Parm)
// bool                           bIsConnected                   (Parm)
// bool                           bPauseGame                     (Parm)

void UOnlineSubsystemSteamworks::STATIC_OnControllerChange(int ControllerId, bool bIsConnected, bool bPauseGame)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnControllerChange"));

	UOnlineSubsystemSteamworks_OnControllerChange_Params params;
	params.ControllerId = ControllerId;
	params.bIsConnected = bIsConnected;
	params.bPauseGame = bPauseGame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetNetworkNotificationPosition
// (Defined, Iterator, PreOperator, Event, HasOptionalParms)
// Parameters:
// TEnumAsByte<ENetworkNotificationPosition> NewPos                         (Parm)

void UOnlineSubsystemSteamworks::SetNetworkNotificationPosition(TEnumAsByte<ENetworkNotificationPosition> NewPos)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetNetworkNotificationPosition"));

	UOnlineSubsystemSteamworks_SetNetworkNotificationPosition_Params params;
	params.NewPos = NewPos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNetworkNotificationPosition
// (Defined, Net, Exec, Native, Event, Static)
// Parameters:
// TEnumAsByte<ENetworkNotificationPosition> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<ENetworkNotificationPosition> UOnlineSubsystemSteamworks::STATIC_GetNetworkNotificationPosition()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNetworkNotificationPosition"));

	UOnlineSubsystemSteamworks_GetNetworkNotificationPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearExternalUIChangeDelegate
// (Iterator, Singular, Net, Simulated, Exec, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         ExternalUIDelegate             (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearExternalUIChangeDelegate(const struct FScriptDelegate& ExternalUIDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearExternalUIChangeDelegate"));

	UOnlineSubsystemSteamworks_ClearExternalUIChangeDelegate_Params params;
	params.ExternalUIDelegate = ExternalUIDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddExternalUIChangeDelegate
// (Final, Iterator, PreOperator, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// struct FScriptDelegate         ExternalUIDelegate             (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddExternalUIChangeDelegate(const struct FScriptDelegate& ExternalUIDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddExternalUIChangeDelegate"));

	UOnlineSubsystemSteamworks_AddExternalUIChangeDelegate_Params params;
	params.ExternalUIDelegate = ExternalUIDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnExternalUIChange
// (Iterator, Singular, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// bool                           bIsOpening                     (Parm)

void UOnlineSubsystemSteamworks::STATIC_OnExternalUIChange(bool bIsOpening)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnExternalUIChange"));

	UOnlineSubsystemSteamworks_OnExternalUIChange_Params params;
	params.bIsOpening = bIsOpening;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLinkStatusChangeDelegate
// (NetReliable, Simulated, Exec, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         LinkStatusDelegate             (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearLinkStatusChangeDelegate(const struct FScriptDelegate& LinkStatusDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLinkStatusChangeDelegate"));

	UOnlineSubsystemSteamworks_ClearLinkStatusChangeDelegate_Params params;
	params.LinkStatusDelegate = LinkStatusDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLinkStatusChangeDelegate
// (Final, Defined, Net, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// struct FScriptDelegate         LinkStatusDelegate             (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddLinkStatusChangeDelegate(const struct FScriptDelegate& LinkStatusDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLinkStatusChangeDelegate"));

	UOnlineSubsystemSteamworks_AddLinkStatusChangeDelegate_Params params;
	params.LinkStatusDelegate = LinkStatusDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLinkStatusChange
// (Final, Iterator, Latent, Singular, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// bool                           bIsConnected                   (Parm)

void UOnlineSubsystemSteamworks::STATIC_OnLinkStatusChange(bool bIsConnected)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLinkStatusChange"));

	UOnlineSubsystemSteamworks_OnLinkStatusChange_Params params;
	params.bIsConnected = bIsConnected;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HasLinkConnection
// (Final, Iterator, PreOperator, Singular, NetReliable, Simulated, Native, HasOptionalParms)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::HasLinkConnection()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HasLinkConnection"));

	UOnlineSubsystemSteamworks_HasLinkConnection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNicknameFromIndex
// (Final, Defined, Iterator, PreOperator, Singular, Net, Simulated, Exec, Native, HasOptionalParms)
// Parameters:
// int                            UserIndex                      (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlineSubsystemSteamworks::GetPlayerNicknameFromIndex(int UserIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNicknameFromIndex"));

	UOnlineSubsystemSteamworks_GetPlayerNicknameFromIndex_Params params;
	params.UserIndex = UserIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteOnlinePlayerScores
// (Final, Iterator, NetReliable, Simulated, Operator, HasOptionalParms)
// Parameters:
// struct FName                   SessionName                    (Parm)
// int                            LeaderboardId                  (Parm)
// TArray<struct FOnlinePlayerScore> PlayerScores                   (Const, Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::WriteOnlinePlayerScores(const struct FName& SessionName, int LeaderboardId, TArray<struct FOnlinePlayerScore>* PlayerScores)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteOnlinePlayerScores"));

	UOnlineSubsystemSteamworks_WriteOnlinePlayerScores_Params params;
	params.SessionName = SessionName;
	params.LeaderboardId = LeaderboardId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerScores != nullptr)
		*PlayerScores = params.PlayerScores;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFlushOnlineStatsCompleteDelegate
// (Iterator, Latent, Singular, Net, Simulated, Exec, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         FlushOnlineStatsCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearFlushOnlineStatsCompleteDelegate(const struct FScriptDelegate& FlushOnlineStatsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFlushOnlineStatsCompleteDelegate"));

	UOnlineSubsystemSteamworks_ClearFlushOnlineStatsCompleteDelegate_Params params;
	params.FlushOnlineStatsCompleteDelegate = FlushOnlineStatsCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFlushOnlineStatsCompleteDelegate
// (Iterator, Latent, PreOperator, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// struct FScriptDelegate         FlushOnlineStatsCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddFlushOnlineStatsCompleteDelegate(const struct FScriptDelegate& FlushOnlineStatsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFlushOnlineStatsCompleteDelegate"));

	UOnlineSubsystemSteamworks_AddFlushOnlineStatsCompleteDelegate_Params params;
	params.FlushOnlineStatsCompleteDelegate = FlushOnlineStatsCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFlushOnlineStatsComplete
// (Defined, Iterator, Singular, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemSteamworks::STATIC_OnFlushOnlineStatsComplete(const struct FName& SessionName, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFlushOnlineStatsComplete"));

	UOnlineSubsystemSteamworks_OnFlushOnlineStatsComplete_Params params;
	params.SessionName = SessionName;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FlushOnlineStats
// (Final, Iterator, Latent, PreOperator, Singular, Simulated, Exec, Event, Static)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::STATIC_FlushOnlineStats(const struct FName& SessionName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FlushOnlineStats"));

	UOnlineSubsystemSteamworks_FlushOnlineStats_Params params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteOnlineStats
// (Defined, Iterator, NetReliable, Simulated, Operator, HasOptionalParms)
// Parameters:
// struct FName                   SessionName                    (Parm)
// struct FUniqueNetId            Player                         (Parm)
// class UOnlineStatsWrite*       StatsWrite                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::WriteOnlineStats(const struct FName& SessionName, const struct FUniqueNetId& Player, class UOnlineStatsWrite* StatsWrite)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteOnlineStats"));

	UOnlineSubsystemSteamworks_WriteOnlineStats_Params params;
	params.SessionName = SessionName;
	params.Player = Player;
	params.StatsWrite = StatsWrite;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FreeStats
// (Final, Iterator, Latent, PreOperator, Singular, Native, Event, Static)
// Parameters:
// class UOnlineStatsRead*        StatsRead                      (Parm)

void UOnlineSubsystemSteamworks::STATIC_FreeStats(class UOnlineStatsRead* StatsRead)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FreeStats"));

	UOnlineSubsystemSteamworks_FreeStats_Params params;
	params.StatsRead = StatsRead;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadOnlineStatsCompleteDelegate
// (Iterator, Latent, PreOperator, Singular, NetReliable, Simulated, Exec, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         ReadOnlineStatsCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadOnlineStatsCompleteDelegate(const struct FScriptDelegate& ReadOnlineStatsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadOnlineStatsCompleteDelegate"));

	UOnlineSubsystemSteamworks_ClearReadOnlineStatsCompleteDelegate_Params params;
	params.ReadOnlineStatsCompleteDelegate = ReadOnlineStatsCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadOnlineStatsCompleteDelegate
// (Final, Iterator, Operator)
// Parameters:
// struct FScriptDelegate         ReadOnlineStatsCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadOnlineStatsCompleteDelegate(const struct FScriptDelegate& ReadOnlineStatsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadOnlineStatsCompleteDelegate"));

	UOnlineSubsystemSteamworks_AddReadOnlineStatsCompleteDelegate_Params params;
	params.ReadOnlineStatsCompleteDelegate = ReadOnlineStatsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadOnlineStatsComplete
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemSteamworks::STATIC_OnReadOnlineStatsComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadOnlineStatsComplete"));

	UOnlineSubsystemSteamworks_OnReadOnlineStatsComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsByRankAroundPlayer
// (Defined, Iterator, Latent, PreOperator, Singular, Simulated, Exec, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class UOnlineStatsRead*        StatsRead                      (Parm)
// int                            NumRows                        (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ReadOnlineStatsByRankAroundPlayer(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, int NumRows)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsByRankAroundPlayer"));

	UOnlineSubsystemSteamworks_ReadOnlineStatsByRankAroundPlayer_Params params;
	params.LocalUserNum = LocalUserNum;
	params.StatsRead = StatsRead;
	params.NumRows = NumRows;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsByRank
// (Final, Iterator, Latent, PreOperator, Singular, Simulated, Exec, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class UOnlineStatsRead*        StatsRead                      (Parm)
// int                            StartIndex                     (OptionalParm, Parm)
// int                            NumToRead                      (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ReadOnlineStatsByRank(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, int StartIndex, int NumToRead)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsByRank"));

	UOnlineSubsystemSteamworks_ReadOnlineStatsByRank_Params params;
	params.LocalUserNum = LocalUserNum;
	params.StatsRead = StatsRead;
	params.StartIndex = StartIndex;
	params.NumToRead = NumToRead;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsForFriends
// (Iterator, Latent, Singular, NetReliable, Exec, Static, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class UOnlineStatsRead*        StatsRead                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::STATIC_ReadOnlineStatsForFriends(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsForFriends"));

	UOnlineSubsystemSteamworks_ReadOnlineStatsForFriends_Params params;
	params.LocalUserNum = LocalUserNum;
	params.StatsRead = StatsRead;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStats
// (Iterator, Latent, PreOperator, Singular, Simulated, Exec, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FUniqueNetId>    Players                        (Const, Parm, OutParm, NeedCtorLink)
// class UOnlineStatsRead*        StatsRead                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ReadOnlineStats(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, TArray<struct FUniqueNetId>* Players)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStats"));

	UOnlineSubsystemSteamworks_ReadOnlineStats_Params params;
	params.LocalUserNum = LocalUserNum;
	params.StatsRead = StatsRead;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Players != nullptr)
		*Players = params.Players;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetSpeechRecognitionObject
// (Final, Iterator, Latent, PreOperator, Singular, Net, Event, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class USpeechRecognition*      SpeechRecogObj                 (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::SetSpeechRecognitionObject(unsigned char LocalUserNum, class USpeechRecognition* SpeechRecogObj)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetSpeechRecognitionObject"));

	UOnlineSubsystemSteamworks_SetSpeechRecognitionObject_Params params;
	params.LocalUserNum = LocalUserNum;
	params.SpeechRecogObj = SpeechRecogObj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SelectVocabulary
// (Final, Iterator, PreOperator, Singular, Net, Exec, Native, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            VocabularyId                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::SelectVocabulary(unsigned char LocalUserNum, int VocabularyId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SelectVocabulary"));

	UOnlineSubsystemSteamworks_SelectVocabulary_Params params;
	params.LocalUserNum = LocalUserNum;
	params.VocabularyId = VocabularyId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRecognitionCompleteDelegate
// (Final, Latent, Net, NetReliable, Simulated, Exec, Native, Event, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         RecognitionDelegate            (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearRecognitionCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& RecognitionDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRecognitionCompleteDelegate"));

	UOnlineSubsystemSteamworks_ClearRecognitionCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.RecognitionDelegate = RecognitionDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRecognitionCompleteDelegate
// (PreOperator, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         RecognitionDelegate            (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddRecognitionCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& RecognitionDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRecognitionCompleteDelegate"));

	UOnlineSubsystemSteamworks_AddRecognitionCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.RecognitionDelegate = RecognitionDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRecognitionComplete
// (Final, Defined, Iterator, Exec, Native, Event, Static)

void UOnlineSubsystemSteamworks::STATIC_OnRecognitionComplete()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRecognitionComplete"));

	UOnlineSubsystemSteamworks_OnRecognitionComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetRecognitionResults
// (Defined, Iterator, PreOperator, Singular, NetReliable, Exec, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FSpeechRecognizedWord> Words                          (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::STATIC_GetRecognitionResults(unsigned char LocalUserNum, TArray<struct FSpeechRecognizedWord>* Words)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetRecognitionResults"));

	UOnlineSubsystemSteamworks_GetRecognitionResults_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Words != nullptr)
		*Words = params.Words;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StopSpeechRecognition
// (Iterator, Latent, Net, NetReliable, Simulated, Exec, Event, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::StopSpeechRecognition(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StopSpeechRecognition"));

	UOnlineSubsystemSteamworks_StopSpeechRecognition_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartSpeechRecognition
// (PreOperator, Net, Simulated, Exec, Event, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::StartSpeechRecognition(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartSpeechRecognition"));

	UOnlineSubsystemSteamworks_StartSpeechRecognition_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StopNetworkedVoice
// (Latent, Net, NetReliable, Simulated, Exec, Event, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)

void UOnlineSubsystemSteamworks::StopNetworkedVoice(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StopNetworkedVoice"));

	UOnlineSubsystemSteamworks_StopNetworkedVoice_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartNetworkedVoice
// (Iterator, Latent, PreOperator, Singular, Simulated, Exec, Event, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)

void UOnlineSubsystemSteamworks::StartNetworkedVoice(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartNetworkedVoice"));

	UOnlineSubsystemSteamworks_StartNetworkedVoice_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPlayerTalkingDelegate
// (Final, Iterator, Latent, PreOperator, NetReliable, Simulated, Exec, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         TalkerDelegate                 (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearPlayerTalkingDelegate(const struct FScriptDelegate& TalkerDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPlayerTalkingDelegate"));

	UOnlineSubsystemSteamworks_ClearPlayerTalkingDelegate_Params params;
	params.TalkerDelegate = TalkerDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPlayerTalkingDelegate
// (Iterator, Singular, Net, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// struct FScriptDelegate         TalkerDelegate                 (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddPlayerTalkingDelegate(const struct FScriptDelegate& TalkerDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPlayerTalkingDelegate"));

	UOnlineSubsystemSteamworks_AddPlayerTalkingDelegate_Params params;
	params.TalkerDelegate = TalkerDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPlayerTalkingStateChange
// (Final, Iterator, PreOperator, Singular, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// struct FUniqueNetId            Player                         (Parm)
// bool                           bIsTalking                     (Parm)

void UOnlineSubsystemSteamworks::STATIC_OnPlayerTalkingStateChange(const struct FUniqueNetId& Player, bool bIsTalking)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPlayerTalkingStateChange"));

	UOnlineSubsystemSteamworks_OnPlayerTalkingStateChange_Params params;
	params.Player = Player;
	params.bIsTalking = bIsTalking;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnmuteRemoteTalker
// (Final, Singular, Simulated, Exec, Native, Event, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           bIsSystemWide                  (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::UnmuteRemoteTalker(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID, bool bIsSystemWide)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnmuteRemoteTalker"));

	UOnlineSubsystemSteamworks_UnmuteRemoteTalker_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerID = PlayerID;
	params.bIsSystemWide = bIsSystemWide;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MuteRemoteTalker
// (Defined, Iterator, PreOperator, Singular, Simulated, Event, Operator, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           bIsSystemWide                  (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::STATIC_MuteRemoteTalker(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID, bool bIsSystemWide)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MuteRemoteTalker"));

	UOnlineSubsystemSteamworks_MuteRemoteTalker_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerID = PlayerID;
	params.bIsSystemWide = bIsSystemWide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetRemoteTalkerPriority
// (Iterator, PreOperator, Net, Event, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// int                            Priority                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::SetRemoteTalkerPriority(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID, int Priority)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetRemoteTalkerPriority"));

	UOnlineSubsystemSteamworks_SetRemoteTalkerPriority_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerID = PlayerID;
	params.Priority = Priority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsHeadsetPresent
// (Final, Defined, Latent, PreOperator, Singular, NetReliable, Exec, Operator, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::STATIC_IsHeadsetPresent(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsHeadsetPresent"));

	UOnlineSubsystemSteamworks_IsHeadsetPresent_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsRemotePlayerTalking
// (Defined, Iterator, PreOperator, Singular, Net, NetReliable, Exec, Operator, Static)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::STATIC_IsRemotePlayerTalking(const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsRemotePlayerTalking"));

	UOnlineSubsystemSteamworks_IsRemotePlayerTalking_Params params;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsLocalPlayerTalking
// (Final, PreOperator, Net, NetReliable, Exec, Operator, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::STATIC_IsLocalPlayerTalking(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsLocalPlayerTalking"));

	UOnlineSubsystemSteamworks_IsLocalPlayerTalking_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterRemoteTalker
// (PreOperator, Singular, Simulated, Exec, Native, Event, HasOptionalParms)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::UnregisterRemoteTalker(const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterRemoteTalker"));

	UOnlineSubsystemSteamworks_UnregisterRemoteTalker_Params params;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterRemoteTalker
// (Final, Defined, Iterator, Net, NetReliable, Simulated, Exec, HasOptionalParms)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::RegisterRemoteTalker(const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterRemoteTalker"));

	UOnlineSubsystemSteamworks_RegisterRemoteTalker_Params params;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterLocalTalker
// (Defined, Iterator, Latent, PreOperator, Native, Event, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// unsigned char                  ChannelIndex                   (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::UnregisterLocalTalker(unsigned char LocalUserNum, unsigned char ChannelIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterLocalTalker"));

	UOnlineSubsystemSteamworks_UnregisterLocalTalker_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ChannelIndex = ChannelIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterLocalTalker
// (Native, Event, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// unsigned char                  ChannelIndex                   (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::RegisterLocalTalker(unsigned char LocalUserNum, unsigned char ChannelIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterLocalTalker"));

	UOnlineSubsystemSteamworks_RegisterLocalTalker_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ChannelIndex = ChannelIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendsList
// (Final, Iterator, Latent, Singular, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FOnlineFriend>   Friends                        (Parm, OutParm, NeedCtorLink)
// int                            Count                          (OptionalParm, Parm)
// int                            StartingAt                     (OptionalParm, Parm)
// TEnumAsByte<EOnlineEnumerationReadState> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EOnlineEnumerationReadState> UOnlineSubsystemSteamworks::STATIC_GetFriendsList(unsigned char LocalUserNum, int Count, int StartingAt, TArray<struct FOnlineFriend>* Friends)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendsList"));

	UOnlineSubsystemSteamworks_GetFriendsList_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Count = Count;
	params.StartingAt = StartingAt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Friends != nullptr)
		*Friends = params.Friends;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCustomOnlineDelegates
// (Final, Iterator, PreOperator, Net, Simulated, Exec, Native, Event, Operator)

void UOnlineSubsystemSteamworks::ClearCustomOnlineDelegates()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCustomOnlineDelegates"));

	UOnlineSubsystemSteamworks_ClearCustomOnlineDelegates_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadFriendsCompleteDelegate
// (Final, Defined, Iterator, PreOperator, Singular, NetReliable, Simulated, Exec, Native, Event, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadFriendsCompleteDelegate    (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadFriendsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadFriendsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadFriendsCompleteDelegate"));

	UOnlineSubsystemSteamworks_ClearReadFriendsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadFriendsCompleteDelegate = ReadFriendsCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadFriendsCompleteDelegate
// (Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadFriendsCompleteDelegate    (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadFriendsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadFriendsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadFriendsCompleteDelegate"));

	UOnlineSubsystemSteamworks_AddReadFriendsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadFriendsCompleteDelegate = ReadFriendsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadFriendsComplete
// (Iterator, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemSteamworks::STATIC_OnReadFriendsComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadFriendsComplete"));

	UOnlineSubsystemSteamworks_OnReadFriendsComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadFriendsList
// (Final, Defined, PreOperator, Singular, Simulated, Exec, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            Count                          (OptionalParm, Parm)
// int                            StartingAt                     (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ReadFriendsList(unsigned char LocalUserNum, int Count, int StartingAt)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadFriendsList"));

	UOnlineSubsystemSteamworks_ReadFriendsList_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Count = Count;
	params.StartingAt = StartingAt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWritePlayerStorageCompleteDelegate
// (Final, Latent, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         WritePlayerStorageCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearWritePlayerStorageCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& WritePlayerStorageCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWritePlayerStorageCompleteDelegate"));

	UOnlineSubsystemSteamworks_ClearWritePlayerStorageCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.WritePlayerStorageCompleteDelegate = WritePlayerStorageCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWritePlayerStorageCompleteDelegate
// (Net, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         WritePlayerStorageCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddWritePlayerStorageCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& WritePlayerStorageCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWritePlayerStorageCompleteDelegate"));

	UOnlineSubsystemSteamworks_AddWritePlayerStorageCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.WritePlayerStorageCompleteDelegate = WritePlayerStorageCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWritePlayerStorageComplete
// (Defined, Iterator, PreOperator, Exec, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemSteamworks::STATIC_OnWritePlayerStorageComplete(unsigned char LocalUserNum, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWritePlayerStorageComplete"));

	UOnlineSubsystemSteamworks_OnWritePlayerStorageComplete_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WritePlayerStorage
// (Final, Defined, Iterator, NetReliable, Simulated, Operator, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class UOnlinePlayerStorage*    PlayerStorage                  (Parm)
// int                            DeviceID                       (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::WritePlayerStorage(unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int DeviceID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WritePlayerStorage"));

	UOnlineSubsystemSteamworks_WritePlayerStorage_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerStorage = PlayerStorage;
	params.DeviceID = DeviceID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerStorage
// (Final, Latent, NetReliable, Exec, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class UOnlinePlayerStorage*    ReturnValue                    (Parm, OutParm, ReturnParm)

class UOnlinePlayerStorage* UOnlineSubsystemSteamworks::STATIC_GetPlayerStorage(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerStorage"));

	UOnlineSubsystemSteamworks_GetPlayerStorage_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageForNetIdCompleteDelegate
// (Defined, Iterator, Latent, PreOperator, Singular, NetReliable, Simulated, Exec, Native, Event, Operator)
// Parameters:
// struct FUniqueNetId            NetId                          (Parm)
// struct FScriptDelegate         ReadPlayerStorageForNetIdCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadPlayerStorageForNetIdCompleteDelegate(const struct FUniqueNetId& NetId, const struct FScriptDelegate& ReadPlayerStorageForNetIdCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageForNetIdCompleteDelegate"));

	UOnlineSubsystemSteamworks_ClearReadPlayerStorageForNetIdCompleteDelegate_Params params;
	params.NetId = NetId;
	params.ReadPlayerStorageForNetIdCompleteDelegate = ReadPlayerStorageForNetIdCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageForNetIdCompleteDelegate
// (Final, Defined, Iterator, Operator)
// Parameters:
// struct FUniqueNetId            NetId                          (Parm)
// struct FScriptDelegate         ReadPlayerStorageForNetIdCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadPlayerStorageForNetIdCompleteDelegate(const struct FUniqueNetId& NetId, const struct FScriptDelegate& ReadPlayerStorageForNetIdCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageForNetIdCompleteDelegate"));

	UOnlineSubsystemSteamworks_AddReadPlayerStorageForNetIdCompleteDelegate_Params params;
	params.NetId = NetId;
	params.ReadPlayerStorageForNetIdCompleteDelegate = ReadPlayerStorageForNetIdCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageForNetIdComplete
// (Final, Exec, Native, Event, Static)
// Parameters:
// struct FUniqueNetId            NetId                          (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemSteamworks::STATIC_OnReadPlayerStorageForNetIdComplete(const struct FUniqueNetId& NetId, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageForNetIdComplete"));

	UOnlineSubsystemSteamworks_OnReadPlayerStorageForNetIdComplete_Params params;
	params.NetId = NetId;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorageForNetId
// (Final, Iterator, Net, Simulated, Exec, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            NetId                          (Parm)
// class UOnlinePlayerStorage*    PlayerStorage                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ReadPlayerStorageForNetId(unsigned char LocalUserNum, const struct FUniqueNetId& NetId, class UOnlinePlayerStorage* PlayerStorage)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorageForNetId"));

	UOnlineSubsystemSteamworks_ReadPlayerStorageForNetId_Params params;
	params.LocalUserNum = LocalUserNum;
	params.NetId = NetId;
	params.PlayerStorage = PlayerStorage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageCompleteDelegate
// (Final, Iterator, Latent, PreOperator, Singular, NetReliable, Simulated, Exec, Native, Event, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadPlayerStorageCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadPlayerStorageCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadPlayerStorageCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageCompleteDelegate"));

	UOnlineSubsystemSteamworks_ClearReadPlayerStorageCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadPlayerStorageCompleteDelegate = ReadPlayerStorageCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageCompleteDelegate
// (Defined, Iterator, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadPlayerStorageCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadPlayerStorageCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadPlayerStorageCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageCompleteDelegate"));

	UOnlineSubsystemSteamworks_AddReadPlayerStorageCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadPlayerStorageCompleteDelegate = ReadPlayerStorageCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageComplete
// (Exec, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemSteamworks::STATIC_OnReadPlayerStorageComplete(unsigned char LocalUserNum, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageComplete"));

	UOnlineSubsystemSteamworks_OnReadPlayerStorageComplete_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorage
// (Final, Defined, Net, Simulated, Exec, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class UOnlinePlayerStorage*    PlayerStorage                  (Parm)
// int                            DeviceID                       (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ReadPlayerStorage(unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int DeviceID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorage"));

	UOnlineSubsystemSteamworks_ReadPlayerStorage_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerStorage = PlayerStorage;
	params.DeviceID = DeviceID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteProfileSettingsCompleteDelegate
// (Defined, Latent, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         WriteProfileSettingsCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearWriteProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& WriteProfileSettingsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteProfileSettingsCompleteDelegate"));

	UOnlineSubsystemSteamworks_ClearWriteProfileSettingsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.WriteProfileSettingsCompleteDelegate = WriteProfileSettingsCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteProfileSettingsCompleteDelegate
// (Final, Net, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         WriteProfileSettingsCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddWriteProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& WriteProfileSettingsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteProfileSettingsCompleteDelegate"));

	UOnlineSubsystemSteamworks_AddWriteProfileSettingsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.WriteProfileSettingsCompleteDelegate = WriteProfileSettingsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteProfileSettingsComplete
// (Final, Defined, Iterator, PreOperator, Exec, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemSteamworks::STATIC_OnWriteProfileSettingsComplete(unsigned char LocalUserNum, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteProfileSettingsComplete"));

	UOnlineSubsystemSteamworks_OnWriteProfileSettingsComplete_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteProfileSettings
// (Final, Latent, NetReliable, Simulated, Operator, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class UOnlineProfileSettings*  ProfileSettings                (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::WriteProfileSettings(unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteProfileSettings"));

	UOnlineSubsystemSteamworks_WriteProfileSettings_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ProfileSettings = ProfileSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetProfileSettings
// (Defined, Latent, PreOperator, NetReliable, Exec, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class UOnlineProfileSettings*  ReturnValue                    (Parm, OutParm, ReturnParm)

class UOnlineProfileSettings* UOnlineSubsystemSteamworks::STATIC_GetProfileSettings(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetProfileSettings"));

	UOnlineSubsystemSteamworks_GetProfileSettings_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadProfileSettingsCompleteDelegate
// (Final, Defined, Iterator, Latent, PreOperator, Singular, NetReliable, Simulated, Exec, Native, Event, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadProfileSettingsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadProfileSettingsCompleteDelegate"));

	UOnlineSubsystemSteamworks_ClearReadProfileSettingsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadProfileSettingsCompleteDelegate = ReadProfileSettingsCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadProfileSettingsCompleteDelegate
// (Latent, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadProfileSettingsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadProfileSettingsCompleteDelegate"));

	UOnlineSubsystemSteamworks_AddReadProfileSettingsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadProfileSettingsCompleteDelegate = ReadProfileSettingsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadProfileSettingsComplete
// (Defined, Exec, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemSteamworks::STATIC_OnReadProfileSettingsComplete(unsigned char LocalUserNum, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadProfileSettingsComplete"));

	UOnlineSubsystemSteamworks_OnReadProfileSettingsComplete_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadProfileSettings
// (Final, Defined, Iterator, Net, Simulated, Exec, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class UOnlineProfileSettings*  ProfileSettings                (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ReadProfileSettings(unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadProfileSettings"));

	UOnlineSubsystemSteamworks_ReadProfileSettings_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ProfileSettings = ProfileSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendsChangeDelegate
// (Final, Defined, Iterator, Latent, Singular, Net, Simulated, Exec, Native, Event, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         FriendsDelegate                (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearFriendsChangeDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendsDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendsChangeDelegate"));

	UOnlineSubsystemSteamworks_ClearFriendsChangeDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.FriendsDelegate = FriendsDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendsChangeDelegate
// (Defined, Singular, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         FriendsDelegate                (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddFriendsChangeDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendsDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendsChangeDelegate"));

	UOnlineSubsystemSteamworks_AddFriendsChangeDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.FriendsDelegate = FriendsDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearMutingChangeDelegate
// (Defined, Iterator, Latent, NetReliable, Simulated, Exec, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         MutingDelegate                 (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearMutingChangeDelegate(const struct FScriptDelegate& MutingDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearMutingChangeDelegate"));

	UOnlineSubsystemSteamworks_ClearMutingChangeDelegate_Params params;
	params.MutingDelegate = MutingDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddMutingChangeDelegate
// (Iterator, PreOperator, Net, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// struct FScriptDelegate         MutingDelegate                 (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddMutingChangeDelegate(const struct FScriptDelegate& MutingDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddMutingChangeDelegate"));

	UOnlineSubsystemSteamworks_AddMutingChangeDelegate_Params params;
	params.MutingDelegate = MutingDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginCancelledDelegate
// (Final, Defined, NetReliable, Simulated, Exec, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         CancelledDelegate              (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearLoginCancelledDelegate(const struct FScriptDelegate& CancelledDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginCancelledDelegate"));

	UOnlineSubsystemSteamworks_ClearLoginCancelledDelegate_Params params;
	params.CancelledDelegate = CancelledDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginCancelledDelegate
// (Final, Defined, Iterator, Net, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// struct FScriptDelegate         CancelledDelegate              (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddLoginCancelledDelegate(const struct FScriptDelegate& CancelledDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginCancelledDelegate"));

	UOnlineSubsystemSteamworks_AddLoginCancelledDelegate_Params params;
	params.CancelledDelegate = CancelledDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginStatusChangeDelegate
// (Defined, Iterator, NetReliable, Simulated, Exec, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         LoginStatusDelegate            (Parm, NeedCtorLink)
// unsigned char                  LocalUserNum                   (Parm)

void UOnlineSubsystemSteamworks::ClearLoginStatusChangeDelegate(const struct FScriptDelegate& LoginStatusDelegate, unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginStatusChangeDelegate"));

	UOnlineSubsystemSteamworks_ClearLoginStatusChangeDelegate_Params params;
	params.LoginStatusDelegate = LoginStatusDelegate;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginStatusChangeDelegate
// (Defined, Latent, Net, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// struct FScriptDelegate         LoginStatusDelegate            (Parm, NeedCtorLink)
// unsigned char                  LocalUserNum                   (Parm)

void UOnlineSubsystemSteamworks::AddLoginStatusChangeDelegate(const struct FScriptDelegate& LoginStatusDelegate, unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginStatusChangeDelegate"));

	UOnlineSubsystemSteamworks_AddLoginStatusChangeDelegate_Params params;
	params.LoginStatusDelegate = LoginStatusDelegate;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginStatusChange
// (Final, PreOperator, Singular, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// TEnumAsByte<ELoginStatus>      NewStatus                      (Parm)
// struct FUniqueNetId            NewId                          (Parm)

void UOnlineSubsystemSteamworks::STATIC_OnLoginStatusChange(TEnumAsByte<ELoginStatus> NewStatus, const struct FUniqueNetId& NewId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginStatusChange"));

	UOnlineSubsystemSteamworks_OnLoginStatusChange_Params params;
	params.NewStatus = NewStatus;
	params.NewId = NewId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginChangeDelegate
// (Iterator, NetReliable, Simulated, Exec, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         LoginDelegate                  (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearLoginChangeDelegate(const struct FScriptDelegate& LoginDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginChangeDelegate"));

	UOnlineSubsystemSteamworks_ClearLoginChangeDelegate_Params params;
	params.LoginDelegate = LoginDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginChangeDelegate
// (Latent, Net, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// struct FScriptDelegate         LoginDelegate                  (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddLoginChangeDelegate(const struct FScriptDelegate& LoginDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginChangeDelegate"));

	UOnlineSubsystemSteamworks_AddLoginChangeDelegate_Params params;
	params.LoginDelegate = LoginDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AreAnyFriends
// (Final, Defined, Iterator, Latent, Net, NetReliable, Simulated, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FFriendsQuery>   Query                          (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::AreAnyFriends(unsigned char LocalUserNum, TArray<struct FFriendsQuery>* Query)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AreAnyFriends"));

	UOnlineSubsystemSteamworks_AreAnyFriends_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Query != nullptr)
		*Query = params.Query;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsFriend
// (Final, Iterator, PreOperator, Singular, NetReliable, Exec, Operator, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::STATIC_IsFriend(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsFriend"));

	UOnlineSubsystemSteamworks_IsFriend_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShowPresenceInformation
// (Final, Defined, PreOperator, Net, Exec, Native, Event, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevelHint             (Parm, OutParm)
// bool                           bAttemptToResolve              (OptionalParm, Parm)
// struct FString                 Reason                         (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::CanShowPresenceInformation(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShowPresenceInformation"));

	UOnlineSubsystemSteamworks_CanShowPresenceInformation_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanViewPlayerProfiles
// (Iterator, Singular, Net, Exec, Native, Event, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevelHint             (Parm, OutParm)
// bool                           bAttemptToResolve              (OptionalParm, Parm)
// struct FString                 Reason                         (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::CanViewPlayerProfiles(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanViewPlayerProfiles"));

	UOnlineSubsystemSteamworks_CanViewPlayerProfiles_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPurchaseContent
// (Defined, Latent, Net, Exec, Native, Event, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevelHint             (Parm, OutParm)
// bool                           bAttemptToResolve              (OptionalParm, Parm)
// struct FString                 Reason                         (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::CanPurchaseContent(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPurchaseContent"));

	UOnlineSubsystemSteamworks_CanPurchaseContent_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanMultiplayerCrossPlay
// (Latent, Net, Exec, Native, Event, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevelHint             (Parm, OutParm)
// bool                           bAttemptToResolve              (OptionalParm, Parm)
// struct FString                 Reason                         (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::CanMultiplayerCrossPlay(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanMultiplayerCrossPlay"));

	UOnlineSubsystemSteamworks_CanMultiplayerCrossPlay_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicate
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Exec, Native, Event, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EFeaturePrivilegeLevel> UOnlineSubsystemSteamworks::CanCommunicate(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicate"));

	UOnlineSubsystemSteamworks_CanCommunicate_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPlayOnline
// (Final, Latent, Net, Exec, Native, Event, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevelHint             (Parm, OutParm)
// bool                           bAttemptToResolve              (OptionalParm, Parm)
// struct FString                 Reason                         (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::CanPlayOnline(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPlayOnline"));

	UOnlineSubsystemSteamworks_CanPlayOnline_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNickname
// (Iterator, NetReliable, Exec, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlineSubsystemSteamworks::STATIC_GetPlayerNickname(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNickname"));

	UOnlineSubsystemSteamworks_GetPlayerNickname_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUniquePlayerId
// (Final, Latent, Singular, Simulated, Exec, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            PlayerID                       (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::STATIC_GetUniquePlayerId(unsigned char LocalUserNum, struct FUniqueNetId* PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUniquePlayerId"));

	UOnlineSubsystemSteamworks_GetUniquePlayerId_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerID != nullptr)
		*PlayerID = params.PlayerID;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsLocalLogin
// (Defined, Iterator, Latent, Net, NetReliable, Exec, Operator, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::STATIC_IsLocalLogin(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsLocalLogin"));

	UOnlineSubsystemSteamworks_IsLocalLogin_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsGuestLogin
// (Defined, Latent, PreOperator, Singular, NetReliable, Exec, Operator, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::STATIC_IsGuestLogin(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsGuestLogin"));

	UOnlineSubsystemSteamworks_IsGuestLogin_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLoginStatus
// (Final, Iterator, PreOperator, NetReliable, Simulated, Native, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<ELoginStatus>      ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<ELoginStatus> UOnlineSubsystemSteamworks::GetLoginStatus(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLoginStatus"));

	UOnlineSubsystemSteamworks_GetLoginStatus_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLogoutCompletedDelegate
// (Final, Defined, Iterator, NetReliable, Simulated, Exec, Native, Event, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         LogoutDelegate                 (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearLogoutCompletedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& LogoutDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLogoutCompletedDelegate"));

	UOnlineSubsystemSteamworks_ClearLogoutCompletedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.LogoutDelegate = LogoutDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLogoutCompletedDelegate
// (Final, Defined, Latent, Net, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         LogoutDelegate                 (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddLogoutCompletedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& LogoutDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLogoutCompletedDelegate"));

	UOnlineSubsystemSteamworks_AddLogoutCompletedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.LogoutDelegate = LogoutDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLogoutCompleted
// (Defined, PreOperator, Singular, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemSteamworks::STATIC_OnLogoutCompleted(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLogoutCompleted"));

	UOnlineSubsystemSteamworks_OnLogoutCompleted_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Logout
// (Defined, Latent, NetReliable, Simulated, Native, Operator, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::STATIC_Logout(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Logout"));

	UOnlineSubsystemSteamworks_Logout_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginFailedDelegate
// (Final, Iterator, NetReliable, Simulated, Exec, Native, Event, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         LoginFailedDelegate            (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearLoginFailedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& LoginFailedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginFailedDelegate"));

	UOnlineSubsystemSteamworks_ClearLoginFailedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.LoginFailedDelegate = LoginFailedDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginFailedDelegate
// (Final, Latent, Net, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         LoginFailedDelegate            (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddLoginFailedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& LoginFailedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginFailedDelegate"));

	UOnlineSubsystemSteamworks_AddLoginFailedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.LoginFailedDelegate = LoginFailedDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginFailed
// (PreOperator, Singular, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EOnlineServerConnectionStatus> ErrorCode                      (Parm)

void UOnlineSubsystemSteamworks::STATIC_OnLoginFailed(unsigned char LocalUserNum, TEnumAsByte<EOnlineServerConnectionStatus> ErrorCode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginFailed"));

	UOnlineSubsystemSteamworks_OnLoginFailed_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ErrorCode = ErrorCode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AutoLogin
// (Iterator, Latent, Net, Exec, Operator)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::AutoLogin()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AutoLogin"));

	UOnlineSubsystemSteamworks_AutoLogin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Login
// (Final, Defined, Latent, PreOperator, Net, NetReliable, Simulated, Native, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 LoginName                      (Parm, NeedCtorLink)
// struct FString                 Password                       (Parm, NeedCtorLink)
// bool                           bWantsLocalOnly                (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::Login(unsigned char LocalUserNum, const struct FString& LoginName, const struct FString& Password, bool bWantsLocalOnly)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Login"));

	UOnlineSubsystemSteamworks_Login_Params params;
	params.LocalUserNum = LocalUserNum;
	params.LoginName = LoginName;
	params.Password = Password;
	params.bWantsLocalOnly = bWantsLocalOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsAccountPickerOpen
// (Defined, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Event, HasOptionalParms)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::IsAccountPickerOpen()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsAccountPickerOpen"));

	UOnlineSubsystemSteamworks_IsAccountPickerOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowLoginUI
// (Final, Defined, Iterator, Singular, Simulated, Event, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           bForceLogin                    (OptionalParm, Parm)
// bool                           bShowOnlineOnly                (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ShowLoginUI(unsigned char LocalUserNum, bool bForceLogin, bool bShowOnlineOnly)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowLoginUI"));

	UOnlineSubsystemSteamworks_ShowLoginUI_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bForceLogin = bForceLogin;
	params.bShowOnlineOnly = bShowOnlineOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendsChange
// (Final, Latent, Singular, Net, NetReliable, Simulated, Native, Event, Static)

void UOnlineSubsystemSteamworks::STATIC_OnFriendsChange()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendsChange"));

	UOnlineSubsystemSteamworks_OnFriendsChange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnMutingChange
// (Final, Defined, PreOperator, Singular, Net, NetReliable, Simulated, Native, Event, Static)

void UOnlineSubsystemSteamworks::STATIC_OnMutingChange()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnMutingChange"));

	UOnlineSubsystemSteamworks_OnMutingChange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginCancelled
// (Defined, Iterator, Latent, Singular, Net, NetReliable, Simulated, Native, Event, Static)

void UOnlineSubsystemSteamworks::STATIC_OnLoginCancelled()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginCancelled"));

	UOnlineSubsystemSteamworks_OnLoginCancelled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginChange
// (Final, Defined, Iterator, Latent, Singular, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)

void UOnlineSubsystemSteamworks::STATIC_OnLoginChange(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginChange"));

	UOnlineSubsystemSteamworks_OnLoginChange_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Exit
// (Final, Defined, Latent, PreOperator, Singular, Net, NetReliable, Exec)

void UOnlineSubsystemSteamworks::Exit()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Exit"));

	UOnlineSubsystemSteamworks_Exit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Init
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Exec)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::Init()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Init"));

	UOnlineSubsystemSteamworks_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
