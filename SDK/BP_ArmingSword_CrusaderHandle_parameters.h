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

// Function BP_ArmingSword_CrusaderHandle.BP_ArmingSword_CrusaderHandle_C.UserConstructionScript
struct UBP_ArmingSword_CrusaderHandle_C_UserConstructionScript_Params
{
};

// Function BP_ArmingSword_CrusaderHandle.BP_ArmingSword_CrusaderHandle_C.ReceiveBeginPlay
struct UBP_ArmingSword_CrusaderHandle_C_ReceiveBeginPlay_Params
{
};

// Function BP_ArmingSword_CrusaderHandle.BP_ArmingSword_CrusaderHandle_C.ReceiveActorBeginOverlap
struct UBP_ArmingSword_CrusaderHandle_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ArmingSword_CrusaderHandle.BP_ArmingSword_CrusaderHandle_C.ReceiveTick
struct UBP_ArmingSword_CrusaderHandle_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ArmingSword_CrusaderHandle.BP_ArmingSword_CrusaderHandle_C.ExecuteUbergraph_BP_ArmingSword_CrusaderHandle
struct UBP_ArmingSword_CrusaderHandle_C_ExecuteUbergraph_BP_ArmingSword_CrusaderHandle_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
