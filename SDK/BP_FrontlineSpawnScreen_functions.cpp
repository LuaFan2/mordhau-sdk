
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

// Function BP_FrontlineSpawnScreen.BP_FrontlineSpawnScreen_C.ShowFrontlineSpawnScreen
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_FrontlineSpawnScreen_C::ShowFrontlineSpawnScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineSpawnScreen.BP_FrontlineSpawnScreen_C.ShowFrontlineSpawnScreen");

	UBP_FrontlineSpawnScreen_C_ShowFrontlineSpawnScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineSpawnScreen.BP_FrontlineSpawnScreen_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FrontlineSpawnScreen_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineSpawnScreen.BP_FrontlineSpawnScreen_C.Tick");

	UBP_FrontlineSpawnScreen_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineSpawnScreen.BP_FrontlineSpawnScreen_C.Show
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_FrontlineSpawnScreen_C::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineSpawnScreen.BP_FrontlineSpawnScreen_C.Show");

	UBP_FrontlineSpawnScreen_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineSpawnScreen.BP_FrontlineSpawnScreen_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_FrontlineSpawnScreen_C::Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineSpawnScreen.BP_FrontlineSpawnScreen_C.Hide");

	UBP_FrontlineSpawnScreen_C_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineSpawnScreen.BP_FrontlineSpawnScreen_C.BndEvt__ChangeLoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_FrontlineSpawnScreen_C::BndEvt__ChangeLoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineSpawnScreen.BP_FrontlineSpawnScreen_C.BndEvt__ChangeLoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBP_FrontlineSpawnScreen_C_BndEvt__ChangeLoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineSpawnScreen.BP_FrontlineSpawnScreen_C.ExecuteUbergraph_BP_FrontlineSpawnScreen
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FrontlineSpawnScreen_C::ExecuteUbergraph_BP_FrontlineSpawnScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineSpawnScreen.BP_FrontlineSpawnScreen_C.ExecuteUbergraph_BP_FrontlineSpawnScreen");

	UBP_FrontlineSpawnScreen_C_ExecuteUbergraph_BP_FrontlineSpawnScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
