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

// Function BP_MapList.BP_MapList_C.GetSelectedEntry
struct UBP_MapList_C_GetSelectedEntry_Params
{
	class UBP_MapEntryLocalPlay_C*                     SelectedEntry;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_MapList.BP_MapList_C.SelectFirstEntry
struct UBP_MapList_C_SelectFirstEntry_Params
{
};

// Function BP_MapList.BP_MapList_C.OnEntrySelected
struct UBP_MapList_C_OnEntrySelected_Params
{
	class UBP_MapEntryLocalPlay_C*                     Entry;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_MapList.BP_MapList_C.AddEntry
struct UBP_MapList_C_AddEntry_Params
{
	struct FString                                     GameModeMapName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UGameModeMetadata*                           GameModeMetadata;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMapMetadata*                                MapMetadata;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapList.BP_MapList_C.ClearEntries
struct UBP_MapList_C_ClearEntries_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
