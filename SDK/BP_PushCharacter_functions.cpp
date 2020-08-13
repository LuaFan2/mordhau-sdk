
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

// Function BP_PushCharacter.BP_PushCharacter_C.GetOutOfBoundsText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Header                         (Parm, OutParm)

void ABP_PushCharacter_C::GetOutOfBoundsText(struct FText* Header)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PushCharacter.BP_PushCharacter_C.GetOutOfBoundsText");

	ABP_PushCharacter_C_GetOutOfBoundsText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Header != nullptr)
		*Header = params.Header;
}


// Function BP_PushCharacter.BP_PushCharacter_C.GetOutOfBoundsSubtext
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Subtext                        (Parm, OutParm)

void ABP_PushCharacter_C::GetOutOfBoundsSubtext(struct FText* Subtext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PushCharacter.BP_PushCharacter_C.GetOutOfBoundsSubtext");

	ABP_PushCharacter_C_GetOutOfBoundsSubtext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Subtext != nullptr)
		*Subtext = params.Subtext;
}


// Function BP_PushCharacter.BP_PushCharacter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PushCharacter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PushCharacter.BP_PushCharacter_C.UserConstructionScript");

	ABP_PushCharacter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PushCharacter.BP_PushCharacter_C.OnExceededTimeOutOfBounds
// (Event, Public, BlueprintEvent)

void ABP_PushCharacter_C::OnExceededTimeOutOfBounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PushCharacter.BP_PushCharacter_C.OnExceededTimeOutOfBounds");

	ABP_PushCharacter_C_OnExceededTimeOutOfBounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PushCharacter.BP_PushCharacter_C.ExecuteUbergraph_BP_PushCharacter
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PushCharacter_C::ExecuteUbergraph_BP_PushCharacter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PushCharacter.BP_PushCharacter_C.ExecuteUbergraph_BP_PushCharacter");

	ABP_PushCharacter_C_ExecuteUbergraph_BP_PushCharacter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
