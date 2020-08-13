
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

// Function BP_Rapier_AristocratGuard.BP_Rapier_AristocratGuard_C.UserConstructionScript
// (BlueprintCallable, BlueprintEvent)

void UBP_Rapier_AristocratGuard_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Rapier_AristocratGuard.BP_Rapier_AristocratGuard_C.UserConstructionScript");

	UBP_Rapier_AristocratGuard_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Rapier_AristocratGuard.BP_Rapier_AristocratGuard_C.ReceiveBeginPlay
// (BlueprintCallable, BlueprintEvent)

void UBP_Rapier_AristocratGuard_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Rapier_AristocratGuard.BP_Rapier_AristocratGuard_C.ReceiveBeginPlay");

	UBP_Rapier_AristocratGuard_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Rapier_AristocratGuard.BP_Rapier_AristocratGuard_C.ReceiveActorBeginOverlap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Rapier_AristocratGuard_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Rapier_AristocratGuard.BP_Rapier_AristocratGuard_C.ReceiveActorBeginOverlap");

	UBP_Rapier_AristocratGuard_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Rapier_AristocratGuard.BP_Rapier_AristocratGuard_C.ReceiveTick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Rapier_AristocratGuard_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Rapier_AristocratGuard.BP_Rapier_AristocratGuard_C.ReceiveTick");

	UBP_Rapier_AristocratGuard_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Rapier_AristocratGuard.BP_Rapier_AristocratGuard_C.ExecuteUbergraph_BP_Rapier_AristocratGuard
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Rapier_AristocratGuard_C::ExecuteUbergraph_BP_Rapier_AristocratGuard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Rapier_AristocratGuard.BP_Rapier_AristocratGuard_C.ExecuteUbergraph_BP_Rapier_AristocratGuard");

	UBP_Rapier_AristocratGuard_C_ExecuteUbergraph_BP_Rapier_AristocratGuard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
