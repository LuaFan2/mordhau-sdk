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

// AnimBlueprintGeneratedClass AB_Catapult.AB_Catapult_C
// 0x10C4 (0x14F4 - 0x0430)
class UAB_Catapult_C : public UWheeledVehicleAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_87BBF6D84787C25E9B0AD1876DEDEC6A;      // 0x0438(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6868BA13429991587A91F28A3491FC48;// 0x0480(0x0178)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_83512B50414A15EFBA914DA6D7CB4E2F;// 0x05F8(0x0178)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_C85CEE584CBB8CB9C22EFDB091709C9E;// 0x0770(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_F5F2C8AA4499B116587BB7ACF226A888;// 0x07B8(0x0178)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_8F6F160B4DA1166B68AEED82AF7616EE;// 0x0930(0x0178)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_C445EB7C4B0081E5A0E8999A6A374499;// 0x0AA8(0x0130)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1E6F76D64F95614AF00DFEA3F67D3874;// 0x0BD8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6155FBAD424DC5C683D4ADB17AB34213;// 0x0C20(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9FD49D60415C8539C8D40A92BDB80AB9;// 0x0C68(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7273B278483518FF1DB798B016314A32;// 0x0CB0(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_3FB7D753465B459BC9CB2F883BFA9091;// 0x0CF8(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_506372DB4879263F4A60EA98BA5A76C3;// 0x0D30(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6D211ED44C121E619B95D782774A11CC;// 0x0D78(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C5ACF5D443F1D2B770F0429D941DA9D5;// 0x0E28(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_80C5915845B1A6824E5C0892FF7BF5CE;// 0x0E70(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_6B58F1EF474AFDE41143D0AB1683404F;// 0x0EB8(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_D7D05B8A48F41FD9DFAC609E6853D403;// 0x0F00(0x0178)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_7BCE2E174FA0126B4827FCAF5BFF4319;// 0x1078(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F72624734FC43DAFD99FA29E49C17D2C;// 0x10B0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_A9F704934CD05277BD57BEAE6E9AEE54;// 0x10F8(0x00E0)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_D331A9F740AE767A53A864B5BE80F2EF;// 0x11D8(0x0030)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_452B23FD496E7FA918C9FABA6DE67EB1;// 0x1208(0x0178)
	struct FAnimNode_RotateAroundPivot                 AnimGraphNode_RotateAroundPivot_C61E91314F1646F46515C6B8C1CECC39;// 0x1380(0x0168)
	unsigned char                                      State;                                                    // 0x14E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x14E9(0x0003) MISSED OFFSET
	float                                              Wheels;                                                   // 0x14EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Arm;                                                      // 0x14F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_Catapult.AB_Catapult_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Catapult_AnimGraphNode_TransitionResult_9FD49D60415C8539C8D40A92BDB80AB9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Catapult_AnimGraphNode_TransitionResult_7273B278483518FF1DB798B016314A32();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Catapult_AnimGraphNode_TransitionResult_6155FBAD424DC5C683D4ADB17AB34213();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Catapult_AnimGraphNode_TransitionResult_1E6F76D64F95614AF00DFEA3F67D3874();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Catapult_AnimGraphNode_RotateAroundPivot_C61E91314F1646F46515C6B8C1CECC39();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Catapult_AnimGraphNode_ModifyBone_8F6F160B4DA1166B68AEED82AF7616EE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Catapult_AnimGraphNode_ModifyBone_F5F2C8AA4499B116587BB7ACF226A888();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Catapult_AnimGraphNode_ModifyBone_83512B50414A15EFBA914DA6D7CB4E2F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Catapult_AnimGraphNode_ModifyBone_6868BA13429991587A91F28A3491FC48();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_AB_Catapult(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
