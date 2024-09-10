#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "SetDreamSnareInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class USetDreamSnareInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float MinPitch;

	UPROPERTY(EditDefaultsOnly)
	float MinPlacementDistance;

	UPROPERTY(EditDefaultsOnly)
	float MaxPlacementDistance;

public:
	UFUNCTION(BlueprintPure)
	bool HasCancelledDreamSnare() const;

	UFUNCTION(BlueprintPure)
	float GetTrapDistanceFromControlRotation() const;

public:
	USetDreamSnareInteraction();
};

FORCEINLINE uint32 GetTypeHash(const USetDreamSnareInteraction) { return 0; }
