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

// Function BP_HomeScreen.BP_HomeScreen_C.Get_ToggleNewsButton_Visibility_1
struct UBP_HomeScreen_C_Get_ToggleNewsButton_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_HomeScreen.BP_HomeScreen_C.Get_CloseMenuButton_Visibility_1
struct UBP_HomeScreen_C_Get_CloseMenuButton_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_HomeScreen.BP_HomeScreen_C.GetVisibility_1
struct UBP_HomeScreen_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_HomeScreen.BP_HomeScreen_C.Get_TextBlock_14_Text_1
struct UBP_HomeScreen_C_Get_TextBlock_14_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_HomeScreen.BP_HomeScreen_C.GetCurrentVersionText
struct UBP_HomeScreen_C_GetCurrentVersionText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_HomeScreen.BP_HomeScreen_C.BndEvt__Button_33_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
struct UBP_HomeScreen_C_BndEvt__Button_33_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_HomeScreen.BP_HomeScreen_C.BndEvt__leaveButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UBP_HomeScreen_C_BndEvt__leaveButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_HomeScreen.BP_HomeScreen_C.BndEvt__Button_64_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UBP_HomeScreen_C_BndEvt__Button_64_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_HomeScreen.BP_HomeScreen_C.BndEvt__HideNewsButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UBP_HomeScreen_C_BndEvt__HideNewsButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_HomeScreen.BP_HomeScreen_C.Construct
struct UBP_HomeScreen_C_Construct_Params
{
};

// Function BP_HomeScreen.BP_HomeScreen_C.OnItemsRefreshed
struct UBP_HomeScreen_C_OnItemsRefreshed_Params
{
	bool                                               bWasSuccessful;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FItemStack>                          ItemStacks;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_HomeScreen.BP_HomeScreen_C.OnPartyUpdated
struct UBP_HomeScreen_C_OnPartyUpdated_Params
{
	TArray<struct FSteamID>                            PartyMembers;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_HomeScreen.BP_HomeScreen_C.UpdatePartyList
struct UBP_HomeScreen_C_UpdatePartyList_Params
{
};

// Function BP_HomeScreen.BP_HomeScreen_C.ToggleNews
struct UBP_HomeScreen_C_ToggleNews_Params
{
};

// Function BP_HomeScreen.BP_HomeScreen_C.ExecuteUbergraph_BP_HomeScreen
struct UBP_HomeScreen_C_ExecuteUbergraph_BP_HomeScreen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
