#pragma once

#include "CoreMinimal.h"
#include "EPartyBusyReason.generated.h"

UENUM(BlueprintType)
enum class EPartyBusyReason : uint8
{
	None,
	CreatingParty,
	LeavingParty,
	SyncingParty,
	DestroyingParty,
	InvitingPlayer,
	AcceptingPartyInvite,
	RejectingPartyInvite,
	CancelingPartyInvite,
	RequestingJoinParty,
	ValidatingInvite,
	AcceptingRequestJoinParty,
	RejectingRequestJoinParty,
	CancelingRequestJoinParty,
	AcceptingPlatformInvite,
	KickingPlayerFromParty,
	LeavingPartyFromKick,
	CreatingPartyPlatformSession,
	LeavingCrossplatformPlatformSession,
	WaitingForPlatformSessionInfo,
	ProcessingPlatformSession,
};
