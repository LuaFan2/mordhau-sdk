
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

// Function BP_MOTD.BP_MOTD_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBP_MOTD_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MOTD.BP_MOTD_C.OnKeyDown");

	UBP_MOTD_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MOTD.BP_MOTD_C.Get_TextBlock_1_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_MOTD_C::Get_TextBlock_1_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MOTD.BP_MOTD_C.Get_TextBlock_1_Text_1");

	UBP_MOTD_C_Get_TextBlock_1_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MOTD.BP_MOTD_C.Hide
// (BlueprintCallable, BlueprintEvent)

void UBP_MOTD_C::Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MOTD.BP_MOTD_C.Hide");

	UBP_MOTD_C_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MOTD.BP_MOTD_C.Show
// (BlueprintCallable, BlueprintEvent)

void UBP_MOTD_C::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MOTD.BP_MOTD_C.Show");

	UBP_MOTD_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MOTD.BP_MOTD_C.OnHideAnimFinish
// (BlueprintCallable, BlueprintEvent)

void UBP_MOTD_C::OnHideAnimFinish()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MOTD.BP_MOTD_C.OnHideAnimFinish");

	UBP_MOTD_C_OnHideAnimFinish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MOTD.BP_MOTD_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_MOTD_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MOTD.BP_MOTD_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	UBP_MOTD_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MOTD.BP_MOTD_C.ExecuteUbergraph_BP_MOTD
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MOTD_C::ExecuteUbergraph_BP_MOTD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MOTD.BP_MOTD_C.ExecuteUbergraph_BP_MOTD");

	UBP_MOTD_C_ExecuteUbergraph_BP_MOTD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
