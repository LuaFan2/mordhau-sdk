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

// Function BP_Greatsword_FighterHandle.BP_Greatsword_FighterHandle_C.UserConstructionScript
struct UBP_Greatsword_FighterHandle_C_UserConstructionScript_Params
{
};

// Function BP_Greatsword_FighterHandle.BP_Greatsword_FighterHandle_C.ReceiveBeginPlay
struct UBP_Greatsword_FighterHandle_C_ReceiveBeginPlay_Params
{
};

// Function BP_Greatsword_FighterHandle.BP_Greatsword_FighterHandle_C.ReceiveActorBeginOverlap
struct UBP_Greatsword_FighterHandle_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Greatsword_FighterHandle.BP_Greatsword_FighterHandle_C.ReceiveTick
struct UBP_Greatsword_FighterHandle_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Greatsword_FighterHandle.BP_Greatsword_FighterHandle_C.ExecuteUbergraph_BP_Greatsword_FighterHandle
struct UBP_Greatsword_FighterHandle_C_ExecuteUbergraph_BP_Greatsword_FighterHandle_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
