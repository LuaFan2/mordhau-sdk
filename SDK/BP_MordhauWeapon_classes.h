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

// BlueprintGeneratedClass BP_MordhauWeapon.BP_MordhauWeapon_C
// 0x0018 (0x1C68 - 0x1C50)
class ABP_MordhauWeapon_C : public AMordhauWeapon
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1C50(0x0008) (Transient, DuplicateTransient)
	class UCapsuleComponent*                           ClashCapsuleBP;                                           // 0x1C58(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ThrownParticle;                                           // 0x1C60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MordhauWeapon.BP_MordhauWeapon_C");
		return ptr;
	}


	void UserConstructionScript();
	void StartThrownTrail();
	void StopThrownTrail();
	void ExecuteUbergraph_BP_MordhauWeapon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
