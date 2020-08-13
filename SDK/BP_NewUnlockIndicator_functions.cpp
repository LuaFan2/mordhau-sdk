
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

// Function BP_NewUnlockIndicator.BP_NewUnlockIndicator_C.Show Indicator
// (BlueprintCallable, BlueprintEvent)

void UBP_NewUnlockIndicator_C::Show_Indicator()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NewUnlockIndicator.BP_NewUnlockIndicator_C.Show Indicator");

	UBP_NewUnlockIndicator_C_Show_Indicator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NewUnlockIndicator.BP_NewUnlockIndicator_C.Hide Indicator
// (BlueprintCallable, BlueprintEvent)

void UBP_NewUnlockIndicator_C::Hide_Indicator()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NewUnlockIndicator.BP_NewUnlockIndicator_C.Hide Indicator");

	UBP_NewUnlockIndicator_C_Hide_Indicator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NewUnlockIndicator.BP_NewUnlockIndicator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_NewUnlockIndicator_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NewUnlockIndicator.BP_NewUnlockIndicator_C.Construct");

	UBP_NewUnlockIndicator_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NewUnlockIndicator.BP_NewUnlockIndicator_C.ExecuteUbergraph_BP_NewUnlockIndicator
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_NewUnlockIndicator_C::ExecuteUbergraph_BP_NewUnlockIndicator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NewUnlockIndicator.BP_NewUnlockIndicator_C.ExecuteUbergraph_BP_NewUnlockIndicator");

	UBP_NewUnlockIndicator_C_ExecuteUbergraph_BP_NewUnlockIndicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
