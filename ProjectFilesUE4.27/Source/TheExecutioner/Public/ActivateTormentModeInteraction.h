#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "ActivateTormentModeInteraction.generated.h"

class ATormentMode;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UActivateTormentModeInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void SetTormentMode(ATormentMode* tormentModeComponent);

public:
	UActivateTormentModeInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UActivateTormentModeInteraction) { return 0; }
