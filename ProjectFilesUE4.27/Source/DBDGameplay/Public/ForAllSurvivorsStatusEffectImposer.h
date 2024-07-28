#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ForAllSurvivorsStatusEffectImposer.generated.h"

class UStatusEffect;

USTRUCT(BlueprintType)
struct FForAllSurvivorsStatusEffectImposer
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _effectClass;

public:
	DBDGAMEPLAY_API FForAllSurvivorsStatusEffectImposer();
};

FORCEINLINE uint32 GetTypeHash(const FForAllSurvivorsStatusEffectImposer) { return 0; }
