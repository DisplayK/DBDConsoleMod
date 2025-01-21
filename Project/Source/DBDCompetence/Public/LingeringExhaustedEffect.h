#pragma once

#include "CoreMinimal.h"
#include "ExhaustedEffect.h"
#include "GameplayTagContainer.h"
#include "LingeringExhaustedEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API ULingeringExhaustedEffect : public UExhaustedEffect
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	FGameplayTag startExhaustedEventTag;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTag endExhaustedEventTag;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTag _state;

public:
	ULingeringExhaustedEffect();
};

FORCEINLINE uint32 GetTypeHash(const ULingeringExhaustedEffect) { return 0; }
