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

// BlueprintGeneratedClass BP_ToolBox.BP_ToolBox_C
// 0x0038 (0x0E18 - 0x0DE0)
class ABP_ToolBox_C : public ABP_2HThrowableBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0DE0(0x0008) (Transient, DuplicateTransient)
	int                                                ObjectType;                                               // 0x0DE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0DEC(0x0004) MISSED OFFSET
	TArray<struct FBP_ToolBoxSpawnable>                SpawnableObjects;                                         // 0x0DF0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMeshComponent*                              PreviewMeshComponent;                                     // 0x0E00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              NextAvailableTime;                                        // 0x0E08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Cooldown;                                                 // 0x0E0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWidgetComponent*                            WidgetDisplay;                                            // 0x0E10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ToolBox.BP_ToolBox_C");
		return ptr;
	}


	void CycleObjectType();
	void SetupMeshPreview();
	void DestroyMeshPreview();
	void AddStaticMeshPreviewIfNone(class UStaticMesh* StaticMesh);
	void AddSkeletalMeshPreviewIfNone(class USkeletalMesh* SkeletalMesh);
	void RequestPlant(const struct FVector& Location, const struct FRotator& Rotation, unsigned char ObjectType, class USceneComponent* AttachTo);
	void ValidateSpot(const struct FVector& PlanterLocation, const struct FRotator& CameraRotation1P, const struct FVector& Offset, bool* Succeeded, struct FVector* Location, struct FRotator* Rotation, class USceneComponent** AttachToComponent);
	bool OnRequestModeSwitch(class AMordhauCharacter** Character);
	bool OnRequestFire(class AMordhauCharacter** Character);
	void UserConstructionScript();
	void UpdateEquipmentState();
	void LocalPlayerLateTick(float* DeltaTime);
	void ServerRequestPlant(const struct FVector& Location, const struct FRotator& Rotation, unsigned char ObjectType, class USceneComponent* AttachTo);
	void ExecuteUbergraph_BP_ToolBox(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
