
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

// Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.Refresh Entry
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMordhauPlayerState*     PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<E_ScoreboardEntryTypes> Entry_Type                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ScoreboardEntryParent_C::Refresh_Entry(class AMordhauPlayerState* PlayerState, TEnumAsByte<E_ScoreboardEntryTypes> Entry_Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.Refresh Entry");

	UBP_ScoreboardEntryParent_C_Refresh_Entry_Params params;
	params.PlayerState = PlayerState;
	params.Entry_Type = Entry_Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.Context Button Clicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Button_Index                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ScoreboardEntryParent_C::Context_Button_Clicked(int Button_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.Context Button Clicked");

	UBP_ScoreboardEntryParent_C_Context_Button_Clicked_Params params;
	params.Button_Index = Button_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.MuteDialogEntered
// (BlueprintCallable, BlueprintEvent)

void UBP_ScoreboardEntryParent_C::MuteDialogEntered()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.MuteDialogEntered");

	UBP_ScoreboardEntryParent_C_MuteDialogEntered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.MuteDialogCanceled
// (BlueprintCallable, BlueprintEvent)

void UBP_ScoreboardEntryParent_C::MuteDialogCanceled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.MuteDialogCanceled");

	UBP_ScoreboardEntryParent_C_MuteDialogCanceled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.KickDialogEntered
// (BlueprintCallable, BlueprintEvent)

void UBP_ScoreboardEntryParent_C::KickDialogEntered()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.KickDialogEntered");

	UBP_ScoreboardEntryParent_C_KickDialogEntered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.KickDialogCanceled
// (BlueprintCallable, BlueprintEvent)

void UBP_ScoreboardEntryParent_C::KickDialogCanceled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.KickDialogCanceled");

	UBP_ScoreboardEntryParent_C_KickDialogCanceled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.BanDurationDialogEntered
// (BlueprintCallable, BlueprintEvent)

void UBP_ScoreboardEntryParent_C::BanDurationDialogEntered()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.BanDurationDialogEntered");

	UBP_ScoreboardEntryParent_C_BanDurationDialogEntered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.BanDurationDialogCanceled
// (BlueprintCallable, BlueprintEvent)

void UBP_ScoreboardEntryParent_C::BanDurationDialogCanceled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.BanDurationDialogCanceled");

	UBP_ScoreboardEntryParent_C_BanDurationDialogCanceled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.ADMIN - Mute
// (BlueprintCallable, BlueprintEvent)

void UBP_ScoreboardEntryParent_C::ADMIN___Mute()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.ADMIN - Mute");

	UBP_ScoreboardEntryParent_C_ADMIN___Mute_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.ADMIN - Kick
// (BlueprintCallable, BlueprintEvent)

void UBP_ScoreboardEntryParent_C::ADMIN___Kick()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.ADMIN - Kick");

	UBP_ScoreboardEntryParent_C_ADMIN___Kick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.ADMIN - Ban
// (BlueprintCallable, BlueprintEvent)

void UBP_ScoreboardEntryParent_C::ADMIN___Ban()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.ADMIN - Ban");

	UBP_ScoreboardEntryParent_C_ADMIN___Ban_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.BanReasonDialogCanceled
// (BlueprintCallable, BlueprintEvent)

void UBP_ScoreboardEntryParent_C::BanReasonDialogCanceled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.BanReasonDialogCanceled");

	UBP_ScoreboardEntryParent_C_BanReasonDialogCanceled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.BanReasonDialogEntered
// (BlueprintCallable, BlueprintEvent)

void UBP_ScoreboardEntryParent_C::BanReasonDialogEntered()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.BanReasonDialogEntered");

	UBP_ScoreboardEntryParent_C_BanReasonDialogEntered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.CallContextMenu
// (BlueprintCallable, BlueprintEvent)

void UBP_ScoreboardEntryParent_C::CallContextMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.CallContextMenu");

	UBP_ScoreboardEntryParent_C_CallContextMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.VoteKick
// (BlueprintCallable, BlueprintEvent)

void UBP_ScoreboardEntryParent_C::VoteKick()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.VoteKick");

	UBP_ScoreboardEntryParent_C_VoteKick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.Chat Mute
// (BlueprintCallable, BlueprintEvent)

void UBP_ScoreboardEntryParent_C::Chat_Mute()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.Chat Mute");

	UBP_ScoreboardEntryParent_C_Chat_Mute_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.View Steam Profile
// (BlueprintCallable, BlueprintEvent)

void UBP_ScoreboardEntryParent_C::View_Steam_Profile()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.View Steam Profile");

	UBP_ScoreboardEntryParent_C_View_Steam_Profile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.ExecuteUbergraph_BP_ScoreboardEntryParent
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ScoreboardEntryParent_C::ExecuteUbergraph_BP_ScoreboardEntryParent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.ExecuteUbergraph_BP_ScoreboardEntryParent");

	UBP_ScoreboardEntryParent_C_ExecuteUbergraph_BP_ScoreboardEntryParent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.Refreshed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_ScoreboardEntryParent_C::Refreshed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.Refreshed__DelegateSignature");

	UBP_ScoreboardEntryParent_C_Refreshed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
