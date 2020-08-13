
#include "../SDK.h"

// Name: Mordhau, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.OpenSteamProfile
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 SteamID                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MordhauUtilityLibrary_C::STATIC_OpenSteamProfile(const struct FString& SteamID, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.OpenSteamProfile");

	UBP_MordhauUtilityLibrary_C_OpenSteamProfile_Params params;
	params.SteamID = SteamID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.GetPlayerStateFromActor
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AMordhauPlayerState*     PlayerState                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MordhauUtilityLibrary_C::STATIC_GetPlayerStateFromActor(class AActor* Actor, class UObject* __WorldContext, class AMordhauPlayerState** PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.GetPlayerStateFromActor");

	UBP_MordhauUtilityLibrary_C_GetPlayerStateFromActor_Params params;
	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerState != nullptr)
		*PlayerState = params.PlayerState;
}


// Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.GetKeyInfoFromKey
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key_                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Icon                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FKey                    Key                            (Parm, OutParm)
// struct FText                   Key_Display_Name               (Parm, OutParm)

void UBP_MordhauUtilityLibrary_C::STATIC_GetKeyInfoFromKey(const struct FKey& Key_, class UObject* __WorldContext, class UTexture2D** Icon, struct FKey* Key, struct FText* Key_Display_Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.GetKeyInfoFromKey");

	UBP_MordhauUtilityLibrary_C_GetKeyInfoFromKey_Params params;
	params.Key_ = Key_;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Icon != nullptr)
		*Icon = params.Icon;
	if (Key != nullptr)
		*Key = params.Key;
	if (Key_Display_Name != nullptr)
		*Key_Display_Name = params.Key_Display_Name;
}


// Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.GetKeyInfoFromActionName
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Action_Name                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Icon                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FKey                    Key                            (Parm, OutParm)
// struct FText                   Key_Display_Name               (Parm, OutParm)

void UBP_MordhauUtilityLibrary_C::STATIC_GetKeyInfoFromActionName(const struct FName& Action_Name, class UObject* __WorldContext, class UTexture2D** Icon, struct FKey* Key, struct FText* Key_Display_Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.GetKeyInfoFromActionName");

	UBP_MordhauUtilityLibrary_C_GetKeyInfoFromActionName_Params params;
	params.Action_Name = Action_Name;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Icon != nullptr)
		*Icon = params.Icon;
	if (Key != nullptr)
		*Key = params.Key;
	if (Key_Display_Name != nullptr)
		*Key_Display_Name = params.Key_Display_Name;
}


// Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.GetRank
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Rank                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MordhauUtilityLibrary_C::STATIC_GetRank(class UObject* __WorldContext, int* Rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.GetRank");

	UBP_MordhauUtilityLibrary_C_GetRank_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rank != nullptr)
		*Rank = params.Rank;
}


// Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.Get1v1MMRFromStats
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            MMR                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MordhauUtilityLibrary_C::STATIC_Get1v1MMRFromStats(class UObject* __WorldContext, int* MMR)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.Get1v1MMRFromStats");

	UBP_MordhauUtilityLibrary_C_Get1v1MMRFromStats_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MMR != nullptr)
		*MMR = params.MMR;
}


// Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.CreateContextPopup
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<struct FString, struct FText> Option_Map                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBP_ContextPopupWrapper_C* Context_Popup_Wrapper          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_MordhauUtilityLibrary_C::STATIC_CreateContextPopup(TMap<struct FString, struct FText> Option_Map, class UObject* __WorldContext, class UBP_ContextPopupWrapper_C** Context_Popup_Wrapper)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.CreateContextPopup");

	UBP_MordhauUtilityLibrary_C_CreateContextPopup_Params params;
	params.Option_Map = Option_Map;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context_Popup_Wrapper != nullptr)
		*Context_Popup_Wrapper = params.Context_Popup_Wrapper;
}


// Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.GetGoldAndRankUnlockRequirement
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    ItemDefIDs                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Gold                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Rank                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MordhauUtilityLibrary_C::STATIC_GetGoldAndRankUnlockRequirement(class UObject* __WorldContext, TArray<int>* ItemDefIDs, int* Gold, int* Rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.GetGoldAndRankUnlockRequirement");

	UBP_MordhauUtilityLibrary_C_GetGoldAndRankUnlockRequirement_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemDefIDs != nullptr)
		*ItemDefIDs = params.ItemDefIDs;
	if (Gold != nullptr)
		*Gold = params.Gold;
	if (Rank != nullptr)
		*Rank = params.Rank;
}


// Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.GetUnlockTooltipText
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    ItemDefIDs                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ToolTipText                    (Parm, OutParm)

void UBP_MordhauUtilityLibrary_C::STATIC_GetUnlockTooltipText(class UObject* __WorldContext, TArray<int>* ItemDefIDs, struct FText* ToolTipText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.GetUnlockTooltipText");

	UBP_MordhauUtilityLibrary_C_GetUnlockTooltipText_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemDefIDs != nullptr)
		*ItemDefIDs = params.ItemDefIDs;
	if (ToolTipText != nullptr)
		*ToolTipText = params.ToolTipText;
}


// Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.CreateInformationDialog
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       OwningPlayer                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   TitleText                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   InformationText                (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   ButtonText                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBP_InformationDialog_C* InformationDialog              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_MordhauUtilityLibrary_C::STATIC_CreateInformationDialog(class APlayerController* OwningPlayer, const struct FText& TitleText, const struct FText& InformationText, const struct FText& ButtonText, class UObject* __WorldContext, class UBP_InformationDialog_C** InformationDialog)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.CreateInformationDialog");

	UBP_MordhauUtilityLibrary_C_CreateInformationDialog_Params params;
	params.OwningPlayer = OwningPlayer;
	params.TitleText = TitleText;
	params.InformationText = InformationText;
	params.ButtonText = ButtonText;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InformationDialog != nullptr)
		*InformationDialog = params.InformationDialog;
}


// Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.CreateChoiceDialog
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       OwningPlayer                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   TitleText                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   ChoiceText                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   LeftButtonText                 (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   RightButtonText                (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBP_ChoiceDialog_C*      ChoiceDialog                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_MordhauUtilityLibrary_C::STATIC_CreateChoiceDialog(class APlayerController* OwningPlayer, const struct FText& TitleText, const struct FText& ChoiceText, const struct FText& LeftButtonText, const struct FText& RightButtonText, class UObject* __WorldContext, class UBP_ChoiceDialog_C** ChoiceDialog)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.CreateChoiceDialog");

	UBP_MordhauUtilityLibrary_C_CreateChoiceDialog_Params params;
	params.OwningPlayer = OwningPlayer;
	params.TitleText = TitleText;
	params.ChoiceText = ChoiceText;
	params.LeftButtonText = LeftButtonText;
	params.RightButtonText = RightButtonText;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ChoiceDialog != nullptr)
		*ChoiceDialog = params.ChoiceDialog;
}


// Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.CreateTextInputDialog
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       OwningPlayer                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   TitleText                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   HintText                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   LeftButtonText                 (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   RightButtonText                (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bIsPassword                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBP_TextInputDialog_C*   TextInputDialog                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_MordhauUtilityLibrary_C::STATIC_CreateTextInputDialog(class APlayerController* OwningPlayer, const struct FText& TitleText, const struct FText& HintText, const struct FText& LeftButtonText, const struct FText& RightButtonText, bool bIsPassword, class UObject* __WorldContext, class UBP_TextInputDialog_C** TextInputDialog)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.CreateTextInputDialog");

	UBP_MordhauUtilityLibrary_C_CreateTextInputDialog_Params params;
	params.OwningPlayer = OwningPlayer;
	params.TitleText = TitleText;
	params.HintText = HintText;
	params.LeftButtonText = LeftButtonText;
	params.RightButtonText = RightButtonText;
	params.bIsPassword = bIsPassword;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TextInputDialog != nullptr)
		*TextInputDialog = params.TextInputDialog;
}


// Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.ComputeRagdollForce
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Agent                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  DamageType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  DamageSubType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  RandomByte                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Receiver                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Force                          (Parm, OutParm, IsPlainOldData)

void UBP_MordhauUtilityLibrary_C::STATIC_ComputeRagdollForce(class AActor* Agent, unsigned char DamageType, unsigned char DamageSubType, unsigned char RandomByte, class AActor* Receiver, class UObject* __WorldContext, struct FVector* Force)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.ComputeRagdollForce");

	UBP_MordhauUtilityLibrary_C_ComputeRagdollForce_Params params;
	params.Agent = Agent;
	params.DamageType = DamageType;
	params.DamageSubType = DamageSubType;
	params.RandomByte = RandomByte;
	params.Receiver = Receiver;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Force != nullptr)
		*Force = params.Force;
}


// Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.GetSelectedIndex
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UComboBoxText*           ComboBox                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SelectedIndex                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MordhauUtilityLibrary_C::STATIC_GetSelectedIndex(class UComboBoxText* ComboBox, class UObject* __WorldContext, int* SelectedIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.GetSelectedIndex");

	UBP_MordhauUtilityLibrary_C_GetSelectedIndex_Params params;
	params.ComboBox = ComboBox;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectedIndex != nullptr)
		*SelectedIndex = params.SelectedIndex;
}


// Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.SelectFirstComboBoxOption
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UComboBoxText*           ComboBox                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MordhauUtilityLibrary_C::STATIC_SelectFirstComboBoxOption(class UComboBoxText* ComboBox, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.SelectFirstComboBoxOption");

	UBP_MordhauUtilityLibrary_C_SelectFirstComboBoxOption_Params params;
	params.ComboBox = ComboBox;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.IsProfileNameValid
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ProfiletName                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MordhauUtilityLibrary_C::STATIC_IsProfileNameValid(const struct FText& ProfiletName, class UObject* __WorldContext, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.IsProfileNameValid");

	UBP_MordhauUtilityLibrary_C_IsProfileNameValid_Params params;
	params.ProfiletName = ProfiletName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.IsFirstOptionSelected
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UComboBoxText*           ComboBox                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_MordhauUtilityLibrary_C::STATIC_IsFirstOptionSelected(class UComboBoxText* ComboBox, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.IsFirstOptionSelected");

	UBP_MordhauUtilityLibrary_C_IsFirstOptionSelected_Params params;
	params.ComboBox = ComboBox;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.SelectLastComboBoxOption
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UComboBoxText*           ComboBox                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MordhauUtilityLibrary_C::STATIC_SelectLastComboBoxOption(class UComboBoxText* ComboBox, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.SelectLastComboBoxOption");

	UBP_MordhauUtilityLibrary_C_SelectLastComboBoxOption_Params params;
	params.ComboBox = ComboBox;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.GetLastComboBoxOption
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UComboBoxText*           ComboBox                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Option                         (Parm, OutParm)

void UBP_MordhauUtilityLibrary_C::STATIC_GetLastComboBoxOption(class UComboBoxText* ComboBox, class UObject* __WorldContext, struct FText* Option)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.GetLastComboBoxOption");

	UBP_MordhauUtilityLibrary_C_GetLastComboBoxOption_Params params;
	params.ComboBox = ComboBox;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Option != nullptr)
		*Option = params.Option;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
