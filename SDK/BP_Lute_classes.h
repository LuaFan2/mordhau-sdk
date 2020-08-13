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

// BlueprintGeneratedClass BP_Lute.BP_Lute_C
// 0x0064 (0x1CCC - 0x1C68)
class ABP_Lute_C : public ABP_MordhauWeapon_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1C68(0x0008) (Transient, DuplicateTransient)
	class UAudioComponent*                             Audio3;                                                   // 0x1C70(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Audio2;                                                   // 0x1C78(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Audio1;                                                   // 0x1C80(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Audio0;                                                   // 0x1C88(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      ReplicatedTone;                                           // 0x1C90(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x1C91(0x0003) MISSED OFFSET
	float                                              ToneCooldown;                                             // 0x1C94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChordCooldown;                                            // 0x1C98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x1C9C(0x0004) MISSED OFFSET
	TArray<class USoundWave*>                          LuteSounds;                                               // 0x1CA0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAudioComponent*>                     AudioComponents;                                          // 0x1CB0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                LastAudioComponent;                                       // 0x1CC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NextChordTime;                                            // 0x1CC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NextPlayTime;                                             // 0x1CC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Lute.BP_Lute_C");
		return ptr;
	}


	void ServerSetToneAndPlay(unsigned char Tone);
	bool RequestBlock(EBlockType* BlockType, bool* bAllowFTP);
	void GetToneFromAttack(EAttackMove Move, float Angle, unsigned char* Tone);
	void PlayTone(unsigned char Tone);
	void OnRep_ReplicatedTone();
	void UserConstructionScript();
	void RequestAttack(EAttackMove* Move, float* Angle);
	void ServerSetTone(unsigned char Tone);
	void EquipmentCommand(int* Command);
	void ExecuteUbergraph_BP_Lute(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
