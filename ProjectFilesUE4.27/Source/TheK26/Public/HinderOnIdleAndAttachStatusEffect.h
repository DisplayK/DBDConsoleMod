#pragma once

#include "CoreMinimal.h"
#include "LingeringStateTagStatusEffect.h"
#include "GameplayTagContainer.h"
#include "HinderOnIdleAndAttachStatusEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UHinderOnIdleAndAttachStatusEffect : public ULingeringStateTagStatusEffect
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	FGameplayTag _onCrowAttachStateTag;

public:
	UHinderOnIdleAndAttachStatusEffect();
};

FORCEINLINE uint32 GetTypeHash(const UHinderOnIdleAndAttachStatusEffect) { return 0; }
