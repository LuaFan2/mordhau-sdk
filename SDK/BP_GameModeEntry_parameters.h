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

// Function BP_GameModeEntry.BP_GameModeEntry_C.GetVisibility_3
struct UBP_GameModeEntry_C_GetVisibility_3_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_GameModeEntry.BP_GameModeEntry_C.OnCheckStateChanged
struct UBP_GameModeEntry_C_OnCheckStateChanged_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameModeEntry.BP_GameModeEntry_C.RemoveCheckboxes
struct UBP_GameModeEntry_C_RemoveCheckboxes_Params
{
};

// Function BP_GameModeEntry.BP_GameModeEntry_C.UpdatePlayerCounts
struct UBP_GameModeEntry_C_UpdatePlayerCounts_Params
{
	TArray<int>                                        PlayerCounts;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        Selected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_GameModeEntry.BP_GameModeEntry_C.GetVisibility_2
struct UBP_GameModeEntry_C_GetVisibility_2_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_GameModeEntry.BP_GameModeEntry_C.AddCheckbox
struct UBP_GameModeEntry_C_AddCheckbox_Params
{
	int                                                Player_Count;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameModeEntry.BP_GameModeEntry_C.GetVisibility_1
struct UBP_GameModeEntry_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_GameModeEntry.BP_GameModeEntry_C.Deselect
struct UBP_GameModeEntry_C_Deselect_Params
{
};

// Function BP_GameModeEntry.BP_GameModeEntry_C.Select
struct UBP_GameModeEntry_C_Select_Params
{
};

// Function BP_GameModeEntry.BP_GameModeEntry_C.Construct
struct UBP_GameModeEntry_C_Construct_Params
{
};

// Function BP_GameModeEntry.BP_GameModeEntry_C.BndEvt__Row_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature
struct UBP_GameModeEntry_C_BndEvt__Row_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_GameModeEntry.BP_GameModeEntry_C.BndEvt__EntryButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UBP_GameModeEntry_C_BndEvt__EntryButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function BP_GameModeEntry.BP_GameModeEntry_C.BndEvt__EntryButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UBP_GameModeEntry_C_BndEvt__EntryButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function BP_GameModeEntry.BP_GameModeEntry_C.BndEvt__InfoButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UBP_GameModeEntry_C_BndEvt__InfoButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function BP_GameModeEntry.BP_GameModeEntry_C.BndEvt__InfoButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
struct UBP_GameModeEntry_C_BndEvt__InfoButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function BP_GameModeEntry.BP_GameModeEntry_C.PreConstruct
struct UBP_GameModeEntry_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameModeEntry.BP_GameModeEntry_C.BndEvt__BP_Checkbox_K2Node_ComponentBoundEvent_4_OnCheckStateChanged__DelegateSignature
struct UBP_GameModeEntry_C_BndEvt__BP_Checkbox_K2Node_ComponentBoundEvent_4_OnCheckStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameModeEntry.BP_GameModeEntry_C.ExecuteUbergraph_BP_GameModeEntry
struct UBP_GameModeEntry_C_ExecuteUbergraph_BP_GameModeEntry_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameModeEntry.BP_GameModeEntry_C.SelectionChanged__DelegateSignature
struct UBP_GameModeEntry_C_SelectionChanged__DelegateSignature_Params
{
	bool                                               bIsSelected;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
