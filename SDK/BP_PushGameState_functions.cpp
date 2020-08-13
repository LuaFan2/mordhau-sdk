
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

// Function BP_PushGameState.BP_PushGameState_C.GetScoreboardTimeInProgress
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTimespan               Time                           (Parm, OutParm)

void ABP_PushGameState_C::GetScoreboardTimeInProgress(struct FTimespan* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PushGameState.BP_PushGameState_C.GetScoreboardTimeInProgress");

	ABP_PushGameState_C_GetScoreboardTimeInProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Time != nullptr)
		*Time = params.Time;
}


// Function BP_PushGameState.BP_PushGameState_C.GetScoreboardObjectiveName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   NewParam                       (Parm, OutParm)

void ABP_PushGameState_C::GetScoreboardObjectiveName(struct FText* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PushGameState.BP_PushGameState_C.GetScoreboardObjectiveName");

	ABP_PushGameState_C_GetScoreboardObjectiveName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function BP_PushGameState.BP_PushGameState_C.GetScoreboardTeamObjectiveValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Output                         (Parm, OutParm, ZeroConstructor)

void ABP_PushGameState_C::GetScoreboardTeamObjectiveValue(int* Team, struct FString* Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PushGameState.BP_PushGameState_C.GetScoreboardTeamObjectiveValue");

	ABP_PushGameState_C_GetScoreboardTeamObjectiveValue_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function BP_PushGameState.BP_PushGameState_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PushGameState_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PushGameState.BP_PushGameState_C.UserConstructionScript");

	ABP_PushGameState_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PushGameState.BP_PushGameState_C.HandleMatchEndInfo
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PushGameState_C::HandleMatchEndInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PushGameState.BP_PushGameState_C.HandleMatchEndInfo");

	ABP_PushGameState_C_HandleMatchEndInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PushGameState.BP_PushGameState_C.ExecuteUbergraph_BP_PushGameState
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PushGameState_C::ExecuteUbergraph_BP_PushGameState(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PushGameState.BP_PushGameState_C.ExecuteUbergraph_BP_PushGameState");

	ABP_PushGameState_C_ExecuteUbergraph_BP_PushGameState_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
