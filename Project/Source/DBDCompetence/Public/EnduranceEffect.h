#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "Templates/SubclassOf.h"
#include "EnduranceEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UEnduranceEffect : public UStatusEffect
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _enduranceHighlightEffectClass;

public:
	UEnduranceEffect();
};

FORCEINLINE uint32 GetTypeHash(const UEnduranceEffect) { return 0; }
