
#include "../SDK.h"

// Name: Mordhau, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function Qos.QosBeaconClient.ServerQosRequest
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FString                 InSessionId                    (Parm, ZeroConstructor)

void AQosBeaconClient::ServerQosRequest(const struct FString& InSessionId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Qos.QosBeaconClient.ServerQosRequest");

	AQosBeaconClient_ServerQosRequest_Params params;
	params.InSessionId = InSessionId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Qos.QosBeaconClient.ClientQosResponse
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// EQosResponseType               response                       (Parm, ZeroConstructor, IsPlainOldData)

void AQosBeaconClient::ClientQosResponse(EQosResponseType response)
{
	static auto fn = UObject::FindObject<UFunction>("Function Qos.QosBeaconClient.ClientQosResponse");

	AQosBeaconClient_ClientQosResponse_Params params;
	params.response = response;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
