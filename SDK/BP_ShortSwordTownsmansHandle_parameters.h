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

// Function BP_ShortSwordTownsmansHandle.BP_ShortSwordTownsmansHandle_C.UserConstructionScript
struct UBP_ShortSwordTownsmansHandle_C_UserConstructionScript_Params
{
};

// Function BP_ShortSwordTownsmansHandle.BP_ShortSwordTownsmansHandle_C.ReceiveBeginPlay
struct UBP_ShortSwordTownsmansHandle_C_ReceiveBeginPlay_Params
{
};

// Function BP_ShortSwordTownsmansHandle.BP_ShortSwordTownsmansHandle_C.ReceiveActorBeginOverlap
struct UBP_ShortSwordTownsmansHandle_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ShortSwordTownsmansHandle.BP_ShortSwordTownsmansHandle_C.ReceiveTick
struct UBP_ShortSwordTownsmansHandle_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ShortSwordTownsmansHandle.BP_ShortSwordTownsmansHandle_C.ExecuteUbergraph_BP_ShortSwordTownsmansHandle
struct UBP_ShortSwordTownsmansHandle_C_ExecuteUbergraph_BP_ShortSwordTownsmansHandle_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
