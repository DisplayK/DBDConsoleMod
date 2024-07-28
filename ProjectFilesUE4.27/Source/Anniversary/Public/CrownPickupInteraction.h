#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "GameplayTagContainer.h"
#include "CrownPickupInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class ANNIVERSARY_API UCrownPickupInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	FName _attachToSocketName;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTag _pickupScoreEvent;

private:
	UPROPERTY(Transient)
	bool _isInteractionChargeComplete;

public:
	UCrownPickupInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UCrownPickupInteraction) { return 0; }
