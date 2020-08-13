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

// BlueprintGeneratedClass BP_MordhauGameInstance.BP_MordhauGameInstance_C
// 0x022B (0x0BAB - 0x0980)
class UBP_MordhauGameInstance_C : public UMordhauGameInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0980(0x0008) (Transient, DuplicateTransient)
	class UBP_TextInputDialog_C*                       PasswordDialog;                                           // 0x0988(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_InformationDialog_C*                     NetworkErrorDialog;                                       // 0x0990(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_InformationDialog_C*                     JoiningDialog;                                            // 0x0998(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              JoinDelay;                                                // 0x09A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x09A4(0x0004) MISSED OFFSET
	struct FTimerHandle                                JoinDelayTimer;                                           // 0x09A8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FServerSearchResult                         SessionToJoin;                                            // 0x09B0(0x01F8) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               WantsCasualRequeue;                                       // 0x0BA8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WantsRankedRequeue;                                       // 0x0BA9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BackendConnectionTimeout;                                 // 0x0BAA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MordhauGameInstance.BP_MordhauGameInstance_C");
		return ptr;
	}


	void GetJoiningText(bool bIsFull, struct FText* Text);
	void GetJoiningTextOld(const struct FServerSearchResult& Session, struct FText* Text);
	void OnFailure_EC1BED794FBBC103AFC74FAD71124461();
	void OnSuccess_EC1BED794FBBC103AFC74FAD71124461();
	void OnFailure_E564B5624B7FDB47DBB2E08126C636D7();
	void OnSuccess_E564B5624B7FDB47DBB2E08126C636D7();
	void OnFailure_4643A5C64229EB24E86C05B71625BDC1();
	void OnFull_4643A5C64229EB24E86C05B71625BDC1();
	void OnSuccess_4643A5C64229EB24E86C05B71625BDC1();
	void ShowPasswordDialog(struct FServerSearchResult* SearchResult);
	void ShowNetworkErrorDialog();
	void OnPasswordTextEntered(const struct FText& Text, TEnumAsByte<ETextCommit> Commit_Method);
	void OnErrorOkClicked();
	void OnPasswordCancelClicked();
	void CreatePasswordDialog();
	void CreateNetworkErrorDialog();
	void CreateJoiningDialog();
	void ShowJoiningDialog(struct FServerSearchResult* SearchResult);
	void OnJoiningCancelClick();
	void OnPasswordOKClicked();
	void Join();
	void JoinSessionSearchResult(struct FServerSearchResult* SearchResult);
	void ExecuteUbergraph_BP_MordhauGameInstance(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
