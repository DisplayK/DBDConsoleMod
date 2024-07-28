#pragma once

#include "CoreMinimal.h"
#include "PendingInstantAction.h"
#include "PendingInstantActionList.generated.h"

USTRUCT()
struct FPendingInstantActionList
{
	GENERATED_BODY()

public:
	UPROPERTY()
	TArray<FPendingInstantAction> Actions;

public:
	REVERSIBLEACTIONSYSTEM_API FPendingInstantActionList();
};

FORCEINLINE uint32 GetTypeHash(const FPendingInstantActionList) { return 0; }
