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

// BlueprintGeneratedClass BP_SwitchInteractable.BP_SwitchInteractable_C
// 0x0011 (0x04A1 - 0x0490)
class ABP_SwitchInteractable_C : public ABP_MordhauActor_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0490(0x0008) (Transient, DuplicateTransient)
	bool                                               Value;                                                    // 0x0498(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0499(0x0003) MISSED OFFSET
	float                                              MinDelayBetweenUses;                                      // 0x049C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               StartInverted;                                            // 0x04A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SwitchInteractable.BP_SwitchInteractable_C");
		return ptr;
	}


	void OnRep_Value();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnInteractionStart(class AMordhauCharacter** Character);
	void PreventInteraction();
	void OnValueToggled();
	void ToggleValue();
	void ExecuteUbergraph_BP_SwitchInteractable(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
