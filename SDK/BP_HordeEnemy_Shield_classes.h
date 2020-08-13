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

// BlueprintGeneratedClass BP_HordeEnemy_Shield.BP_HordeEnemy_Shield_C
// 0x000C (0x1D9C - 0x1D90)
class ABP_HordeEnemy_Shield_C : public ABP_HordeEnemy_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1D90(0x0008) (Transient, DuplicateTransient)
	float                                              HoldTime;                                                 // 0x1D98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HordeEnemy_Shield.BP_HordeEnemy_Shield_C");
		return ptr;
	}


	void UserConstructionScript();
	void BPLODTick(float* DeltaTime);
	void ExecuteUbergraph_BP_HordeEnemy_Shield(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
