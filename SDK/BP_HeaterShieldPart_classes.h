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

// BlueprintGeneratedClass BP_HeaterShieldPart.BP_HeaterShieldPart_C
// 0x0000 (0x0078 - 0x0078)
class UBP_HeaterShieldPart_C : public UBP_MordhauEquipmentPart_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HeaterShieldPart.BP_HeaterShieldPart_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
