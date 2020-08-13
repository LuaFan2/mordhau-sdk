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

// BlueprintGeneratedClass BP_MordhauAIController.BP_MordhauAIController_C
// 0x0038 (0x06E0 - 0x06A8)
class ABP_MordhauAIController_C : public AMordhauAIController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06A8(0x0008) (Transient, DuplicateTransient)
	struct FName                                       PerceivesEnemyKey;                                        // 0x06B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       PerceivesAllyKey;                                         // 0x06B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       MoveDestinationKey;                                       // 0x06C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       TargetLocationKey;                                        // 0x06C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBehaviorTree*                               BehaviorTree;                                             // 0x06D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AMordhauCharacter*                           LastPossessedCharacter;                                   // 0x06D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MordhauAIController.BP_MordhauAIController_C");
		return ptr;
	}


	void GetTeamFilterClass(class UClass** FilterClass);
	void UserConstructionScript();
	void OnPossess(class APawn** PossessedPawn);
	void OnAfterUnPossess();
	void ReceiveBeginPlay();
	void OnStartedPerceivingCharacter(class AAdvancedCharacter** PerceivedCharacter, struct FPerceptionInfo* PerceptionInfo);
	void OnStoppedPerceivingCharacter(class AAdvancedCharacter** PerceivedCharacter, struct FPerceptionInfo* PerceptionInfo);
	void ExecuteUbergraph_BP_MordhauAIController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
