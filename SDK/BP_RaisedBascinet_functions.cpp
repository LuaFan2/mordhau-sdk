
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

// Function BP_RaisedBascinet.BP_RaisedBascinet_C.UserConstructionScript
// (BlueprintCallable, BlueprintEvent)

void UBP_RaisedBascinet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RaisedBascinet.BP_RaisedBascinet_C.UserConstructionScript");

	UBP_RaisedBascinet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
