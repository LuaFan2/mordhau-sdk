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

// BlueprintGeneratedClass BP_PushObjectivePoint.BP_PushObjectivePoint_C
// 0x0081 (0x05B8 - 0x0537)
class ABP_PushObjectivePoint_C : public ABP_CapturePoint_C
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x0537(0x0001) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0538(0x0008) (Transient, DuplicateTransient)
	float                                              TimeBoostOnCapture;                                       // 0x0540(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0544(0x0004) MISSED OFFSET
	struct FText                                       AnnouncementAttackersText;                                // 0x0548(0x0018) (Edit, BlueprintVisible)
	struct FText                                       AnnouncementDefendersText;                                // 0x0560(0x0018) (Edit, BlueprintVisible)
	TArray<class ABP_PushSpawnProtectionBox_C*>        Team1SpawnProtection;                                     // 0x0578(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<class ABP_PushSpawnProtectionBox_C*>        Team2SpawnProtection;                                     // 0x0588(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<class ABP_VehicleSpawner_C*>                SpawnsToActivateOnCompletion;                             // 0x0598(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<class ABP_VehicleSpawner_C*>                SpawnsToDeactivateOnCompletion;                           // 0x05A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PushObjectivePoint.BP_PushObjectivePoint_C");
		return ptr;
	}


	void UpdateSpawnProtection();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void EnemyGainedPrerequisites();
	void OnOwningTeamChanged();
	void ShowPushAttackerAnnouncement();
	void ShowPushDefenderAnnouncement();
	void OnObjectivesCompleted();
	void ExecuteUbergraph_BP_PushObjectivePoint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
