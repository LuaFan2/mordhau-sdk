#pragma once

#include "../SDK.h"

// Name: Mordhau, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.UpdateCurrentDownloadProgress
struct UBP_ModDownloadDialog_C_UpdateCurrentDownloadProgress_Params
{
};

// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.UpdateCurrentlyInstalledMods
struct UBP_ModDownloadDialog_C_UpdateCurrentlyInstalledMods_Params
{
};

// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.SetButtonText
struct UBP_ModDownloadDialog_C_SetButtonText_Params
{
	struct FText                                       ButtonText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.SetTitleText
struct UBP_ModDownloadDialog_C_SetTitleText_Params
{
	struct FText                                       TitleText;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.OnFailure_58DC14C24C711AD987B2748E428D6989
struct UBP_ModDownloadDialog_C_OnFailure_58DC14C24C711AD987B2748E428D6989_Params
{
	struct FModioResponse                              response;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.OnSuccess_58DC14C24C711AD987B2748E428D6989
struct UBP_ModDownloadDialog_C_OnSuccess_58DC14C24C711AD987B2748E428D6989_Params
{
	struct FModioResponse                              response;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.OnFailure_61D8F3FD4D4BA8FF9E81C1A564ECEC8C
struct UBP_ModDownloadDialog_C_OnFailure_61D8F3FD4D4BA8FF9E81C1A564ECEC8C_Params
{
	struct FModioResponse                              response;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               mods_are_updated;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.OnSuccess_61D8F3FD4D4BA8FF9E81C1A564ECEC8C
struct UBP_ModDownloadDialog_C_OnSuccess_61D8F3FD4D4BA8FF9E81C1A564ECEC8C_Params
{
	struct FModioResponse                              response;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               mods_are_updated;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.BndEvt__BP_OneButtonDialog_K2Node_ComponentBoundEvent_14_ButtonClicked__DelegateSignature
struct UBP_ModDownloadDialog_C_BndEvt__BP_OneButtonDialog_K2Node_ComponentBoundEvent_14_ButtonClicked__DelegateSignature_Params
{
};

// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.Show
struct UBP_ModDownloadDialog_C_Show_Params
{
};

// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.Hide
struct UBP_ModDownloadDialog_C_Hide_Params
{
};

// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.Tick
struct UBP_ModDownloadDialog_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.SubscriptionsFailed
struct UBP_ModDownloadDialog_C_SubscriptionsFailed_Params
{
};

// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.ExecuteUbergraph_BP_ModDownloadDialog
struct UBP_ModDownloadDialog_C_ExecuteUbergraph_BP_ModDownloadDialog_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.DownloadFailed__DelegateSignature
struct UBP_ModDownloadDialog_C_DownloadFailed__DelegateSignature_Params
{
};

// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.DownloadCanceled__DelegateSignature
struct UBP_ModDownloadDialog_C_DownloadCanceled__DelegateSignature_Params
{
};

// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.DownloadCompleted__DelegateSignature
struct UBP_ModDownloadDialog_C_DownloadCompleted__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
