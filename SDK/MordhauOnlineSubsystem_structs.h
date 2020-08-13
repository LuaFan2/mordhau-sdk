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

// Enum MordhauOnlineSubsystem.EServerList
enum class EServerList : uint8_t
{
	EServerList__Internet          = 0,
	EServerList__Favorites         = 1,
	EServerList__History           = 2,
	EServerList__Spectator         = 3,
	EServerList__LAN               = 4,
	EServerList__Friends           = 5,
	EServerList__EServerList_MAX   = 6
};


// Enum MordhauOnlineSubsystem.ERequestMethod
enum class ERequestMethod : uint8_t
{
	ERequestMethod__GET            = 0,
	ERequestMethod__HEAD           = 1,
	ERequestMethod__POST           = 2,
	ERequestMethod__ERequestMethod_MAX = 3
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MordhauOnlineSubsystem.SteamID
// 0x0008
struct FSteamID
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct MordhauOnlineSubsystem.HTTPResponse
// 0x0068
struct FHTTPResponse
{
	unsigned char                                      UnknownData00[0x68];                                      // 0x0000(0x0068) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
