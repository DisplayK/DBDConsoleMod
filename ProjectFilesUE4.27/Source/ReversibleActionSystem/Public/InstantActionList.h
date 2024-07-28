#pragma once

#include "CoreMinimal.h"
#include "InstantActionList.generated.h"

class UBaseReversibleInstantActionHandler;

USTRUCT()
struct FInstantActionList
{
	GENERATED_BODY()

public:
	UPROPERTY()
	TArray<UBaseReversibleInstantActionHandler*> Actions;

public:
	REVERSIBLEACTIONSYSTEM_API FInstantActionList();
};

FORCEINLINE uint32 GetTypeHash(const FInstantActionList) { return 0; }
