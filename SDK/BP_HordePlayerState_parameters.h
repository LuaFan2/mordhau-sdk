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

// Function BP_HordePlayerState.BP_HordePlayerState_C.OnRep_SkillPoints
struct ABP_HordePlayerState_C_OnRep_SkillPoints_Params
{
};

// Function BP_HordePlayerState.BP_HordePlayerState_C.GetDiscountedPrice
struct ABP_HordePlayerState_C_GetDiscountedPrice_Params
{
	int                                                BasePrice;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                DiscountedPrice;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HordePlayerState.BP_HordePlayerState_C.OnRep_Coins
struct ABP_HordePlayerState_C_OnRep_Coins_Params
{
};

// Function BP_HordePlayerState.BP_HordePlayerState_C.UserConstructionScript
struct ABP_HordePlayerState_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
