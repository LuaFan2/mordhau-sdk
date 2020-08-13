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

// BlueprintGeneratedClass BP_HordePlayerController.BP_HordePlayerController_C
// 0x0110 (0x0D41 - 0x0C31)
class ABP_HordePlayerController_C : public ABP_MordhauPlayerController_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0C31(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C38(0x0008) (Transient, DuplicateTransient)
	unsigned char                                      PurchaseTrigger;                                          // 0x0C40(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0C41(0x0007) MISSED OFFSET
	class UClass*                                      LastHeadArmor;                                            // 0x0C48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      LastChestArmor;                                           // 0x0C50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      LastLegArmor;                                             // 0x0C58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              LastEquipment;                                            // 0x0C60(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<unsigned char>                              LastEquipmentAmmo;                                        // 0x0C70(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<unsigned char>                              ReplicatedSkills;                                         // 0x0C80(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	TMap<TEnumAsByte<E_HordeSkill>, TEnumAsByte<E_HordeSkill>> SkillPrerequisites;                                       // 0x0C90(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<TEnumAsByte<E_HordeSkill>, struct FSTRUCT_HordeSkillInfo> SkillInfo;                                                // 0x0CE0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               AvoidScattershotRecursion;                                // 0x0D30(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      BackstabCounter;                                          // 0x0D31(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      CriticalCounter;                                          // 0x0D32(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0D33(0x0001) MISSED OFFSET
	float                                              NextSpecialTime;                                          // 0x0D34(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_HordeSkill>                          SpecialSkill;                                             // 0x0D38(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0D39(0x0003) MISSED OFFSET
	float                                              SpecialTriggeredTime;                                     // 0x0D3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NewHorde;                                                 // 0x0D40(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HordePlayerController.BP_HordePlayerController_C");
		return ptr;
	}


	void GetScaledSkillLevelParams(TEnumAsByte<E_HordeSkill> Skill, int Bias, float* PercentA, float* PercentB, int* IntegerA, float* TimeA);
	void OnRep_NextSpecialTime();
	void OnRep_CriticalCounter();
	void OnRep_BackstabCounter();
	void GetDiscountedPrice(int BasePrice, int* DiscountedPrice);
	void AssignFireArrowValues(class AActor* Arrow);
	void TryScatterShot(class AMordhauProjectile* SourceProjectile);
	void TryFletcherRestock();
	void GetSkillLevelFloat(TEnumAsByte<E_HordeSkill> Skill, float* SkillLevel);
	void SkillsUpdated();
	void HasPrerequisite(TEnumAsByte<E_HordeSkill> Skill, bool* Result);
	void GetSkillLevel(TEnumAsByte<E_HordeSkill> Skill, unsigned char* Level);
	void UpgradeSkill(TEnumAsByte<E_HordeSkill> Skill, bool* Success);
	void OnRep_ReplicatedSkills();
	void CustomizeEquipment(class AMordhauEquipment* Equipment);
	void OnRep_PurchaseTrigger();
	void UserConstructionScript();
	void InpActEvt_Battlecry_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_Show_Profile_Select_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void OnAfterPossess(class APawn** APawn);
	void OnBuilt(class AActor** Structure);
	void RequestUpgradeSkill(TEnumAsByte<E_HordeSkill> Skill);
	void ExecuteUbergraph_BP_HordePlayerController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
