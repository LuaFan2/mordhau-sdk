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

// BlueprintGeneratedClass BP_FrontlinePlayerController.BP_FrontlinePlayerController_C
// 0x0011 (0x0C42 - 0x0C31)
class ABP_FrontlinePlayerController_C : public ABP_MordhauPlayerController_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0C31(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C38(0x0008) (Transient, DuplicateTransient)
	bool                                               DeclinedObjectiveParticipation;                           // 0x0C40(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OfferedParticipation;                                     // 0x0C41(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FrontlinePlayerController.BP_FrontlinePlayerController_C");
		return ptr;
	}


	void UserConstructionScript();
	void InpActEvt_Show_Team_Select_K2Node_InputActionEvent_1(const struct FKey& Key);
	void OnAfterPossess(class APawn** APawn);
	void NotifyOfferedParticipation();
	void DeclineParticipation();
	void ExecuteUbergraph_BP_FrontlinePlayerController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
