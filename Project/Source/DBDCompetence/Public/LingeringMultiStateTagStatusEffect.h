#pragma once

#include "CoreMinimal.h"
#include "BaseLingeringStatusEffect.h"
#include "GameplayTagContainer.h"
#include "EMultiLingeringStateTagStrategy.h"
#include "LingeringMultiStateTagStatusEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API ULingeringMultiStateTagStatusEffect : public UBaseLingeringStatusEffect
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	TArray<FGameplayTag> _ownerStateTag;

	UPROPERTY(EditDefaultsOnly)
	EMultiLingeringStateTagStrategy _strategy;

public:
	ULingeringMultiStateTagStatusEffect();
};

FORCEINLINE uint32 GetTypeHash(const ULingeringMultiStateTagStatusEffect) { return 0; }
