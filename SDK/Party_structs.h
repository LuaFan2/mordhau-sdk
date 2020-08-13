#pragma once

// Name: Mordhau, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum Party.ECrossplayPreference
enum class ECrossplayPreference : uint8_t
{
	ECrossplayPreference__NoSelection = 0,
	ECrossplayPreference__OptedIn  = 1,
	ECrossplayPreference__OptedOut = 2,
	ECrossplayPreference__ECrossplayPreference_MAX = 3
};


// Enum Party.EJoinPartyDenialReason
enum class EJoinPartyDenialReason : uint8_t
{
	EJoinPartyDenialReason__NoReason = 0,
	EJoinPartyDenialReason__Busy   = 1,
	EJoinPartyDenialReason__PartyFull = 2,
	EJoinPartyDenialReason__GameFull = 3,
	EJoinPartyDenialReason__NotPartyLeader = 4,
	EJoinPartyDenialReason__PartyPrivate = 5,
	EJoinPartyDenialReason__NeedsTutorial = 6,
	EJoinPartyDenialReason__GameModeRestricted = 7,
	EJoinPartyDenialReason__JoinerCrossplayRestricted = 8,
	EJoinPartyDenialReason__MemberCrossplayRestricted = 9,
	EJoinPartyDenialReason__EJoinPartyDenialReason_MAX = 10
};


// Enum Party.EPartyType
enum class EPartyType : uint8_t
{
	EPartyType__Public             = 0,
	EPartyType__FriendsOnly        = 1,
	EPartyType__Private            = 2,
	EPartyType__EPartyType_MAX     = 3
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Party.PartyState
// 0x0010
struct FPartyState
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	EPartyType                                         PartyType;                                                // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bLeaderFriendsOnly;                                       // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bLeaderInvitesOnly;                                       // 0x000A(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bInvitesDisabled;                                         // 0x000B(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Party.PartyMemberRepState
// 0x0008
struct FPartyMemberRepState
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
