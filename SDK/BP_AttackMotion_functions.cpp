
#include "../SDK.h"

// Name: Mordhau, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_AttackMotion.BP_AttackMotion_C.ComputeDir
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform              CurHand                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FTransform              TargHand                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Out                            (Parm, OutParm, IsPlainOldData)

void UBP_AttackMotion_C::ComputeDir(const struct FTransform& CurHand, const struct FTransform& TargHand, struct FVector* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AttackMotion.BP_AttackMotion_C.ComputeDir");

	UBP_AttackMotion_C_ComputeDir_Params params;
	params.CurHand = CurHand;
	params.TargHand = TargHand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function BP_AttackMotion.BP_AttackMotion_C.CalculateBlendTime
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform*             Pose                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FTransform*             AnimPose                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBP_AttackMotion_C::CalculateBlendTime(struct FTransform* Pose, struct FTransform* AnimPose)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AttackMotion.BP_AttackMotion_C.CalculateBlendTime");

	UBP_AttackMotion_C_CalculateBlendTime_Params params;
	params.Pose = Pose;
	params.AnimPose = AnimPose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
