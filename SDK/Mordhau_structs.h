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

// Enum Mordhau.EServerRegion
enum class EServerRegion : uint8_t
{
	EServerRegion__East_Asia       = 0,
	EServerRegion__Europe          = 1,
	EServerRegion__Oceania         = 2,
	EServerRegion__Russia          = 3,
	EServerRegion__South_America   = 4,
	EServerRegion__US_Central      = 5,
	EServerRegion__US_East         = 6,
	EServerRegion__US_West         = 7,
	EServerRegion__Worldwide       = 8,
	EServerRegion__COUNT           = 9,
	EServerRegion__EServerRegion_MAX = 10
};


// Enum Mordhau.EAdvancedCharacterFlags
enum class EAdvancedCharacterFlags : uint8_t
{
	EAdvancedCharacterFlags__Airborne = 0,
	EAdvancedCharacterFlags__Burning = 1,
	EAdvancedCharacterFlags__RagdollFalling = 2,
	EAdvancedCharacterFlags__Jumped = 3,
	EAdvancedCharacterFlags__EAdvancedCharacterFlags_MAX = 4
};


// Enum Mordhau.ECameraShakeType
enum class ECameraShakeType : uint8_t
{
	ECameraShakeType__Default      = 0,
	ECameraShakeType__Movement     = 1,
	ECameraShakeType__Combat       = 2,
	ECameraShakeType__ECameraShakeType_MAX = 3
};


// Enum Mordhau.EAttackType
enum class EAttackType : uint8_t
{
	EAttackType__Regular           = 0,
	EAttackType__Riposte           = 1,
	EAttackType__Combo             = 2,
	EAttackType__PostClash         = 3,
	EAttackType__Morph             = 4,
	EAttackType__EAttackType_MAX   = 5
};


// Enum Mordhau.EAttackStage
enum class EAttackStage : uint8_t
{
	EAttackStage__Windup           = 0,
	EAttackStage__Release          = 1,
	EAttackStage__Recovery         = 2,
	EAttackStage__EAttackStage_MAX = 3
};


// Enum Mordhau.EBlockedReason
enum class EBlockedReason : uint8_t
{
	EBlockedReason__Parry          = 0,
	EBlockedReason__DisarmParry    = 1,
	EBlockedReason__StunParry      = 2,
	EBlockedReason__ChamberLeft    = 3,
	EBlockedReason__ChamberRight   = 4,
	EBlockedReason__WorldFail      = 5,
	EBlockedReason__ClashA         = 6,
	EBlockedReason__ClashB         = 7,
	EBlockedReason__HitCancel      = 8,
	EBlockedReason__WorldSuccess   = 9,
	EBlockedReason__Hit            = 10,
	EBlockedReason__EnvironmentHit = 11,
	EBlockedReason__RangedParry    = 12,
	EBlockedReason__RiposteParry   = 13,
	EBlockedReason__DisarmClash    = 14,
	EBlockedReason__EBlockedReason_MAX = 15
};


// Enum Mordhau.ESwayMethod
enum class ESwayMethod : uint8_t
{
	ESwayMethod__Sin               = 0,
	ESwayMethod__Constant          = 1,
	ESwayMethod__ESwayMethod_MAX   = 2
};


// Enum Mordhau.ESwitchStage
enum class ESwitchStage : uint8_t
{
	ESwitchStage__Reaching         = 0,
	ESwitchStage__Drawing          = 1,
	ESwitchStage__ESwitchStage_MAX = 2
};


// Enum Mordhau.EFeintType
enum class EFeintType : uint8_t
{
	EFeintType__Regular            = 0,
	EFeintType__Combo              = 1,
	EFeintType__Chamber            = 2,
	EFeintType__Release            = 3,
	EFeintType__EFeintType_MAX     = 4
};


// Enum Mordhau.EAIFacingMode
enum class EAIFacingMode : uint8_t
{
	EAIFacingMode__Movement        = 0,
	EAIFacingMode__Location        = 1,
	EAIFacingMode__Actor           = 2,
	EAIFacingMode__Actor2D         = 3,
	EAIFacingMode__Bone            = 4,
	EAIFacingMode__EAIFacingMode_MAX = 5
};


// Enum Mordhau.EBeaconRequest
enum class EBeaconRequest : uint8_t
{
	EBeaconRequest__Ping           = 0,
	EBeaconRequest__ReserveSlots   = 1,
	EBeaconRequest__EBeaconRequest_MAX = 2
};


// Enum Mordhau.EReservationStatus
enum class EReservationStatus : uint8_t
{
	EReservationStatus__Success    = 0,
	EReservationStatus__Full       = 1,
	EReservationStatus__Failure    = 2,
	EReservationStatus__EReservationStatus_MAX = 3
};


// Enum Mordhau.EMotionType
enum class EMotionType : uint8_t
{
	EMotionType__Idle              = 0,
	EMotionType__Attack            = 1,
	EMotionType__Parry             = 2,
	EMotionType__Flinched          = 3,
	EMotionType__Stunned           = 4,
	EMotionType__Feinted           = 5,
	EMotionType__Blocked           = 6,
	EMotionType__Disarmed          = 7,
	EMotionType__EquipmentSwitch   = 8,
	EMotionType__DropEquipment     = 9,
	EMotionType__Emote             = 10,
	EMotionType__EquipmentModeSwitch = 11,
	EMotionType__RangedDraw        = 12,
	EMotionType__RangedRelease     = 13,
	EMotionType__QuickthrowDraw    = 14,
	EMotionType__QuickthrowRelease = 15,
	EMotionType__InteractWith      = 16,
	EMotionType__Reload            = 17,
	EMotionType__RangedCancel      = 18,
	EMotionType__CouchedAttack     = 19,
	EMotionType__PommelDraw        = 20,
	EMotionType__PommelThrow       = 21,
	EMotionType__EmoteCancel       = 22,
	EMotionType__Holster           = 23,
	EMotionType__EnterVehicle      = 24,
	EMotionType__LeaveVehicle      = 25,
	EMotionType__RagdollFalling    = 26,
	EMotionType__Climbing          = 27,
	EMotionType__Ability           = 28,
	EMotionType__EMotionType_MAX   = 29
};


// Enum Mordhau.EEquipmentCategory
enum class EEquipmentCategory : uint8_t
{
	EEquipmentCategory__Undefined  = 0,
	EEquipmentCategory__OneHanded  = 1,
	EEquipmentCategory__TwoHanded  = 2,
	EEquipmentCategory__Ranged     = 3,
	EEquipmentCategory__Shield     = 4,
	EEquipmentCategory__Utility    = 5,
	EEquipmentCategory__EEquipmentCategory_MAX = 6
};


// Enum Mordhau.EEquipmentType
enum class EEquipmentType : uint8_t
{
	EEquipmentType__Undefined      = 0,
	EEquipmentType__MeleeNoAltMode = 1,
	EEquipmentType__MeleeWithAltMode = 2,
	EEquipmentType__MeleeThrownAltMode = 3,
	EEquipmentType__ProjectileWeapon = 4,
	EEquipmentType__Shield         = 5,
	EEquipmentType__Thrown         = 6,
	EEquipmentType__Utility        = 7,
	EEquipmentType__EEquipmentType_MAX = 8
};


// Enum Mordhau.EAuxiliaryMeshMode
enum class EAuxiliaryMeshMode : uint8_t
{
	EAuxiliaryMeshMode__None       = 0,
	EAuxiliaryMeshMode__Arrow      = 1,
	EAuxiliaryMeshMode__Bolt       = 2,
	EAuxiliaryMeshMode__Scabbard   = 3,
	EAuxiliaryMeshMode__Pommel     = 4,
	EAuxiliaryMeshMode__EAuxiliaryMeshMode_MAX = 5
};


// Enum Mordhau.EPartyState
enum class EPartyState : uint8_t
{
	EPartyState__Idle              = 0,
	EPartyState__Searching         = 1,
	EPartyState__Joining           = 2,
	EPartyState__EPartyState_MAX   = 3
};


// Enum Mordhau.ERichPresenceStatus
enum class ERichPresenceStatus : uint8_t
{
	ERichPresenceStatus__MainMenu  = 0,
	ERichPresenceStatus__LocalMatch = 1,
	ERichPresenceStatus__OnlineMatch = 2,
	ERichPresenceStatus__ERichPresenceStatus_MAX = 3
};


// Enum Mordhau.EModeSwitchType
enum class EModeSwitchType : uint8_t
{
	EModeSwitchType__Regular       = 0,
	EModeSwitchType__Simple        = 1,
	EModeSwitchType__LeftToRightHand = 2,
	EModeSwitchType__RightToLeftHand = 3,
	EModeSwitchType__EModeSwitchType_MAX = 4
};


// Enum Mordhau.ELobbyMessage
enum class ELobbyMessage : uint8_t
{
	ELobbyMessage__Invalid         = 0,
	ELobbyMessage__Chat            = 1,
	ELobbyMessage__Kick            = 2,
	ELobbyMessage__Status          = 3,
	ELobbyMessage__Profile         = 4,
	ELobbyMessage__ELobbyMessage_MAX = 5
};


