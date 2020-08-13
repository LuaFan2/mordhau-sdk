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

// BlueprintGeneratedClass BP_BattleAxe_HeavyShaft.BP_BattleAxe_HeavyShaft_C
// 0x0008 (0x0080 - 0x0078)
class UBP_BattleAxe_HeavyShaft_C : public UBP_MordhauEquipmentPart_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0078(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BattleAxe_HeavyShaft.BP_BattleAxe_HeavyShaft_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_BattleAxe_HeavyShaft(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
