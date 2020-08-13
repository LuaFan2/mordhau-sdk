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

// Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.GetVisibility_3
struct UBP_HUDButtonPrompts_C_GetVisibility_3_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.GetVisibility_2
struct UBP_HUDButtonPrompts_C_GetVisibility_2_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.Get_BP_ButtonPrompt_PrimarySpecAction_Visibility_1
struct UBP_HUDButtonPrompts_C_Get_BP_ButtonPrompt_PrimarySpecAction_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.Clear Vehicle Prompts
struct UBP_HUDButtonPrompts_C_Clear_Vehicle_Prompts_Params
{
};

// Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.Add Vehicle Prompt
struct UBP_HUDButtonPrompts_C_Add_Vehicle_Prompt_Params
{
	struct FName                                       ActionName;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       DisplayedText;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.Get_Overlay_SpectatorActionPrompts_Visibility_2
struct UBP_HUDButtonPrompts_C_Get_Overlay_SpectatorActionPrompts_Visibility_2_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.Get_Overlay_VehiclePrompts_Visibility_1
struct UBP_HUDButtonPrompts_C_Get_Overlay_VehiclePrompts_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.GetVisibility_1
struct UBP_HUDButtonPrompts_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.Update Spectator Prompts
struct UBP_HUDButtonPrompts_C_Update_Spectator_Prompts_Params
{
	class AMordhauSpectator*                           MordhauSpectator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.Get_Overlay_SpectatorActionPrompts_Visibility_1
struct UBP_HUDButtonPrompts_C_Get_Overlay_SpectatorActionPrompts_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.Update Action Prompts
struct UBP_HUDButtonPrompts_C_Update_Action_Prompts_Params
{
};

// Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.Clear Equipment Prompts
struct UBP_HUDButtonPrompts_C_Clear_Equipment_Prompts_Params
{
};

// Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.Add Prompt
struct UBP_HUDButtonPrompts_C_Add_Prompt_Params
{
	struct FName                                       ActionName;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       DisplayedText;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.Construct
struct UBP_HUDButtonPrompts_C_Construct_Params
{
};

// Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.Hide Equipment Prompts
struct UBP_HUDButtonPrompts_C_Hide_Equipment_Prompts_Params
{
};

// Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.Show Equipment Prompts
struct UBP_HUDButtonPrompts_C_Show_Equipment_Prompts_Params
{
};

// Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.ExecuteUbergraph_BP_HUDButtonPrompts
struct UBP_HUDButtonPrompts_C_ExecuteUbergraph_BP_HUDButtonPrompts_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
