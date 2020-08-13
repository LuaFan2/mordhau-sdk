
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

// Function BP_PlayerWidget.BP_PlayerWidget_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSteamID                SteamID_                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Player_Name                    (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Rank                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Banner                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<E_RankDisplayType> Rank_Display_Type              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PlayerWidget_C::Update(const struct FSteamID& SteamID_, const struct FText& Player_Name, int Rank, int Banner, TEnumAsByte<E_RankDisplayType> Rank_Display_Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerWidget.BP_PlayerWidget_C.Update");

	UBP_PlayerWidget_C_Update_Params params;
	params.SteamID_ = SteamID_;
	params.Player_Name = Player_Name;
	params.Rank = Rank;
	params.Banner = Banner;
	params.Rank_Display_Type = Rank_Display_Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
