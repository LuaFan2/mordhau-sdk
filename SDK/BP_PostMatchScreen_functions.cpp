
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

// Function BP_PostMatchScreen.BP_PostMatchScreen_C.Select Tab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_ReusableNavTabButton_C* Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_PostMatchScreen_C::Select_Tab(class UBP_ReusableNavTabButton_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PostMatchScreen.BP_PostMatchScreen_C.Select Tab");

	UBP_PostMatchScreen_C_Select_Tab_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PostMatchScreen.BP_PostMatchScreen_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBP_PostMatchScreen_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PostMatchScreen.BP_PostMatchScreen_C.OnKeyDown");

	UBP_PostMatchScreen_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PostMatchScreen.BP_PostMatchScreen_C.Show
// (BlueprintCallable, BlueprintEvent)

void UBP_PostMatchScreen_C::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PostMatchScreen.BP_PostMatchScreen_C.Show");

	UBP_PostMatchScreen_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PostMatchScreen.BP_PostMatchScreen_C.ExecuteUbergraph_BP_PostMatchScreen
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PostMatchScreen_C::ExecuteUbergraph_BP_PostMatchScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PostMatchScreen.BP_PostMatchScreen_C.ExecuteUbergraph_BP_PostMatchScreen");

	UBP_PostMatchScreen_C_ExecuteUbergraph_BP_PostMatchScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
