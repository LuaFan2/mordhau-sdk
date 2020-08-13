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

// BlueprintGeneratedClass BP_FrontlineGameMode.BP_FrontlineGameMode_C
// 0x0010 (0x0574 - 0x0564)
class ABP_FrontlineGameMode_C : public ABP_MordhauGameMode_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0564(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0568(0x0008) (Transient, DuplicateTransient)
	float                                              DeathTicketCost;                                          // 0x0570(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FrontlineGameMode.BP_FrontlineGameMode_C");
		return ptr;
	}


	void UserConstructionScript();
	void MatchTimeRanOut();
	void OnTeamScoreChanged(int* Team, float* OldValue);
	void OnKilled(class AController** Killer, class AController** KilledPlayer, class APawn** KilledPawn, EMordhauDamageType* Type, unsigned char* SubType, class AActor** DamageSource, class AActor** DamageAgent);
	void ExecuteUbergraph_BP_FrontlineGameMode(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
