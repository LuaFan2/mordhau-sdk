
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

// Function BP_Battleaxe_guardian_head01.BP_Battleaxe_guardian_head01_C.UserConstructionScript
// (BlueprintCallable, BlueprintEvent)

void UBP_Battleaxe_guardian_head01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Battleaxe_guardian_head01.BP_Battleaxe_guardian_head01_C.UserConstructionScript");

	UBP_Battleaxe_guardian_head01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
