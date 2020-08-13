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

// Function BP_PushGameState.BP_PushGameState_C.GetScoreboardTimeInProgress
struct ABP_PushGameState_C_GetScoreboardTimeInProgress_Params
{
	struct FTimespan                                   Time;                                                     // (Parm, OutParm)
};

// Function BP_PushGameState.BP_PushGameState_C.GetScoreboardObjectiveName
struct ABP_PushGameState_C_GetScoreboardObjectiveName_Params
{
	struct FText                                       NewParam;                                                 // (Parm, OutParm)
};

// Function BP_PushGameState.BP_PushGameState_C.GetScoreboardTeamObjectiveValue
struct ABP_PushGameState_C_GetScoreboardTeamObjectiveValue_Params
{
	int*                                               Team;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Output;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BP_PushGameState.BP_PushGameState_C.UserConstructionScript
struct ABP_PushGameState_C_UserConstructionScript_Params
{
};

// Function BP_PushGameState.BP_PushGameState_C.HandleMatchEndInfo
struct ABP_PushGameState_C_HandleMatchEndInfo_Params
{
};

// Function BP_PushGameState.BP_PushGameState_C.ExecuteUbergraph_BP_PushGameState
struct ABP_PushGameState_C_ExecuteUbergraph_BP_PushGameState_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
