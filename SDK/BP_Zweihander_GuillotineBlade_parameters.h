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

// Function BP_Zweihander_GuillotineBlade.BP_Zweihander_GuillotineBlade_C.UserConstructionScript
struct UBP_Zweihander_GuillotineBlade_C_UserConstructionScript_Params
{
};

// Function BP_Zweihander_GuillotineBlade.BP_Zweihander_GuillotineBlade_C.ReceiveBeginPlay
struct UBP_Zweihander_GuillotineBlade_C_ReceiveBeginPlay_Params
{
};

// Function BP_Zweihander_GuillotineBlade.BP_Zweihander_GuillotineBlade_C.ReceiveActorBeginOverlap
struct UBP_Zweihander_GuillotineBlade_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Zweihander_GuillotineBlade.BP_Zweihander_GuillotineBlade_C.ReceiveTick
struct UBP_Zweihander_GuillotineBlade_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Zweihander_GuillotineBlade.BP_Zweihander_GuillotineBlade_C.ExecuteUbergraph_BP_Zweihander_GuillotineBlade
struct UBP_Zweihander_GuillotineBlade_C_ExecuteUbergraph_BP_Zweihander_GuillotineBlade_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
