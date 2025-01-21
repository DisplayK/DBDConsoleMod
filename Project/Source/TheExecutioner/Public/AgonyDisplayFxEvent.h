#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EProtagonist.h"
#include "AgonyDisplayFxEvent.generated.h"

USTRUCT()
struct FAgonyDisplayFxEvent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FGameplayTag GameEvent;

	UPROPERTY(EditAnywhere)
	EProtagonist Protagonist;

public:
	THEEXECUTIONER_API FAgonyDisplayFxEvent();
};

FORCEINLINE uint32 GetTypeHash(const FAgonyDisplayFxEvent) { return 0; }
