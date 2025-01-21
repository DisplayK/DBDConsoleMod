#pragma once

#include "CoreMinimal.h"
#include "GameplayModifierCondition.h"
#include "IsMaximumInfected.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UIsMaximumInfected : public UGameplayModifierCondition
{
	GENERATED_BODY()

public:
	UIsMaximumInfected();
};

FORCEINLINE uint32 GetTypeHash(const UIsMaximumInfected) { return 0; }
