#pragma once

#include "../SDK.h"

// Name: Mordhau, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_claymore_WanderersBlade.BP_claymore_WanderersBlade_C.UserConstructionScript
struct UBP_claymore_WanderersBlade_C_UserConstructionScript_Params
{
};

// Function BP_claymore_WanderersBlade.BP_claymore_WanderersBlade_C.ReceiveBeginPlay
struct UBP_claymore_WanderersBlade_C_ReceiveBeginPlay_Params
{
};

// Function BP_claymore_WanderersBlade.BP_claymore_WanderersBlade_C.ReceiveActorBeginOverlap
struct UBP_claymore_WanderersBlade_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_claymore_WanderersBlade.BP_claymore_WanderersBlade_C.ReceiveTick
struct UBP_claymore_WanderersBlade_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_claymore_WanderersBlade.BP_claymore_WanderersBlade_C.ExecuteUbergraph_BP_claymore_WanderersBlade
struct UBP_claymore_WanderersBlade_C_ExecuteUbergraph_BP_claymore_WanderersBlade_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
