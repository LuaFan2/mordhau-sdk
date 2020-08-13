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

// Function BP_GoldReward.BP_GoldReward_C.Get_EarnedGoldText_Text_1
struct UBP_GoldReward_C_Get_EarnedGoldText_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_GoldReward.BP_GoldReward_C.BeginGoldAnimation
struct UBP_GoldReward_C_BeginGoldAnimation_Params
{
};

// Function BP_GoldReward.BP_GoldReward_C.MergeGold
struct UBP_GoldReward_C_MergeGold_Params
{
};

// Function BP_GoldReward.BP_GoldReward_C.ExecuteUbergraph_BP_GoldReward
struct UBP_GoldReward_C_ExecuteUbergraph_BP_GoldReward_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
