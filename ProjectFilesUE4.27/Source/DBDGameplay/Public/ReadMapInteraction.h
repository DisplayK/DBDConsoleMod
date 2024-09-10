#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "ReadMapInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UReadMapInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadWrite)
	bool _chargeCompleted;

public:
	UReadMapInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UReadMapInteraction) { return 0; }
