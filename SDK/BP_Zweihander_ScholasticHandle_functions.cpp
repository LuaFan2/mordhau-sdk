
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

// Function BP_Zweihander_ScholasticHandle.BP_Zweihander_ScholasticHandle_C.UserConstructionScript
// (BlueprintCallable, BlueprintEvent)

void UBP_Zweihander_ScholasticHandle_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Zweihander_ScholasticHandle.BP_Zweihander_ScholasticHandle_C.UserConstructionScript");

	UBP_Zweihander_ScholasticHandle_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Zweihander_ScholasticHandle.BP_Zweihander_ScholasticHandle_C.ReceiveBeginPlay
// (BlueprintCallable, BlueprintEvent)

void UBP_Zweihander_ScholasticHandle_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Zweihander_ScholasticHandle.BP_Zweihander_ScholasticHandle_C.ReceiveBeginPlay");

	UBP_Zweihander_ScholasticHandle_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Zweihander_ScholasticHandle.BP_Zweihander_ScholasticHandle_C.ReceiveActorBeginOverlap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Zweihander_ScholasticHandle_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Zweihander_ScholasticHandle.BP_Zweihander_ScholasticHandle_C.ReceiveActorBeginOverlap");

	UBP_Zweihander_ScholasticHandle_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Zweihander_ScholasticHandle.BP_Zweihander_ScholasticHandle_C.ReceiveTick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Zweihander_ScholasticHandle_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Zweihander_ScholasticHandle.BP_Zweihander_ScholasticHandle_C.ReceiveTick");

	UBP_Zweihander_ScholasticHandle_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Zweihander_ScholasticHandle.BP_Zweihander_ScholasticHandle_C.ExecuteUbergraph_BP_Zweihander_ScholasticHandle
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Zweihander_ScholasticHandle_C::ExecuteUbergraph_BP_Zweihander_ScholasticHandle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Zweihander_ScholasticHandle.BP_Zweihander_ScholasticHandle_C.ExecuteUbergraph_BP_Zweihander_ScholasticHandle");

	UBP_Zweihander_ScholasticHandle_C_ExecuteUbergraph_BP_Zweihander_ScholasticHandle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
