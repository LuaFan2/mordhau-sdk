
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

// Function BP_GenericEndScreen.BP_GenericEndScreen_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_GenericEndScreen_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericEndScreen.BP_GenericEndScreen_C.GetVisibility_1");

	UBP_GenericEndScreen_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_GenericEndScreen.BP_GenericEndScreen_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBP_GenericEndScreen_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericEndScreen.BP_GenericEndScreen_C.OnKeyDown");

	UBP_GenericEndScreen_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_GenericEndScreen.BP_GenericEndScreen_C.GetText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_GenericEndScreen_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericEndScreen.BP_GenericEndScreen_C.GetText_1");

	UBP_GenericEndScreen_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_GenericEndScreen.BP_GenericEndScreen_C.ShowScoreboard
// (BlueprintCallable, BlueprintEvent)

void UBP_GenericEndScreen_C::ShowScoreboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericEndScreen.BP_GenericEndScreen_C.ShowScoreboard");

	UBP_GenericEndScreen_C_ShowScoreboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GenericEndScreen.BP_GenericEndScreen_C.HideScoreboard
// (BlueprintCallable, BlueprintEvent)

void UBP_GenericEndScreen_C::HideScoreboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericEndScreen.BP_GenericEndScreen_C.HideScoreboard");

	UBP_GenericEndScreen_C_HideScoreboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GenericEndScreen.BP_GenericEndScreen_C.BndEvt__ScoreboardTab_K2Node_ComponentBoundEvent_0_ButtonSelected__DelegateSignature
// (BlueprintEvent)

void UBP_GenericEndScreen_C::BndEvt__ScoreboardTab_K2Node_ComponentBoundEvent_0_ButtonSelected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericEndScreen.BP_GenericEndScreen_C.BndEvt__ScoreboardTab_K2Node_ComponentBoundEvent_0_ButtonSelected__DelegateSignature");

	UBP_GenericEndScreen_C_BndEvt__ScoreboardTab_K2Node_ComponentBoundEvent_0_ButtonSelected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GenericEndScreen.BP_GenericEndScreen_C.BndEvt__MapVoteTab_K2Node_ComponentBoundEvent_2_ButtonSelected__DelegateSignature
// (BlueprintEvent)

void UBP_GenericEndScreen_C::BndEvt__MapVoteTab_K2Node_ComponentBoundEvent_2_ButtonSelected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericEndScreen.BP_GenericEndScreen_C.BndEvt__MapVoteTab_K2Node_ComponentBoundEvent_2_ButtonSelected__DelegateSignature");

	UBP_GenericEndScreen_C_BndEvt__MapVoteTab_K2Node_ComponentBoundEvent_2_ButtonSelected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GenericEndScreen.BP_GenericEndScreen_C.BndEvt__ScoreboardTab_K2Node_ComponentBoundEvent_3_ButtonDeselected__DelegateSignature
// (BlueprintEvent)

void UBP_GenericEndScreen_C::BndEvt__ScoreboardTab_K2Node_ComponentBoundEvent_3_ButtonDeselected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericEndScreen.BP_GenericEndScreen_C.BndEvt__ScoreboardTab_K2Node_ComponentBoundEvent_3_ButtonDeselected__DelegateSignature");

	UBP_GenericEndScreen_C_BndEvt__ScoreboardTab_K2Node_ComponentBoundEvent_3_ButtonDeselected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GenericEndScreen.BP_GenericEndScreen_C.ShowEndScreen
// (BlueprintCallable, BlueprintEvent)

void UBP_GenericEndScreen_C::ShowEndScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericEndScreen.BP_GenericEndScreen_C.ShowEndScreen");

	UBP_GenericEndScreen_C_ShowEndScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GenericEndScreen.BP_GenericEndScreen_C.ExecuteUbergraph_BP_GenericEndScreen
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GenericEndScreen_C::ExecuteUbergraph_BP_GenericEndScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericEndScreen.BP_GenericEndScreen_C.ExecuteUbergraph_BP_GenericEndScreen");

	UBP_GenericEndScreen_C_ExecuteUbergraph_BP_GenericEndScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
