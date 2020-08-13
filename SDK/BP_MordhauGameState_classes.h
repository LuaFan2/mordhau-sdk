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

// BlueprintGeneratedClass BP_MordhauGameState.BP_MordhauGameState_C
// 0x00A3 (0x091B - 0x0878)
class ABP_MordhauGameState_C : public AMordhauGameState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0878(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0880(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FSTRUCT_MatchEndInfo                        MatchEndInfo;                                             // 0x0888(0x0018) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	struct FSTRUCT_VoteKickInfo                        VoteKickInfo;                                             // 0x08A0(0x0018) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	bool                                               MatchEndInfoReplicated;                                   // 0x08B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UsesSpawnSelectScreen;                                    // 0x08B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               NoAmmoBoxes;                                              // 0x08BA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               NoPreplacedEquipment;                                     // 0x08BB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HideTargetNamesIfAlive;                                   // 0x08BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               OnlyLivingPlayersInScoreboard;                            // 0x08BD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NoScoreInScoreboard;                                      // 0x08BE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsVoteOngoing;                                            // 0x08BF(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                VoteYesVotes;                                             // 0x08C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                VoteNoVotes;                                              // 0x08C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x08C8(0x0050) UNKNOWN PROPERTY: SetProperty BP_MordhauGameState.BP_MordhauGameState_C.Voters
	bool                                               AllowsVoteKick;                                           // 0x0918(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UsesCompetitiveRank;                                      // 0x0919(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_ScoreboardEntryTypes>                Scoreboard_Entry_Type;                                    // 0x091A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MordhauGameState.BP_MordhauGameState_C");
		return ptr;
	}


	void FinishVoteKick(TEnumAsByte<E_VoteKickResult> Result);
	void OnRep_VoteKickInfo();
	void ShouldHideSpawnInfoText(bool* Hide);
	void ReceiveKillNotify(class APlayerState* Killer, class APlayerState* Killed, class UClass* Weapon, unsigned char Flags);
	void AddKillNotify(class APlayerState* Killer, class APlayerState* Killed, class AActor* Weapon, EMordhauDamageType DamageType);
	void GetChatColor(class APlayerState* PlayerState, struct FLinearColor* Color);
	void GetKillfeedColor(class APlayerState* PlayerState, struct FLinearColor* Color);
	void HandleMatchEndInfo();
	void OnRep_MatchEndInfo();
	void GetScoreboardTeamObjectiveValue(int Team, struct FString* Output);
	void GetScoreboardObjectiveName(struct FText* NewParam);
	void GetScoreboardTimeInProgress(struct FTimespan* Time);
	void GetScoreboardTime(struct FTimespan* Time);
	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void ReplicatedKillNotify(class APlayerState* Killer, class APlayerState* Killed, class UClass* Weapon, unsigned char Flags);
	void ShowScoreboardDelayed();
	void OnRequestedVoteKick(class AMordhauPlayerState* Initiator, class AMordhauPlayerState* Target);
	void TallyVoteKickVotes();
	void OnRequestedVoteCancel(class AMordhauPlayerState* Initiator);
	void OnVoteKickVote(class APlayerController* Controller, bool VotedYes);
	void ExecuteUbergraph_BP_MordhauGameState(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
