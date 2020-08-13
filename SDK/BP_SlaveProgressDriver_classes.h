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

// BlueprintGeneratedClass BP_SlaveProgressDriver.BP_SlaveProgressDriver_C
// 0x0050 (0x04E0 - 0x0490)
class ABP_SlaveProgressDriver_C : public ABP_MordhauActor_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0490(0x0008) (Transient, DuplicateTransient)
	class UBoxComponent*                               Box;                                                      // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              SmoothedValue;                                            // 0x04A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x04AC(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    AnimatedMaterial;                                         // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RaiseSpeed;                                               // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LowerSpeed;                                               // 0x04BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             CurrentMovementSound;                                     // 0x04C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class ABP_ProgressDriver_C*                        MasterCrank;                                              // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Curve;                                                    // 0x04D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AnimatedMaterialIndex;                                    // 0x04D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SmoothedValuePostCurve;                                   // 0x04DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SlaveProgressDriver.BP_SlaveProgressDriver_C");
		return ptr;
	}


	void UpdateProgress(float Progress);
	bool CanInteract(class AMordhauCharacter** Character);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnInteractionStart(class AMordhauCharacter** Character);
	void ExecuteUbergraph_BP_SlaveProgressDriver(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
