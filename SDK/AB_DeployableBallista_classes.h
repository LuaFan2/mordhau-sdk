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

// AnimBlueprintGeneratedClass AB_DeployableBallista.AB_DeployableBallista_C
// 0x0BE0 (0x1000 - 0x0420)
class UAB_DeployableBallista_C : public UAdvancedCharacterAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0420(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_61017A1C496D912F28BA8A8C992F71FA;      // 0x0428(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FEBC7B2A464D1EAC733E9F9E13D536B4;// 0x0470(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8EA24580488520CBB422EDBE3A398502;// 0x04B8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_21CA53CB456341CCC7BD78AE0BE969A6;// 0x0500(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_52BE36854EF87D1CD3A735846FBB2A1A;// 0x0548(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C83393044E04E2A35725CEB1DDFA6DE2;// 0x0590(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_552B54FC4BC1B95C9D965D87C54EE0A7;// 0x05D8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A3BE9F424378D3E6FBC1AC9CC07ED668;// 0x0620(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AF163B524B4BA9997CEA6B84DA67B4DC;// 0x0668(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C50205A74654E79A64AE62849F2D60A1;// 0x0718(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A1553795466FE26F74467C80F4135287;// 0x0760(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_617AA37043B447BA99CFAC8CE4B340A0;// 0x0810(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6B0C0AF64AD59F37C07E89A9A170B98F;// 0x0858(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_446E639145E4AA1991432EA2E0A3EA44;// 0x0908(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_B92AB08344983DC4A8C53DA6AF429E67;// 0x0950(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_19484B4B48B2A00AEAD6E6AC8B895EC9;// 0x09C0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_1893899A4AC57B4C38833D9B8BE3469D;// 0x0A08(0x00E0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_CB94220749A915A2F471AD9D739D3767;// 0x0AE8(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_C9E6681A49176647A00FCBB075B7E964;// 0x0B30(0x0178)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_C657128048C575F655C00D868727D493;// 0x0CA8(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_79668771469D6679C325ACA4FAF0ACA7;// 0x0CF0(0x0178)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6B45609945BD6DCDFE02E59283A9A956;// 0x0E68(0x0178)
	float                                              ReloadTime;                                               // 0x0FE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HasDriverFloat;                                           // 0x0FE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LookUp;                                                   // 0x0FE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                State;                                                    // 0x0FEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpawnTurnValue;                                           // 0x0FF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Turn;                                                     // 0x0FF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Roll;                                                     // 0x0FF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Pitch;                                                    // 0x0FFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_DeployableBallista.AB_DeployableBallista_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_DeployableBallista_AnimGraphNode_TransitionResult_C83393044E04E2A35725CEB1DDFA6DE2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_DeployableBallista_AnimGraphNode_TransitionResult_552B54FC4BC1B95C9D965D87C54EE0A7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_DeployableBallista_AnimGraphNode_TransitionResult_52BE36854EF87D1CD3A735846FBB2A1A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_DeployableBallista_AnimGraphNode_TransitionResult_A3BE9F424378D3E6FBC1AC9CC07ED668();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_DeployableBallista_AnimGraphNode_TransitionResult_21CA53CB456341CCC7BD78AE0BE969A6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_DeployableBallista_AnimGraphNode_SequencePlayer_6B0C0AF64AD59F37C07E89A9A170B98F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_DeployableBallista_AnimGraphNode_TransitionResult_8EA24580488520CBB422EDBE3A398502();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_DeployableBallista_AnimGraphNode_ModifyBone_C9E6681A49176647A00FCBB075B7E964();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_DeployableBallista_AnimGraphNode_ModifyBone_79668771469D6679C325ACA4FAF0ACA7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_DeployableBallista_AnimGraphNode_ModifyBone_6B45609945BD6DCDFE02E59283A9A956();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_DeployableBallista_AnimGraphNode_TransitionResult_FEBC7B2A464D1EAC733E9F9E13D536B4();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void BlueprintBeginPlay();
	void ExecuteUbergraph_AB_DeployableBallista(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
