#pragma once

#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "PendingInstantAction.generated.h"

class UBaseReversibleInstantActionHandler;

USTRUCT()
struct FPendingInstantAction
{
	GENERATED_BODY()

public:
	UPROPERTY()
	UBaseReversibleInstantActionHandler* Handler;

	UPROPERTY()
	FTimerHandle TimerHandle;

public:
	REVERSIBLEACTIONSYSTEM_API FPendingInstantAction();
};

FORCEINLINE uint32 GetTypeHash(const FPendingInstantAction) { return 0; }
