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

// Function BP_MordhauCameraManager.BP_MordhauCameraManager_C.UserConstructionScript
struct ABP_MordhauCameraManager_C_UserConstructionScript_Params
{
};

// Function BP_MordhauCameraManager.BP_MordhauCameraManager_C.OnHitFlash
struct ABP_MordhauCameraManager_C_OnHitFlash_Params
{
	bool*                                              bIsDirectional;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauCameraManager.BP_MordhauCameraManager_C.ExecuteUbergraph_BP_MordhauCameraManager
struct ABP_MordhauCameraManager_C_ExecuteUbergraph_BP_MordhauCameraManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
