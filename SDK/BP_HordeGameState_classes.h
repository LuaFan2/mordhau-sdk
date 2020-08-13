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

// BlueprintGeneratedClass BP_HordeGameState.BP_HordeGameState_C
// 0x002A (0x0945 - 0x091B)
class ABP_HordeGameState_C : public ABP_MordhauGameState_C
{
public:
	unsigned char                                      UnknownData00[0x5];                                       // 0x091B(0x0005) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0920(0x0008) (Transient, DuplicateTransient)
	struct FSTRUCT_HordeMatchInfo                      ReplicatedHordeMatchInfo;                                 // 0x0928(0x0008) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	TArray<class AActor*>                              Purchasables;                                             // 0x0930(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                PurchasableIndex;                                         // 0x0940(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      LastReplicatedEnemiesRemaining;                           // 0x0944(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HordeGameState.BP_HordeGameState_C");
		return ptr;
	}


	void ShouldHideSpawnInfoText(bool* Hide);
	void OnRep_ReplicatedHordeMatchInfo();
	void UpdateNextPurchasableVisuals();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void HandleMatchEndInfo();
	void ExecuteUbergraph_BP_HordeGameState(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
