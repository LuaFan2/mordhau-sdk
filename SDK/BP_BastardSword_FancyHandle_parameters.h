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

// Function BP_BastardSword_FancyHandle.BP_BastardSword_FancyHandle_C.UserConstructionScript
struct UBP_BastardSword_FancyHandle_C_UserConstructionScript_Params
{
};

// Function BP_BastardSword_FancyHandle.BP_BastardSword_FancyHandle_C.ReceiveBeginPlay
struct UBP_BastardSword_FancyHandle_C_ReceiveBeginPlay_Params
{
};

// Function BP_BastardSword_FancyHandle.BP_BastardSword_FancyHandle_C.ReceiveActorBeginOverlap
struct UBP_BastardSword_FancyHandle_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BastardSword_FancyHandle.BP_BastardSword_FancyHandle_C.ReceiveTick
struct UBP_BastardSword_FancyHandle_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BastardSword_FancyHandle.BP_BastardSword_FancyHandle_C.ExecuteUbergraph_BP_BastardSword_FancyHandle
struct UBP_BastardSword_FancyHandle_C_ExecuteUbergraph_BP_BastardSword_FancyHandle_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
