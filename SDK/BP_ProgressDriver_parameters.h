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

// Function BP_ProgressDriver.BP_ProgressDriver_C.CanInteract
struct ABP_ProgressDriver_C_CanInteract_Params
{
	class AMordhauCharacter**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ProgressDriver.BP_ProgressDriver_C.UserConstructionScript
struct ABP_ProgressDriver_C_UserConstructionScript_Params
{
};

// Function BP_ProgressDriver.BP_ProgressDriver_C.ReceiveBeginPlay
struct ABP_ProgressDriver_C_ReceiveBeginPlay_Params
{
};

// Function BP_ProgressDriver.BP_ProgressDriver_C.ReceiveTick
struct ABP_ProgressDriver_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ProgressDriver.BP_ProgressDriver_C.OnValueToggled
struct ABP_ProgressDriver_C_OnValueToggled_Params
{
};

// Function BP_ProgressDriver.BP_ProgressDriver_C.ExecuteUbergraph_BP_ProgressDriver
struct ABP_ProgressDriver_C_ExecuteUbergraph_BP_ProgressDriver_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
