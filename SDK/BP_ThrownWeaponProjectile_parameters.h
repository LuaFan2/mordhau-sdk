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

// Function BP_ThrownWeaponProjectile.BP_ThrownWeaponProjectile_C.UserConstructionScript
struct ABP_ThrownWeaponProjectile_C_UserConstructionScript_Params
{
};

// Function BP_ThrownWeaponProjectile.BP_ThrownWeaponProjectile_C.OnProjectileHit
struct ABP_ThrownWeaponProjectile_C_OnProjectileHit_Params
{
	struct FVector*                                    HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             BounceForce;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     Surface;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bHasHitWorld;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bHasStopped;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ThrownWeaponProjectile.BP_ThrownWeaponProjectile_C.ExecuteUbergraph_BP_ThrownWeaponProjectile
struct ABP_ThrownWeaponProjectile_C_ExecuteUbergraph_BP_ThrownWeaponProjectile_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
