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

// Function BP_Longsword_TownsmanHandle.BP_Longsword_TownsmanHandle_C.UserConstructionScript
struct UBP_Longsword_TownsmanHandle_C_UserConstructionScript_Params
{
};

// Function BP_Longsword_TownsmanHandle.BP_Longsword_TownsmanHandle_C.ReceiveBeginPlay
struct UBP_Longsword_TownsmanHandle_C_ReceiveBeginPlay_Params
{
};

// Function BP_Longsword_TownsmanHandle.BP_Longsword_TownsmanHandle_C.ReceiveActorBeginOverlap
struct UBP_Longsword_TownsmanHandle_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Longsword_TownsmanHandle.BP_Longsword_TownsmanHandle_C.ReceiveTick
struct UBP_Longsword_TownsmanHandle_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Longsword_TownsmanHandle.BP_Longsword_TownsmanHandle_C.ExecuteUbergraph_BP_Longsword_TownsmanHandle
struct UBP_Longsword_TownsmanHandle_C_ExecuteUbergraph_BP_Longsword_TownsmanHandle_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
