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

// BlueprintGeneratedClass BP_ZweihanderCommander_SlimGrip.BP_ZweihanderCommander_SlimGrip_C
// 0x0008 (0x0080 - 0x0078)
class UBP_ZweihanderCommander_SlimGrip_C : public UBP_MordhauEquipmentPart_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0078(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ZweihanderCommander_SlimGrip.BP_ZweihanderCommander_SlimGrip_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_ZweihanderCommander_SlimGrip(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
