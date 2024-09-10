#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "HealInteraction.generated.h"

class ACamperPlayer;
class AActor;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DBDINTERACTION_API UHealInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

protected:
	UFUNCTION(BlueprintPure)
	ACamperPlayer* GetTargetSurvivor() const;

	UFUNCTION(BlueprintImplementableEvent)
	void Authority_OnChargeApplied(float individualChargeAmount, float totalChargeAmount, AActor* chargeInstigator, bool wasCoop, float deltaTime);

public:
	UHealInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UHealInteraction) { return 0; }
