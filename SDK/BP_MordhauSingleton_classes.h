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

// BlueprintGeneratedClass BP_MordhauSingleton.BP_MordhauSingleton_C
// 0x00F0 (0x0898 - 0x07A8)
class UBP_MordhauSingleton_C : public UMordhauSingleton
{
public:
	TMap<struct FString, TEnumAsByte<E_ChatMuteTypes>> ChatMutedPlayers;                                         // 0x07A8(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<struct FString, struct FText>                 ChatMutedPlayerNames;                                     // 0x07F8(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<struct FKey, class UTexture2D*>               ButtonPromptImageMap;                                     // 0x0848(0x0050) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MordhauSingleton.BP_MordhauSingleton_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
