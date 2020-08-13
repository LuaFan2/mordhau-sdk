
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

// Function BP_SpawnScreenPoint.BP_SpawnScreenPoint_C.UpdateScreenPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CapturePoint_C*      Cap_Point                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SpawnScreenPoint_C::UpdateScreenPosition(class ABP_CapturePoint_C* Cap_Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnScreenPoint.BP_SpawnScreenPoint_C.UpdateScreenPosition");

	UBP_SpawnScreenPoint_C_UpdateScreenPosition_Params params;
	params.Cap_Point = Cap_Point;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpawnScreenPoint.BP_SpawnScreenPoint_C.SetSelectable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SpawnScreenPoint_C::SetSelectable(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnScreenPoint.BP_SpawnScreenPoint_C.SetSelectable");

	UBP_SpawnScreenPoint_C_SetSelectable_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpawnScreenPoint.BP_SpawnScreenPoint_C.SetSelected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SpawnScreenPoint_C::SetSelected(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnScreenPoint.BP_SpawnScreenPoint_C.SetSelected");

	UBP_SpawnScreenPoint_C_SetSelected_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpawnScreenPoint.BP_SpawnScreenPoint_C.Update
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_SpawnScreenPoint_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnScreenPoint.BP_SpawnScreenPoint_C.Update");

	UBP_SpawnScreenPoint_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpawnScreenPoint.BP_SpawnScreenPoint_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CapturePoint_C*      InCapturePoint                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBP_FrontlineSpawnScreen_C* FrontlineSpawnScreen_Ref       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_SpawnScreenPoint_C::Initialize(class ABP_CapturePoint_C* InCapturePoint, class UBP_FrontlineSpawnScreen_C* FrontlineSpawnScreen_Ref)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnScreenPoint.BP_SpawnScreenPoint_C.Initialize");

	UBP_SpawnScreenPoint_C_Initialize_Params params;
	params.InCapturePoint = InCapturePoint;
	params.FrontlineSpawnScreen_Ref = FrontlineSpawnScreen_Ref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpawnScreenPoint.BP_SpawnScreenPoint_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_SpawnScreenPoint_C::BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnScreenPoint.BP_SpawnScreenPoint_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBP_SpawnScreenPoint_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpawnScreenPoint.BP_SpawnScreenPoint_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_49_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_SpawnScreenPoint_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_49_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnScreenPoint.BP_SpawnScreenPoint_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_49_OnButtonClickedEvent__DelegateSignature");

	UBP_SpawnScreenPoint_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_49_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpawnScreenPoint.BP_SpawnScreenPoint_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SpawnScreenPoint_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnScreenPoint.BP_SpawnScreenPoint_C.Tick");

	UBP_SpawnScreenPoint_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpawnScreenPoint.BP_SpawnScreenPoint_C.Select
// (BlueprintCallable, BlueprintEvent)

void UBP_SpawnScreenPoint_C::Select()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnScreenPoint.BP_SpawnScreenPoint_C.Select");

	UBP_SpawnScreenPoint_C_Select_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpawnScreenPoint.BP_SpawnScreenPoint_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_SpawnScreenPoint_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnScreenPoint.BP_SpawnScreenPoint_C.Construct");

	UBP_SpawnScreenPoint_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpawnScreenPoint.BP_SpawnScreenPoint_C.ExecuteUbergraph_BP_SpawnScreenPoint
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SpawnScreenPoint_C::ExecuteUbergraph_BP_SpawnScreenPoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnScreenPoint.BP_SpawnScreenPoint_C.ExecuteUbergraph_BP_SpawnScreenPoint");

	UBP_SpawnScreenPoint_C_ExecuteUbergraph_BP_SpawnScreenPoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
