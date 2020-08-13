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

// WidgetBlueprintGeneratedClass BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C
// 0x00E9 (0x02F1 - 0x0208)
class UBP_ScoreboardEntryParent_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)
	int                                                Rank;                                                     // 0x0210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0214(0x0004) MISSED OFFSET
	struct FText                                       Assists;                                                  // 0x0218(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Score;                                                    // 0x0230(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Deaths;                                                   // 0x0248(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                PingInt;                                                  // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0264(0x0004) MISSED OFFSET
	struct FText                                       Ping;                                                     // 0x0268(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FString                                     Name;                                                     // 0x0280(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FText                                       Kills;                                                    // 0x0290(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AMordhauPlayerState*                         PlayerState;                                              // 0x02A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               Highlight;                                                // 0x02B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Dead;                                                     // 0x02B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_ScoreboardEntryTypes>                Entry_Type;                                               // 0x02B2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x02B3(0x0001) MISSED OFFSET
	int                                                Index;                                                    // 0x02B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    Refreshed;                                                // 0x02B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FSteamID                                    SteamID;                                                  // 0x02C8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UBP_TextInputDialog_C*                       LastTextInputDialog;                                      // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FText                                       BanDuration;                                              // 0x02D8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               shouldRefresh;                                            // 0x02F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C");
		return ptr;
	}


	void Refresh_Entry(class AMordhauPlayerState* PlayerState, TEnumAsByte<E_ScoreboardEntryTypes> Entry_Type);
	void Context_Button_Clicked(int Button_Index);
	void MuteDialogEntered();
	void MuteDialogCanceled();
	void KickDialogEntered();
	void KickDialogCanceled();
	void BanDurationDialogEntered();
	void BanDurationDialogCanceled();
	void ADMIN___Mute();
	void ADMIN___Kick();
	void ADMIN___Ban();
	void BanReasonDialogCanceled();
	void BanReasonDialogEntered();
	void CallContextMenu();
	void VoteKick();
	void Chat_Mute();
	void View_Steam_Profile();
	void ExecuteUbergraph_BP_ScoreboardEntryParent(int EntryPoint);
	void Refreshed__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
