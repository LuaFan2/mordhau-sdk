#pragma once

// Name: Mordhau, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_HordeEnemy.BP_HordeEnemy_C
// 0x003F (0x1D90 - 0x1D51)
class ABP_HordeEnemy_C : public ABP_BattleRoyaleCharacter_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x1D51(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1D58(0x0008) (Transient, DuplicateTransient)
	class UMordhauWidgetComponent*                     MordhauWidget;                                            // 0x1D60(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                KillReward;                                               // 0x1D68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WoodDamageForPathClearing;                                // 0x1D6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_HordeTask_C*                             CurrentTask;                                              // 0x1D70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsBoss;                                                   // 0x1D78(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsCrippled;                                               // 0x1D79(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x1D7A(0x0002) MISSED OFFSET
	float                                              PreCrippleMaxWalkSpeed;                                   // 0x1D7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AMordhauCharacter*                           RageTarget;                                               // 0x1D80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      StunnedBySkillCounter;                                    // 0x1D88(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x1D89(0x0003) MISSED OFFSET
	float                                              LastClimbTime;                                            // 0x1D8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HordeEnemy.BP_HordeEnemy_C");
		return ptr;
	}


	void AttemptClimb(bool* Succeeded);
	void HandleObstructionRemoval(const struct FHitResult& Impact);
	void OnRep_StunnedBySkillCounter();
	void GetEnragedTarget(class AMordhauCharacter** OutTarget);
	bool ModifyParryResult(bool* InResult, struct FHitResult* HitResult, class AMordhauCharacter** Attacker);
	float ModifyDamage(float* DamageAmount, EMordhauDamageType* DamageType, struct FHitResult* HitInfo, class AActor** Source, class AActor** Agent, class AController** EventInstigator);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnDied(float* Angle, EMordhauDamageType* Type, unsigned char* SubType, struct FName* bone, struct FVector* Point, class AActor** Source, class AActor** Agent);
	void MoveBlockedBySlow(struct FHitResult* Impact);
	void CompleteTask();
	void ReceiveMordhauDamage(float* Damage, struct FHitResult* HitResult, EMordhauDamageType* DamageType, unsigned char* SubDamageType, class AActor** Source, class AActor** Agent, class AController** EventInstigator);
	void LegSweep();
	void OnBlockedMelee(struct FHitResult* HitResult, class AMordhauCharacter** Attacker);
	void Recoil();
	void Cripple(float Duration);
	void Enrage(class AMordhauCharacter* Target, float Duration);
	void OnKilled(class AController** EventInstigator);
	void ReceivePossessed(class AController** NewController);
	void ExecuteUbergraph_BP_HordeEnemy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
