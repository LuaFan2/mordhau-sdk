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

// Function BP_InteractWidgetFloater.BP_InteractWidgetFloater_C.UpdateProgress
struct UBP_InteractWidgetFloater_C_UpdateProgress_Params
{
	float                                              NewProgress;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_InteractWidgetFloater.BP_InteractWidgetFloater_C.Construct
struct UBP_InteractWidgetFloater_C_Construct_Params
{
};

// Function BP_InteractWidgetFloater.BP_InteractWidgetFloater_C.Tick
struct UBP_InteractWidgetFloater_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_InteractWidgetFloater.BP_InteractWidgetFloater_C.ExecuteUbergraph_BP_InteractWidgetFloater
struct UBP_InteractWidgetFloater_C_ExecuteUbergraph_BP_InteractWidgetFloater_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
