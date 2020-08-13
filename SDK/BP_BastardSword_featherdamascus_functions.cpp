
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

// Function BP_BastardSword_featherdamascus.BP_BastardSword_featherdamascus_C.UserConstructionScript
// (BlueprintCallable, BlueprintEvent)

void UBP_BastardSword_featherdamascus_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BastardSword_featherdamascus.BP_BastardSword_featherdamascus_C.UserConstructionScript");

	UBP_BastardSword_featherdamascus_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BastardSword_featherdamascus.BP_BastardSword_featherdamascus_C.ReceiveBeginPlay
// (BlueprintCallable, BlueprintEvent)

void UBP_BastardSword_featherdamascus_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BastardSword_featherdamascus.BP_BastardSword_featherdamascus_C.ReceiveBeginPlay");

	UBP_BastardSword_featherdamascus_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BastardSword_featherdamascus.BP_BastardSword_featherdamascus_C.ReceiveActorBeginOverlap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BastardSword_featherdamascus_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BastardSword_featherdamascus.BP_BastardSword_featherdamascus_C.ReceiveActorBeginOverlap");

	UBP_BastardSword_featherdamascus_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BastardSword_featherdamascus.BP_BastardSword_featherdamascus_C.ReceiveTick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BastardSword_featherdamascus_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BastardSword_featherdamascus.BP_BastardSword_featherdamascus_C.ReceiveTick");

	UBP_BastardSword_featherdamascus_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BastardSword_featherdamascus.BP_BastardSword_featherdamascus_C.ExecuteUbergraph_BP_BastardSword_featherdamascus
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BastardSword_featherdamascus_C::ExecuteUbergraph_BP_BastardSword_featherdamascus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BastardSword_featherdamascus.BP_BastardSword_featherdamascus_C.ExecuteUbergraph_BP_BastardSword_featherdamascus");

	UBP_BastardSword_featherdamascus_C_ExecuteUbergraph_BP_BastardSword_featherdamascus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
