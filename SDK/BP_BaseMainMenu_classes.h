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

// WidgetBlueprintGeneratedClass BP_BaseMainMenu.BP_BaseMainMenu_C
// 0x0000 (0x0208 - 0x0208)
class UBP_BaseMainMenu_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_BaseMainMenu.BP_BaseMainMenu_C");
		return ptr;
	}


	void HideMainMenu();
	void ShowMainMenu(TEnumAsByte<E_ArmoryStates> ArmoryState);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
