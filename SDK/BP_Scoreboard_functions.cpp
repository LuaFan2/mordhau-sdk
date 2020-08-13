
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

// Function BP_Scoreboard.BP_Scoreboard_C.Open Menu Scoreboard
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Scoreboard_C::Open_Menu_Scoreboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.Open Menu Scoreboard");

	UBP_Scoreboard_C_Open_Menu_Scoreboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Scoreboard.BP_Scoreboard_C.Get Team Color
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Output__Linear_                (Parm, OutParm, IsPlainOldData)
// struct FSlateColor             Output__Slate_                 (Parm, OutParm)

void UBP_Scoreboard_C::Get_Team_Color(int Team, struct FLinearColor* Output__Linear_, struct FSlateColor* Output__Slate_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.Get Team Color");

	UBP_Scoreboard_C_Get_Team_Color_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output__Linear_ != nullptr)
		*Output__Linear_ = params.Output__Linear_;
	if (Output__Slate_ != nullptr)
		*Output__Slate_ = params.Output__Slate_;
}


// Function BP_Scoreboard.BP_Scoreboard_C.Update
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Scoreboard_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.Update");

	UBP_Scoreboard_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Scoreboard.BP_Scoreboard_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMordhauPlayerState*     PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Scoreboard_C::Refresh(class AMordhauPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.Refresh");

	UBP_Scoreboard_C_Refresh_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Scoreboard.BP_Scoreboard_C.GetMaxPlayers
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            DivideBy                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Text                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Scoreboard_C::GetMaxPlayers(int DivideBy, int* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.GetMaxPlayers");

	UBP_Scoreboard_C_GetMaxPlayers_Params params;
	params.DivideBy = DivideBy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function BP_Scoreboard.BP_Scoreboard_C.GetServerName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Text                           (Parm, OutParm)

void UBP_Scoreboard_C::GetServerName(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.GetServerName");

	UBP_Scoreboard_C_GetServerName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function BP_Scoreboard.BP_Scoreboard_C.GetMapName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Text                           (Parm, OutParm)

void UBP_Scoreboard_C::GetMapName(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.GetMapName");

	UBP_Scoreboard_C_GetMapName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function BP_Scoreboard.BP_Scoreboard_C.GetTeamObjectiveValue
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (Parm, OutParm)

void UBP_Scoreboard_C::GetTeamObjectiveValue(int Team, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.GetTeamObjectiveValue");

	UBP_Scoreboard_C_GetTeamObjectiveValue_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function BP_Scoreboard.BP_Scoreboard_C.GetTeam2ObjectiveValue
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Text                           (Parm, OutParm)

void UBP_Scoreboard_C::GetTeam2ObjectiveValue(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.GetTeam2ObjectiveValue");

	UBP_Scoreboard_C_GetTeam2ObjectiveValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function BP_Scoreboard.BP_Scoreboard_C.GetTeam1ObjectiveValue
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Text                           (Parm, OutParm)

void UBP_Scoreboard_C::GetTeam1ObjectiveValue(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.GetTeam1ObjectiveValue");

	UBP_Scoreboard_C_GetTeam1ObjectiveValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function BP_Scoreboard.BP_Scoreboard_C.GetObjectiveName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Text                           (Parm, OutParm)

void UBP_Scoreboard_C::GetObjectiveName(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.GetObjectiveName");

	UBP_Scoreboard_C_GetObjectiveName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function BP_Scoreboard.BP_Scoreboard_C.GetGameModeName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Text                           (Parm, OutParm)

void UBP_Scoreboard_C::GetGameModeName(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.GetGameModeName");

	UBP_Scoreboard_C_GetGameModeName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function BP_Scoreboard.BP_Scoreboard_C.GetTeam2Players
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Text                           (Parm, OutParm)

void UBP_Scoreboard_C::GetTeam2Players(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.GetTeam2Players");

	UBP_Scoreboard_C_GetTeam2Players_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function BP_Scoreboard.BP_Scoreboard_C.GetTeam1Players
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Text                           (Parm, OutParm)

void UBP_Scoreboard_C::GetTeam1Players(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.GetTeam1Players");

	UBP_Scoreboard_C_GetTeam1Players_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function BP_Scoreboard.BP_Scoreboard_C.GetTeamPlayers
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (Parm, OutParm)

void UBP_Scoreboard_C::GetTeamPlayers(int Team, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.GetTeamPlayers");

	UBP_Scoreboard_C_GetTeamPlayers_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function BP_Scoreboard.BP_Scoreboard_C.GetTeam2Name
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Text                           (Parm, OutParm)

void UBP_Scoreboard_C::GetTeam2Name(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.GetTeam2Name");

	UBP_Scoreboard_C_GetTeam2Name_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function BP_Scoreboard.BP_Scoreboard_C.GetTeamName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (Parm, OutParm)

void UBP_Scoreboard_C::GetTeamName(int Team, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.GetTeamName");

	UBP_Scoreboard_C_GetTeamName_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function BP_Scoreboard.BP_Scoreboard_C.GetTeam1Name
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Text                           (Parm, OutParm)

void UBP_Scoreboard_C::GetTeam1Name(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.GetTeam1Name");

	UBP_Scoreboard_C_GetTeam1Name_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function BP_Scoreboard.BP_Scoreboard_C.GetScoreboardTime
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Time                           (Parm, OutParm)

void UBP_Scoreboard_C::GetScoreboardTime(struct FText* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.GetScoreboardTime");

	UBP_Scoreboard_C_GetScoreboardTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Time != nullptr)
		*Time = params.Time;
}


// Function BP_Scoreboard.BP_Scoreboard_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Scoreboard_C::Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.Hide");

	UBP_Scoreboard_C_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Scoreboard.BP_Scoreboard_C.Show
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Scoreboard_C::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.Show");

	UBP_Scoreboard_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Scoreboard.BP_Scoreboard_C.Refresh Players Array
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Scoreboard_C::Refresh_Players_Array()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.Refresh Players Array");

	UBP_Scoreboard_C_Refresh_Players_Array_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Scoreboard.BP_Scoreboard_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_Scoreboard_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.Construct");

	UBP_Scoreboard_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Scoreboard.BP_Scoreboard_C.ExecuteUbergraph_BP_Scoreboard
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Scoreboard_C::ExecuteUbergraph_BP_Scoreboard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.ExecuteUbergraph_BP_Scoreboard");

	UBP_Scoreboard_C_ExecuteUbergraph_BP_Scoreboard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
