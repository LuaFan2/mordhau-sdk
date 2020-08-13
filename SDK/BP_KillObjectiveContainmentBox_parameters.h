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

// Function BP_KillObjectiveContainmentBox.BP_KillObjectiveContainmentBox_C.UserConstructionScript
struct ABP_KillObjectiveContainmentBox_C_UserConstructionScript_Params
{
};

// Function BP_KillObjectiveContainmentBox.BP_KillObjectiveContainmentBox_C.ReceiveActorEndOverlap
struct ABP_KillObjectiveContainmentBox_C_ReceiveActorEndOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_KillObjectiveContainmentBox.BP_KillObjectiveContainmentBox_C.ReceiveActorBeginOverlap
struct ABP_KillObjectiveContainmentBox_C_ReceiveActorBeginOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_KillObjectiveContainmentBox.BP_KillObjectiveContainmentBox_C.ExecuteUbergraph_BP_KillObjectiveContainmentBox
struct ABP_KillObjectiveContainmentBox_C_ExecuteUbergraph_BP_KillObjectiveContainmentBox_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
