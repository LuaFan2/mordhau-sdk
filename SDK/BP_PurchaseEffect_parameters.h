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

// Function BP_PurchaseEffect.BP_PurchaseEffect_C.UserConstructionScript
struct ABP_PurchaseEffect_C_UserConstructionScript_Params
{
};

// Function BP_PurchaseEffect.BP_PurchaseEffect_C.ReceiveBeginPlay
struct ABP_PurchaseEffect_C_ReceiveBeginPlay_Params
{
};

// Function BP_PurchaseEffect.BP_PurchaseEffect_C.ReceiveTick
struct ABP_PurchaseEffect_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PurchaseEffect.BP_PurchaseEffect_C.ExecuteUbergraph_BP_PurchaseEffect
struct ABP_PurchaseEffect_C_ExecuteUbergraph_BP_PurchaseEffect_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
