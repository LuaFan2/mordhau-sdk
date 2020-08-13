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

// BlueprintGeneratedClass BP_Rapier_ArtisanHandle.BP_Rapier_ArtisanHandle_C
// 0x0008 (0x0080 - 0x0078)
class UBP_Rapier_ArtisanHandle_C : public UBP_MordhauEquipmentPart_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0078(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Rapier_ArtisanHandle.BP_Rapier_ArtisanHandle_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_Rapier_ArtisanHandle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
