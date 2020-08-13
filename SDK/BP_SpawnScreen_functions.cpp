
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

// Function BP_SpawnScreen.BP_SpawnScreen_C.GetText_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_SpawnScreen_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnScreen.BP_SpawnScreen_C.GetText_1");

	UBP_SpawnScreen_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SpawnScreen.BP_SpawnScreen_C.SetColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<struct FLinearColor>    Team_Color_Array               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// unsigned char                  Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APlayerState*            PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SpawnScreen_C::SetColor(class UImage* Image, TArray<struct FLinearColor> Team_Color_Array, unsigned char Team, class APlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnScreen.BP_SpawnScreen_C.SetColor");

	UBP_SpawnScreen_C_SetColor_Params params;
	params.Image = Image;
	params.Team_Color_Array = Team_Color_Array;
	params.Team = Team;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpawnScreen.BP_SpawnScreen_C.UpdateSpawnScreenIcons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvasPanel*            Canvas_Panel                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_SpawnScreen_C::UpdateSpawnScreenIcons(class UCanvasPanel* Canvas_Panel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnScreen.BP_SpawnScreen_C.UpdateSpawnScreenIcons");

	UBP_SpawnScreen_C_UpdateSpawnScreenIcons_Params params;
	params.Canvas_Panel = Canvas_Panel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpawnScreen.BP_SpawnScreen_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBP_SpawnScreen_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnScreen.BP_SpawnScreen_C.OnKeyDown");

	UBP_SpawnScreen_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SpawnScreen.BP_SpawnScreen_C.UpdateSpawnPointWidgets
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_SpawnScreen_C::UpdateSpawnPointWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnScreen.BP_SpawnScreen_C.UpdateSpawnPointWidgets");

	UBP_SpawnScreen_C_UpdateSpawnPointWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpawnScreen.BP_SpawnScreen_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_SpawnScreen_C::Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnScreen.BP_SpawnScreen_C.Hide");

	UBP_SpawnScreen_C_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpawnScreen.BP_SpawnScreen_C.Show
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_SpawnScreen_C::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnScreen.BP_SpawnScreen_C.Show");

	UBP_SpawnScreen_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpawnScreen.BP_SpawnScreen_C.Updated Spawn Point Widgets__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SpawnScreenPoint_C*  Selected_Screen_Point          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_SpawnScreen_C::Updated_Spawn_Point_Widgets__DelegateSignature(class UBP_SpawnScreenPoint_C* Selected_Screen_Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnScreen.BP_SpawnScreen_C.Updated Spawn Point Widgets__DelegateSignature");

	UBP_SpawnScreen_C_Updated_Spawn_Point_Widgets__DelegateSignature_Params params;
	params.Selected_Screen_Point = Selected_Screen_Point;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
