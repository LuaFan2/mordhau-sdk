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

// Function BP_SceneProgressActor.BP_SceneProgressActor_C.UserConstructionScript
struct ABP_SceneProgressActor_C_UserConstructionScript_Params
{
};

// Function BP_SceneProgressActor.BP_SceneProgressActor_C.ReceiveBeginPlay
struct ABP_SceneProgressActor_C_ReceiveBeginPlay_Params
{
};

// Function BP_SceneProgressActor.BP_SceneProgressActor_C.ProgressUpdated
struct ABP_SceneProgressActor_C_ProgressUpdated_Params
{
	float*                                             Progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SceneProgressActor.BP_SceneProgressActor_C.ExecuteUbergraph_BP_SceneProgressActor
struct ABP_SceneProgressActor_C_ExecuteUbergraph_BP_SceneProgressActor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif