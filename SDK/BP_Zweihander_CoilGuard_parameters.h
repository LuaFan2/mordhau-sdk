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

// Function BP_Zweihander_CoilGuard.BP_Zweihander_CoilGuard_C.UserConstructionScript
struct UBP_Zweihander_CoilGuard_C_UserConstructionScript_Params
{
};

// Function BP_Zweihander_CoilGuard.BP_Zweihander_CoilGuard_C.ReceiveBeginPlay
struct UBP_Zweihander_CoilGuard_C_ReceiveBeginPlay_Params
{
};

// Function BP_Zweihander_CoilGuard.BP_Zweihander_CoilGuard_C.ReceiveActorBeginOverlap
struct UBP_Zweihander_CoilGuard_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Zweihander_CoilGuard.BP_Zweihander_CoilGuard_C.ReceiveTick
struct UBP_Zweihander_CoilGuard_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Zweihander_CoilGuard.BP_Zweihander_CoilGuard_C.ExecuteUbergraph_BP_Zweihander_CoilGuard
struct UBP_Zweihander_CoilGuard_C_ExecuteUbergraph_BP_Zweihander_CoilGuard_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
