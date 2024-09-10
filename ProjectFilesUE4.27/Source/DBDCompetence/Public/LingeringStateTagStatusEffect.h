#pragma once

#include "CoreMinimal.h"
#include "BaseLingeringStatusEffect.h"
#include "GameplayTagContainer.h"
#include "LingeringStateTagStatusEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API ULingeringStateTagStatusEffect : public UBaseLingeringStatusEffect
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	FGameplayTag _ownerStateTag;

public:
	ULingeringStateTagStatusEffect();
};

FORCEINLINE uint32 GetTypeHash(const ULingeringStateTagStatusEffect) { return 0; }
