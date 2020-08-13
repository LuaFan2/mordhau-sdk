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

// BlueprintGeneratedClass BP_RandomProfileDoll.BP_RandomProfileDoll_C
// 0x00AD (0x1DDD - 0x1D30)
class ABP_RandomProfileDoll_C : public ABP_CharacterDoll_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1D30(0x0008) (Transient, DuplicateTransient)
	struct FCharacterProfile                           CurrentProfileStored;                                     // 0x1D38(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                RerolledFrame;                                            // 0x1DD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SkippedFirstFrame;                                        // 0x1DDC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_RandomProfileDoll.BP_RandomProfileDoll_C");
		return ptr;
	}


	void UserConstructionScript();
	void Reroll();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_BP_RandomProfileDoll(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
