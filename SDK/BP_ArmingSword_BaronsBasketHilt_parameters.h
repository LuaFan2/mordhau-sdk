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

// Function BP_ArmingSword_BaronsBasketHilt.BP_ArmingSword_BaronsBasketHilt_C.UserConstructionScript
struct UBP_ArmingSword_BaronsBasketHilt_C_UserConstructionScript_Params
{
};

// Function BP_ArmingSword_BaronsBasketHilt.BP_ArmingSword_BaronsBasketHilt_C.ReceiveBeginPlay
struct UBP_ArmingSword_BaronsBasketHilt_C_ReceiveBeginPlay_Params
{
};

// Function BP_ArmingSword_BaronsBasketHilt.BP_ArmingSword_BaronsBasketHilt_C.ReceiveActorBeginOverlap
struct UBP_ArmingSword_BaronsBasketHilt_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ArmingSword_BaronsBasketHilt.BP_ArmingSword_BaronsBasketHilt_C.ReceiveTick
struct UBP_ArmingSword_BaronsBasketHilt_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ArmingSword_BaronsBasketHilt.BP_ArmingSword_BaronsBasketHilt_C.ExecuteUbergraph_BP_ArmingSword_BaronsBasketHilt
struct UBP_ArmingSword_BaronsBasketHilt_C_ExecuteUbergraph_BP_ArmingSword_BaronsBasketHilt_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
