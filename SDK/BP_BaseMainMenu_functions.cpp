
#include "../SDK.h"

// Name: Mordhau, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_BaseMainMenu.BP_BaseMainMenu_C.HideMainMenu
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_BaseMainMenu_C::HideMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseMainMenu.BP_BaseMainMenu_C.HideMainMenu");

	UBP_BaseMainMenu_C_HideMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseMainMenu.BP_BaseMainMenu_C.ShowMainMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_ArmoryStates>    ArmoryState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BaseMainMenu_C::ShowMainMenu(TEnumAsByte<E_ArmoryStates> ArmoryState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseMainMenu.BP_BaseMainMenu_C.ShowMainMenu");

	UBP_BaseMainMenu_C_ShowMainMenu_Params params;
	params.ArmoryState = ArmoryState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
