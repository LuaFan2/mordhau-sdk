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

// Function BP_Poleaxe_NailedShaft.BP_Poleaxe_NailedShaft_C.UserConstructionScript
struct UBP_Poleaxe_NailedShaft_C_UserConstructionScript_Params
{
};

// Function BP_Poleaxe_NailedShaft.BP_Poleaxe_NailedShaft_C.ReceiveBeginPlay
struct UBP_Poleaxe_NailedShaft_C_ReceiveBeginPlay_Params
{
};

// Function BP_Poleaxe_NailedShaft.BP_Poleaxe_NailedShaft_C.ReceiveActorBeginOverlap
struct UBP_Poleaxe_NailedShaft_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Poleaxe_NailedShaft.BP_Poleaxe_NailedShaft_C.ReceiveTick
struct UBP_Poleaxe_NailedShaft_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Poleaxe_NailedShaft.BP_Poleaxe_NailedShaft_C.ExecuteUbergraph_BP_Poleaxe_NailedShaft
struct UBP_Poleaxe_NailedShaft_C_ExecuteUbergraph_BP_Poleaxe_NailedShaft_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
