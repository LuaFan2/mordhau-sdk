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

// BlueprintGeneratedClass BP_DrapedCuirassCut.BP_DrapedCuirassCut_C
// 0x0000 (0x0220 - 0x0220)
class UBP_DrapedCuirassCut_C : public UBP_Tier3UpperChestWearable_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DrapedCuirassCut.BP_DrapedCuirassCut_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
