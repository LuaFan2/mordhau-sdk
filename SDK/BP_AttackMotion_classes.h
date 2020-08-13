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

// BlueprintGeneratedClass BP_AttackMotion.BP_AttackMotion_C
// 0x0010 (0x0698 - 0x0688)
class UBP_AttackMotion_C : public UAttackMotion
{
public:
	class UCurveFloat*                                 curvf;                                                    // 0x0688(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TranslationWeight;                                        // 0x0690(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DirectionWeight;                                          // 0x0694(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AttackMotion.BP_AttackMotion_C");
		return ptr;
	}


	void ComputeDir(const struct FTransform& CurHand, const struct FTransform& TargHand, struct FVector* Out);
	float CalculateBlendTime(struct FTransform* Pose, struct FTransform* AnimPose);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
