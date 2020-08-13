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

// Function BP_SpawnInfo.BP_SpawnInfo_C.Get_SpawnInfoText_Text_1
struct UBP_SpawnInfo_C_Get_SpawnInfoText_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_SpawnInfo.BP_SpawnInfo_C.GetVisibility_2
struct UBP_SpawnInfo_C_GetVisibility_2_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SpawnInfo.BP_SpawnInfo_C.GetVisibility_1
struct UBP_SpawnInfo_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SpawnInfo.BP_SpawnInfo_C.GetSpawnCharacterName
struct UBP_SpawnInfo_C_GetSpawnCharacterName_Params
{
	struct FText                                       Name;                                                     // (Parm, OutParm)
};

// Function BP_SpawnInfo.BP_SpawnInfo_C.Tick
struct UBP_SpawnInfo_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SpawnInfo.BP_SpawnInfo_C.ExecuteUbergraph_BP_SpawnInfo
struct UBP_SpawnInfo_C_ExecuteUbergraph_BP_SpawnInfo_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
