
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

// Function BP_Objectives.BP_Objectives_C.Get_ObjectiveBorder_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_Objectives_C::Get_ObjectiveBorder_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Objectives.BP_Objectives_C.Get_ObjectiveBorder_Visibility_1");

	UBP_Objectives_C_Get_ObjectiveBorder_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Objectives.BP_Objectives_C.Update Team Image
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_Objectives_C::Update_Team_Image()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Objectives.BP_Objectives_C.Update Team Image");

	UBP_Objectives_C_Update_Team_Image_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Objectives.BP_Objectives_C.Hide
// (BlueprintCallable, BlueprintEvent)

void UBP_Objectives_C::Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Objectives.BP_Objectives_C.Hide");

	UBP_Objectives_C_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Objectives.BP_Objectives_C.Show
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Description                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Header                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D*              Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Objectives_C::Show(const struct FText& Description, const struct FText& Header, class UTexture2D* Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Objectives.BP_Objectives_C.Show");

	UBP_Objectives_C_Show_Params params;
	params.Description = Description;
	params.Header = Header;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Objectives.BP_Objectives_C.FadeOutDone
// (BlueprintCallable, BlueprintEvent)

void UBP_Objectives_C::FadeOutDone()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Objectives.BP_Objectives_C.FadeOutDone");

	UBP_Objectives_C_FadeOutDone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Objectives.BP_Objectives_C.ExecuteUbergraph_BP_Objectives
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Objectives_C::ExecuteUbergraph_BP_Objectives(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Objectives.BP_Objectives_C.ExecuteUbergraph_BP_Objectives");

	UBP_Objectives_C_ExecuteUbergraph_BP_Objectives_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
