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

// Function BP_Rapier_GallantGuard.BP_Rapier_GallantGuard_C.UserConstructionScript
struct UBP_Rapier_GallantGuard_C_UserConstructionScript_Params
{
};

// Function BP_Rapier_GallantGuard.BP_Rapier_GallantGuard_C.ReceiveBeginPlay
struct UBP_Rapier_GallantGuard_C_ReceiveBeginPlay_Params
{
};

// Function BP_Rapier_GallantGuard.BP_Rapier_GallantGuard_C.ReceiveActorBeginOverlap
struct UBP_Rapier_GallantGuard_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Rapier_GallantGuard.BP_Rapier_GallantGuard_C.ReceiveTick
struct UBP_Rapier_GallantGuard_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Rapier_GallantGuard.BP_Rapier_GallantGuard_C.ExecuteUbergraph_BP_Rapier_GallantGuard
struct UBP_Rapier_GallantGuard_C_ExecuteUbergraph_BP_Rapier_GallantGuard_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
