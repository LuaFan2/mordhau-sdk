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

// Function BP_Shortspear_ViperShaft.BP_Shortspear_ViperShaft_C.UserConstructionScript
struct UBP_Shortspear_ViperShaft_C_UserConstructionScript_Params
{
};

// Function BP_Shortspear_ViperShaft.BP_Shortspear_ViperShaft_C.ReceiveBeginPlay
struct UBP_Shortspear_ViperShaft_C_ReceiveBeginPlay_Params
{
};

// Function BP_Shortspear_ViperShaft.BP_Shortspear_ViperShaft_C.ReceiveActorBeginOverlap
struct UBP_Shortspear_ViperShaft_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Shortspear_ViperShaft.BP_Shortspear_ViperShaft_C.ReceiveTick
struct UBP_Shortspear_ViperShaft_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Shortspear_ViperShaft.BP_Shortspear_ViperShaft_C.ExecuteUbergraph_BP_Shortspear_ViperShaft
struct UBP_Shortspear_ViperShaft_C_ExecuteUbergraph_BP_Shortspear_ViperShaft_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
