#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameEventBloodOrbDropParams.generated.h"

USTRUCT()
struct FGameEventBloodOrbDropParams
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	FGameplayTag GameEvent;

	UPROPERTY(EditDefaultsOnly)
	float ImpulseFactor;

public:
	THEONI_API FGameEventBloodOrbDropParams();
};

FORCEINLINE uint32 GetTypeHash(const FGameEventBloodOrbDropParams) { return 0; }
