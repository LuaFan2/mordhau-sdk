
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

// Function BP_Rewards2.BP_Rewards2_C.FindProgressBarTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Next_Rank_XP                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Current_Rank_XP                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Current_XP                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Earned_XP                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Target                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Rewards2_C::FindProgressBarTarget(int Next_Rank_XP, int Current_Rank_XP, int Current_XP, int Earned_XP, float* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Rewards2.BP_Rewards2_C.FindProgressBarTarget");

	UBP_Rewards2_C_FindProgressBarTarget_Params params;
	params.Next_Rank_XP = Next_Rank_XP;
	params.Current_Rank_XP = Current_Rank_XP;
	params.Current_XP = Current_XP;
	params.Earned_XP = Earned_XP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Target != nullptr)
		*Target = params.Target;
}


// Function BP_Rewards2.BP_Rewards2_C.HandleRankUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_CasualRankWidget_C*  Casual_Rank_Widget_Ref         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_Rewards2_C::HandleRankUp(class UBP_CasualRankWidget_C* Casual_Rank_Widget_Ref)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Rewards2.BP_Rewards2_C.HandleRankUp");

	UBP_Rewards2_C_HandleRankUp_Params params;
	params.Casual_Rank_Widget_Ref = Casual_Rank_Widget_Ref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Rewards2.BP_Rewards2_C.XP Interpolation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_CasualRankWidget_C*  Casual_Rank_Widget_Ref         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Delta_Time                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Rewards2_C::XP_Interpolation(class UBP_CasualRankWidget_C* Casual_Rank_Widget_Ref, float Delta_Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Rewards2.BP_Rewards2_C.XP Interpolation");

	UBP_Rewards2_C_XP_Interpolation_Params params;
	params.Casual_Rank_Widget_Ref = Casual_Rank_Widget_Ref;
	params.Delta_Time = Delta_Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Rewards2.BP_Rewards2_C.InitializeRankValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_CasualRankWidget_C*  Casual_Rank_Widget_Ref         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_Rewards2_C::InitializeRankValues(class UBP_CasualRankWidget_C* Casual_Rank_Widget_Ref)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Rewards2.BP_Rewards2_C.InitializeRankValues");

	UBP_Rewards2_C_InitializeRankValues_Params params;
	params.Casual_Rank_Widget_Ref = Casual_Rank_Widget_Ref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Rewards2.BP_Rewards2_C.Get_EarnedXPText_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_Rewards2_C::Get_EarnedXPText_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Rewards2.BP_Rewards2_C.Get_EarnedXPText_Text_1");

	UBP_Rewards2_C_Get_EarnedXPText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Rewards2.BP_Rewards2_C.BeginXPSequence
// (BlueprintCallable, BlueprintEvent)

void UBP_Rewards2_C::BeginXPSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Rewards2.BP_Rewards2_C.BeginXPSequence");

	UBP_Rewards2_C_BeginXPSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Rewards2.BP_Rewards2_C.AddToXPBar
// (BlueprintCallable, BlueprintEvent)

void UBP_Rewards2_C::AddToXPBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Rewards2.BP_Rewards2_C.AddToXPBar");

	UBP_Rewards2_C_AddToXPBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Rewards2.BP_Rewards2_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Rewards2_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Rewards2.BP_Rewards2_C.Tick");

	UBP_Rewards2_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Rewards2.BP_Rewards2_C.RankUp
// (BlueprintCallable, BlueprintEvent)

void UBP_Rewards2_C::RankUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Rewards2.BP_Rewards2_C.RankUp");

	UBP_Rewards2_C_RankUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Rewards2.BP_Rewards2_C.ExitXP
// (BlueprintCallable, BlueprintEvent)

void UBP_Rewards2_C::ExitXP()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Rewards2.BP_Rewards2_C.ExitXP");

	UBP_Rewards2_C_ExitXP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Rewards2.BP_Rewards2_C.RankUpAnimDone
// (BlueprintCallable, BlueprintEvent)

void UBP_Rewards2_C::RankUpAnimDone()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Rewards2.BP_Rewards2_C.RankUpAnimDone");

	UBP_Rewards2_C_RankUpAnimDone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Rewards2.BP_Rewards2_C.MergeGold
// (BlueprintCallable, BlueprintEvent)

void UBP_Rewards2_C::MergeGold()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Rewards2.BP_Rewards2_C.MergeGold");

	UBP_Rewards2_C_MergeGold_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Rewards2.BP_Rewards2_C.RequestRewards
// (BlueprintCallable, BlueprintEvent)

void UBP_Rewards2_C::RequestRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Rewards2.BP_Rewards2_C.RequestRewards");

	UBP_Rewards2_C_RequestRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Rewards2.BP_Rewards2_C.RewardDropTimedOut
// (BlueprintCallable, BlueprintEvent)

void UBP_Rewards2_C::RewardDropTimedOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Rewards2.BP_Rewards2_C.RewardDropTimedOut");

	UBP_Rewards2_C_RewardDropTimedOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Rewards2.BP_Rewards2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_Rewards2_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Rewards2.BP_Rewards2_C.Construct");

	UBP_Rewards2_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Rewards2.BP_Rewards2_C.OnRewardsDropped
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bWasSuccessful                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Gold                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            XP                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Rewards2_C::OnRewardsDropped(bool bWasSuccessful, const struct FString& PlayerId, int Gold, int XP)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Rewards2.BP_Rewards2_C.OnRewardsDropped");

	UBP_Rewards2_C_OnRewardsDropped_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.PlayerId = PlayerId;
	params.Gold = Gold;
	params.XP = XP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Rewards2.BP_Rewards2_C.Enable
// (BlueprintCallable, BlueprintEvent)

void UBP_Rewards2_C::Enable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Rewards2.BP_Rewards2_C.Enable");

	UBP_Rewards2_C_Enable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Rewards2.BP_Rewards2_C.BeginGoldAnimation
// (BlueprintCallable, BlueprintEvent)

void UBP_Rewards2_C::BeginGoldAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Rewards2.BP_Rewards2_C.BeginGoldAnimation");

	UBP_Rewards2_C_BeginGoldAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Rewards2.BP_Rewards2_C.Update Player Widget
// (BlueprintCallable, BlueprintEvent)

void UBP_Rewards2_C::Update_Player_Widget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Rewards2.BP_Rewards2_C.Update Player Widget");

	UBP_Rewards2_C_Update_Player_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Rewards2.BP_Rewards2_C.ExecuteUbergraph_BP_Rewards2
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Rewards2_C::ExecuteUbergraph_BP_Rewards2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Rewards2.BP_Rewards2_C.ExecuteUbergraph_BP_Rewards2");

	UBP_Rewards2_C_ExecuteUbergraph_BP_Rewards2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Rewards2.BP_Rewards2_C.RewardsComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_Rewards2_C::RewardsComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Rewards2.BP_Rewards2_C.RewardsComplete__DelegateSignature");

	UBP_Rewards2_C_RewardsComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
