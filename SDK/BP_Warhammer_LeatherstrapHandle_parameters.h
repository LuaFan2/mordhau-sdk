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

// Function BP_Warhammer_LeatherstrapHandle.BP_Warhammer_LeatherstrapHandle_C.UserConstructionScript
struct UBP_Warhammer_LeatherstrapHandle_C_UserConstructionScript_Params
{
};

// Function BP_Warhammer_LeatherstrapHandle.BP_Warhammer_LeatherstrapHandle_C.ReceiveBeginPlay
struct UBP_Warhammer_LeatherstrapHandle_C_ReceiveBeginPlay_Params
{
};

// Function BP_Warhammer_LeatherstrapHandle.BP_Warhammer_LeatherstrapHandle_C.ReceiveActorBeginOverlap
struct UBP_Warhammer_LeatherstrapHandle_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Warhammer_LeatherstrapHandle.BP_Warhammer_LeatherstrapHandle_C.ReceiveTick
struct UBP_Warhammer_LeatherstrapHandle_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Warhammer_LeatherstrapHandle.BP_Warhammer_LeatherstrapHandle_C.ExecuteUbergraph_BP_Warhammer_LeatherstrapHandle
struct UBP_Warhammer_LeatherstrapHandle_C_ExecuteUbergraph_BP_Warhammer_LeatherstrapHandle_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif