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

// Function BP_ChoiceMenuEntry.BP_ChoiceMenuEntry_C.Get_SlotNumber_Text_1
struct UBP_ChoiceMenuEntry_C_Get_SlotNumber_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_ChoiceMenuEntry.BP_ChoiceMenuEntry_C.GetVisibility_1
struct UBP_ChoiceMenuEntry_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ChoiceMenuEntry.BP_ChoiceMenuEntry_C.GetText_1
struct UBP_ChoiceMenuEntry_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
