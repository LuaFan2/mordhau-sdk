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

// BlueprintGeneratedClass BP_SplinePushableActor.BP_SplinePushableActor_C
// 0x003C (0x053C - 0x0500)
class ABP_SplinePushableActor_C : public APushableActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0500(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Area;                                                     // 0x0508(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABP_SplineActor_C*                           TargetSplineActor;                                        // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FVector2D                                   SplineRange;                                              // 0x0520(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     PreviousLocation;                                         // 0x0528(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              SplineOffsetA;                                            // 0x0534(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SplineOffsetB;                                            // 0x0538(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SplinePushableActor.BP_SplinePushableActor_C");
		return ptr;
	}


	void GetTransformAlongSplineOffset(float OffsetA, float OffsetB, struct FTransform* Output);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnProgressUpdated(float* OldProgress);
	void ExecuteUbergraph_BP_SplinePushableActor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
