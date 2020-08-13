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

// BlueprintGeneratedClass BP_Bow.BP_Bow_C
// 0x0081 (0x0E69 - 0x0DE8)
class ABP_Bow_C : public ABP_MissileEquipment_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0DE8(0x0008) (Transient, DuplicateTransient)
	bool                                               FireArrows;                                               // 0x0DF0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0DF1(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    FireEffectParticleComponent;                              // 0x0DF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             FireEffectAudioComponent;                                 // 0x0E00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UClass*                                      FireArrowProjectile;                                      // 0x0E08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      OriginalProjectileClass;                                  // 0x0E10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             FireArrowsParticleSystem;                                 // 0x0E18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  FireArrowsTransform;                                      // 0x0E20(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  FireArrowsSound;                                          // 0x0E50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   FireArrowsFireSound;                                      // 0x0E58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   OriginalFireSound;                                        // 0x0E60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InternalUsingFireArrows;                                  // 0x0E68(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Bow.BP_Bow_C");
		return ptr;
	}


	void OnRep_FireArrows();
	void ClearFireEffects();
	void GetUsesFireArrows(bool* UsesFireArrows);
	void SetUseFireArrows(bool UseFire);
	void UserConstructionScript();
	void OnLoadedChanged();
	void ReceiveBeginPlay();
	void UpdateEquipmentVisualState();
	void ReceiveDestroyed();
	void ExecuteUbergraph_BP_Bow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
