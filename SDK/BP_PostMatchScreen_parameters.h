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

// Function BP_PostMatchScreen.BP_PostMatchScreen_C.Select Tab
struct UBP_PostMatchScreen_C_Select_Tab_Params
{
	class UBP_ReusableNavTabButton_C*                  Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_PostMatchScreen.BP_PostMatchScreen_C.OnKeyDown
struct UBP_PostMatchScreen_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_PostMatchScreen.BP_PostMatchScreen_C.Show
struct UBP_PostMatchScreen_C_Show_Params
{
};

// Function BP_PostMatchScreen.BP_PostMatchScreen_C.ExecuteUbergraph_BP_PostMatchScreen
struct UBP_PostMatchScreen_C_ExecuteUbergraph_BP_PostMatchScreen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
