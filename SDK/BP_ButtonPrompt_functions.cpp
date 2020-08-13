
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

// Function BP_ButtonPrompt.BP_ButtonPrompt_C.RefreshIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_ButtonPrompt_C::RefreshIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ButtonPrompt.BP_ButtonPrompt_C.RefreshIcon");

	UBP_ButtonPrompt_C_RefreshIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ButtonPrompt.BP_ButtonPrompt_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ActionName                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   DisplayedText                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_ButtonPrompt_C::Update(const struct FName& ActionName, const struct FText& DisplayedText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ButtonPrompt.BP_ButtonPrompt_C.Update");

	UBP_ButtonPrompt_C_Update_Params params;
	params.ActionName = ActionName;
	params.DisplayedText = DisplayedText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ButtonPrompt.BP_ButtonPrompt_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_ButtonPrompt_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ButtonPrompt.BP_ButtonPrompt_C.Construct");

	UBP_ButtonPrompt_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ButtonPrompt.BP_ButtonPrompt_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ButtonPrompt_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ButtonPrompt.BP_ButtonPrompt_C.PreConstruct");

	UBP_ButtonPrompt_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ButtonPrompt.BP_ButtonPrompt_C.ExecuteUbergraph_BP_ButtonPrompt
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ButtonPrompt_C::ExecuteUbergraph_BP_ButtonPrompt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ButtonPrompt.BP_ButtonPrompt_C.ExecuteUbergraph_BP_ButtonPrompt");

	UBP_ButtonPrompt_C_ExecuteUbergraph_BP_ButtonPrompt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
