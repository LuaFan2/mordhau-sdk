
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

// Function BP_HomeScoreboardContainer.BP_HomeScoreboardContainer_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_HomeScoreboardContainer_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HomeScoreboardContainer.BP_HomeScoreboardContainer_C.GetVisibility_1");

	UBP_HomeScoreboardContainer_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_HomeScoreboardContainer.BP_HomeScoreboardContainer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_HomeScoreboardContainer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HomeScoreboardContainer.BP_HomeScoreboardContainer_C.Construct");

	UBP_HomeScoreboardContainer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HomeScoreboardContainer.BP_HomeScoreboardContainer_C.OnShown
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_HomeScoreboardContainer_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HomeScoreboardContainer.BP_HomeScoreboardContainer_C.OnShown");

	UBP_HomeScoreboardContainer_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HomeScoreboardContainer.BP_HomeScoreboardContainer_C.OnHidden
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_HomeScoreboardContainer_C::OnHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HomeScoreboardContainer.BP_HomeScoreboardContainer_C.OnHidden");

	UBP_HomeScoreboardContainer_C_OnHidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HomeScoreboardContainer.BP_HomeScoreboardContainer_C.ExecuteUbergraph_BP_HomeScoreboardContainer
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_HomeScoreboardContainer_C::ExecuteUbergraph_BP_HomeScoreboardContainer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HomeScoreboardContainer.BP_HomeScoreboardContainer_C.ExecuteUbergraph_BP_HomeScoreboardContainer");

	UBP_HomeScoreboardContainer_C_ExecuteUbergraph_BP_HomeScoreboardContainer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
