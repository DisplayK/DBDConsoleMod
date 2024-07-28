#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "StatProperty.h"
#include "BlinkInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class THENURSE_API UBlinkInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FStatProperty _chargeTime;

public:
	UBlinkInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UBlinkInteraction) { return 0; }
