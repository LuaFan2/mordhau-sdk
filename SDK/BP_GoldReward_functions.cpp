
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

// Function BP_GoldReward.BP_GoldReward_C.Get_EarnedGoldText_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_GoldReward_C::Get_EarnedGoldText_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GoldReward.BP_GoldReward_C.Get_EarnedGoldText_Text_1");

	UBP_GoldReward_C_Get_EarnedGoldText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_GoldReward.BP_GoldReward_C.BeginGoldAnimation
// (BlueprintCallable, BlueprintEvent)

void UBP_GoldReward_C::BeginGoldAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GoldReward.BP_GoldReward_C.BeginGoldAnimation");

	UBP_GoldReward_C_BeginGoldAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GoldReward.BP_GoldReward_C.MergeGold
// (BlueprintCallable, BlueprintEvent)

void UBP_GoldReward_C::MergeGold()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GoldReward.BP_GoldReward_C.MergeGold");

	UBP_GoldReward_C_MergeGold_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GoldReward.BP_GoldReward_C.ExecuteUbergraph_BP_GoldReward
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GoldReward_C::ExecuteUbergraph_BP_GoldReward(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GoldReward.BP_GoldReward_C.ExecuteUbergraph_BP_GoldReward");

	UBP_GoldReward_C_ExecuteUbergraph_BP_GoldReward_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
