
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

// Function BP_GameModeEntry.BP_GameModeEntry_C.GetVisibility_3
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_GameModeEntry_C::GetVisibility_3()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameModeEntry.BP_GameModeEntry_C.GetVisibility_3");

	UBP_GameModeEntry_C_GetVisibility_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_GameModeEntry.BP_GameModeEntry_C.OnCheckStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GameModeEntry_C::OnCheckStateChanged(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameModeEntry.BP_GameModeEntry_C.OnCheckStateChanged");

	UBP_GameModeEntry_C_OnCheckStateChanged_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameModeEntry.BP_GameModeEntry_C.RemoveCheckboxes
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GameModeEntry_C::RemoveCheckboxes()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameModeEntry.BP_GameModeEntry_C.RemoveCheckboxes");

	UBP_GameModeEntry_C_RemoveCheckboxes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameModeEntry.BP_GameModeEntry_C.UpdatePlayerCounts
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    PlayerCounts                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    Selected                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_GameModeEntry_C::UpdatePlayerCounts(TArray<int>* PlayerCounts, TArray<int>* Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameModeEntry.BP_GameModeEntry_C.UpdatePlayerCounts");

	UBP_GameModeEntry_C_UpdatePlayerCounts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerCounts != nullptr)
		*PlayerCounts = params.PlayerCounts;
	if (Selected != nullptr)
		*Selected = params.Selected;
}


// Function BP_GameModeEntry.BP_GameModeEntry_C.GetVisibility_2
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_GameModeEntry_C::GetVisibility_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameModeEntry.BP_GameModeEntry_C.GetVisibility_2");

	UBP_GameModeEntry_C_GetVisibility_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_GameModeEntry.BP_GameModeEntry_C.AddCheckbox
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Player_Count                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GameModeEntry_C::AddCheckbox(int Player_Count, bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameModeEntry.BP_GameModeEntry_C.AddCheckbox");

	UBP_GameModeEntry_C_AddCheckbox_Params params;
	params.Player_Count = Player_Count;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameModeEntry.BP_GameModeEntry_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_GameModeEntry_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameModeEntry.BP_GameModeEntry_C.GetVisibility_1");

	UBP_GameModeEntry_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_GameModeEntry.BP_GameModeEntry_C.Deselect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_GameModeEntry_C::Deselect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameModeEntry.BP_GameModeEntry_C.Deselect");

	UBP_GameModeEntry_C_Deselect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameModeEntry.BP_GameModeEntry_C.Select
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_GameModeEntry_C::Select()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameModeEntry.BP_GameModeEntry_C.Select");

	UBP_GameModeEntry_C_Select_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameModeEntry.BP_GameModeEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_GameModeEntry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameModeEntry.BP_GameModeEntry_C.Construct");

	UBP_GameModeEntry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameModeEntry.BP_GameModeEntry_C.BndEvt__Row_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_GameModeEntry_C::BndEvt__Row_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameModeEntry.BP_GameModeEntry_C.BndEvt__Row_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature");

	UBP_GameModeEntry_C_BndEvt__Row_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameModeEntry.BP_GameModeEntry_C.BndEvt__EntryButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBP_GameModeEntry_C::BndEvt__EntryButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameModeEntry.BP_GameModeEntry_C.BndEvt__EntryButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UBP_GameModeEntry_C_BndEvt__EntryButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameModeEntry.BP_GameModeEntry_C.BndEvt__EntryButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBP_GameModeEntry_C::BndEvt__EntryButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameModeEntry.BP_GameModeEntry_C.BndEvt__EntryButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UBP_GameModeEntry_C_BndEvt__EntryButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameModeEntry.BP_GameModeEntry_C.BndEvt__InfoButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBP_GameModeEntry_C::BndEvt__InfoButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameModeEntry.BP_GameModeEntry_C.BndEvt__InfoButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UBP_GameModeEntry_C_BndEvt__InfoButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameModeEntry.BP_GameModeEntry_C.BndEvt__InfoButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBP_GameModeEntry_C::BndEvt__InfoButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameModeEntry.BP_GameModeEntry_C.BndEvt__InfoButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UBP_GameModeEntry_C_BndEvt__InfoButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameModeEntry.BP_GameModeEntry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GameModeEntry_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameModeEntry.BP_GameModeEntry_C.PreConstruct");

	UBP_GameModeEntry_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameModeEntry.BP_GameModeEntry_C.BndEvt__BP_Checkbox_K2Node_ComponentBoundEvent_4_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GameModeEntry_C::BndEvt__BP_Checkbox_K2Node_ComponentBoundEvent_4_OnCheckStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameModeEntry.BP_GameModeEntry_C.BndEvt__BP_Checkbox_K2Node_ComponentBoundEvent_4_OnCheckStateChanged__DelegateSignature");

	UBP_GameModeEntry_C_BndEvt__BP_Checkbox_K2Node_ComponentBoundEvent_4_OnCheckStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameModeEntry.BP_GameModeEntry_C.ExecuteUbergraph_BP_GameModeEntry
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GameModeEntry_C::ExecuteUbergraph_BP_GameModeEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameModeEntry.BP_GameModeEntry_C.ExecuteUbergraph_BP_GameModeEntry");

	UBP_GameModeEntry_C_ExecuteUbergraph_BP_GameModeEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameModeEntry.BP_GameModeEntry_C.SelectionChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsSelected                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GameModeEntry_C::SelectionChanged__DelegateSignature(bool bIsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameModeEntry.BP_GameModeEntry_C.SelectionChanged__DelegateSignature");

	UBP_GameModeEntry_C_SelectionChanged__DelegateSignature_Params params;
	params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
