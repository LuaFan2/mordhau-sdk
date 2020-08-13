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

// BlueprintGeneratedClass BP_ItemDeliverySpawn.BP_ItemDeliverySpawn_C
// 0x0090 (0x0520 - 0x0490)
class ABP_ItemDeliverySpawn_C : public AMordhauActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0490(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMordhauWidgetComponent*                     MordhauWidget;                                            // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABP_CapturePoint_C*                          CapturePoint;                                             // 0x04A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      DeliverableClass;                                         // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class ABP_DeliverableEquipment_C*>          SpawnedDeliverables;                                      // 0x04B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TMap<class AMordhauCharacter*, class AMordhauEquipment*> SpawnedByCharacter;                                       // 0x04C8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UTexture2D*                                  Icon;                                                     // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ItemDeliverySpawn.BP_ItemDeliverySpawn_C");
		return ptr;
	}


	void Disable();
	void Activate();
	bool CanInteract(class AMordhauCharacter** Character);
	void UserConstructionScript();
	void OnInteractionStart(class AMordhauCharacter** Character);
	void ExecuteUbergraph_BP_ItemDeliverySpawn(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
