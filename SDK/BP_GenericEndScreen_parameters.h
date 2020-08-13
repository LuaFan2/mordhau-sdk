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

// Function BP_GenericEndScreen.BP_GenericEndScreen_C.GetVisibility_1
struct UBP_GenericEndScreen_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_GenericEndScreen.BP_GenericEndScreen_C.OnKeyDown
struct UBP_GenericEndScreen_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_GenericEndScreen.BP_GenericEndScreen_C.GetText_1
struct UBP_GenericEndScreen_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_GenericEndScreen.BP_GenericEndScreen_C.ShowScoreboard
struct UBP_GenericEndScreen_C_ShowScoreboard_Params
{
};

// Function BP_GenericEndScreen.BP_GenericEndScreen_C.HideScoreboard
struct UBP_GenericEndScreen_C_HideScoreboard_Params
{
};

// Function BP_GenericEndScreen.BP_GenericEndScreen_C.BndEvt__ScoreboardTab_K2Node_ComponentBoundEvent_0_ButtonSelected__DelegateSignature
struct UBP_GenericEndScreen_C_BndEvt__ScoreboardTab_K2Node_ComponentBoundEvent_0_ButtonSelected__DelegateSignature_Params
{
};

// Function BP_GenericEndScreen.BP_GenericEndScreen_C.BndEvt__MapVoteTab_K2Node_ComponentBoundEvent_2_ButtonSelected__DelegateSignature
struct UBP_GenericEndScreen_C_BndEvt__MapVoteTab_K2Node_ComponentBoundEvent_2_ButtonSelected__DelegateSignature_Params
{
};

// Function BP_GenericEndScreen.BP_GenericEndScreen_C.BndEvt__ScoreboardTab_K2Node_ComponentBoundEvent_3_ButtonDeselected__DelegateSignature
struct UBP_GenericEndScreen_C_BndEvt__ScoreboardTab_K2Node_ComponentBoundEvent_3_ButtonDeselected__DelegateSignature_Params
{
};

// Function BP_GenericEndScreen.BP_GenericEndScreen_C.ShowEndScreen
struct UBP_GenericEndScreen_C_ShowEndScreen_Params
{
};

// Function BP_GenericEndScreen.BP_GenericEndScreen_C.ExecuteUbergraph_BP_GenericEndScreen
struct UBP_GenericEndScreen_C_ExecuteUbergraph_BP_GenericEndScreen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
