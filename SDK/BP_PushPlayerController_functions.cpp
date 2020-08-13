
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

// Function BP_PushPlayerController.BP_PushPlayerController_C.ShowCurrentObjective
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PlayHorn                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PushPlayerController_C::ShowCurrentObjective(bool PlayHorn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PushPlayerController.BP_PushPlayerController_C.ShowCurrentObjective");

	ABP_PushPlayerController_C_ShowCurrentObjective_Params params;
	params.PlayHorn = PlayHorn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PushPlayerController.BP_PushPlayerController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PushPlayerController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PushPlayerController.BP_PushPlayerController_C.UserConstructionScript");

	ABP_PushPlayerController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PushPlayerController.BP_PushPlayerController_C.OnAfterPossess
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn**                  APawn                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PushPlayerController_C::OnAfterPossess(class APawn** APawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PushPlayerController.BP_PushPlayerController_C.OnAfterPossess");

	ABP_PushPlayerController_C_OnAfterPossess_Params params;
	params.APawn = APawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PushPlayerController.BP_PushPlayerController_C.OnReceivedKillScore
// (Event, Public, BlueprintEvent)
// Parameters:
// class AMordhauCharacter**      Killed                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PushPlayerController_C::OnReceivedKillScore(class AMordhauCharacter** Killed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PushPlayerController.BP_PushPlayerController_C.OnReceivedKillScore");

	ABP_PushPlayerController_C_OnReceivedKillScore_Params params;
	params.Killed = Killed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PushPlayerController.BP_PushPlayerController_C.OnReceivedAssistScore
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Percentage                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AMordhauCharacter**      Killed                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PushPlayerController_C::OnReceivedAssistScore(float* Percentage, class AMordhauCharacter** Killed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PushPlayerController.BP_PushPlayerController_C.OnReceivedAssistScore");

	ABP_PushPlayerController_C_OnReceivedAssistScore_Params params;
	params.Percentage = Percentage;
	params.Killed = Killed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PushPlayerController.BP_PushPlayerController_C.ExecuteUbergraph_BP_PushPlayerController
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PushPlayerController_C::ExecuteUbergraph_BP_PushPlayerController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PushPlayerController.BP_PushPlayerController_C.ExecuteUbergraph_BP_PushPlayerController");

	ABP_PushPlayerController_C_ExecuteUbergraph_BP_PushPlayerController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
