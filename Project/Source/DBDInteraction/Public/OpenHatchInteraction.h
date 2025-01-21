#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "AnimationMontageDescriptor.h"
#include "OpenHatchInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UOpenHatchInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float SnapToEscapeLocationDuration;

	UPROPERTY(EditDefaultsOnly)
	FAnimationMontageDescriptor InteractionStoppedMontage;

	UPROPERTY(EditDefaultsOnly)
	FAnimationMontageDescriptor InteractionSucceedMontage;

public:
	UOpenHatchInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UOpenHatchInteraction) { return 0; }
