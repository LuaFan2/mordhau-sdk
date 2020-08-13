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

// Function BP_VikingSword_RingGrip.BP_VikingSword_RingGrip_C.UserConstructionScript
struct UBP_VikingSword_RingGrip_C_UserConstructionScript_Params
{
};

// Function BP_VikingSword_RingGrip.BP_VikingSword_RingGrip_C.ReceiveBeginPlay
struct UBP_VikingSword_RingGrip_C_ReceiveBeginPlay_Params
{
};

// Function BP_VikingSword_RingGrip.BP_VikingSword_RingGrip_C.ReceiveActorBeginOverlap
struct UBP_VikingSword_RingGrip_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VikingSword_RingGrip.BP_VikingSword_RingGrip_C.ReceiveTick
struct UBP_VikingSword_RingGrip_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VikingSword_RingGrip.BP_VikingSword_RingGrip_C.ExecuteUbergraph_BP_VikingSword_RingGrip
struct UBP_VikingSword_RingGrip_C_ExecuteUbergraph_BP_VikingSword_RingGrip_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
