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

// BlueprintGeneratedClass BP_FrontlineKillObjective.BP_FrontlineKillObjective_C
// 0x014C (0x1E7C - 0x1D30)
class ABP_FrontlineKillObjective_C : public ABP_MordhauCharacter_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1D30(0x0008) (Transient, DuplicateTransient)
	class UMordhauWidgetComponent*                     MordhauWidget;                                            // 0x1D38(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCharacterProfile                           ProfileToAssign;                                          // 0x1D40(0x00A0) (Edit, BlueprintVisible)
	float                                              OriginalReceivedDamageModifier;                           // 0x1DE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x1DE4(0x0004) MISSED OFFSET
	class ABP_CapturePoint_C*                          Point;                                                    // 0x1DE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              EquipmentToSpawn;                                         // 0x1DF0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                CurrentPatrolIdx;                                         // 0x1E00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x1E04(0x0004) MISSED OFFSET
	TArray<class ABP_FrontlinePatrolPoint_C*>          PatrolPoints;                                             // 0x1E08(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	class UClass*                                      BehaviorProfile;                                          // 0x1E18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScorePerDamageMultiplier;                                 // 0x1E20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AwardedKillPoints;                                        // 0x1E24(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x1E25(0x0003) MISSED OFFSET
	int                                                ScorePerKill;                                             // 0x1E28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x1E2C(0x0004) MISSED OFFSET
	class ABP_FrontlinePatrolPoint_C*                  HomePoint;                                                // 0x1E30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              EngagementDistance2DFromHomePoint;                        // 0x1E38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               OfferPlayersToPossess;                                    // 0x1E3C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x1E3D(0x0003) MISSED OFFSET
	float                                              CurrentCandidateTimeLeft;                                 // 0x1E40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x1E44(0x0004) MISSED OFFSET
	TArray<class ABP_FrontlinePlayerController_C*>     CandidatesForPossess;                                     // 0x1E48(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              CandidateTimeToDecline;                                   // 0x1E58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ObjectiveWasCompleted;                                    // 0x1E5C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x1E5D(0x0003) MISSED OFFSET
	int                                                ContainmentVolumeCounter;                                 // 0x1E60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Destroyed;                                                // 0x1E64(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x1E65(0x0003) MISSED OFFSET
	float                                              DefaultKnockbackFlinch;                                   // 0x1E68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultKnockbackClash;                                    // 0x1E6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultKnockbackParried;                                  // 0x1E70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultKnockbackParry;                                    // 0x1E74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultKnockbackWorld;                                    // 0x1E78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FrontlineKillObjective.BP_FrontlineKillObjective_C");
		return ptr;
	}


	void IsInObjectiveArea(const struct FVector& Location, bool* InArea);
	void IsCompleted(bool* Completed);
	void GetObjectiveProgress(float* Progress);
	void AwardScorePointsIfApplicable(class AController* Instigator, int Points);
	void CompileCandidatesList();
	void IsCandidateValidForPossession(class ABP_FrontlinePlayerController_C* Candidate, bool* Valid);
	void NotifyCandidateForPossession();
	void ProcessPossessionCandidates(bool NewParam);
	void UpdateUIWidgets();
	void SpawnOurEquipment();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnEnemyGainedPrerequisites();
	void OnEnemyLostPrerequisites();
	void ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void OnInitialize(class ABP_CapturePoint_C* Point);
	void OnDied(float* Angle, EMordhauDamageType* Type, unsigned char* SubType, struct FName* bone, struct FVector* Point, class AActor** Source, class AActor** Agent);
	void OnUpdateUIWidgets();
	void OnHealthChanged();
	void BPLODTick(float* DeltaTime);
	void OnAnyObjectiveProgressChanged();
	void MoveBlockedBySlow(struct FHitResult* Impact);
	void ReceiveDestroyed();
	void ExecuteUbergraph_BP_FrontlineKillObjective(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
