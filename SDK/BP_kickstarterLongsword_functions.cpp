
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

// Function BP_kickstarterLongsword.BP_kickstarterLongsword_C.UserConstructionScript
// (BlueprintCallable, BlueprintEvent)

void UBP_kickstarterLongsword_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_kickstarterLongsword.BP_kickstarterLongsword_C.UserConstructionScript");

	UBP_kickstarterLongsword_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
