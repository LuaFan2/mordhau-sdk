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

// BlueprintGeneratedClass BP_PushGameState.BP_PushGameState_C
// 0x0020 (0x0988 - 0x0968)
class ABP_PushGameState_C : public ABP_FrontlineGameState_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0968(0x0008) (Transient, DuplicateTransient)
	float                                              ForwardSpawnUntil;                                        // 0x0970(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0974(0x0004) MISSED OFFSET
	TArray<float>                                      TimeLeftPerCompletedStage;                                // 0x0978(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PushGameState.BP_PushGameState_C");
		return ptr;
	}


	void GetScoreboardTimeInProgress(struct FTimespan* Time);
	void GetScoreboardObjectiveName(struct FText* NewParam);
	void GetScoreboardTeamObjectiveValue(int* Team, struct FString* Output);
	void UserConstructionScript();
	void HandleMatchEndInfo();
	void ExecuteUbergraph_BP_PushGameState(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
