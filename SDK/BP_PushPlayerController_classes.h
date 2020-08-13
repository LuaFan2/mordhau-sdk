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

// BlueprintGeneratedClass BP_PushPlayerController.BP_PushPlayerController_C
// 0x000E (0x0C50 - 0x0C42)
class ABP_PushPlayerController_C : public ABP_FrontlinePlayerController_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0C42(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C48(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PushPlayerController.BP_PushPlayerController_C");
		return ptr;
	}


	void ShowCurrentObjective(bool PlayHorn);
	void UserConstructionScript();
	void OnAfterPossess(class APawn** APawn);
	void OnReceivedKillScore(class AMordhauCharacter** Killed);
	void OnReceivedAssistScore(float* Percentage, class AMordhauCharacter** Killed);
	void ExecuteUbergraph_BP_PushPlayerController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
