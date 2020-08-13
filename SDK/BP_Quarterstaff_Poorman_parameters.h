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

// Function BP_Quarterstaff_Poorman.BP_Quarterstaff_Poorman_C.UserConstructionScript
struct UBP_Quarterstaff_Poorman_C_UserConstructionScript_Params
{
};

// Function BP_Quarterstaff_Poorman.BP_Quarterstaff_Poorman_C.ReceiveBeginPlay
struct UBP_Quarterstaff_Poorman_C_ReceiveBeginPlay_Params
{
};

// Function BP_Quarterstaff_Poorman.BP_Quarterstaff_Poorman_C.ReceiveActorBeginOverlap
struct UBP_Quarterstaff_Poorman_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Quarterstaff_Poorman.BP_Quarterstaff_Poorman_C.ReceiveTick
struct UBP_Quarterstaff_Poorman_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Quarterstaff_Poorman.BP_Quarterstaff_Poorman_C.ExecuteUbergraph_BP_Quarterstaff_Poorman
struct UBP_Quarterstaff_Poorman_C_ExecuteUbergraph_BP_Quarterstaff_Poorman_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
