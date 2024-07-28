#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "TricksterChainedThrowsAddon.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UTricksterChainedThrowsAddon : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	bool _resetOnEnteringFlurryInteraction;

	UPROPERTY(EditDefaultsOnly)
	float _lacerationPenaltyRangeThreshold;

	UPROPERTY(EditDefaultsOnly)
	float _closeRangeLacerationPenalty;

	UPROPERTY(EditDefaultsOnly)
	float _maximumMultiplier;

public:
	UTricksterChainedThrowsAddon();
};

FORCEINLINE uint32 GetTypeHash(const UTricksterChainedThrowsAddon) { return 0; }
