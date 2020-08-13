
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

// Function BP_FrontlineKillObjectiveWrapper.BP_FrontlineKillObjectiveWrapper_C.IsInObjectiveArea
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           InArea                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_FrontlineKillObjectiveWrapper_C::IsInObjectiveArea(const struct FVector& Location, bool* InArea)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineKillObjectiveWrapper.BP_FrontlineKillObjectiveWrapper_C.IsInObjectiveArea");

	ABP_FrontlineKillObjectiveWrapper_C_IsInObjectiveArea_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InArea != nullptr)
		*InArea = params.InArea;
}


// Function BP_FrontlineKillObjectiveWrapper.BP_FrontlineKillObjectiveWrapper_C.IsCompleted
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Completed                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_FrontlineKillObjectiveWrapper_C::IsCompleted(bool* Completed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineKillObjectiveWrapper.BP_FrontlineKillObjectiveWrapper_C.IsCompleted");

	ABP_FrontlineKillObjectiveWrapper_C_IsCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Completed != nullptr)
		*Completed = params.Completed;
}


// Function BP_FrontlineKillObjectiveWrapper.BP_FrontlineKillObjectiveWrapper_C.GetObjectiveProgress
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                          Progress                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_FrontlineKillObjectiveWrapper_C::GetObjectiveProgress(float* Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineKillObjectiveWrapper.BP_FrontlineKillObjectiveWrapper_C.GetObjectiveProgress");

	ABP_FrontlineKillObjectiveWrapper_C_GetObjectiveProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Progress != nullptr)
		*Progress = params.Progress;
}


// Function BP_FrontlineKillObjectiveWrapper.BP_FrontlineKillObjectiveWrapper_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FrontlineKillObjectiveWrapper_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineKillObjectiveWrapper.BP_FrontlineKillObjectiveWrapper_C.UserConstructionScript");

	ABP_FrontlineKillObjectiveWrapper_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineKillObjectiveWrapper.BP_FrontlineKillObjectiveWrapper_C.OnAnyObjectiveProgressChanged
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FrontlineKillObjectiveWrapper_C::OnAnyObjectiveProgressChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineKillObjectiveWrapper.BP_FrontlineKillObjectiveWrapper_C.OnAnyObjectiveProgressChanged");

	ABP_FrontlineKillObjectiveWrapper_C_OnAnyObjectiveProgressChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineKillObjectiveWrapper.BP_FrontlineKillObjectiveWrapper_C.OnEnemyGainedPrerequisites
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FrontlineKillObjectiveWrapper_C::OnEnemyGainedPrerequisites()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineKillObjectiveWrapper.BP_FrontlineKillObjectiveWrapper_C.OnEnemyGainedPrerequisites");

	ABP_FrontlineKillObjectiveWrapper_C_OnEnemyGainedPrerequisites_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineKillObjectiveWrapper.BP_FrontlineKillObjectiveWrapper_C.OnEnemyLostPrerequisites
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FrontlineKillObjectiveWrapper_C::OnEnemyLostPrerequisites()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineKillObjectiveWrapper.BP_FrontlineKillObjectiveWrapper_C.OnEnemyLostPrerequisites");

	ABP_FrontlineKillObjectiveWrapper_C_OnEnemyLostPrerequisites_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineKillObjectiveWrapper.BP_FrontlineKillObjectiveWrapper_C.OnInitialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CapturePoint_C*      Point                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FrontlineKillObjectiveWrapper_C::OnInitialize(class ABP_CapturePoint_C* Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineKillObjectiveWrapper.BP_FrontlineKillObjectiveWrapper_C.OnInitialize");

	ABP_FrontlineKillObjectiveWrapper_C_OnInitialize_Params params;
	params.Point = Point;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineKillObjectiveWrapper.BP_FrontlineKillObjectiveWrapper_C.OnUpdateUIWidgets
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FrontlineKillObjectiveWrapper_C::OnUpdateUIWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineKillObjectiveWrapper.BP_FrontlineKillObjectiveWrapper_C.OnUpdateUIWidgets");

	ABP_FrontlineKillObjectiveWrapper_C_OnUpdateUIWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineKillObjectiveWrapper.BP_FrontlineKillObjectiveWrapper_C.ExecuteUbergraph_BP_FrontlineKillObjectiveWrapper
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FrontlineKillObjectiveWrapper_C::ExecuteUbergraph_BP_FrontlineKillObjectiveWrapper(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineKillObjectiveWrapper.BP_FrontlineKillObjectiveWrapper_C.ExecuteUbergraph_BP_FrontlineKillObjectiveWrapper");

	ABP_FrontlineKillObjectiveWrapper_C_ExecuteUbergraph_BP_FrontlineKillObjectiveWrapper_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
