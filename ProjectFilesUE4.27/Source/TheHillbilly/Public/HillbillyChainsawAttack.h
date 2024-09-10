#pragma once

#include "CoreMinimal.h"
#include "PounceAttack.h"
#include "GameplayTagContainer.h"
#include "HillbillyChainsawAttack.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THEHILLBILLY_API UHillbillyChainsawAttack : public UPounceAttack
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	FGameplayTag _chainsawHitGameEventTag;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTag _chainsawAttemptGameEventTag;

public:
	UHillbillyChainsawAttack();
};

FORCEINLINE uint32 GetTypeHash(const UHillbillyChainsawAttack) { return 0; }
