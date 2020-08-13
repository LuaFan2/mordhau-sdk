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

// Function BP_SpawnScreen.BP_SpawnScreen_C.GetText_1
struct UBP_SpawnScreen_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_SpawnScreen.BP_SpawnScreen_C.SetColor
struct UBP_SpawnScreen_C_SetColor_Params
{
	class UImage*                                      Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FLinearColor>                        Team_Color_Array;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	unsigned char                                      Team;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APlayerState*                                PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SpawnScreen.BP_SpawnScreen_C.UpdateSpawnScreenIcons
struct UBP_SpawnScreen_C_UpdateSpawnScreenIcons_Params
{
	class UCanvasPanel*                                Canvas_Panel;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_SpawnScreen.BP_SpawnScreen_C.OnKeyDown
struct UBP_SpawnScreen_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_SpawnScreen.BP_SpawnScreen_C.UpdateSpawnPointWidgets
struct UBP_SpawnScreen_C_UpdateSpawnPointWidgets_Params
{
};

// Function BP_SpawnScreen.BP_SpawnScreen_C.Hide
struct UBP_SpawnScreen_C_Hide_Params
{
};

// Function BP_SpawnScreen.BP_SpawnScreen_C.Show
struct UBP_SpawnScreen_C_Show_Params
{
};

// Function BP_SpawnScreen.BP_SpawnScreen_C.Updated Spawn Point Widgets__DelegateSignature
struct UBP_SpawnScreen_C_Updated_Spawn_Point_Widgets__DelegateSignature_Params
{
	class UBP_SpawnScreenPoint_C*                      Selected_Screen_Point;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
