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

// Function BP_ContextPopup.BP_ContextPopup_C.Clear Entries
struct UBP_ContextPopup_C_Clear_Entries_Params
{
};

// Function BP_ContextPopup.BP_ContextPopup_C.Add Button Entry
struct UBP_ContextPopup_C_Add_Button_Entry_Params
{
	struct FText                                       ButtonLabel;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                ButtonIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Hover_Text;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
