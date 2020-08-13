
#include "../SDK.h"

// Name: Mordhau, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_SpawnInfo.BP_SpawnInfo_C.Get_SpawnInfoText_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_SpawnInfo_C::Get_SpawnInfoText_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnInfo.BP_SpawnInfo_C.Get_SpawnInfoText_Text_1");

	UBP_SpawnInfo_C_Get_SpawnInfoText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SpawnInfo.BP_SpawnInfo_C.GetVisibility_2
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_SpawnInfo_C::GetVisibility_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnInfo.BP_SpawnInfo_C.GetVisibility_2");

	UBP_SpawnInfo_C_GetVisibility_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SpawnInfo.BP_SpawnInfo_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_SpawnInfo_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnInfo.BP_SpawnInfo_C.GetVisibility_1");

	UBP_SpawnInfo_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SpawnInfo.BP_SpawnInfo_C.GetSpawnCharacterName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Name                           (Parm, OutParm)

void UBP_SpawnInfo_C::GetSpawnCharacterName(struct FText* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnInfo.BP_SpawnInfo_C.GetSpawnCharacterName");

	UBP_SpawnInfo_C_GetSpawnCharacterName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
}


// Function BP_SpawnInfo.BP_SpawnInfo_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SpawnInfo_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnInfo.BP_SpawnInfo_C.Tick");

	UBP_SpawnInfo_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpawnInfo.BP_SpawnInfo_C.ExecuteUbergraph_BP_SpawnInfo
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SpawnInfo_C::ExecuteUbergraph_BP_SpawnInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnInfo.BP_SpawnInfo_C.ExecuteUbergraph_BP_SpawnInfo");

	UBP_SpawnInfo_C_ExecuteUbergraph_BP_SpawnInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
