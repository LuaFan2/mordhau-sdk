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

// Function BP_CasualRankWidget.BP_CasualRankWidget_C.UpdateFromSuppliedXP
struct UBP_CasualRankWidget_C_UpdateFromSuppliedXP_Params
{
	int                                                SuppliedXP;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CasualRankWidget.BP_CasualRankWidget_C.GetToolTipText_1
struct UBP_CasualRankWidget_C_GetToolTipText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_CasualRankWidget.BP_CasualRankWidget_C.UpdateRankProgress
struct UBP_CasualRankWidget_C_UpdateRankProgress_Params
{
	int                                                XP;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CasualRankWidget.BP_CasualRankWidget_C.Get_RemainingXPText_Text_1
struct UBP_CasualRankWidget_C_Get_RemainingXPText_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_CasualRankWidget.BP_CasualRankWidget_C.Get_XPProgressBar_Percent_1
struct UBP_CasualRankWidget_C_Get_XPProgressBar_Percent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CasualRankWidget.BP_CasualRankWidget_C.Update
struct UBP_CasualRankWidget_C_Update_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
