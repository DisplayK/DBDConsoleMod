#pragma once

#include "CoreMinimal.h"
#include "GameplayModifierCondition.h"
#include "IsOwningSurvivorAuraRevealedToKiller.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UIsOwningSurvivorAuraRevealedToKiller : public UGameplayModifierCondition
{
	GENERATED_BODY()

public:
	UIsOwningSurvivorAuraRevealedToKiller();
};

FORCEINLINE uint32 GetTypeHash(const UIsOwningSurvivorAuraRevealedToKiller) { return 0; }
