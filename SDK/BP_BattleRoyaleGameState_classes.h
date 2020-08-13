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

// BlueprintGeneratedClass BP_BattleRoyaleGameState.BP_BattleRoyaleGameState_C
// 0x0013 (0x092E - 0x091B)
class ABP_BattleRoyaleGameState_C : public ABP_MordhauGameState_C
{
public:
	unsigned char                                      UnknownData00[0x5];                                       // 0x091B(0x0005) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0920(0x0008) (Transient, DuplicateTransient)
	float                                              RoundStartDuration;                                       // 0x0928(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      Countdown;                                                // 0x092C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      PreviousCountdown;                                        // 0x092D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BattleRoyaleGameState.BP_BattleRoyaleGameState_C");
		return ptr;
	}


	void IsInGetReady(bool* Result);
	void OnRep_Countdown();
	bool ShouldBlockPawnInput();
	void ShouldHideSpawnInfoText(bool* Hide);
	void UserConstructionScript();
	void HandleMatchEndInfo();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_BP_BattleRoyaleGameState(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
