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

// Function BP_PushCharacter.BP_PushCharacter_C.GetOutOfBoundsText
struct ABP_PushCharacter_C_GetOutOfBoundsText_Params
{
	struct FText                                       Header;                                                   // (Parm, OutParm)
};

// Function BP_PushCharacter.BP_PushCharacter_C.GetOutOfBoundsSubtext
struct ABP_PushCharacter_C_GetOutOfBoundsSubtext_Params
{
	struct FText                                       Subtext;                                                  // (Parm, OutParm)
};

// Function BP_PushCharacter.BP_PushCharacter_C.UserConstructionScript
struct ABP_PushCharacter_C_UserConstructionScript_Params
{
};

// Function BP_PushCharacter.BP_PushCharacter_C.OnExceededTimeOutOfBounds
struct ABP_PushCharacter_C_OnExceededTimeOutOfBounds_Params
{
};

// Function BP_PushCharacter.BP_PushCharacter_C.ExecuteUbergraph_BP_PushCharacter
struct ABP_PushCharacter_C_ExecuteUbergraph_BP_PushCharacter_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
