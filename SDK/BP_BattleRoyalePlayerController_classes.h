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

// BlueprintGeneratedClass BP_BattleRoyalePlayerController.BP_BattleRoyalePlayerController_C
// 0x0010 (0x0C41 - 0x0C31)
class ABP_BattleRoyalePlayerController_C : public ABP_MordhauPlayerController_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0C31(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C38(0x0008) (Transient, DuplicateTransient)
	unsigned char                                      PlacementPosition;                                        // 0x0C40(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BattleRoyalePlayerController.BP_BattleRoyalePlayerController_C");
		return ptr;
	}


	void OnRep_PlacementPosition();
	void UserConstructionScript();
	void OnNewProfileFromClientPreValidation();
	void ShowBREndScreenDelayed();
	void ExecuteUbergraph_BP_BattleRoyalePlayerController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
