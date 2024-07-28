#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "Addon_Frenzy_ColdDirt.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THELEGION_API UAddon_Frenzy_ColdDirt : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TMap<int32, int32> _mapTokenPerChainedHit;

	UPROPERTY(EditDefaultsOnly)
	int32 _tokensToReachForActivation;

	UPROPERTY(EditDefaultsOnly)
	float _movementSpeedMultiplierModifier;

public:
	UAddon_Frenzy_ColdDirt();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_Frenzy_ColdDirt) { return 0; }
