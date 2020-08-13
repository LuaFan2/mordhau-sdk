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

// BlueprintGeneratedClass BP_MordhauProjectile.BP_MordhauProjectile_C
// 0x0014 (0x08D4 - 0x08C0)
class ABP_MordhauProjectile_C : public AMordhauProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08C0(0x0008) (Transient, DuplicateTransient)
	float                                              FireDamage;                                               // 0x08C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FireDuration;                                             // 0x08CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FireTick;                                                 // 0x08D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MordhauProjectile.BP_MordhauProjectile_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnProjectileDamagedCharacter(class AAdvancedCharacter** Character, bool* bWillKill, struct FVector* WorldLocation, struct FName* bone);
	void ExecuteUbergraph_BP_MordhauProjectile(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
