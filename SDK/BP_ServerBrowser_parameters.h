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

// Function BP_ServerBrowser.BP_ServerBrowser_C.GetMatchmakingCheckboxVisibility
struct UBP_ServerBrowser_C_GetMatchmakingCheckboxVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.OnFailure_BBC3547C49248E80E0006694F0879DC3
struct UBP_ServerBrowser_C_OnFailure_BBC3547C49248E80E0006694F0879DC3_Params
{
	TArray<struct FServerSearchResult>                 Results;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.OnSuccess_BBC3547C49248E80E0006694F0879DC3
struct UBP_ServerBrowser_C_OnSuccess_BBC3547C49248E80E0006694F0879DC3_Params
{
	TArray<struct FServerSearchResult>                 Results;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.OnFailure_0D81799A475BE46000BC0A8D4385A93C
struct UBP_ServerBrowser_C_OnFailure_0D81799A475BE46000BC0A8D4385A93C_Params
{
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.OnSuccess_0D81799A475BE46000BC0A8D4385A93C
struct UBP_ServerBrowser_C_OnSuccess_0D81799A475BE46000BC0A8D4385A93C_Params
{
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.OnFailure_929D8817412E2618A9CB9FAC09AE12F1
struct UBP_ServerBrowser_C_OnFailure_929D8817412E2618A9CB9FAC09AE12F1_Params
{
	TArray<int>                                        Mods;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.OnSuccess_929D8817412E2618A9CB9FAC09AE12F1
struct UBP_ServerBrowser_C_OnSuccess_929D8817412E2618A9CB9FAC09AE12F1_Params
{
	TArray<int>                                        Mods;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.Construct
struct UBP_ServerBrowser_C_Construct_Params
{
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.Refresh
struct UBP_ServerBrowser_C_Refresh_Params
{
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.Join
struct UBP_ServerBrowser_C_Join_Params
{
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__RefreshButton_K2Node_ComponentBoundEvent_111_OnButtonClickedEvent__DelegateSignature
struct UBP_ServerBrowser_C_BndEvt__RefreshButton_K2Node_ComponentBoundEvent_111_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__JoinButton_K2Node_ComponentBoundEvent_129_OnButtonClickedEvent__DelegateSignature
struct UBP_ServerBrowser_C_BndEvt__JoinButton_K2Node_ComponentBoundEvent_129_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__AllButton_K2Node_ComponentBoundEvent_289_OnSelected__DelegateSignature
struct UBP_ServerBrowser_C_BndEvt__AllButton_K2Node_ComponentBoundEvent_289_OnSelected__DelegateSignature_Params
{
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__FriendsButton_K2Node_ComponentBoundEvent_290_OnSelected__DelegateSignature
struct UBP_ServerBrowser_C_BndEvt__FriendsButton_K2Node_ComponentBoundEvent_290_OnSelected__DelegateSignature_Params
{
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__FavoritesButton_K2Node_ComponentBoundEvent_294_OnSelected__DelegateSignature
struct UBP_ServerBrowser_C_BndEvt__FavoritesButton_K2Node_ComponentBoundEvent_294_OnSelected__DelegateSignature_Params
{
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__RecentButton_K2Node_ComponentBoundEvent_299_OnSelected__DelegateSignature
struct UBP_ServerBrowser_C_BndEvt__RecentButton_K2Node_ComponentBoundEvent_299_OnSelected__DelegateSignature_Params
{
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__LanButton_K2Node_ComponentBoundEvent_305_OnSelected__DelegateSignature
struct UBP_ServerBrowser_C_BndEvt__LanButton_K2Node_ComponentBoundEvent_305_OnSelected__DelegateSignature_Params
{
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__NotFullCheckbox_K2Node_ComponentBoundEvent_178_OnCheckStateChanged__DelegateSignature
struct UBP_ServerBrowser_C_BndEvt__NotFullCheckbox_K2Node_ComponentBoundEvent_178_OnCheckStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__HasPlayersCheckbox_K2Node_ComponentBoundEvent_186_OnCheckStateChanged__DelegateSignature
struct UBP_ServerBrowser_C_BndEvt__HasPlayersCheckbox_K2Node_ComponentBoundEvent_186_OnCheckStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__NoPasswordCheckbox_K2Node_ComponentBoundEvent_195_OnCheckStateChanged__DelegateSignature
struct UBP_ServerBrowser_C_BndEvt__NoPasswordCheckbox_K2Node_ComponentBoundEvent_195_OnCheckStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__DevBuildCheckbox_K2Node_ComponentBoundEvent_308_OnCheckStateChanged__DelegateSignature
struct UBP_ServerBrowser_C_BndEvt__DevBuildCheckbox_K2Node_ComponentBoundEvent_308_OnCheckStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.CreateMismatchDialog
struct UBP_ServerBrowser_C_CreateMismatchDialog_Params
{
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.HideMismatchDialog
struct UBP_ServerBrowser_C_HideMismatchDialog_Params
{
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.ShowMismatchDialog
struct UBP_ServerBrowser_C_ShowMismatchDialog_Params
{
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.ContinueJoin
struct UBP_ServerBrowser_C_ContinueJoin_Params
{
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.OnPartyUpdated
struct UBP_ServerBrowser_C_OnPartyUpdated_Params
{
	TArray<struct FSteamID>                            PartyMembers;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__RentServerButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UBP_ServerBrowser_C_BndEvt__RentServerButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.OnShown
struct UBP_ServerBrowser_C_OnShown_Params
{
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__GameModeComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature
struct UBP_ServerBrowser_C_BndEvt__GameModeComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FText                                       SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__ServerNameFilter_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UBP_ServerBrowser_C_BndEvt__ServerNameFilter_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__MaxPingEntry_K2Node_ComponentBoundEvent_4_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UBP_ServerBrowser_C_BndEvt__MaxPingEntry_K2Node_ComponentBoundEvent_4_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.ShowModDownloadDialog
struct UBP_ServerBrowser_C_ShowModDownloadDialog_Params
{
	TArray<int>                                        ModsRequired;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.ModDownloadCanceled
struct UBP_ServerBrowser_C_ModDownloadCanceled_Params
{
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.ModDownloadFailed
struct UBP_ServerBrowser_C_ModDownloadFailed_Params
{
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.ModDownloadCompleted
struct UBP_ServerBrowser_C_ModDownloadCompleted_Params
{
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.OnOkClicked
struct UBP_ServerBrowser_C_OnOkClicked_Params
{
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.OnOkClicked2
struct UBP_ServerBrowser_C_OnOkClicked2_Params
{
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.JoinSession
struct UBP_ServerBrowser_C_JoinSession_Params
{
	struct FServerSearchResult                         Session;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.ExecuteUbergraph_BP_ServerBrowser
struct UBP_ServerBrowser_C_ExecuteUbergraph_BP_ServerBrowser_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
