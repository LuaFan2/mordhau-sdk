
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

// Function BP_ArmingSword_StraightRainguard.BP_ArmingSword_StraightRainguard_C.UserConstructionScript
// (BlueprintCallable, BlueprintEvent)

void UBP_ArmingSword_StraightRainguard_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ArmingSword_StraightRainguard.BP_ArmingSword_StraightRainguard_C.UserConstructionScript");

	UBP_ArmingSword_StraightRainguard_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ArmingSword_StraightRainguard.BP_ArmingSword_StraightRainguard_C.ReceiveBeginPlay
// (BlueprintCallable, BlueprintEvent)

void UBP_ArmingSword_StraightRainguard_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ArmingSword_StraightRainguard.BP_ArmingSword_StraightRainguard_C.ReceiveBeginPlay");

	UBP_ArmingSword_StraightRainguard_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ArmingSword_StraightRainguard.BP_ArmingSword_StraightRainguard_C.ReceiveActorBeginOverlap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ArmingSword_StraightRainguard_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ArmingSword_StraightRainguard.BP_ArmingSword_StraightRainguard_C.ReceiveActorBeginOverlap");

	UBP_ArmingSword_StraightRainguard_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ArmingSword_StraightRainguard.BP_ArmingSword_StraightRainguard_C.ReceiveTick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ArmingSword_StraightRainguard_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ArmingSword_StraightRainguard.BP_ArmingSword_StraightRainguard_C.ReceiveTick");

	UBP_ArmingSword_StraightRainguard_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ArmingSword_StraightRainguard.BP_ArmingSword_StraightRainguard_C.ExecuteUbergraph_BP_ArmingSword_StraightRainguard
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ArmingSword_StraightRainguard_C::ExecuteUbergraph_BP_ArmingSword_StraightRainguard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ArmingSword_StraightRainguard.BP_ArmingSword_StraightRainguard_C.ExecuteUbergraph_BP_ArmingSword_StraightRainguard");

	UBP_ArmingSword_StraightRainguard_C_ExecuteUbergraph_BP_ArmingSword_StraightRainguard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