// Enum Mordhau.EOfficialServerVisibility
enum class EOfficialServerVisibility : uint8_t
{
	EOfficialServerVisibility__ServerBrowser = 0,
	EOfficialServerVisibility__Matchmaking = 1,
	EOfficialServerVisibility__EOfficialServerVisibility_MAX = 2
};


// Enum Mordhau.EActionSetChangeState
enum class EActionSetChangeState : uint8_t
{
	EActionSetChangeState__Active  = 0,
	EActionSetChangeState__Changing = 1,
	EActionSetChangeState__Changed = 2,
	EActionSetChangeState__EActionSetChangeState_MAX = 3
};


// Enum Mordhau.EInputLineMode
enum class EInputLineMode : uint8_t
{
	EInputLineMode__SingleLine     = 0,
	EInputLineMode__MultiLine      = 1,
	EInputLineMode__EInputLineMode_MAX = 2
};


// Enum Mordhau.EInputTextMode
enum class EInputTextMode : uint8_t
{
	EInputTextMode__Normal         = 0,
	EInputTextMode__Password       = 1,
	EInputTextMode__EInputTextMode_MAX = 2
};


// Enum Mordhau.EActionSet
enum class EActionSet : uint8_t
{
	EActionSet__InGame             = 0,
	EActionSet__Spectator          = 1,
	EActionSet__Menu               = 2,
	EActionSet__EActionSet_MAX     = 3
};


// Enum Mordhau.EInventoryOperation
enum class EInventoryOperation : uint8_t
{
	EInventoryOperation__RefreshItems = 0,
	EInventoryOperation__SerializeItems = 1,
	EInventoryOperation__DeserializeItems = 2,
	EInventoryOperation__SplitItems = 3,
	EInventoryOperation__ConsolidateItems = 4,
	EInventoryOperation__UnlockItem = 5,
	EInventoryOperation__ConsumeItem = 6,
	EInventoryOperation__AddItem   = 7,
	EInventoryOperation__AddItems  = 8,
	EInventoryOperation__DropItems = 9,
	EInventoryOperation__EInventoryOperation_MAX = 10
};


// Enum Mordhau.EBlockType
enum class EBlockType : uint8_t
{
	EBlockType__Regular            = 0,
	EBlockType__AltRegular         = 1,
	EBlockType__ShieldWall         = 2,
	EBlockType__EBlockType_MAX     = 3
};


// Enum Mordhau.EScoreFeedReason
enum class EScoreFeedReason : uint8_t
{
	EScoreFeedReason__Kill         = 0,
	EScoreFeedReason__TeamKill     = 1,
	EScoreFeedReason__Assist       = 2,
	EScoreFeedReason__Suicide      = 3,
	EScoreFeedReason__PlayerDamage = 4,
	EScoreFeedReason__PlayerTeamDamage = 5,
	EScoreFeedReason__OtherDamage  = 6,
	EScoreFeedReason__OtherTeamDamage = 7,
	EScoreFeedReason__Capturing    = 8,
	EScoreFeedReason__Captured     = 9,
	EScoreFeedReason__Neutralizing = 10,
	EScoreFeedReason__Neutralized  = 11,
	EScoreFeedReason__Objective    = 12,
	EScoreFeedReason__Heal         = 13,
	EScoreFeedReason__WaveCleared  = 14,
	EScoreFeedReason__Repair       = 15,
	EScoreFeedReason__VehicleDamage = 16,
	EScoreFeedReason__VehicleTeamDamage = 17,
	EScoreFeedReason__EScoreFeedReason_MAX = 18
};


// Enum Mordhau.ECameraStyle
enum class ECameraStyle : uint8_t
{
	ECameraStyle__FirstPerson      = 0,
	ECameraStyle__ThirdPerson      = 1,
	ECameraStyle__Fixed            = 2,
	ECameraStyle__ECameraStyle_MAX = 3
};


// Enum Mordhau.EAntiCheat
enum class EAntiCheat : uint8_t
{
	EAntiCheat__Secure_Only        = 0,
	EAntiCheat__Insecure_Only      = 1,
	EAntiCheat__Both               = 2,
	EAntiCheat__EAntiCheat_MAX     = 3
};


// Enum Mordhau.EMovementModifier
enum class EMovementModifier : uint8_t
{
	EMovementModifier__Walk        = 0,
	EMovementModifier__Strafe      = 1,
	EMovementModifier__Backpedal   = 2,
	EMovementModifier__PartialSprint = 3,
	EMovementModifier__Sprint      = 4,
	EMovementModifier__Rush        = 5,
	EMovementModifier__Chasing     = 6,
	EMovementModifier__Supersprint = 7,
	EMovementModifier__EMovementModifier_MAX = 8
};


// Enum Mordhau.EStatSetBy
enum class EStatSetBy : uint8_t
{
	EStatSetBy__Client             = 0,
	EStatSetBy__Server             = 1,
	EStatSetBy__OfficialServer     = 2,
	EStatSetBy__EStatSetBy_MAX     = 3
};


// Enum Mordhau.EServerLocation
enum class EServerLocation : uint8_t
{
	EServerLocation__Germany       = 0,
	EServerLocation__France        = 1,
	EServerLocation__UK            = 2,
	EServerLocation__Poland        = 3,
	EServerLocation__Russia        = 4,
	EServerLocation__US_East       = 5,
	EServerLocation__US_Central    = 6,
	EServerLocation__US_West       = 7,
	EServerLocation__Australia     = 8,
	EServerLocation__Taiwan        = 9,
	EServerLocation__Brazil        = 10,
	EServerLocation__South_Africa  = 11,
	EServerLocation__COUNT         = 12,
	EServerLocation__EServerLocation_MAX = 13
};


// Enum Mordhau.EAvatarSize
enum class EAvatarSize : uint8_t
{
	EAvatarSize__Small             = 0,
	EAvatarSize__Medium            = 1,
	EAvatarSize__Large             = 2,
	EAvatarSize__EAvatarSize_MAX   = 3
};


// Enum Mordhau.ECallResult
enum class ECallResult : uint8_t
{
	ECallResult__Success           = 0,
	ECallResult__Failure           = 1,
	ECallResult__ECallResult_MAX   = 2
};


// Enum Mordhau.ESoundMix
enum class ESoundMix : uint8_t
{
	ESoundMix__Master              = 0,
	ESoundMix__Effects             = 1,
	ESoundMix__Music               = 2,
	ESoundMix__ESoundMix_MAX       = 3
};


// Enum Mordhau.EMordhauDamageType
enum class EMordhauDamageType : uint8_t
{
	EMordhauDamageType__Generic    = 0,
	EMordhauDamageType__Melee      = 1,
	EMordhauDamageType__Ranged     = 2,
	EMordhauDamageType__Fall       = 3,
	EMordhauDamageType__Fire       = 4,
	EMordhauDamageType__EMordhauDamageType_MAX = 5
};


// Enum Mordhau.EItemRarity
enum class EItemRarity : uint8_t
{
	EItemRarity__Common            = 0,
	EItemRarity__Uncommon          = 1,
	EItemRarity__Rare              = 2,
	EItemRarity__Epic              = 3,
	EItemRarity__Legendary         = 4,
	EItemRarity__Exclusive         = 5,
	EItemRarity__EItemRarity_MAX   = 6
};


// Enum Mordhau.EProfileValidationFailedReason
enum class EProfileValidationFailedReason : uint8_t
{
	EProfileValidationFailedReason__Unset = 0,
	EProfileValidationFailedReason__NotEnoughPoints = 1,
	EProfileValidationFailedReason__SkillTooLow = 2,
	EProfileValidationFailedReason__EProfileValidationFailedReason_MAX = 3
};


// Enum Mordhau.EAttackMove
enum class EAttackMove : uint8_t
{
	EAttackMove__RightStrike       = 0,
	EAttackMove__LeftStrike        = 1,
	EAttackMove__Stab              = 2,
	EAttackMove__AltStab           = 3,
	EAttackMove__Kick              = 4,
	EAttackMove__Bash              = 5,
	EAttackMove__Couch             = 6,
	EAttackMove__Ranged            = 7,
	EAttackMove__EAttackMove_MAX   = 8
};


// Enum Mordhau.EMainWearableSlot
enum class EMainWearableSlot : uint8_t
{
	EMainWearableSlot__Head        = 0,
	EMainWearableSlot__UpperChest  = 1,
	EMainWearableSlot__Legs        = 2,
	EMainWearableSlot__EMainWearableSlot_MAX = 3
};


// Enum Mordhau.EWearableSlot
enum class EWearableSlot : uint8_t
{
	EWearableSlot__Head            = 0,
	EWearableSlot__Coif            = 1,
	EWearableSlot__UpperChest      = 2,
	EWearableSlot__LowerChest      = 3,
	EWearableSlot__Shoulders       = 4,
	EWearableSlot__Arms            = 5,
	EWearableSlot__Hands           = 6,
	EWearableSlot__Legs            = 7,
	EWearableSlot__Feet            = 8,
	EWearableSlot__Total           = 9,
	EWearableSlot__Invalid         = 10,
	EWearableSlot__EWearableSlot_MAX = 11
};


