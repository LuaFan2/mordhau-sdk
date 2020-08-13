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

// Function BP_Objectives.BP_Objectives_C.Get_ObjectiveBorder_Visibility_1
struct UBP_Objectives_C_Get_ObjectiveBorder_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Objectives.BP_Objectives_C.Update Team Image
struct UBP_Objectives_C_Update_Team_Image_Params
{
};

// Function BP_Objectives.BP_Objectives_C.Hide
struct UBP_Objectives_C_Hide_Params
{
};

// Function BP_Objectives.BP_Objectives_C.Show
struct UBP_Objectives_C_Show_Params
{
	struct FText                                       Description;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Header;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UTexture2D*                                  Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Objectives.BP_Objectives_C.FadeOutDone
struct UBP_Objectives_C_FadeOutDone_Params
{
};

// Function BP_Objectives.BP_Objectives_C.ExecuteUbergraph_BP_Objectives
struct UBP_Objectives_C_ExecuteUbergraph_BP_Objectives_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
