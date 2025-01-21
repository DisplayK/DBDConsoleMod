#pragma once

#include "CoreMinimal.h"
#include "EJoinSessionFailureType.generated.h"

UENUM(BlueprintType)
enum class EJoinSessionFailureType : uint8
{
	None,
	JoiningAlreadyStartedGame,
	JoiningPrivateGame,
	JoiningAlreadyFullGame,
	JoiningInvitation,
	JoiningFailedOnDisconnect,
	JoiningHostUnreachable,
	JoiningIncompatibleServer,
	MatchmakingInfoExpired,
};
