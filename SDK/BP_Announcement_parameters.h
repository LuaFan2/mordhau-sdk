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

// Function BP_Announcement.BP_Announcement_C.GetVisibility_1
struct UBP_Announcement_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Announcement.BP_Announcement_C.ShowAnnouncement
struct UBP_Announcement_C_ShowAnnouncement_Params
{
};

// Function BP_Announcement.BP_Announcement_C.GetAnnouncementBoxVisibility
struct UBP_Announcement_C_GetAnnouncementBoxVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Announcement.BP_Announcement_C.Tick
struct UBP_Announcement_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Announcement.BP_Announcement_C.TimerEvent
struct UBP_Announcement_C_TimerEvent_Params
{
};

// Function BP_Announcement.BP_Announcement_C.Show
struct UBP_Announcement_C_Show_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Subtext;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_AnnouncementType>                    Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Announcement.BP_Announcement_C.Construct
struct UBP_Announcement_C_Construct_Params
{
};

// Function BP_Announcement.BP_Announcement_C.OnExitAnimFinish
struct UBP_Announcement_C_OnExitAnimFinish_Params
{
};

// Function BP_Announcement.BP_Announcement_C.ExecuteUbergraph_BP_Announcement
struct UBP_Announcement_C_ExecuteUbergraph_BP_Announcement_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
