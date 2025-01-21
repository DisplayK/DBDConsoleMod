#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "GameplayModifierFunctionLibraryStatusEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UGameplayModifierFunctionLibraryStatusEffect : public UStatusEffect
{
	GENERATED_BODY()

public:
	UGameplayModifierFunctionLibraryStatusEffect();
};

FORCEINLINE uint32 GetTypeHash(const UGameplayModifierFunctionLibraryStatusEffect) { return 0; }
