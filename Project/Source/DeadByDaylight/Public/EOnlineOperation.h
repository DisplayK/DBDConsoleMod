#pragma once

#include "CoreMinimal.h"
#include "EOnlineOperation.generated.h"

UENUM(BlueprintType)
enum class EOnlineOperation : uint8
{
	None,
	HostGame,
	EndingSession,
	DestroyingSession,
	PreparingJoinGame,
	JoinGame,
	JoinCancelled,
	OnlineCheck,
	CancellingMatchmaking,
};
