#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SimpleSpawnEffectsOnAllSurvivorsAddonParams.generated.h"

class UStatusEffect;

USTRUCT(BlueprintType)
struct FSimpleSpawnEffectsOnAllSurvivorsAddonParams
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	FName _statusEffectIdDeprecated;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _effectClass;

	UPROPERTY(EditDefaultsOnly)
	float _customParam;

public:
	DBDCOMPETENCE_API FSimpleSpawnEffectsOnAllSurvivorsAddonParams();
};

FORCEINLINE uint32 GetTypeHash(const FSimpleSpawnEffectsOnAllSurvivorsAddonParams) { return 0; }