// Enum Mordhau.EBudgetType
enum class EBudgetType : uint8_t
{
	EBudgetType__Particle          = 0,
	EBudgetType__Total             = 1,
	EBudgetType__EBudgetType_MAX   = 2
};


// Enum Mordhau.EHorseGear
enum class EHorseGear : uint8_t
{
	EHorseGear__Walk               = 0,
	EHorseGear__Trot               = 1,
	EHorseGear__Canter             = 2,
	EHorseGear__Gallop             = 3,
	EHorseGear__Total              = 4,
	EHorseGear__EHorseGear_MAX     = 5
};


// Enum Mordhau.EMovementRestriction
enum class EMovementRestriction : uint8_t
{
	EMovementRestriction__None     = 0,
	EMovementRestriction__PartialSprint = 1,
	EMovementRestriction__Walk     = 2,
	EMovementRestriction__NoMovement = 3,
	EMovementRestriction__EMovementRestriction_MAX = 4
};


// Enum Mordhau.EPerk
enum class EPerk : uint8_t
{
	EPerk__Pugilist                = 0,
	EPerk__Acrobat                 = 1,
	EPerk__Fury                    = 2,
	EPerk__Peasant                 = 3,
	EPerk__Fireproof               = 4,
	EPerk__Huntsman                = 5,
	EPerk__Friendly                = 6,
	EPerk__Rat                     = 7,
	EPerk__Cat                     = 8,
	EPerk__Wrecker                 = 9,
	EPerk__Smith                   = 10,
	EPerk__Tenacious               = 11,
	EPerk__SecondWind              = 12,
	EPerk__Bloodlust               = 13,
	EPerk__Rush                    = 14,
	EPerk__FleshWound              = 15,
	EPerk__Scavenger               = 16,
	EPerk__Dodge                   = 17,
	EPerk__Ranger                  = 18,
	EPerk__EPerk_MAX               = 19
};


// Enum Mordhau.EDismembermentType
enum class EDismembermentType : uint8_t
{
	EDismembermentType__None       = 0,
	EDismembermentType__Blunt      = 1,
	EDismembermentType__Pierce     = 2,
	EDismembermentType__Cut        = 3,
	EDismembermentType__EDismembermentType_MAX = 4
};


// Enum Mordhau.EParryRecoveryType
enum class EParryRecoveryType : uint8_t
{
	EParryRecoveryType__Success    = 0,
	EParryRecoveryType__Fail       = 1,
	EParryRecoveryType__Miss       = 2,
	EParryRecoveryType__EParryRecoveryType_MAX = 3
};


// Enum Mordhau.EParryStage
enum class EParryStage : uint8_t
{
	EParryStage__Parry             = 0,
	EParryStage__Recovery          = 1,
	EParryStage__EParryStage_MAX   = 2
};


// Enum Mordhau.EPlayFabRequestType
enum class EPlayFabRequestType : uint8_t
{
	EPlayFabRequestType__None      = 0,
	EPlayFabRequestType__LoginWithSteam = 1,
	EPlayFabRequestType__LoginWithCustomID = 2,
	EPlayFabRequestType__UpdateTimeDrift = 3,
	EPlayFabRequestType__GetTitleData = 4,
	EPlayFabRequestType__GetTitleInternalData = 5,
	EPlayFabRequestType__GetPlayerData = 6,
	EPlayFabRequestType__GetPlayerInventory = 7,
	EPlayFabRequestType__GetPlayerStats = 8,
	EPlayFabRequestType__UpdatePlayerStats = 9,
	EPlayFabRequestType__GetCatalogItems = 10,
	EPlayFabRequestType__GetPlayFabIDFromSteamID = 11,
	EPlayFabRequestType__ImportInventory = 12,
	EPlayFabRequestType__ImportOfficialServerStats = 13,
	EPlayFabRequestType__UnlockItems = 14,
	EPlayFabRequestType__GrantItems = 15,
	EPlayFabRequestType__GetServerInfo = 16,
	EPlayFabRequestType__GetLeaderboard = 17,
	EPlayFabRequestType__GetMatchRewards = 18,
	EPlayFabRequestType__RegisterGameServer = 19,
	EPlayFabRequestType__RefreshGameServer = 20,
	EPlayFabRequestType__UpdateGameServer = 21,
	EPlayFabRequestType__StartMatch = 22,
	EPlayFabRequestType__EndMatch  = 23,
	EPlayFabRequestType__AbortMatch = 24,
	EPlayFabRequestType__ApplyRestriction = 25,
	EPlayFabRequestType__ClearRestriction = 26,
	EPlayFabRequestType__ReportTimeLeft = 27,
	EPlayFabRequestType__ReportMatchEnded = 28,
	EPlayFabRequestType__UpdateMatchmakingBlacklist = 29,
	EPlayFabRequestType__EPlayFabRequestType_MAX = 30
};


