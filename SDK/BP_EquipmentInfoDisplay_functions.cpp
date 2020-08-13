
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

// Function BP_EquipmentInfoDisplay.BP_EquipmentInfoDisplay_C.GetText_2
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_EquipmentInfoDisplay_C::GetText_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentInfoDisplay.BP_EquipmentInfoDisplay_C.GetText_2");

	UBP_EquipmentInfoDisplay_C_GetText_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentInfoDisplay.BP_EquipmentInfoDisplay_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_EquipmentInfoDisplay_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentInfoDisplay.BP_EquipmentInfoDisplay_C.GetVisibility_1");

	UBP_EquipmentInfoDisplay_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentInfoDisplay.BP_EquipmentInfoDisplay_C.GetText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_EquipmentInfoDisplay_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentInfoDisplay.BP_EquipmentInfoDisplay_C.GetText_1");

	UBP_EquipmentInfoDisplay_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentInfoDisplay.BP_EquipmentInfoDisplay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_EquipmentInfoDisplay_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentInfoDisplay.BP_EquipmentInfoDisplay_C.Construct");

	UBP_EquipmentInfoDisplay_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EquipmentInfoDisplay.BP_EquipmentInfoDisplay_C.OnRestockedAmmo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMordhauEquipment*       Equipment                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_EquipmentInfoDisplay_C::OnRestockedAmmo(class AMordhauEquipment* Equipment, int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentInfoDisplay.BP_EquipmentInfoDisplay_C.OnRestockedAmmo");

	UBP_EquipmentInfoDisplay_C_OnRestockedAmmo_Params params;
	params.Equipment = Equipment;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EquipmentInfoDisplay.BP_EquipmentInfoDisplay_C.On AddAmmoAnim Finish
// (BlueprintCallable, BlueprintEvent)

void UBP_EquipmentInfoDisplay_C::On_AddAmmoAnim_Finish()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentInfoDisplay.BP_EquipmentInfoDisplay_C.On AddAmmoAnim Finish");

	UBP_EquipmentInfoDisplay_C_On_AddAmmoAnim_Finish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EquipmentInfoDisplay.BP_EquipmentInfoDisplay_C.ExecuteUbergraph_BP_EquipmentInfoDisplay
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_EquipmentInfoDisplay_C::ExecuteUbergraph_BP_EquipmentInfoDisplay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentInfoDisplay.BP_EquipmentInfoDisplay_C.ExecuteUbergraph_BP_EquipmentInfoDisplay");

	UBP_EquipmentInfoDisplay_C_ExecuteUbergraph_BP_EquipmentInfoDisplay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
