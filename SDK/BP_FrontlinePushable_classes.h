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

// BlueprintGeneratedClass BP_FrontlinePushable.BP_FrontlinePushable_C
// 0x0034 (0x0570 - 0x053C)
class ABP_FrontlinePushable_C : public ABP_SplinePushableActor_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x053C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0540(0x0008) (Transient, DuplicateTransient)
	class UDecalComponent*                             AreaDecal;                                                // 0x0548(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMordhauWidgetComponent*                     MordhauWidget;                                            // 0x0550(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABP_CapturePoint_C*                          CapturePoint;                                             // 0x0558(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              ObjectiveWeight;                                          // 0x0560(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0564(0x0004) MISSED OFFSET
	class UTexture*                                    PushIcon;                                                 // 0x0568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FrontlinePushable.BP_FrontlinePushable_C");
		return ptr;
	}


	void IsInObjectiveArea(const struct FVector& Location, bool* InArea);
	void IsCompleted(bool* Completed);
	void GetObjectiveProgress(float* Progress);
	void UpdateUIWidgets();
	void EnemyLostPrerequisites();
	void EnemyGainedPrerequisites();
	void Initialize(class ABP_CapturePoint_C* CapturePoint);
	void UserConstructionScript();
	void OnProgressUpdated(float* OldProgress);
	void OnInitialize(class ABP_CapturePoint_C* Point);
	void OnEnemyLostPrerequisites();
	void OnEnemyGainedPrerequisites();
	void OnUpdateUIWidgets();
	void PushableArrivedAtDestination();
	void OnAnyObjectiveProgressChanged();
	void ExecuteUbergraph_BP_FrontlinePushable(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
