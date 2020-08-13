
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

// Function BP_Ummmmm.BP_Ummmmm_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Ummmmm_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ummmmm.BP_Ummmmm_C.UserConstructionScript");

	ABP_Ummmmm_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ummmmm.BP_Ummmmm_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Ummmmm_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ummmmm.BP_Ummmmm_C.ReceiveBeginPlay");

	ABP_Ummmmm_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ummmmm.BP_Ummmmm_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Ummmmm_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ummmmm.BP_Ummmmm_C.ReceiveTick");

	ABP_Ummmmm_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ummmmm.BP_Ummmmm_C.ExecuteUbergraph_BP_Ummmmm
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Ummmmm_C::ExecuteUbergraph_BP_Ummmmm(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ummmmm.BP_Ummmmm_C.ExecuteUbergraph_BP_Ummmmm");

	ABP_Ummmmm_C_ExecuteUbergraph_BP_Ummmmm_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
