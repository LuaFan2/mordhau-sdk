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

// Function BP_FrontlineKillObjectiveWrapper.BP_FrontlineKillObjectiveWrapper_C.IsInObjectiveArea
struct ABP_FrontlineKillObjectiveWrapper_C_IsInObjectiveArea_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               InArea;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FrontlineKillObjectiveWrapper.BP_FrontlineKillObjectiveWrapper_C.IsCompleted
struct ABP_FrontlineKillObjectiveWrapper_C_IsCompleted_Params
{
	bool                                               Completed;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FrontlineKillObjectiveWrapper.BP_FrontlineKillObjectiveWrapper_C.GetObjectiveProgress
struct ABP_FrontlineKillObjectiveWrapper_C_GetObjectiveProgress_Params
{
	float                                              Progress;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FrontlineKillObjectiveWrapper.BP_FrontlineKillObjectiveWrapper_C.UserConstructionScript
struct ABP_FrontlineKillObjectiveWrapper_C_UserConstructionScript_Params
{
};

// Function BP_FrontlineKillObjectiveWrapper.BP_FrontlineKillObjectiveWrapper_C.OnAnyObjectiveProgressChanged
struct ABP_FrontlineKillObjectiveWrapper_C_OnAnyObjectiveProgressChanged_Params
{
};

// Function BP_FrontlineKillObjectiveWrapper.BP_FrontlineKillObjectiveWrapper_C.OnEnemyGainedPrerequisites
struct ABP_FrontlineKillObjectiveWrapper_C_OnEnemyGainedPrerequisites_Params
{
};

// Function BP_FrontlineKillObjectiveWrapper.BP_FrontlineKillObjectiveWrapper_C.OnEnemyLostPrerequisites
struct ABP_FrontlineKillObjectiveWrapper_C_OnEnemyLostPrerequisites_Params
{
};

// Function BP_FrontlineKillObjectiveWrapper.BP_FrontlineKillObjectiveWrapper_C.OnInitialize
struct ABP_FrontlineKillObjectiveWrapper_C_OnInitialize_Params
{
	class ABP_CapturePoint_C*                          Point;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FrontlineKillObjectiveWrapper.BP_FrontlineKillObjectiveWrapper_C.OnUpdateUIWidgets
struct ABP_FrontlineKillObjectiveWrapper_C_OnUpdateUIWidgets_Params
{
};

// Function BP_FrontlineKillObjectiveWrapper.BP_FrontlineKillObjectiveWrapper_C.ExecuteUbergraph_BP_FrontlineKillObjectiveWrapper
struct ABP_FrontlineKillObjectiveWrapper_C_ExecuteUbergraph_BP_FrontlineKillObjectiveWrapper_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