// Enum Mordhau.EPlayFabRestriction
enum class EPlayFabRestriction : uint8_t
{
	EPlayFabRestriction__Ban       = 0,
	EPlayFabRestriction__Mute      = 1,
	EPlayFabRestriction__EPlayFabRestriction_MAX = 2
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Mordhau.PrePhysTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FPrePhysTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Mordhau.FloatAndVector
// 0x0010
struct FFloatAndVector
{
	float                                              Float;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Vector;                                                   // 0x0004(0x000C) (IsPlainOldData)
};

// ScriptStruct Mordhau.NetDamage
// 0x0020
struct FNetDamage
{
	unsigned char                                      PackedType;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bone;                                                     // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      PackedFlags;                                              // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	struct FVector_NetQuantize                         Point;                                                    // 0x0004(0x000C)
	TWeakObjectPtr<class AActor>                       DamageSource;                                             // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       DamageAgent;                                              // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Mordhau.WoundMaterialData
// 0x0038
struct FWoundMaterialData
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (IsPlainOldData)
	struct FVector                                     UpVector;                                                 // 0x000C(0x000C) (IsPlainOldData)
	struct FVector                                     RightVector;                                              // 0x0018(0x000C) (IsPlainOldData)
	struct FVector                                     ForwardVector;                                            // 0x0024(0x000C) (IsPlainOldData)
	struct FVector2D                                   WoundType;                                                // 0x0030(0x0008) (IsPlainOldData)
};

// ScriptStruct Mordhau.SphericalLimbBounds
// 0x0038
struct FSphericalLimbBounds
{
	struct FName                                       StartSocket;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       EndSocket;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FName                                       AttachSocket;                                             // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BoneStartCached;                                          // 0x0020(0x000C) (IsPlainOldData)
	struct FVector                                     BoneEndCached;                                            // 0x002C(0x000C) (IsPlainOldData)
};

// ScriptStruct Mordhau.PatternInfo
// 0x0010
struct FPatternInfo
{
	class UTexture2D*                                  Texture;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHasColor1;                                               // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHasColor2;                                               // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHasColor3;                                               // 0x000A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x000B(0x0005) MISSED OFFSET
};

// ScriptStruct Mordhau.WoundInfo
// 0x0014
struct FWoundInfo
{
	struct FVector2D                                   WoundType;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     WoundSize;                                                // 0x0008(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct Mordhau.AttackInfo
// 0x0120
struct FAttackInfo
{
	bool                                               bCanCombo;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForcesRearingFromFront;                                  // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bNoFlinch;                                                // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	float                                              FlinchSpeedModifier;                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlinchDurationModifier;                                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Windup;                                                   // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ComboWindupIncrease;                                      // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Release;                                                  // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FeintLockOut;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FeintCost;                                                // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ChamberFeintCost;                                         // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ChamberCost;                                              // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MorphCost;                                                // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   TurnCaps;                                                 // 0x002C(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	class UCurveFloat*                                 TurnCapCurve;                                             // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 HitEffectIKWeightCurve;                                   // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HitEffectSpeedUpExponent;                                 // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StaminaDrain;                                             // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExtraStaminaDrainVsHeldBlock;                             // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	TArray<float>                                      Damage;                                                   // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      HeadBonus;                                                // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      LegBonus;                                                 // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              WoodDamage;                                               // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StoneDamage;                                              // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bStopOnHit;                                               // 0x0090(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDrainAllStamOnBlock;                                     // 0x0091(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRagdollOnBlock;                                          // 0x0092(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0093(0x0001) MISSED OFFSET
	float                                              ChipDamagePercentageOnBlock;                              // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWillClashWhenParried;                                    // 0x0098(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRagdollOnHit;                                            // 0x0099(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDismountsHorseRider;                                     // 0x009A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDismountsLadderUser;                                     // 0x009B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MissStaminaCost;                                          // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HitStaminaReward;                                         // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MissRecovery;                                             // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HitKockbackFactor;                                        // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FollowAttackDirectionFactor;                              // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FWoundInfo>                          WoundInfoArray;                                           // 0x00B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UClass*                                      HitShake;                                                 // 0x00C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      HitStopShake;                                             // 0x00C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x50];                                      // 0x00D0(0x0050) UNKNOWN PROPERTY: SetProperty Mordhau.AttackInfo.IgnoreBones
};

// ScriptStruct Mordhau.SpineSpaceAdditive
// 0x0084
struct FSpineSpaceAdditive
{
	struct FRotator                                    head;                                                     // 0x0000(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    Neck;                                                     // 0x000C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    Spine1;                                                   // 0x0018(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    LeftShoulder;                                             // 0x0024(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    LeftArm;                                                  // 0x0030(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    LeftForearm;                                              // 0x003C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    LeftHand;                                                 // 0x0048(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    RightShoulder;                                            // 0x0054(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    RightArm;                                                 // 0x0060(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    RightForearm;                                             // 0x006C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    RightHand;                                                // 0x0078(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct Mordhau.WearableCustomization
// 0x0040
struct FWearableCustomization
{
	int                                                ID;                                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<unsigned char>                              Colors;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<unsigned char>                              Team1Colors;                                              // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<unsigned char>                              Team2Colors;                                              // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      Pattern;                                                  // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct Mordhau.EquipmentCustomization
// 0x0030
struct FEquipmentCustomization
{
	int                                                ID;                                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<unsigned char>                              Colors;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<unsigned char>                              Parts;                                                    // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      Pattern;                                                  // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Skin;                                                     // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x002A(0x0006) MISSED OFFSET
};

// ScriptStruct Mordhau.CharacterGearCustomization
// 0x0020
struct FCharacterGearCustomization
{
	TArray<struct FWearableCustomization>              Wearables;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FEquipmentCustomization>             Equipment;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Mordhau.AppearanceCustomization
// 0x0028
struct FAppearanceCustomization
{
	int                                                Emblem;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<unsigned char>                              EmblemColors;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      MetalRoughnessScale;                                      // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      MetalTint;                                                // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Age;                                                      // 0x001A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Voice;                                                    // 0x001B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      VoicePitch;                                               // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsFemale;                                                // 0x001D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Fat;                                                      // 0x001E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Skinny;                                                   // 0x001F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Strong;                                                   // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      SkinColor;                                                // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Face;                                                     // 0x0022(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      EyeColor;                                                 // 0x0023(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      HairColor;                                                // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Hair;                                                     // 0x0025(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      FacialHair;                                               // 0x0026(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Eyebrows;                                                 // 0x0027(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Mordhau.FaceCustomization
// 0x0030
struct FFaceCustomization
{
	TArray<uint16_t>                                   Translate;                                                // 0x0000(0x0010) (ZeroConstructor)
	TArray<uint16_t>                                   Rotate;                                                   // 0x0010(0x0010) (ZeroConstructor)
	TArray<uint16_t>                                   Scale;                                                    // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct Mordhau.SkillsCustomization
// 0x0004
struct FSkillsCustomization
{
	uint32_t                                           Perks;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Mordhau.CharacterProfile
// 0x00A0
struct FCharacterProfile
{
	struct FText                                       Name;                                                     // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FCharacterGearCustomization                 GearCustomization;                                        // 0x0018(0x0020) (Edit, BlueprintVisible)
	struct FAppearanceCustomization                    AppearanceCustomization;                                  // 0x0038(0x0028) (Edit, BlueprintVisible)
	struct FFaceCustomization                          FaceCustomization;                                        // 0x0060(0x0030) (Edit, BlueprintVisible)
	struct FSkillsCustomization                        SkillsCustomization;                                      // 0x0090(0x0004) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	struct FSteamID                                    SteamID;                                                  // 0x0098(0x0008) (Transient)
};

// ScriptStruct Mordhau.VehicleTransitionInfo
// 0x0010
struct FVehicleTransitionInfo
{
	class UAnimSequence*                               Animation;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlendTime;                                                // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Mordhau.FootGroundingLimb
// 0x01F0
struct FFootGroundingLimb
{
	struct FName                                       TraceEndBone;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       TraceStartBone;                                           // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       FootstepBone;                                             // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TraceDistance;                                            // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   UpValueLimits;                                            // 0x001C(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FHitResult                                  TraceResult;                                              // 0x0028(0x0088) (BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0x114];                                     // 0x00B0(0x0114) MISSED OFFSET
	float                                              RootSpaceImpactZ;                                         // 0x01C4(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RotationOffset;                                           // 0x01C8(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     InternalTranslationOffset;                                // 0x01D4(0x000C) (IsPlainOldData)
	struct FVector                                     TranslationOffset;                                        // 0x01E0(0x000C) (BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x01EC(0x0004) MISSED OFFSET
};

// ScriptStruct Mordhau.RepArrayShortWithVersion
// 0x0018
struct FRepArrayShortWithVersion
{
	TArray<uint16_t>                                   Array;                                                    // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      Version;                                                  // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct Mordhau.RepArrayAppearanceWithVersion
// 0x0030
struct FRepArrayAppearanceWithVersion
{
	struct FAppearanceCustomization                    Appearance;                                               // 0x0000(0x0028)
	unsigned char                                      Version;                                                  // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct Mordhau.RepArraySkillsWithVersion
// 0x0008
struct FRepArraySkillsWithVersion
{
	struct FSkillsCustomization                        Skills;                                                   // 0x0000(0x0004)
	unsigned char                                      Version;                                                  // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct Mordhau.RepArrayByteWithVersion
// 0x0018
struct FRepArrayByteWithVersion
{
	TArray<unsigned char>                              Array;                                                    // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      Version;                                                  // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct Mordhau.CharPhysics
// 0x0024
struct FCharPhysics
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x000C(0x000C) (IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0018(0x000C) (IsPlainOldData)
};

// ScriptStruct Mordhau.CharMove
// 0x000C
struct FCharMove
{
	struct FVector                                     TargetLocation;                                           // 0x0000(0x000C) (IsPlainOldData)
};

// ScriptStruct Mordhau.ECSDuringPhysicsTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FECSDuringPhysicsTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Mordhau.ECSPostPhysicsTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FECSPostPhysicsTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Mordhau.StatBase
// 0x0010
struct FStatBase
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EStatSetBy                                         SetBy;                                                    // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct Mordhau.StatInt
// 0x0008 (0x0018 - 0x0010)
struct FStatInt : public FStatBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct Mordhau.EquipmentPartEntry
// 0x0028
struct FEquipmentPartEntry
{
	struct FText                                       PartName;                                                 // 0x0000(0x0018) (Edit, BlueprintVisible)
	TArray<class UClass*>                              Parts;                                                    // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Mordhau.EquipmentSkinEntry
// 0x0048
struct FEquipmentSkinEntry
{
	struct FText                                       SkinName;                                                 // 0x0000(0x0018) (Edit, BlueprintVisible)
	TArray<struct FEquipmentPartEntry>                 PartTypes;                                                // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<unsigned char>                              ColorTables;                                              // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FPatternInfo>                        Patterns;                                                 // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Mordhau.EmoteEntry
// 0x0020
struct FEmoteEntry
{
	struct FText                                       EmoteName;                                                // 0x0000(0x0018) (Edit, BlueprintVisible)
	class UClass*                                      EmoteMotion;                                              // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Mordhau.EquipmentHolsterInfo
// 0x0060
struct FEquipmentHolsterInfo
{
	struct FName                                       HolsterSocket;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHidden;                                                  // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHiddenIn1P;                                              // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	class UAnimMontage*                                DrawAnimation;                                            // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                DrawAnimation1P;                                          // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseIKDrawing;                                            // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0021(0x000F) MISSED OFFSET
	struct FTransform                                  Offset;                                                   // 0x0030(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct Mordhau.ActorSetAndArray
// 0x0060
struct FActorSetAndArray
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) UNKNOWN PROPERTY: SetProperty Mordhau.ActorSetAndArray.Set
	TArray<class AActor*>                              Array;                                                    // 0x0050(0x0010) (ZeroConstructor)
};

// ScriptStruct Mordhau.PlayerCountArray
// 0x0010
struct FPlayerCountArray
{
	TArray<int>                                        Values;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Mordhau.HorseGearInfo
// 0x0018
struct FHorseGearInfo
{
	float                                              MaxSpeed;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxAcceleration;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowJump;                                               // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanRiderRegenHealth;                                     // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanRiderRegenStamina;                                    // 0x000A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanHorseRegen;                                           // 0x000B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UClass*                                      HeadBobShake;                                             // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Mordhau.HighMidLowSpineSpaceAdditive
// 0x018C
struct FHighMidLowSpineSpaceAdditive
{
	struct FSpineSpaceAdditive                         High;                                                     // 0x0000(0x0084) (Edit, BlueprintVisible)
	struct FSpineSpaceAdditive                         Mid;                                                      // 0x0084(0x0084) (Edit, BlueprintVisible)
	struct FSpineSpaceAdditive                         Low;                                                      // 0x0108(0x0084) (Edit, BlueprintVisible)
};

// ScriptStruct Mordhau.AnglingSpineSpaceAdditive
// 0x0318
struct FAnglingSpineSpaceAdditive
{
	struct FHighMidLowSpineSpaceAdditive               Right;                                                    // 0x0000(0x018C) (Edit, BlueprintVisible)
	struct FHighMidLowSpineSpaceAdditive               Left;                                                     // 0x018C(0x018C) (Edit, BlueprintVisible)
};

// ScriptStruct Mordhau.PerceptionInfo
// 0x0008
struct FPerceptionInfo
{
	bool                                               bSight;                                                   // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHearing;                                                 // 0x0001(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDamage;                                                  // 0x0002(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Team;                                                     // 0x0003(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UpdateTime;                                               // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Mordhau.FacialBoneSetup
// 0x0088
struct FFacialBoneSetup
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       SelectionBoneOverride;                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSymmetrical;                                           // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              SelectionBiasFactor;                                      // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               ChildBones;                                               // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Level;                                                    // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SymmetryTwinBoneIndex;                                    // 0x002C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       SymmetryTwinBoneName;                                     // 0x0030(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BoneIndex;                                                // 0x0038(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   TranslateXRange;                                          // 0x003C(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   TranslateYRange;                                          // 0x0044(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   TranslateZRange;                                          // 0x004C(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   ScaleXRange;                                              // 0x0054(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   ScaleYRange;                                              // 0x005C(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   ScaleZRange;                                              // 0x0064(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   RotateXRange;                                             // 0x006C(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   RotateYRange;                                             // 0x0074(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   RotateZRange;                                             // 0x007C(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
};

// ScriptStruct Mordhau.AnimNodePackedFaceCustomization
// 0x0020
struct FAnimNodePackedFaceCustomization
{
	TArray<struct FFacialBoneSetup>                    FaceCustomizationSetup;                                   // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FTransform>                          FaceCustomizationBonesTransforms;                         // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Mordhau.AnimNodePackedDismemberment
// 0x0010
struct FAnimNodePackedDismemberment
{
	TArray<int>                                        DismemberedBonesIndices;                                  // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Mordhau.DamageRecord
// 0x0010
struct FDamageRecord
{
	TWeakObjectPtr<class AController>                  Source;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Mordhau.NetBlock
// 0x0010
struct FNetBlock
{
	unsigned char                                      BlockedReason;                                            // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      BlockedMove;                                              // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      BlockType;                                                // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      BlockedAngle;                                             // 0x0003(0x0001) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       BlockingActor;                                            // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      EnsureReplication;                                        // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Mordhau.NetMotion
// 0x0006
struct FNetMotion
{
	unsigned char                                      ID;                                                       // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      MotionType;                                               // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      MotionParam0;                                             // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      MotionParam1;                                             // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      MotionParam2;                                             // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      MotionDynamicParam;                                       // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Mordhau.SessionSearchResult
// 0x01F8
struct FSessionSearchResult
{
	unsigned char                                      UnknownData00[0x1F8];                                     // 0x0000(0x01F8) MISSED OFFSET
};

// ScriptStruct Mordhau.ServerSearchResult
// 0x0000 (0x01F8 - 0x01F8)
struct FServerSearchResult : public FSessionSearchResult
{

};

// ScriptStruct Mordhau.PlayerProfile
// 0x00B0
struct FPlayerProfile
{
	int                                                Rank;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      RankDisplayType;                                          // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	int                                                Banner;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FCharacterProfile                           Character;                                                // 0x0010(0x00A0) (Edit, BlueprintVisible)
};

// ScriptStruct Mordhau.LobbySearchResult
// 0x0000 (0x01F8 - 0x01F8)
struct FLobbySearchResult : public FSessionSearchResult
{

};

// ScriptStruct Mordhau.ServerAddress
// 0x0008
struct FServerAddress
{
	uint32_t                                           IP;                                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           Port;                                                     // 0x0004(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
};

// ScriptStruct Mordhau.MapInfo
// 0x0020
struct FMapInfo
{
	struct FString                                     GameModeMapName;                                          // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UGameModeMetadata*                           GameModeMetadata;                                         // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMapMetadata*                                MapMetadata;                                              // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Mordhau.GameStateLastDemotableTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FGameStateLastDemotableTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Mordhau.GameStatePostPhysicsTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FGameStatePostPhysicsTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Mordhau.CapturePointGroup
// 0x0010
struct FCapturePointGroup
{
	TArray<class AControlPoint*>                       CapturePoints;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Mordhau.GroupSoundPlayer
// 0x0018
struct FGroupSoundPlayer
{
	TWeakObjectPtr<class UAudioComponent>              CurrentlyPlayingSound;                                    // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0008(0x000C) (BlueprintVisible, IsPlainOldData)
	int                                                Entries;                                                  // 0x0014(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Mordhau.GroupSoundEntry
// 0x0010
struct FGroupSoundEntry
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (IsPlainOldData)
	float                                              Time;                                                     // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Mordhau.GroupSoundGroup
// 0x0080
struct FGroupSoundGroup
{
	TArray<struct FGroupSoundPlayer>                   GroupSoundPlayers;                                        // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	TMap<class AActor*, struct FGroupSoundEntry>       SoundEntries;                                             // 0x0010(0x0050) (ZeroConstructor)
	int                                                SoundGroupsNum;                                           // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EntryMaxAge;                                              // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MinEntriesToPlaySound;                                    // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	class USoundCue*                                   SoundCue;                                                 // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeOutDuration;                                          // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SoundGroupMergeDistance;                                  // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Mordhau.DigitalActionKey
// 0x0020
struct FDigitalActionKey
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Mordhau.AnalogActionKey
// 0x0028
struct FAnalogActionKey
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct Mordhau.UnlockRecipe
// 0x0038
struct FUnlockRecipe
{
	struct FString                                     ItemId;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                RequiredGold;                                             // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RequiredXP;                                               // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             RequiredItems;                                            // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             UnlockedItems;                                            // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Mordhau.ItemStack
// 0x0010
struct FItemStack
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Mordhau.ServerStats
// 0x0018
struct FServerStats
{
	unsigned char                                      TargetTickRate;                                           // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      MinTickRate;                                              // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      MaxTickRate;                                              // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      AvgTickRate;                                              // 0x0003(0x0001) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           InBytesPerSecond;                                         // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           OutBytesPerSecond;                                        // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           ConfiguredInternetSpeed;                                  // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           NumPlayers;                                               // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           MaxPlayers;                                               // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Mordhau.ServerRestrictionInfo
// 0x0010
struct FServerRestrictionInfo
{
	bool                                               bIsBanned;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                BanDuration;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsMuted;                                                 // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                MuteDuration;                                             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Mordhau.PlayFabMatch
// 0x0060
struct FPlayFabMatch
{
	struct FString                                     ID;                                                       // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     ServerId;                                                 // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     GameMode;                                                 // 0x0020(0x0010) (ZeroConstructor)
	struct FString                                     Map;                                                      // 0x0030(0x0010) (ZeroConstructor)
	int                                                TopScore;                                                 // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AvgScore;                                                 // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Score;                                                    // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	int64_t                                            StartTimestamp;                                           // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            EndTimestamp;                                             // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Mordhau.DecalInfo
// 0x0018
struct FDecalInfo
{
	class UMaterialInterface*                          Material;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Size;                                                     // 0x0008(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Mordhau.ReplicatedProjectileInfo
// 0x0034
struct FReplicatedProjectileInfo
{
	struct FVector_NetQuantize                         Location;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible)
	struct FVector_NetQuantize                         Orientation;                                              // 0x000C(0x000C) (Edit, BlueprintVisible)
	struct FVector_NetQuantizeNormal                   HitNormal;                                                // 0x0018(0x000C) (Edit, BlueprintVisible)
	float                                              BounceForce;                                              // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       Creator;                                                  // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      HitSurface;                                               // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHasStopped;                                              // 0x0031(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHasHitWorld;                                             // 0x0032(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      HitCounter;                                               // 0x0033(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Mordhau.FindServerSessionsFilter
// 0x0040
struct FFindServerSessionsFilter
{
	bool                                               bIsNotFull;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHasPlayers;                                              // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsEmpty;                                                 // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsNotPasswordProtected;                                  // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsDevBuild;                                              // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsOfficial;                                              // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsMatchmaking;                                           // 0x0006(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAntiCheat                                         AntiCheat;                                                // 0x0007(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MinOpenSlots;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MinSlots;                                                 // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxSlots;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxPing;                                                  // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     ServerName;                                               // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     GameMode;                                                 // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	EServerRegion                                      Region;                                                   // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct Mordhau.FindLobbySessionsFilter
// 0x0028
struct FFindLobbySessionsFilter
{
	int                                                MinOpenSlots;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PreferredOpenSlots;                                       // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MMR;                                                      // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<struct FString>                             GameModes;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	EServerRegion                                      Region;                                                   // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct Mordhau.MordhauColorItemTable
// 0x0028
struct FMordhauColorItemTable
{
	struct FText                                       TableName;                                                // 0x0000(0x0018) (Edit, BlueprintVisible)
	TArray<class UClass*>                              Entries;                                                  // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Mordhau.Achievement
// 0x0010
struct FAchievement
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	EStatSetBy                                         SetBy;                                                    // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct Mordhau.StatFloat
// 0x0008 (0x0018 - 0x0010)
struct FStatFloat : public FStatBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct Mordhau.StatAvgRate
// 0x0000 (0x0018 - 0x0018)
struct FStatAvgRate : public FStatFloat
{

};

// ScriptStruct Mordhau.ProgressAchievementInt
// 0x0020 (0x0030 - 0x0010)
struct FProgressAchievementInt : public FAchievement
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0010(0x0020) MISSED OFFSET
};

// ScriptStruct Mordhau.ProgressAchievementFloat
// 0x0020 (0x0030 - 0x0010)
struct FProgressAchievementFloat : public FAchievement
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0010(0x0020) MISSED OFFSET
};

// ScriptStruct Mordhau.SoundMixInfo
// 0x0018
struct FSoundMixInfo
{
	class USoundMix*                                   SoundMix;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class USoundClass*>                         SoundClasses;                                             // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Mordhau.LeaderboardEntry
// 0x0030
struct FLeaderboardEntry
{
	struct FString                                     PlayerId;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Position;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MMR;                                                      // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSteamID                                    SteamID;                                                  // 0x0018(0x0008) (Edit, BlueprintVisible)
	struct FString                                     Name;                                                     // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Mordhau.MordhauDamageEvent
// 0x0018 (0x00C0 - 0x00A8)
struct FMordhauDamageEvent : public FPointDamageEvent
{
	EMordhauDamageType                                 Type;                                                     // 0x00A8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      SubType;                                                  // 0x00A9(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00AA(0x0002) MISSED OFFSET
	TWeakObjectPtr<class AActor>                       DamageSource;                                             // 0x00AC(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       DamageAgent;                                              // 0x00B4(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bWantsFlinchAnimation;                                    // 0x00BC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00BD(0x0003) MISSED OFFSET
};

// ScriptStruct Mordhau.AnimNode_AttackAngling
// 0x0190 (0x02C0 - 0x0130)
struct FAnimNode_AttackAngling : public FAnimNode_SkeletalControlBase
{
	struct FSpineSpaceAdditive                         SpineSpaceAdditivePose;                                   // 0x0130(0x0084) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01B4(0x0004) MISSED OFFSET
	struct FBoneReference                              head;                                                     // 0x01B8(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              Neck;                                                     // 0x01D0(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              Spine;                                                    // 0x01E8(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              LeftShoulder;                                             // 0x0200(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              LeftArm;                                                  // 0x0218(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              LeftForearm;                                              // 0x0230(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              LeftHand;                                                 // 0x0248(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              RightShoulder;                                            // 0x0260(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              RightArm;                                                 // 0x0278(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              RightForearm;                                             // 0x0290(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              RightHand;                                                // 0x02A8(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct Mordhau.AnimNode_FaceCustomization
// 0x0020 (0x0150 - 0x0130)
struct FAnimNode_FaceCustomization : public FAnimNode_SkeletalControlBase
{
	struct FAnimNodePackedFaceCustomization            FaceCustomization;                                        // 0x0130(0x0020) (Edit, BlueprintVisible)
};

// ScriptStruct Mordhau.AnimNode_FastUMAJiggle
// 0x0250 (0x0380 - 0x0130)
struct FAnimNode_FastUMAJiggle : public FAnimNode_SkeletalControlBase
{
	struct FVector                                     BreastsOffset;                                            // 0x0130(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     LowerBackBellyOffset;                                     // 0x013C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     SpineOffset;                                              // 0x0148(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     LeftArmOffset;                                            // 0x0154(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     RightArmOffset;                                           // 0x0160(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     LeftLegOffset;                                            // 0x016C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     RightLegOffset;                                           // 0x0178(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0184(0x0004) MISSED OFFSET
	struct FBoneReference                              LowerBackBelly;                                           // 0x0188(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              LowerBackAdjust;                                          // 0x01A0(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              SpineAdjust;                                              // 0x01B8(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              RightOuterBreast;                                         // 0x01D0(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              RightInnerBreast;                                         // 0x01E8(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              LeftOuterBreast;                                          // 0x0200(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              LeftInnerBreast;                                          // 0x0218(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              LeftForearmTwistAdjust;                                   // 0x0230(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              LeftForearmAdjust;                                        // 0x0248(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              LeftArmAdjust;                                            // 0x0260(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              LeftShoulderAdjust;                                       // 0x0278(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              LeftTrapezius;                                            // 0x0290(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              RightForearmTwistAdjust;                                  // 0x02A8(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              RightForearmAdjust;                                       // 0x02C0(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              RightArmAdjust;                                           // 0x02D8(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              RightShoulderAdjust;                                      // 0x02F0(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              RightTrapezius;                                           // 0x0308(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              LeftLegAdjust;                                            // 0x0320(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              LeftUpLegAdjust;                                          // 0x0338(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              RightLegAdjust;                                           // 0x0350(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              RightUpLegAdjust;                                         // 0x0368(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct Mordhau.AnimNode_Dismemberment
// 0x0010 (0x0140 - 0x0130)
struct FAnimNode_Dismemberment : public FAnimNode_SkeletalControlBase
{
	struct FAnimNodePackedDismemberment                Dismemberment;                                            // 0x0130(0x0010) (Edit, BlueprintVisible)
};

// ScriptStruct Mordhau.AnimNode_MordhauSpringBone
// 0x0088 (0x01B8 - 0x0130)
struct FAnimNode_MordhauSpringBone : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              bone;                                                     // 0x0130(0x0018) (Edit, BlueprintVisible)
	bool                                               bIsRotationSpring;                                        // 0x0148(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsRotationFlipped;                                       // 0x0149(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x014A(0x0002) MISSED OFFSET
	struct FVector                                     BoneOffset;                                               // 0x014C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bIsBoneOffsetInComponentSpace;                            // 0x0158(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0159(0x0003) MISSED OFFSET
	float                                              BoneOffsetRotationProjection;                             // 0x015C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpringStiffness;                                          // 0x0160(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpringDamping;                                            // 0x0164(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpringMass;                                               // 0x0168(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDisplacement;                                          // 0x016C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseDisplacementLimits;                                   // 0x0170(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0171(0x0003) MISSED OFFSET
	struct FVector                                     DisplacementLimitsMin;                                    // 0x0174(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     DisplacementLimitsMax;                                    // 0x0180(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              TeleportThreshold;                                        // 0x018C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BoneLocation;                                             // 0x0190(0x000C) (IsPlainOldData)
	struct FVectorSpringState                          SpringState;                                              // 0x019C(0x0018)
	float                                              DeltaTime;                                                // 0x01B4(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Mordhau.AnimNode_RotateAroundPivot
// 0x0038 (0x0168 - 0x0130)
struct FAnimNode_RotateAroundPivot : public FAnimNode_SkeletalControlBase
{
	TEnumAsByte<EBoneControlSpace>                     Space;                                                    // 0x0130(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0131(0x0007) MISSED OFFSET
	struct FBoneReference                              BoneToModify;                                             // 0x0138(0x0018) (Edit, BlueprintVisible)
	struct FRotator                                    Rotation;                                                 // 0x0150(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     Pivot;                                                    // 0x015C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct Mordhau.AnimNode_SpeedWarping
// 0x00F0 (0x0220 - 0x0130)
struct FAnimNode_SpeedWarping : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              Hips;                                                     // 0x0130(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              LeftLegTarget;                                            // 0x0148(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              LeftUpLeg;                                                // 0x0160(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              LeftFoot;                                                 // 0x0178(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              RightLegTarget;                                           // 0x0190(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              RightUpLeg;                                               // 0x01A8(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              RightFoot;                                                // 0x01C0(0x0018) (Edit, BlueprintVisible)
	float                                              Speed;                                                    // 0x01D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TotalLegLength;                                           // 0x01DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Axis;                                                     // 0x01E0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FFloatSpringState                           SpringState;                                              // 0x01EC(0x0008)
	float                                              SpringStiffness;                                          // 0x01F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpringDamping;                                            // 0x01F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpringMass;                                               // 0x01FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   HipsOffsetRemapIn;                                        // 0x0200(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   HipsOffsetRemapOut;                                       // 0x0208(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   HipsOffsetClamp;                                          // 0x0210(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              HipsZOffset;                                              // 0x0218(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // 0x021C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Mordhau.AnimNode_SpineSpreader
// 0x0080 (0x01B0 - 0x0130)
struct FAnimNode_SpineSpreader : public FAnimNode_SkeletalControlBase
{
	float                                              SpreadPercentage;                                         // 0x0130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0134(0x0004) MISSED OFFSET
	struct FBoneReference                              Spine1;                                                   // 0x0138(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              RightShoulder;                                            // 0x0150(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              RightArm;                                                 // 0x0168(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              RightForearm;                                             // 0x0180(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              RightHand;                                                // 0x0198(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct Mordhau.AnimNode_TwoBoneIKOffset
// 0x0030 (0x02B0 - 0x0280)
struct FAnimNode_TwoBoneIKOffset : public FAnimNode_TwoBoneIK
{
	struct FVector                                     OffsetVector;                                             // 0x0280(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     RotateEndBonePivot;                                       // 0x028C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    RotateEndBoneOffset;                                      // 0x0298(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bUseParentZLimit;                                         // 0x02A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02A5(0x0003) MISSED OFFSET
	float                                              ParentZLimitOffset;                                       // 0x02A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEffectorLocationIsOffset;                                // 0x02AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02AD(0x0003) MISSED OFFSET
};

// ScriptStruct Mordhau.AnimNode_WeightShift
// 0x0068 (0x0198 - 0x0130)
struct FAnimNode_WeightShift : public FAnimNode_SkeletalControlBase
{
	TEnumAsByte<EBoneControlSpace>                     Space;                                                    // 0x0130(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0131(0x0007) MISSED OFFSET
	struct FBoneReference                              BoneToModify;                                             // 0x0138(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              Bone1ToMaintain;                                          // 0x0150(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              Bone2ToMaintain;                                          // 0x0168(0x0018) (Edit, BlueprintVisible)
	struct FRotator                                    Rotation;                                                 // 0x0180(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     Pivot;                                                    // 0x018C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct Mordhau.CharState
// 0x0001
struct FCharState
{
	unsigned char                                      State;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Mordhau.CharLook
// 0x000C
struct FCharLook
{
	unsigned char                                      FacingMode;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector2D                                   Offset2D;                                                 // 0x0004(0x0008) (IsPlainOldData)
};

// ScriptStruct Mordhau.CharacterInventory
// 0x0020
struct FCharacterInventory
{
	class AMordhauEquipment*                           RightHand;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AMordhauEquipment*                           LeftHand;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class AMordhauEquipment*>                   Equipment;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Mordhau.RichPresence
// 0x0028
struct FRichPresence
{
	ERichPresenceStatus                                Status;                                                   // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     GameMode;                                                 // 0x0008(0x0010) (ZeroConstructor)
	struct FString                                     MapName;                                                  // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct Mordhau.ResponseData
// 0x0010
struct FResponseData
{
	struct FString                                     item_json;                                                // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Mordhau.InventoryData
// 0x0010
struct FInventoryData
{
	struct FResponseData                               response;                                                 // 0x0000(0x0010)
};

// ScriptStruct Mordhau.ItemData
// 0x0090
struct FItemData
{
	struct FString                                     accountid;                                                // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     ItemId;                                                   // 0x0010(0x0010) (ZeroConstructor)
	int                                                quantity;                                                 // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FString                                     originalitemid;                                           // 0x0028(0x0010) (ZeroConstructor)
	struct FString                                     ItemDefID;                                                // 0x0038(0x0010) (ZeroConstructor)
	int                                                appid;                                                    // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FString                                     acquired;                                                 // 0x0050(0x0010) (ZeroConstructor)
	struct FString                                     State;                                                    // 0x0060(0x0010) (ZeroConstructor)
	struct FString                                     Origin;                                                   // 0x0070(0x0010) (ZeroConstructor)
	struct FString                                     state_changed_timestamp;                                  // 0x0080(0x0010) (ZeroConstructor)
};

// ScriptStruct Mordhau.InventoryOperation
// 0x0010
struct FInventoryOperation
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Mordhau.ConsolidateItemsOperation
// 0x0018 (0x0028 - 0x0010)
struct FConsolidateItemsOperation : public FInventoryOperation
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0010(0x0018) MISSED OFFSET
};

// ScriptStruct Mordhau.SplitItemsOperation
// 0x0010 (0x0020 - 0x0010)
struct FSplitItemsOperation : public FInventoryOperation
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct Mordhau.DropItemsOperation
// 0x0010 (0x0020 - 0x0010)
struct FDropItemsOperation : public FInventoryOperation
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct Mordhau.DeserializeItemsOperation
// 0x0020 (0x0030 - 0x0010)
struct FDeserializeItemsOperation : public FInventoryOperation
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0010(0x0020) MISSED OFFSET
};

// ScriptStruct Mordhau.SerializeItemsOperation
// 0x0000 (0x0010 - 0x0010)
struct FSerializeItemsOperation : public FInventoryOperation
{

};

// ScriptStruct Mordhau.UnlockItemOperation
// 0x0008 (0x0018 - 0x0010)
struct FUnlockItemOperation : public FInventoryOperation
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct Mordhau.AddItemsOperation
// 0x0010 (0x0020 - 0x0010)
struct FAddItemsOperation : public FInventoryOperation
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct Mordhau.AddItemOperation
// 0x0008 (0x0018 - 0x0010)
struct FAddItemOperation : public FInventoryOperation
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct Mordhau.RefreshItemsOperation
// 0x0000 (0x0010 - 0x0010)
struct FRefreshItemsOperation : public FInventoryOperation
{

};

// ScriptStruct Mordhau.VisibilityList
// 0x0050
struct FVisibilityList
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) UNKNOWN PROPERTY: SetProperty Mordhau.VisibilityList.Set
};

// ScriptStruct Mordhau.VisibilityMap
// 0x0058
struct FVisibilityMap
{
	TMap<uint64_t, struct FVisibilityList>             Map;                                                      // 0x0000(0x0050) (ZeroConstructor)
	float                                              CellSize;                                                 // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct Mordhau.ColorTableEntry
// 0x0028
struct FColorTableEntry
{
	struct FText                                       EntryName;                                                // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FLinearColor                                Color;                                                    // 0x0018(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct Mordhau.MordhauColorTable
// 0x0028
struct FMordhauColorTable
{
	struct FText                                       TableName;                                                // 0x0000(0x0018) (Edit, BlueprintVisible)
	TArray<struct FColorTableEntry>                    Entries;                                                  // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Mordhau.CachedAvatars
// 0x0018
struct FCachedAvatars
{
	TWeakObjectPtr<class UTexture2D>                   Small;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UTexture2D>                   Medium;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UTexture2D>                   Large;                                                    // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Mordhau.SoundClassInfo
// 0x0018
struct FSoundClassInfo
{
	class USoundClass*                                 SoundClass;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class USoundMix*>                           SoundMixes;                                               // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Mordhau.PermutationValuePair
// 0x0008
struct FPermutationValuePair
{
	int                                                Permutation;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Mordhau.PlayFabRequest
// 0x0020
struct FPlayFabRequest
{
	EPlayFabRequestType                                Type;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                MaxRetries;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RetryDelay;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Retries;                                                  // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int64_t                                            Timestamp;                                                // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasPriority;                                             // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct Mordhau.UpdateMatchmakingBlacklistPlayFabRequest
// 0x0010 (0x0030 - 0x0020)
struct FUpdateMatchmakingBlacklistPlayFabRequest : public FPlayFabRequest
{
	TArray<struct FString>                             MatchmakingBlacklist;                                     // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct Mordhau.ReportMatchEndedPlayFabRequest
// 0x0028 (0x0048 - 0x0020)
struct FReportMatchEndedPlayFabRequest : public FPlayFabRequest
{
	struct FString                                     Region;                                                   // 0x0020(0x0010) (ZeroConstructor)
	struct FString                                     Map;                                                      // 0x0030(0x0010) (ZeroConstructor)
	int                                                PlayerCount;                                              // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Duration;                                                 // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Mordhau.ReportTimeLeftPlayFabRequest
// 0x0028 (0x0048 - 0x0020)
struct FReportTimeLeftPlayFabRequest : public FPlayFabRequest
{
	struct FString                                     Map;                                                      // 0x0020(0x0010) (ZeroConstructor)
	int                                                PlayerCount;                                              // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	TArray<float>                                      TimeLeft;                                                 // 0x0038(0x0010) (ZeroConstructor)
};

// ScriptStruct Mordhau.ClearRestrictionPlayFabRequest
// 0x0010 (0x0030 - 0x0020)
struct FClearRestrictionPlayFabRequest : public FPlayFabRequest
{
	struct FSteamID                                    SteamID;                                                  // 0x0020(0x0008)
	EPlayFabRestriction                                Restriction;                                              // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct Mordhau.ApplyRestrictionPlayFabRequest
// 0x0008 (0x0038 - 0x0030)
struct FApplyRestrictionPlayFabRequest : public FClearRestrictionPlayFabRequest
{
	int64_t                                            EndTimestamp;                                             // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Mordhau.EndMatchPlayFabRequest
// 0x0070 (0x0090 - 0x0020)
struct FEndMatchPlayFabRequest : public FPlayFabRequest
{
	struct FString                                     PlayerId;                                                 // 0x0020(0x0010) (ZeroConstructor)
	struct FPlayFabMatch                               Match;                                                    // 0x0030(0x0060)
};

// ScriptStruct Mordhau.StartMatchPlayFabRequest
// 0x0070 (0x0090 - 0x0020)
struct FStartMatchPlayFabRequest : public FPlayFabRequest
{
	struct FString                                     PlayerId;                                                 // 0x0020(0x0010) (ZeroConstructor)
	struct FPlayFabMatch                               Match;                                                    // 0x0030(0x0060)
};

// ScriptStruct Mordhau.UpdateGameServerPlayFabRequest
// 0x0098 (0x00B8 - 0x0020)
struct FUpdateGameServerPlayFabRequest : public FPlayFabRequest
{
	struct FString                                     ServerName;                                               // 0x0020(0x0010) (ZeroConstructor)
	struct FString                                     MapName;                                                  // 0x0030(0x0010) (ZeroConstructor)
	struct FString                                     GameMode;                                                 // 0x0040(0x0010) (ZeroConstructor)
	struct FString                                     RegionName;                                               // 0x0050(0x0010) (ZeroConstructor)
	int                                                BeaconListenPort;                                         // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	struct FString                                     Mods;                                                     // 0x0068(0x0010) (ZeroConstructor)
	struct FString                                     Pings;                                                    // 0x0078(0x0010) (ZeroConstructor)
	struct FString                                     Location;                                                 // 0x0088(0x0010) (ZeroConstructor)
	struct FString                                     DockerHost;                                               // 0x0098(0x0010) (ZeroConstructor)
	struct FString                                     DockerServer;                                             // 0x00A8(0x0010) (ZeroConstructor)
};

// ScriptStruct Mordhau.RefreshGameServerPlayFabRequest
// 0x0000 (0x0020 - 0x0020)
struct FRefreshGameServerPlayFabRequest : public FPlayFabRequest
{

};

// ScriptStruct Mordhau.AbortMatchPlayFabRequest
// 0x0020 (0x0040 - 0x0020)
struct FAbortMatchPlayFabRequest : public FPlayFabRequest
{
	struct FString                                     ServerId;                                                 // 0x0020(0x0010) (ZeroConstructor)
	struct FString                                     MatchID;                                                  // 0x0030(0x0010) (ZeroConstructor)
};

// ScriptStruct Mordhau.GetMatchRewardsPlayFabRequest
// 0x0020 (0x0040 - 0x0020)
struct FGetMatchRewardsPlayFabRequest : public FPlayFabRequest
{
	struct FString                                     ServerId;                                                 // 0x0020(0x0010) (ZeroConstructor)
	struct FString                                     MatchID;                                                  // 0x0030(0x0010) (ZeroConstructor)
};

// ScriptStruct Mordhau.RegisterGameServerPlayFabRequest
// 0x0010 (0x00C8 - 0x00B8)
struct FRegisterGameServerPlayFabRequest : public FUpdateGameServerPlayFabRequest
{
	struct FString                                     PublicIP;                                                 // 0x00B8(0x0010) (ZeroConstructor)
};

// ScriptStruct Mordhau.GetLeaderboardPlayFabRequest
// 0x0010 (0x0030 - 0x0020)
struct FGetLeaderboardPlayFabRequest : public FPlayFabRequest
{
	struct FString                                     LeaderboardName;                                          // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct Mordhau.GetServerInfoPlayFabRequest
// 0x0010 (0x0030 - 0x0020)
struct FGetServerInfoPlayFabRequest : public FPlayFabRequest
{
	struct FString                                     ServerId;                                                 // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct Mordhau.GrantItemsPlayFabRequest
// 0x0010 (0x0030 - 0x0020)
struct FGrantItemsPlayFabRequest : public FPlayFabRequest
{
	TArray<struct FString>                             ItemIds;                                                  // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct Mordhau.UnlockItemsPlayFabRequest
// 0x0010 (0x0030 - 0x0020)
struct FUnlockItemsPlayFabRequest : public FPlayFabRequest
{
	TArray<struct FString>                             ItemIds;                                                  // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct Mordhau.ImportInventoryPlayFabRequest
// 0x0000 (0x0020 - 0x0020)
struct FImportInventoryPlayFabRequest : public FPlayFabRequest
{

};

// ScriptStruct Mordhau.GetPlayFabIDFromSteamIDPlayFabRequest
// 0x0008 (0x0028 - 0x0020)
struct FGetPlayFabIDFromSteamIDPlayFabRequest : public FPlayFabRequest
{
	struct FSteamID                                    SteamID;                                                  // 0x0020(0x0008)
};

// ScriptStruct Mordhau.ImportOfficialServerStatsPlayFabRequest
// 0x0000 (0x0020 - 0x0020)
struct FImportOfficialServerStatsPlayFabRequest : public FPlayFabRequest
{

};

// ScriptStruct Mordhau.GetCatalogItemsPlayFabRequest
// 0x0000 (0x0020 - 0x0020)
struct FGetCatalogItemsPlayFabRequest : public FPlayFabRequest
{

};

// ScriptStruct Mordhau.PlayFabStat
// 0x0018
struct FPlayFabStat
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (ZeroConstructor)
	int                                                Value;                                                    // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Version;                                                  // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Mordhau.UpdatePlayerStatsPlayFabRequest
// 0x0060 (0x0080 - 0x0020)
struct FUpdatePlayerStatsPlayFabRequest : public FPlayFabRequest
{
	struct FString                                     PlayerId;                                                 // 0x0020(0x0010) (ZeroConstructor)
	TMap<struct FString, struct FPlayFabStat>          Stats;                                                    // 0x0030(0x0050) (ZeroConstructor)
};

// ScriptStruct Mordhau.GetPlayerStatsPlayFabRequest
// 0x0010 (0x0030 - 0x0020)
struct FGetPlayerStatsPlayFabRequest : public FPlayFabRequest
{
	struct FString                                     PlayerId;                                                 // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct Mordhau.GetPlayerInventoryPlayFabRequest
// 0x0010 (0x0030 - 0x0020)
struct FGetPlayerInventoryPlayFabRequest : public FPlayFabRequest
{
	struct FString                                     PlayerId;                                                 // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct Mordhau.GetPlayerDataPlayFabRequest
// 0x0010 (0x0030 - 0x0020)
struct FGetPlayerDataPlayFabRequest : public FPlayFabRequest
{
	struct FString                                     PlayerId;                                                 // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct Mordhau.GetTitleInternalDataPlayFabRequest
// 0x0000 (0x0020 - 0x0020)
struct FGetTitleInternalDataPlayFabRequest : public FPlayFabRequest
{

};

// ScriptStruct Mordhau.UpdateTimeDriftPlayFabRequest
// 0x0000 (0x0020 - 0x0020)
struct FUpdateTimeDriftPlayFabRequest : public FPlayFabRequest
{

};

// ScriptStruct Mordhau.GetTitleDataPlayFabRequest
// 0x0000 (0x0020 - 0x0020)
struct FGetTitleDataPlayFabRequest : public FPlayFabRequest
{

};

// ScriptStruct Mordhau.LoginWithSteamPlayFabRequest
// 0x0010 (0x0030 - 0x0020)
struct FLoginWithSteamPlayFabRequest : public FPlayFabRequest
{
	struct FString                                     AuthTicket;                                               // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct Mordhau.Reward
// 0x0018
struct FReward
{
	struct FString                                     PlayerId;                                                 // 0x0000(0x0010) (ZeroConstructor)
	int                                                Gold;                                                     // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                XP;                                                       // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Mordhau.LoginWithCustomIDPlayFabRequest
// 0x0010 (0x0030 - 0x0020)
struct FLoginWithCustomIDPlayFabRequest : public FPlayFabRequest
{
	struct FString                                     CustomId;                                                 // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct Mordhau.PlayFabServerInfo
// 0x0020
struct FPlayFabServerInfo
{
	struct FString                                     ServerId;                                                 // 0x0000(0x0010) (ZeroConstructor)
	TArray<int>                                        Mods;                                                     // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Mordhau.PlayFabStats
// 0x0050
struct FPlayFabStats
{
	TMap<struct FString, struct FPlayFabStat>          Stats;                                                    // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct Mordhau.PlayFabPlayerData
// 0x0038
struct FPlayFabPlayerData
{
	bool                                               bImportedInventory;                                       // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bImportedOfficialServerStats;                             // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	int64_t                                            BanEndTime;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            MuteEndTime;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FPlayFabMatch>                       Matches;                                                  // 0x0018(0x0010) (ZeroConstructor)
	TArray<struct FString>                             MatchmakingBlacklist;                                     // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct Mordhau.PlayFabTitleInternalData
// 0x00B0
struct FPlayFabTitleInternalData
{
	TArray<uint64_t>                                   Admins;                                                   // 0x0000(0x0010) (ZeroConstructor)
	TMap<uint64_t, int64_t>                            BannedPlayers;                                            // 0x0010(0x0050) (ZeroConstructor)
	TMap<uint64_t, int64_t>                            MutedPlayers;                                             // 0x0060(0x0050) (ZeroConstructor)
};

// ScriptStruct Mordhau.PlayFabRewardSettings
// 0x0018
struct FPlayFabRewardSettings
{
	float                                              XPPlaytimeFactor;                                         // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              XPAvgScoreFactor;                                         // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              XPTopScoreFactor;                                         // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              GoldPlaytimeFactor;                                       // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              GoldAvgScoreFactor;                                       // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              GoldTopScoreFactor;                                       // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Mordhau.PlayFabTitleData
// 0x0038
struct FPlayFabTitleData
{
	TArray<struct FString>                             BlacklistedServers;                                       // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FString>                             ProfaneWords;                                             // 0x0010(0x0010) (ZeroConstructor)
	struct FPlayFabRewardSettings                      RewardSettings;                                           // 0x0020(0x0018)
};

// ScriptStruct Mordhau.SerializedItems
// 0x0020
struct FSerializedItems
{
	uint32_t                                           BufferSize;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     Data;                                                     // 0x0008(0x0010) (ZeroConstructor)
	uint32_t                                           Timestamp;                                                // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
