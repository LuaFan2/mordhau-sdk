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

// Function BP_Leaderboards.BP_Leaderboards_C.Update
struct UBP_Leaderboards_C_Update_Params
{
};

// Function BP_Leaderboards.BP_Leaderboards_C.Construct
struct UBP_Leaderboards_C_Construct_Params
{
};

// Function BP_Leaderboards.BP_Leaderboards_C.OnGetLeaderboardComplete
struct UBP_Leaderboards_C_OnGetLeaderboardComplete_Params
{
	bool                                               bWasSuccessful;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     LeaderboardName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TArray<struct FLeaderboardEntry>                   Entries;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FLeaderboardEntry                           SelfEntry;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_Leaderboards.BP_Leaderboards_C.Tick
struct UBP_Leaderboards_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Leaderboards.BP_Leaderboards_C.ExecuteUbergraph_BP_Leaderboards
struct UBP_Leaderboards_C_ExecuteUbergraph_BP_Leaderboards_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
