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

// Function BP_Longsword_AdamantHandle.BP_Longsword_AdamantHandle_C.UserConstructionScript
struct UBP_Longsword_AdamantHandle_C_UserConstructionScript_Params
{
};

// Function BP_Longsword_AdamantHandle.BP_Longsword_AdamantHandle_C.ReceiveBeginPlay
struct UBP_Longsword_AdamantHandle_C_ReceiveBeginPlay_Params
{
};

// Function BP_Longsword_AdamantHandle.BP_Longsword_AdamantHandle_C.ReceiveActorBeginOverlap
struct UBP_Longsword_AdamantHandle_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Longsword_AdamantHandle.BP_Longsword_AdamantHandle_C.ReceiveTick
struct UBP_Longsword_AdamantHandle_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Longsword_AdamantHandle.BP_Longsword_AdamantHandle_C.ExecuteUbergraph_BP_Longsword_AdamantHandle
struct UBP_Longsword_AdamantHandle_C_ExecuteUbergraph_BP_Longsword_AdamantHandle_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
