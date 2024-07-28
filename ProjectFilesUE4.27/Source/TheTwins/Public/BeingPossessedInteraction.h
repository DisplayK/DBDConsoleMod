#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "TunableStat.h"
#include "BeingPossessedInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UBeingPossessedInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FTunableStat _beingPossessedMaxCharge;

private:
	UFUNCTION()
	void OnLevelReadyToPlay();

public:
	UBeingPossessedInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UBeingPossessedInteraction) { return 0; }
