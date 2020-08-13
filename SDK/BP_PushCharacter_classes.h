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

// BlueprintGeneratedClass BP_PushCharacter.BP_PushCharacter_C
// 0x0009 (0x1D39 - 0x1D30)
class ABP_PushCharacter_C : public ABP_FrontlineCharacter_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1D30(0x0008) (Transient, DuplicateTransient)
	bool                                               CloseToObjectiveOnDeath;                                  // 0x1D38(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PushCharacter.BP_PushCharacter_C");
		return ptr;
	}


	void GetOutOfBoundsText(struct FText* Header);
	void GetOutOfBoundsSubtext(struct FText* Subtext);
	void UserConstructionScript();
	void OnExceededTimeOutOfBounds();
	void ExecuteUbergraph_BP_PushCharacter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
