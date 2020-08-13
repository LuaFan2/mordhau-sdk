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

// WidgetBlueprintGeneratedClass BP_SpawnScreen.BP_SpawnScreen_C
// 0x0040 (0x0248 - 0x0208)
class UBP_SpawnScreen_C : public UUserWidget
{
public:
	TArray<class UBP_SpawnScreenPoint_C*>              SpawnScreenPoint;                                         // 0x0208(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UBP_SpawnScreenIcon_C*>               SpawnScreenIcons;                                         // 0x0218(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsActive;                                                 // 0x0228(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0229(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    Updated_Spawn_Point_Widgets;                              // 0x0230(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UBP_SpawnScreenPoint_C*                      SelectedScreenPoint;                                      // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_SpawnScreen.BP_SpawnScreen_C");
		return ptr;
	}


	struct FText GetText_1();
	void SetColor(class UImage* Image, TArray<struct FLinearColor> Team_Color_Array, unsigned char Team, class APlayerState* PlayerState);
	void UpdateSpawnScreenIcons(class UCanvasPanel* Canvas_Panel);
	struct FEventReply OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent);
	void UpdateSpawnPointWidgets();
	void Hide();
	void Show();
	void Updated_Spawn_Point_Widgets__DelegateSignature(class UBP_SpawnScreenPoint_C* Selected_Screen_Point);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
