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

// BlueprintGeneratedClass BP_MordhauCharacter.BP_MordhauCharacter_C
// 0x0030 (0x1D30 - 0x1D00)
class ABP_MordhauCharacter_C : public AMordhauCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1D00(0x0008) (Transient, DuplicateTransient)
	class UThudderComponent*                           Thudder;                                                  // 0x1D08(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_CharacterCameraComponent_C*              Camera;                                                   // 0x1D10(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               BlockColliderBP;                                          // 0x1D18(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ToolboxPreventionAreaCounter;                             // 0x1D20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x1D24(0x0004) MISSED OFFSET
	class UClass*                                      KickClass;                                                // 0x1D28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MordhauCharacter.BP_MordhauCharacter_C");
		return ptr;
	}


	void SpawnBloodPoolUnderneath();
	void GetOutOfBoundsSubtext(struct FText* Subtext);
	void GetOutOfBoundsText(struct FText* Header);
	void AddRagdollImpulse(const struct FVector& Impulse, const struct FVector& Location, const struct FName& bone);
	bool TryClimbing();
	void CalculateLedgeOffsetAndNormal(class UClimbingMotion** ClimbingMotion, struct FVector* OutOffset, struct FVector* OutNormal);
	void AttemptClimb(bool* Succeeded);
	void FindClimbSpot(float UpwardsCast, bool* Succeeded, struct FVector* TargetSpot);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnDied(float* Angle, EMordhauDamageType* Type, unsigned char* SubType, struct FName* bone, struct FVector* Point, class AActor** Source, class AActor** Agent);
	void OnCosmeticHit(EMordhauDamageType* DamageType, unsigned char* SubType, struct FHitResult* Hit, class AActor** Agent);
	void OnPostDismember(struct FName* bone, class ASeparatedBodyPart** SeparatedPart, class AActor** Agent);
	void BndEvt__Thudder_K2Node_ComponentBoundEvent_0_ComponentThudSignature__DelegateSignature();
	void ReplicatedTripWithKnockback();
	void OnPostProfileAssigned();
	void ApplyRagdollForce(float* Angle, EMordhauDamageType* Type, unsigned char* SubType, struct FName* bone, struct FVector* Point, class AActor** Source, class AActor** Agent);
	void ServerSetClimbLocation(const struct FVector_NetQuantize& NewParam);
	void DebugPossess();
	void ExecuteUbergraph_BP_MordhauCharacter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
