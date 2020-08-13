#pragma once

#include "../SDK.h"

// Name: Mordhau, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_SkillTreeBranch.BP_SkillTreeBranch_C.Clear
struct UBP_SkillTreeBranch_C_Clear_Params
{
};

// Function BP_SkillTreeBranch.BP_SkillTreeBranch_C.AddNodeToBranch
struct UBP_SkillTreeBranch_C_AddNodeToBranch_Params
{
	TEnumAsByte<E_HordeSkill>                          Skill;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBP_SkillTreeNode_C*                         Node;                                                     // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_SkillTreeBranch.BP_SkillTreeBranch_C.Construct
struct UBP_SkillTreeBranch_C_Construct_Params
{
};

// Function BP_SkillTreeBranch.BP_SkillTreeBranch_C.ExecuteUbergraph_BP_SkillTreeBranch
struct UBP_SkillTreeBranch_C_ExecuteUbergraph_BP_SkillTreeBranch_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
