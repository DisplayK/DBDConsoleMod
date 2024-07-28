#pragma once

#include "CoreMinimal.h"
#include "EQueueingState.generated.h"

UENUM(BlueprintType)
enum class EQueueingState : uint8
{
	None,
	Queueing,
	MatchCreated,
	MatchOpened,
	WaitingForTransactions,
	Complete,
};
