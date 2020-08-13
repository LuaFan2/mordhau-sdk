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

// Function BP_Mace_InvaderHead.BP_Mace_InvaderHead_C.UserConstructionScript
struct UBP_Mace_InvaderHead_C_UserConstructionScript_Params
{
};

// Function BP_Mace_InvaderHead.BP_Mace_InvaderHead_C.ReceiveBeginPlay
struct UBP_Mace_InvaderHead_C_ReceiveBeginPlay_Params
{
};

// Function BP_Mace_InvaderHead.BP_Mace_InvaderHead_C.ReceiveActorBeginOverlap
struct UBP_Mace_InvaderHead_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Mace_InvaderHead.BP_Mace_InvaderHead_C.ReceiveTick
struct UBP_Mace_InvaderHead_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Mace_InvaderHead.BP_Mace_InvaderHead_C.ExecuteUbergraph_BP_Mace_InvaderHead
struct UBP_Mace_InvaderHead_C_ExecuteUbergraph_BP_Mace_InvaderHead_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
