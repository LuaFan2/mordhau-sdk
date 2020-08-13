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

// Function BP_EnvironmentMovableLight.BP_EnvironmentMovableLight_C.UserConstructionScript
struct ABP_EnvironmentMovableLight_C_UserConstructionScript_Params
{
};

// Function BP_EnvironmentMovableLight.BP_EnvironmentMovableLight_C.ReceiveTick
struct ABP_EnvironmentMovableLight_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EnvironmentMovableLight.BP_EnvironmentMovableLight_C.ExecuteUbergraph_BP_EnvironmentMovableLight
struct ABP_EnvironmentMovableLight_C_ExecuteUbergraph_BP_EnvironmentMovableLight_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
