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

// Function BP_ButtonPrompt.BP_ButtonPrompt_C.RefreshIcon
struct UBP_ButtonPrompt_C_RefreshIcon_Params
{
};

// Function BP_ButtonPrompt.BP_ButtonPrompt_C.Update
struct UBP_ButtonPrompt_C_Update_Params
{
	struct FName                                       ActionName;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       DisplayedText;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_ButtonPrompt.BP_ButtonPrompt_C.Construct
struct UBP_ButtonPrompt_C_Construct_Params
{
};

// Function BP_ButtonPrompt.BP_ButtonPrompt_C.PreConstruct
struct UBP_ButtonPrompt_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ButtonPrompt.BP_ButtonPrompt_C.ExecuteUbergraph_BP_ButtonPrompt
struct UBP_ButtonPrompt_C_ExecuteUbergraph_BP_ButtonPrompt_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
