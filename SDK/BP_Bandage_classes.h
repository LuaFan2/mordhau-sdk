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

// BlueprintGeneratedClass BP_Bandage.BP_Bandage_C
// 0x000C (0x0DEC - 0x0DE0)
class ABP_Bandage_C : public AMordhauEquipment
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0DE0(0x0008) (Transient, DuplicateTransient)
	int                                                HealAmount;                                               // 0x0DE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Bandage.BP_Bandage_C");
		return ptr;
	}


	bool OnRequestModeSwitch(class AMordhauCharacter** Character);
	bool OnRequestFire(class AMordhauCharacter** Character);
	void ApplyHeal();
	void UserConstructionScript();
	void FireProjectile(struct FVector* Origin, struct FRotator* Orientation, class AController** OwningController, float* ExpectedDelay);
	void ExecuteUbergraph_BP_Bandage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
