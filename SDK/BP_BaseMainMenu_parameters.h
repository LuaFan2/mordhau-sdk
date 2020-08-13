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

// Function BP_BaseMainMenu.BP_BaseMainMenu_C.HideMainMenu
struct UBP_BaseMainMenu_C_HideMainMenu_Params
{
};

// Function BP_BaseMainMenu.BP_BaseMainMenu_C.ShowMainMenu
struct UBP_BaseMainMenu_C_ShowMainMenu_Params
{
	TEnumAsByte<E_ArmoryStates>                        ArmoryState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
