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

// BlueprintGeneratedClass BP_BattleRoyaleBaseItemSpawn.BP_BattleRoyaleBaseItemSpawn_C
// 0x0050 (0x04E0 - 0x0490)
class ABP_BattleRoyaleBaseItemSpawn_C : public AMordhauActor
{
public:
	TMap<class UClass*, float>                         ItemList;                                                 // 0x0490(0x0050) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BattleRoyaleBaseItemSpawn.BP_BattleRoyaleBaseItemSpawn_C");
		return ptr;
	}


	void SpawnRandomItem(const struct FTransform& InSpawnTransform, class AMordhauPlayerController* CustomizeFor, class AActor** SpawnedActor);
	void GetRandomItem(class UClass** FoundItem);
	void RenormalizeChances();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
