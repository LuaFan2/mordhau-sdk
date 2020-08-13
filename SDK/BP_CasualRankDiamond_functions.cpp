
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

// Function BP_CasualRankDiamond.BP_CasualRankDiamond_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Rank                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CasualRankDiamond_C::Update(int Rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CasualRankDiamond.BP_CasualRankDiamond_C.Update");

	UBP_CasualRankDiamond_C_Update_Params params;
	params.Rank = Rank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CasualRankDiamond.BP_CasualRankDiamond_C.Get_RankText_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_CasualRankDiamond_C::Get_RankText_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CasualRankDiamond.BP_CasualRankDiamond_C.Get_RankText_Text_1");

	UBP_CasualRankDiamond_C_Get_RankText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
