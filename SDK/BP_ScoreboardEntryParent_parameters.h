#pragma once

#include "../SDK.h"

// Name: Mordhau, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.Refresh Entry
struct UBP_ScoreboardEntryParent_C_Refresh_Entry_Params
{
	class AMordhauPlayerState*                         PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_ScoreboardEntryTypes>                Entry_Type;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.Context Button Clicked
struct UBP_ScoreboardEntryParent_C_Context_Button_Clicked_Params
{
	int                                                Button_Index;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.MuteDialogEntered
struct UBP_ScoreboardEntryParent_C_MuteDialogEntered_Params
{
};

// Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.MuteDialogCanceled
struct UBP_ScoreboardEntryParent_C_MuteDialogCanceled_Params
{
};

// Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.KickDialogEntered
struct UBP_ScoreboardEntryParent_C_KickDialogEntered_Params
{
};

// Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.KickDialogCanceled
struct UBP_ScoreboardEntryParent_C_KickDialogCanceled_Params
{
};

// Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.BanDurationDialogEntered
struct UBP_ScoreboardEntryParent_C_BanDurationDialogEntered_Params
{
};

// Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.BanDurationDialogCanceled
struct UBP_ScoreboardEntryParent_C_BanDurationDialogCanceled_Params
{
};

// Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.ADMIN - Mute
struct UBP_ScoreboardEntryParent_C_ADMIN___Mute_Params
{
};

// Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.ADMIN - Kick
struct UBP_ScoreboardEntryParent_C_ADMIN___Kick_Params
{
};

// Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.ADMIN - Ban
struct UBP_ScoreboardEntryParent_C_ADMIN___Ban_Params
{
};

// Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.BanReasonDialogCanceled
struct UBP_ScoreboardEntryParent_C_BanReasonDialogCanceled_Params
{
};

// Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.BanReasonDialogEntered
struct UBP_ScoreboardEntryParent_C_BanReasonDialogEntered_Params
{
};

// Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.CallContextMenu
struct UBP_ScoreboardEntryParent_C_CallContextMenu_Params
{
};

// Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.VoteKick
struct UBP_ScoreboardEntryParent_C_VoteKick_Params
{
};

// Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.Chat Mute
struct UBP_ScoreboardEntryParent_C_Chat_Mute_Params
{
};

// Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.View Steam Profile
struct UBP_ScoreboardEntryParent_C_View_Steam_Profile_Params
{
};

// Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.ExecuteUbergraph_BP_ScoreboardEntryParent
struct UBP_ScoreboardEntryParent_C_ExecuteUbergraph_BP_ScoreboardEntryParent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.Refreshed__DelegateSignature
struct UBP_ScoreboardEntryParent_C_Refreshed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
