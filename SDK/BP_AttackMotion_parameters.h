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

// Function BP_AttackMotion.BP_AttackMotion_C.ComputeDir
struct UBP_AttackMotion_C_ComputeDir_Params
{
	struct FTransform                                  CurHand;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FTransform                                  TargHand;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Out;                                                      // (Parm, OutParm, IsPlainOldData)
};

// Function BP_AttackMotion.BP_AttackMotion_C.CalculateBlendTime
struct UBP_AttackMotion_C_CalculateBlendTime_Params
{
	struct FTransform*                                 Pose;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FTransform*                                 AnimPose;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
