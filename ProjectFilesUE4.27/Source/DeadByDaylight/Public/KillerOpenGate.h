#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "AnimationMontageDescriptor.h"
#include "KillerOpenGate.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UKillerOpenGate : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	FAnimationMontageDescriptor _openGateMontage;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void UpdateSwitch() const;

public:
	UKillerOpenGate();
};

FORCEINLINE uint32 GetTypeHash(const UKillerOpenGate) { return 0; }
