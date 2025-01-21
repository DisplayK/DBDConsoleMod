#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "UnstableRiftInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UUnstableRiftInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _heightOffsetForOrbs;

public:
	UUnstableRiftInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UUnstableRiftInteraction) { return 0; }
